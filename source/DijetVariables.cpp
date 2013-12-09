#include "DijetVariables.h"

#include "TROOT.h"
#include "TMath.h"

#include "fastjet/ClusterSequence.hh"

#include <vector>

//All routines requires jets vector sorted in Et,breit

double DijetVariables::Mjj( vector<fastjet::PseudoJet> &dijets )
{
	fastjet::PseudoJet Dijet = dijets[0];   Dijet += dijets[1];
        double Mjj2 = Dijet.m2();
/*	double Et1 = dijets[0].perp();
	double Et2 = dijets[1].perp();
	double Eta1 = dijets[0].eta();
	double Eta2 = dijets[1].eta();
	double Phi1 = dijets[0].phi();
	double Phi2 = dijets[1].phi();
	double Mjj2 = 2.*Et1*Et2*( TMath::CosH( Eta1 - Eta2 ) + TMath::Cos( Phi1 - Phi2 ) );*/
	double Mjj = TMath::Sqrt( Mjj2 );
	return Mjj;
}

double DijetVariables::Etjetbar( vector<fastjet::PseudoJet> &dijets )
{
	double Et1 = dijets[0].perp();
	double Et2 = dijets[1].perp();
	double Etbar = ( Et1 + Et2 ) / 2.;
	return Etbar;
}

double DijetVariables::Log10Xi( vector<fastjet::PseudoJet> &dijets, double xbj, double Q2 )
{
	double Mjj2 = Mjj( dijets ) * Mjj( dijets );
	double Log10Xi = TMath::Log10( xbj * ( 1. + Mjj2 / Q2 ) );
	return Log10Xi;
}

double DijetVariables::Etastar( vector<fastjet::PseudoJet> &dijets )
{
	double Eta1 = dijets[0].eta();
	double Eta2 = dijets[1].eta();
	double Etastar = fabs( ( Eta1 - Eta2 ) / 2. );
	return Etastar;
}
