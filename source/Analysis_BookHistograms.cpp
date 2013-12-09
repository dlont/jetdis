#include "Analysis.h"

#include "TROOT.h"
#include "TMath.h"
#include "TH1F.h"
#include "TH1I.h"
#include "TH2F.h"
#include "TF1.h"
#include "TProfile.h"
#include "TDirectory.h"

#include <iostream>

int Analysis::BookHistograms()
{
	fHistArray = new TObjArray();

	HistFile -> cd();

	//Cross sections histograms
	TDirectory* CSDir = HistFile -> mkdir( "CSDir","Cross sections" );
	CSDir -> cd();
//!inlusive jets
	const Int_t n_q2bins_incl = 6;
	Double_t q2bins_incl[ n_q2bins_incl + 1 ] = { 125., 250., 500., 1000., 2000., 5000., 20000. };
	TH1F* h_q2_incl_CS_d = new TH1F( "h_q2_incl_CS_d", "Q^{2};Q^{2} (GeV^{2});Number of events", n_q2bins_incl, q2bins_incl );
	fHistArray -> Add( h_q2_incl_CS_d );
	
	TH1F* h_q2_incl_CS_h = new TH1F( "h_q2_incl_CS_h", "Q^{2};Q^{2} (GeV^{2});Number of events", n_q2bins_incl, q2bins_incl );
	fHistArray -> Add( h_q2_incl_CS_h );
	
	TH1F* h_q2_incl_CS_p = new TH1F( "h_q2_incl_CS_p", "Q^{2};Q^{2} (GeV^{2});Number of events", n_q2bins_incl, q2bins_incl );
	fHistArray -> Add( h_q2_incl_CS_p );
	
	TH1F* h_q2_incl_CS_h_h2p = new TH1F( "h_q2_incl_CS_h_h2p", "Q^{2};Q^{2} (GeV^{2});Number of events", n_q2bins_incl, q2bins_incl );
	fHistArray -> Add( h_q2_incl_CS_h_h2p );
	
	TH1F* h_q2_incl_CS_p_h2p = new TH1F( "h_q2_incl_CS_p_h2p", "Q^{2};Q^{2} (GeV^{2});Number of events", n_q2bins_incl, q2bins_incl );
	fHistArray -> Add( h_q2_incl_CS_p_h2p );
	
	TH2F* h_q2_incl_CS_unf = new TH2F( "h_q2_incl_CS_unf", " Q^{2}_{det} vs Q^{2}_{had};Q^{2}_{had};Q^{2}_{det}", n_q2bins_incl, q2bins_incl, n_q2bins_incl, q2bins_incl );
	fHistArray -> Add( h_q2_incl_CS_unf );
	
	const Int_t n_etbins_incl = 6;
	Double_t etbins_incl[ n_etbins_incl + 1 ] = { 8., 10., 14., 18., 25., 35., 100. };
	TH1F* h_et_incl_CS_d = new TH1F( "h_et_incl_CS_d", "E^{jet}_{T,B};E^{jet}_{T,B} (GeV);Number of events", n_etbins_incl, etbins_incl );
	fHistArray -> Add( h_et_incl_CS_d );
	
	TH1F* h_et_incl_CS_h = new TH1F( "h_et_incl_CS_h", "E^{jet}_{T,B};E^{jet}_{T,B} (GeV);Number of events", n_etbins_incl, etbins_incl );
	fHistArray -> Add( h_et_incl_CS_h );
	
	TH1F* h_et_incl_CS_p = new TH1F( "h_et_incl_CS_p", "E^{jet}_{T,B};E^{jet}_{T,B} (GeV);Number of events", n_etbins_incl, etbins_incl );
	fHistArray -> Add( h_et_incl_CS_p );
	
	TH1F* h_et_incl_CS_h_h2p = new TH1F( "h_et_incl_CS_h_h2p", "E^{jet}_{T,B};E^{jet}_{T,B} (GeV);Number of events", n_etbins_incl, etbins_incl );
	fHistArray -> Add( h_et_incl_CS_h_h2p );
	
	TH1F* h_et_incl_CS_p_h2p = new TH1F( "h_et_incl_CS_p_h2p", "E^{jet}_{T,B};E^{jet}_{T,B} (GeV);Number of events", n_etbins_incl, etbins_incl );
	fHistArray -> Add( h_et_incl_CS_p_h2p );
	
	TH2F* h_et_incl_CS_unf = new TH2F( "h_et_incl_CS_unf", " E^{jet}_{T,B}_{det} vs E^{jet}_{T,B}_{had};E^{jet}_{T,B}_{had};E^{jet}_{T,B}_{det}", n_etbins_incl, etbins_incl, n_etbins_incl, etbins_incl );
	fHistArray -> Add( h_et_incl_CS_unf );
	
	const Int_t n_etinq2bins_incl[ n_q2bins_incl ] = { 7, 7, 7, 7, 7, 7 };
	Double_t etinq2bins_incl[ n_q2bins_incl ][7] = { { 8., 10., 14., 18., 25., 35., 100. },
							 { 8., 10., 14., 18., 25., 35., 100. },
							 { 8., 10., 14., 18., 25., 35., 100. },
							 { 8., 10., 14., 18., 25., 35., 100. },
							 { 8., 10., 14., 18., 25., 35., 100. },
							 { 8., 10., 14., 18., 25., 35., 100. }
						 };

	for( UInt_t i_q2bin = 0; i_q2bin < n_q2bins_incl; i_q2bin++ )
	{
		TString shistname_d = "h_etinq2_incl_CS_d";		shistname_d += i_q2bin;
		TH1F* h_etinq2_incl_CS_d = new TH1F( shistname_d, "E^{jet}_{T,B};E^{jet}_{T,B} (GeV);Number of events", n_etinq2bins_incl[ i_q2bin ]-1, &etinq2bins_incl[ i_q2bin ][ 0 ] );
		fHistArray -> Add( h_etinq2_incl_CS_d );
		
		TString shistname_h = "h_etinq2_incl_CS_h";		shistname_h += i_q2bin;
		TH1F* h_etinq2_incl_CS_h = new TH1F( shistname_h, "E^{jet}_{T,B};E^{jet}_{T,B} (GeV);Number of events", n_etinq2bins_incl[ i_q2bin ]-1, &etinq2bins_incl[ i_q2bin ][ 0 ] );
		fHistArray -> Add( h_etinq2_incl_CS_h );
		
		TString shistname_p = "h_etinq2_incl_CS_p";		shistname_p += i_q2bin;
		TH1F* h_etinq2_incl_CS_p = new TH1F( shistname_p, "E^{jet}_{T,B};E^{jet}_{T,B} (GeV);Number of events", n_etinq2bins_incl[ i_q2bin ]-1, &etinq2bins_incl[ i_q2bin ][ 0 ] );
		fHistArray -> Add( h_etinq2_incl_CS_p );
		
		TString shistname_h_h2p = "h_etinq2_incl_CS_h_h2p";		shistname_h_h2p += i_q2bin;
		TH1F* h_etinq2_incl_CS_h_h2p = new TH1F( shistname_h_h2p, "E^{jet}_{T,B};E^{jet}_{T,B} (GeV);Number of events", n_etinq2bins_incl[ i_q2bin ]-1, &etinq2bins_incl[ i_q2bin ][ 0 ] );
		fHistArray -> Add( h_etinq2_incl_CS_h_h2p );
		
		TString shistname_p_h2p = "h_etinq2_incl_CS_p_h2p";		shistname_p_h2p += i_q2bin;
		TH1F* h_etinq2_incl_CS_p_h2p = new TH1F( shistname_p_h2p, "E^{jet}_{T,B};E^{jet}_{T,B} (GeV);Number of events", n_etinq2bins_incl[ i_q2bin ]-1, &etinq2bins_incl[ i_q2bin ][ 0 ] );
		fHistArray -> Add( h_etinq2_incl_CS_p_h2p );
		
		TString shistname_unf = "h_etinq2_incl_CS_unf";		shistname_unf += i_q2bin;
		TH2F* h_etinq2_incl_CS_unf = new TH2F( shistname_unf, " E^{jet}_{T,B}_{det} vs E^{jet}_{T,B}_{had};E^{jet}_{T,B}_{had};E^{jet}_{T,B}_{det}", n_etinq2bins_incl[ i_q2bin ]-1, &etinq2bins_incl[ i_q2bin ][ 0 ], n_etinq2bins_incl[ i_q2bin ]-1, &etinq2bins_incl[ i_q2bin ][ 0 ] );
		fHistArray -> Add( h_etinq2_incl_CS_unf );
	}
//!dijets
	const Int_t n_q2bins_di = 6;
	Double_t q2bins_di[ n_q2bins_di + 1 ] = { 125., 250., 500., 1000., 2000., 5000., 20000. };
	TH1F* h_q2_di_CS_d = new TH1F( "h_q2_di_CS_d", "Q^{2};Q^{2} (GeV^{2});Number of events", n_q2bins_di, q2bins_di );
	fHistArray -> Add( h_q2_di_CS_d );
	
	TH1F* h_q2_di_CS_h = new TH1F( "h_q2_di_CS_h", "Q^{2};Q^{2} (GeV^{2});Number of events", n_q2bins_di, q2bins_di );
	fHistArray -> Add( h_q2_di_CS_h );
	
	TH1F* h_q2_di_CS_p = new TH1F( "h_q2_di_CS_p", "Q^{2};Q^{2} (GeV^{2});Number of events", n_q2bins_di, q2bins_di );
	fHistArray -> Add( h_q2_di_CS_p );
	
	TH1F* h_q2_di_CS_h_h2p = new TH1F( "h_q2_di_CS_h_h2p", "Q^{2};Q^{2} (GeV^{2});Number of events", n_q2bins_di, q2bins_di );
	fHistArray -> Add( h_q2_di_CS_h_h2p );
	
	TH1F* h_q2_di_CS_p_h2p = new TH1F( "h_q2_di_CS_p_h2p", "Q^{2};Q^{2} (GeV^{2});Number of events", n_q2bins_di, q2bins_di );
	fHistArray -> Add( h_q2_di_CS_p_h2p );
	
	TH2F* h_q2_di_CS_unf = new TH2F( "h_q2_di_CS_unf", " Q^{2}_{det} vs Q^{2}_{had};Q^{2}_{had};Q^{2}_{det}", n_q2bins_di, q2bins_di, n_q2bins_di, q2bins_di );
	fHistArray -> Add( h_q2_di_CS_unf );

	const Int_t n_meanetbins_di = 4;
	Double_t meanetbins_di[ n_meanetbins_di + 1 ] = { 8., 15., 22., 30., 60. };
	TH1F* h_meanet_di_CS_d = new TH1F( "h_meanet_di_CS_d", "#bar{E^{jet}_{T,B}};#bar{E^{jet}_{T,B}} (GeV);Number of events", n_meanetbins_di, meanetbins_di );
	fHistArray -> Add( h_meanet_di_CS_d );
	
	TH1F* h_meanet_di_CS_h = new TH1F( "h_meanet_di_CS_h", "#bar{E^{jet}_{T,B}};#bar{E^{jet}_{T,B}} (GeV);Number of events", n_meanetbins_di, meanetbins_di );
	fHistArray -> Add( h_meanet_di_CS_h );
	
	TH1F* h_meanet_di_CS_p = new TH1F( "h_meanet_di_CS_p", "#bar{E^{jet}_{T,B}};#bar{E^{jet}_{T,B}} (GeV);Number of events", n_meanetbins_di, meanetbins_di );
	fHistArray -> Add( h_meanet_di_CS_p );
	
	TH1F* h_meanet_di_CS_h_h2p = new TH1F( "h_meanet_di_CS_h_h2p", "#bar{E^{jet}_{T,B}};#bar{E^{jet}_{T,B}} (GeV);Number of events", n_meanetbins_di, meanetbins_di );
	fHistArray -> Add( h_meanet_di_CS_h_h2p );
	
	TH1F* h_meanet_di_CS_p_h2p = new TH1F( "h_meanet_di_CS_p_h2p", "#bar{E^{jet}_{T,B}};#bar{E^{jet}_{T,B}} (GeV);Number of events", n_meanetbins_di, meanetbins_di );
	fHistArray -> Add( h_meanet_di_CS_p_h2p );
	
	TH2F* h_meanet_di_CS_unf = new TH2F( "h_meanet_di_CS_unf", " #bar{E^{jet}_{T,B}}_{det} vs #bar{E^{jet}_{T,B}}_{had};#bar{E^{jet}_{T,B}}_{had};#bar{E^{jet}_{T,B}}_{det}", n_meanetbins_di, meanetbins_di, n_meanetbins_di, meanetbins_di );
	fHistArray -> Add( h_meanet_di_CS_unf );
	
	const Int_t n_meanetinq2bins_di[ n_q2bins_di ] = { 5, 5, 5, 5, 4, 4 };
	Double_t meanetinq2bins_di[ n_q2bins_di ][5] = {   { 8., 15., 22., 30., 60. },
							   { 8., 15., 22., 30., 60. },
							   { 8., 15., 22., 30., 60. },
							   { 8., 15., 22., 30., 60. },
							   { 8., 16., 28., 60. },
							   { 8., 16., 28., 60. }
						   };

	for( UInt_t i_q2bin = 0; i_q2bin < n_q2bins_di; i_q2bin++ )
	{
		TString shistname_d = "h_meanetinq2_di_CS_d";		shistname_d += i_q2bin;
		TH1F* h_meanetinq2_di_CS_d = new TH1F( shistname_d, "#bar{E^{jet}_{T,B}};#bar{E^{jet}_{T,B}} (GeV);Number of events", n_meanetinq2bins_di[ i_q2bin ]-1, &meanetinq2bins_di[ i_q2bin ][ 0 ] );
		fHistArray -> Add( h_meanetinq2_di_CS_d );
		
		TString shistname_h = "h_meanetinq2_di_CS_h";		shistname_h += i_q2bin;
		TH1F* h_meanetinq2_di_CS_h = new TH1F( shistname_h, "#bar{E^{jet}_{T,B}};#bar{E^{jet}_{T,B}} (GeV);Number of events", n_meanetinq2bins_di[ i_q2bin ]-1, &meanetinq2bins_di[ i_q2bin ][ 0 ] );
		fHistArray -> Add( h_meanetinq2_di_CS_h );
		
		TString shistname_p = "h_meanetinq2_di_CS_p";		shistname_p += i_q2bin;
		TH1F* h_meanetinq2_di_CS_p = new TH1F( shistname_p, "#bar{E^{jet}_{T,B}};#bar{E^{jet}_{T,B}} (GeV);Number of events", n_meanetinq2bins_di[ i_q2bin ]-1, &meanetinq2bins_di[ i_q2bin ][ 0 ] );
		fHistArray -> Add( h_meanetinq2_di_CS_p );
		
		TString shistname_h_h2p = "h_meanetinq2_di_CS_h_h2p";		shistname_h_h2p += i_q2bin;
		TH1F* h_meanetinq2_di_CS_h_h2p = new TH1F( shistname_h_h2p, "#bar{E^{jet}_{T,B}};#bar{E^{jet}_{T,B}} (GeV);Number of events", n_meanetinq2bins_di[ i_q2bin ]-1, &meanetinq2bins_di[ i_q2bin ][ 0 ] );
		fHistArray -> Add( h_meanetinq2_di_CS_h_h2p );
		
		TString shistname_p_h2p = "h_meanetinq2_di_CS_p_h2p";		shistname_p_h2p += i_q2bin;
		TH1F* h_meanetinq2_di_CS_p_h2p = new TH1F( shistname_p_h2p, "#bar{E^{jet}_{T,B}};#bar{E^{jet}_{T,B}} (GeV);Number of events", n_meanetinq2bins_di[ i_q2bin ]-1, &meanetinq2bins_di[ i_q2bin ][ 0 ] );
		fHistArray -> Add( h_meanetinq2_di_CS_p_h2p );
		
		TString shistname_unf = "h_meanetinq2_di_CS_unf";		shistname_unf += i_q2bin;
		TH2F* h_meanetinq2_di_CS_unf = new TH2F( shistname_unf, " #bar{E^{jet}_{T,B}}_{det} vs #bar{E^{jet}_{T,B}}_{had};#bar{E^{jet}_{T,B}}_{had};#bar{E^{jet}_{T,B}}_{det}", n_meanetinq2bins_di[ i_q2bin ]-1, &meanetinq2bins_di[ i_q2bin ][ 0 ], n_meanetinq2bins_di[ i_q2bin ]-1, &meanetinq2bins_di[ i_q2bin ][ 0 ] );
		fHistArray -> Add( h_meanetinq2_di_CS_unf );
	}
//!trijets
	const Int_t n_q2bins_tri = 5;
	Double_t q2bins_tri[ n_q2bins_tri + 1 ] = { 125., 250., 700., 1300., 5000., 20000. };
	TH1F* h_q2_tri_CS_d = new TH1F( "h_q2_tri_CS_d", "Q^{2};Q^{2} (GeV^{2});Number of events", n_q2bins_tri, q2bins_tri );
	fHistArray -> Add( h_q2_tri_CS_d );
	
	TH1F* h_q2_tri_CS_h = new TH1F( "h_q2_tri_CS_h", "Q^{2};Q^{2} (GeV^{2});Number of events", n_q2bins_tri, q2bins_tri );
	fHistArray -> Add( h_q2_tri_CS_h );
	
	TH1F* h_q2_tri_CS_p = new TH1F( "h_q2_tri_CS_p", "Q^{2};Q^{2} (GeV^{2});Number of events", n_q2bins_tri, q2bins_tri );
	fHistArray -> Add( h_q2_tri_CS_p );
	
	TH1F* h_q2_tri_CS_h_h2p = new TH1F( "h_q2_tri_CS_h_h2p", "Q^{2};Q^{2} (GeV^{2});Number of events", n_q2bins_tri, q2bins_tri );
	fHistArray -> Add( h_q2_tri_CS_h_h2p );
	
	TH1F* h_q2_tri_CS_p_h2p = new TH1F( "h_q2_tri_CS_p_h2p", "Q^{2};Q^{2} (GeV^{2});Number of events", n_q2bins_tri, q2bins_tri );
	fHistArray -> Add( h_q2_tri_CS_p_h2p );
	
	TH2F* h_q2_tri_CS_unf = new TH2F( "h_q2_tri_CS_unf", " Q^{2}_{det} vs Q^{2}_{had};Q^{2}_{had};Q^{2}_{det}", n_q2bins_tri, q2bins_tri, n_q2bins_tri, q2bins_tri );
	fHistArray -> Add( h_q2_tri_CS_unf );

	const Int_t n_meanetbins_tri = 3;
	Double_t meanetbins_tri[ n_meanetbins_tri + 1 ] = { 8., 16., 28., 60. };
	TH1F* h_meanet_tri_CS_d = new TH1F( "h_meanet_tri_CS_d", "#bar{E^{jet}_{T,B}};#bar{E^{jet}_{T,B}} (GeV);Number of events", n_meanetbins_tri, meanetbins_tri );
	fHistArray -> Add( h_meanet_tri_CS_d );
	
	TH1F* h_meanet_tri_CS_h = new TH1F( "h_meanet_tri_CS_h", "#bar{E^{jet}_{T,B}};#bar{E^{jet}_{T,B}} (GeV);Number of events", n_meanetbins_tri, meanetbins_tri );
	fHistArray -> Add( h_meanet_tri_CS_h );
	
	TH1F* h_meanet_tri_CS_p = new TH1F( "h_meanet_tri_CS_p", "#bar{E^{jet}_{T,B}};#bar{E^{jet}_{T,B}} (GeV);Number of events", n_meanetbins_tri, meanetbins_tri );
	fHistArray -> Add( h_meanet_tri_CS_p );
	
	TH1F* h_meanet_tri_CS_h_h2p = new TH1F( "h_meanet_tri_CS_h_h2p", "#bar{E^{jet}_{T,B}};#bar{E^{jet}_{T,B}} (GeV);Number of events", n_meanetbins_tri, meanetbins_tri );
	fHistArray -> Add( h_meanet_tri_CS_h_h2p );
	
	TH1F* h_meanet_tri_CS_p_h2p = new TH1F( "h_meanet_tri_CS_p_h2p", "#bar{E^{jet}_{T,B}};#bar{E^{jet}_{T,B}} (GeV);Number of events", n_meanetbins_tri, meanetbins_tri );
	fHistArray -> Add( h_meanet_tri_CS_p_h2p );
	
	TH2F* h_meanet_tri_CS_unf = new TH2F( "h_meanet_tri_CS_unf", " #bar{E^{jet}_{T,B}}_{det} vs #bar{E^{jet}_{T,B}}_{had};#bar{E^{jet}_{T,B}}_{had};#bar{E^{jet}_{T,B}}_{det}", n_meanetbins_tri, meanetbins_tri, n_meanetbins_tri, meanetbins_tri );
	fHistArray -> Add( h_meanet_tri_CS_unf );

	const Int_t n_meanetinq2bins_tri[ n_q2bins_tri ] = { 4, 4, 4, 4, 4 };
	Double_t meanetinq2bins_tri[ n_q2bins_tri ][4] = {  { 8., 16., 28., 60. },
							    { 8., 16., 28., 60. },
							    { 8., 16., 28., 60. },
							    { 8., 16., 28., 60. },
							    { 8., 16., 28., 60. }
						           };

	for( UInt_t i_q2bin = 0; i_q2bin < n_q2bins_tri; i_q2bin++ )
	{
		TString shistname_d = "h_meanetinq2_tri_CS_d";		shistname_d += i_q2bin;
		TH1F* h_meanetinq2_tri_CS_d = new TH1F( shistname_d, "#bar{E^{jet}_{T,B}};#bar{E^{jet}_{T,B}} (GeV);Number of events", n_meanetinq2bins_tri[ i_q2bin ]-1, &meanetinq2bins_tri[ i_q2bin ][ 0 ] );
		fHistArray -> Add( h_meanetinq2_tri_CS_d );
		
		TString shistname_h = "h_meanetinq2_tri_CS_h";		shistname_h += i_q2bin;
		TH1F* h_meanetinq2_tri_CS_h = new TH1F( shistname_h, "#bar{E^{jet}_{T,B}};#bar{E^{jet}_{T,B}} (GeV);Number of events", n_meanetinq2bins_tri[ i_q2bin ]-1, &meanetinq2bins_tri[ i_q2bin ][ 0 ] );
		fHistArray -> Add( h_meanetinq2_tri_CS_h );
		
		TString shistname_p = "h_meanetinq2_tri_CS_p";		shistname_p += i_q2bin;
		TH1F* h_meanetinq2_tri_CS_p = new TH1F( shistname_p, "#bar{E^{jet}_{T,B}};#bar{E^{jet}_{T,B}} (GeV);Number of events", n_meanetinq2bins_tri[ i_q2bin ]-1, &meanetinq2bins_tri[ i_q2bin ][ 0 ] );
		fHistArray -> Add( h_meanetinq2_tri_CS_p );
		
		TString shistname_h_h2p = "h_meanetinq2_tri_CS_h_h2p";		shistname_h_h2p += i_q2bin;
		TH1F* h_meanetinq2_tri_CS_h_h2p = new TH1F( shistname_h_h2p, "#bar{E^{jet}_{T,B}};#bar{E^{jet}_{T,B}} (GeV);Number of events", n_meanetinq2bins_tri[ i_q2bin ]-1, &meanetinq2bins_tri[ i_q2bin ][ 0 ] );
		fHistArray -> Add( h_meanetinq2_tri_CS_h_h2p );
		
		TString shistname_p_h2p = "h_meanetinq2_tri_CS_p_h2p";		shistname_p_h2p += i_q2bin;
		TH1F* h_meanetinq2_tri_CS_p_h2p = new TH1F( shistname_p_h2p, "#bar{E^{jet}_{T,B}};#bar{E^{jet}_{T,B}} (GeV);Number of events", n_meanetinq2bins_tri[ i_q2bin ]-1, &meanetinq2bins_tri[ i_q2bin ][ 0 ] );
		fHistArray -> Add( h_meanetinq2_tri_CS_p_h2p );
		
		TString shistname_unf = "h_meanetinq2_tri_CS_unf";		shistname_unf += i_q2bin;
		TH2F* h_meanetinq2_tri_CS_unf = new TH2F( shistname_unf, " #bar{E^{jet}_{T,B}}_{det} vs #bar{E^{jet}_{T,B}}_{had};#bar{E^{jet}_{T,B}}_{had};#bar{E^{jet}_{T,B}}_{det}", n_meanetinq2bins_tri[ i_q2bin ]-1, &meanetinq2bins_tri[ i_q2bin ][ 0 ], n_meanetinq2bins_tri[ i_q2bin ]-1, &meanetinq2bins_tri[ i_q2bin ][ 0 ] );
		fHistArray -> Add( h_meanetinq2_tri_CS_unf );
	}

// 	EventDir->Write();
	return 0;
}

