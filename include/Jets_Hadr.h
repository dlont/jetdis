#ifndef JETS_HADR_H
#define JETS_HADR_H

#include "Variables.h"

#include "fastjet/ClusterSequence.hh"

#include "TObjArray.h"
#include "TLorentzVector.h"

#include <vector>

using namespace std;
using namespace fastjet;

class Jets_Hadr
{
public:
			Jets_Hadr();
			Jets_Hadr( Variables*, TLorentzVector* );
	virtual ~Jets_Hadr();
	
public:
	
	inline TObjArray* Get_hadrons_lab() { return hadrons_lab; }
	inline TObjArray* Get_hadrons_breit() { return hadrons_breit; }
	inline vector<PseudoJet> Get_hadr_kt_jets_breit() { return hadr_kt_jets_breit; }
	inline vector<PseudoJet> Get_kt_jets_breit() { return kt_jets_breit; }
	
// 	Selector KinematicJetLabSelector( const float & etjetmin, const float & etajetmin, const float & etajetmax )
// 	{
// 		return Selector( new JetLabSelector( etjetmin, etajetmin, etajetmax ) );
// 	}

private:

	TObjArray* hadrons_lab;
	TObjArray* hadrons_breit;
	
	vector<PseudoJet> hadr_kt_jets_breit;
	vector<PseudoJet> kt_jets_breit;
};

#endif
