#include "Cuts.h"
#include "JetEvent.h"
#include "JetUserInfo.h"

#include "fastjet/ClusterSequence.hh"

#include "TMath.h"
#include "TROOT.h"

#include <iostream>
#include <vector>

using namespace fastjet;

namespace CUTS
{
	Bool_t y_true_in_range( const Float_t y_true, const Float_t ytruemin, const Float_t ytruemax )
	{
		if( y_true <= ytruemin || y_true >= ytruemax ) return kFALSE;
		else return kTRUE;
	}

	Bool_t q2_true_in_range( const Float_t q2_true, const Float_t q2truemin, const Float_t q2truemax )
	{
		if( q2_true <= q2truemin || q2_true >= q2truemax ) return kFALSE;
		else return kTRUE;
	}

	Bool_t evtake( const Int_t iwant, const Int_t evtakeflag )
	{
		if( iwant != evtakeflag ) return kFALSE;
		else return kTRUE;
	}
	
	Bool_t flt( const Int_t* Fltw,  Int_t Slot )
	{
		Bool_t 	Bit;
		Int_t 	Word;

		if( Slot > 31 ) Word = 1;
		else Word = 0;

		Slot = Slot % 32;

		Bit = ( Bool_t )( Fltw[ Word ] & ( 1 << Slot ) );

		return Bit;
	}
	
	Bool_t slt( const Int_t* Sltw,  Int_t Slot )
	{
		Bool_t 	Bit;
		const Int_t Word = 5;		//!Achtung 5 is hardcoded. Check ORANGE docs for details

		Slot -= 1;			//!Bit numeration starts from 0 not from 1
		if( Slot > 8 ) std::cout << "Check SLT slot" << std::endl;

		Bit = ( Bool_t )( Sltw[ Word ] & ( 1 << Slot ) );

		return Bit;
	}
	
	Bool_t tlt( const Int_t* Tltw,  Int_t Slot )
	{
		Bool_t 	Bit;
		const Int_t Word = 3;		//!Achtung 3 is hardcoded. Check ORANGE docs for details

		Slot -= 1;			//!Bit numeration starts from 0 not from 1
		if( Slot > 15 ) std::cout << "Check TLT slot" << std::endl;

		Bit = ( Bool_t )( Tltw[ Word ] & ( 1 << Slot ) );

		return Bit;
	}
	
	Bool_t dst( const Int_t* Dstw,  Int_t Slot )
	{
		Bool_t 	Bit;
		Int_t 	Word;

		Word = 0;
		if( Slot > 31 && Slot <= 63 ) Word = 1;
		if( Slot > 63 && Slot <= 95 ) Word = 2;
		if( Slot > 95               ) Word = 3;
	
		Slot = Slot % 32;
	
		Bit = ( Bool_t )( Dstw[ Word ] & ( 1 << Slot ) );

		return Bit;
	}

	Bool_t is_sinistra_candidate( const Int_t sincand )
	{
		if( sincand == 0 ) return kFALSE;
		else return kTRUE;
	}
	
	Bool_t sinistra_prob( const Float_t sinprob, const Float_t minprob )
	{
		if( sinprob <= minprob ) return kFALSE;
		else return kTRUE;
	}
		
	Bool_t sinistra_energy( const Float_t sinene, const Float_t sinenemin )
	{
		if( sinene <= sinenemin ) return kFALSE;
		else return kTRUE;
	}
	
	Bool_t isolation_ele( const Double_t enefrac_ele, const Float_t minenefrac )
	{
		if( enefrac_ele >= minenefrac ) return kFALSE;
		else return kTRUE;
	}
	
	Bool_t e_has_matching_track( const Float_t sidca, const Float_t sidcamax, const Bool_t isinacc )
	{
		if( sidca > sidcamax && isinacc ) return kFALSE;
		else return kTRUE;
	}
	
	Bool_t e_track_momentum( const Float_t sitrkp, const Float_t sitrminp, const Bool_t isinacc )
	{
		if( sitrkp <= sitrminp && isinacc ) return kFALSE;
		else return kTRUE;
	}
	
	Bool_t e_out_rcal_chimney( const Float_t ezpos, const Float_t ercalzmax, const Float_t expos, const Float_t ercalxmax, const Float_t eypos, const Float_t ercalymin )
	{
		if( ( ezpos < ercalzmax ) && (TMath::Abs( expos ) < ercalxmax ) && ( eypos > ercalymin ) ) return kFALSE;
		else return kTRUE;
	}
	
	Bool_t e_out_super_crack( const Float_t ezpos, const Float_t ercrackup, const Float_t ercrackdown, const Float_t efcrackup, const Float_t efcrackdown )
	{
		if( ( (ezpos > ercrackdown ) && ( ezpos < ercrackup ) ) || ( ( ezpos > efcrackdown ) && ( ezpos < efcrackup ) ) ) return kFALSE;
		else return kTRUE;
	}
	
	Bool_t e_distance_beam( const Float_t rebeam, const Float_t mindistebeam )
	{
		if( rebeam <= mindistebeam ) return kFALSE;
		else return kTRUE;
	}
	
	Bool_t e_distance_beam_rcal( const Float_t rebeam, const Float_t mindistebeamrcal, const Float_t ezpos, const Float_t ercalzmax )
	{
		if( rebeam > mindistebeamrcal && ezpos <= ercalzmax ) return kFALSE;
		else return kTRUE;
	}

	Bool_t y_da_in_range( const Float_t y_da, const Float_t ydamin, const Float_t ydamax )
	{
		if( y_da <= ydamin || y_da >= ydamax ) return kFALSE;
		else return kTRUE;
	}

	Bool_t q2_da_in_range( const Float_t q2_da, const Float_t q2damin, const Float_t q2damax )
	{
		if( q2_da <= q2damin || q2_da >= q2damax ) return kFALSE;
		else return kTRUE;
	}
	
	Bool_t is_reconstructed_vertex( const Float_t zvtx )
	{
		if( zvtx == 0. ) return kFALSE;
		else return kTRUE;
	}
	
	Bool_t zvtx_in_range( const Float_t zvtx, const Float_t zmin, const Float_t zmax )
	{
		if( zvtx < zmin || zvtx > zmax ) return kFALSE;
		else return kTRUE;
	}
	
	Bool_t chi2_vtx( const Float_t chi2vtx, const Float_t maxchi2vtx )
	{
		if( TMath::Abs( chi2vtx ) >= maxchi2vtx ) return kFALSE;
		else return kTRUE;
	}
	
	Bool_t empz_in_range( const Float_t empz_ev, const Float_t empz_evmin, const Float_t empz_evmax )
	{
		if( ( empz_ev <= empz_evmin ) || ( empz_ev >= empz_evmax ) ) return kFALSE;
		else return kTRUE;
	}
	
	Bool_t missing_pt( const Float_t ptm, const Float_t ptmmax )
	{
		if( ptm > ptmmax ) return kFALSE;
		else return kTRUE;
	}
	
	Bool_t is_qedcompton( const Bool_t qedcompton )
	{
		if( qedcompton ) return kFALSE;
		else return kTRUE;
	}
	
	Bool_t is_valid_qedcorr( const Float_t x_bj, const Float_t y_da, const Float_t minvalqedcorr )
	{
		if( y_da*( 1. - x_bj )*( 1. - x_bj ) <= minvalqedcorr ) return kFALSE;
		else return kTRUE;
	}
	
	Bool_t min_fcalproj_hadscatangle( const Float_t gamma_had, const Float_t zvtx, const Float_t fcaledge, const Float_t projhadmin )
	{
		if( TMath::Cos( gamma_had ) >= 0. && ( TMath::Abs( TMath::Tan( gamma_had ) ) )*( fcaledge - zvtx ) < projhadmin ) return kFALSE;
		else return kTRUE;
	}
	
	Bool_t is_good_track( const Int_t ngoodtracks, const Int_t minngoodtracks )
	{
		if( ngoodtracks < minngoodtracks ) return kFALSE;
		else return kTRUE;
	}
	
	Bool_t e_jet_distance( const vector<PseudoJet>& kt_jets, const TLorentzVector* LVele, const Float_t minjetetbreit, const Float_t maxejetradius )
	{
		Bool_t take_event = kTRUE;
		Float_t et_jet_br = 0., eta_jet_lab = 0., phi_jet_lab = 0.;
		Float_t deltaeta = 0., deltaphi = 0.;
		Float_t ele_eta = 0., ele_phi = 0.;
		Float_t e_jet_dist = 0.;
		for( unsigned int ijet = 0; ijet < kt_jets.size(); ijet++ )
		{
			et_jet_br = kt_jets[ ijet ].perp();
			eta_jet_lab = kt_jets[ ijet ].user_info<JetUserInfo>().etajet();
			phi_jet_lab = kt_jets[ ijet ].user_info<JetUserInfo>().phijet();
			ele_eta = LVele -> Eta();
			ele_phi = LVele -> Phi();
			deltaeta = fabs( eta_jet_lab - ele_eta );
			deltaphi = fabs( phi_jet_lab - ele_phi );
			if ( deltaphi > TMath::Pi() ) deltaphi = 2.*TMath::Pi() - deltaphi;
			e_jet_dist = sqrt( deltaeta*deltaeta + deltaphi*deltaphi );
			if( ( et_jet_br > minjetetbreit ) && ( e_jet_dist < maxejetradius ) ) 
			{
				take_event = kFALSE;
				break;
			}
		}
		return take_event;
	}
	
	Bool_t is_backward_jet( const vector<PseudoJet>& kt_jets, const Float_t minjetetbreit, const Float_t minetajetlab )
	{
		Bool_t take_event = kTRUE;
		Float_t et_jet_br = 0., eta_jet_lab = 0.;
		for( unsigned int ijet = 0; ijet < kt_jets.size(); ijet++ )
		{
			et_jet_br = kt_jets[ ijet ].perp();
			eta_jet_lab = kt_jets[ ijet ].user_info<JetUserInfo>().etajet();
			if( ( et_jet_br > minjetetbreit ) && ( eta_jet_lab < minetajetlab ) )
			{
				take_event = kFALSE;
				break;
			}
		}
		return take_event;
	}
	
	Bool_t mjj_in_range( const Float_t mjj, const Float_t minmjj )
	{
		if( mjj < minmjj ) return kFALSE;
		else return kTRUE;
	}
}
