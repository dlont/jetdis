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
	fOrangeTree -> fChain -> SetBranchStatus("bosene", 1);
	fOrangeTree -> fChain -> SetBranchStatus("bospx", 1);
	fOrangeTree -> fChain -> SetBranchStatus("bospy", 1);
	fOrangeTree -> fChain -> SetBranchStatus("bospz", 1);
	fOrangeTree -> fChain -> SetBranchStatus("Mcvtx", 1);//!
	fOrangeTree -> fChain -> SetBranchStatus("Nfmckin", 1);
	fOrangeTree -> fChain -> SetBranchStatus("Ppfmckin", 1);
	fOrangeTree -> fChain -> SetBranchStatus("Idfmckin", 1);
	fOrangeTree -> fChain -> SetBranchStatus("nppart", 1);
	fOrangeTree -> fChain -> SetBranchStatus("ppart", 1);
	fOrangeTree -> fChain -> SetBranchStatus("idpart", 1);
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
	fOrangeTree -> fChain -> SetBranchStatus("Otrkclass", 1);//!
	fOrangeTree -> fChain -> SetBranchStatus("Otrkmult", 1);//!
	fOrangeTree -> fChain -> SetBranchStatus("Otrkvmult", 1);//!
	fOrangeTree -> fChain -> SetBranchStatus("ncaltru", 1);
	fOrangeTree -> fChain -> SetBranchStatus("Celllist", 1);
	fOrangeTree -> fChain -> SetBranchStatus("caltru_cellnr", 1);
	fOrangeTree -> fChain -> SetBranchStatus("caltru_e", 1);
	fOrangeTree -> fChain -> SetBranchStatus("caltru_imbal", 1);
	fOrangeTree -> fChain -> SetBranchStatus("caltru_t", 1);
	fOrangeTree -> fChain -> SetBranchStatus("caltru_id", 1);
	fOrangeTree -> fChain -> SetBranchStatus("caltru_pos", 1);
	fOrangeTree -> fChain -> SetBranchStatus("caltru_eoriginal", 1);//!
	fOrangeTree -> fChain -> SetBranchStatus("Cal_px", 1);
	fOrangeTree -> fChain -> SetBranchStatus("Cal_py", 1);
	fOrangeTree -> fChain -> SetBranchStatus("Cal_pz", 1);
	fOrangeTree -> fChain -> SetBranchStatus("Cal_e", 1);
	fOrangeTree -> fChain -> SetBranchStatus("Cal_et", 1);
	fOrangeTree -> fChain -> SetBranchStatus("Cal_empz", 1);
	fOrangeTree -> fChain -> SetBranchStatus("Cal_pt", 1);
	fOrangeTree -> fChain -> SetBranchStatus("Cal_phi", 1);
	fOrangeTree -> fChain -> SetBranchStatus("Etamax_ce", 1);
	fOrangeTree -> fChain -> SetBranchStatus("ncell", 1);
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
	fOrangeTree -> fChain -> SetBranchStatus("phi_tr", 1);
	fOrangeTree -> fChain -> SetBranchStatus("Nrcisl", 1);
	fOrangeTree -> fChain -> SetBranchStatus("Isltyp", 1);
	fOrangeTree -> fChain -> SetBranchStatus("trk_ntracks", 1);
	fOrangeTree -> fChain -> SetBranchStatus("trk_prim_vtx", 1);
	fOrangeTree -> fChain -> SetBranchStatus("trk_px", 1);
	fOrangeTree -> fChain -> SetBranchStatus("trk_py", 1);
	fOrangeTree -> fChain -> SetBranchStatus("trk_pz", 1);
	fOrangeTree -> fChain -> SetBranchStatus("trk_layouter", 1);
	fOrangeTree -> fChain -> SetBranchStatus("trk_layinner", 1);
	fOrangeTree -> fChain -> SetBranchStatus("Cc_et", 1);
	fOrangeTree -> fChain -> SetBranchStatus("Cc_pt", 1);

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
	if( fSettings -> is_apply_trackveto_rew() )
	{
		fTrackVetoReweightingFile = new TFile( fSettings -> GetTrackVetoRewFileName().c_str() );
		fTrackVetoReweightingFunc = (TF1*)fTrackVetoReweightingFile->Get("tvrew");
		fRandom.SetSeed(291186);
	}
	if( fSettings -> is_apply_q2_rew() )
	{
		vector < string > fileNames( fSettings -> GetQ2RewFileName() );
		vector < string >::const_iterator itrFileName;
		for ( itrFileName = fileNames.begin(); itrFileName != fileNames.end(); ++itrFileName ) {
			fQ2ReweightingFile.push_back( new TFile( (*itrFileName).c_str() ) );
		}

		// All functions in file must be named as q2rew0, q2rew1, q2rew2, etc.
		// The product function must be named q2rew
		if ( fQ2ReweightingFile.size() == 1 ) {
			int Nfunctions = fQ2ReweightingFile[0]->GetNkeys();
			for ( int iFun = 0; iFun < Nfunctions-1; ++iFun ) {
				TString funName = "q2rew";	funName += iFun;
				fQ2ReweightingFile[0]->Get( funName.Data() );
			}
		}

		vector < TFile* >::iterator itrRootFile;
		for ( itrRootFile = fQ2ReweightingFile.begin(); itrRootFile != fQ2ReweightingFile.end(); ++itrRootFile ) {
			fQ2ReweightingFunc.push_back( (TF1*)(*itrRootFile)->Get("q2rew") );
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
       		//                cout << runinfo[j].GetRunnr()
       		// << " " << runinfo[j].GetLpol_lumi()
       		// << " " << runinfo[j].GetTpol_lumi() << endl;
       		//                j++;
	}
	lumifile.close();
	//!Book histograms
	BookHistograms();
	//!Book branches
	BookBranches();
	//!Run on defined events
//	fout_before_mjj.open("./before_mjj_joerg_corr");//!!!REMOVE
//	fout_after_mjj.open("./after_mjj_joerg_corr");//!!!REMOVE
//	file.open("./list_to_run"); //!!!REMOVE first raw from your list
//	NLines = 0;
//	filern = 58383;
//	fileen = 1911;
	return 0;
}

