#ifndef JETUSERINFO_H
#define JETUSERINFO_H

#include "fastjet/ClusterSequence.hh"
#include "fastjet/Selector.hh"
 
#include <iostream>

using namespace std;
using namespace fastjet;

class JetUserInfo : public PseudoJet::UserInfoBase
{
public:
		 JetUserInfo();
	virtual ~JetUserInfo();
		 JetUserInfo( const float & etjet, const float & etajet, const float & phijet ) : 
			      etjet_lab( etjet ), etajet_lab( etajet ), phijet_lab( phijet ){}
 
   float  etjet() const { return etjet_lab;}
   float etajet() const { return etajet_lab;}
   float phijet() const { return phijet_lab;}
   
protected:
   float etjet_lab;
   float etajet_lab;
   float phijet_lab;
};

#endif
