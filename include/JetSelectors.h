#ifndef JETSELECTORS_H
#define JETSELECTORS_H

#include "JetUserInfo.h"

#include "fastjet/ClusterSequence.hh"
#include "fastjet/Selector.hh"

#include <iostream>
#include <string>

using namespace std;
// using namespace fastjet;

class JetUserInfo;

Selector KinematicJetLabSelector( const float & , const float & , const float &  );

Selector KinematicBackwardJetSelector( const float & , const float &  );

Selector MinBreitEt( const float & );

class JetLabSelector : public SelectorWorker
{
public:
	JetLabSelector();
	JetLabSelector( const float & etjetmin, const float & etajetmin, const float & etajetmax ) : 
			etjetmin_lab( etjetmin ), etajetmin_lab( etajetmin ), etajetmax_lab( etajetmax ){};

public:
	string description() const
	{
		ostringstream oss;
		oss << " min et jet: "<< etjetmin_lab;
		oss << "\n min eta jet: " << etajetmin_lab;
		oss << "\n max eta jet: " << etajetmax_lab;
		return oss.str();
	}
	
	bool pass(const PseudoJet &p) const
	{
		return ( ( p.user_info<JetUserInfo>().etjet() > etjetmin_lab ) &&
			 ( p.user_info<JetUserInfo>().etajet() > etajetmin_lab ) &&
			 ( p.user_info<JetUserInfo>().etajet() < etajetmax_lab ) );
	}
protected:
	float etjetmin_lab;
	float etajetmin_lab;
	float etajetmax_lab;
	
};

class BackwardJetSelector : public SelectorWorker
{
public:
	BackwardJetSelector();
	BackwardJetSelector( const float & etjetmin, const float & etajetmin ) : 
			etjetbreitmin( etjetmin ), etajetlabmin( etajetmin ){};

public:
	string description() const
	{
		ostringstream oss;
		oss << " min et jet in breit: "<< etjetbreitmin;
		oss << "\n min eta jet in lab: " << etajetlabmin;
		return oss.str();
	}
	
	bool pass(const PseudoJet &p) const
	{
		return ( !( ( p.perp() > etjetbreitmin ) && ( p.user_info<JetUserInfo>().etajet() < etajetlabmin ) ) );
	}
protected:
	float etjetbreitmin;
	float etajetlabmin;
};

class BreitEtJetSelector : public SelectorWorker
{
public:
	BreitEtJetSelector();
	BreitEtJetSelector( const float & etjetmin) : etjetbreitmin( etjetmin ){};

public:
	string description() const
	{
		ostringstream oss;
		oss << " min et jet in breit: "<< etjetbreitmin;
		return oss.str();
	}
	
	bool pass(const PseudoJet &p) const
	{
		return ( !( p.perp() > etjetbreitmin ) );
	}
protected:
	float etjetbreitmin;
};

#endif
