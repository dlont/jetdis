#ifndef SETTINGS_H
#define SETTINGS_H

#include <string>
#include <vector>
#include <iostream>

using namespace std;

class Settings
{
public:
	 Settings() : 
	  _Q2RewFileName_incl(), _Q2RewFileName_di() {};
	~Settings() {};
	
	 void LoadSettingsFromFile( const char* );

	 inline const char* GetFilename() { return _filename; }

	 inline bool is_data() { return _is_data; }
	 inline int  nevents() { return _nevents; }
	 inline string GetSampleName() { return _SampleName; }
	 inline string GetEnescaleCorrFileName() { return _EnescaleCorrFileName; }
	 inline bool is_eval_enescale_corr() { return _is_eval_enescale_corr; }
	 inline bool is_apply_enescale_corr() { return _is_apply_enescale_corr; }
	 inline string GetEtCorrFileName() { return _EtCorrFileName; }
	 inline bool is_eval_et_corr() { return _is_eval_et_corr; }
	 inline bool is_apply_et_corr() { return _is_apply_et_corr; }
	 //!Ztvx
	 inline bool is_apply_zvtx_rew() { return _is_apply_zvtx_rew; }
	 inline string GetZvtxRewFileName() { return _ZvtxRewFileName; }

	 //!Track veto
	 inline bool is_eval_trackveto_rew() { return _is_eval_trackveto_rew; }
	 inline bool is_apply_trackveto_rew_incl() { return _is_apply_trackveto_rew_incl; }
	 inline string GetTrackVetoRewFileName_incl() { return _TrackVetoRewFileName_incl; }
	 inline bool is_apply_trackveto_rew_di() { return _is_apply_trackveto_rew_di; }
	 inline string GetTrackVetoRewFileName_di() { return _TrackVetoRewFileName_di; }

	 //!Q2
	 inline bool is_apply_q2_rew_incl() { return _is_apply_q2_rew_incl; }
	 inline const vector< string > GetQ2RewFileName_incl() { return _Q2RewFileName_incl; }
	 inline bool is_apply_q2_rew_di() { return _is_apply_q2_rew_di; }
	 inline const vector< string > GetQ2RewFileName_di() { return _Q2RewFileName_di; }

	//!QED and Z0 corrections
	 inline bool is_eval_qedZ0_corr() { return _is_eval_qedZ0_corr; }

	//!Energy-scale unc.
	inline bool is_eval_enescale_syst() { return _is_eval_enescale_syst; }
private:
	//!Configuration file status
	bool is_OK;
	//!Configuration file name
	const char* _filename;

	//!Program settings
	bool	_is_data;
	int  	_nevents;
	string 	_SampleName;
	string 	_EnescaleCorrFileName;
	bool	_is_eval_enescale_corr;
	bool	_is_apply_enescale_corr;
	string 	_EtCorrFileName;
	bool	_is_eval_et_corr;
	bool	_is_apply_et_corr;
	//!Ztvx
	bool	_is_eval_zvtx_rew;
	bool	_is_apply_zvtx_rew;
	string 	_ZvtxRewFileName;
	//!Track veto
	bool	_is_eval_trackveto_rew;
	bool	_is_apply_trackveto_rew_incl;
	string 	_TrackVetoRewFileName_incl;
	bool	_is_apply_trackveto_rew_di;
	string 	_TrackVetoRewFileName_di;
	//!Q2
	bool	_is_apply_q2_rew_incl;
	vector< string > 	_Q2RewFileName_incl;
	bool	_is_apply_q2_rew_di;
	vector< string > 	_Q2RewFileName_di;
	//!QED and Z0 corrections
	bool	_is_eval_qedZ0_corr;
	//!Energy-scale unc.
	bool	_is_eval_enescale_syst;
};

#endif

