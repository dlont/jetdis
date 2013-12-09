#include "Jets_Hadr.h"
#include "Variables.h"
#include "Constants.h"
#include "JetUserInfo.h"
#include "JetSelectors.h"

#include "fastjet/ClusterSequence.hh"
#include "fastjet/Selector.hh"

#include "Dijets.h"

#include "TMath.h"
#include "TLorentzVector.h"

#include <iostream>
#include <vector>

using namespace std;
using namespace fastjet;

class JetUserInfo;

Jets_Hadr::Jets_Hadr() { ; }

Jets_Hadr::Jets_Hadr( Variables* ch, TLorentzVector* scattered_ele_true  )
{
	hadrons_lab = new TObjArray;
	hadrons_breit = new TObjArray;
	
	for( Int_t ihadr = 0; ihadr < ch -> Nfmckin; ihadr++ ) 
	{
		if ( ch -> Ppfmckin[ihadr][3] == 0. )continue;
		if ( ch -> Ppfmckin[ihadr][3] != ch -> Ppfmckin[ihadr][3] )continue;
		hadrons_lab -> Add( new TLorentzVector( ch -> Ppfmckin[ihadr][0],
							ch -> Ppfmckin[ihadr][1],
							ch -> Ppfmckin[ihadr][2],
							ch -> Ppfmckin[ihadr][3] ) );
	}
	if( hadrons_lab->GetEntries() > 0 ) Dijets::BreitBoost(*hadrons_lab, *hadrons_breit, -EE, EP, *scattered_ele_true, 1);
	for( Int_t ihadr = 0; ihadr < hadrons_breit -> GetEntries(); ihadr++ )
        {
        	Double_t px = ( static_cast<TLorentzVector*> ( hadrons_breit -> At( ihadr ) ) ) -> Px();
                Double_t py = ( static_cast<TLorentzVector*> ( hadrons_breit -> At( ihadr ) ) ) -> Py();
                Double_t pz = ( static_cast<TLorentzVector*> ( hadrons_breit -> At( ihadr ) ) ) -> Pz();
                Double_t e =  ( static_cast<TLorentzVector*> ( hadrons_breit -> At( ihadr ) ) ) -> E();
                Double_t massless_factor = e/( TMath::Sqrt( px*px + py*py + pz*pz ) );
                 
                ( static_cast<TLorentzVector*> ( hadrons_breit -> At( ihadr ) ) ) -> SetPxPyPzE( px*massless_factor,
                                                                                                   py*massless_factor,
                                                                                                   pz*massless_factor,
                                                                                                   e );
        }
	
	TIter it_breit( hadrons_breit );
	TIter it_lab( hadrons_lab );

	vector<PseudoJet> hadrons;
        while ( it_breit.Next() )
        {
                        PseudoJet p( (static_cast<TLorentzVector*> (*it_breit)) -> Px(),
                                     (static_cast<TLorentzVector*> (*it_breit)) -> Py(),
                                     (static_cast<TLorentzVector*> (*it_breit)) -> Pz(),
                                     (static_cast<TLorentzVector*> (*it_breit)) -> E() );
                        hadrons.push_back( p );
        }
	double rparameter = JETRADIUS;
	RecombinationScheme recomb_scheme = Et_scheme;
	JetDefinition jet_def( kt_algorithm, rparameter, recomb_scheme );

	// run the clustering, extract the jets
	ClusterSequence cluster_alg( hadrons, jet_def );
	vector<PseudoJet> allhadrjets = cluster_alg.inclusive_jets();
	float et_lab  = 0.;
	float eta_lab = 0.;
	float phi_lab = 0.;
	for( int ijet = 0; ijet < allhadrjets.size(); ijet++ )
	{
		et_lab  = Dijets::EtLab( allhadrjets[ ijet ], -EE, EP, *scattered_ele_true );
		eta_lab = Dijets::EtaLab( allhadrjets[ ijet ], -EE, EP, *scattered_ele_true );
		phi_lab = Dijets::PhiLab( allhadrjets[ ijet ], -EE, EP, *scattered_ele_true );
		allhadrjets[ ijet ].set_user_info( new JetUserInfo( et_lab, eta_lab, phi_lab ) );
	}
	Selector sel_jetkin_lab  = KinematicJetLabSelector( MINETTRUEJETLAB, MINETATRUEJETLAB, MAXETATRUEJETLAB );
	Selector::Selector jet_selector = /*fastjet::SelectorNHardest(3) * */sel_jetkin_lab;
	kt_jets_breit = sorted_by_pt(  allhadrjets  );
	hadr_kt_jets_breit = sorted_by_pt( jet_selector( allhadrjets ) ); 
}

Jets_Hadr::~Jets_Hadr()
{ 
	hadrons_lab -> SetOwner();
	hadrons_lab -> Clear();
	delete hadrons_lab;
	
	hadrons_breit -> SetOwner();
	hadrons_breit -> Clear();
	delete hadrons_breit;
}
