#ifndef TRIJETVARIABLES_H
#define TRIJETVARIABLES_H

#include "TROOT.h"
#include "TMath.h"

#include "fastjet/ClusterSequence.hh"

#include <vector>

// using namespace fastjet;
using namespace std;

class TrijetVariables
{
 public:
	static double Mjjj( vector<fastjet::PseudoJet> &trijets );
	static double Log10Xi( vector<fastjet::PseudoJet> &trijets, double xbj, double Q2 );
	static double Etjetbar( vector<fastjet::PseudoJet> &trijets );
};

#endif//DIJETVARIABLES_H
