#ifndef DIJETS_H
#define DIJETS_H

#include "TROOT.h"
#include "TObjArray.h"
#include "TLorentzVector.h"

#include <iostream>

#include "fastjet/ClusterSequence.hh"

using namespace std;
using namespace fastjet;
namespace Dijets 
{
	void BreitBoost(TObjArray &InputCandList, TObjArray &OutputCandList, Double_t PzInLepton, Double_t PzInHadron,TLorentzVector POutLepton,Int_t Scheme);
	
	void Boost(Double_t CM[4],Double_t Sign,Double_t ZHad[4],Double_t XZMomentum[4],Int_t NumPart,TObjArray &InputCandList, TObjArray &OutputCandList,Int_t Scheme);
	
	void LorentzBoost(Double_t RotMatrix[4][4], Double_t Momentum[4], Int_t Option);
	
	void RRot(Double_t RotMatrix[4][4], Double_t Vector1[4], Double_t Vector2[4]);
	
	void MatrixMul(Double_t M1[4][4], Double_t M2[4][4], Double_t M3[4][4]);
	
	void MatrixInv(Double_t M1[4][4], Double_t M2[4][4]);
	
	float EtLab( const PseudoJet&, Double_t, Double_t, TLorentzVector );
	
	float EtaLab( const PseudoJet&, Double_t, Double_t, TLorentzVector );
	
	float PhiLab( const PseudoJet&, Double_t, Double_t, TLorentzVector );
}
#endif
