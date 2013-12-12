#ifndef ANALYSIS_H
#define ANALYSIS_H

#include <fstream>
#include <iostream>
#include <string>
#include <vector>
#include <utility>

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>
#include <TEntryList.h>
#include <TEventList.h>
#include <TMap.h>
#include <TF1.h>
#include <TRandom3.h>

#include "Variables.h"
#include "Settings.h"
#include "EtCorrections.h"
#include "EtTransformer.h"
#include "runinfo.h"

using namespace std;

class Analysis
{
 public:
		 Analysis();
		 Analysis( TChain*);
	virtual ~Analysis();
 public:
	virtual int Initialize();

	int SetFilteringMode( bool = false);
	int SetHistogramFile( const char*);
	int SetHistogramFile( const string);
	inline string GetHistogramFile() const { return fHistogramFileName; };

	int SetOutputFile( const char*);
	int SetOutputFile( const string);
	inline string GetOutputFile() const { return fOutputFileName; };

	int SetEvenListFile( const char*);
	int SetEvenListFile( const string);
	inline string GetEvenListFile() const { return fEvenListFileName; };

	int SetSettings( Settings* );
	inline Settings* GetSettings() const { return fSettings; };

	int SetReport( unsigned int);
	int Run( Long64_t = -1);
	
 private:
	virtual int Event( Long64_t );
	virtual void Report( unsigned int i) { cout << "Report i=" << i << endl;}
	virtual int SetPassed( Long64_t, Long64_t = -1, Long64_t = -1);
	virtual int PushRunEvent( Long64_t, Long64_t);

 private:
	virtual int Finalize();
	virtual int BookHistograms();
	virtual int BookBranches();
	virtual int WriteHistograms();
        virtual int WriteMiniUnfolding();
	virtual int WriteOutput();
	virtual int WriteEventList();
	
 private:
	//!Chain of files to be analyzed
	TChain 					*fChain;
	//!Tree of filtered events
	TTree                                   *fOutTree;
	//!Name of the histogram file
	string 					fHistogramFileName;
	//!Name of file with filtered events
	string 					fOutputFileName;
	//!ROOT file with output histograms
	TFile* 					HistFile;
        //!ROOT file with trees of input for unfolding
        TFile*                                  MiniUnfoldingFile;
        //!Tree of unfolding input
        TTree                                   *fUnfoldingTree;
        //!Structure that holds unfolding ntuple variables
        struct UnfoldingInput {
            float q2true;
            float q2reco;
            
            float ytrue;
            float yreco;
            
            // jet variables
            int njetstrue;
            float jet_et_true[10];
            float jet_eta_true[10];
            int njetsreco;
            float jet_et_reco[10];
            float jet_eta_reco[10];
            
            void flush() {
                q2true = 0.;
                q2reco = 0.;
                
                ytrue = 0.;
                yreco = 0.;
                
                njetstrue = 0;
                njetsreco = 0;
                
                for ( int i = 0; i < 10; ++i ) {
                    jet_et_true[i] = 0.;
                    jet_et_reco[i] = 0.;
                    jet_eta_true[i] = 0.;
                    jet_eta_reco[i] = 0.;
                }
            }
            
        } unfoldingVariables;
	//!Name of file with event list
	string					fEvenListFileName;
	//!Period of reporting during execution
	unsigned int 				fReportPeriod;
	//!Run and Event list
	vector< pair<Long64_t, Long64_t> >      fRunEventList;
	//!Pointer to the opened branches
	Variables				*fOrangeTree;
	//!Filtering Flag
	bool					fIsFiltering;
	//!Array of histograms to be filled
	TObjArray				*fHistArray;
	//!Array of Ntuples to be filled
	TObjArray               *fNtupleArray;
	//!Pointer to list with selected entries
	TEventList              *fEventList;
	//!Pointer to program settings
	Settings                *fSettings;
	//!Run on defined events
//	ifstream file;
//	Int_t filern;
//	Int_t fileen;
//	Int_t NLines;
	//!Eneregy scale correction
	EtCorrections fEtScaleCorr;
        EtTransformer fEtScaleTrans;
	//!Et correction
	EtCorrections fEtCorr;
        EtTransformer fEtTrans;
	//!Zvtx reweighting
	TFile* fZvtxReweightingFile;
	TF1*   fZvtxReweightingFunc;
	//!Track veto reweighting
	TFile* fTrackVetoReweightingFile_incl;
	TF1*   fTrackVetoReweightingFunc_incl;
	TFile* fTrackVetoReweightingFile_di;
	TF1*   fTrackVetoReweightingFunc_di;
	//!Q2 reweighting
	vector< TFile* > fQ2ReweightingFile_incl;
	vector< TF1* >   fQ2ReweightingFunc_incl;
	vector< TFile* > fQ2ReweightingFile_di;
	vector< TF1* >   fQ2ReweightingFunc_di;
	TRandom3 fRandom_incl;
	TRandom3 fRandom_di;
	//!Runinfo
	//!Runinfo
	Int_t runinfo_runs_number;
	RunInfo* runinfo;
	ifstream lumifile;
	
//	ofstream fout_before_mjj;//!!!REMOVE
//	ofstream fout_after_mjj;//!!!REMOVE
};
#endif
