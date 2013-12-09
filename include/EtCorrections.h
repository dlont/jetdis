#ifndef ETCORRECTIONS_H
#define ETCORRECTIONS_H

#include <iostream>
#include <vector>

using namespace std;

class EtCorrections
{
 public:
	 EtCorrections() {};
	 EtCorrections( string );
	~EtCorrections() {};
 
	 double CorrectEt( double, double ) const;

	 inline string GetFileName() const { return _filename; }

 private:
	int GetABC( double, double, double&, double&, double& ) const;
	vector< double > SolveQuadratic( double a, double b, double c) const;

 private:
	//!Configuration file status
	bool is_OK;
	//!Configuration file name
	string _filename;
	
	vector< vector< vector< double > > > fCoefficients;
};

#endif//ETCORRECTIONS_H
