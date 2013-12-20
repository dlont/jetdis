#include "Analysis.h"

#include "Constants.h"
#include "Variables.h"
#include "DijetVariables.h"
#include "TrijetVariables.h"
#include "JetEvent.h"
#include "JetEvent_True.h"
#include "JetUserInfo.h"
#include "Jets.h"
#include "Jets_Hadr.h"
#include "Jets_Part.h"
#include "Cuts.h"

#include "fastjet/ClusterSequence.hh"
#include "fastjet/Selector.hh"

#include "TROOT.h"
#include "TMath.h"
#include "TF1.h"
#include "TH1F.h"
#include "TH2F.h"
#include "TProfile.h"
#include "TObjArray.h"
#include "TNtuple.h"
#include "TEventList.h"
#include "TLorentzVector.h"

#include <vector>

using namespace std;
using namespace fastjet;

class JetEvent;
class JetEvent_True;

int Analysis::Event( Long64_t i)
{
	JetEvent      jet_ev( fOrangeTree );
#ifdef MC
	JetEvent_True jet_ev_true( fOrangeTree );
#endif

	TH1* hist;
	TH2* hist2d;
	
	const Int_t n_q2bins_incl = 6;
	Double_t q2bins_incl[ n_q2bins_incl + 1 ] = { 125., 250., 500., 1000., 2000., 5000., 20000. };

	const Int_t n_q2bins_di = 6;
	Double_t q2bins_di[ n_q2bins_di + 1 ] = { 125., 250., 500., 1000., 2000., 5000., 20000. };

	const Int_t n_q2bins_tri = 5;
	Double_t q2bins_tri[ n_q2bins_tri + 1 ] = { 125., 250., 700., 1300., 5000., 20000. };

	Double_t w_incl = 1.;
	Double_t w_di = 1.;

	Selector sel_injetet_breit;
	Selector sel_injetet_breit_hadr;
	Selector sel_injetet_breit_part;

	vector< PseudoJet > kt_jets_hadr_breit;
	vector< PseudoJet > kt_jets_part_breit;
	vector< PseudoJet > kt_jets_det_breit;
	vector< PseudoJet > kt_injets_hadr_breit;
	vector< PseudoJet > kt_injets_part_breit;
	vector< PseudoJet > kt_injets_breit_corr;

	Bool_t ishad_incl = false;
	Bool_t ishad_di = false;
	Bool_t ishad_tri = false;

	Bool_t ispar_incl = false;
	Bool_t ispar_di = false;
	Bool_t ispar_tri = false;

	Bool_t isdet_incl = false;
	Bool_t isdet_di = false;
	Bool_t isdet_tri = false;

	if( !fSettings->is_data() )
	{
#ifdef MC
		if( fSettings->is_apply_zvtx_rew() )
		{
			Double_t wz = fZvtxReweightingFunc -> Eval( fOrangeTree -> Mcvtx[2] );
			w_incl *= wz;
			w_di *= wz;
		}

		if( fSettings->is_apply_q2_rew_incl() )
		{
			Double_t wq_incl = 1.;
			vector< TF1* >::iterator itrRootFunc;
			for ( itrRootFunc = fQ2ReweightingFunc_incl.begin(); itrRootFunc != fQ2ReweightingFunc_incl.end(); ++itrRootFunc ) 
			{
				wq_incl *= (*itrRootFunc) -> Eval( jet_ev_true.Get_q2_true() );
			}
			w_incl *= wq_incl;
		}

		if( fSettings->is_apply_q2_rew_di() )
		{
			Double_t wq_di = 1.;
			vector< TF1* >::iterator itrRootFunc;
			for ( itrRootFunc = fQ2ReweightingFunc_di.begin(); itrRootFunc != fQ2ReweightingFunc_di.end(); ++itrRootFunc ) 
			{
				wq_di *= (*itrRootFunc) -> Eval( jet_ev_true.Get_q2_true() );
			}
			w_di *= wq_di;
		}

		if( !CUTS::y_true_in_range( jet_ev_true.Get_y_true(), YTRUEMIN, YTRUEMAX ) ) goto DETLEVEL;
		if( !CUTS::q2_true_in_range( jet_ev_true.Get_q2_true(), Q2TRUEMIN, Q2TRUEMAX ) ) goto DETLEVEL;

HADRLEVEL:
		Jets_Hadr jets_hadr( fOrangeTree, jet_ev_true.Get_LVscattered_ele_true() );
		kt_jets_hadr_breit = jets_hadr.Get_hadr_kt_jets_breit();

		if( kt_jets_hadr_breit.size() < 1 ) { goto PARTLEVEL; }

		sel_injetet_breit_hadr = SelectorPtMin( MINJETETBREITCORRECTED );
		kt_injets_hadr_breit = sorted_by_pt( sel_injetet_breit_hadr( kt_jets_hadr_breit ) );
		if( kt_injets_hadr_breit.size() < 1 ) { goto PARTLEVEL; }

		ishad_incl = true;

		//Incl. jets cross sections
                if ( kt_injets_hadr_breit.size() == 1 )
                {
                        hist = (TH1F*)(fHistArray) -> FindObject("h_et_incl_CS_h_cp");
			hist -> Fill( kt_injets_hadr_breit[ 0 ].perp(), w_incl );
                }
                
		for( int ijet = 0; ijet < kt_injets_hadr_breit.size(); ijet++ )
		{
			hist = (TH1F*)(fHistArray) -> FindObject("h_q2_incl_CS_h");
			hist -> Fill( jet_ev_true.Get_q2_true(), w_incl );

			hist = (TH1F*)(fHistArray) -> FindObject("h_et_incl_CS_h");
			hist -> Fill( kt_injets_hadr_breit[ ijet ].perp(), w_incl );
	
			for( unsigned int i_q2bin = 0; i_q2bin < n_q2bins_incl; i_q2bin++ )
			{
				if( jet_ev_true.Get_q2_true() > q2bins_incl[ i_q2bin ] && jet_ev_true.Get_q2_true() < q2bins_incl[ i_q2bin + 1 ]  )
				{
					TString shistname = "h_etinq2_incl_CS_h";	shistname += i_q2bin;
					hist = (TH1F*)(fHistArray) -> FindObject(shistname);
					hist -> Fill( kt_injets_hadr_breit[ ijet ].perp(), w_incl );
				}
			}
		}
		//Hadron to parton corrections
		for( int ijet = 0; ijet < kt_injets_hadr_breit.size(); ijet++ )
		{
			hist = (TH1F*)(fHistArray) -> FindObject("h_q2_incl_CS_h_h2p");
			hist -> Fill( jet_ev_true.Get_q2_true() );

			hist = (TH1F*)(fHistArray) -> FindObject("h_et_incl_CS_h_h2p");
			hist -> Fill( kt_injets_hadr_breit[ ijet ].perp() );
	
			for( unsigned int i_q2bin = 0; i_q2bin < n_q2bins_incl; i_q2bin++ )
			{
				if( jet_ev_true.Get_q2_true() > q2bins_incl[ i_q2bin ] && jet_ev_true.Get_q2_true() < q2bins_incl[ i_q2bin + 1 ]  )
				{
					TString shistname = "h_etinq2_incl_CS_h_h2p";	shistname += i_q2bin;
					hist = (TH1F*)(fHistArray) -> FindObject(shistname);
					hist -> Fill( kt_injets_hadr_breit[ ijet ].perp() );
				}
			}
		}

		if( kt_injets_hadr_breit.size() < 2 ) { goto PARTLEVEL; }
		if( !CUTS::mjj_in_range( DijetVariables::Mjj( kt_injets_hadr_breit ), MINMJJ ) ) { goto PARTLEVEL; }

		ishad_di = true;

		//Dijet cross sections
		hist = (TH1F*)(fHistArray) -> FindObject("h_q2_di_CS_h");
		hist -> Fill( jet_ev_true.Get_q2_true(), w_di );

		hist = (TH1F*)(fHistArray) -> FindObject("h_meanet_di_CS_h");
		hist -> Fill( DijetVariables::Etjetbar( kt_injets_hadr_breit ), w_di );

		for( UInt_t i_q2bin = 0; i_q2bin < n_q2bins_di; i_q2bin++ )
		{
			if( jet_ev_true.Get_q2_true() > q2bins_di[ i_q2bin ] && jet_ev_true.Get_q2_true() < q2bins_di[ i_q2bin + 1 ]  )
			{
				TString shistname = "h_meanetinq2_di_CS_h";	shistname += i_q2bin;
				hist = (TH1F*)(fHistArray) -> FindObject(shistname);
				hist -> Fill( DijetVariables::Etjetbar( kt_injets_hadr_breit ), w_di );
			}
		}
		//Hadron to parton corrections
		hist = (TH1F*)(fHistArray) -> FindObject("h_q2_di_CS_h_h2p");
		hist -> Fill( jet_ev_true.Get_q2_true() );

		hist = (TH1F*)(fHistArray) -> FindObject("h_meanet_di_CS_h_h2p");
		hist -> Fill( DijetVariables::Etjetbar( kt_injets_hadr_breit ) );

		for( UInt_t i_q2bin = 0; i_q2bin < n_q2bins_di; i_q2bin++ )
		{
			if( jet_ev_true.Get_q2_true() > q2bins_di[ i_q2bin ] && jet_ev_true.Get_q2_true() < q2bins_di[ i_q2bin + 1 ]  )
			{
				TString shistname = "h_meanetinq2_di_CS_h_h2p";	shistname += i_q2bin;
				hist = (TH1F*)(fHistArray) -> FindObject(shistname);
				hist -> Fill( DijetVariables::Etjetbar( kt_injets_hadr_breit ) );
			}
		}

		if( kt_injets_hadr_breit.size() < 3 ) { goto PARTLEVEL; }

		ishad_tri = true;

		//Trijet cross sections
		hist = (TH1F*)(fHistArray) -> FindObject("h_q2_tri_CS_h");
		hist -> Fill( jet_ev_true.Get_q2_true(), w_di );

		hist = (TH1F*)(fHistArray) -> FindObject("h_meanet_tri_CS_h");
		hist -> Fill( TrijetVariables::Etjetbar( kt_injets_hadr_breit ), w_di );

		for( UInt_t i_q2bin = 0; i_q2bin < n_q2bins_tri; i_q2bin++ )
		{
			if( jet_ev_true.Get_q2_true() > q2bins_tri[ i_q2bin ] && jet_ev_true.Get_q2_true() < q2bins_tri[ i_q2bin + 1 ]  )
			{
				TString shistname = "h_meanetinq2_tri_CS_h";	shistname += i_q2bin;
				hist = (TH1F*)(fHistArray) -> FindObject(shistname);
				hist -> Fill( TrijetVariables::Etjetbar( kt_injets_hadr_breit ), w_di );
			}
		}
		//Hadron to parton corrections
		hist = (TH1F*)(fHistArray) -> FindObject("h_q2_tri_CS_h_h2p");
		hist -> Fill( jet_ev_true.Get_q2_true() );

		hist = (TH1F*)(fHistArray) -> FindObject("h_meanet_tri_CS_h_h2p");
		hist -> Fill( TrijetVariables::Etjetbar( kt_injets_hadr_breit ) );

		for( UInt_t i_q2bin = 0; i_q2bin < n_q2bins_tri; i_q2bin++ )
		{
			if( jet_ev_true.Get_q2_true() > q2bins_tri[ i_q2bin ] && jet_ev_true.Get_q2_true() < q2bins_tri[ i_q2bin + 1 ]  )
			{
				TString shistname = "h_meanetinq2_tri_CS_h_h2p";	shistname += i_q2bin;
				hist = (TH1F*)(fHistArray) -> FindObject(shistname);
				hist -> Fill( TrijetVariables::Etjetbar( kt_injets_hadr_breit ) );
			}
		}

PARTLEVEL:
		Jets_Part jets_part( fOrangeTree, jet_ev_true.Get_LVscattered_ele_true() );
		kt_jets_part_breit = jets_part.Get_part_kt_jets_breit();

		if( kt_jets_part_breit.size() < 1 ) { goto DETLEVEL; }

		sel_injetet_breit_part = SelectorPtMin( MINJETETBREITCORRECTED );
		kt_injets_part_breit = sorted_by_pt( sel_injetet_breit_part( kt_jets_part_breit ) );
		if( kt_injets_part_breit.size() < 1 ) { goto DETLEVEL; }

		ispar_incl = true;

		//Incl. jets cross sections
		for( int ijet = 0; ijet < kt_injets_part_breit.size(); ijet++ )
		{

			hist = (TH1F*)(fHistArray) -> FindObject("h_q2_incl_CS_p");
			hist -> Fill( jet_ev_true.Get_q2_true(), w_incl );

			hist = (TH1F*)(fHistArray) -> FindObject("h_et_incl_CS_p");
			hist -> Fill( kt_injets_part_breit[ ijet ].perp(), w_incl );
	
			for( unsigned int i_q2bin = 0; i_q2bin < n_q2bins_incl; i_q2bin++ )
			{
				if( jet_ev_true.Get_q2_true() > q2bins_incl[ i_q2bin ] && jet_ev_true.Get_q2_true() < q2bins_incl[ i_q2bin + 1 ]  )
				{
					TString shistname = "h_etinq2_incl_CS_p";	shistname += i_q2bin;
					hist = (TH1F*)(fHistArray) -> FindObject(shistname);
					hist -> Fill( kt_injets_part_breit[ ijet ].perp(), w_incl );
				}
			}
		}

		//Hadron to parton corrections
		for( int ijet = 0; ijet < kt_injets_part_breit.size(); ijet++ )
		{
			hist = (TH1F*)(fHistArray) -> FindObject("h_q2_incl_CS_p_h2p");
			hist -> Fill( jet_ev_true.Get_q2_true() );

			hist = (TH1F*)(fHistArray) -> FindObject("h_et_incl_CS_p_h2p");
			hist -> Fill( kt_injets_part_breit[ ijet ].perp() );
	
			for( unsigned int i_q2bin = 0; i_q2bin < n_q2bins_incl; i_q2bin++ )
			{
				if( jet_ev_true.Get_q2_true() > q2bins_incl[ i_q2bin ] && jet_ev_true.Get_q2_true() < q2bins_incl[ i_q2bin + 1 ]  )
				{
					TString shistname = "h_etinq2_incl_CS_p_h2p";	shistname += i_q2bin;
					hist = (TH1F*)(fHistArray) -> FindObject(shistname);
					hist -> Fill( kt_injets_part_breit[ ijet ].perp() );
				}
			}
		}

		if( kt_injets_part_breit.size() < 2 ) { goto DETLEVEL; }
		if( !CUTS::mjj_in_range( DijetVariables::Mjj( kt_injets_part_breit ), MINMJJ ) ) { goto DETLEVEL; }

		ispar_di = true;

		//Dijets cross sections
		hist = (TH1F*)(fHistArray) -> FindObject("h_q2_di_CS_p");
		hist -> Fill( jet_ev_true.Get_q2_true(), w_di );

		hist = (TH1F*)(fHistArray) -> FindObject("h_meanet_di_CS_p");
		hist -> Fill( DijetVariables::Etjetbar( kt_injets_part_breit ), w_di );

		for( UInt_t i_q2bin = 0; i_q2bin < n_q2bins_di; i_q2bin++ )
		{
			if( jet_ev_true.Get_q2_true() > q2bins_di[ i_q2bin ] && jet_ev_true.Get_q2_true() < q2bins_di[ i_q2bin + 1 ]  )
			{
				TString shistname = "h_meanetinq2_di_CS_p";	shistname += i_q2bin;
				hist = (TH1F*)(fHistArray) -> FindObject(shistname);
				hist -> Fill( DijetVariables::Etjetbar( kt_injets_part_breit ), w_di );
			}
		}

		//Hadron to parton corrections
		hist = (TH1F*)(fHistArray) -> FindObject("h_q2_di_CS_p_h2p");
		hist -> Fill( jet_ev_true.Get_q2_true() );

		hist = (TH1F*)(fHistArray) -> FindObject("h_meanet_di_CS_p_h2p");
		hist -> Fill( DijetVariables::Etjetbar( kt_injets_part_breit ) );

		for( UInt_t i_q2bin = 0; i_q2bin < n_q2bins_di; i_q2bin++ )
		{
			if( jet_ev_true.Get_q2_true() > q2bins_di[ i_q2bin ] && jet_ev_true.Get_q2_true() < q2bins_di[ i_q2bin + 1 ]  )
			{
				TString shistname = "h_meanetinq2_di_CS_p_h2p";	shistname += i_q2bin;
				hist = (TH1F*)(fHistArray) -> FindObject(shistname);
				hist -> Fill( DijetVariables::Etjetbar( kt_injets_part_breit ) );
			}
		}

		if( kt_injets_part_breit.size() < 3 ) { goto DETLEVEL; }

		ispar_tri = true;

		//Trijets cross sections
		hist = (TH1F*)(fHistArray) -> FindObject("h_q2_tri_CS_p");
		hist -> Fill( jet_ev_true.Get_q2_true(), w_di );

		hist = (TH1F*)(fHistArray) -> FindObject("h_meanet_tri_CS_p");
		hist -> Fill( TrijetVariables::Etjetbar( kt_injets_part_breit ), w_di );

		for( UInt_t i_q2bin = 0; i_q2bin < n_q2bins_tri; i_q2bin++ )
		{
			if( jet_ev_true.Get_q2_true() > q2bins_tri[ i_q2bin ] && jet_ev_true.Get_q2_true() < q2bins_tri[ i_q2bin + 1 ]  )
			{
				TString shistname = "h_meanetinq2_tri_CS_p";	shistname += i_q2bin;
				hist = (TH1F*)(fHistArray) -> FindObject(shistname);
				hist -> Fill( TrijetVariables::Etjetbar( kt_injets_part_breit ), w_di );
			}
		}

		//Hadron to parton corrections
		hist = (TH1F*)(fHistArray) -> FindObject("h_q2_tri_CS_p_h2p");
		hist -> Fill( jet_ev_true.Get_q2_true() );

		hist = (TH1F*)(fHistArray) -> FindObject("h_meanet_tri_CS_p_h2p");
		hist -> Fill( TrijetVariables::Etjetbar( kt_injets_part_breit ) );

		for( UInt_t i_q2bin = 0; i_q2bin < n_q2bins_tri; i_q2bin++ )
		{
			if( jet_ev_true.Get_q2_true() > q2bins_tri[ i_q2bin ] && jet_ev_true.Get_q2_true() < q2bins_tri[ i_q2bin + 1 ]  )
			{
				TString shistname = "h_meanetinq2_tri_CS_p_h2p";	shistname += i_q2bin;
				hist = (TH1F*)(fHistArray) -> FindObject(shistname);
				hist -> Fill( TrijetVariables::Etjetbar( kt_injets_part_breit ) );
			}
		}

#endif//MC
	}

DETLEVEL:
	if( fSettings->is_data() )
	{
		if( !CUTS::evtake( fOrangeTree -> Evtake_iwant, EVTAKEFLAG ) ) return -1;
		if( !CUTS::is_excluded_run( fOrangeTree -> Runnr ) ) return -1;
		if( !CUTS::poltake( fOrangeTree -> Runnr, fOrangeTree -> Eventnr, fOrangeTree -> Lpoltake, fOrangeTree -> Tpoltake,
                            this->runinfo, this->runinfo_runs_number ) ) return -1;
	}
	if( !( CUTS::flt( fOrangeTree -> Fltw, FLTBIT40 ) ||
	       CUTS::flt( fOrangeTree -> Fltw, FLTBIT43 ) ||
	       CUTS::flt( fOrangeTree -> Fltw, FLTBIT50 ) ) ) return -1;
	if( !( CUTS::slt( fOrangeTree -> Sltw, SLTBIT1 ) ||
	       CUTS::slt( fOrangeTree -> Sltw, SLTBIT4 ) ||
	       CUTS::slt( fOrangeTree -> Sltw, SLTBIT7 ) ||
	       CUTS::slt( fOrangeTree -> Sltw, SLTBIT9 ) ) ) return -1;
	if( !( CUTS::tlt( fOrangeTree -> Tltw, TLTBITDIS03 ) ) ) return -1;
	if( !( CUTS::dst( fOrangeTree -> Dstw, DSTBIT12 ) ) ) return -1;
	if( !CUTS::is_sinistra_candidate( fOrangeTree -> Sincand ) ) return -1;
	if( !CUTS::sinistra_prob( fOrangeTree -> Siprob[0], MINPROB ) ) return -1;
	if( !CUTS::sinistra_energy( fOrangeTree -> Siecorr[0][2], SINENEMIN ) ) return -1;
	if( !CUTS::isolation_ele( jet_ev.Get_enefrac_ele(), MINENEFRAC ) ) return -1;
	if( !CUTS::e_has_matching_track( fOrangeTree -> Sidca[ 0 ], SIDCAMAX, jet_ev.Get_isinacc( ) ) ) return -1;
	if( !CUTS::e_track_momentum( fOrangeTree -> Sitrkp[0], SITRMINP, jet_ev.Get_isinacc( ) ) ) return -1;
	if( !CUTS::e_out_rcal_chimney( fOrangeTree -> Sipos[0][2], ERCALZMAX, fOrangeTree -> Sipos[0][0], ERCALXMAX, fOrangeTree -> Sipos[0][1], ERCALYMIN ) ) return -1;
	if( !CUTS::e_out_super_crack( fOrangeTree -> Sipos[0][2], ERCRACKUP, ERCRACKDOWN, EFCRACKUP, EFCRACKDOWN ) ) return -1;
	if( !CUTS::e_distance_beam( jet_ev.Get_rebeam(), MINDISTEBEAM ) ) return -1;
	if( !CUTS::e_distance_beam_rcal( jet_ev.Get_rebeam(), MINDISTEBEAMRCAL, fOrangeTree -> Sipos[0][2], ERCALZMAX ) ) return -1;
	if( !CUTS::y_da_in_range( jet_ev.Get_y_da(), YDAMIN, YDAMAX ) ) return -1;
	if( !CUTS::q2_da_in_range( jet_ev.Get_q2_da(), Q2DAMIN, Q2DAMAX ) ) return -1;
	if( !CUTS::is_reconstructed_vertex( fOrangeTree -> Zvtx ) ) return -1;
	if( ( fSettings->GetSampleName().find( "05e" ) != string::npos ) || ( fSettings->GetSampleName().find( "06e" ) != string::npos ) )
	{
		if( !CUTS::zvtx_in_range( fOrangeTree -> Zvtx, ZMINE, ZMAXE ) ) return -1;
	}
	if( ( fSettings->GetSampleName().find( "06p" ) != string::npos ) || ( fSettings->GetSampleName().find( "07p" ) != string::npos ) )
	{
		if( !CUTS::zvtx_in_range( fOrangeTree -> Zvtx, ZMINP, ZMAXP ) ) return -1;
	}
	if( !CUTS::chi2_vtx( fOrangeTree -> Chivtx, MAXCHI2VTX ) ) return -1;
	if( !CUTS::empz_in_range( jet_ev.Get_empz_ev(), EMPZEVMIN, EMPZEVMAX ) ) return -1;
	if( !CUTS::missing_pt( jet_ev.Get_ptm(), PTMMAX ) ) return -1;
	if( !CUTS::is_qedcompton( jet_ev.Get_qedcompton() ) ) return -1;
	if( !CUTS::is_valid_qedcorr( jet_ev.Get_x_bj(), jet_ev.Get_y_da(), MINVALQEDCORR ) ) return -1;
	if( !CUTS::min_fcalproj_hadscatangle( jet_ev.Get_gamma_had(), fOrangeTree -> Zvtx, FCALEDGE, RPROJGHADMIN ) ) return -1;
	if( !CUTS::is_good_track( jet_ev.Get_ngoodtracks(), MINNGOODTRACKS ) ) return -1;

	Jets jets( fOrangeTree, jet_ev.Get_LVscattered_ele_da(), fSettings );

	if( !CUTS::e_jet_distance( jets.Get_raw_kt_jets_breit(), jet_ev.Get_LVscattered_ele_da(), MINJETETBREIT, MAXEJETRADIUS ) ) return -1;
	if( !CUTS::is_backward_jet( jets.Get_raw_kt_jets_breit(), MINJETETBREIT, MINETAJETLAB ) ) return -1;

	kt_jets_det_breit = jets.Get_kt_jets_breit();

	vector< PseudoJet > kt_jets_breit = jets.Get_kt_jets_breit();		//et_lab > 3, -1 < eta_lab < 2.5
	vector< PseudoJet > kt_jets_lab = jets.Get_kt_jets_lab();		//et_lab > 3, -1 < eta_lab < 2.5

	if( kt_jets_breit.size() < 1 ) return -1;

	if( !fSettings->is_data() )
	{
#ifdef MC
		if( fSettings->is_apply_enescale_corr() )
		{
			kt_jets_breit = sorted_by_pt( fEtScaleTrans( kt_jets_breit ) );
// 			kt_jets_lab = sorted_by_pt( fEtScaleTrans( kt_jets_lab ) );
		}
#endif
	}

	if( fSettings->is_apply_et_corr() )
	{
		kt_jets_breit = sorted_by_pt( fEtTrans( kt_jets_breit ) );
// 		kt_jets_lab = sorted_by_pt( fEtTrans( kt_jets_lab ) );
	}
INCLJETS:
	sel_injetet_breit = SelectorPtMin( MINJETETBREITCORRECTED );

	if( ( fSettings->is_data() && fSettings->is_apply_et_corr() ) || ( !fSettings->is_data() && fSettings->is_apply_et_corr() && fSettings->is_apply_enescale_corr() ) )
	{
		kt_injets_breit_corr = sorted_by_pt( sel_injetet_breit( kt_jets_breit ) );
		if( kt_injets_breit_corr.size() < 1 ) return -1;

		isdet_incl = true;

		SetPassed( i, fOrangeTree->Runnr, fOrangeTree->Eventnr );
		if( !fSettings->is_data() )
		{
#ifdef MC
			if( fSettings->is_apply_trackveto_rew_incl() )
			{
				Double_t randnum = fRandom_incl.Uniform();
				Double_t p = fTrackVetoReweightingFunc_incl -> Eval( jet_ev.Get_y_da() );
				if( randnum < ( 1. - p ) ) goto DIJETS;
			}
#endif
		}

		//Incl. jets cross sections
                
                if ( !fSettings->is_data() && ishad_incl == true )
                {
                    unfoldingVariables.flush();
                    
                    unfoldingVariables.q2reco = jet_ev.Get_q2_da();
                    unfoldingVariables.q2true = jet_ev_true.Get_q2_true();
                    
                    unfoldingVariables.yreco = jet_ev.Get_y_da();
                    unfoldingVariables.ytrue = jet_ev_true.Get_y_true();
                    
                    unfoldingVariables.njetstrue = (int)kt_injets_hadr_breit.size();
                    unfoldingVariables.njetsreco = (int)kt_injets_breit_corr.size();

		    for (int ihadr = 0; ihadr < kt_injets_hadr_breit.size(); ihadr++) {
			    unfoldingVariables.jet_et_true[ ihadr ] = kt_injets_hadr_breit[ ihadr ].perp();
			    unfoldingVariables.jet_eta_true[ ihadr ] = kt_injets_hadr_breit[ ihadr ].eta();
			    unfoldingVariables.jet_phi_true[ ihadr ] = kt_injets_hadr_breit[ ihadr ].phi();
		    }                    
		    for (int idet = 0; idet < kt_injets_breit_corr.size(); idet++) {
			    unfoldingVariables.jet_et_reco[ idet ] = kt_injets_breit_corr[ idet ].perp();
			    unfoldingVariables.jet_eta_reco[ idet ] = kt_injets_breit_corr[ idet ].eta();
			    unfoldingVariables.jet_phi_reco[ idet ] = kt_injets_breit_corr[ idet ].phi();
		    }                    

                    fUnfoldingTree -> Fill();
                    
                    hist = (TH1F*)(fHistArray) -> FindObject("h_q2_incl_CS_h_cp");
                    hist -> Fill( jet_ev_true.Get_q2_true() );

                    hist = (TH1F*)(fHistArray) -> FindObject("h_q2_incl_CS_d_cp");
                    hist -> Fill( jet_ev.Get_q2_da() );
                    
                    hist2d = (TH2F*)(fHistArray) -> FindObject("h_q2_incl_CS_unf_cp");
                    hist2d -> Fill( jet_ev.Get_q2_da(), jet_ev_true.Get_q2_true() );               

                    // Olaf's plots
                    if ( kt_injets_hadr_breit.size() == 1 )// 1-jet only events at hadron level
                    {
                        if ( kt_injets_breit_corr.size() == 1 )// 1-jet only events at detector level
                        {
                            // Look for matching detector jet
                            double deta = ( kt_injets_hadr_breit[0].eta() - kt_injets_breit_corr[0].eta() );
                            double dphi = ( kt_injets_hadr_breit[0].phi() - kt_injets_breit_corr[0].phi() );
                            double dr = deta*deta + dphi*dphi;
                            if ( dr < 1 )// found exactly one matched jet (Resolution matrix, acceptance correction)
                            {
                                hist2d = (TH2F*)(fHistArray) -> FindObject("h_et_incl_CS_unf_cp");
                                hist2d -> Fill( kt_injets_breit_corr[0].perp(), kt_injets_hadr_breit[0].perp(), w_incl );

                                hist = (TH1F*)(fHistArray) -> FindObject("h_et_incl_CS_d_cp");
                                hist -> Fill( kt_injets_breit_corr[0].perp(), w_incl );
                            }
                            // found different detector level jet (Background vector)
                            else
                            {
                                hist = (TH1F*)(fHistArray) -> FindObject("h_et_incl_CS_d_cp_b");
                                hist -> Fill( kt_injets_breit_corr[0].perp(), w_incl );
                            }
                        }
                        // 0 or more than 1 jet at detector level
                        else
                        {
                            if ( kt_injets_breit_corr.size() == 0 )// no jets at detector level (acceptance correction)
                            {
                                // ? increase acceptance counter
                            } 
                            else if ( kt_injets_breit_corr.size() > 1 ) // more than one jet at detector level
                            {                                       
                                for( unsigned int ijet = 0; ijet < kt_injets_breit_corr.size(); ijet++ ) 
                                {
                                        hist = (TH1F*)(fHistArray) -> FindObject("h_et_incl_CS_d_cp_b");
                                        hist -> Fill( kt_injets_breit_corr[ijet].perp(), w_incl );
                                }
                            }
                        }
                    }
                } // if ( !fSettings->is_data() && ishad_incl == true )
                
		for( unsigned int ijet = 0; ijet < kt_injets_breit_corr.size(); ijet++ )
		{
			hist = (TH1F*)(fHistArray) -> FindObject("h_q2_incl_CS_d");
			hist -> Fill( jet_ev.Get_q2_da(), w_incl );

			hist = (TH1F*)(fHistArray) -> FindObject("h_et_incl_CS_d");
			hist -> Fill( kt_injets_breit_corr[ ijet ].perp(), w_incl );
	
			for( unsigned int i_q2bin = 0; i_q2bin < n_q2bins_incl; i_q2bin++ )
			{
				if( jet_ev.Get_q2_da() > q2bins_incl[ i_q2bin ] && jet_ev.Get_q2_da() < q2bins_incl[ i_q2bin + 1 ]  )
				{
					TString shistname = "h_etinq2_incl_CS_d";	shistname += i_q2bin;
					hist = (TH1F*)(fHistArray) -> FindObject(shistname);
					hist -> Fill( kt_injets_breit_corr[ ijet ].perp(), w_incl );
				}
			}
		}

//		Efficiency, purity, acceptance + Unfolding
		if( !fSettings->is_data() && ishad_incl == true )
		{
#ifdef MC
			for( unsigned int ijet = 0; ijet < kt_injets_breit_corr.size(); ijet++ )
			{
				hist2d = (TH2F*)(fHistArray) -> FindObject("h_q2_incl_CS_unf");
				hist2d -> Fill( jet_ev_true.Get_q2_true(), jet_ev.Get_q2_da(), w_incl );

				hist2d = (TH2F*)(fHistArray) -> FindObject("h_et_incl_CS_unf");
				hist2d -> Fill( kt_injets_hadr_breit[ ijet ].perp(), kt_injets_breit_corr[ ijet ].perp(), w_incl );
		
				for( unsigned int i_q2bin = 0; i_q2bin < n_q2bins_incl; i_q2bin++ )
				{
					if( jet_ev.Get_q2_da() > q2bins_incl[ i_q2bin ] && jet_ev.Get_q2_da() < q2bins_incl[ i_q2bin + 1 ]  )
					{
						TString shistname = "h_etinq2_incl_CS_unf";	shistname += i_q2bin;
						hist2d = (TH2F*)(fHistArray) -> FindObject(shistname);
						hist2d -> Fill( kt_injets_hadr_breit[ ijet ].perp(), kt_injets_breit_corr[ ijet ].perp(), w_incl );
					}
				}
			}
#endif
		}
DIJETS:
		if( kt_injets_breit_corr.size() < 2 ) return -1;
		if( !CUTS::mjj_in_range( DijetVariables::Mjj( kt_injets_breit_corr ), MINMJJ ) ) return -1;
	
		isdet_di = true;

		if( !fSettings->is_data() )
		{
#ifdef MC
			if( fSettings->is_apply_trackveto_rew_di() )
			{
				Double_t randnum = fRandom_di.Uniform();
				Double_t p = fTrackVetoReweightingFunc_di -> Eval( jet_ev.Get_y_da() );
				if( randnum < ( 1. - p ) ) return -1;
			}
#endif
		}

		//Dijet cross sections
		hist = (TH1F*)(fHistArray) -> FindObject("h_q2_di_CS_d");
		hist -> Fill( jet_ev.Get_q2_da(), w_di );

		hist = (TH1F*)(fHistArray) -> FindObject("h_meanet_di_CS_d");
		hist -> Fill( DijetVariables::Etjetbar( kt_injets_breit_corr ), w_di );

		for( UInt_t i_q2bin = 0; i_q2bin < n_q2bins_di; i_q2bin++ )
		{
			if( jet_ev.Get_q2_da() > q2bins_di[ i_q2bin ] && jet_ev.Get_q2_da() < q2bins_di[ i_q2bin + 1 ]  )
			{
				TString shistname = "h_meanetinq2_di_CS_d";	shistname += i_q2bin;
				hist = (TH1F*)(fHistArray) -> FindObject(shistname);
				hist -> Fill( DijetVariables::Etjetbar( kt_injets_breit_corr ), w_di );
			}
		}

//		Efficiency, purity, acceptance + Unfolding
		if( !fSettings->is_data() && ishad_di == true )
		{
#ifdef MC
			hist2d = (TH2F*)(fHistArray) -> FindObject("h_q2_di_CS_unf");
			hist2d -> Fill( jet_ev_true.Get_q2_true(), jet_ev.Get_q2_da(), w_di );

			hist2d = (TH2F*)(fHistArray) -> FindObject("h_meanet_di_CS_unf");
			hist2d -> Fill( DijetVariables::Etjetbar( kt_injets_hadr_breit ), DijetVariables::Etjetbar( kt_injets_breit_corr ), w_di );
	
			for( UInt_t i_q2bin = 0; i_q2bin < n_q2bins_di; i_q2bin++ )
			{
				if( jet_ev.Get_q2_da() > q2bins_di[ i_q2bin ] && jet_ev.Get_q2_da() < q2bins_di[ i_q2bin + 1 ]  )
				{
					TString shistname = "h_meanetinq2_di_CS_unf";	shistname += i_q2bin;
					hist2d = (TH2F*)(fHistArray) -> FindObject(shistname);
					hist2d -> Fill( DijetVariables::Etjetbar( kt_injets_hadr_breit ), DijetVariables::Etjetbar( kt_injets_breit_corr ), w_di );
				}
			}
#endif
		}

TRIJETS:
		if( kt_injets_breit_corr.size() < 3 ) return -1;
	
		isdet_tri = true;

		//Trijet cross sections
		hist = (TH1F*)(fHistArray) -> FindObject("h_q2_tri_CS_d");
		hist -> Fill( jet_ev.Get_q2_da(), w_di );

		hist = (TH1F*)(fHistArray) -> FindObject("h_meanet_tri_CS_d");
		hist -> Fill( TrijetVariables::Etjetbar( kt_injets_breit_corr ), w_di );

		for( UInt_t i_q2bin = 0; i_q2bin < n_q2bins_tri; i_q2bin++ )
		{
			if( jet_ev.Get_q2_da() > q2bins_tri[ i_q2bin ] && jet_ev.Get_q2_da() < q2bins_tri[ i_q2bin + 1 ]  )
			{
				TString shistname = "h_meanetinq2_tri_CS_d";	shistname += i_q2bin;
				hist = (TH1F*)(fHistArray) -> FindObject(shistname);
				hist -> Fill( TrijetVariables::Etjetbar( kt_injets_breit_corr ), w_di );
			}
		}

//		Efficiency, purity, acceptance + Unfolding
		if( !fSettings->is_data() && ishad_tri == true )
		{
#ifdef MC
			hist2d = (TH2F*)(fHistArray) -> FindObject("h_q2_tri_CS_unf");
			hist2d -> Fill( jet_ev_true.Get_q2_true(), jet_ev.Get_q2_da(), w_di );

			hist2d = (TH2F*)(fHistArray) -> FindObject("h_meanet_tri_CS_unf");
			hist2d -> Fill( TrijetVariables::Etjetbar( kt_injets_hadr_breit ), TrijetVariables::Etjetbar( kt_injets_breit_corr ), w_di );
	
			for( UInt_t i_q2bin = 0; i_q2bin < n_q2bins_tri; i_q2bin++ )
			{
				if( jet_ev.Get_q2_da() > q2bins_tri[ i_q2bin ] && jet_ev.Get_q2_da() < q2bins_tri[ i_q2bin + 1 ]  )
				{
					TString shistname = "h_meanetinq2_tri_CS_unf";	shistname += i_q2bin;
					hist2d = (TH2F*)(fHistArray) -> FindObject(shistname);
					hist2d -> Fill( TrijetVariables::Etjetbar( kt_injets_hadr_breit ), TrijetVariables::Etjetbar( kt_injets_breit_corr ), w_di );
				}
			}
#endif
		}
	}


	return 0;
}
