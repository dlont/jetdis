#include "Settings.h"

#include "tinyxml/tinyxml.h"
#include "tinyxml/tinystr.h"

#include <iostream>
#include <iomanip>
#include <string>

#include "TString.h"
#include "TObjString.h"
#include "TObjArray.h"

using namespace std;

class Settings;

void Settings::LoadSettingsFromFile( const char* name ) {
	_filename = name;
	is_OK = true;		

	TiXmlDocument doc( _filename );
	if ( !doc.LoadFile() ) { 
		cerr << "Error in LoadSettingsFromFile:\tCan't parse " << _filename << endl;
		is_OK = false;
		return ;
	}

	TiXmlHandle hDoc( &doc );
	TiXmlElement* pElem;
	pElem = hDoc.FirstChildElement().Element();
	if ( !pElem ) {
		cerr << "Error in LoadSettingsFromFile:\t Wrong XML structure" << endl;
		is_OK = false;		
		return ;
	}

	TiXmlHandle hRoot( 0 );
	hRoot = TiXmlHandle( pElem );
	TiXmlElement* pSampleNode = hRoot.FirstChild("Sample").Element();
	pSampleNode->QueryBoolAttribute("isdata", &this->_is_data);
	cout << "Is data: " << this->_is_data << endl;
	pSampleNode->QueryIntAttribute("nevents", &this->_nevents);
	cout << "N events to process: " << this->_nevents << endl;

	this->_is_eval_enescale_corr = false;
	this->_is_apply_enescale_corr = false;
	this->_is_eval_et_corr = false;
	this->_is_apply_et_corr = false;
	this->_is_eval_zvtx_rew = false;
	this->_is_apply_zvtx_rew = false;
	this->_is_eval_trackveto_rew = false;
	this->_is_apply_trackveto_rew_incl = false;
	this->_is_apply_trackveto_rew_di = false;
	this->_is_apply_q2_rew_incl = false;
	this->_is_apply_q2_rew_di = false;
	this->_is_eval_qedZ0_corr = false;
	this->_is_eval_enescale_syst = false;
	TiXmlElement* pDataSampleNode = hRoot.FirstChild("Sample").FirstChild().Element();
        for( pDataSampleNode; pDataSampleNode; pDataSampleNode = pDataSampleNode -> NextSiblingElement() )
        {
		const char *pName=pDataSampleNode->Attribute("name");
		this->_SampleName.append(pName);
		cout << "Sample added: " << pName << endl;

		//Check required corrections
		TiXmlHandle hSampleNodeRoot(pDataSampleNode);
	        TiXmlElement* pDataCorrectionsNode = hSampleNodeRoot.FirstChild().Element();
		for( pDataCorrectionsNode; pDataCorrectionsNode; pDataCorrectionsNode = pDataCorrectionsNode -> NextSiblingElement() )
        	{
	        	bool is_eval=false;
	        	bool is_apply=false;
			const char *pCorrectionName=pDataCorrectionsNode->Attribute("name");
	        	pDataCorrectionsNode->QueryBoolAttribute("iseval", &is_eval);
	        	pDataCorrectionsNode->QueryBoolAttribute("isapply", &is_apply);
			const char *pCorrectionFileName=pDataCorrectionsNode->Attribute("filename");
	        	cout << "Correction: " << setw (15) << pCorrectionName << "\teval:" << is_eval << "\t\tapply:" << is_apply << "\t\tfilename: " << pCorrectionFileName << endl;
	        	string str_corrname(pCorrectionName);
	        	if( is_eval && str_corrname.find("enescalecorr") != string::npos ) this->_is_eval_enescale_corr = is_eval;
			if( !_is_data && is_eval && str_corrname.find("etcorr") != string::npos ) this->_is_eval_et_corr = is_eval;
			if( is_eval && str_corrname.find("trackvetorew") != string::npos ) this->_is_eval_trackveto_rew = is_eval;
			if( !_is_data && is_eval && str_corrname.find("qedZ0corr") != string::npos ) this->_is_eval_qedZ0_corr = is_eval;
			if( !_is_data && is_eval && str_corrname.find("enescalesyst") != string::npos ) this->_is_eval_enescale_syst = is_eval;

	        	if( is_apply && !_is_data && str_corrname.find("enescalecorr") != string::npos ) 
			{
				this->_is_apply_enescale_corr = is_apply;
				_EnescaleCorrFileName = pCorrectionFileName;
			}
			if( is_apply && !_is_data && str_corrname.find("etcorr") != string::npos ) 
			{
				this->_is_apply_et_corr = is_apply;
				_EtCorrFileName = pCorrectionFileName;
			}
			if( is_apply && _is_data && str_corrname.find("etcorr") != string::npos ) 
			{
				this->_is_apply_et_corr = is_apply;
				_EtCorrFileName = pCorrectionFileName;
			}
			if( is_apply && !_is_data && str_corrname.find("zvtxrew") != string::npos ) 
			{
				this->_is_apply_zvtx_rew = is_apply;
				_ZvtxRewFileName = pCorrectionFileName;
			}
			if( is_apply && !_is_data && str_corrname.find("trackvetorew_incl") != string::npos ) 
			{
				this->_is_apply_trackveto_rew_incl = is_apply;
				_TrackVetoRewFileName_incl = pCorrectionFileName;
			}
			if( is_apply && !_is_data && str_corrname.find("trackvetorew_di") != string::npos ) 
			{
				this->_is_apply_trackveto_rew_di = is_apply;
				_TrackVetoRewFileName_di = pCorrectionFileName;
			}
			if( is_apply && !_is_data && str_corrname.find("q2rew_incl") != string::npos ) 
			{
				this->_is_apply_q2_rew_incl = is_apply;
				TString fileNames( pCorrectionFileName );
				const TString str_tok(" ");
				TObjArray* FileName_arr = fileNames.Tokenize(str_tok);
				cout << "Read q2 reweighting files:" << endl;
				for ( int iFile = 0; iFile < FileName_arr->GetEntries(); ++iFile ) 
				{
					TObjString* file_str = (TObjString*)FileName_arr -> At( iFile );
					string strFileName( file_str->GetString().Data() );
					this->_Q2RewFileName_incl.push_back( strFileName );
					cout << iFile+1 << ": " << _Q2RewFileName_incl[ iFile ] << endl;
				}
			}
			if( is_apply && !_is_data && str_corrname.find("q2rew_di") != string::npos ) 
			{
				this->_is_apply_q2_rew_di = is_apply;
				TString fileNames( pCorrectionFileName );
				const TString str_tok(" ");
				TObjArray* FileName_arr = fileNames.Tokenize(str_tok);
				cout << "Read q2 reweighting files:" << endl;
				for ( int iFile = 0; iFile < FileName_arr->GetEntries(); ++iFile ) 
				{
					TObjString* file_str = (TObjString*)FileName_arr -> At( iFile );
					string strFileName( file_str->GetString().Data() );
					this->_Q2RewFileName_di.push_back( strFileName );
					cout << iFile+1 << ": " << _Q2RewFileName_di[ iFile ] << endl;
				}
			}
		}
	}
	cout << "Data sample: " << this->_SampleName << endl;

	return;
}

