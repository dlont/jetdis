#include "TrijetVariables.h"

#include "TROOT.h"
#include "TMath.h"

#include "fastjet/ClusterSequence.hh"

#include <vector>

//All routines requires jets vector sorted in Et,breit

double TrijetVariables::Mjjj( vector<fastjet::PseudoJet> &trijets )
{
	fastjet::PseudoJet Trijet = trijets[0]; Trijet += trijets[1]; Trijet += trijets[2];
        double Mjjj2 = Trijet.m2();
/*	double Et1 = dijets[0].perp();
	double Et2 = dijets[1].perp();
	double Eta1 = dijets[0].eta();
	double Eta2 = dijets[1].eta();
	double Phi1 = dijets[0].phi();
	double Phi2 = dijets[1].phi();
	double Mjj2 = 2.*Et1*Et2*( TMath::CosH( Eta1 - Eta2 ) + TMath::Cos( Phi1 - Phi2 ) );*/
	double Mjjj = TMath::Sqrt( Mjjj2 );
	return Mjjj;
}

double TrijetVariables::Log10Xi( vector<fastjet::PseudoJet> &trijets, double xbj, double Q2 )
{
	double Mjjj2 = Mjjj( trijets ) * Mjjj( trijets );
	double Log10Xi = TMath::Log10( xbj * ( 1. + Mjjj2 / Q2 ) );
	return Log10Xi;
}

double TrijetVariables::Etjetbar( vector<fastjet::PseudoJet> &trijets )
{
	double Et1 = trijets[0].perp();
	double Et2 = trijets[1].perp();
	double Et3 = trijets[2].perp();
	double Etbar = ( Et1 + Et2 + Et3 ) / 3.;
	return Etbar;
}

