/* 
 * File:   UnfoldingDataStructure.h
 * Author: diont
 *
 * Created on December 12, 2013, 5:13 PM
 */

#ifndef UNFOLDINGDATASTRUCTURE_H
#define	UNFOLDINGDATASTRUCTURE_H

struct UnfoldingInput {
    float q2true;
    float q2reco;

    float ytrue;
    float yreco;

    // jet variables
    int njetstrue;
    float jet_et_true[10];
    float jet_eta_true[10];
    float jet_phi_true[10];
    int njetsreco;
    float jet_et_reco[10];
    float jet_eta_reco[10];
    float jet_phi_reco[10];

    void flush() {
        q2true = 0.;
        q2reco = 0.;

        ytrue = 0.;
        yreco = 0.;

        njetstrue = 0;
        njetsreco = 0;

        for (int i = 0; i < 10; ++i) {
            jet_et_true[i] = 0.;
            jet_et_reco[i] = 0.;
            jet_eta_true[i] = 0.;
            jet_eta_reco[i] = 0.;
            jet_phi_true[i] = 0.;
            jet_phi_reco[i] = 0.;
        }
    }

};

#endif	/* UNFOLDINGDATASTRUCTURE_H */

