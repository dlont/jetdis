#include "Analysis.h"

#include "Constants.h"
#include "Variables.h"
#include "JetEvent.h"
#include "JetEvent_True.h"
#include "JetUserInfo.h"
#include "Jets.h"
#include "Jets_Hadr.h"
#include "Jets_Part.h"
#include "Cuts.h"
#include "EventShapes.h"

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
			for ( itrRootFunc = fQ2ReweightingFunc.begin(); itrRootFunc != fQ2ReweightingFunc.end(); ++itrRootFunc ) 
			{
				wq_incl *= (*itrRootFunc) -> Eval( jet_ev_true.Get_q2_true() );
			}
			w_incl *= wq_incl;
		}

		if( fSettings->is_apply_q2_rew_di() )
		{
			Double_t wq_di = 1.;
			vector< TF1* >::iterator itrRootFunc;
			for ( itrRootFunc = fQ2ReweightingFunc.begin(); itrRootFunc != fQ2ReweightingFunc.end(); ++itrRootFunc ) 
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
		if( kt_injets_hadr_breit[ 0 ].perp() < MINJETETBREITCORRECTED || kt_injets_hadr_breit[ 1 ].perp() < MINJETETBREITCORRECTED ) { goto PARTLEVEL; }
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
		if( kt_injets_hadr_breit[ 2 ].perp() < MINJETETBREITCORRECTED ) { goto PARTLEVEL; }

		ishad_tri = true;

		//Trijet cross sections
		hist = (TH1F*)(fHistArray) -> FindObject("h_q2_tri_CS_h");
		hist -> Fill( jet_ev_true.Get_q2_true(), w_tri );

		hist = (TH1F*)(fHistArray) -> FindObject("h_meanet_tri_CS_h");
		hist -> Fill( DijetVariables::Etjetbar( kt_injets_hadr_breit ), w_tri );

		for( UInt_t i_q2bin = 0; i_q2bin < n_q2bins_tri; i_q2bin++ )
		{
			if( jet_ev_true.Get_q2_true() > q2bins_tri[ i_q2bin ] && jet_ev_true.Get_q2_true() < q2bins_tri[ i_q2bin + 1 ]  )
			{
				TString shistname = "h_meanetinq2_tri_CS_h";	shistname += i_q2bin;
				hist = (TH1F*)(fHistArray) -> FindObject(shistname);
				hist -> Fill( DijetVariables::Etjetbar( kt_injets_hadr_breit ), w_tri );
			}
		}
		//Hadron to parton corrections
		hist = (TH1F*)(fHistArray) -> FindObject("h_q2_tri_CS_h_h2p");
		hist -> Fill( jet_ev_true.Get_q2_true() );

		hist = (TH1F*)(fHistArray) -> FindObject("h_meanet_tri_CS_h_h2p");
		hist -> Fill( DijetVariables::Etjetbar( kt_injets_hadr_breit ) );

		for( UInt_t i_q2bin = 0; i_q2bin < n_q2bins_tri; i_q2bin++ )
		{
			if( jet_ev_true.Get_q2_true() > q2bins_tri[ i_q2bin ] && jet_ev_true.Get_q2_true() < q2bins_tri[ i_q2bin + 1 ]  )
			{
				TString shistname = "h_meanetinq2_tri_CS_h_h2p";	shistname += i_q2bin;
				hist = (TH1F*)(fHistArray) -> FindObject(shistname);
				hist -> Fill( DijetVariables::Etjetbar( kt_injets_hadr_breit ) );
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
		if( kt_injets_part_breit[ 0 ].perp() < MINJETETBREITCORRECTED || kt_injets_part_breit[ 1 ].perp() < MINJETETBREITCORRECTED ) { goto DETLEVEL; }
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
		if( kt_injets_part_breit[ 2 ].perp() < MINJETETBREITCORRECTED ) { goto DETLEVEL; }

		ispar_tri = true;

		//Trijets cross sections
		hist = (TH1F*)(fHistArray) -> FindObject("h_q2_tri_CS_p");
		hist -> Fill( jet_ev_true.Get_q2_true(), w_di );

		hist = (TH1F*)(fHistArray) -> FindObject("h_meanet_tri_CS_p");
		hist -> Fill( DijetVariables::Etjetbar( kt_injets_part_breit ), w_di );

		for( UInt_t i_q2bin = 0; i_q2bin < n_q2bins_tri; i_q2bin++ )
		{
			if( jet_ev_true.Get_q2_true() > q2bins_tri[ i_q2bin ] && jet_ev_true.Get_q2_true() < q2bins_tri[ i_q2bin + 1 ]  )
			{
				TString shistname = "h_meanetinq2_tri_CS_p";	shistname += i_q2bin;
				hist = (TH1F*)(fHistArray) -> FindObject(shistname);
				hist -> Fill( DijetVariables::Etjetbar( kt_injets_part_breit ), w_di );
			}
		}

		//Hadron to parton corrections
		hist = (TH1F*)(fHistArray) -> FindObject("h_q2_tri_CS_p_h2p");
		hist -> Fill( jet_ev_true.Get_q2_true() );

		hist = (TH1F*)(fHistArray) -> FindObject("h_meanet_tri_CS_p_h2p");
		hist -> Fill( DijetVariables::Etjetbar( kt_injets_part_breit ) );

		for( UInt_t i_q2bin = 0; i_q2bin < n_q2bins_tri; i_q2bin++ )
		{
			if( jet_ev_true.Get_q2_true() > q2bins_tri[ i_q2bin ] && jet_ev_true.Get_q2_true() < q2bins_tri[ i_q2bin + 1 ]  )
			{
				TString shistname = "h_meanetinq2_tri_CS_p_h2p";	shistname += i_q2bin;
				hist = (TH1F*)(fHistArray) -> FindObject(shistname);
				hist -> Fill( DijetVariables::Etjetbar( kt_injets_part_breit ) );
			}
		}

#endif//MC
	}

	if( fSettings->is_eval_qedZ0_corr() ) return -1;
DETLEVEL:
	return 0;
}
