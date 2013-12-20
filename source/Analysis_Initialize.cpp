#include "Analysis.h"

#include "Variables.h"
#include "EtCorrections.h"
#include "EtTransformer.h"

#include "TEntryList.h"
#include "TEventList.h"
#include "TF1.h"

#include <fstream>
#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

int Analysis::Initialize()
{
	//!Open "orange" tree
	fOrangeTree = new Variables(fChain);
	//!Speed-up reading by turning off useless branches
	fOrangeTree -> fChain -> SetBranchStatus("*", 0);
	//!Event info
	//MC part
	if( !fSettings->is_data() )
	{
#ifdef MC
	fOrangeTree -> fChain -> SetBranchStatus("Bosene", 1);
	fOrangeTree -> fChain -> SetBranchStatus("Bospx", 1);
	fOrangeTree -> fChain -> SetBranchStatus("Bospy", 1);
	fOrangeTree -> fChain -> SetBranchStatus("Bospz", 1);
	fOrangeTree -> fChain -> SetBranchStatus("Mcvtx", 1);
	fOrangeTree -> fChain -> SetBranchStatus("Nfmckin", 1);
	fOrangeTree -> fChain -> SetBranchStatus("Ppfmckin", 1);
	fOrangeTree -> fChain -> SetBranchStatus("Idfmckin", 1);
	fOrangeTree -> fChain -> SetBranchStatus("Nppart", 1);
	fOrangeTree -> fChain -> SetBranchStatus("Ppart", 1);
	fOrangeTree -> fChain -> SetBranchStatus("Idpart", 1);
	fOrangeTree -> fChain -> SetBranchStatus("Mc_subprnr", 1);
#endif//MC
	}
	//Both DATA & MC parts
	fOrangeTree -> fChain -> SetBranchStatus("Runnr", 1);
	fOrangeTree -> fChain -> SetBranchStatus("Eventnr", 1);
	fOrangeTree -> fChain -> SetBranchStatus("Evtake", 1);
	fOrangeTree -> fChain -> SetBranchStatus("Evtake_iwant", 1);
	fOrangeTree -> fChain -> SetBranchStatus("Tpoltake", 1);
	fOrangeTree -> fChain -> SetBranchStatus("Lpoltake", 1);
	fOrangeTree -> fChain -> SetBranchStatus("Fltw", 1);
	fOrangeTree -> fChain -> SetBranchStatus("Sltw", 1);
	fOrangeTree -> fChain -> SetBranchStatus("Tltw", 1);
	fOrangeTree -> fChain -> SetBranchStatus("Dstw", 1);
	fOrangeTree -> fChain -> SetBranchStatus("Otrkclass", 1);
	fOrangeTree -> fChain -> SetBranchStatus("Otrkmult", 1);
	fOrangeTree -> fChain -> SetBranchStatus("Otrkvmult", 1);
	fOrangeTree -> fChain -> SetBranchStatus("Ncaltru", 1);
	fOrangeTree -> fChain -> SetBranchStatus("Celllist", 1);
	fOrangeTree -> fChain -> SetBranchStatus("Caltru_cellnr", 1);
	fOrangeTree -> fChain -> SetBranchStatus("Caltru_e", 1);
	fOrangeTree -> fChain -> SetBranchStatus("Caltru_imbal", 1);
	fOrangeTree -> fChain -> SetBranchStatus("Caltru_t", 1);
	fOrangeTree -> fChain -> SetBranchStatus("Caltru_id", 1);
	fOrangeTree -> fChain -> SetBranchStatus("Caltru_pos", 1);
	fOrangeTree -> fChain -> SetBranchStatus("Caltru_eoriginal", 1);
	fOrangeTree -> fChain -> SetBranchStatus("Cal_px", 1);
	fOrangeTree -> fChain -> SetBranchStatus("Cal_py", 1);
	fOrangeTree -> fChain -> SetBranchStatus("Cal_pz", 1);
	fOrangeTree -> fChain -> SetBranchStatus("Cal_e", 1);
	fOrangeTree -> fChain -> SetBranchStatus("Cal_et", 1);
	fOrangeTree -> fChain -> SetBranchStatus("Cal_empz", 1);
	fOrangeTree -> fChain -> SetBranchStatus("Cal_pt", 1);
	fOrangeTree -> fChain -> SetBranchStatus("Cal_phi", 1);
	fOrangeTree -> fChain -> SetBranchStatus("Etamax_ce", 1);
	fOrangeTree -> fChain -> SetBranchStatus("Ncell", 1);
	fOrangeTree -> fChain -> SetBranchStatus("Emncand", 1);
	fOrangeTree -> fChain -> SetBranchStatus("Emecorr", 1);
	fOrangeTree -> fChain -> SetBranchStatus("Emtrknr", 1);
	fOrangeTree -> fChain -> SetBranchStatus("Emnrsl", 1);
	fOrangeTree -> fChain -> SetBranchStatus("Emsrtquad", 1);
	fOrangeTree -> fChain -> SetBranchStatus("Emcorrcode", 1);
	fOrangeTree -> fChain -> SetBranchStatus("Emncell", 1);
	fOrangeTree -> fChain -> SetBranchStatus("Emcellptr", 1);
	fOrangeTree -> fChain -> SetBranchStatus("Emdmcorrcode", 1);
	fOrangeTree -> fChain -> SetBranchStatus("Sincand", 1);
	fOrangeTree -> fChain -> SetBranchStatus("Sierror", 1);
	fOrangeTree -> fChain -> SetBranchStatus("Siprob", 1);
	fOrangeTree -> fChain -> SetBranchStatus("Sipos", 1);
	fOrangeTree -> fChain -> SetBranchStatus("Sicalpos", 1);
	fOrangeTree -> fChain -> SetBranchStatus("Sicalene", 1);
	fOrangeTree -> fChain -> SetBranchStatus("Siein", 1);
	fOrangeTree -> fChain -> SetBranchStatus("Sienin", 1);
	fOrangeTree -> fChain -> SetBranchStatus("Siecorr", 1);
	fOrangeTree -> fChain -> SetBranchStatus("Sith", 1);
	fOrangeTree -> fChain -> SetBranchStatus("Siph", 1);
	fOrangeTree -> fChain -> SetBranchStatus("Sipt", 1);
	fOrangeTree -> fChain -> SetBranchStatus("Sixdet", 1);
	fOrangeTree -> fChain -> SetBranchStatus("Siydet", 1);
	fOrangeTree -> fChain -> SetBranchStatus("Sitrknr", 1);
	fOrangeTree -> fChain -> SetBranchStatus("Sinrsl", 1);
	fOrangeTree -> fChain -> SetBranchStatus("Sitrkp", 1);
	fOrangeTree -> fChain -> SetBranchStatus("Sitrkth", 1);
	fOrangeTree -> fChain -> SetBranchStatus("Sitrkph", 1);
	fOrangeTree -> fChain -> SetBranchStatus("Sitrkdme", 1);
	fOrangeTree -> fChain -> SetBranchStatus("Sitrkpos", 1);
	fOrangeTree -> fChain -> SetBranchStatus("Sisrtquad", 1);
	fOrangeTree -> fChain -> SetBranchStatus("Sicorrcode", 1);
	fOrangeTree -> fChain -> SetBranchStatus("Siccempz", 1);
	fOrangeTree -> fChain -> SetBranchStatus("Sietamax", 1);
	fOrangeTree -> fChain -> SetBranchStatus("Sicchmom", 1);
	fOrangeTree -> fChain -> SetBranchStatus("Sincell", 1);
	fOrangeTree -> fChain -> SetBranchStatus("Sicellptr", 1);
	fOrangeTree -> fChain -> SetBranchStatus("Sidmcorr", 1);
	fOrangeTree -> fChain -> SetBranchStatus("Sidmcorrcode", 1);
	fOrangeTree -> fChain -> SetBranchStatus("Sidca", 1);
	fOrangeTree -> fChain -> SetBranchStatus("Sitrkp", 1);
	fOrangeTree -> fChain -> SetBranchStatus("Ntrkvtx", 1);
	fOrangeTree -> fChain -> SetBranchStatus("Xvtx", 1);
	fOrangeTree -> fChain -> SetBranchStatus("Yvtx", 1);
	fOrangeTree -> fChain -> SetBranchStatus("Zvtx", 1);
	fOrangeTree -> fChain -> SetBranchStatus("Chivtx", 1);
	fOrangeTree -> fChain -> SetBranchStatus("Pt_tr", 1);
	fOrangeTree -> fChain -> SetBranchStatus("Et_tr", 1);
	fOrangeTree -> fChain -> SetBranchStatus("Phi_tr", 1);
	fOrangeTree -> fChain -> SetBranchStatus("Nrcisl", 1);
	fOrangeTree -> fChain -> SetBranchStatus("Isltyp", 1);
	fOrangeTree -> fChain -> SetBranchStatus("Trk_ntracks", 1);
	fOrangeTree -> fChain -> SetBranchStatus("Trk_prim_vtx", 1);
	fOrangeTree -> fChain -> SetBranchStatus("Trk_px", 1);
	fOrangeTree -> fChain -> SetBranchStatus("Trk_py", 1);
	fOrangeTree -> fChain -> SetBranchStatus("Trk_pz", 1);
	fOrangeTree -> fChain -> SetBranchStatus("Trk_layouter", 1);
	fOrangeTree -> fChain -> SetBranchStatus("Trk_layinner", 1);
	fOrangeTree -> fChain -> SetBranchStatus("Cc_et", 1);
	fOrangeTree -> fChain -> SetBranchStatus("Cc_pt", 1);
	fOrangeTree -> fChain -> SetBranchStatus("Flt_cal_emc", 1);
	fOrangeTree -> fChain -> SetBranchStatus("Flt_et", 1);

	//!Create event list for passed events
	fEventList = new TEventList( "fEventList","EventList");
	fEventList -> Clear();

	HistFile = new TFile(fHistogramFileName.c_str(),"RECREATE");
	HistFile->cd();
	//Energy scale
	if( fSettings -> is_apply_enescale_corr() )
	{
		fEtScaleCorr = EtCorrections( fSettings -> GetEnescaleCorrFileName() );
        	fEtScaleTrans = EtTransformer( fEtScaleCorr );
	}
	if( fSettings -> is_apply_et_corr() )
	{
		fEtCorr = EtCorrections( fSettings -> GetEtCorrFileName() );
        	fEtTrans = EtTransformer( fEtCorr );
	}
	if( fSettings -> is_apply_zvtx_rew() )
	{
		fZvtxReweightingFile = new TFile( fSettings -> GetZvtxRewFileName().c_str() );
		fZvtxReweightingFunc = (TF1*)fZvtxReweightingFile->Get("zvtxreweighting");
	}
	if( fSettings -> is_apply_trackveto_rew_incl() )
	{
		fTrackVetoReweightingFile_incl = new TFile( fSettings -> GetTrackVetoRewFileName_incl().c_str() );
		fTrackVetoReweightingFunc_incl = (TF1*)fTrackVetoReweightingFile_incl->Get("tvrew");
		fTrackVetoReweightingFunc_incl -> SetName("tvrew_incl");
		fRandom_incl.SetSeed(291186);
	}
	if( fSettings -> is_apply_trackveto_rew_di() )
	{
		fTrackVetoReweightingFile_di = new TFile( fSettings -> GetTrackVetoRewFileName_di().c_str() );
		fTrackVetoReweightingFunc_di = (TF1*)fTrackVetoReweightingFile_di->Get("tvrew");
		fTrackVetoReweightingFunc_di -> SetName("tvrew_di");
		fRandom_di.SetSeed(291186);
	}
	if( fSettings -> is_apply_q2_rew_incl() )
	{
		vector < string > fileNames( fSettings -> GetQ2RewFileName_incl() );
		vector < string >::const_iterator itrFileName;
		for ( itrFileName = fileNames.begin(); itrFileName != fileNames.end(); ++itrFileName ) {
			fQ2ReweightingFile_incl.push_back( new TFile( (*itrFileName).c_str() ) );
		}

		// All functions in file must be named as q2rew0, q2rew1, q2rew2, etc.
		// The product function must be named q2rew
		if ( fQ2ReweightingFile_incl.size() == 1 ) {
			int Nfunctions = fQ2ReweightingFile_incl[0]->GetNkeys();
			for ( int iFun = 0; iFun < Nfunctions-1; ++iFun ) {
				TString funName = "q2rew_incl";	funName += iFun;
				if ( !fQ2ReweightingFile_incl[0]->Get( funName.Data() ) ) cout << "ERROR: function " << funName.Data() << " was not found in file " << fQ2ReweightingFile_incl[0]->GetName() << endl;
			}
		}

		vector < TFile* >::iterator itrRootFile;
		for ( itrRootFile = fQ2ReweightingFile_incl.begin(); itrRootFile != fQ2ReweightingFile_incl.end(); ++itrRootFile ) {
			fQ2ReweightingFunc_incl.push_back( (TF1*)(*itrRootFile)->Get("q2rew_incl") );
		}	
	}
	if( fSettings -> is_apply_q2_rew_di() )
	{
		vector < string > fileNames( fSettings -> GetQ2RewFileName_di() );
		vector < string >::const_iterator itrFileName;
		for ( itrFileName = fileNames.begin(); itrFileName != fileNames.end(); ++itrFileName ) {
			fQ2ReweightingFile_di.push_back( new TFile( (*itrFileName).c_str() ) );
		}

		// All functions in file must be named as q2rew0, q2rew1, q2rew2, etc.
		// The product function must be named q2rew
		if ( fQ2ReweightingFile_di.size() == 1 ) {
			int Nfunctions = fQ2ReweightingFile_di[0]->GetNkeys();
			for ( int iFun = 0; iFun < Nfunctions-1; ++iFun ) {
				TString funName = "q2rew_di";	funName += iFun;
				if ( !fQ2ReweightingFile_di[0]->Get( funName.Data() ) ) cout << "ERROR: function " << funName.Data() << " was not found in file " << fQ2ReweightingFile_di[0]->GetName() << endl;
			}
		}

		vector < TFile* >::iterator itrRootFile;
		for ( itrRootFile = fQ2ReweightingFile_di.begin(); itrRootFile != fQ2ReweightingFile_di.end(); ++itrRootFile ) {
			fQ2ReweightingFunc_di.push_back( (TF1*)(*itrRootFile)->Get("q2rew_di") );
		}	
	}
	//runinfo
	lumifile.open( "luminosity_file.txt" ); //!!!ACHTUNG HARDCODED filename!!!!
   	runinfo_runs_number = 3175;
   	runinfo = new RunInfo[ runinfo_runs_number ];
   	Int_t lf_Runnr;
   	Double_t lf_lpol_lumi;
   	Double_t lf_tpol_lumi;
   	Double_t lf_lpol_pol;
   	Double_t lf_tpol_pol;
   	//    Int_t j = 0;
   	for( Int_t i = 0; i < runinfo_runs_number; i++ )
	{
       		lumifile >> lf_Runnr;
       		lumifile >> lf_tpol_lumi;
       		lumifile >> lf_lpol_lumi;
       		lumifile >> lf_tpol_pol;
       		lumifile >> lf_lpol_pol;
       		runinfo[i].SetRunnr(lf_Runnr);
       		runinfo[i].SetLpol_lumi(lf_lpol_lumi);
       		runinfo[i].SetTpol_lumi(lf_tpol_lumi);
       		runinfo[i].SetLpol_pol(lf_lpol_pol);
       		runinfo[i].SetTpol_pol(lf_tpol_pol);
	}
	lumifile.close();
        
        //Book mini-ntuples for unfolding
        TString strMiniUnfoldFileName(fHistogramFileName.c_str());
        TObjArray* strTokens = strMiniUnfoldFileName.Tokenize(".");
        strMiniUnfoldFileName = dynamic_cast<TObjString*>( strTokens->At( 0 ) )->GetString();
        strMiniUnfoldFileName += "_miniUnfolding.root";
        
        MiniUnfoldingFile = new TFile( strMiniUnfoldFileName, "RECREATE" );
        fUnfoldingTree = new TTree("Unfolding", "Unfolding input");
        fUnfoldingTree->Branch( "q2true", &unfoldingVariables.q2true, "Generated Q2 spectrum/F");
        fUnfoldingTree->Branch( "q2reco", &unfoldingVariables.q2reco, "Reconstructed Q2 spectrum/F");
        
        fUnfoldingTree->Branch( "ytrue", &unfoldingVariables.ytrue, "Generated y spectrum/F");
        fUnfoldingTree->Branch( "yreco", &unfoldingVariables.yreco, "Reconstructed y spectrum/F");
        
        fUnfoldingTree->Branch( "njetstrue", &unfoldingVariables.njetstrue, "Number of hadron level jets/I");
        fUnfoldingTree->Branch( "etjettrue[njetstrue]", &unfoldingVariables.jet_et_true[0], "Hadron level jet ET in the breit/F");
        fUnfoldingTree->Branch( "etajettrue[njetstrue]", &unfoldingVariables.jet_eta_true[0], "Hadron level jet ETA in the breit/F");
        fUnfoldingTree->Branch( "phijettrue[njetstrue]", &unfoldingVariables.jet_phi_true[0], "Hadron level jet PHI in the breit/F");
        
        fUnfoldingTree->Branch( "njetsreco", &unfoldingVariables.njetsreco, "Number of detector level jets/I");
        fUnfoldingTree->Branch( "etjetreco[njetsreco]", &unfoldingVariables.jet_et_reco[0], "Detector level jet ET in the breit/F");
        fUnfoldingTree->Branch( "etajetreco[njetsreco]", &unfoldingVariables.jet_eta_reco[0], "Detector level jet ETA in the breit/F");
        fUnfoldingTree->Branch( "phijetreco[njetsreco]", &unfoldingVariables.jet_phi_reco[0], "Detector level jet PHI in the breit/F");
        
	//!Book histograms
	BookHistograms();
	//!Book branches
	BookBranches();
	return 0;
}

