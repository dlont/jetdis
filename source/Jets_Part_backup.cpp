#include "Jets_Part.h"
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

Jets_Part::Jets_Part() { ; }

Jets_Part::Jets_Part( Variables* ch, TLorentzVector* scattered_ele_true  )
{
	partons_lab = new TObjArray;
	partons_breit = new TObjArray;
	
	for( Int_t ipart = 0; ipart < ch -> Nppart; ipart++ ) 
	{
		partons_lab -> Add( new TLorentzVector( ch -> Ppart[ipart][0],
							ch -> Ppart[ipart][1],
							ch -> Ppart[ipart][2],
							ch -> Ppart[ipart][3] ) );
	}
	if( partons_lab->GetEntries() > 0 ) Dijets::BreitBoost(*partons_lab, *partons_breit, -EE, EP, *scattered_ele_true, 1);
	for( Int_t ipart = 0; ipart < partons_breit -> GetEntries(); ipart++ )
        {
        	Double_t px = ( static_cast<TLorentzVector*> ( partons_breit -> At( ipart ) ) ) -> Px();
                Double_t py = ( static_cast<TLorentzVector*> ( partons_breit -> At( ipart ) ) ) -> Py();
                Double_t pz = ( static_cast<TLorentzVector*> ( partons_breit -> At( ipart ) ) ) -> Pz();
                Double_t e =  ( static_cast<TLorentzVector*> ( partons_breit -> At( ipart ) ) ) -> E();
                Double_t massless_factor = e/( TMath::Sqrt( px*px + py*py + pz*pz ) );
                 
                ( static_cast<TLorentzVector*> ( partons_breit -> At( ipart ) ) ) -> SetPxPyPzE( px*massless_factor,
                                                                                                   py*massless_factor,
                                                                                                   pz*massless_factor,
                                                                                                   e );
        }
	
	TIter it_breit( partons_breit );
	TIter it_lab( partons_lab );

	vector<PseudoJet> partons;
        while ( it_breit.Next() )
        {
                        PseudoJet p( (static_cast<TLorentzVector*> (*it_breit)) -> Px(),
                                     (static_cast<TLorentzVector*> (*it_breit)) -> Py(),
                                     (static_cast<TLorentzVector*> (*it_breit)) -> Pz(),
                                     (static_cast<TLorentzVector*> (*it_breit)) -> E() );
                        partons.push_back( p );
        }
	double rparameter = JETRADIUS;
	RecombinationScheme recomb_scheme = Et_scheme;
	JetDefinition jet_def( kt_algorithm, rparameter, recomb_scheme );

	// run the clustering, extract the jets
	ClusterSequence cluster_alg( partons, jet_def );
	vector<PseudoJet> allpartjets = cluster_alg.inclusive_jets();
	float et_lab  = 0.;
	float eta_lab = 0.;
	float phi_lab = 0.;
	for( int ijet = 0; ijet < allpartjets.size(); ijet++ )
	{
		et_lab  = Dijets::EtLab( allpartjets[ ijet ], -EE, EP, *scattered_ele_true );
		eta_lab = Dijets::EtaLab( allpartjets[ ijet ], -EE, EP, *scattered_ele_true );
		phi_lab = Dijets::PhiLab( allpartjets[ ijet ], -EE, EP, *scattered_ele_true );
		allpartjets[ ijet ].set_user_info( new JetUserInfo( et_lab, eta_lab, phi_lab ) );
	}
	Selector sel_jetkin_lab  = KinematicJetLabSelector( MINETTRUEJETLAB, MINETATRUEJETLAB, MAXETATRUEJETLAB );
	Selector::Selector jet_selector = /*fastjet::SelectorNHardest(3) * */sel_jetkin_lab;
	kt_jets_breit = sorted_by_pt(  allpartjets  );
	part_kt_jets_breit = sorted_by_pt( jet_selector( allpartjets ) ); 
}

Jets_Part::~Jets_Part()
{ 
	partons_lab -> SetOwner();
	partons_lab -> Clear();
	delete partons_lab;
	
	partons_breit -> SetOwner();
	partons_breit -> Clear();
	delete partons_breit;
}
