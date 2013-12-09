#ifndef JETS_H
#define JETS_H

#include "Variables.h"
#include "Settings.h"

#include "fastjet/ClusterSequence.hh"

#include "TObjArray.h"
#include "TLorentzVector.h"

#include <vector>

using namespace std;
using namespace fastjet;

class Jets
{
public:
			Jets();
			Jets( Variables*, TLorentzVector*, Settings* );
	virtual ~Jets();
	
public:
 	enum CellType	// true = hac, false = emc
	{
		emc,
		hac
	};
	
	inline TObjArray* Get_particles_lab() { return particles_lab; }
	inline TObjArray* Get_particles_breit() { return particles_breit; }
	inline int Get_n_good_cells() { return n_good_cells; }
	inline vector<PseudoJet> Get_raw_kt_jets_breit() { return raw_kt_jets_breit; }
	inline vector<PseudoJet> Get_kt_jets_breit() { return kt_jets_breit; }
	inline vector<PseudoJet> Get_raw_kt_jets_lab() { return raw_kt_jets_lab; }
	
private:
	bool IsSiCell( const Int_t, const Int_t*, const Int_t*, const Int_t*, const Int_t*);
	//bool IsSiCell( const Int_t, const UShort_t*, const UChar_t*, const UShort_t*, const UShort_t* );
	bool IsSparkCell( const Int_t, const Float_t*, const Float_t* );
	bool IsNoiseCell( const Int_t, const Float_t*, const Int_t* );
	//bool IsNoiseCell( const Int_t, const Float_t*, const UShort_t* );
	bool IsHACcell( const Int_t, const Int_t* );
	//bool IsHACcell( const Int_t, const UShort_t* );
	bool IsEMCcell( const Int_t, const Int_t* );
	//bool IsEMCcell( const Int_t, const UShort_t* );
	
	TObjArray* particles_lab;
	TObjArray* particles_breit;
	
	//Jets reconstructed in Breit
	vector<PseudoJet> raw_kt_jets_breit;
	vector<PseudoJet> kt_jets_breit;
	//Jets reconstructed in lab
	vector<PseudoJet> raw_kt_jets_lab;
	int	n_good_cells;
};

#endif
