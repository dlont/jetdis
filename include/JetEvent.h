#ifndef JETEVENT_H
#define JETEVENT_H

#include "Variables.h"

#include "TROOT.h"
#include "TChain.h"
#include "TLorentzVector.h"

using namespace std;
class JetEvent
{
 public:
 		 JetEvent();
		 JetEvent( Variables* );
		~JetEvent();
 public:
 	enum Periods 
	{
		ele,
		pos
	};
 public: 
	inline TLorentzVector* Get_LVscattered_ele()	{ return LVscattered_ele; };
	inline TLorentzVector* Get_LVscattered_ele_da()	{ return LVscattered_ele_da; };
	inline bool   Get_isinacc( ) 	{ return isinacc; };
	inline double   Get_rebeam( ) 	{ return rebeam; };
	inline double Get_gamma_had( ) 	{ return gamma_had; };
	inline double Get_theta_e( ) 	{ return theta_e; };
	inline double Get_empz_had( ) 	{ return empz_had; };
	inline double Get_empz_ele( ) 	{ return empz_ele; };
	inline double Get_empz_ev( ) 	{ return empz_ev; };
	inline double Get_pt_had( ) 	{ return pt_had; };
	inline double Get_q2_da( ) 	{ return q2_da; };
	inline double Get_y_da( ) 	{ return y_da; };
	inline double Get_x_da( ) 	{ return x_da; };
	inline double Get_e_sel_da( ) 	{ return e_sel_da; };
	inline Periods Get_period( ) 	{ return run_period; };
	inline double Get_ptm( ) 	{ return ptm; };
	inline bool   Get_qedcompton( ) { return qedcompton; };
	inline long double Get_enefrac_ele( ){ return enefrac_ele; };
	inline double Get_x_bj( )	{ return x_bj; };
	inline int Get_ngoodtracks( )	{ return ngoodtracks; };
	double eedeltaphi;	//!Achtung delete, when finish debugging
	
 private:
 	TLorentzVector* LVscattered_ele;
	TLorentzVector* LVscattered_ele_da;
	bool	isinacc;
	double	rebeam;
	double	gamma_had;
	double	theta_e;
	double	empz_had;
	double	empz_ele;
	double	empz_ev;
	double	pt_had;
	double	q2_da;
	double	y_da;
	double	x_da;
	double	e_sel_da;
	double	ptm;
	bool	qedcompton;
	long double	enefrac_ele;
	double	x_bj;
	int	ngoodtracks;
	Periods run_period;	
};
#endif
