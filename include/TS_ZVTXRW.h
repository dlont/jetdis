#ifndef TS_ZVTXRW_h
#define TS_ZVTXRW_h


#include "TMath.h"
#include <iostream>

class TS_ZVTXRW {


public:

  static Float_t GetMCReweight_trev(float truezvtx, int data_samp,
				    int mode);
};

#endif

