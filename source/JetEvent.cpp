#include "JetEvent.h"
#include "Constants.h"
#include "Variables.h"

#include "TROOT.h"
#include "TChain.h"
#include "TMath.h"

#include <iostream>

using namespace std;

class JetEvent;

JetEvent::JetEvent( Variables* ch )
{
// elastic QED compton scattering
	qedcompton = kFALSE;
	bool eeseparation = kFALSE;
	
// double eedeltaphi;
	if( ch -> Sincand > 1 && ch -> Siprob[ 0 ] > MINPROB && ch -> Siprob[ 1 ] > MINPROB )
	{
		if( ch -> Siph[ 0 ] > ch -> Siph[ 1 ] )
		{
			if( ( 2.*TMath::Pi() - ch -> Siph[ 0 ] + ch -> Siph[ 1 ] ) > ( ch -> Siph[ 0 ] - ch -> Siph[ 1 ] ) ) eedeltaphi = ch -> Siph[ 0 ] - ch -> Siph[ 1 ];
			else eedeltaphi = 2.*TMath::Pi() - ch -> Siph[ 0 ] + ch -> Siph[ 1 ];
		}
		else
		{
			if( ( 2.*TMath::Pi() - ch -> Siph[ 1 ] + ch -> Siph[ 0 ] ) > ( ch -> Siph[ 1 ] - ch -> Siph[ 0 ] ) ) eedeltaphi = ch -> Siph[ 1 ] - ch -> Siph[0];
			else eedeltaphi = 2.*TMath::Pi() - ch -> Siph[ 1 ] + ch -> Siph[ 0 ];
		}
		if( TMath::Abs( eedeltaphi ) > MINEEDELTAPHI ) eeseparation = kTRUE;
		if( TMath::Abs( eedeltaphi ) > TMath::Pi() ) cout << "problem with eedeltaphi in qed compton cut" << endl;
		if( eeseparation && ch -> Sipt[ 1 ] > 0. && ch -> Sicalene[ 1 ] > 0. && ch -> Sipt[ 0 ] > 0. && ch -> Sicalene[ 0 ] > 0. && ch -> Cal_e > 0. )
		{
			if ( ( ch -> Sipt[ 0 ]/ch -> Sipt[ 1 ] > EERATMIN && ch -> Sipt[ 0 ]/ch -> Sipt[ 1 ] < EERATMAX ) && ( ch -> Cal_e - ( ch -> Sicalene[0] + ch -> Sicalene[1] ) < EEDIFCALMAX ) ) qedcompton = kTRUE;
		}
	}

	LVscattered_ele = new TLorentzVector;
//if Sinistra candidate is in acceptance region than redefine its angular variables with those from associated track
	isinacc=kFALSE;
	if ( ch -> Sith[ 0 ] > CTDACCMIN && ch -> Sith[ 0 ] < CTDACCMAX && ch -> Sincand > 0 )	isinacc=kTRUE;
	for( int i = 0; i < ch -> Sincand; i++ )
	{
		if ( ch -> Sith[ i ] > CTDACCMIN && ch -> Sith[ i ] < CTDACCMAX )
		{
			if( TMath::Abs( ch -> Sitrkph[ i ] ) < 2.*TMath::Pi() )
			{
				  if( ch -> Sitrkph[ i ] > TMath::Pi() ) ch -> Siph[ i ] = -2.*TMath::Pi() + ch -> Sitrkph[ i ];
				  else if( ch -> Sitrkph[ i ] < -1.*TMath::Pi() ) ch -> Siph[ i ] = 2.*TMath::Pi() + ch -> Sitrkph[ i ];
				  else ch -> Siph[ i ] = ch -> Sitrkph[ i ];
			}
		      
			if( TMath::Abs( ch -> Sitrkth[ i ] ) < 2.*TMath::Pi() ) 
				{
				  if( ch -> Sitrkth[ i ] > TMath::Pi() ) ch -> Sith[ i ] = ch -> Sitrkth[ i ] - 2.*TMath::Pi();
				  else if( ch -> Sitrkth[ i ] < -1.*TMath::Pi()) ch -> Sith[ i ] = ch -> Sitrkth[ i ] + 2.*TMath::Pi();
				  else ch -> Sith[ i ] = ch -> Sitrkth[ i ];
				}
			for( Int_t j = 0; j < 3; j++ ) ch -> Sipos[ i ][ j ] = ch -> Sitrkpos[ i ][ j ];
		}
	}
	
	rebeam = TMath::Sqrt( ch -> Sipos[ 0 ][ 0 ]*ch -> Sipos[ 0 ][ 0 ] + ch -> Sipos[ 0 ][ 1 ]*ch -> Sipos[ 0 ][ 1 ] );
	double ele_x = 	ch -> Sitrkpos[ 0 ][ 0 ] - ch -> Xvtx;
	double ele_y = 	ch -> Sitrkpos[ 0 ][ 1 ] - ch -> Yvtx;
	double ele_z = 	ch -> Sitrkpos[ 0 ][ 2 ] - ch -> Zvtx;
	double ele_r = 	TMath::Sqrt( ele_x*ele_x + ele_y*ele_y + ele_z*ele_z );
	LVscattered_ele -> SetPxPyPzE( ch -> Siecorr[ 0 ][ 2 ]*ele_x/ele_r, 
				       ch -> Siecorr[ 0 ][ 2 ]*ele_y/ele_r, 
				       ch -> Siecorr[ 0 ][ 2 ]*ele_z/ele_r, 
				       ch -> Siecorr[ 0 ][ 2 ] );
	empz_had = 	ch -> Siccempz[ 0 ];
	empz_ele = 	LVscattered_ele -> E() - LVscattered_ele -> Pz();
	empz_ev = 	empz_had + empz_ele;
	
// kinematic variables
	pt_had = 	TMath::Sqrt( ch -> Sicchmom[ 0 ][ 0 ]*ch -> Sicchmom[ 0 ][ 0 ] + ch -> Sicchmom[ 0 ][ 1 ]*ch -> Sicchmom[ 0 ][ 1 ]);
	theta_e = 	ch -> Sith[ 0 ];
	
	gamma_had = 	TMath::ACos( ( pt_had*pt_had - empz_had*empz_had )/( pt_had*pt_had + empz_had*empz_had ) );
	q2_da 	= 	4.*EE*EE*( TMath::Sin( gamma_had )*( 1. + TMath::Cos( theta_e ) ) )/( TMath::Sin( gamma_had ) + TMath::Sin( theta_e ) - TMath::Sin( theta_e + gamma_had ) );
	y_da 	= 	( TMath::Sin( theta_e ) )*( 1. - TMath::Cos( gamma_had ) )/( TMath::Sin( gamma_had ) + TMath::Sin( theta_e ) - TMath::Sin( gamma_had + theta_e ) );
	x_da 	= 	EE/EP*( TMath::Sin( gamma_had ) + TMath::Sin( theta_e ) + TMath::Sin( theta_e + gamma_had ) )/( TMath::Sin( gamma_had ) + TMath::Sin( theta_e ) - TMath::Sin( theta_e +gamma_had ) );
	e_sel_da = 	( 2.*EE*TMath::Sin( gamma_had ) )/( TMath::Sin( gamma_had ) + TMath::Sin( theta_e ) - TMath::Sin( theta_e + gamma_had ) );
	ptm = 0.;
	if ( ch -> Cc_et > 0. ) { ptm = ch -> Cc_pt/TMath::Sqrt( ch -> Cc_et ); }
	enefrac_ele = 0.;
	if( ( ch -> Sienin[ 0 ] + ch -> Siein[ 0 ] ) != 0.) { enefrac_ele = ch -> Sienin[ 0 ]/( ch -> Siein[ 0 ] + ch -> Sienin[ 0] ); }

// validity of QED corrections
	double eeda = q2_da/( 2.*EE*( 1. + TMath::Cos( ch -> Sith[ 0 ] ) ) );
	double emomda = sqrt( eeda*eeda - 0.000511*0.000511 );
	LVscattered_ele_da = new TLorentzVector;
	LVscattered_ele_da -> SetPxPyPzE(	emomda*TMath::Sin( ch -> Sith[ 0 ] )*TMath::Cos( ch -> Siph[ 0 ] ),
						emomda*TMath::Sin( ch -> Sith[ 0 ] )*TMath::Sin( ch -> Siph[ 0 ] ),
						emomda*TMath::Cos( ch -> Sith[ 0 ] ),
						eeda);
	TLorentzVector photon(    - LVscattered_ele_da -> Px(),
			            - LVscattered_ele_da -> Py(),
				-EE - LVscattered_ele_da -> Pz(),
				 EE - LVscattered_ele_da -> E());
	TLorentzVector proton( 0., 0., EP, EP );
	double pq_xbj = proton.E()*photon.E() - proton.Px()*photon.Px() - proton.Py()*photon.Py() - proton.Pz()*photon.Pz();
	x_bj = q2_da/( 2.*pq_xbj );
	
//HERA running periods	
	if( ch -> Runnr > MINERUN && ch -> Runnr < MAXERUN ) run_period = JetEvent::ele;
	if( ch -> Runnr > MINPRUN && ch -> Runnr < MAXPRUN ) run_period = JetEvent::pos;

// number of good tracks
	ngoodtracks = 0;
	double Trk_pt = 0.;
	for( Int_t i = 0; i < ch -> Trk_ntracks; i++ )
	{
		Trk_pt = TMath::Sqrt( ch -> Trk_px[ i ]*ch -> Trk_px[ i ] + ch -> Trk_py[ i ]*ch -> Trk_py[ i ] ); 
		if( Trk_pt > MINGOODTRKPT && (float) ch -> Trk_prim_vtx[ i ] 
						 	   && ( (float) ch -> Trk_layouter[ i ] >= MINLAYOUTER ) 
						 	   && ( (float) ch -> Trk_layinner[ i ] <= MINLAYINNER ) ) ngoodtracks++;
	}
	
	return;
}

JetEvent::~JetEvent()
{
	delete LVscattered_ele;
	delete LVscattered_ele_da;
}
