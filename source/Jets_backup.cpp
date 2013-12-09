#include "Jets.h"
#include "Variables.h"
#include "Constants.h"
#include "JetUserInfo.h"
#include "JetSelectors.h"
#include "Settings.h"

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

Jets::Jets() { ; }

Jets::Jets( Variables* ch, TLorentzVector* scattered_ele_da, Settings *fSettings )
{
	particles_lab = new TObjArray;
	particles_breit = new TObjArray;
	n_good_cells = 0;
	
	if( !( ch -> Sincand > 0 && ch -> Sincell[ 0 ] < 1000 && ch -> Sicellptr[ 0 ] < 100000 ) ) return;
	for( Int_t icell = 0; icell < ch -> Ncaltru; icell++ ) 
	{
		if( IsSiCell( icell, ch -> Sicellptr, ch -> Sincell, ch -> Caltru_cellnr, ch -> Celllist ) ) continue;
		if( IsSparkCell( icell, ch -> Caltru_e, ch -> Caltru_imbal ) ) continue;
		if( IsNoiseCell( icell, ch -> Caltru_e, ch -> Caltru_cellnr ) ) continue;
		
		double x = ch -> Caltru_pos[ icell ][ 0 ] - ch -> Xvtx;
		double y = ch -> Caltru_pos[ icell ][ 1 ] - ch -> Yvtx;
		double z = ch -> Caltru_pos[ icell ][ 2 ] - ch -> Zvtx;
		double r = TMath::Sqrt( x*x + y*y + z*z );
		if( r > 0. ) 
		{		      
			particles_lab -> Add( new TLorentzVector( ( ch -> Caltru_e[ icell ]*x/r),
								  ( ch -> Caltru_e[ icell ]*y/r),
								  ( ch -> Caltru_e[ icell ]*z/r),
								  ( ch -> Caltru_e[ icell ] ) ) );
			n_good_cells++;
		}
	}
	if( particles_lab->GetEntries() > 0 ) Dijets::BreitBoost(*particles_lab, *particles_breit, -EE, EP, *scattered_ele_da, 1);
	for( Int_t ipart = 0; ipart < particles_breit -> GetEntries(); ipart++ )
	{
		Double_t px = ( static_cast<TLorentzVector*> ( particles_breit -> At( ipart ) ) ) -> Px();
		Double_t py = ( static_cast<TLorentzVector*> ( particles_breit -> At( ipart ) ) ) -> Py();
		Double_t pz = ( static_cast<TLorentzVector*> ( particles_breit -> At( ipart ) ) ) -> Pz();
		Double_t e =  ( static_cast<TLorentzVector*> ( particles_breit -> At( ipart ) ) ) -> E();
		Double_t massless_factor = e/( TMath::Sqrt( px*px + py*py + pz*pz ) );
		 
		( static_cast<TLorentzVector*> ( particles_breit -> At( ipart ) ) ) -> SetPxPyPzE( px*massless_factor,
												   py*massless_factor,
												   pz*massless_factor,
												   e );
	}
	
	//Prepare particles in Breit frame for jet reconstruction
	TIter it_breit( particles_breit );
	vector<PseudoJet> pseudojets_breit;
	if( n_good_cells > 0 )
	{
		while ( it_breit.Next() )
		{
			PseudoJet p( (static_cast<TLorentzVector*> (*it_breit)) -> Px(),
				     (static_cast<TLorentzVector*> (*it_breit)) -> Py(),
				     (static_cast<TLorentzVector*> (*it_breit)) -> Pz(),
				     (static_cast<TLorentzVector*> (*it_breit)) -> E() );
			pseudojets_breit.push_back( p );
		}
	}
	
	//Prepare particles in Lab frame for jet reconstruction
	TIter it_lab( particles_lab );
	vector<PseudoJet> pseudojets_lab;
	if( n_good_cells > 0 )
	{
		while ( it_lab.Next() )
		{
			PseudoJet p( (static_cast<TLorentzVector*> (*it_lab)) -> Px(),
				     (static_cast<TLorentzVector*> (*it_lab)) -> Py(),
				     (static_cast<TLorentzVector*> (*it_lab)) -> Pz(),
				     (static_cast<TLorentzVector*> (*it_lab)) -> E() );
			pseudojets_lab.push_back( p );
		}
	}
	
	double rparameter = JETRADIUS;
	RecombinationScheme recomb_scheme = Et_scheme;
	JetDefinition jet_def( kt_algorithm, rparameter, recomb_scheme );

	// run the clustering, extract the jets
	ClusterSequence cluster_alg_breit( pseudojets_breit, jet_def );
	ClusterSequence cluster_alg_lab  ( pseudojets_lab,   jet_def );
	vector<PseudoJet> alljets_breit = cluster_alg_breit.inclusive_jets();
	vector<PseudoJet> alljets_lab   = cluster_alg_lab.inclusive_jets();

	//This is transformation of jets reconstructed in Breit frame to lab frame
	float et_lab  = 0.;
	float eta_lab = 0.;
	float phi_lab = 0.;
	
//energy scale unc.
	if( fSettings->is_eval_enescale_syst() )
	{
		vector<PseudoJet>::iterator itBreit;
		for( itBreit = alljets_breit.begin(); itBreit != alljets_breit.end(); ++itBreit )
		{
			et_lab  =  Dijets::EtLab( (*itBreit), -EE, EP, *scattered_ele_da );
			if( et_lab > 10. ) (*itBreit) *= 1.01;//up:1.01; down:0.99
			if( et_lab < 10. ) (*itBreit) *= 1.03;//up:1.03; down:0.97
		}
		vector<PseudoJet>::iterator itLab;
		for( itLab = alljets_lab.begin(); itLab != alljets_lab.end(); ++itLab )
		{
			et_lab  =  (*itLab).perp();
			if( et_lab > 10. ) (*itLab) *= 1.01;//up:1.01; down:0.99
			if( et_lab < 10. ) (*itLab) *= 1.03;//up:1.03; down:0.97
		} 
	}
	
	for( unsigned int ijet = 0; ijet < alljets_breit.size(); ijet++ )
	{
		et_lab  = Dijets::EtLab( alljets_breit[ ijet ], -EE, EP, *scattered_ele_da );
		eta_lab = Dijets::EtaLab( alljets_breit[ ijet ], -EE, EP, *scattered_ele_da );
		phi_lab = Dijets::PhiLab( alljets_breit[ ijet ], -EE, EP, *scattered_ele_da );
		alljets_breit[ ijet ].set_user_info( new JetUserInfo( et_lab, eta_lab, phi_lab ) );
	}
	for( unsigned int ijet = 0; ijet < alljets_lab.size(); ijet++ )
	{
		et_lab  = alljets_lab[ ijet ].perp();
		eta_lab = alljets_lab[ ijet ].eta();
		phi_lab = alljets_lab[ ijet ].phi();
		alljets_lab[ ijet ].set_user_info( new JetUserInfo( et_lab, eta_lab, phi_lab ) );
	}
	Selector sel_jetkin_lab  = KinematicJetLabSelector( MINETJETLAB, MINETAJETLAB, MAXETAJETLAB );
	Selector sel_jetkin_lback = KinematicBackwardJetSelector( MINJETETBREIT, MINETAJETLAB );
	Selector::Selector jet_selector = /*fastjet::SelectorNHardest(3) * */sel_jetkin_lab;
	raw_kt_jets_breit = sorted_by_pt(  alljets_breit  );
	kt_jets_breit = sorted_by_pt( jet_selector( alljets_breit ) ); 
	raw_kt_jets_lab = sorted_by_pt(  alljets_lab  );
}

bool Jets::IsSiCell( const Int_t icell, const Int_t* Sicellptr, const Int_t* Sincell, const Int_t* Caltru_cellnr, const Int_t* Celllist )
//bool Jets::IsSiCell( const Int_t icell, const UShort_t* Sicellptr, const UChar_t* Sincell, const UShort_t* Caltru_cellnr, const UShort_t* Celllist )
{
	bool is_si_cell = false;
	for( Int_t jcell = Sicellptr[ 0 ]; jcell < ( Sicellptr[ 0 ] + Sincell[ 0 ] ); jcell++ )
	{ 
		if( Caltru_cellnr[ icell ] == Celllist[ jcell ] ) is_si_cell = true;
	}
	return is_si_cell;
}

bool Jets::IsSparkCell( const Int_t icell, const Float_t* Caltru_e, const Float_t* Caltru_imbal )
{
	if( ( Caltru_e[ icell ] > MAXCELLE ) && ( TMath::Abs( Caltru_imbal[ icell ] / Caltru_e[ icell ] ) > MAXCELLIMBAL ) ) return true;
	else return false;
}

bool Jets::IsNoiseCell( const Int_t icell, const Float_t* Caltru_e, const Int_t* Caltru_cellnr )
//bool Jets::IsNoiseCell( const Int_t icell, const Float_t* Caltru_e, const UShort_t* Caltru_cellnr )
{
	if( IsHACcell( icell, Caltru_cellnr ) && Caltru_e[ icell ] < MAXHACCELLNOISE ) return true;
	if( IsEMCcell( icell, Caltru_cellnr ) && Caltru_e[ icell ] < MAXEMCCELLNOISE ) return true;
	
	return false;
}

bool Jets::IsHACcell( const Int_t icell, const Int_t* Caltru_cellnr )
//bool Jets::IsHACcell( const Int_t icell, const UShort_t* Caltru_cellnr )
{
	//BLACK MAGIC!!!
	Int_t Is = ( Int_t )( ( Float_t )( Caltru_cellnr[ icell ] )/16384.0 )*16384;
	Int_t N = Caltru_cellnr[ icell ] - Is;
	Int_t IPm = N % 2;
	N -= IPm;
	Int_t K = ( Int_t )( ( N % 16 )/2 );
	Bool_t celltype[] = { Jets::emc,  Jets::hac, Jets::hac,  Jets::hac, Jets::emc,
			      Jets::hac,  Jets::hac, Jets::emc,  Jets::hac, Jets::hac }; // true = hac, false = emc
	Bool_t cellkind = kTRUE;
	if( Is == 0 )
	{
		if( K >= 0 && K <= 4 ) cellkind = celltype[ 0 ];
		else if ( K >= 5 && K <= 7 ) cellkind = celltype[ K-4 ];
	}
	else if( Is == 16384 )
	{
		if( K >=0 && K <= 4 ) cellkind = celltype[ 4 ];
		else if( K >= 6 && K <= 7 ) cellkind = celltype[ K-1 ];
	}
	else if( Is == 32768 )
	{
		if( K >= 0 && K <= 2 ) cellkind = celltype[ 7 ];
		else if( K >= 5 && K <= 6 ) cellkind = celltype[ K+3 ];
	}
	return cellkind;
}

bool Jets::IsEMCcell( const Int_t icell, const Int_t* Caltru_cellnr )
//bool Jets::IsEMCcell( const Int_t icell, const UShort_t* Caltru_cellnr )
{
	return !IsHACcell( icell, Caltru_cellnr );
}

Jets::~Jets()
{ 
	particles_lab -> SetOwner();
	particles_lab -> Clear();
	delete particles_lab;
	
	particles_breit -> SetOwner();
	particles_breit -> Clear();
	delete particles_breit;
}
