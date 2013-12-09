#ifndef JETS_PART_H
#define JETS_PART_H

#include "Variables.h"

#include "fastjet/ClusterSequence.hh"

#include "TObjArray.h"
#include "TLorentzVector.h"

#include <vector>

using namespace std;
using namespace fastjet;

class Jets_Part
{
public:
			Jets_Part();
			Jets_Part( Variables*, TLorentzVector* );
	virtual ~Jets_Part();
	
public:
	
	inline TObjArray* Get_partons_lab() { return partons_lab; }
	inline TObjArray* Get_partons_breit() { return partons_breit; }
	inline vector<PseudoJet> Get_part_kt_jets_breit() { return part_kt_jets_breit; }
	inline vector<PseudoJet> Get_kt_jets_breit() { return kt_jets_breit; }
	
// 	Selector KinematicJetLabSelector( const float & etjetmin, const float & etajetmin, const float & etajetmax )
// 	{
// 		return Selector( new JetLabSelector( etjetmin, etajetmin, etajetmax ) );
// 	}

private:

	TObjArray* partons_lab;
	TObjArray* partons_breit;
	
	vector<PseudoJet> part_kt_jets_breit;
	vector<PseudoJet> kt_jets_breit;
};

#endif
