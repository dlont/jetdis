#ifndef JETEVENT_TRUE_H
#define JETEVENT_TRUE_H

#include "Variables.h"

#include "TROOT.h"
#include "TChain.h"
#include "TLorentzVector.h"

using namespace std;
class JetEvent_True
{
 public:
 		 JetEvent_True();
		 JetEvent_True( Variables* );
		~JetEvent_True();
 public: 
	inline TLorentzVector* Get_LVscattered_ele_true()	{ return LVscattered_ele_true; };
	inline double Get_q2_true( ) 	{ return q2_true; };
	inline double Get_y_true( ) 	{ return y_true; };
	inline double Get_x_true( ) 	{ return x_true; };
	inline double Get_x_bj_true( )	{ return x_bj_true; };
 private:
 	TLorentzVector* LVscattered_ele_true;
	double	q2_true;
	double	y_true;
	double	x_true;
	double	x_bj_true;
};
#endif
