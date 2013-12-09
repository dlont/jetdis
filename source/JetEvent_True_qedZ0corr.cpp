#include "JetEvent_True.h"
#include "Constants.h"
#include "Variables.h"

#include "TROOT.h"
#include "TChain.h"
#include "TMath.h"

#include <iostream>

using namespace std;

class JetEvent_True;

JetEvent_True::JetEvent_True( Variables* ch )
{
	q2_true      = 	-1.*( ch -> bosene*ch -> bosene - ch -> bospx*ch -> bospx - ch -> bospy*ch -> bospy - ch -> bospz*ch -> bospz );
	x_true       = 	q2_true / ( 2.*EP*( ch -> bosene - ch -> bospz ) );
	y_true       = 	q2_true / ( 4.*EE*EP*x_true );
	if( ( ch -> bosene - ch -> bospz ) != 0. && q2_true != 0. )
	{
		LVscattered_ele_true = new TLorentzVector;
		LVscattered_ele_true -> SetPxPyPzE( - ch -> bospx, 
						    - ch -> bospy, 
					        -EE - ch -> bospz, 
					         EE - ch -> bosene);
		TLorentzVector photon_true( - LVscattered_ele_true -> Px(),
				            - LVscattered_ele_true -> Py(),
				        -EE - LVscattered_ele_true -> Pz(),
				         EE - LVscattered_ele_true -> E());
		TLorentzVector proton_true( 0., 0., EP, EP );
		double pq_xbj_true = proton_true.E()*photon_true.E() - proton_true.Px()*photon_true.Px() - proton_true.Py()*photon_true.Py() - proton_true.Pz()*photon_true.Pz();
		x_bj_true = q2_true/( 2.*pq_xbj_true );
	}

	return;
}

JetEvent_True::~JetEvent_True()
{
	delete LVscattered_ele_true;
}
