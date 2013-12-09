#ifndef DIJETVARIABLES_H
#define DIJETVARIABLES_H

#include "TROOT.h"
#include "TMath.h"

#include "fastjet/ClusterSequence.hh"

#include <vector>

// using namespace fastjet;
using namespace std;

class DijetVariables
{
 public:
	static double Mjj( vector<fastjet::PseudoJet> &dijets );
	static double Etjetbar( vector<fastjet::PseudoJet> &dijets );
	static double Log10Xi( vector<fastjet::PseudoJet> &dijets, double , double );
	static double Etastar( vector<fastjet::PseudoJet> &dijets );
};

#endif//DIJETVARIABLES_H
