#include "EtTransformer.h"
#include "EtCorrections.h"
#include "JetUserInfo.h"

#include "fastjet/ClusterSequence.hh"
#include "fastjet/tools/Transformer.hh"

#include <string>

using namespace fastjet;

EtTransformer::EtTransformer( const EtCorrections &etCorrections ) : fEtCorrection(etCorrections)
{
	return ;
}

PseudoJet EtTransformer::result ( const PseudoJet &original) const
{
	PseudoJet newjet;
	double Et  	= original.perp();
	double Et_lab   = original.user_info<JetUserInfo>().etjet();
	double eta 	= original.eta();
	double eta_lab	= original.user_info<JetUserInfo>().etajet();
	double phi 	= original.phi();
	double phi_lab 	= original.user_info<JetUserInfo>().phijet();
	double y  	= original.rap();

	Et	= fEtCorrection.CorrectEt( Et, eta_lab );
	Et_lab	= fEtCorrection.CorrectEt( Et_lab, eta_lab );
	newjet.reset_PtYPhiM ( Et, y, phi );
	
	JetUserInfo* newuserinfo = new JetUserInfo( Et_lab, eta_lab, phi_lab );
	newjet.set_user_info( newuserinfo );
	
	return	newjet;
}

string EtTransformer::description() const
{
	string desc = "Jet transverse energy correction transformer";

	return desc;
}

