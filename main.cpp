#include "Analysis.h"
#include "Settings.h"

#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <map>

#include "TROOT.h"
#include "TChain.h"
#include "TString.h"

#include "ntuples04p.h"
#include "ntuples05e.h"
#include "ntuples06e.h"
#include "ntuples06p.h"
#include "ntuples07p.h"

#include "High_Q2_NC_DIS_QCD_ariadne_05e.h"
#include "High_Q2_NC_DIS_QCD_ariadne_06e.h"
#include "High_Q2_NC_DIS_QCD_ariadne_0607p.h"

#include "High_Q2_NC_DIS_QCD_lepto_05e.h"
#include "High_Q2_NC_DIS_QCD_lepto_06e.h"
#include "High_Q2_NC_DIS_QCD_lepto_0607p.h"

using namespace std;

int CheckArguments( int argc, char** argv )
{
        if( argc <= 1 || argc > 3 ) {
                cerr << "Wrong usage." << endl;
                cerr << "Usage: program.exe <filename.xml> <output folder>" << endl;

                return 100;
        }

        if( string( argv[1] ).find(".xml") == string::npos ) {
                cerr << "Error: Non .xml file specified." << endl;
                return 101;
        }
	
	return 0;
}


int main(int argc, char** argv)
{

	if( CheckArguments( argc, argv ) == 100 || CheckArguments( argc, argv ) == 101 ) return 0;

	Settings st;
        st.LoadSettingsFromFile( argv[1] );

	// Read output destination folder from command line
        TString strOutputFolder( "./" );
        if ( argc == 3 ) strOutputFolder = argv[2];

	TChain *ch = new TChain("orange");
	//if( st.GetSampleName().find("testcn_05e") != string::npos )
	//{ch->Add("zeus://acs/z/ntup/05/v06a/data/root/data_05_52703_52703_01.root");}
	//{ch->Add("zeus://acs/z/ntup/05/v06a/data/root/data_05_52292_52364_01.root");
	//ch->Add("zeus://acs/z/ntup/05/v06a/data/root/data_05_52365_52366_01.root");
	//ch->Add("zeus://acs/z/ntup/05/v06a/data/root/data_05_52367_52367_01.root");
	//ch->Add("zeus://acs/z/ntup/05/v06a/data/root/data_05_52367_52367_02.root");
	//ch->Add("zeus://acs/z/ntup/05/v06a/data/root/data_05_52368_52371_01.root");
	//ch->Add("zeus://acs/z/ntup/05/v06a/data/root/data_05_52372_52381_01.root");
	//ch->Add("zeus://acs/z/ntup/05/v06a/data/root/data_05_52382_52382_01.root");
	//ch->Add("zeus://acs/z/ntup/05/v06a/data/root/data_05_52384_52384_01.root");
	//ch->Add("zeus://acs/z/ntup/05/v06a/data/root/data_05_52386_52386_01.root");
	//}
	
//DATA
	Int_t sf = 0;
	sf = (Int_t)floor( numberOfRootFiles04p / 5 );
	if( st.GetSampleName().find("04p0") != string::npos ) for( int i = 0; i < 1*sf; i++ )ch->Add( prefixFiles04p + rootFiles04p[ i ] );
	if( st.GetSampleName().find("04p1") != string::npos ) for( int i = 1*sf; i < 2*sf; i++ )ch->Add( prefixFiles04p + rootFiles04p[ i ] );
	if( st.GetSampleName().find("04p2") != string::npos ) for( int i = 2*sf; i < 3*sf; i++ )ch->Add( prefixFiles04p + rootFiles04p[ i ] );
	if( st.GetSampleName().find("04p3") != string::npos ) for( int i = 3*sf; i < 4*sf; i++ )ch->Add( prefixFiles04p + rootFiles04p[ i ] );
	if( st.GetSampleName().find("04p4") != string::npos ) for( int i = 4*sf; i < numberOfRootFiles04p; i++ )ch->Add( prefixFiles04p + rootFiles04p[ i ] );
	sf = (Int_t)floor( numberOfRootFiles05e / 13 );
	if( st.GetSampleName().find("05e00") != string::npos ) for( int i = 0; i < 1*sf; i++ )ch->Add( prefixFiles05e + rootFiles05e[ i ] );
	if( st.GetSampleName().find("05e01") != string::npos ) for( int i = 1*sf; i < 2*sf; i++ )ch->Add( prefixFiles05e + rootFiles05e[ i ] );
	if( st.GetSampleName().find("05e02") != string::npos ) for( int i = 2*sf; i < 3*sf; i++ )ch->Add( prefixFiles05e + rootFiles05e[ i ] );
	if( st.GetSampleName().find("05e03") != string::npos ) for( int i = 3*sf; i < 4*sf; i++ )ch->Add( prefixFiles05e + rootFiles05e[ i ] );
	if( st.GetSampleName().find("05e04") != string::npos ) for( int i = 4*sf; i < 5*sf; i++ )ch->Add( prefixFiles05e + rootFiles05e[ i ] );
	if( st.GetSampleName().find("05e05") != string::npos ) for( int i = 5*sf; i < 6*sf; i++ )ch->Add( prefixFiles05e + rootFiles05e[ i ] );
	if( st.GetSampleName().find("05e06") != string::npos ) for( int i = 6*sf; i < 7*sf; i++ )ch->Add( prefixFiles05e + rootFiles05e[ i ] );
	if( st.GetSampleName().find("05e07") != string::npos ) for( int i = 7*sf; i < 8*sf; i++ )ch->Add( prefixFiles05e + rootFiles05e[ i ] );
	if( st.GetSampleName().find("05e08") != string::npos ) for( int i = 8*sf; i < 9*sf; i++ )ch->Add( prefixFiles05e + rootFiles05e[ i ] );
	if( st.GetSampleName().find("05e09") != string::npos ) for( int i = 9*sf; i < 10*sf; i++ )ch->Add( prefixFiles05e + rootFiles05e[ i ] );
	if( st.GetSampleName().find("05e10") != string::npos ) for( int i = 10*sf; i < 11*sf; i++ )ch->Add( prefixFiles05e + rootFiles05e[ i ] );
	if( st.GetSampleName().find("05e11") != string::npos ) for( int i = 11*sf; i < 12*sf; i++ )ch->Add( prefixFiles05e + rootFiles05e[ i ] );
	if( st.GetSampleName().find("05e12") != string::npos ) for( int i = 12*sf; i < numberOfRootFiles05e; i++ )ch->Add( prefixFiles05e + rootFiles05e[ i ] );

	sf = (Int_t)floor( numberOfRootFiles06e / 5 );
	if( st.GetSampleName().find("06e0") != string::npos ) for( int i = 0; i < 1*sf; i++ )ch->Add( prefixFiles06e + rootFiles06e[ i ] );
	if( st.GetSampleName().find("06e1") != string::npos ) for( int i = 1*sf; i < 2*sf; i++ )ch->Add( prefixFiles06e + rootFiles06e[ i ] );
	if( st.GetSampleName().find("06e2") != string::npos ) for( int i = 2*sf; i < 3*sf; i++ )ch->Add( prefixFiles06e + rootFiles06e[ i ] );
	if( st.GetSampleName().find("06e3") != string::npos ) for( int i = 3*sf; i < 4*sf; i++ )ch->Add( prefixFiles06e + rootFiles06e[ i ] );
	if( st.GetSampleName().find("06e4") != string::npos ) for( int i = 4*sf; i < numberOfRootFiles06e; i++ )ch->Add( prefixFiles06e + rootFiles06e[ i ] );

	sf = (Int_t)floor( numberOfRootFiles06p / 9 );
	if( st.GetSampleName().find("06p0") != string::npos ) for( int i = 0; i < 1*sf; i++ )ch->Add( prefixFiles06p + rootFiles06p[ i ] );
	if( st.GetSampleName().find("06p1") != string::npos ) for( int i = 1*sf; i < 2*sf; i++ )ch->Add( prefixFiles06p + rootFiles06p[ i ] );
	if( st.GetSampleName().find("06p2") != string::npos ) for( int i = 2*sf; i < 3*sf; i++ )ch->Add( prefixFiles06p + rootFiles06p[ i ] );
	if( st.GetSampleName().find("06p3") != string::npos ) for( int i = 3*sf; i < 4*sf; i++ )ch->Add( prefixFiles06p + rootFiles06p[ i ] );
	if( st.GetSampleName().find("06p4") != string::npos ) for( int i = 4*sf; i < 5*sf; i++ )ch->Add( prefixFiles06p + rootFiles06p[ i ] );
	if( st.GetSampleName().find("06p5") != string::npos ) for( int i = 5*sf; i < 6*sf; i++ )ch->Add( prefixFiles06p + rootFiles06p[ i ] );
	if( st.GetSampleName().find("06p6") != string::npos ) for( int i = 6*sf; i < 7*sf; i++ )ch->Add( prefixFiles06p + rootFiles06p[ i ] );
	if( st.GetSampleName().find("06p7") != string::npos ) for( int i = 7*sf; i < 8*sf; i++ )ch->Add( prefixFiles06p + rootFiles06p[ i ] );
	if( st.GetSampleName().find("06p8") != string::npos ) for( int i = 8*sf; i < numberOfRootFiles06p; i++ )ch->Add( prefixFiles06p + rootFiles06p[ i ] );
	
	sf = (Int_t)floor( numberOfRootFiles07p / 4 );
	if( st.GetSampleName().find("07p0") != string::npos ) for( int i = 0; i < 1*sf ; i++ )ch->Add( prefixFiles07p + rootFiles07p[ i ] );
	if( st.GetSampleName().find("07p1") != string::npos ) for( int i = 1*sf; i < 2*sf; i++ )ch->Add( prefixFiles07p + rootFiles07p[ i ] );
	if( st.GetSampleName().find("07p2") != string::npos ) for( int i = 2*sf; i < 3*sf; i++ )ch->Add( prefixFiles07p + rootFiles07p[ i ] );
	if( st.GetSampleName().find("07p3") != string::npos ) for( int i = 3*sf; i < numberOfRootFiles07p; i++ )ch->Add( prefixFiles07p + rootFiles07p[ i ] );
	
/*	
	if( st.GetSampleName().find("04p_data") != string::npos ) for( int i = 0; i < numberOfRootFiles04p; i++ )ch->Add( prefixFiles04p + rootFiles04p[ i ] );
	if( st.GetSampleName().find("05e_data") != string::npos ) for( int i = 0; i < numberOfRootFiles05e; i++ )ch->Add( prefixFiles05e + rootFiles05e[ i ] );
	if( st.GetSampleName().find("06e_data") != string::npos ) for( int i = 0; i < numberOfRootFiles06e; i++ )ch->Add( prefixFiles06e + rootFiles06e[ i ] );
	if( st.GetSampleName().find("06p_data") != string::npos ) for( int i = 0; i < numberOfRootFiles06p; i++ )ch->Add( prefixFiles06p + rootFiles06p[ i ] );
	if( st.GetSampleName().find("07p_data") != string::npos ) for( int i = 0; i < numberOfRootFiles07p; i++ )ch->Add( prefixFiles07p + rootFiles07p[ i ] );
*/
	
// MC LEPTO
	if( st.GetSampleName().find("05e_lepto") != string::npos ) for( int i = 0; i < numberOfRootFilesLEPTO05e; i++ )ch->Add( prefixFilesLEPTO05e + rootFilesLEPTO05e[ i ] );
	if( st.GetSampleName().find("06e_lepto") != string::npos ) for( int i = 0; i < numberOfRootFilesLEPTO06e; i++ )ch->Add( prefixFilesLEPTO06e + rootFilesLEPTO06e[ i ] );
	if( st.GetSampleName().find("07p_lepto") != string::npos ) for( int i = 0; i < numberOfRootFilesLEPTO07p; i++ )ch->Add( prefixFilesLEPTO07p + rootFilesLEPTO07p[ i ] );


// MC ARIADNE
	if( st.GetSampleName().find("05e_ariadne") != string::npos ) for( int i = 0; i < numberOfRootFilesARIADNE05e; i++ )ch->Add( prefixFilesARIADNE05e + rootFilesARIADNE05e[ i ] );
	if( st.GetSampleName().find("06e_ariadne") != string::npos ) for( int i = 0; i < numberOfRootFilesARIADNE06e; i++ )ch->Add( prefixFilesARIADNE06e + rootFilesARIADNE06e[ i ] );
	if( st.GetSampleName().find("07p_ariadne") != string::npos ) for( int i = 0; i < numberOfRootFilesARIADNE07p; i++ )ch->Add( prefixFilesARIADNE07p + rootFilesARIADNE07p[ i ] );

	Analysis a(ch);
	a.SetSettings(&st);
	a.SetFilteringMode(false);
// 	a.SetHistogramFile("out/testHist_data.root");
// 	a.SetOutputFile("out/testMini_data.root");
	TString strHistFileName=strOutputFolder;
	TString strMiniFileName=strOutputFolder;
	if( st.is_data() ) { strHistFileName += "Hist_data"; strMiniFileName += "Mini_data"; }
	if( !st.is_data() ) { strHistFileName += "Hist_mc"; strMiniFileName += "Mini_mc"; }
	strHistFileName += TString( st.GetSampleName() );
	strHistFileName += ".root";
	strMiniFileName += TString( st.GetSampleName() );
	strMiniFileName += ".root";
	std::cout << "Output histogram file: " << strHistFileName.Data() << std::endl;
	a.SetHistogramFile( strHistFileName.Data() );
//	a.SetOutputFile( strMiniFileName.Data() );


	a.SetReport(100000);
	
	a.Initialize();
	a.Run(st.nevents());
	
	cout << "Done" << endl;
	
	return 0;
}
