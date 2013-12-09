//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Wed Aug  1 15:26:51 2012 by ROOT version 5.26/00c
// from TTree h1/ORANGE
// found on file: qed_corr/qed/0.root
//////////////////////////////////////////////////////////

#ifndef Variables_h
#define Variables_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>

class Variables {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain
   Int_t           fCurrent; //!current Tree number in a TChain

   // Declaration of leaf types
   Float_t         Mcvtx[3];
   Int_t           Otrkclass;
   Int_t           Otrkmult;
   Int_t           Otrkvmult;
   
   Int_t           Runnr;
   Int_t           Eventnr;
   UChar_t         Evtake;
   UChar_t         Evtake_iwant;
   UChar_t         Mvdtake;
   UChar_t         Stttake;
   UChar_t         Tpoltake;
   UChar_t         Lpoltake;
   Char_t          Fmutake;
   Char_t          Mbtake;
   Char_t          Tag6take;
   Int_t           Fltw[2];
   Int_t           Fltpsw[2];
   Int_t           Fltfl;
   Int_t           Gslt_global;
   Int_t           Sltw[6];
   Int_t           Sltupw[6];
   Int_t           Tltw[15];
   Int_t           Dstw[4];
   Int_t           Fltpsfcw[2];
   Int_t           Bitword[2];
   Int_t           ncaltru;
   UShort_t        caltru_cellnr[600];   //[ncaltru]
   Float_t         caltru_e[600];   //[ncaltru]
   Float_t         caltru_imbal[600];   //[ncaltru]
   Float_t         caltru_t[600][2];   //[ncaltru]
   UShort_t        caltru_id[600];   //[ncaltru]
   Float_t         caltru_pos[600][3];   //[ncaltru]
   Float_t         Cal_px;
   Float_t         Cal_py;
   Float_t         Cal_pz;
   Float_t         Cal_e;
   Float_t         Cal_et;
   Float_t         Cal_empz;
   Float_t         Cal_pt;
   Float_t         Cal_phi;
   Float_t         Remc[6];
   Float_t         Bemc[6];
   Float_t         Femc[6];
   Float_t         Rhac[6];
   Float_t         Bhac[6];
   Float_t         Fhac[6];
   Float_t         Bhac2[6];
   Float_t         Fhac2[6];
   Int_t           Nfemc;
   Int_t           Nfhac1;
   Int_t           Nfhac2;
   Int_t           Nbemc;
   Int_t           Nbhac1;
   Int_t           Nbhac2;
   Int_t           Nremc;
   Int_t           Nrhac;
   Float_t         Cal_tf;
   Float_t         Cal_tb;
   Float_t         Cal_tr;
   Float_t         Cal_tg;
   Float_t         Cal_tu;
   Float_t         Cal_td;
   Float_t         Cal_tf_e;
   Float_t         Cal_tb_e;
   Float_t         Cal_tr_e;
   Float_t         Cal_tg_e;
   Float_t         Cal_tu_e;
   Float_t         Cal_td_e;
   UShort_t        Cal_tf_n;
   UShort_t        Cal_tb_n;
   UShort_t        Cal_tr_n;
   UShort_t        Cal_tg_n;
   Int_t           Cal_tu_n;
   Int_t           Cal_td_n;
   Float_t         Etamax_ce;
   Float_t         Etamax_ce4;
   Float_t         Cal_et10;
   Float_t         Mtrknoe_pi;
   Float_t         Mtrknoe_k;
   Float_t         E_hk;
   Float_t         Unmen_pi;
   Float_t         Unmen_k;
   Int_t           Sparkf;
   Float_t         cc_had_0[4];
   Float_t         cc_gamma_0;
   Float_t         cc_cehmom[4];
   Float_t         cc_zuhmom[4];
   Float_t         cc_cchmom[4];
   Float_t         Cc_pt;
   Float_t         Cc_et;
   Float_t         Cc_empz;
   Float_t         Cc_gamma;
   Float_t         Cc_yjb;
   Float_t         Cc_q2jb;
   Float_t         Cc_xjb;
   Float_t         cc_etamax;
   Float_t         cc_eemc;
   Float_t         cc_ehac1;
   Float_t         cc_ehac2;
   Float_t         cc_emaxco;
   Int_t           cc_nemc;
   Int_t           cc_nhac1;
   Int_t           cc_nhac2;
   Int_t           cc_fclus_dt;
   Int_t           cc_fclus_dm;
   Float_t         cc_fclus_et;
   Float_t         cc_fclus_e;
   Float_t         cc_rclus_asoe;
   Float_t         cc_vapvpcell;
   Float_t         cc_vapvpzu;
   Float_t         cc_vapvpcac;
   Int_t           ncell;
   UShort_t        Celllist[2000];   //[ncell]
   Int_t           Emncand;
   Int_t           Emerror;
   Float_t         Emprob[4];   //[Emncand]
   Float_t         Empos[4][3];   //[Emncand]
   Float_t         Emcalpos[4][3];   //[Emncand]
   Float_t         Emcalene[4];   //[Emncand]
   Float_t         Emein[4];   //[Emncand]
   Float_t         Emenin[4];   //[Emncand]
   Float_t         Emecorr[4][3];   //[Emncand]
   Float_t         Emth[4];   //[Emncand]
   Float_t         Emph[4];   //[Emncand]
   Float_t         Empt[4];   //[Emncand]
   UChar_t         Emxdet[4][3];   //[Emncand]
   UChar_t         Emydet[4][3];   //[Emncand]
   UChar_t         Emtrknr[4];   //[Emncand]
   UChar_t         Emnrsl[4];   //[Emncand]
   Float_t         Emdca[4];   //[Emncand]
   Float_t         Emdcabeam[4];   //[Emncand]
   Float_t         Emtrkp[4];   //[Emncand]
   Float_t         Emtrkth[4];   //[Emncand]
   Float_t         Emtrkph[4];   //[Emncand]
   Float_t         Emtrkq[4];   //[Emncand]
   Float_t         Emtrkdme[4];   //[Emncand]
   Float_t         Emtrkdce[4];   //[Emncand]
   Float_t         Emtrkpos[4][3];   //[Emncand]
   Int_t           Emsrtf[4];   //[Emncand]
   UChar_t         Emsrtquad[4];   //[Emncand]
   Int_t           Emhesf[4];   //[Emncand]
   UChar_t         Emcorrcode[4];   //[Emncand]
   Float_t         Emsrtpos[4][2];   //[Emncand]
   Float_t         Emsrtene[4];   //[Emncand]
   Float_t         Emhespos[4][2];   //[Emncand]
   Float_t         Emhesene[4];   //[Emncand]
   Float_t         Emhesr[4];   //[Emncand]
   Float_t         Emprsene[4][3];   //[Emncand]
   Float_t         Emccet[4];   //[Emncand]
   Float_t         Emccempz[4];   //[Emncand]
   Float_t         Emetamax[4];   //[Emncand]
   Float_t         Emcehmom[4][4];   //[Emncand]
   Float_t         Emzuhmom[4][4];   //[Emncand]
   Float_t         Emcchmom[4][4];   //[Emncand]
   Float_t         Emxel[4];   //[Emncand]
   Float_t         Emyel[4];   //[Emncand]
   Float_t         Emq2el[4];   //[Emncand]
   Float_t         Emxda[4];   //[Emncand]
   Float_t         Emyda[4];   //[Emncand]
   Float_t         Emq2da[4];   //[Emncand]
   Float_t         Emxda_cell[4];   //[Emncand]
   Float_t         Emyda_cell[4];   //[Emncand]
   Float_t         Emq2da_cell[4];   //[Emncand]
   Float_t         Emxjb[4];   //[Emncand]
   Float_t         Emyjb[4];   //[Emncand]
   Float_t         Emq2jb[4];   //[Emncand]
   Float_t         Emxjb_cell[4];   //[Emncand]
   Float_t         Emyjb_cell[4];   //[Emncand]
   Float_t         Emq2jb_cell[4];   //[Emncand]
   UChar_t         Emncell[4];   //[Emncand]
   UShort_t        Emcellptr[4];   //[Emncand]
   Float_t         Emhespade[4][9];   //[Emncand]
   Float_t         Emhespadx[4][9];   //[Emncand]
   Float_t         Emhespady[4][9];   //[Emncand]
   Float_t         Emfmax[4];   //[Emncand]
   Float_t         Emdeltaz[4];   //[Emncand]
   Float_t         Emx0[4];   //[Emncand]
   Float_t         Emdmcorr[4];   //[Emncand]
   UChar_t         Emdmcorrcode[4];   //[Emncand]
   Int_t           fmcemtrue[4];   //[Emncand]
   Int_t           fmcemnpart[4];   //[Emncand]
   Int_t           fmcempartlist[4][5];   //[Emncand]
   Float_t         fmcemenelist[4][5];   //[Emncand]
   Float_t         Mc_el;
   Float_t         Mc_ep;
   Float_t         Mc_x;
   Float_t         Mc_y;
   Float_t         Mc_q2;
   Float_t         Mc_mu;
   Float_t         Mc_pt;
   Float_t         Mc_xpro;
   Float_t         Mc_xgam;
   Float_t         Mc_xpom;
   Float_t         Mc_beta;
   Float_t         Mc_t;
   Int_t           Mc_idl;
   Int_t           Mc_pidl;
   Int_t           Mc_pidp;
   Int_t           Mc_idfsl;
   Float_t         Mc_pfsl[4];
   Float_t         Mc_pfsph[4];
   Float_t         Mc_vtx[3];
   Int_t           Mc_ichnn;
   Float_t         Mc_q2_cr;
   Float_t         Mc_x_cr;
   Int_t           Sincand;
   Int_t           Sierror;
   Float_t         Siprob[4];   //[Sincand]
   Float_t         Sipos[4][3];   //[Sincand]
   Float_t         Sicalpos[4][3];   //[Sincand]
   Float_t         Sicalene[4];   //[Sincand]
   Float_t         Siein[4];   //[Sincand]
   Float_t         Sienin[4];   //[Sincand]
   Float_t         Siecorr[4][3];   //[Sincand]
   Float_t         Sith[4];   //[Sincand]
   Float_t         Siph[4];   //[Sincand]
   Float_t         Sipt[4];   //[Sincand]
   UChar_t         Sixdet[4][3];   //[Sincand]
   UChar_t         Siydet[4][3];   //[Sincand]
   UChar_t         Sitrknr[4];   //[Sincand]
   UChar_t         Sinrsl[4];   //[Sincand]
   Float_t         Sidca[4];   //[Sincand]
   Float_t         Sitrkp[4];   //[Sincand]
   Float_t         Sitrkth[4];   //[Sincand]
   Float_t         Sitrkph[4];   //[Sincand]
   Float_t         Sitrkq[4];   //[Sincand]
   Float_t         Sitrkdme[4];   //[Sincand]
   Float_t         Sitrkpos[4][3];   //[Sincand]
   Int_t           Sisrtf[4];   //[Sincand]
   UChar_t         Sisrtquad[4];   //[Sincand]
   Int_t           Sihesf[4];   //[Sincand]
   UChar_t         Sicorrcode[4];   //[Sincand]
   Float_t         Sisrtpos[4][2];   //[Sincand]
   Float_t         Sisrtene[4];   //[Sincand]
   Float_t         Sihespos[4][2];   //[Sincand]
   Float_t         Sihesene[4];   //[Sincand]
   Float_t         Sihesr[4];   //[Sincand]
   Float_t         Siprsene[4][3];   //[Sincand]
   Float_t         Siccet[4];   //[Sincand]
   Float_t         Siccempz[4];   //[Sincand]
   Float_t         Sietamax[4];   //[Sincand]
   Float_t         Sicehmom[4][4];   //[Sincand]
   Float_t         Sizuhmom[4][4];   //[Sincand]
   Float_t         Sicchmom[4][4];   //[Sincand]
   Float_t         Sixel[4];   //[Sincand]
   Float_t         Siyel[4];   //[Sincand]
   Float_t         Siq2el[4];   //[Sincand]
   Float_t         Sixda[4];   //[Sincand]
   Float_t         Siyda[4];   //[Sincand]
   Float_t         Siq2da[4];   //[Sincand]
   Float_t         Sixda_cell[4];   //[Sincand]
   Float_t         Siyda_cell[4];   //[Sincand]
   Float_t         Siq2da_cell[4];   //[Sincand]
   Float_t         Sixjb[4];   //[Sincand]
   Float_t         Siyjb[4];   //[Sincand]
   Float_t         Siq2jb[4];   //[Sincand]
   Float_t         Sixjb_cell[4];   //[Sincand]
   Float_t         Siyjb_cell[4];   //[Sincand]
   Float_t         Siq2jb_cell[4];   //[Sincand]
   UChar_t         Sincell[4];   //[Sincand]
   UShort_t        Sicellptr[4];   //[Sincand]
   Float_t         Sifmax[4];   //[Sincand]
   Float_t         Sideltaz[4];   //[Sincand]
   Float_t         Six0[4];   //[Sincand]
   Float_t         Sidmcorr[4];   //[Sincand]
   UChar_t         Sidmcorrcode[4];   //[Sincand]
   Int_t           fmcsitrue[4];   //[Sincand]
   Int_t           fmcsinpart[4];   //[Sincand]
   Int_t           fmcsipartlist[4][5];   //[Sincand]
   Float_t         fmcsienelist[4][5];   //[Sincand]
   Int_t           Ntrkvtx;
   Float_t         Xvtx;
   Float_t         Yvtx;
   Float_t         Zvtx;
   Float_t         Chivtx;
   Int_t           Nsecvtx;
   Float_t         Xsecvtx[40];   //[Nsecvtx]
   Float_t         Ysecvtx[40];   //[Nsecvtx]
   Float_t         Zsecvtx[40];   //[Nsecvtx]
   Float_t         Chisecvtx[40];   //[Nsecvtx]
   Float_t         Fetatr;
   Float_t         Betatr;
   Float_t         Pt_tr;
   Float_t         Empz_tr_pi;
   Float_t         Et_tr;
   Float_t         E_tr_pi;
   Float_t         phi_tr;
   Float_t         zvtx_fcal;
   UShort_t        fcal_nrgoodcells;
   Float_t         fcal_vzerr;
   Float_t         V_h_px_zu;
   Float_t         V_h_py_zu;
   Float_t         V_h_pz_zu;
   Float_t         V_h_e_zu;
   Float_t         Etamax_zu;
   Float_t         Etamax_zu4;
   Float_t         Fgap;
   Float_t         Bgap;
   Int_t           Nzufos;
   UShort_t        tufo[1000][4];   //[Nzufos]
   UChar_t         zufo_bsp[1000];   //[Nzufos]
   Float_t         zufo[1000][4];   //[Nzufos]
   Float_t         cufo[1000];   //[Nzufos]
   Float_t         zufoecal[1000];   //[Nzufos]
   Float_t         zufoeemc[1000];   //[Nzufos]
   Float_t         zufopos[1000][3];   //[Nzufos]
   Int_t           nisl;
   UChar_t         Nrcisl[200];   //[nisl]
   UShort_t        Isltyp[200];   //[nisl]
   Float_t         eisl[200];   //[nisl]
   Float_t         xisl[200];   //[nisl]
   Float_t         yisl[200];   //[nisl]
   Float_t         zisl[200];   //[nisl]
   Float_t         risl[200];   //[nisl]
   Float_t         emceisl[200];   //[nisl]
   Float_t         xi1[200];   //[nisl]
   Float_t         yi1[200];   //[nisl]
   Float_t         zi1[200];   //[nisl]
   Int_t           nt;
   Short_t         vcthid[200];   //[nt]
   Char_t          qtr[200];   //[nt]
   Int_t           swmtr[200];   //[nt]
   UChar_t         qlttr[200];   //[nt]
   UChar_t         mtri[200];   //[nt]
   UChar_t         wtri[200][10];   //[nt]
   Float_t         ptr[200];   //[nt]
   Float_t         dptr[200];   //[nt]
   Float_t         thtr[200];   //[nt]
   Float_t         phtr[200];   //[nt]
   Float_t         Dist_istr[200];   //[nt]
   Int_t           trk_ntracks;
   UChar_t         trk_type[400];   //[trk_ntracks]
   UChar_t         ntrack_type[4];
   UChar_t         def_trk_type;
   UChar_t         trk_id[400];   //[trk_ntracks]
   Int_t           trk_id2[400];   //[trk_ntracks]
   Float_t         trk_px[400];   //[trk_ntracks]
   Float_t         trk_py[400];   //[trk_ntracks]
   Float_t         trk_pz[400];   //[trk_ntracks]
   Float_t         trk_charge[400];   //[trk_ntracks]
   Char_t          trk_vtx[400];   //[trk_ntracks]
   UChar_t         trk_prim_vtx[400];   //[trk_ntracks]
   UChar_t         trk_sec_vtx[400];   //[trk_ntracks]
   UChar_t         trk_vxid[400];   //[trk_ntracks]
   Float_t         trk_endpos[400][3];   //[trk_ntracks]
   UChar_t         trk_nzbyt[400];   //[trk_ntracks]
   UChar_t         trk_naxial[400];   //[trk_ntracks]
   UChar_t         trk_nstereo[400];   //[trk_ntracks]
   UChar_t         trk_ndof[400];   //[trk_ntracks]
   UChar_t         trk_layinner[400];   //[trk_ntracks]
   UChar_t         trk_layouter[400];   //[trk_ntracks]
   Float_t         trk_dedxctd[400];   //[trk_ntracks]
   Float_t         trk_dedxctdcr[400];   //[trk_ntracks]
   Short_t         trk_dedxctderr[400];   //[trk_ntracks]
   UChar_t         trk_dedxctdnh[400];   //[trk_ntracks]
   Float_t         trk_chi2[400];   //[trk_ntracks]
   Float_t         trk_vchi2[400];   //[trk_ntracks]
   UChar_t         trk_nbr[400];   //[trk_ntracks]
   UChar_t         trk_nbz[400];   //[trk_ntracks]
   UChar_t         trk_nwu[400];   //[trk_ntracks]
   UChar_t         trk_nwv[400];   //[trk_ntracks]
   Float_t         trk_dedxmvd[400];   //[trk_ntracks]
   Float_t         trk_imppar[400];   //[trk_ntracks]
   Float_t         trk_imperr[400];   //[trk_ntracks]
   Float_t         trk_pca[400][3];   //[trk_ntracks]
   Int_t           trk_nvert;
   UChar_t         vtx_type[120];   //[trk_nvert]
   UChar_t         vtx_prim[120];   //[trk_nvert]
   UChar_t         vtx_id[120];   //[trk_nvert]
   Float_t         vtx_x[120];   //[trk_nvert]
   Float_t         vtx_y[120];   //[trk_nvert]
   Float_t         vtx_z[120];   //[trk_nvert]
   Float_t         vtx_chi2[120];   //[trk_nvert]
   UChar_t         vtx_ndf[120];   //[trk_nvert]
   Int_t           dattyp;
   Float_t         bospx;
   Float_t         bospy;
   Float_t         bospz;
   Float_t         bosene;
   Int_t           bit3_tlt4;
   Int_t           tlt4[32];
   Int_t           nppart;
   Int_t           idpart[500];   //[nppart]
   Float_t         ppart[500][4];   //[nppart]
   Float_t         Siein03;
   Float_t         Sienin03;
   Int_t           mc_fla[8];
   Float_t         mc_juscal;
   Float_t         mc_jux1ge;
   Float_t         mc_jux2ge;
   Int_t           mc_np;
   Float_t         mc_pa[30][10];
   Float_t         mc_eparton[10];
   Int_t           mc_efla;
   Float_t         mc_ygen;
   Float_t         mc_xgen;
   Float_t         mc_q2gen;
   Float_t         mc_gaparton[10];
   Float_t         mc_yapp;
   Float_t         mc_xapp;
   Float_t         mc_q2app;
   Float_t         mc_xxt;
   Float_t         mc_yyt;
   Float_t         mc_zzt;
   Float_t         mc_gparton[10];
   Float_t         mc_pparton[8][10];
   Int_t           Mcebeam;
   Int_t           Mcpbeam;
   Float_t         Mcelec;
   Float_t         Mcethe;
   Float_t         Mcephi;
   Float_t         Mcq2;
   Float_t         Mcxbj;
   Float_t         Mcybj;
   Float_t         Mcgam[4];
   Float_t         vtxpos[3];
   Int_t           Nfmckin;
   Int_t           Idfmckin[500];   //[Nfmckin]
   Float_t         Ppfmckin[500][4];   //[Nfmckin]

   // List of branches
   TBranch        *b_Runnr;   //!
   TBranch        *b_Eventnr;   //!
   TBranch        *b_Evtake;   //!
   TBranch        *b_Evtake_iwant;   //!
   TBranch        *b_Mvdtake;   //!
   TBranch        *b_Stttake;   //!
   TBranch        *b_Tpoltake;   //!
   TBranch        *b_Lpoltake;   //!
   TBranch        *b_Fmutake;   //!
   TBranch        *b_Mbtake;   //!
   TBranch        *b_Tag6take;   //!
   TBranch        *b_Fltw;   //!
   TBranch        *b_Fltpsw;   //!
   TBranch        *b_Fltfl;   //!
   TBranch        *b_Gslt_global;   //!
   TBranch        *b_Sltw;   //!
   TBranch        *b_Sltupw;   //!
   TBranch        *b_Tltw;   //!
   TBranch        *b_Dstw;   //!
   TBranch        *b_Fltpsfcw;   //!
   TBranch        *b_Bitword;   //!
   TBranch        *b_ncaltru;   //!
   TBranch        *b_caltru_cellnr;   //!
   TBranch        *b_caltru_e;   //!
   TBranch        *b_caltru_imbal;   //!
   TBranch        *b_caltru_t;   //!
   TBranch        *b_caltru_id;   //!
   TBranch        *b_caltru_pos;   //!
   TBranch        *b_Cal_px;   //!
   TBranch        *b_Cal_py;   //!
   TBranch        *b_Cal_pz;   //!
   TBranch        *b_Cal_e;   //!
   TBranch        *b_Cal_et;   //!
   TBranch        *b_Cal_empz;   //!
   TBranch        *b_Cal_pt;   //!
   TBranch        *b_Cal_phi;   //!
   TBranch        *b_Remc;   //!
   TBranch        *b_Bemc;   //!
   TBranch        *b_Femc;   //!
   TBranch        *b_Rhac;   //!
   TBranch        *b_Bhac;   //!
   TBranch        *b_Fhac;   //!
   TBranch        *b_Bhac2;   //!
   TBranch        *b_Fhac2;   //!
   TBranch        *b_Nfemc;   //!
   TBranch        *b_Nfhac1;   //!
   TBranch        *b_Nfhac2;   //!
   TBranch        *b_Nbemc;   //!
   TBranch        *b_Nbhac1;   //!
   TBranch        *b_Nbhac2;   //!
   TBranch        *b_Nremc;   //!
   TBranch        *b_Nrhac;   //!
   TBranch        *b_Cal_tf;   //!
   TBranch        *b_Cal_tb;   //!
   TBranch        *b_Cal_tr;   //!
   TBranch        *b_Cal_tg;   //!
   TBranch        *b_Cal_tu;   //!
   TBranch        *b_Cal_td;   //!
   TBranch        *b_Cal_tf_e;   //!
   TBranch        *b_Cal_tb_e;   //!
   TBranch        *b_Cal_tr_e;   //!
   TBranch        *b_Cal_tg_e;   //!
   TBranch        *b_Cal_tu_e;   //!
   TBranch        *b_Cal_td_e;   //!
   TBranch        *b_Cal_tf_n;   //!
   TBranch        *b_Cal_tb_n;   //!
   TBranch        *b_Cal_tr_n;   //!
   TBranch        *b_Cal_tg_n;   //!
   TBranch        *b_Cal_tu_n;   //!
   TBranch        *b_Cal_td_n;   //!
   TBranch        *b_Etamax_ce;   //!
   TBranch        *b_Etamax_ce4;   //!
   TBranch        *b_Cal_et10;   //!
   TBranch        *b_Mtrknoe_pi;   //!
   TBranch        *b_Mtrknoe_k;   //!
   TBranch        *b_E_hk;   //!
   TBranch        *b_Unmen_pi;   //!
   TBranch        *b_Unmen_k;   //!
   TBranch        *b_Sparkf;   //!
   TBranch        *b_cc_had_0;   //!
   TBranch        *b_cc_gamma_0;   //!
   TBranch        *b_cc_cehmom;   //!
   TBranch        *b_cc_zuhmom;   //!
   TBranch        *b_cc_cchmom;   //!
   TBranch        *b_Cc_pt;   //!
   TBranch        *b_Cc_et;   //!
   TBranch        *b_Cc_empz;   //!
   TBranch        *b_Cc_gamma;   //!
   TBranch        *b_Cc_yjb;   //!
   TBranch        *b_Cc_q2jb;   //!
   TBranch        *b_Cc_xjb;   //!
   TBranch        *b_cc_etamax;   //!
   TBranch        *b_cc_eemc;   //!
   TBranch        *b_cc_ehac1;   //!
   TBranch        *b_cc_ehac2;   //!
   TBranch        *b_cc_emaxco;   //!
   TBranch        *b_cc_nemc;   //!
   TBranch        *b_cc_nhac1;   //!
   TBranch        *b_cc_nhac2;   //!
   TBranch        *b_cc_fclus_dt;   //!
   TBranch        *b_cc_fclus_dm;   //!
   TBranch        *b_cc_fclus_et;   //!
   TBranch        *b_cc_fclus_e;   //!
   TBranch        *b_cc_rclus_asoe;   //!
   TBranch        *b_cc_vapvpcell;   //!
   TBranch        *b_cc_vapvpzu;   //!
   TBranch        *b_cc_vapvpcac;   //!
   TBranch        *b_ncell;   //!
   TBranch        *b_Celllist;   //!
   TBranch        *b_Emncand;   //!
   TBranch        *b_Emerror;   //!
   TBranch        *b_Emprob;   //!
   TBranch        *b_Empos;   //!
   TBranch        *b_Emcalpos;   //!
   TBranch        *b_Emcalene;   //!
   TBranch        *b_Emein;   //!
   TBranch        *b_Emenin;   //!
   TBranch        *b_Emecorr;   //!
   TBranch        *b_Emth;   //!
   TBranch        *b_Emph;   //!
   TBranch        *b_Empt;   //!
   TBranch        *b_Emxdet;   //!
   TBranch        *b_Emydet;   //!
   TBranch        *b_Emtrknr;   //!
   TBranch        *b_Emnrsl;   //!
   TBranch        *b_Emdca;   //!
   TBranch        *b_Emdcabeam;   //!
   TBranch        *b_Emtrkp;   //!
   TBranch        *b_Emtrkth;   //!
   TBranch        *b_Emtrkph;   //!
   TBranch        *b_Emtrkq;   //!
   TBranch        *b_Emtrkdme;   //!
   TBranch        *b_Emtrkdce;   //!
   TBranch        *b_Emtrkpos;   //!
   TBranch        *b_Emsrtf;   //!
   TBranch        *b_Emsrtquad;   //!
   TBranch        *b_Emhesf;   //!
   TBranch        *b_Emcorrcode;   //!
   TBranch        *b_Emsrtpos;   //!
   TBranch        *b_Emsrtene;   //!
   TBranch        *b_Emhespos;   //!
   TBranch        *b_Emhesene;   //!
   TBranch        *b_Emhesr;   //!
   TBranch        *b_Emprsene;   //!
   TBranch        *b_Emccet;   //!
   TBranch        *b_Emccempz;   //!
   TBranch        *b_Emetamax;   //!
   TBranch        *b_Emcehmom;   //!
   TBranch        *b_Emzuhmom;   //!
   TBranch        *b_Emcchmom;   //!
   TBranch        *b_Emxel;   //!
   TBranch        *b_Emyel;   //!
   TBranch        *b_Emq2el;   //!
   TBranch        *b_Emxda;   //!
   TBranch        *b_Emyda;   //!
   TBranch        *b_Emq2da;   //!
   TBranch        *b_Emxda_cell;   //!
   TBranch        *b_Emyda_cell;   //!
   TBranch        *b_Emq2da_cell;   //!
   TBranch        *b_Emxjb;   //!
   TBranch        *b_Emyjb;   //!
   TBranch        *b_Emq2jb;   //!
   TBranch        *b_Emxjb_cell;   //!
   TBranch        *b_Emyjb_cell;   //!
   TBranch        *b_Emq2jb_cell;   //!
   TBranch        *b_Emncell;   //!
   TBranch        *b_Emcellptr;   //!
   TBranch        *b_Emhespade;   //!
   TBranch        *b_Emhespadx;   //!
   TBranch        *b_Emhespady;   //!
   TBranch        *b_Emfmax;   //!
   TBranch        *b_Emdeltaz;   //!
   TBranch        *b_Emx0;   //!
   TBranch        *b_Emdmcorr;   //!
   TBranch        *b_Emdmcorrcode;   //!
   TBranch        *b_fmcemtrue;   //!
   TBranch        *b_fmcemnpart;   //!
   TBranch        *b_fmcempartlist;   //!
   TBranch        *b_fmcemenelist;   //!
   TBranch        *b_Mc_el;   //!
   TBranch        *b_Mc_ep;   //!
   TBranch        *b_Mc_x;   //!
   TBranch        *b_Mc_y;   //!
   TBranch        *b_Mc_q2;   //!
   TBranch        *b_Mc_mu;   //!
   TBranch        *b_Mc_pt;   //!
   TBranch        *b_Mc_xpro;   //!
   TBranch        *b_Mc_xgam;   //!
   TBranch        *b_Mc_xpom;   //!
   TBranch        *b_Mc_beta;   //!
   TBranch        *b_Mc_t;   //!
   TBranch        *b_Mc_idl;   //!
   TBranch        *b_Mc_pidl;   //!
   TBranch        *b_Mc_pidp;   //!
   TBranch        *b_Mc_idfsl;   //!
   TBranch        *b_Mc_pfsl;   //!
   TBranch        *b_Mc_pfsph;   //!
   TBranch        *b_Mc_vtx;   //!
   TBranch        *b_Mc_ichnn;   //!
   TBranch        *b_Mc_q2_cr;   //!
   TBranch        *b_Mc_x_cr;   //!
   TBranch        *b_Sincand;   //!
   TBranch        *b_Sierror;   //!
   TBranch        *b_Siprob;   //!
   TBranch        *b_Sipos;   //!
   TBranch        *b_Sicalpos;   //!
   TBranch        *b_Sicalene;   //!
   TBranch        *b_Siein;   //!
   TBranch        *b_Sienin;   //!
   TBranch        *b_Siecorr;   //!
   TBranch        *b_Sith;   //!
   TBranch        *b_Siph;   //!
   TBranch        *b_Sipt;   //!
   TBranch        *b_Sixdet;   //!
   TBranch        *b_Siydet;   //!
   TBranch        *b_Sitrknr;   //!
   TBranch        *b_Sinrsl;   //!
   TBranch        *b_Sidca;   //!
   TBranch        *b_Sitrkp;   //!
   TBranch        *b_Sitrkth;   //!
   TBranch        *b_Sitrkph;   //!
   TBranch        *b_Sitrkq;   //!
   TBranch        *b_Sitrkdme;   //!
   TBranch        *b_Sitrkpos;   //!
   TBranch        *b_Sisrtf;   //!
   TBranch        *b_Sisrtquad;   //!
   TBranch        *b_Sihesf;   //!
   TBranch        *b_Sicorrcode;   //!
   TBranch        *b_Sisrtpos;   //!
   TBranch        *b_Sisrtene;   //!
   TBranch        *b_Sihespos;   //!
   TBranch        *b_Sihesene;   //!
   TBranch        *b_Sihesr;   //!
   TBranch        *b_Siprsene;   //!
   TBranch        *b_Siccet;   //!
   TBranch        *b_Siccempz;   //!
   TBranch        *b_Sietamax;   //!
   TBranch        *b_Sicehmom;   //!
   TBranch        *b_Sizuhmom;   //!
   TBranch        *b_Sicchmom;   //!
   TBranch        *b_Sixel;   //!
   TBranch        *b_Siyel;   //!
   TBranch        *b_Siq2el;   //!
   TBranch        *b_Sixda;   //!
   TBranch        *b_Siyda;   //!
   TBranch        *b_Siq2da;   //!
   TBranch        *b_Sixda_cell;   //!
   TBranch        *b_Siyda_cell;   //!
   TBranch        *b_Siq2da_cell;   //!
   TBranch        *b_Sixjb;   //!
   TBranch        *b_Siyjb;   //!
   TBranch        *b_Siq2jb;   //!
   TBranch        *b_Sixjb_cell;   //!
   TBranch        *b_Siyjb_cell;   //!
   TBranch        *b_Siq2jb_cell;   //!
   TBranch        *b_Sincell;   //!
   TBranch        *b_Sicellptr;   //!
   TBranch        *b_Sifmax;   //!
   TBranch        *b_Sideltaz;   //!
   TBranch        *b_Six0;   //!
   TBranch        *b_Sidmcorr;   //!
   TBranch        *b_Sidmcorrcode;   //!
   TBranch        *b_fmcsitrue;   //!
   TBranch        *b_fmcsinpart;   //!
   TBranch        *b_fmcsipartlist;   //!
   TBranch        *b_fmcsienelist;   //!
   TBranch        *b_Ntrkvtx;   //!
   TBranch        *b_Xvtx;   //!
   TBranch        *b_Yvtx;   //!
   TBranch        *b_Zvtx;   //!
   TBranch        *b_Chivtx;   //!
   TBranch        *b_Nsecvtx;   //!
   TBranch        *b_Xsecvtx;   //!
   TBranch        *b_Ysecvtx;   //!
   TBranch        *b_Zsecvtx;   //!
   TBranch        *b_Chisecvtx;   //!
   TBranch        *b_Fetatr;   //!
   TBranch        *b_Betatr;   //!
   TBranch        *b_Pt_tr;   //!
   TBranch        *b_Empz_tr_pi;   //!
   TBranch        *b_Et_tr;   //!
   TBranch        *b_E_tr_pi;   //!
   TBranch        *b_phi_tr;   //!
   TBranch        *b_zvtx_fcal;   //!
   TBranch        *b_fcal_nrgoodcells;   //!
   TBranch        *b_fcal_vzerr;   //!
   TBranch        *b_V_h_px_zu;   //!
   TBranch        *b_V_h_py_zu;   //!
   TBranch        *b_V_h_pz_zu;   //!
   TBranch        *b_V_h_e_zu;   //!
   TBranch        *b_Etamax_zu;   //!
   TBranch        *b_Etamax_zu4;   //!
   TBranch        *b_Fgap;   //!
   TBranch        *b_Bgap;   //!
   TBranch        *b_Nzufos;   //!
   TBranch        *b_tufo;   //!
   TBranch        *b_zufo_bsp;   //!
   TBranch        *b_zufo;   //!
   TBranch        *b_cufo;   //!
   TBranch        *b_zufoecal;   //!
   TBranch        *b_zufoeemc;   //!
   TBranch        *b_zufopos;   //!
   TBranch        *b_nisl;   //!
   TBranch        *b_Nrcisl;   //!
   TBranch        *b_Isltyp;   //!
   TBranch        *b_eisl;   //!
   TBranch        *b_xisl;   //!
   TBranch        *b_yisl;   //!
   TBranch        *b_zisl;   //!
   TBranch        *b_risl;   //!
   TBranch        *b_emceisl;   //!
   TBranch        *b_xi1;   //!
   TBranch        *b_yi1;   //!
   TBranch        *b_zi1;   //!
   TBranch        *b_nt;   //!
   TBranch        *b_vcthid;   //!
   TBranch        *b_qtr;   //!
   TBranch        *b_swmtr;   //!
   TBranch        *b_qlttr;   //!
   TBranch        *b_mtri;   //!
   TBranch        *b_wtri;   //!
   TBranch        *b_ptr;   //!
   TBranch        *b_dptr;   //!
   TBranch        *b_thtr;   //!
   TBranch        *b_phtr;   //!
   TBranch        *b_Dist_istr;   //!
   TBranch        *b_trk_ntracks;   //!
   TBranch        *b_trk_type;   //!
   TBranch        *b_ntrack_type;   //!
   TBranch        *b_def_trk_type;   //!
   TBranch        *b_trk_id;   //!
   TBranch        *b_trk_id2;   //!
   TBranch        *b_trk_px;   //!
   TBranch        *b_trk_py;   //!
   TBranch        *b_trk_pz;   //!
   TBranch        *b_trk_charge;   //!
   TBranch        *b_trk_vtx;   //!
   TBranch        *b_trk_prim_vtx;   //!
   TBranch        *b_trk_sec_vtx;   //!
   TBranch        *b_trk_vxid;   //!
   TBranch        *b_trk_endpos;   //!
   TBranch        *b_trk_nzbyt;   //!
   TBranch        *b_trk_naxial;   //!
   TBranch        *b_trk_nstereo;   //!
   TBranch        *b_trk_ndof;   //!
   TBranch        *b_trk_layinner;   //!
   TBranch        *b_trk_layouter;   //!
   TBranch        *b_trk_dedxctd;   //!
   TBranch        *b_trk_dedxctdcr;   //!
   TBranch        *b_trk_dedxctderr;   //!
   TBranch        *b_trk_dedxctdnh;   //!
   TBranch        *b_trk_chi2;   //!
   TBranch        *b_trk_vchi2;   //!
   TBranch        *b_trk_nbr;   //!
   TBranch        *b_trk_nbz;   //!
   TBranch        *b_trk_nwu;   //!
   TBranch        *b_trk_nwv;   //!
   TBranch        *b_trk_dedxmvd;   //!
   TBranch        *b_trk_imppar;   //!
   TBranch        *b_trk_imperr;   //!
   TBranch        *b_trk_pca;   //!
   TBranch        *b_trk_nvert;   //!
   TBranch        *b_vtx_type;   //!
   TBranch        *b_vtx_prim;   //!
   TBranch        *b_vtx_id;   //!
   TBranch        *b_vtx_x;   //!
   TBranch        *b_vtx_y;   //!
   TBranch        *b_vtx_z;   //!
   TBranch        *b_vtx_chi2;   //!
   TBranch        *b_vtx_ndf;   //!
   TBranch        *b_dattyp;   //!
   TBranch        *b_bospx;   //!
   TBranch        *b_bospy;   //!
   TBranch        *b_bospz;   //!
   TBranch        *b_bosene;   //!
   TBranch        *b_bit3_tlt4;   //!
   TBranch        *b_tlt4;   //!
   TBranch        *b_nppart;   //!
   TBranch        *b_idpart;   //!
   TBranch        *b_ppart;   //!
   TBranch        *b_Siein03;   //!
   TBranch        *b_Sienin03;   //!
   TBranch        *b_mc_fla;   //!
   TBranch        *b_mc_juscal;   //!
   TBranch        *b_mc_jux1ge;   //!
   TBranch        *b_mc_jux2ge;   //!
   TBranch        *b_mc_np;   //!
   TBranch        *b_mc_pa;   //!
   TBranch        *b_mc_eparton;   //!
   TBranch        *b_mc_efla;   //!
   TBranch        *b_mc_ygen;   //!
   TBranch        *b_mc_xgen;   //!
   TBranch        *b_mc_q2gen;   //!
   TBranch        *b_mc_gaparton;   //!
   TBranch        *b_mc_yapp;   //!
   TBranch        *b_mc_xapp;   //!
   TBranch        *b_mc_q2app;   //!
   TBranch        *b_mc_xxt;   //!
   TBranch        *b_mc_yyt;   //!
   TBranch        *b_mc_zzt;   //!
   TBranch        *b_mc_gparton;   //!
   TBranch        *b_mc_pparton;   //!
   TBranch        *b_Mcebeam;   //!
   TBranch        *b_Mcpbeam;   //!
   TBranch        *b_Mcelec;   //!
   TBranch        *b_Mcethe;   //!
   TBranch        *b_Mcephi;   //!
   TBranch        *b_Mcq2;   //!
   TBranch        *b_Mcxbj;   //!
   TBranch        *b_Mcybj;   //!
   TBranch        *b_Mcgam;   //!
   TBranch        *b_vtxpos;   //!
   TBranch        *b_Nfmckin;   //!
   TBranch        *b_Idfmckin;   //!
   TBranch        *b_Ppfmckin;   //!

   Variables(TTree *tree=0);
   virtual ~Variables();
   virtual Int_t    Cut(Long64_t entry);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(TTree *tree);
   virtual void     Loop();
   virtual Bool_t   Notify();
   virtual void     Show(Long64_t entry = -1);
};

#endif

#ifdef Variables_cxx
Variables::Variables(TTree *tree)
{
// if parameter tree is not specified (or zero), connect the file
// used to generate this class and read the Tree.
   if (tree == 0) {
      TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject("qed_corr/qed/0.root");
      if (!f) {
         f = new TFile("qed_corr/qed/0.root");
      }
      tree = (TTree*)gDirectory->Get("h1");

   }
   Init(tree);
}

Variables::~Variables()
{
   if (!fChain) return;
   delete fChain->GetCurrentFile();
}

Int_t Variables::GetEntry(Long64_t entry)
{
// Read contents of entry.
   if (!fChain) return 0;
   return fChain->GetEntry(entry);
}
Long64_t Variables::LoadTree(Long64_t entry)
{
// Set the environment to read one entry
   if (!fChain) return -5;
   Long64_t centry = fChain->LoadTree(entry);
   if (centry < 0) return centry;
   if (!fChain->InheritsFrom(TChain::Class()))  return centry;
   TChain *chain = (TChain*)fChain;
   if (chain->GetTreeNumber() != fCurrent) {
      fCurrent = chain->GetTreeNumber();
      Notify();
   }
   return centry;
}

void Variables::Init(TTree *tree)
{
   // The Init() function is called when the selector needs to initialize
   // a new tree or chain. Typically here the branch addresses and branch
   // pointers of the tree will be set.
   // It is normally not necessary to make changes to the generated
   // code, but the routine can be extended by the user if needed.
   // Init() will be called many times when running on PROOF
   // (once per file to be processed).

   // Set branch addresses and branch pointers
   if (!tree) return;
   fChain = tree;
   fCurrent = -1;
   fChain->SetMakeClass(1);

   fChain->SetBranchAddress("Runnr", &Runnr, &b_Runnr);
   fChain->SetBranchAddress("Eventnr", &Eventnr, &b_Eventnr);
   fChain->SetBranchAddress("Evtake", &Evtake, &b_Evtake);
   fChain->SetBranchAddress("Evtake_iwant", &Evtake_iwant, &b_Evtake_iwant);
   fChain->SetBranchAddress("Mvdtake", &Mvdtake, &b_Mvdtake);
   fChain->SetBranchAddress("Stttake", &Stttake, &b_Stttake);
   fChain->SetBranchAddress("Tpoltake", &Tpoltake, &b_Tpoltake);
   fChain->SetBranchAddress("Lpoltake", &Lpoltake, &b_Lpoltake);
   fChain->SetBranchAddress("Fmutake", &Fmutake, &b_Fmutake);
   fChain->SetBranchAddress("Mbtake", &Mbtake, &b_Mbtake);
   fChain->SetBranchAddress("Tag6take", &Tag6take, &b_Tag6take);
   fChain->SetBranchAddress("Fltw", Fltw, &b_Fltw);
   fChain->SetBranchAddress("Fltpsw", Fltpsw, &b_Fltpsw);
   fChain->SetBranchAddress("Fltfl", &Fltfl, &b_Fltfl);
   fChain->SetBranchAddress("Gslt_global", &Gslt_global, &b_Gslt_global);
   fChain->SetBranchAddress("Sltw", Sltw, &b_Sltw);
   fChain->SetBranchAddress("Sltupw", Sltupw, &b_Sltupw);
   fChain->SetBranchAddress("Tltw", Tltw, &b_Tltw);
   fChain->SetBranchAddress("Dstw", Dstw, &b_Dstw);
   fChain->SetBranchAddress("Fltpsfcw", Fltpsfcw, &b_Fltpsfcw);
   fChain->SetBranchAddress("Bitword", Bitword, &b_Bitword);
   fChain->SetBranchAddress("ncaltru", &ncaltru, &b_ncaltru);
   fChain->SetBranchAddress("caltru_cellnr", caltru_cellnr, &b_caltru_cellnr);
   fChain->SetBranchAddress("caltru_e", caltru_e, &b_caltru_e);
   fChain->SetBranchAddress("caltru_imbal", caltru_imbal, &b_caltru_imbal);
   fChain->SetBranchAddress("caltru_t", caltru_t, &b_caltru_t);
   fChain->SetBranchAddress("caltru_id", caltru_id, &b_caltru_id);
   fChain->SetBranchAddress("caltru_pos", caltru_pos, &b_caltru_pos);
   fChain->SetBranchAddress("Cal_px", &Cal_px, &b_Cal_px);
   fChain->SetBranchAddress("Cal_py", &Cal_py, &b_Cal_py);
   fChain->SetBranchAddress("Cal_pz", &Cal_pz, &b_Cal_pz);
   fChain->SetBranchAddress("Cal_e", &Cal_e, &b_Cal_e);
   fChain->SetBranchAddress("Cal_et", &Cal_et, &b_Cal_et);
   fChain->SetBranchAddress("Cal_empz", &Cal_empz, &b_Cal_empz);
   fChain->SetBranchAddress("Cal_pt", &Cal_pt, &b_Cal_pt);
   fChain->SetBranchAddress("Cal_phi", &Cal_phi, &b_Cal_phi);
   fChain->SetBranchAddress("Remc", Remc, &b_Remc);
   fChain->SetBranchAddress("Bemc", Bemc, &b_Bemc);
   fChain->SetBranchAddress("Femc", Femc, &b_Femc);
   fChain->SetBranchAddress("Rhac", Rhac, &b_Rhac);
   fChain->SetBranchAddress("Bhac", Bhac, &b_Bhac);
   fChain->SetBranchAddress("Fhac", Fhac, &b_Fhac);
   fChain->SetBranchAddress("Bhac2", Bhac2, &b_Bhac2);
   fChain->SetBranchAddress("Fhac2", Fhac2, &b_Fhac2);
   fChain->SetBranchAddress("Nfemc", &Nfemc, &b_Nfemc);
   fChain->SetBranchAddress("Nfhac1", &Nfhac1, &b_Nfhac1);
   fChain->SetBranchAddress("Nfhac2", &Nfhac2, &b_Nfhac2);
   fChain->SetBranchAddress("Nbemc", &Nbemc, &b_Nbemc);
   fChain->SetBranchAddress("Nbhac1", &Nbhac1, &b_Nbhac1);
   fChain->SetBranchAddress("Nbhac2", &Nbhac2, &b_Nbhac2);
   fChain->SetBranchAddress("Nremc", &Nremc, &b_Nremc);
   fChain->SetBranchAddress("Nrhac", &Nrhac, &b_Nrhac);
   fChain->SetBranchAddress("Cal_tf", &Cal_tf, &b_Cal_tf);
   fChain->SetBranchAddress("Cal_tb", &Cal_tb, &b_Cal_tb);
   fChain->SetBranchAddress("Cal_tr", &Cal_tr, &b_Cal_tr);
   fChain->SetBranchAddress("Cal_tg", &Cal_tg, &b_Cal_tg);
   fChain->SetBranchAddress("Cal_tu", &Cal_tu, &b_Cal_tu);
   fChain->SetBranchAddress("Cal_td", &Cal_td, &b_Cal_td);
   fChain->SetBranchAddress("Cal_tf_e", &Cal_tf_e, &b_Cal_tf_e);
   fChain->SetBranchAddress("Cal_tb_e", &Cal_tb_e, &b_Cal_tb_e);
   fChain->SetBranchAddress("Cal_tr_e", &Cal_tr_e, &b_Cal_tr_e);
   fChain->SetBranchAddress("Cal_tg_e", &Cal_tg_e, &b_Cal_tg_e);
   fChain->SetBranchAddress("Cal_tu_e", &Cal_tu_e, &b_Cal_tu_e);
   fChain->SetBranchAddress("Cal_td_e", &Cal_td_e, &b_Cal_td_e);
   fChain->SetBranchAddress("Cal_tf_n", &Cal_tf_n, &b_Cal_tf_n);
   fChain->SetBranchAddress("Cal_tb_n", &Cal_tb_n, &b_Cal_tb_n);
   fChain->SetBranchAddress("Cal_tr_n", &Cal_tr_n, &b_Cal_tr_n);
   fChain->SetBranchAddress("Cal_tg_n", &Cal_tg_n, &b_Cal_tg_n);
   fChain->SetBranchAddress("Cal_tu_n", &Cal_tu_n, &b_Cal_tu_n);
   fChain->SetBranchAddress("Cal_td_n", &Cal_td_n, &b_Cal_td_n);
   fChain->SetBranchAddress("Etamax_ce", &Etamax_ce, &b_Etamax_ce);
   fChain->SetBranchAddress("Etamax_ce4", &Etamax_ce4, &b_Etamax_ce4);
   fChain->SetBranchAddress("Cal_et10", &Cal_et10, &b_Cal_et10);
   fChain->SetBranchAddress("Mtrknoe_pi", &Mtrknoe_pi, &b_Mtrknoe_pi);
   fChain->SetBranchAddress("Mtrknoe_k", &Mtrknoe_k, &b_Mtrknoe_k);
   fChain->SetBranchAddress("E_hk", &E_hk, &b_E_hk);
   fChain->SetBranchAddress("Unmen_pi", &Unmen_pi, &b_Unmen_pi);
   fChain->SetBranchAddress("Unmen_k", &Unmen_k, &b_Unmen_k);
   fChain->SetBranchAddress("Sparkf", &Sparkf, &b_Sparkf);
   fChain->SetBranchAddress("cc_had_0", cc_had_0, &b_cc_had_0);
   fChain->SetBranchAddress("cc_gamma_0", &cc_gamma_0, &b_cc_gamma_0);
   fChain->SetBranchAddress("cc_cehmom", cc_cehmom, &b_cc_cehmom);
   fChain->SetBranchAddress("cc_zuhmom", cc_zuhmom, &b_cc_zuhmom);
   fChain->SetBranchAddress("cc_cchmom", cc_cchmom, &b_cc_cchmom);
   fChain->SetBranchAddress("Cc_pt", &Cc_pt, &b_Cc_pt);
   fChain->SetBranchAddress("Cc_et", &Cc_et, &b_Cc_et);
   fChain->SetBranchAddress("Cc_empz", &Cc_empz, &b_Cc_empz);
   fChain->SetBranchAddress("Cc_gamma", &Cc_gamma, &b_Cc_gamma);
   fChain->SetBranchAddress("Cc_yjb", &Cc_yjb, &b_Cc_yjb);
   fChain->SetBranchAddress("Cc_q2jb", &Cc_q2jb, &b_Cc_q2jb);
   fChain->SetBranchAddress("Cc_xjb", &Cc_xjb, &b_Cc_xjb);
   fChain->SetBranchAddress("cc_etamax", &cc_etamax, &b_cc_etamax);
   fChain->SetBranchAddress("cc_eemc", &cc_eemc, &b_cc_eemc);
   fChain->SetBranchAddress("cc_ehac1", &cc_ehac1, &b_cc_ehac1);
   fChain->SetBranchAddress("cc_ehac2", &cc_ehac2, &b_cc_ehac2);
   fChain->SetBranchAddress("cc_emaxco", &cc_emaxco, &b_cc_emaxco);
   fChain->SetBranchAddress("cc_nemc", &cc_nemc, &b_cc_nemc);
   fChain->SetBranchAddress("cc_nhac1", &cc_nhac1, &b_cc_nhac1);
   fChain->SetBranchAddress("cc_nhac2", &cc_nhac2, &b_cc_nhac2);
   fChain->SetBranchAddress("cc_fclus_dt", &cc_fclus_dt, &b_cc_fclus_dt);
   fChain->SetBranchAddress("cc_fclus_dm", &cc_fclus_dm, &b_cc_fclus_dm);
   fChain->SetBranchAddress("cc_fclus_et", &cc_fclus_et, &b_cc_fclus_et);
   fChain->SetBranchAddress("cc_fclus_e", &cc_fclus_e, &b_cc_fclus_e);
   fChain->SetBranchAddress("cc_rclus_asoe", &cc_rclus_asoe, &b_cc_rclus_asoe);
   fChain->SetBranchAddress("cc_vapvpcell", &cc_vapvpcell, &b_cc_vapvpcell);
   fChain->SetBranchAddress("cc_vapvpzu", &cc_vapvpzu, &b_cc_vapvpzu);
   fChain->SetBranchAddress("cc_vapvpcac", &cc_vapvpcac, &b_cc_vapvpcac);
   fChain->SetBranchAddress("ncell", &ncell, &b_ncell);
   fChain->SetBranchAddress("Celllist", Celllist, &b_Celllist);
   fChain->SetBranchAddress("Emncand", &Emncand, &b_Emncand);
   fChain->SetBranchAddress("Emerror", &Emerror, &b_Emerror);
   fChain->SetBranchAddress("Emprob", Emprob, &b_Emprob);
   fChain->SetBranchAddress("Empos", Empos, &b_Empos);
   fChain->SetBranchAddress("Emcalpos", Emcalpos, &b_Emcalpos);
   fChain->SetBranchAddress("Emcalene", Emcalene, &b_Emcalene);
   fChain->SetBranchAddress("Emein", Emein, &b_Emein);
   fChain->SetBranchAddress("Emenin", Emenin, &b_Emenin);
   fChain->SetBranchAddress("Emecorr", Emecorr, &b_Emecorr);
   fChain->SetBranchAddress("Emth", Emth, &b_Emth);
   fChain->SetBranchAddress("Emph", Emph, &b_Emph);
   fChain->SetBranchAddress("Empt", Empt, &b_Empt);
   fChain->SetBranchAddress("Emxdet", Emxdet, &b_Emxdet);
   fChain->SetBranchAddress("Emydet", Emydet, &b_Emydet);
   fChain->SetBranchAddress("Emtrknr", Emtrknr, &b_Emtrknr);
   fChain->SetBranchAddress("Emnrsl", Emnrsl, &b_Emnrsl);
   fChain->SetBranchAddress("Emdca", Emdca, &b_Emdca);
   fChain->SetBranchAddress("Emdcabeam", Emdcabeam, &b_Emdcabeam);
   fChain->SetBranchAddress("Emtrkp", Emtrkp, &b_Emtrkp);
   fChain->SetBranchAddress("Emtrkth", Emtrkth, &b_Emtrkth);
   fChain->SetBranchAddress("Emtrkph", Emtrkph, &b_Emtrkph);
   fChain->SetBranchAddress("Emtrkq", Emtrkq, &b_Emtrkq);
   fChain->SetBranchAddress("Emtrkdme", Emtrkdme, &b_Emtrkdme);
   fChain->SetBranchAddress("Emtrkdce", Emtrkdce, &b_Emtrkdce);
   fChain->SetBranchAddress("Emtrkpos", Emtrkpos, &b_Emtrkpos);
   fChain->SetBranchAddress("Emsrtf", Emsrtf, &b_Emsrtf);
   fChain->SetBranchAddress("Emsrtquad", Emsrtquad, &b_Emsrtquad);
   fChain->SetBranchAddress("Emhesf", Emhesf, &b_Emhesf);
   fChain->SetBranchAddress("Emcorrcode", Emcorrcode, &b_Emcorrcode);
   fChain->SetBranchAddress("Emsrtpos", Emsrtpos, &b_Emsrtpos);
   fChain->SetBranchAddress("Emsrtene", Emsrtene, &b_Emsrtene);
   fChain->SetBranchAddress("Emhespos", Emhespos, &b_Emhespos);
   fChain->SetBranchAddress("Emhesene", Emhesene, &b_Emhesene);
   fChain->SetBranchAddress("Emhesr", Emhesr, &b_Emhesr);
   fChain->SetBranchAddress("Emprsene", Emprsene, &b_Emprsene);
   fChain->SetBranchAddress("Emccet", Emccet, &b_Emccet);
   fChain->SetBranchAddress("Emccempz", Emccempz, &b_Emccempz);
   fChain->SetBranchAddress("Emetamax", Emetamax, &b_Emetamax);
   fChain->SetBranchAddress("Emcehmom", Emcehmom, &b_Emcehmom);
   fChain->SetBranchAddress("Emzuhmom", Emzuhmom, &b_Emzuhmom);
   fChain->SetBranchAddress("Emcchmom", Emcchmom, &b_Emcchmom);
   fChain->SetBranchAddress("Emxel", Emxel, &b_Emxel);
   fChain->SetBranchAddress("Emyel", Emyel, &b_Emyel);
   fChain->SetBranchAddress("Emq2el", Emq2el, &b_Emq2el);
   fChain->SetBranchAddress("Emxda", Emxda, &b_Emxda);
   fChain->SetBranchAddress("Emyda", Emyda, &b_Emyda);
   fChain->SetBranchAddress("Emq2da", Emq2da, &b_Emq2da);
   fChain->SetBranchAddress("Emxda_cell", Emxda_cell, &b_Emxda_cell);
   fChain->SetBranchAddress("Emyda_cell", Emyda_cell, &b_Emyda_cell);
   fChain->SetBranchAddress("Emq2da_cell", Emq2da_cell, &b_Emq2da_cell);
   fChain->SetBranchAddress("Emxjb", Emxjb, &b_Emxjb);
   fChain->SetBranchAddress("Emyjb", Emyjb, &b_Emyjb);
   fChain->SetBranchAddress("Emq2jb", Emq2jb, &b_Emq2jb);
   fChain->SetBranchAddress("Emxjb_cell", Emxjb_cell, &b_Emxjb_cell);
   fChain->SetBranchAddress("Emyjb_cell", Emyjb_cell, &b_Emyjb_cell);
   fChain->SetBranchAddress("Emq2jb_cell", Emq2jb_cell, &b_Emq2jb_cell);
   fChain->SetBranchAddress("Emncell", Emncell, &b_Emncell);
   fChain->SetBranchAddress("Emcellptr", Emcellptr, &b_Emcellptr);
   fChain->SetBranchAddress("Emhespade", Emhespade, &b_Emhespade);
   fChain->SetBranchAddress("Emhespadx", Emhespadx, &b_Emhespadx);
   fChain->SetBranchAddress("Emhespady", Emhespady, &b_Emhespady);
   fChain->SetBranchAddress("Emfmax", Emfmax, &b_Emfmax);
   fChain->SetBranchAddress("Emdeltaz", Emdeltaz, &b_Emdeltaz);
   fChain->SetBranchAddress("Emx0", Emx0, &b_Emx0);
   fChain->SetBranchAddress("Emdmcorr", Emdmcorr, &b_Emdmcorr);
   fChain->SetBranchAddress("Emdmcorrcode", Emdmcorrcode, &b_Emdmcorrcode);
   fChain->SetBranchAddress("fmcemtrue", fmcemtrue, &b_fmcemtrue);
   fChain->SetBranchAddress("fmcemnpart", fmcemnpart, &b_fmcemnpart);
   fChain->SetBranchAddress("fmcempartlist", fmcempartlist, &b_fmcempartlist);
   fChain->SetBranchAddress("fmcemenelist", fmcemenelist, &b_fmcemenelist);
   fChain->SetBranchAddress("Mc_el", &Mc_el, &b_Mc_el);
   fChain->SetBranchAddress("Mc_ep", &Mc_ep, &b_Mc_ep);
   fChain->SetBranchAddress("Mc_x", &Mc_x, &b_Mc_x);
   fChain->SetBranchAddress("Mc_y", &Mc_y, &b_Mc_y);
   fChain->SetBranchAddress("Mc_q2", &Mc_q2, &b_Mc_q2);
   fChain->SetBranchAddress("Mc_mu", &Mc_mu, &b_Mc_mu);
   fChain->SetBranchAddress("Mc_pt", &Mc_pt, &b_Mc_pt);
   fChain->SetBranchAddress("Mc_xpro", &Mc_xpro, &b_Mc_xpro);
   fChain->SetBranchAddress("Mc_xgam", &Mc_xgam, &b_Mc_xgam);
   fChain->SetBranchAddress("Mc_xpom", &Mc_xpom, &b_Mc_xpom);
   fChain->SetBranchAddress("Mc_beta", &Mc_beta, &b_Mc_beta);
   fChain->SetBranchAddress("Mc_t", &Mc_t, &b_Mc_t);
   fChain->SetBranchAddress("Mc_idl", &Mc_idl, &b_Mc_idl);
   fChain->SetBranchAddress("Mc_pidl", &Mc_pidl, &b_Mc_pidl);
   fChain->SetBranchAddress("Mc_pidp", &Mc_pidp, &b_Mc_pidp);
   fChain->SetBranchAddress("Mc_idfsl", &Mc_idfsl, &b_Mc_idfsl);
   fChain->SetBranchAddress("Mc_pfsl", Mc_pfsl, &b_Mc_pfsl);
   fChain->SetBranchAddress("Mc_pfsph", Mc_pfsph, &b_Mc_pfsph);
   fChain->SetBranchAddress("Mc_vtx", Mc_vtx, &b_Mc_vtx);
   fChain->SetBranchAddress("Mc_ichnn", &Mc_ichnn, &b_Mc_ichnn);
   fChain->SetBranchAddress("Mc_q2_cr", &Mc_q2_cr, &b_Mc_q2_cr);
   fChain->SetBranchAddress("Mc_x_cr", &Mc_x_cr, &b_Mc_x_cr);
   fChain->SetBranchAddress("Sincand", &Sincand, &b_Sincand);
   fChain->SetBranchAddress("Sierror", &Sierror, &b_Sierror);
   fChain->SetBranchAddress("Siprob", Siprob, &b_Siprob);
   fChain->SetBranchAddress("Sipos", Sipos, &b_Sipos);
   fChain->SetBranchAddress("Sicalpos", Sicalpos, &b_Sicalpos);
   fChain->SetBranchAddress("Sicalene", Sicalene, &b_Sicalene);
   fChain->SetBranchAddress("Siein", Siein, &b_Siein);
   fChain->SetBranchAddress("Sienin", Sienin, &b_Sienin);
   fChain->SetBranchAddress("Siecorr", Siecorr, &b_Siecorr);
   fChain->SetBranchAddress("Sith", Sith, &b_Sith);
   fChain->SetBranchAddress("Siph", Siph, &b_Siph);
   fChain->SetBranchAddress("Sipt", Sipt, &b_Sipt);
   fChain->SetBranchAddress("Sixdet", Sixdet, &b_Sixdet);
   fChain->SetBranchAddress("Siydet", Siydet, &b_Siydet);
   fChain->SetBranchAddress("Sitrknr", Sitrknr, &b_Sitrknr);
   fChain->SetBranchAddress("Sinrsl", Sinrsl, &b_Sinrsl);
   fChain->SetBranchAddress("Sidca", Sidca, &b_Sidca);
   fChain->SetBranchAddress("Sitrkp", Sitrkp, &b_Sitrkp);
   fChain->SetBranchAddress("Sitrkth", Sitrkth, &b_Sitrkth);
   fChain->SetBranchAddress("Sitrkph", Sitrkph, &b_Sitrkph);
   fChain->SetBranchAddress("Sitrkq", Sitrkq, &b_Sitrkq);
   fChain->SetBranchAddress("Sitrkdme", Sitrkdme, &b_Sitrkdme);
   fChain->SetBranchAddress("Sitrkpos", Sitrkpos, &b_Sitrkpos);
   fChain->SetBranchAddress("Sisrtf", Sisrtf, &b_Sisrtf);
   fChain->SetBranchAddress("Sisrtquad", Sisrtquad, &b_Sisrtquad);
   fChain->SetBranchAddress("Sihesf", Sihesf, &b_Sihesf);
   fChain->SetBranchAddress("Sicorrcode", Sicorrcode, &b_Sicorrcode);
   fChain->SetBranchAddress("Sisrtpos", Sisrtpos, &b_Sisrtpos);
   fChain->SetBranchAddress("Sisrtene", Sisrtene, &b_Sisrtene);
   fChain->SetBranchAddress("Sihespos", Sihespos, &b_Sihespos);
   fChain->SetBranchAddress("Sihesene", Sihesene, &b_Sihesene);
   fChain->SetBranchAddress("Sihesr", Sihesr, &b_Sihesr);
   fChain->SetBranchAddress("Siprsene", Siprsene, &b_Siprsene);
   fChain->SetBranchAddress("Siccet", Siccet, &b_Siccet);
   fChain->SetBranchAddress("Siccempz", Siccempz, &b_Siccempz);
   fChain->SetBranchAddress("Sietamax", Sietamax, &b_Sietamax);
   fChain->SetBranchAddress("Sicehmom", Sicehmom, &b_Sicehmom);
   fChain->SetBranchAddress("Sizuhmom", Sizuhmom, &b_Sizuhmom);
   fChain->SetBranchAddress("Sicchmom", Sicchmom, &b_Sicchmom);
   fChain->SetBranchAddress("Sixel", Sixel, &b_Sixel);
   fChain->SetBranchAddress("Siyel", Siyel, &b_Siyel);
   fChain->SetBranchAddress("Siq2el", Siq2el, &b_Siq2el);
   fChain->SetBranchAddress("Sixda", Sixda, &b_Sixda);
   fChain->SetBranchAddress("Siyda", Siyda, &b_Siyda);
   fChain->SetBranchAddress("Siq2da", Siq2da, &b_Siq2da);
   fChain->SetBranchAddress("Sixda_cell", Sixda_cell, &b_Sixda_cell);
   fChain->SetBranchAddress("Siyda_cell", Siyda_cell, &b_Siyda_cell);
   fChain->SetBranchAddress("Siq2da_cell", Siq2da_cell, &b_Siq2da_cell);
   fChain->SetBranchAddress("Sixjb", Sixjb, &b_Sixjb);
   fChain->SetBranchAddress("Siyjb", Siyjb, &b_Siyjb);
   fChain->SetBranchAddress("Siq2jb", Siq2jb, &b_Siq2jb);
   fChain->SetBranchAddress("Sixjb_cell", Sixjb_cell, &b_Sixjb_cell);
   fChain->SetBranchAddress("Siyjb_cell", Siyjb_cell, &b_Siyjb_cell);
   fChain->SetBranchAddress("Siq2jb_cell", Siq2jb_cell, &b_Siq2jb_cell);
   fChain->SetBranchAddress("Sincell", Sincell, &b_Sincell);
   fChain->SetBranchAddress("Sicellptr", Sicellptr, &b_Sicellptr);
   fChain->SetBranchAddress("Sifmax", Sifmax, &b_Sifmax);
   fChain->SetBranchAddress("Sideltaz", Sideltaz, &b_Sideltaz);
   fChain->SetBranchAddress("Six0", Six0, &b_Six0);
   fChain->SetBranchAddress("Sidmcorr", Sidmcorr, &b_Sidmcorr);
   fChain->SetBranchAddress("Sidmcorrcode", Sidmcorrcode, &b_Sidmcorrcode);
   fChain->SetBranchAddress("fmcsitrue", fmcsitrue, &b_fmcsitrue);
   fChain->SetBranchAddress("fmcsinpart", fmcsinpart, &b_fmcsinpart);
   fChain->SetBranchAddress("fmcsipartlist", fmcsipartlist, &b_fmcsipartlist);
   fChain->SetBranchAddress("fmcsienelist", fmcsienelist, &b_fmcsienelist);
   fChain->SetBranchAddress("Ntrkvtx", &Ntrkvtx, &b_Ntrkvtx);
   fChain->SetBranchAddress("Xvtx", &Xvtx, &b_Xvtx);
   fChain->SetBranchAddress("Yvtx", &Yvtx, &b_Yvtx);
   fChain->SetBranchAddress("Zvtx", &Zvtx, &b_Zvtx);
   fChain->SetBranchAddress("Chivtx", &Chivtx, &b_Chivtx);
   fChain->SetBranchAddress("Nsecvtx", &Nsecvtx, &b_Nsecvtx);
   fChain->SetBranchAddress("Xsecvtx", Xsecvtx, &b_Xsecvtx);
   fChain->SetBranchAddress("Ysecvtx", Ysecvtx, &b_Ysecvtx);
   fChain->SetBranchAddress("Zsecvtx", Zsecvtx, &b_Zsecvtx);
   fChain->SetBranchAddress("Chisecvtx", Chisecvtx, &b_Chisecvtx);
   fChain->SetBranchAddress("Fetatr", &Fetatr, &b_Fetatr);
   fChain->SetBranchAddress("Betatr", &Betatr, &b_Betatr);
   fChain->SetBranchAddress("Pt_tr", &Pt_tr, &b_Pt_tr);
   fChain->SetBranchAddress("Empz_tr_pi", &Empz_tr_pi, &b_Empz_tr_pi);
   fChain->SetBranchAddress("Et_tr", &Et_tr, &b_Et_tr);
   fChain->SetBranchAddress("E_tr_pi", &E_tr_pi, &b_E_tr_pi);
   fChain->SetBranchAddress("phi_tr", &phi_tr, &b_phi_tr);
   fChain->SetBranchAddress("zvtx_fcal", &zvtx_fcal, &b_zvtx_fcal);
   fChain->SetBranchAddress("fcal_nrgoodcells", &fcal_nrgoodcells, &b_fcal_nrgoodcells);
   fChain->SetBranchAddress("fcal_vzerr", &fcal_vzerr, &b_fcal_vzerr);
   fChain->SetBranchAddress("V_h_px_zu", &V_h_px_zu, &b_V_h_px_zu);
   fChain->SetBranchAddress("V_h_py_zu", &V_h_py_zu, &b_V_h_py_zu);
   fChain->SetBranchAddress("V_h_pz_zu", &V_h_pz_zu, &b_V_h_pz_zu);
   fChain->SetBranchAddress("V_h_e_zu", &V_h_e_zu, &b_V_h_e_zu);
   fChain->SetBranchAddress("Etamax_zu", &Etamax_zu, &b_Etamax_zu);
   fChain->SetBranchAddress("Etamax_zu4", &Etamax_zu4, &b_Etamax_zu4);
   fChain->SetBranchAddress("Fgap", &Fgap, &b_Fgap);
   fChain->SetBranchAddress("Bgap", &Bgap, &b_Bgap);
   fChain->SetBranchAddress("Nzufos", &Nzufos, &b_Nzufos);
   fChain->SetBranchAddress("tufo", tufo, &b_tufo);
   fChain->SetBranchAddress("zufo_bsp", zufo_bsp, &b_zufo_bsp);
   fChain->SetBranchAddress("zufo", zufo, &b_zufo);
   fChain->SetBranchAddress("cufo", cufo, &b_cufo);
   fChain->SetBranchAddress("zufoecal", zufoecal, &b_zufoecal);
   fChain->SetBranchAddress("zufoeemc", zufoeemc, &b_zufoeemc);
   fChain->SetBranchAddress("zufopos", zufopos, &b_zufopos);
   fChain->SetBranchAddress("nisl", &nisl, &b_nisl);
   fChain->SetBranchAddress("Nrcisl", Nrcisl, &b_Nrcisl);
   fChain->SetBranchAddress("Isltyp", Isltyp, &b_Isltyp);
   fChain->SetBranchAddress("eisl", eisl, &b_eisl);
   fChain->SetBranchAddress("xisl", xisl, &b_xisl);
   fChain->SetBranchAddress("yisl", yisl, &b_yisl);
   fChain->SetBranchAddress("zisl", zisl, &b_zisl);
   fChain->SetBranchAddress("risl", risl, &b_risl);
   fChain->SetBranchAddress("emceisl", emceisl, &b_emceisl);
   fChain->SetBranchAddress("xi1", xi1, &b_xi1);
   fChain->SetBranchAddress("yi1", yi1, &b_yi1);
   fChain->SetBranchAddress("zi1", zi1, &b_zi1);
   fChain->SetBranchAddress("nt", &nt, &b_nt);
   fChain->SetBranchAddress("vcthid", vcthid, &b_vcthid);
   fChain->SetBranchAddress("qtr", qtr, &b_qtr);
   fChain->SetBranchAddress("swmtr", swmtr, &b_swmtr);
   fChain->SetBranchAddress("qlttr", qlttr, &b_qlttr);
   fChain->SetBranchAddress("mtri", mtri, &b_mtri);
   fChain->SetBranchAddress("wtri", wtri, &b_wtri);
   fChain->SetBranchAddress("ptr", ptr, &b_ptr);
   fChain->SetBranchAddress("dptr", dptr, &b_dptr);
   fChain->SetBranchAddress("thtr", thtr, &b_thtr);
   fChain->SetBranchAddress("phtr", phtr, &b_phtr);
   fChain->SetBranchAddress("Dist_istr", Dist_istr, &b_Dist_istr);
   fChain->SetBranchAddress("trk_ntracks", &trk_ntracks, &b_trk_ntracks);
   fChain->SetBranchAddress("trk_type", trk_type, &b_trk_type);
   fChain->SetBranchAddress("ntrack_type", ntrack_type, &b_ntrack_type);
   fChain->SetBranchAddress("def_trk_type", &def_trk_type, &b_def_trk_type);
   fChain->SetBranchAddress("trk_id", trk_id, &b_trk_id);
   fChain->SetBranchAddress("trk_id2", trk_id2, &b_trk_id2);
   fChain->SetBranchAddress("trk_px", trk_px, &b_trk_px);
   fChain->SetBranchAddress("trk_py", trk_py, &b_trk_py);
   fChain->SetBranchAddress("trk_pz", trk_pz, &b_trk_pz);
   fChain->SetBranchAddress("trk_charge", trk_charge, &b_trk_charge);
   fChain->SetBranchAddress("trk_vtx", trk_vtx, &b_trk_vtx);
   fChain->SetBranchAddress("trk_prim_vtx", trk_prim_vtx, &b_trk_prim_vtx);
   fChain->SetBranchAddress("trk_sec_vtx", trk_sec_vtx, &b_trk_sec_vtx);
   fChain->SetBranchAddress("trk_vxid", trk_vxid, &b_trk_vxid);
   fChain->SetBranchAddress("trk_endpos", trk_endpos, &b_trk_endpos);
   fChain->SetBranchAddress("trk_nzbyt", trk_nzbyt, &b_trk_nzbyt);
   fChain->SetBranchAddress("trk_naxial", trk_naxial, &b_trk_naxial);
   fChain->SetBranchAddress("trk_nstereo", trk_nstereo, &b_trk_nstereo);
   fChain->SetBranchAddress("trk_ndof", trk_ndof, &b_trk_ndof);
   fChain->SetBranchAddress("trk_layinner", trk_layinner, &b_trk_layinner);
   fChain->SetBranchAddress("trk_layouter", trk_layouter, &b_trk_layouter);
   fChain->SetBranchAddress("trk_dedxctd", trk_dedxctd, &b_trk_dedxctd);
   fChain->SetBranchAddress("trk_dedxctdcr", trk_dedxctdcr, &b_trk_dedxctdcr);
   fChain->SetBranchAddress("trk_dedxctderr", trk_dedxctderr, &b_trk_dedxctderr);
   fChain->SetBranchAddress("trk_dedxctdnh", trk_dedxctdnh, &b_trk_dedxctdnh);
   fChain->SetBranchAddress("trk_chi2", trk_chi2, &b_trk_chi2);
   fChain->SetBranchAddress("trk_vchi2", trk_vchi2, &b_trk_vchi2);
   fChain->SetBranchAddress("trk_nbr", trk_nbr, &b_trk_nbr);
   fChain->SetBranchAddress("trk_nbz", trk_nbz, &b_trk_nbz);
   fChain->SetBranchAddress("trk_nwu", trk_nwu, &b_trk_nwu);
   fChain->SetBranchAddress("trk_nwv", trk_nwv, &b_trk_nwv);
   fChain->SetBranchAddress("trk_dedxmvd", trk_dedxmvd, &b_trk_dedxmvd);
   fChain->SetBranchAddress("trk_imppar", trk_imppar, &b_trk_imppar);
   fChain->SetBranchAddress("trk_imperr", trk_imperr, &b_trk_imperr);
   fChain->SetBranchAddress("trk_pca", trk_pca, &b_trk_pca);
   fChain->SetBranchAddress("trk_nvert", &trk_nvert, &b_trk_nvert);
   fChain->SetBranchAddress("vtx_type", vtx_type, &b_vtx_type);
   fChain->SetBranchAddress("vtx_prim", vtx_prim, &b_vtx_prim);
   fChain->SetBranchAddress("vtx_id", vtx_id, &b_vtx_id);
   fChain->SetBranchAddress("vtx_x", vtx_x, &b_vtx_x);
   fChain->SetBranchAddress("vtx_y", vtx_y, &b_vtx_y);
   fChain->SetBranchAddress("vtx_z", vtx_z, &b_vtx_z);
   fChain->SetBranchAddress("vtx_chi2", vtx_chi2, &b_vtx_chi2);
   fChain->SetBranchAddress("vtx_ndf", vtx_ndf, &b_vtx_ndf);
   fChain->SetBranchAddress("dattyp", &dattyp, &b_dattyp);
   fChain->SetBranchAddress("bospx", &bospx, &b_bospx);
   fChain->SetBranchAddress("bospy", &bospy, &b_bospy);
   fChain->SetBranchAddress("bospz", &bospz, &b_bospz);
   fChain->SetBranchAddress("bosene", &bosene, &b_bosene);
   fChain->SetBranchAddress("bit3_tlt4", &bit3_tlt4, &b_bit3_tlt4);
   fChain->SetBranchAddress("tlt4", tlt4, &b_tlt4);
   fChain->SetBranchAddress("nppart", &nppart, &b_nppart);
   fChain->SetBranchAddress("idpart", idpart, &b_idpart);
   fChain->SetBranchAddress("ppart", ppart, &b_ppart);
   fChain->SetBranchAddress("Siein03", &Siein03, &b_Siein03);
   fChain->SetBranchAddress("Sienin03", &Sienin03, &b_Sienin03);
   fChain->SetBranchAddress("mc_fla", mc_fla, &b_mc_fla);
   fChain->SetBranchAddress("mc_juscal", &mc_juscal, &b_mc_juscal);
   fChain->SetBranchAddress("mc_jux1ge", &mc_jux1ge, &b_mc_jux1ge);
   fChain->SetBranchAddress("mc_jux2ge", &mc_jux2ge, &b_mc_jux2ge);
   fChain->SetBranchAddress("mc_np", &mc_np, &b_mc_np);
   fChain->SetBranchAddress("mc_pa", mc_pa, &b_mc_pa);
   fChain->SetBranchAddress("mc_eparton", mc_eparton, &b_mc_eparton);
   fChain->SetBranchAddress("mc_efla", &mc_efla, &b_mc_efla);
   fChain->SetBranchAddress("mc_ygen", &mc_ygen, &b_mc_ygen);
   fChain->SetBranchAddress("mc_xgen", &mc_xgen, &b_mc_xgen);
   fChain->SetBranchAddress("mc_q2gen", &mc_q2gen, &b_mc_q2gen);
   fChain->SetBranchAddress("mc_gaparton", mc_gaparton, &b_mc_gaparton);
   fChain->SetBranchAddress("mc_yapp", &mc_yapp, &b_mc_yapp);
   fChain->SetBranchAddress("mc_xapp", &mc_xapp, &b_mc_xapp);
   fChain->SetBranchAddress("mc_q2app", &mc_q2app, &b_mc_q2app);
   fChain->SetBranchAddress("mc_xxt", &mc_xxt, &b_mc_xxt);
   fChain->SetBranchAddress("mc_yyt", &mc_yyt, &b_mc_yyt);
   fChain->SetBranchAddress("mc_zzt", &mc_zzt, &b_mc_zzt);
   fChain->SetBranchAddress("mc_gparton", mc_gparton, &b_mc_gparton);
   fChain->SetBranchAddress("mc_pparton", mc_pparton, &b_mc_pparton);
   fChain->SetBranchAddress("Mcebeam", &Mcebeam, &b_Mcebeam);
   fChain->SetBranchAddress("Mcpbeam", &Mcpbeam, &b_Mcpbeam);
   fChain->SetBranchAddress("Mcelec", &Mcelec, &b_Mcelec);
   fChain->SetBranchAddress("Mcethe", &Mcethe, &b_Mcethe);
   fChain->SetBranchAddress("Mcephi", &Mcephi, &b_Mcephi);
   fChain->SetBranchAddress("Mcq2", &Mcq2, &b_Mcq2);
   fChain->SetBranchAddress("Mcxbj", &Mcxbj, &b_Mcxbj);
   fChain->SetBranchAddress("Mcybj", &Mcybj, &b_Mcybj);
   fChain->SetBranchAddress("Mcgam", Mcgam, &b_Mcgam);
   fChain->SetBranchAddress("vtxpos", vtxpos, &b_vtxpos);
   fChain->SetBranchAddress("Nfmckin", &Nfmckin, &b_Nfmckin);
   fChain->SetBranchAddress("Idfmckin", Idfmckin, &b_Idfmckin);
   fChain->SetBranchAddress("Ppfmckin", Ppfmckin, &b_Ppfmckin);
   Notify();
}

Bool_t Variables::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

void Variables::Show(Long64_t entry)
{
// Print contents of entry.
// If entry is not specified, print current entry
   if (!fChain) return;
   fChain->Show(entry);
}
Int_t Variables::Cut(Long64_t entry)
{
// This function may be called from Loop.
// returns  1 if entry is accepted.
// returns -1 otherwise.
   return 1;
}
#endif // #ifdef Variables_cxx
