#ifndef ETTRANSFORMER_H
#define ETTRANSFORMER_H

#include "fastjet/ClusterSequence.hh"
#include "fastjet/tools/Transformer.hh"

#include "EtCorrections.h"

using namespace std;

class EtTransformer : public fastjet::Transformer
{
 public:
	 EtTransformer() {};
	 EtTransformer( const EtCorrections& );
	~EtTransformer() {};

	fastjet::PseudoJet 	result ( const fastjet::PseudoJet &original ) const;
	string 			description() const;
	
 private:
	EtCorrections fEtCorrection;
};

#endif//ETTRANSFORMER_H
