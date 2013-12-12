#include "Analysis.h"

#include "TChain.h"
#include "TEntryList.h"
#include "TEventList.h"

#include <iostream>
#include <vector>
#include <utility>
#include <fstream>

#define STOP_CODE -7

using namespace std;
class Analysis;

//!Default constructor
Analysis::Analysis() {}
//!Constructor with initialisation
Analysis::Analysis( TChain *ch) : fChain(ch),
					  fHistogramFileName("histogram.root"),
					  fOutputFileName("output.root"),
					  fEvenListFileName("event_list.txt"),
					  fReportPeriod(1000)
{ ; }

//!Default destructor
Analysis::~Analysis()
{
	Finalize();
}

int Analysis::Finalize()
{
	WriteEventList();
	WriteHistograms();
        WriteMiniUnfolding();
	WriteOutput();
	
	return 0;
}

int Analysis::SetReport( unsigned int i = 10)
{
        fReportPeriod = i;

        return 0;
}

//!Runs events processing
int Analysis::Run( Long64_t Nevents)
{
	if ( Nevents < 0) Nevents = fChain->GetEntriesFast();
	cout << "Run " << Nevents << " to process" << endl;
	for ( unsigned long int i = 0; i < Nevents; i++)
	{
		if( fOrangeTree -> LoadTree( i ) < 0 ) break;
		if( i%fReportPeriod == 0 ) Report(i);
		fOrangeTree->GetEntry(i);
		if( Event(i) == STOP_CODE ) break;
	}
	return 0;
}

int Analysis::SetFilteringMode( bool isFiltering)
{
        fIsFiltering = isFiltering;
        //cout<<"SetFilteringMode "<<endl;

        return 0;
}

//!Pushes one entry for small tree file of selected events
int Analysis::SetPassed( Long64_t EntryNumber, Long64_t RunNumber, Long64_t EventNumber)
{
        if( fOutTree)
        {
                fEventList -> Enter( EntryNumber);
        }

        if( RunNumber > 0) PushRunEvent( RunNumber, EventNumber);

        return 0;
}

//!Push one element to the event list, which will be written to the file
int Analysis::PushRunEvent( Long64_t RunNumber, Long64_t EventNumber)
{
        fRunEventList.push_back( make_pair(RunNumber, EventNumber));
        //cout<<"PushRunEvent "<< RunNumber <<"\t"<<EventNumber<<endl;

        return 0;
}

//!Sets name of the file, in which histograms will be written
int Analysis::SetHistogramFile( const char* file_name)
{
	fHistogramFileName = file_name;

	return 0;
}

//!Sets name of the file, in which histograms will be written
int Analysis::SetHistogramFile( const string file_name)
{
	fHistogramFileName = file_name;

	return 0;
}

//!Set name of the file with tree of selected events
int Analysis::SetOutputFile( const string file_name)
{
	fOutputFileName = file_name;

	return 0;
}

//!Set name of the file with tree of selected events
int Analysis::SetOutputFile( const char* file_name)
{
	fOutputFileName = file_name;

	return 0;
}

//!Set name of the event list file
int Analysis::SetEvenListFile( const string file_name)
{
	fEvenListFileName = file_name;

	return 0;
}

//!Set name of the event list file
int Analysis::SetEvenListFile( const char* file_name)
{
	fEvenListFileName = file_name;

	return 0;
}

//!Set programm settings, that were read from xml
int Analysis::SetSettings( Settings* settings)
{
	fSettings = settings;
	
	return 0;
}

//!Write histograms to the file
int Analysis::WriteHistograms()
{
	HistFile->cd();	
	HistFile->Write();
	HistFile->Close();
	delete HistFile;

	return 0;
}

//!Write histograms to the file
int Analysis::WriteMiniUnfolding()
{
	MiniUnfoldingFile->cd();	
	MiniUnfoldingFile->Write();
	MiniUnfoldingFile->Close();
	delete MiniUnfoldingFile;

	return 0;
}

//!Write selected events to the smaller tree file
int Analysis::WriteOutput()
{
	if ( fIsFiltering)
	{
		cout<<"Loading trees"<<endl;
		//attach event list to the chain
		fChain->SetEventList( fEventList);
		//Create output file
		TFile *OutFile = new TFile(fOutputFileName.c_str(),"RECREATE");
		fOutTree = fChain->CopyTree( "");
//		fOutTree->Print();
/*		if( fNtupleArray->GetSize() != 0)
		{
			OutFile->cd();
			TIter next( fNtupleArray);
			TObject *obj;
			while( obj = next())
			{
				obj->Write();
			}
		}
*/
		OutFile->Write();	
		OutFile->Close();
		delete OutFile;

		delete fEventList;
	}

	return 0;
}

//!Write selected events to the file
int Analysis::WriteEventList()
{
	//If list is not empty continue
	if ( fRunEventList.size() == 0) return 1;

	//Open output file
	ofstream out_file(fEvenListFileName.c_str());

	//Write list to the file
	for( unsigned int k = 0; k < fRunEventList.size(); k++) {
	 out_file << fRunEventList[k].first<<"\t"
		  << fRunEventList[k].second<< endl;
	}

	//Close output file
	out_file.close();

	return 0;
}
