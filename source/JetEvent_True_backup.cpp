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
	q2_true      = 	-1.*( ch -> Bosene*ch -> Bosene - ch -> Bospx*ch -> Bospx - ch -> Bospy*ch -> Bospy - ch -> Bospz*ch -> Bospz );
	x_true       = 	q2_true / ( 2.*EP*( ch -> Bosene - ch -> Bospz ) );
	y_true       = 	q2_true / ( 4.*EE*EP*x_true );
	if( ( ch -> Bosene - ch -> Bospz ) != 0. && q2_true != 0. )
	{
		LVscattered_ele_true = new TLorentzVector;
		LVscattered_ele_true -> SetPxPyPzE( - ch -> Bospx, 
						    - ch -> Bospy, 
					        -EE - ch -> Bospz, 
					         EE - ch -> Bosene);
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
