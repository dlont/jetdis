#include "EtCorrections.h"

#include <iostream>
#include <vector>

#include "TMath.h"

#include "tinyxml/tinyxml.h"
#include "tinyxml/tinystr.h"

#define FINE 1
#define BAD 0

using namespace std;

EtCorrections::EtCorrections( string fname ) : _filename(fname), is_OK(true)
{
	//cout << _filename << endl;
	TiXmlDocument doc( _filename.c_str() );
	if ( !doc.LoadFile() ) { 
		cerr << "Error in LoadSettingsFromFile:\tCan't parse " << _filename << endl;
		is_OK = false;
		return ;
	}

	TiXmlHandle hDoc( &doc );
	TiXmlElement* pElem;
	pElem = hDoc.FirstChildElement().Element();
	if ( !pElem ) {
		cerr << "Error in LoadSettingsFromFile:\t Wrong XML structure" << endl;
		is_OK = false;		
		return ;
	}

	TiXmlHandle hRoot( 0 );
	hRoot = TiXmlHandle( pElem );

	TiXmlElement* pEtaBinNode = hRoot.FirstChild("EtaBin").Element();
        for( pEtaBinNode; pEtaBinNode; pEtaBinNode = pEtaBinNode -> NextSiblingElement() )
        {
		double etamin, etamax;
        	pEtaBinNode->QueryDoubleAttribute("etamin", &etamin);
        	pEtaBinNode->QueryDoubleAttribute("etamax", &etamax);
		//cout << etamin << "\t" << etamax << endl;
		
		vector< vector <double> > etabindata;
		TiXmlHandle hEtBin( pEtaBinNode );
                TiXmlElement* pEtBinNode = hEtBin.FirstChild("EtBin").Element();
		for( pEtBinNode; pEtBinNode; pEtBinNode = pEtBinNode -> NextSiblingElement() )
        	{
			double etmin, etmax;
        		pEtBinNode->QueryDoubleAttribute("etmin", &etmin);
        		pEtBinNode->QueryDoubleAttribute("etmax", &etmax);
			//cout << etmin << "\t" << etmax << endl;

			double a, b, c;
			TiXmlHandle hEtaEtBin( pEtBinNode );
			TiXmlElement* pCoefficientsNode = hEtaEtBin.FirstChild("Coefficients").Element();
			pCoefficientsNode->QueryDoubleAttribute("a",&a);
			pCoefficientsNode->QueryDoubleAttribute("b",&b);
			pCoefficientsNode->QueryDoubleAttribute("c",&c);
			//cout << "\t" << a << "\t" << b << "\t" << c << endl;
			
			vector< double > etaetbincoefs;
			etaetbincoefs . push_back( etamin );
			etaetbincoefs . push_back( etamax );
			etaetbincoefs . push_back( etmin );
			etaetbincoefs . push_back( etmax );
			etaetbincoefs . push_back( a );
			etaetbincoefs . push_back( b );
			etaetbincoefs . push_back( c );
			etabindata . push_back( etaetbincoefs );
		}
		fCoefficients.push_back( etabindata );	
        }

	return;	
}

int EtCorrections::GetABC( double et, double eta, double &a, double &b, double &c ) const
{
	int status = BAD;
	for ( unsigned int ietabin = 0; ietabin < fCoefficients.size(); ietabin++ )
	{
		vector< vector< double > > etaetbincoefs = fCoefficients.at(ietabin);
		if( eta > ( etaetbincoefs.at(0).at(0) ) && eta <= ( etaetbincoefs.at(0).at(1) ) )
		{
			for ( unsigned int ietbin = 0; ietbin < etaetbincoefs.size(); ietbin++ )
        		{
				if( et > ( etaetbincoefs.at(ietbin).at(2) ) && et <= ( etaetbincoefs.at(ietbin).at(3) ) )
               			{
					a = etaetbincoefs.at(ietbin).at(4);
					b = etaetbincoefs.at(ietbin).at(5);
					c = etaetbincoefs.at(ietbin).at(6);
					//cout << a << "\t" << b << "\t" << c << endl;
					status = FINE;
					break;
				}
			}
		}
	}
	
	return status;
}

//! Solves quadratic equation
vector< double > EtCorrections::SolveQuadratic( double a, double b, double c) const
{
        //Solutions
        vector< double > X(2, 0.);              //initialise with two doubles equal 0.

	if( fabs( a ) > 0. ) 
	{
	        //The equation has the form
	        // a*x^2 + b*x + c = 0
	        double disc2 =  b*b - 4.*a*c ;
	        if( disc2 < 0. )
	        {
	                cout << "ACHTUNG! disc2 < 0: " << disc2 << endl;
       	        	return X;
        	}
        	double disc = TMath::Sqrt( disc2 );
       		double denom = 2.*a;
       		double num1 = -b + disc;
        	double num2 = -b - disc;

        	X[0] = num1 / denom;		//bigger root
        	X[1] = num2 / denom;		//lower root
	}
	else 
	{
		//Degenerate case, when a = 0.
		//The linear equation has the form
		// b*x + c = 0

		X[0] = -c/b;
		X[1] = -c/b;
	}

        return X;
}

double EtCorrections::CorrectEt( double etcal_old, double eta_cal ) const
{
	double a = 0., b = 0., c = 0.;
	if( GetABC( etcal_old, eta_cal, a, b, c ) != FINE ) 
	{
		//cerr << "can't get a,b,c for: " << eta_cal << endl;
		return etcal_old;
	}
	double etcal_new = SolveQuadratic( a, b, ( c - etcal_old ) ).at(0);	//bigger root
	if( etcal_new <= 0. ) cerr << "ACHTUNG! solution <= 0: " << etcal_new << endl;
	
	return etcal_new;
}

