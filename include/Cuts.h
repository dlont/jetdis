#ifndef 	CUTS_H
#define		CUTS_H

#include "runinfo.h"
#include "JetEvent.h"
#include "JetUserInfo.h"

#include "fastjet/ClusterSequence.hh"

#include <cmath>
#include <vector>

#include "TROOT.h"

using namespace std;
using namespace fastjet;

namespace CUTS

{
	Bool_t y_true_in_range( const Float_t, const Float_t, const Float_t );
	Bool_t q2_true_in_range( const Float_t, const Float_t, const Float_t );
	Bool_t evtake( const Int_t, const Int_t );
	Bool_t is_excluded_run( const Int_t );
	Bool_t poltake(Int_t, Int_t, Int_t, Int_t, RunInfo*, const Int_t );
	Bool_t flt( const Int_t*,  Int_t );
	Bool_t slt( const Int_t*,  Int_t );
	Bool_t tlt( const Int_t*,  Int_t );
	Bool_t dst( const Int_t*,  Int_t );
	Bool_t is_sinistra_candidate( const Int_t );
	Bool_t sinistra_prob( const Float_t, const Float_t );
	Bool_t sinistra_energy( const Float_t, const Float_t );
	Bool_t isolation_ele( const Double_t, const Float_t );
	Bool_t e_has_matching_track( const Float_t, const Float_t, const Bool_t );
	Bool_t e_track_momentum( const Float_t, const Float_t, const Bool_t );
	Bool_t e_out_rcal_chimney(const Float_t, const Float_t, const Float_t, const Float_t, const Float_t, const Float_t );
	Bool_t e_out_super_crack(const Float_t, const Float_t, const Float_t, const Float_t, const Float_t );
	Bool_t e_distance_beam( const Float_t, const Float_t );
	Bool_t e_distance_beam_rcal( const Float_t, const Float_t, const Float_t, const Float_t );
	Bool_t y_da_in_range( const Float_t, const Float_t, const Float_t );
	Bool_t q2_da_in_range( const Float_t, const Float_t, const Float_t );
	Bool_t is_reconstructed_vertex( const Float_t);
	Bool_t zvtx_in_range( const Float_t, const Float_t, const Float_t );
	Bool_t chi2_vtx( const Float_t, const Float_t );
	Bool_t empz_in_range( const Float_t, const Float_t, const Float_t );
	Bool_t missing_pt( const Float_t, const Float_t );
	Bool_t is_qedcompton( const Bool_t );
	Bool_t is_valid_qedcorr( const Float_t, const Float_t, const Float_t );
	Bool_t min_fcalproj_hadscatangle( const Float_t, const Float_t, const Float_t, const Float_t );
	Bool_t is_good_track( const Int_t, const Int_t );
	Bool_t e_jet_distance( const vector<PseudoJet>&, const TLorentzVector*, const Float_t, const Float_t );
	Bool_t is_backward_jet( const vector<PseudoJet>&, const Float_t, const Float_t );
	Bool_t mjj_in_range( const Float_t, const Float_t );
	
}
#endif
