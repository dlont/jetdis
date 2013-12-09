//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Tue Aug 23 10:46:38 2011 by ROOT version 5.26/00c
// from TTree orange/orange tree
// found on file: data_05_57123_57123_01.root
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
   Int_t           Runnr;
   Int_t           Eventnr;
   Float_t         Weight;
   Int_t           Evtake;
   Int_t           Evtake_iwant;
   Int_t           Mvdtake;
   Int_t           Stttake;
   Int_t           Tpoltake;
   Int_t           Lpoltake;
   Int_t           Fmutake;
   Int_t           Mbtake;
   Int_t           Tag6take;
   Int_t           Fltw[2];
   Int_t           Fltpsw[2];
   Int_t           Fltfl;
   Int_t           Gslt_global;
   Int_t           Sltw[6];
   Int_t           Sltupw[6];
   Int_t           Tltw[15];
   Int_t           Dstw[4];
   Int_t           Fltpsfcw[2];
   Int_t           Flt_cal_e;
   Int_t           Flt_cal_emc;
   Int_t           Flt_cal_et_fbp;
   Int_t           Flt_cal_fbp_ovf;
   Int_t           Flt_bcal_emc;
   Int_t           Flt_rcal_emc;
   Int_t           Flt_remcth;
   Int_t           Flt_fcal_tote;
   Int_t           Flt_trk_cl;
   Int_t           Flt_trk_mlt;
   Int_t           Flt_lumi_ee;
   Int_t           Flt_lumi_eg;
   Int_t           Flt_et;
   Int_t           Flt_emiss;
   Int_t           Flt_fcal_ebp;
   Int_t           Flt_fcal_oebp;
   Int_t           Flt_risoe;
   Int_t           Flt_risoe4;
   Int_t           Flt_risoe5;
   Int_t           Flt_risoe6;
   Int_t           Flt_risoe7;
   Int_t           Flt_bisoe;
   Int_t           Flt_fisoe;
   Int_t           Flt_gtrk;
   Int_t           Flt_trk_vmult;
   Float_t         Slt_et;
   Float_t         Slt_et_1ir;
   Float_t         Slt_et_2ir;
   Float_t         Slt_emnpz;
   Float_t         Slt_pzove;
   Float_t         Slt_vtx_z;
   Int_t           Slt_slf;
   Int_t           Slt_slu;
   Float_t         Slt_pt12;
   Float_t         Slt_etotfcal;
   Float_t         Slt_etotbcal;
   Float_t         Slt_etotrcal;
   Float_t         Slt_etotemc;
   Float_t         Slt_etransemc;
   Float_t         Slt_pxemc;
   Float_t         Slt_pyemc;
   Float_t         Slt_pzemc;
   Float_t         Slt_etothac;
   Float_t         Slt_etranshac;
   Float_t         Slt_pxhac;
   Float_t         Slt_pyhac;
   Float_t         Slt_pzhac;
   Float_t         Slt_etot;
   Float_t         Slt_etmis;
   Float_t         Slt_pxbp;
   Float_t         Slt_pybp;
   Float_t         Slt_etmbp;
   Float_t         Slt_ebp;
   Float_t         Slt_eremc;
   Float_t         Slt_erhac;
   Float_t         Slt_ebemc;
   Float_t         Slt_ebhac;
   Float_t         Slt_efemc;
   Float_t         Slt_efhac;
   Float_t         Slt_etfbp;
   Float_t         Slt_btime;
   Float_t         Slt_gtime;
   Float_t         Slt_gnpmt;
   Float_t         Slt_bnpmt;
   Float_t         Slt_noclus;
   Float_t         Slt_eemcclus;
   Int_t           Otrkclass;
   Int_t           Otrkmult;
   Int_t           Otrkvmult;
   Float_t         Bac_etot;
   Float_t         Bac_etot_o2r;
   Int_t           Bac_npad;
   Int_t           Bac_npad_o2r;
   Float_t         Bac_et;
   Float_t         Bac_px;
   Float_t         Bac_py;
   Int_t           Nbacmu;
   Float_t         Mubac_xyz[50][3];   //[NBACMU]
   Float_t         Mubac_dxyz[50][3];   //[NBACMU]
   Float_t         Mubac_cos[50][3];   //[NBACMU]
   Float_t         Mubac_dcos[50][3];   //[NBACMU]
   Float_t         Mubac_eloss[50];   //[NBACMU]
   Float_t         Mubac_deloss[50];   //[NBACMU]
   Int_t           Mubac_unit[50];   //[NBACMU]
   Int_t           Mubac_dim[50];   //[NBACMU]
   Int_t           Mubac_quality[50];   //[NBACMU]
   Int_t           Ahit[50];   //[NBACMU]
   Int_t           Pad[50];   //[NBACMU]
   Int_t           Nbadpmt;
   Int_t           Badcell[63];   //[nBadPMT]
   Int_t           Badside[63];   //[nBadPMT]
   Float_t         Ebefore[63];   //[nBadPMT]
   Float_t         Eafter[63];   //[nBadPMT]
   Int_t           Bitword[2];
   Int_t           Calib_idcalscheme;
   Int_t           Ncaltru;
   Int_t           Caltru_cellnr[600];   //[ncaltru]
   Float_t         Caltru_e[600];   //[ncaltru]
   Float_t         Caltru_imbal[600];   //[ncaltru]
   Float_t         Caltru_t[600][2];   //[ncaltru]
   Int_t           Caltru_id[600];   //[ncaltru]
   Float_t         Caltru_pos[600][3];   //[ncaltru]
   Float_t         Caltru_eoriginal[600];   //[ncaltru]
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
   Int_t           Cal_tf_n;
   Int_t           Cal_tb_n;
   Int_t           Cal_tr_n;
   Int_t           Cal_tg_n;
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
   Float_t         Pex1ir[4];
   Float_t         Et1ir;
   Float_t         Etex1ir;
   Float_t         Pex2ir[4];
   Float_t         Et2ir;
   Float_t         Etex2ir;
   Float_t         F1rhac;
   Float_t         F2rhac;
   Float_t         Percir[4];
   Float_t         Etrcir;
   Float_t         Cc_had_0[4];
   Float_t         Cc_gamma_0;
   Float_t         Cc_cehmom[4];
   Float_t         Cc_zuhmom[4];
   Float_t         Cc_cchmom[4];
   Float_t         Cc_pt;
   Float_t         Cc_et;
   Float_t         Cc_empz;
   Float_t         Cc_gamma;
   Float_t         Cc_yjb;
   Float_t         Cc_q2jb;
   Float_t         Cc_xjb;
   Float_t         Cc_etamax;
   Float_t         Cc_eemc;
   Float_t         Cc_ehac1;
   Float_t         Cc_ehac2;
   Float_t         Cc_emaxco;
   Int_t           Cc_nemc;
   Int_t           Cc_nhac1;
   Int_t           Cc_nhac2;
   Int_t           Cc_fclus_dt;
   Int_t           Cc_fclus_dm;
   Float_t         Cc_fclus_et;
   Float_t         Cc_fclus_e;
   Float_t         Cc_rclus_asoe;
   Float_t         Cc_vapvpcell;
   Float_t         Cc_vapvpzu;
   Float_t         Cc_vapvpcac;
   Int_t           Ncell;
   Int_t           Celllist[2000];   //[nCell]
   Int_t           Emncand;
   Int_t           Emerror;
   Float_t         Emprob[4];   //[EmNcand]
   Float_t         Empos[4][3];   //[EmNcand]
   Float_t         Emcalpos[4][3];   //[EmNcand]
   Float_t         Emcalene[4];   //[EmNcand]
   Float_t         Emein[4];   //[EmNcand]
   Float_t         Emenin[4];   //[EmNcand]
   Float_t         Emecorr[4][3];   //[EmNcand]
   Float_t         Emth[4];   //[EmNcand]
   Float_t         Emph[4];   //[EmNcand]
   Float_t         Empt[4];   //[EmNcand]
   Int_t           Emxdet[4][3];   //[EmNcand]
   Int_t           Emydet[4][3];   //[EmNcand]
   Int_t           Emtrknr[4];   //[EmNcand]
   Int_t           Emnrsl[4];   //[EmNcand]
   Float_t         Emdca[4];   //[EmNcand]
   Float_t         Emdcabeam[4];   //[EmNcand]
   Float_t         Emtrkp[4];   //[EmNcand]
   Float_t         Emtrkth[4];   //[EmNcand]
   Float_t         Emtrkph[4];   //[EmNcand]
   Float_t         Emtrkq[4];   //[EmNcand]
   Float_t         Emtrkdme[4];   //[EmNcand]
   Float_t         Emtrkdce[4];   //[EmNcand]
   Float_t         Emtrkpos[4][3];   //[EmNcand]
   Int_t           Emsrtf[4];   //[EmNcand]
   Int_t           Emsrtquad[4];   //[EmNcand]
   Int_t           Emhesf[4];   //[EmNcand]
   Int_t           Emcorrcode[4];   //[EmNcand]
   Float_t         Emsrtpos[4][2];   //[EmNcand]
   Float_t         Emsrtene[4];   //[EmNcand]
   Float_t         Emhespos[4][2];   //[EmNcand]
   Float_t         Emhesene[4];   //[EmNcand]
   Float_t         Emhesr[4];   //[EmNcand]
   Float_t         Emprsene[4][3];   //[EmNcand]
   Float_t         Emccet[4];   //[EmNcand]
   Float_t         Emccempz[4];   //[EmNcand]
   Float_t         Emetamax[4];   //[EmNcand]
   Float_t         Emcehmom[4][4];   //[EmNcand]
   Float_t         Emzuhmom[4][4];   //[EmNcand]
   Float_t         Emcchmom[4][4];   //[EmNcand]
   Float_t         Emxel[4];   //[EmNcand]
   Float_t         Emyel[4];   //[EmNcand]
   Float_t         Emq2el[4];   //[EmNcand]
   Float_t         Emxda[4];   //[EmNcand]
   Float_t         Emyda[4];   //[EmNcand]
   Float_t         Emq2da[4];   //[EmNcand]
   Float_t         Emxda_cell[4];   //[EmNcand]
   Float_t         Emyda_cell[4];   //[EmNcand]
   Float_t         Emq2da_cell[4];   //[EmNcand]
   Float_t         Emxjb[4];   //[EmNcand]
   Float_t         Emyjb[4];   //[EmNcand]
   Float_t         Emq2jb[4];   //[EmNcand]
   Float_t         Emxjb_cell[4];   //[EmNcand]
   Float_t         Emyjb_cell[4];   //[EmNcand]
   Float_t         Emq2jb_cell[4];   //[EmNcand]
   Int_t           Emncell[4];   //[EmNcand]
   Int_t           Emcellptr[4];   //[EmNcand]
   Float_t         Emfemc[4];   //[EmNcand]
   Float_t         Emcalprob[4];   //[EmNcand]
   Int_t           Eminctd[4];   //[EmNcand]
   Int_t           Emnneartrk[4][2];   //[EmNcand]
   Float_t         Emetneartrk[4][2];   //[EmNcand]
   Float_t         Emtrkmatchi2[4];   //[EmNcand]
   Float_t         Emfmaxbemc[4];   //[EmNcand]
   Float_t         Emfmaxremc[4];   //[EmNcand]
   Float_t         Emfmaxfemc[4];   //[EmNcand]
   Float_t         Emdeltaz[4];   //[EmNcand]
   Float_t         Emdeltax[4];   //[EmNcand]
   Float_t         Emdeltay[4];   //[EmNcand]
   Float_t         Emx0[4];   //[EmNcand]
   Float_t         Emdmcorr[4];   //[EmNcand]
   Int_t           Emdmcorrcode[4];   //[EmNcand]
   Int_t           E5ncand;
   Int_t           E5error;
   Float_t         E5prob[4];   //[E5Ncand]
   Float_t         E5pos[4][3];   //[E5Ncand]
   Float_t         E5calpos[4][3];   //[E5Ncand]
   Float_t         E5calene[4];   //[E5Ncand]
   Float_t         E5ein[4];   //[E5Ncand]
   Float_t         E5enin[4];   //[E5Ncand]
   Float_t         E5ecorr[4][3];   //[E5Ncand]
   Float_t         E5th[4];   //[E5Ncand]
   Float_t         E5ph[4];   //[E5Ncand]
   Float_t         E5pt[4];   //[E5Ncand]
   Int_t           E5xdet[4][3];   //[E5Ncand]
   Int_t           E5ydet[4][3];   //[E5Ncand]
   Int_t           E5trknr[4];   //[E5Ncand]
   Int_t           E5nrsl[4];   //[E5Ncand]
   Float_t         E5dca[4];   //[E5Ncand]
   Float_t         E5dcabeam[4];   //[E5Ncand]
   Float_t         E5trkp[4];   //[E5Ncand]
   Float_t         E5trkth[4];   //[E5Ncand]
   Float_t         E5trkph[4];   //[E5Ncand]
   Float_t         E5trkq[4];   //[E5Ncand]
   Float_t         E5trkdme[4];   //[E5Ncand]
   Float_t         E5trkdce[4];   //[E5Ncand]
   Float_t         E5trkpos[4][3];   //[E5Ncand]
   Int_t           E5srtf[4];   //[E5Ncand]
   Int_t           E5srtquad[4];   //[E5Ncand]
   Int_t           E5hesf[4];   //[E5Ncand]
   Int_t           E5corrcode[4];   //[E5Ncand]
   Float_t         E5srtpos[4][2];   //[E5Ncand]
   Float_t         E5srtene[4];   //[E5Ncand]
   Float_t         E5hespos[4][2];   //[E5Ncand]
   Float_t         E5hesene[4];   //[E5Ncand]
   Float_t         E5hesr[4];   //[E5Ncand]
   Float_t         E5prsene[4][3];   //[E5Ncand]
   Float_t         E5ccet[4];   //[E5Ncand]
   Float_t         E5ccempz[4];   //[E5Ncand]
   Float_t         E5etamax[4];   //[E5Ncand]
   Float_t         E5cehmom[4][4];   //[E5Ncand]
   Float_t         E5zuhmom[4][4];   //[E5Ncand]
   Float_t         E5cchmom[4][4];   //[E5Ncand]
   Float_t         E5xel[4];   //[E5Ncand]
   Float_t         E5yel[4];   //[E5Ncand]
   Float_t         E5q2el[4];   //[E5Ncand]
   Float_t         E5xda[4];   //[E5Ncand]
   Float_t         E5yda[4];   //[E5Ncand]
   Float_t         E5q2da[4];   //[E5Ncand]
   Float_t         E5xda_cell[4];   //[E5Ncand]
   Float_t         E5yda_cell[4];   //[E5Ncand]
   Float_t         E5q2da_cell[4];   //[E5Ncand]
   Float_t         E5xjb[4];   //[E5Ncand]
   Float_t         E5yjb[4];   //[E5Ncand]
   Float_t         E5q2jb[4];   //[E5Ncand]
   Float_t         E5xjb_cell[4];   //[E5Ncand]
   Float_t         E5yjb_cell[4];   //[E5Ncand]
   Float_t         E5q2jb_cell[4];   //[E5Ncand]
   Float_t         E5femc[4];   //[E5Ncand]
   Float_t         E5calprob[4];   //[E5Ncand]
   Int_t           E5inctd[4];   //[E5Ncand]
   Int_t           E5nneartrk[4][2];   //[E5Ncand]
   Float_t         E5etneartrk[4][2];   //[E5Ncand]
   Float_t         E5trkmatchi2[4];   //[E5Ncand]
   Float_t         E5fmaxbemc[4];   //[E5Ncand]
   Float_t         E5fmaxremc[4];   //[E5Ncand]
   Float_t         E5fmaxfemc[4];   //[E5Ncand]
   Float_t         E5deltaz[4];   //[E5Ncand]
   Float_t         E5deltax[4];   //[E5Ncand]
   Float_t         E5deltay[4];   //[E5Ncand]
   Float_t         Fc_etot;
   Float_t         Fc_pt;
   Float_t         Fc_empz;
   Float_t         Fc_proctime;
   Int_t           Fcb_elec;
   Int_t           Fcb_ptmis;
   Int_t           Fcb_beamg;
   Int_t           Fcb_empzlo;
   Int_t           Fcb_empzhi;
   Int_t           Fcb_etcl;
   Int_t           Fcb_abort;
   Int_t           Fcb_fltabort;
   Int_t           Fcb_dump;
   Int_t           Fce_dmp_abnd;
   Int_t           Fce_fatalnotdone;
   Int_t           Fce_toobig;
   Int_t           Fce_incomplete;
   Int_t           Fce_nofcfif2;
   Int_t           O1fltfl;
   Int_t           Fltfc_valid;
   Int_t           Fltfc_fcerror;
   Int_t           Fltfc_fcbusy;
   Int_t           Fltfc_fcabortcond;
   Int_t           Flttesttype;
   Int_t           Fltrotyp;
   Int_t           Fltbunchambig;
   Int_t           Fltbcn;
   Int_t           Fc_wc_t;
   Int_t           Fc_wc_f;
   Int_t           Fc_wc_b;
   Int_t           Fc_wc_r;
   Int_t           Fltfc_elec;
   Int_t           Fltfc_ptmis;
   Int_t           Fltfc_beamg;
   Int_t           Fltfc_empzlo;
   Int_t           Fltfc_empzhi;
   Int_t           Fltfc_etcl;
   Int_t           Fltfc_abort;
   Int_t           Fltfc_fltabort;
   Int_t           Fc_readstat_t;
   Int_t           Fc_readstat_f;
   Int_t           Fc_readstat_b;
   Int_t           Fc_readstat_r;
   Int_t           Fc_unknaddr_t;
   Int_t           Fc_unknaddr_f;
   Int_t           Fc_unknaddr_b;
   Int_t           Fc_unknaddr_r;
   Int_t           Fc_sa_t;
   Int_t           Fc_sa_f;
   Int_t           Fc_sa_b;
   Int_t           Fc_sa_r;
   Int_t           Nmu;
   Int_t           Muqual[20];   //[Nmu]
   Int_t           Mucharge[20];   //[Nmu]
   Float_t         Mupt[20];   //[Nmu]
   Float_t         Muth[20];   //[Nmu]
   Float_t         Muph[20];   //[Nmu]
   Float_t         Mup[20][3];   //[Nmu]
   Float_t         Muperr[20];   //[Nmu]
   Int_t           Mutrfl[20];   //[Nmu]
   Int_t           Mutrid[20];   //[Nmu]
   Int_t           Muvcid[20];   //[Nmu]
   Int_t           Muztid[20];   //[Nmu]
   Int_t           Mustid[20];   //[Nmu]
   Int_t           Muvtxfl[20];   //[Nmu]
   Int_t           Muvtxid[20];   //[Nmu]
   Int_t           Muglomu[20];   //[Nmu]
   Int_t           Mubremat[20];   //[Nmu]
   Int_t           Mubacmat[20];   //[Nmu]
   Int_t           Mumubac[20];   //[Nmu]
   Int_t           Mumamma[20];   //[Nmu]
   Int_t           Mumpmat[20];   //[Nmu]
   Int_t           Mumufo[20];   //[Nmu]
   Int_t           Mumip[20];   //[Nmu]
   Int_t           Mumv[20];   //[Nmu]
   Int_t           Mucalfl[20];   //[Nmu]
   Float_t         Mucalene[20];   //[Nmu]
   Float_t         Muhac2[20];   //[Nmu]
   Int_t           Muzufid[20];   //[Nmu]
   Float_t         Mupmip[20];   //[Nmu]
   Float_t         Muhene[20];   //[Nmu]
   Float_t         Mutime[20];   //[Nmu]
   Int_t           Muchfl[20];   //[Nmu]
   Int_t           Muchid[20];   //[Nmu]
   Float_t         Mupmat[20];   //[Nmu]
   Int_t           Mundof[20];   //[Nmu]
   Int_t           Munphi[20];   //[Nmu]
   Float_t         Muz[20];   //[Nmu]
   Float_t         Muprec[20];   //[Nmu]
   Float_t         Mubmchi2[20];   //[Nmu]
   Int_t           Mubmbac[20];   //[Nmu]
   Float_t         Mubacdca[20];   //[Nmu]
   Int_t           Mubacdimq[20];   //[Nmu]
   Float_t         Mudxy[20];   //[Nmu]
   Float_t         Mudz[20];   //[Nmu]
   Float_t         Muisol[20][10];   //[Nmu]
   Int_t           Munis[20][10];   //[Nmu]
   Float_t         Muisdrmip[20][2];   //[Nmu]
   Float_t         Muisetmip[20][2];   //[Nmu]
   Int_t           Muistumip[20][2];   //[Nmu]
   Int_t           Mujetfl_a[20];   //[Nmu]
   Int_t           Mujetid_a[20];   //[Nmu]
   Float_t         Mujetdr_a[20];   //[Nmu]
   Float_t         Mujetpt_a[20];   //[Nmu]
   Float_t         Mujetdr2_a[20];   //[Nmu]
   Float_t         Mujetpt2_a[20];   //[Nmu]
   Int_t           Muhjet_id[20];   //[Nmu]
   Int_t           Mujetfl_b[20];   //[Nmu]
   Int_t           Mujetid_b[20];   //[Nmu]
   Float_t         Mujetdr_b[20];   //[Nmu]
   Float_t         Mujetpt_b[20];   //[Nmu]
   Float_t         Mujetdr2_b[20];   //[Nmu]
   Float_t         Mujetpt2_b[20];   //[Nmu]
   Int_t           Mujetfl_c[20];   //[Nmu]
   Int_t           Mujetid_c[20];   //[Nmu]
   Float_t         Mujetdr_c[20];   //[Nmu]
   Float_t         Mujetpt_c[20];   //[Nmu]
   Float_t         Mujetdr2_c[20];   //[Nmu]
   Float_t         Mujetpt2_c[20];   //[Nmu]
   Int_t           Mujetfl_d[20];   //[Nmu]
   Int_t           Mujetid_d[20];   //[Nmu]
   Float_t         Mujetdr_d[20];   //[Nmu]
   Float_t         Mujetpt_d[20];   //[Nmu]
   Float_t         Mujetdr2_d[20];   //[Nmu]
   Float_t         Mujetpt2_d[20];   //[Nmu]
   Int_t           Bm_n;
   Int_t           Bm_idvc[100];   //[Bm_n]
   Int_t           Bm_idmubac[100];   //[Bm_n]
   Int_t           Bm_istop[100];   //[Bm_n]
   Int_t           Bm_error[100];   //[Bm_n]
   Int_t           Bm_readout[100];   //[Bm_n]
   Float_t         Bm_x[100][2][3];   //[Bm_n]
   Float_t         Bm_p[100][2][3];   //[Bm_n]
   Float_t         Bm_chi2[100][2];   //[Bm_n]
   Float_t         Bm_dca[100][2];   //[Bm_n]
   Float_t         Bm_gcov[100][2][15];   //[Bm_n]
   Float_t         Bm_fcov[100][2][10];   //[Bm_n]
   Float_t         Bm_resloc[100][2][4];   //[Bm_n]
   Float_t         Bm_prob[100][2];   //[Bm_n]
   Float_t         Bm_zpen[100][2];   //[Bm_n]
   Float_t         Bm_dlh[100];   //[Bm_n]
   Int_t           Bm_mubac_n;
   Int_t           Bm_mubac_hit[750];   //[Bm_mubac_n]
   Int_t           Bm_mubac_pad[750];   //[Bm_mubac_n]
   Int_t           Bm_mubac_unit[750];   //[Bm_mubac_n]
   Int_t           Bm_mubac_hp1[750];   //[Bm_mubac_n]
   Int_t           Bm_mubac_hp2[750];   //[Bm_mubac_n]
   Float_t         Bm_mubac_xyz[750][3];   //[Bm_mubac_n]
   Float_t         Bm_mubac_dxyz[750][3];   //[Bm_mubac_n]
   Float_t         Bm_mubac_cos[750][3];   //[Bm_mubac_n]
   Float_t         Bm_mubac_plf[750][5][3];   //[Bm_mubac_n]
   Float_t         Et_maxisl;
   Float_t         Ptmhietcell;
   Float_t         Pt_mimbal;
   Int_t           Hietcell_type;
   Int_t           Hietcell_nr;
   Float_t         Hietcell_px;
   Float_t         Hietcell_py;
   Float_t         Hietcell_pz;
   Float_t         Hietcell_et;
   Float_t         Hietcell_imbal;
   Float_t         Hietcell_e;
   Int_t           Kt_njet_a;
   Float_t         Kt_etjet_a[30];   //[KT_NJET_A]
   Float_t         Kt_etajet_a[30];   //[KT_NJET_A]
   Float_t         Kt_phijet_a[30];   //[KT_NJET_A]
   Float_t         Kt_masjet_a[30];   //[KT_NJET_A]
   Int_t           Kt_njet_b;
   Float_t         Kt_etjet_b[30];   //[KT_NJET_B]
   Float_t         Kt_etajet_b[30];   //[KT_NJET_B]
   Float_t         Kt_phijet_b[30];   //[KT_NJET_B]
   Float_t         Kt_masjet_b[30];   //[KT_NJET_B]
   Float_t         Kt_bst_b[4];
   Int_t           Kt_njet_c;
   Float_t         Kt_etjet_c[30];   //[KT_NJET_C]
   Float_t         Kt_etajet_c[30];   //[KT_NJET_C]
   Float_t         Kt_phijet_c[30];   //[KT_NJET_C]
   Float_t         Kt_masjet_c[30];   //[KT_NJET_C]
   Float_t         Kt_bst_c[4];
   Int_t           Kt_njet_d;
   Float_t         Kt_etjet_d[30];   //[KT_NJET_D]
   Float_t         Kt_etajet_d[30];   //[KT_NJET_D]
   Float_t         Kt_phijet_d[30];   //[KT_NJET_D]
   Float_t         Kt_masjet_d[30];   //[KT_NJET_D]
   Float_t         Kt_bst_d[4];
   Int_t           Kt_njet_e;
   Float_t         Kt_etjet_e[30];   //[KT_NJET_E]
   Float_t         Kt_etajet_e[30];   //[KT_NJET_E]
   Float_t         Kt_phijet_e[30];   //[KT_NJET_E]
   Float_t         Kt_bst_e[4];
   Int_t           Kt_njet_f;
   Float_t         Kt_etjet_f[30];   //[KT_NJET_F]
   Float_t         Kt_etajet_f[30];   //[KT_NJET_F]
   Float_t         Kt_phijet_f[30];   //[KT_NJET_F]
   Float_t         Kt_bst_f[4];
   Int_t           Kt_njet_g;
   Float_t         Kt_etjet_g[30];   //[KT_NJET_G]
   Float_t         Kt_etajet_g[30];   //[KT_NJET_G]
   Float_t         Kt_phijet_g[30];   //[KT_NJET_G]
   Float_t         Kt_bst_g[4];
   Int_t           Kt_njet_h;
   Float_t         Kt_etjet_h[30];   //[KT_NJET_H]
   Float_t         Kt_etajet_h[30];   //[KT_NJET_H]
   Float_t         Kt_phijet_h[30];   //[KT_NJET_H]
   Float_t         Kt_bst_h[4];
   Int_t           Kt_njet_i;
   Float_t         Kt_etjet_i[30];   //[KT_NJET_I]
   Float_t         Kt_etajet_i[30];   //[KT_NJET_I]
   Float_t         Kt_phijet_i[30];   //[KT_NJET_I]
   Int_t           Kt_njet_j;
   Float_t         Kt_etjet_j[30];   //[KT_NJET_J]
   Float_t         Kt_etajet_j[30];   //[KT_NJET_J]
   Float_t         Kt_phijet_j[30];   //[KT_NJET_J]
   Int_t           Kt_njet_k;
   Float_t         Kt_etjet_k[30];   //[KT_NJET_K]
   Float_t         Kt_etajet_k[30];   //[KT_NJET_K]
   Float_t         Kt_phijet_k[30];   //[KT_NJET_K]
   Float_t         Kt_bst_k[4];
   Int_t           Kt_njet_l;
   Float_t         Kt_etjet_l[30];   //[KT_NJET_L]
   Float_t         Kt_etajet_l[30];   //[KT_NJET_L]
   Float_t         Kt_phijet_l[30];   //[KT_NJET_L]
   Float_t         Kt_bst_l[4];
   Int_t           Cone_njet;
   Float_t         Cone_etjet[20];   //[CONE_NJET]
   Float_t         Cone_etajet[20];   //[CONE_NJET]
   Float_t         Cone_phijet[20];   //[CONE_NJET]
   Float_t         Elumie;
   Float_t         Xlumie;
   Float_t         Ylumie;
   Float_t         Elumig;
   Float_t         Xlumig;
   Float_t         Ylumig;
   Float_t         E_pcal;
   Float_t         E_pcal_aero;
   Float_t         Raw_aero1;
   Float_t         Raw_aero2;
   Float_t         Raw_pcal;
   Float_t         I_lepton;
   Float_t         I_proton;
   Int_t           Sincand;
   Int_t           Sierror;
   Float_t         Siprob[4];   //[SiNcand]
   Float_t         Sipos[4][3];   //[SiNcand]
   Float_t         Sicalpos[4][3];   //[SiNcand]
   Float_t         Sicalene[4];   //[SiNcand]
   Float_t         Siein[4];   //[SiNcand]
   Float_t         Sienin[4];   //[SiNcand]
   Float_t         Siecorr[4][3];   //[SiNcand]
   Float_t         Sith[4];   //[SiNcand]
   Float_t         Siph[4];   //[SiNcand]
   Float_t         Sipt[4];   //[SiNcand]
   Int_t           Sixdet[4][3];   //[SiNcand]
   Int_t           Siydet[4][3];   //[SiNcand]
   Int_t           Sitrknr[4];   //[SiNcand]
   Int_t           Sinrsl[4];   //[SiNcand]
   Float_t         Sidca[4];   //[SiNcand]
   Float_t         Sitrkp[4];   //[SiNcand]
   Float_t         Sitrkth[4];   //[SiNcand]
   Float_t         Sitrkph[4];   //[SiNcand]
   Float_t         Sitrkq[4];   //[SiNcand]
   Float_t         Sitrkdme[4];   //[SiNcand]
   Float_t         Sitrkpos[4][3];   //[SiNcand]
   Int_t           Sisrtf[4];   //[SiNcand]
   Int_t           Sisrtquad[4];   //[SiNcand]
   Int_t           Sihesf[4];   //[SiNcand]
   Int_t           Sicorrcode[4];   //[SiNcand]
   Float_t         Sisrtpos[4][2];   //[SiNcand]
   Float_t         Sisrtene[4];   //[SiNcand]
   Float_t         Sihespos[4][2];   //[SiNcand]
   Float_t         Sihesene[4];   //[SiNcand]
   Float_t         Sihesr[4];   //[SiNcand]
   Float_t         Siprsene[4][3];   //[SiNcand]
   Float_t         Siccet[4];   //[SiNcand]
   Float_t         Siccempz[4];   //[SiNcand]
   Float_t         Sietamax[4];   //[SiNcand]
   Float_t         Sicehmom[4][4];   //[SiNcand]
   Float_t         Sizuhmom[4][4];   //[SiNcand]
   Float_t         Sicchmom[4][4];   //[SiNcand]
   Float_t         Sixel[4];   //[SiNcand]
   Float_t         Siyel[4];   //[SiNcand]
   Float_t         Siq2el[4];   //[SiNcand]
   Float_t         Sixda[4];   //[SiNcand]
   Float_t         Siyda[4];   //[SiNcand]
   Float_t         Siq2da[4];   //[SiNcand]
   Float_t         Sixda_cell[4];   //[SiNcand]
   Float_t         Siyda_cell[4];   //[SiNcand]
   Float_t         Siq2da_cell[4];   //[SiNcand]
   Float_t         Sixjb[4];   //[SiNcand]
   Float_t         Siyjb[4];   //[SiNcand]
   Float_t         Siq2jb[4];   //[SiNcand]
   Float_t         Sixjb_cell[4];   //[SiNcand]
   Float_t         Siyjb_cell[4];   //[SiNcand]
   Float_t         Siq2jb_cell[4];   //[SiNcand]
   Int_t           Sincell[4];   //[SiNcand]
   Int_t           Sicellptr[4];   //[SiNcand]
   Float_t         Six0[4];   //[SiNcand]
   Float_t         Sidmcorr[4];   //[SiNcand]
   Int_t           Sidmcorrcode[4];   //[SiNcand]
   Int_t           Siuvf_ncand;
   Int_t           Siuvf_charge[4];   //[siuvf_ncand]
   Int_t           Siuvf_result[4];   //[siuvf_ncand]
   Int_t           Siuvf_nmvd[4];   //[siuvf_ncand]
   Int_t           Siuvf_nmvdhit[4];   //[siuvf_ncand]
   Int_t           Siuvf_nctd[4];   //[siuvf_ncand]
   Int_t           Siuvf_nctdhit[4];   //[siuvf_ncand]
   Int_t           Nbpchn;
   Float_t         Bpmip[432];   //[nBPchn]
   Float_t         Bpxyz[432][3];   //[nBPchn]
   Float_t         Bptim[432];   //[nBPchn]
   Int_t           Tsu_halo;
   Int_t           Nv0lite;
   Float_t         Tsecvtx[80][3];   //[nv0lite]
   Float_t         Tsecvtx_chi[80];   //[nv0lite]
   Float_t         Tsecvtx_dca[80];   //[nv0lite]
   Float_t         Tsecvtx_collin2[80];   //[nv0lite]
   Float_t         Tsecvtx_collin3[80];   //[nv0lite]
   Float_t         Tsecvtx_dlen2[80];   //[nv0lite]
   Float_t         Tsecvtx_dlen3[80];   //[nv0lite]
   Int_t           Tq1[80];   //[nv0lite]
   Int_t           Tq2[80];   //[nv0lite]
   Int_t           Tt1_layinn[80];   //[nv0lite]
   Int_t           Tt1_layout[80];   //[nv0lite]
   Int_t           Tt2_layinn[80];   //[nv0lite]
   Int_t           Tt2_layout[80];   //[nv0lite]
   Int_t           Tt1_id[80];   //[nv0lite]
   Int_t           Tt2_id[80];   //[nv0lite]
   Int_t           Tstt1[80];   //[nv0lite]
   Int_t           Tstt2[80];   //[nv0lite]
   Float_t         Tmindca[80];   //[nv0lite]
   Int_t           Tt1_ndof[80];   //[nv0lite]
   Int_t           Tt2_ndof[80];   //[nv0lite]
   Float_t         Tp1[80][3];   //[nv0lite]
   Float_t         Tp2[80][3];   //[nv0lite]
   Float_t         Tpk[80][3];   //[nv0lite]
   Float_t         Tinvmass_lambda[80];   //[nv0lite]
   Float_t         Tinvmass_alambda[80];   //[nv0lite]
   Float_t         Tinvmass_k0[80];   //[nv0lite]
   Float_t         Tinvmass_ee[80];   //[nv0lite]
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
   Float_t         Phi_tr;
   Float_t         Zvtx_fcal;
   Int_t           Fcal_nrgoodcells;
   Float_t         Fcal_vzerr;
   Float_t         V_h_px_zu;
   Float_t         V_h_py_zu;
   Float_t         V_h_pz_zu;
   Float_t         V_h_e_zu;
   Float_t         Etamax_zu;
   Float_t         Etamax_zu4;
   Float_t         Fgap;
   Float_t         Bgap;
   Int_t           Nzufos;
   Int_t           Tufo[250][4];   //[Nzufos]
   Int_t           Zufo_bsp[250];   //[Nzufos]
   Float_t         Zufo[250][4];   //[Nzufos]
   Float_t         Cufo[250];   //[Nzufos]
   Float_t         Zufoecal[250];   //[Nzufos]
   Float_t         Zufoeemc[250];   //[Nzufos]
   Float_t         Zufo_fmax_bemc[250];   //[Nzufos]
   Float_t         Zufo_fmax_remc[250];   //[Nzufos]
   Float_t         Zufo_fmax_femc[250];   //[Nzufos]
   Float_t         Zufo_deltax[250];   //[Nzufos]
   Float_t         Zufo_deltay[250];   //[Nzufos]
   Float_t         Zufo_deltaz[250];   //[Nzufos]
   Int_t           Nisl;
   Int_t           Nrcisl[200];   //[nIsl]
   Int_t           Isltyp[200];   //[nIsl]
   Float_t         Eisl[200];   //[nIsl]
   Float_t         Xisl[200];   //[nIsl]
   Float_t         Yisl[200];   //[nIsl]
   Float_t         Zisl[200];   //[nIsl]
   Float_t         Risl[200];   //[nIsl]
   Int_t           Nt;
   Int_t           Vcthid[200];   //[nT]
   Int_t           Hlid[200];   //[nT]
   Int_t           Qtr[200];   //[nT]
   Int_t           Swmtr[200];   //[nT]
   Int_t           Qlttr[200];   //[nT]
   Int_t           Mtri[200];   //[nT]
   Int_t           Wtri[200][10];   //[nT]
   Float_t         Ptr[200];   //[nT]
   Float_t         Dptr[200];   //[nT]
   Float_t         Thtr[200];   //[nT]
   Float_t         Phtr[200];   //[nT]
   Float_t         Dist_istr[200];   //[nT]
   Int_t           Trk_ntracks;
   Int_t           Trk_type[1200];   //[trk_ntracks]
   Int_t           Ntrack_type[4];
   Int_t           Def_trk_type;
   Int_t           Trk_id[1200];   //[trk_ntracks]
//   Int_t           Trk_id2[1200];   //[trk_ntracks]
   Float_t         Trk_px[1200];   //[trk_ntracks]
   Float_t         Trk_py[1200];   //[trk_ntracks]
   Float_t         Trk_pz[1200];   //[trk_ntracks]
   Float_t         Trk_charge[1200];   //[trk_ntracks]
   Int_t           Trk_vtx[1200];   //[trk_ntracks]
   Int_t           Trk_prim_vtx[1200];   //[trk_ntracks]
   Int_t           Trk_sec_vtx[1200];   //[trk_ntracks]
   Int_t           Trk_vxid[1200];   //[trk_ntracks]
   Int_t           Trk_nzbyt[1200];   //[trk_ntracks]
   Int_t           Trk_naxial[1200];   //[trk_ntracks]
   Int_t           Trk_nstereo[1200];   //[trk_ntracks]
   Int_t           Trk_ndof[1200];   //[trk_ntracks]
   Int_t           Trk_layinner[1200];   //[trk_ntracks]
   Int_t           Trk_layouter[1200];   //[trk_ntracks]
   Float_t         Trk_dedxctd[1200];   //[trk_ntracks]
   Float_t         Trk_dedxctdcr[1200];   //[trk_ntracks]
   Int_t           Trk_dedxctderr[1200];   //[trk_ntracks]
   Int_t           Trk_dedxctdnh[1200];   //[trk_ntracks]
   Int_t           Trk_dedxctdsaturated[1200];   //[trk_ntracks]
   Float_t         Trk_chi2[1200];   //[trk_ntracks]
   Float_t         Trk_vchi2[1200];   //[trk_ntracks]
   Int_t           Trk_nbr[1200];   //[trk_ntracks]
   Int_t           Trk_nbz[1200];   //[trk_ntracks]
   Int_t           Trk_nwu[1200];   //[trk_ntracks]
   Int_t           Trk_nwv[1200];   //[trk_ntracks]
   Int_t           Trk_nstt[1200];   //[trk_ntracks]
   Float_t         Trk_dedxmvd[1200];   //[trk_ntracks]
   Float_t         Trk_helpar[1200][5];   //[trk_ntracks]
   Float_t         Trk_covmat[1200][15];   //[trk_ntracks]
   Float_t         Trk_helmom[1200];   //[trk_ntracks]
   Float_t         Trk_imppar[1200];   //[trk_ntracks]
   Float_t         Trk_imperr[1200];   //[trk_ntracks]
   Float_t         Trk_pca[1200][3];   //[trk_ntracks]
   Int_t           Trk_nvert;
   Int_t           Vtx_type[120];   //[trk_nvert]
   Int_t           Vtx_prim[120];   //[trk_nvert]
   Int_t           Vtx_id[120];   //[trk_nvert]
   Float_t         Vtx_x[120];   //[trk_nvert]
   Float_t         Vtx_y[120];   //[trk_nvert]
   Float_t         Vtx_z[120];   //[trk_nvert]
   Float_t         Vtx_chi2[120];   //[trk_nvert]
   Int_t           Vtx_ndf[120];   //[trk_nvert]
   Int_t           Sltctd;
   Int_t           Sltctd_tgstkf;
   Int_t           Sltctd_tgstkm;
   Int_t           Sltctd_tgstkr;
   Float_t         Sltctd_tgsvxp[2];
   Float_t         Sltctd_tgsvxe;
   Int_t           Sltctd_tgsvxm;
   Int_t           Sltctd_tgstkd;
   Int_t           Sltctd_ntrk;
   Float_t         Sltctd_pt[64];   //[sltctd_nTrk]
   Int_t           Sltctd_ch[64];   //[sltctd_nTrk]
   Float_t         Sltctd_vx[64];   //[sltctd_nTrk]
   Float_t         Sltctd_ns[64];   //[sltctd_nTrk]
   Float_t         Sltctd_ex[64];   //[sltctd_nTrk]
   Float_t         Sltctd_ey[64];   //[sltctd_nTrk]
   Float_t         Sltctd_ez[64];   //[sltctd_nTrk]
   Float_t         Sltctd_phi[64];   //[sltctd_nTrk]
   Float_t         Sltctd_the[64];   //[sltctd_nTrk]
   Int_t           Ngttrk1;
   Float_t         Gttrk1_r[1024];   //[nGTTRK1]
   Float_t         Gttrk1_pt[1024];   //[nGTTRK1]
   Float_t         Gttrk1_theta[1024];   //[nGTTRK1]
   Float_t         Gttrk1_phi[1024];   //[nGTTRK1]
   Float_t         Gttrk1_zvert[1024];   //[nGTTRK1]
   Float_t         Gttrk1_zgrad[1024];   //[nGTTRK1]
   Int_t           Gttrk1_naxseg[1024];   //[nGTTRK1]
   Int_t           Gttrk1_nstseg[1024];   //[nGTTRK1]
   Int_t           Gttrk1_nrmvd[1024];   //[nGTTRK1]
   Int_t           Gttrk1_nzmvd[1024];   //[nGTTRK1]
   Int_t           Gttrk1_isl[1024];   //[nGTTRK1]
   Int_t           Gttrk1_osl[1024];   //[nGTTRK1]
   Float_t         Gttrk1_chiax[1024];   //[nGTTRK1]
   Float_t         Gttrk1_chist[1024];   //[nGTTRK1]
   Int_t           Gttrk1_vertid[1024];   //[nGTTRK1]
   Int_t           Ngtvtx;
   Float_t         Gtvtx_pos[10][3];   //[nGTVTX]
   Float_t         Gtvtx_width[10][3];   //[nGTVTX]
   Int_t           Gtvtx_ntrax[10];   //[nGTVTX]
   Int_t           Gtvtx_flag1[10];   //[nGTVTX]
   Int_t           Gtvtx_flag2[10];   //[nGTVTX]
   Int_t           Gtbevt_nvert;
   Float_t         Gtbevt_prvert[3];
   Float_t         Gtbevt_pvertwdth[3];
   Int_t           Gtbevt_ntrax;
   Int_t           Gtbevt_naxtrax;
   Int_t           Gtbevt_nvtxtrax;
   Int_t           Gtbevt_nwts;
   Int_t           Gtbevt_nvtxwts;
   Int_t           Gtbevt_nctdtrax;
   Int_t           Gtbevt_flag1;
   Int_t           Gtbevt_flag2;
   Int_t           Gtbevt_flag3;
   Int_t           Gtbevt_flag4;
//    Int_t           Vcatcal_n;
//    Int_t           Vcatcal_q[450];   //[vcatcal_n]
//    Float_t         Vcatcal_x[450][3];   //[vcatcal_n]
//    Float_t         Vcatcal_p[450][3];   //[vcatcal_n]
   Int_t           Nchvtx;
   Float_t         Chvtxpar[1000][3];   //[nchvtx]
   Float_t         Chvtxcov[1000][6];   //[nchvtx]
   Float_t         Chchi2[1000];   //[nchvtx]
   Int_t           Nchds1;
   Float_t         Ds1ms[50];   //[nchds1]
   Float_t         Ds1pm[50];   //[nchds1]
   Float_t         Ds1th[50];   //[nchds1]
   Float_t         Ds1ph[50];   //[nchds1]
   Float_t         D1d0ms[50];   //[nchds1]
   Float_t         D1d0pm[50];   //[nchds1]
   Float_t         D1d0th[50];   //[nchds1]
   Float_t         D1d0ph[50];   //[nchds1]
   Float_t         D1kapm[50];   //[nchds1]
   Float_t         D1kath[50];   //[nchds1]
   Float_t         D1kaph[50];   //[nchds1]
   Float_t         D1pipm[50];   //[nchds1]
   Float_t         D1pith[50];   //[nchds1]
   Float_t         D1piph[50];   //[nchds1]
   Float_t         D1pspm[50];   //[nchds1]
   Float_t         D1psth[50];   //[nchds1]
   Float_t         D1psph[50];   //[nchds1]
   Int_t           Ds1trk[50];   //[nchds1]
   Int_t           Tds1ka[50];   //[nchds1]
   Int_t           Tds1pi[50];   //[nchds1]
   Int_t           Tds1ps[50];   //[nchds1]
   Int_t           Id1d0vtx[50];   //[nchds1]
   Int_t           Ids1rprm[50];   //[nchds1]
   Int_t           Nchds2;
   Float_t         Ds2ms[150];   //[nchds2]
   Float_t         Ds2pm[150];   //[nchds2]
   Float_t         Ds2th[150];   //[nchds2]
   Float_t         Ds2ph[150];   //[nchds2]
   Float_t         D2d0ms[150];   //[nchds2]
   Float_t         D2d0pm[150];   //[nchds2]
   Float_t         D2d0th[150];   //[nchds2]
   Float_t         D2d0ph[150];   //[nchds2]
   Float_t         D2kapm[150];   //[nchds2]
   Float_t         D2kath[150];   //[nchds2]
   Float_t         D2kaph[150];   //[nchds2]
   Float_t         D2p1pm[150];   //[nchds2]
   Float_t         D2p1th[150];   //[nchds2]
   Float_t         D2p1ph[150];   //[nchds2]
   Float_t         D2p2pm[150];   //[nchds2]
   Float_t         D2p2th[150];   //[nchds2]
   Float_t         D2p2ph[150];   //[nchds2]
   Float_t         D2p3pm[150];   //[nchds2]
   Float_t         D2p3th[150];   //[nchds2]
   Float_t         D2p3ph[150];   //[nchds2]
   Float_t         D2pspm[150];   //[nchds2]
   Float_t         D2psth[150];   //[nchds2]
   Float_t         D2psph[150];   //[nchds2]
   Int_t           Ds2trk[150];   //[nchds2]
   Int_t           Tds2ka[150];   //[nchds2]
   Int_t           Tds2p1[150];   //[nchds2]
   Int_t           Tds2p2[150];   //[nchds2]
   Int_t           Tds2p3[150];   //[nchds2]
   Int_t           Tds2ps[150];   //[nchds2]
   Int_t           Id2d0vtx[150];   //[nchds2]
   Int_t           Ids2rprm[150];   //[nchds2]
   Int_t           Ds2rin[150];   //[nchds2]
   Float_t         D2maxdca[150];   //[nchds2]
   Int_t           Nchd0;
   Float_t         D0ms[50];   //[nchd0]
   Float_t         D0pm[50];   //[nchd0]
   Float_t         D0th[50];   //[nchd0]
   Float_t         D0ph[50];   //[nchd0]
   Float_t         D0kapm[50];   //[nchd0]
   Float_t         D0kath[50];   //[nchd0]
   Float_t         D0kaph[50];   //[nchd0]
   Float_t         D0pipm[50];   //[nchd0]
   Float_t         D0pith[50];   //[nchd0]
   Float_t         D0piph[50];   //[nchd0]
   Int_t           D0trk[50];   //[nchd0]
   Int_t           Td0ka[50];   //[nchd0]
   Int_t           Td0pi[50];   //[nchd0]
   Int_t           Id0vtx[50];   //[nchd0]
   Int_t           Id0rprm[50];   //[nchd0]
   Int_t           Nchdch;
   Float_t         Dchms[200];   //[nchdch]
   Float_t         Dchpm[200];   //[nchdch]
   Float_t         Dchth[200];   //[nchdch]
   Float_t         Dchph[200];   //[nchdch]
   Float_t         Dckapm[200];   //[nchdch]
   Float_t         Dckath[200];   //[nchdch]
   Float_t         Dckaph[200];   //[nchdch]
   Float_t         Dcp1pm[200];   //[nchdch]
   Float_t         Dcp1th[200];   //[nchdch]
   Float_t         Dcp1ph[200];   //[nchdch]
   Float_t         Dcp2pm[200];   //[nchdch]
   Float_t         Dcp2th[200];   //[nchdch]
   Float_t         Dcp2ph[200];   //[nchdch]
   Int_t           Dchtrk[200];   //[nchdch]
   Int_t           Tdchka[200];   //[nchdch]
   Int_t           Tdchp1[200];   //[nchdch]
   Int_t           Tdchp2[200];   //[nchdch]
   Int_t           Idchvtx[200];   //[nchdch]
   Int_t           Idchrprm[200];   //[nchdch]
   Int_t           Nchdla;
   Float_t         Dlams[100];   //[nchdla]
   Float_t         Dlapm[100];   //[nchdla]
   Float_t         Dlath[100];   //[nchdla]
   Float_t         Dlaph[100];   //[nchdla]
   Float_t         Dlkapm[100];   //[nchdla]
   Float_t         Dlkath[100];   //[nchdla]
   Float_t         Dlkaph[100];   //[nchdla]
   Float_t         Dlprpm[100];   //[nchdla]
   Float_t         Dlprth[100];   //[nchdla]
   Float_t         Dlprph[100];   //[nchdla]
   Float_t         Dlpipm[100];   //[nchdla]
   Float_t         Dlpith[100];   //[nchdla]
   Float_t         Dlpiph[100];   //[nchdla]
   Int_t           Dlatrk[100];   //[nchdla]
   Int_t           Tdlaka[100];   //[nchdla]
   Int_t           Tdlapr[100];   //[nchdla]
   Int_t           Tdlapi[100];   //[nchdla]
   Int_t           Idlavtx[100];   //[nchdla]
   Int_t           Idlarprm[100];   //[nchdla]
   Int_t           Nchdss;
   Float_t         Dssms[50];   //[nchdss]
   Float_t         Dsspm[50];   //[nchdss]
   Float_t         Dssth[50];   //[nchdss]
   Float_t         Dssph[50];   //[nchdss]
   Float_t         Dsphms[50];   //[nchdss]
   Float_t         Dsphpm[50];   //[nchdss]
   Float_t         Dsphth[50];   //[nchdss]
   Float_t         Dsphph[50];   //[nchdss]
   Float_t         Dsk1pm[50];   //[nchdss]
   Float_t         Dsk1th[50];   //[nchdss]
   Float_t         Dsk1ph[50];   //[nchdss]
   Float_t         Dsk2pm[50];   //[nchdss]
   Float_t         Dsk2th[50];   //[nchdss]
   Float_t         Dsk2ph[50];   //[nchdss]
   Float_t         Dspipm[50];   //[nchdss]
   Float_t         Dspith[50];   //[nchdss]
   Float_t         Dspiph[50];   //[nchdss]
   Int_t           Dsstrk[50];   //[nchdss]
   Int_t           Tdssk1[50];   //[nchdss]
   Int_t           Tdssk2[50];   //[nchdss]
   Int_t           Tdsspi[50];   //[nchdss]
   Int_t           Idssvtx[50];   //[nchdss]
   Int_t           Idssrprm[50];   //[nchdss]
   Int_t           Gt_nvt;
   Int_t           Gt_ntrk;
   Int_t           Gt_naxtr;
   Int_t           Gt_nvtx;
   Int_t           Gt_nctdt;
   Int_t           Gt_f1;
   Int_t           Gt_f2;
   Int_t           Gt_f3;
   Int_t           Gt_f4;
   Float_t         Gt_prv[3];
   Float_t         Gt_prvw[3];
   Float_t         Gt_pt[2];
   Float_t         Gt_sptvtx;
   Int_t           Gt_ctd_size;
   Float_t         Gt_bckg;
   Float_t         Gt_mass;
   Float_t         Gt_ptd0;
   Int_t           Gt_nvt_mvd;
   Int_t           Gt_ntrk_mvd;
   Int_t           Gt_nvtx_mvd;
   Float_t         Gt_prv_mvd[3];
   Float_t         Gt_prvw_mvd[3];
   Float_t         Gt_sptvtx_mvd;
   Int_t           Bspt_prog;
   Float_t         Bspt_x;
   Float_t         Bspt_y;
   Float_t         Bspt_z;
   Float_t         Bspt_xer;
   Float_t         Bspt_yer;
   Float_t         Bspt_zer;
   Float_t         Bspt_dxdz;
   Float_t         Bspt_dydz;
   Float_t         Bspt_dxdzer;
   Float_t         Bspt_dydzer;
   Float_t         Bspt_xoff;
   Float_t         Bspt_yoff;
   Float_t         Bspt_xoffer;
   Float_t         Bspt_yoffer;
   Int_t           T6rec_hotx;
   Int_t           T6rec_hoty;
   Float_t         T6rec_ene;
   Float_t         T6rec_x;
   Float_t         T6rec_y;
   Int_t           Nr_secvtx;
   Int_t           Vtxsec_type[500];   //[nr_secvtx]
   Int_t           Vtxsec_ref[500];   //[nr_secvtx]
   Float_t         Vtxsec_x[500];   //[nr_secvtx]
   Float_t         Vtxsec_y[500];   //[nr_secvtx]
   Float_t         Vtxsec_z[500];   //[nr_secvtx]
   Float_t         Vtxsec_mass[500];   //[nr_secvtx]
   Float_t         Vtxsec_chi2[500];   //[nr_secvtx]
   Float_t         Vtxsec_ndf[500];   //[nr_secvtx]
   Int_t           Vtxsec_multi[500];   //[nr_secvtx]
   Float_t         Vtxsec_cov[500][6];   //[nr_secvtx]
   Int_t           Vtxsec_zttid[500][15];   //[nr_secvtx]
   Float_t         Vtxsec_weight[500][15];   //[nr_secvtx]
   Int_t           Vtxsec_redprm[500];   //[nr_secvtx]
   Int_t           Nr_redprim;
   Int_t           Vtxredprim_type[500];   //[nr_redprim]
   Int_t           Vtxredprim_secvtx[500][10];   //[nr_redprim]
   Float_t         Vtxredprim_x[500];   //[nr_redprim]
   Float_t         Vtxredprim_y[500];   //[nr_redprim]
   Float_t         Vtxredprim_z[500];   //[nr_redprim]
   Float_t         Vtxredprim_chi2[500];   //[nr_redprim]
   Float_t         Vtxredprim_cov[500][6];   //[nr_redprim]
   Float_t         Vtxredprim_ndf[500];   //[nr_redprim]
   Float_t         Pseudo_thrust;
   Float_t         Thrust_axis_phi;
   Float_t         Thrust_axis_theta1;
   Float_t         Thrust_axis_theta2;
   Float_t         Dis_pseudo_thrust_breit;
   Float_t         Thrust_axis_phi_breit;
   Float_t         Thrust_axis_theta1_breit;
   Float_t         Thrust_axis_theta2_breit;
   Float_t         Thrust_axis_phi1_lab;
   Float_t         Thrust_axis_phi2_lab;
   Float_t         Thrust_axis_theta1_lab;
   Float_t         Thrust_axis_theta2_lab;
   Float_t         Q2prime_a;
   Float_t         Isotropy_a;
   Float_t         Part_band_a;
   Float_t         Sphericity_a;
   Float_t         Q2prime_b;
   Float_t         Isotropy_b;
   Float_t         Part_band_b;
   Float_t         Sphericity_b;
   Int_t           Trkmsa_ntracks;
   Int_t           Trkmsa_id[600];   //[trkmsa_ntracks]
   Float_t         Trkmsa_px[600];   //[trkmsa_ntracks]
   Float_t         Trkmsa_py[600];   //[trkmsa_ntracks]
   Float_t         Trkmsa_pz[600];   //[trkmsa_ntracks]
   Float_t         Trkmsa_charge[600];   //[trkmsa_ntracks]
   Int_t           Trkmsa_ndof[600];   //[trkmsa_ntracks]
   Float_t         Trkmsa_chi2[600];   //[trkmsa_ntracks]
   Int_t           Trkmsa_nbr[600];   //[trkmsa_ntracks]
   Int_t           Trkmsa_nbz[600];   //[trkmsa_ntracks]
   Int_t           Trkmsa_nwu[600];   //[trkmsa_ntracks]
   Int_t           Trkmsa_nwv[600];   //[trkmsa_ntracks]
   Float_t         Trkmsa_dedxmvd[600];   //[trkmsa_ntracks]
   Float_t         Trkmsa_helpar[600][5];   //[trkmsa_ntracks]
   Float_t         Trkmsa_covmat[600][15];   //[trkmsa_ntracks]
   Float_t         Trkmsa_helmom[600];   //[trkmsa_ntracks]
   Float_t         Trkmsa_imppar[600];   //[trkmsa_ntracks]
   Float_t         Trkmsa_imperr[600];   //[trkmsa_ntracks]
   Float_t         Trkmsa_pca[600][3];   //[trkmsa_ntracks]
   Int_t           Uvfall_ncand;
   Int_t           Uvfall_charge[6];   //[uvfall_ncand]
   Int_t           Uvfall_siraem[6];   //[uvfall_ncand]
   Int_t           Uvfall_candid[6];   //[uvfall_ncand]
   Int_t           Uvfall_result[6];   //[uvfall_ncand]
   Int_t           Uvfall_nmvd[6];   //[uvfall_ncand]
   Int_t           Uvfall_nmvdhit[6];   //[uvfall_ncand]
   Int_t           Uvfall_nctd[6];   //[uvfall_ncand]
   Int_t           Uvfall_nctdhit[6];   //[uvfall_ncand]
   Int_t           Tlt_spp15;
   Int_t           Tlt_spp16;
   Int_t           Tlt_spp11;
   Int_t           Tlt_spp15lq2;
   Int_t           Tlt_spp16lq2;
   Float_t         Sltcal_etotemc;
   Float_t         Sltcal_etothac;
   Float_t         Sltcal_etotremc;
   Float_t         Sltcal_etotbemc;
   Float_t         Sltcal_etotfemc;
   Float_t         Sltcal_etotfcal;
   Int_t           Sltelc_fl;
   Float_t         Sltelc_emcthe;
   Float_t         Sltelc_emcphi;
   Float_t         Sltelc_emcene;
   Float_t         Sltelc_hacene;
   Int_t           Gttenv_ctdsize;
   Int_t           Tlev_evtype;
   Float_t         Tlev_eminpz;

   // List of branches
   TBranch        *b_RUNNR;   //!
   TBranch        *b_EVENTNR;   //!
   TBranch        *b_WEIGHT;   //!
   TBranch        *b_EVTAKE;   //!
   TBranch        *b_EVTAKE_iwant;   //!
   TBranch        *b_MVDTAKE;   //!
   TBranch        *b_STTTAKE;   //!
   TBranch        *b_TPOLTAKE;   //!
   TBranch        *b_LPOLTAKE;   //!
   TBranch        *b_FMUTAKE;   //!
   TBranch        *b_MBTAKE;   //!
   TBranch        *b_TAG6TAKE;   //!
   TBranch        *b_FLTW;   //!
   TBranch        *b_FLTPSW;   //!
   TBranch        *b_FLTfl;   //!
   TBranch        *b_GSLT_global;   //!
   TBranch        *b_SLTW;   //!
   TBranch        *b_SLTUPW;   //!
   TBranch        *b_TLTW;   //!
   TBranch        *b_DSTW;   //!
   TBranch        *b_FLTPSFCW;   //!
   TBranch        *b_flt_cal_e;   //!
   TBranch        *b_flt_cal_emc;   //!
   TBranch        *b_flt_cal_et_fbp;   //!
   TBranch        *b_flt_cal_fbp_ovf;   //!
   TBranch        *b_flt_bcal_emc;   //!
   TBranch        *b_flt_rcal_emc;   //!
   TBranch        *b_flt_remcth;   //!
   TBranch        *b_flt_fcal_tote;   //!
   TBranch        *b_flt_trk_cl;   //!
   TBranch        *b_flt_trk_mlt;   //!
   TBranch        *b_flt_lumi_ee;   //!
   TBranch        *b_flt_lumi_eg;   //!
   TBranch        *b_flt_et;   //!
   TBranch        *b_flt_emiss;   //!
   TBranch        *b_flt_fcal_ebp;   //!
   TBranch        *b_flt_fcal_oebp;   //!
   TBranch        *b_flt_risoe;   //!
   TBranch        *b_flt_risoe4;   //!
   TBranch        *b_flt_risoe5;   //!
   TBranch        *b_flt_risoe6;   //!
   TBranch        *b_flt_risoe7;   //!
   TBranch        *b_flt_bisoe;   //!
   TBranch        *b_flt_fisoe;   //!
   TBranch        *b_flt_gtrk;   //!
   TBranch        *b_flt_trk_vmult;   //!
   TBranch        *b_slt_et;   //!
   TBranch        *b_slt_et_1ir;   //!
   TBranch        *b_slt_et_2ir;   //!
   TBranch        *b_slt_emnpz;   //!
   TBranch        *b_slt_pzove;   //!
   TBranch        *b_slt_vtx_z;   //!
   TBranch        *b_slt_slf;   //!
   TBranch        *b_slt_slu;   //!
   TBranch        *b_slt_pt12;   //!
   TBranch        *b_slt_etotfcal;   //!
   TBranch        *b_slt_etotbcal;   //!
   TBranch        *b_slt_etotrcal;   //!
   TBranch        *b_slt_etotemc;   //!
   TBranch        *b_slt_etransemc;   //!
   TBranch        *b_slt_pxemc;   //!
   TBranch        *b_slt_pyemc;   //!
   TBranch        *b_slt_pzemc;   //!
   TBranch        *b_slt_etothac;   //!
   TBranch        *b_slt_etranshac;   //!
   TBranch        *b_slt_pxhac;   //!
   TBranch        *b_slt_pyhac;   //!
   TBranch        *b_slt_pzhac;   //!
   TBranch        *b_slt_etot;   //!
   TBranch        *b_slt_etmis;   //!
   TBranch        *b_slt_pxbp;   //!
   TBranch        *b_slt_pybp;   //!
   TBranch        *b_slt_etmbp;   //!
   TBranch        *b_slt_ebp;   //!
   TBranch        *b_slt_eremc;   //!
   TBranch        *b_slt_erhac;   //!
   TBranch        *b_slt_ebemc;   //!
   TBranch        *b_slt_ebhac;   //!
   TBranch        *b_slt_efemc;   //!
   TBranch        *b_slt_efhac;   //!
   TBranch        *b_slt_etfbp;   //!
   TBranch        *b_slt_btime;   //!
   TBranch        *b_slt_gtime;   //!
   TBranch        *b_slt_gnpmt;   //!
   TBranch        *b_slt_bnpmt;   //!
   TBranch        *b_slt_noclus;   //!
   TBranch        *b_slt_eemcclus;   //!
   TBranch        *b_oTRKclass;   //!
   TBranch        *b_oTRKmult;   //!
   TBranch        *b_oTRKvmult;   //!
   TBranch        *b_BAC_etot;   //!
   TBranch        *b_BAC_etot_o2r;   //!
   TBranch        *b_BAC_npad;   //!
   TBranch        *b_BAC_npad_o2r;   //!
   TBranch        *b_BAC_et;   //!
   TBranch        *b_BAC_px;   //!
   TBranch        *b_BAC_py;   //!
   TBranch        *b_NBACMU;   //!
   TBranch        *b_Mubac_xyz;   //!
   TBranch        *b_Mubac_dxyz;   //!
   TBranch        *b_Mubac_cos;   //!
   TBranch        *b_Mubac_dcos;   //!
   TBranch        *b_Mubac_eloss;   //!
   TBranch        *b_Mubac_deloss;   //!
   TBranch        *b_Mubac_unit;   //!
   TBranch        *b_Mubac_dim;   //!
   TBranch        *b_Mubac_quality;   //!
   TBranch        *b_Ahit;   //!
   TBranch        *b_Pad;   //!
   TBranch        *b_nBadPMT;   //!
   TBranch        *b_Badcell;   //!
   TBranch        *b_Badside;   //!
   TBranch        *b_Ebefore;   //!
   TBranch        *b_Eafter;   //!
   TBranch        *b_BITWORD;   //!
   TBranch        *b_calib_idcalscheme;   //!
   TBranch        *b_ncaltru;   //!
   TBranch        *b_Caltru_cellnr;   //!
   TBranch        *b_Caltru_e;   //!
   TBranch        *b_Caltru_imbal;   //!
   TBranch        *b_Caltru_t;   //!
   TBranch        *b_Caltru_id;   //!
   TBranch        *b_Caltru_pos;   //!
   TBranch        *b_Caltru_eoriginal;   //!
   TBranch        *b_CAL_px;   //!
   TBranch        *b_CAL_py;   //!
   TBranch        *b_CAL_pz;   //!
   TBranch        *b_CAL_E;   //!
   TBranch        *b_CAL_Et;   //!
   TBranch        *b_CAL_Empz;   //!
   TBranch        *b_CAL_Pt;   //!
   TBranch        *b_CAL_phi;   //!
   TBranch        *b_REmc;   //!
   TBranch        *b_BEmc;   //!
   TBranch        *b_FEmc;   //!
   TBranch        *b_RHac;   //!
   TBranch        *b_BHac;   //!
   TBranch        *b_FHac;   //!
   TBranch        *b_BHac2;   //!
   TBranch        *b_FHac2;   //!
   TBranch        *b_NFEMC;   //!
   TBranch        *b_NFHAC1;   //!
   TBranch        *b_NFHAC2;   //!
   TBranch        *b_NBEMC;   //!
   TBranch        *b_NBHAC1;   //!
   TBranch        *b_NBHAC2;   //!
   TBranch        *b_NREMC;   //!
   TBranch        *b_NRHAC;   //!
   TBranch        *b_CAL_Tf;   //!
   TBranch        *b_CAL_Tb;   //!
   TBranch        *b_CAL_Tr;   //!
   TBranch        *b_CAL_Tg;   //!
   TBranch        *b_CAL_Tu;   //!
   TBranch        *b_CAL_Td;   //!
   TBranch        *b_CAL_Tf_E;   //!
   TBranch        *b_CAL_Tb_E;   //!
   TBranch        *b_CAL_Tr_E;   //!
   TBranch        *b_CAL_Tg_E;   //!
   TBranch        *b_CAL_Tu_E;   //!
   TBranch        *b_CAL_Td_E;   //!
   TBranch        *b_CAL_Tf_n;   //!
   TBranch        *b_CAL_Tb_n;   //!
   TBranch        *b_CAL_Tr_n;   //!
   TBranch        *b_CAL_Tg_n;   //!
   TBranch        *b_CAL_Tu_n;   //!
   TBranch        *b_CAL_Td_n;   //!
   TBranch        *b_Etamax_ce;   //!
   TBranch        *b_Etamax_ce4;   //!
   TBranch        *b_CAL_Et10;   //!
   TBranch        *b_Mtrknoe_pi;   //!
   TBranch        *b_Mtrknoe_K;   //!
   TBranch        *b_E_HK;   //!
   TBranch        *b_UnmEn_pi;   //!
   TBranch        *b_UnmEn_k;   //!
   TBranch        *b_SparkF;   //!
   TBranch        *b_PEX1IR;   //!
   TBranch        *b_ET1IR;   //!
   TBranch        *b_ETEX1IR;   //!
   TBranch        *b_PEX2IR;   //!
   TBranch        *b_ET2IR;   //!
   TBranch        *b_ETEX2IR;   //!
   TBranch        *b_F1RHAC;   //!
   TBranch        *b_F2RHAC;   //!
   TBranch        *b_PERCIR;   //!
   TBranch        *b_ETRCIR;   //!
   TBranch        *b_cc_Had_0;   //!
   TBranch        *b_cc_Gamma_0;   //!
   TBranch        *b_cc_CeHMom;   //!
   TBranch        *b_cc_ZuHMom;   //!
   TBranch        *b_cc_CCHMom;   //!
   TBranch        *b_CC_Pt;   //!
   TBranch        *b_CC_Et;   //!
   TBranch        *b_CC_EmPz;   //!
   TBranch        *b_CC_gamma;   //!
   TBranch        *b_CC_yjb;   //!
   TBranch        *b_CC_Q2jb;   //!
   TBranch        *b_CC_xjb;   //!
   TBranch        *b_cc_ETAMAX;   //!
   TBranch        *b_cc_EEMC;   //!
   TBranch        *b_cc_EHAC1;   //!
   TBranch        *b_cc_EHAC2;   //!
   TBranch        *b_cc_EMAXCO;   //!
   TBranch        *b_cc_NEMC;   //!
   TBranch        *b_cc_NHAC1;   //!
   TBranch        *b_cc_NHAC2;   //!
   TBranch        *b_cc_FClus_dt;   //!
   TBranch        *b_cc_FClus_dm;   //!
   TBranch        *b_cc_FClus_Et;   //!
   TBranch        *b_cc_FClus_E;   //!
   TBranch        *b_cc_RClus_asoE;   //!
   TBranch        *b_cc_VapVpCELL;   //!
   TBranch        *b_cc_VapVpZU;   //!
   TBranch        *b_cc_VapVpCAC;   //!
   TBranch        *b_nCell;   //!
   TBranch        *b_Celllist;   //!
   TBranch        *b_EmNcand;   //!
   TBranch        *b_EmError;   //!
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
   TBranch        *b_Emfemc;   //!
   TBranch        *b_Emcalprob;   //!
   TBranch        *b_Eminctd;   //!
   TBranch        *b_Emnneartrk;   //!
   TBranch        *b_Emetneartrk;   //!
   TBranch        *b_Emtrkmatchi2;   //!
   TBranch        *b_Emfmaxbemc;   //!
   TBranch        *b_Emfmaxremc;   //!
   TBranch        *b_Emfmaxfemc;   //!
   TBranch        *b_Emdeltaz;   //!
   TBranch        *b_Emdeltax;   //!
   TBranch        *b_Emdeltay;   //!
   TBranch        *b_Emx0;   //!
   TBranch        *b_Emdmcorr;   //!
   TBranch        *b_Emdmcorrcode;   //!
   TBranch        *b_E5Ncand;   //!
   TBranch        *b_E5Error;   //!
   TBranch        *b_E5prob;   //!
   TBranch        *b_E5pos;   //!
   TBranch        *b_E5calpos;   //!
   TBranch        *b_E5calene;   //!
   TBranch        *b_E5ein;   //!
   TBranch        *b_E5enin;   //!
   TBranch        *b_E5ecorr;   //!
   TBranch        *b_E5th;   //!
   TBranch        *b_E5ph;   //!
   TBranch        *b_E5pt;   //!
   TBranch        *b_E5xdet;   //!
   TBranch        *b_E5ydet;   //!
   TBranch        *b_E5trknr;   //!
   TBranch        *b_E5nrsl;   //!
   TBranch        *b_E5dca;   //!
   TBranch        *b_E5dcabeam;   //!
   TBranch        *b_E5trkp;   //!
   TBranch        *b_E5trkth;   //!
   TBranch        *b_E5trkph;   //!
   TBranch        *b_E5trkq;   //!
   TBranch        *b_E5trkdme;   //!
   TBranch        *b_E5trkdce;   //!
   TBranch        *b_E5trkpos;   //!
   TBranch        *b_E5srtf;   //!
   TBranch        *b_E5srtquad;   //!
   TBranch        *b_E5hesf;   //!
   TBranch        *b_E5corrcode;   //!
   TBranch        *b_E5srtpos;   //!
   TBranch        *b_E5srtene;   //!
   TBranch        *b_E5hespos;   //!
   TBranch        *b_E5hesene;   //!
   TBranch        *b_E5hesr;   //!
   TBranch        *b_E5prsene;   //!
   TBranch        *b_E5ccet;   //!
   TBranch        *b_E5ccempz;   //!
   TBranch        *b_E5etamax;   //!
   TBranch        *b_E5cehmom;   //!
   TBranch        *b_E5zuhmom;   //!
   TBranch        *b_E5cchmom;   //!
   TBranch        *b_E5xel;   //!
   TBranch        *b_E5yel;   //!
   TBranch        *b_E5q2el;   //!
   TBranch        *b_E5xda;   //!
   TBranch        *b_E5yda;   //!
   TBranch        *b_E5q2da;   //!
   TBranch        *b_E5xda_cell;   //!
   TBranch        *b_E5yda_cell;   //!
   TBranch        *b_E5q2da_cell;   //!
   TBranch        *b_E5xjb;   //!
   TBranch        *b_E5yjb;   //!
   TBranch        *b_E5q2jb;   //!
   TBranch        *b_E5xjb_cell;   //!
   TBranch        *b_E5yjb_cell;   //!
   TBranch        *b_E5q2jb_cell;   //!
   TBranch        *b_E5femc;   //!
   TBranch        *b_E5calprob;   //!
   TBranch        *b_E5inctd;   //!
   TBranch        *b_E5nneartrk;   //!
   TBranch        *b_E5etneartrk;   //!
   TBranch        *b_E5trkmatchi2;   //!
   TBranch        *b_E5fmaxbemc;   //!
   TBranch        *b_E5fmaxremc;   //!
   TBranch        *b_E5fmaxfemc;   //!
   TBranch        *b_E5deltaz;   //!
   TBranch        *b_E5deltax;   //!
   TBranch        *b_E5deltay;   //!
   TBranch        *b_fc_etot;   //!
   TBranch        *b_fc_pt;   //!
   TBranch        *b_fc_empz;   //!
   TBranch        *b_fc_proctime;   //!
   TBranch        *b_fcb_elec;   //!
   TBranch        *b_fcb_ptmis;   //!
   TBranch        *b_fcb_beamg;   //!
   TBranch        *b_fcb_empzLo;   //!
   TBranch        *b_fcb_empzHi;   //!
   TBranch        *b_fcb_etcl;   //!
   TBranch        *b_fcb_abort;   //!
   TBranch        *b_fcb_fltabort;   //!
   TBranch        *b_fcb_dump;   //!
   TBranch        *b_fce_DMP_ABND;   //!
   TBranch        *b_fce_fatalNotdone;   //!
   TBranch        *b_fce_toobig;   //!
   TBranch        *b_fce_incomplete;   //!
   TBranch        *b_fce_nofcfif2;   //!
   TBranch        *b_o1fltFL;   //!
   TBranch        *b_fltfc_valid;   //!
   TBranch        *b_fltfc_fcError;   //!
   TBranch        *b_fltfc_fcBusy;   //!
   TBranch        *b_fltfc_fcAbortCond;   //!
   TBranch        *b_fltTestType;   //!
   TBranch        *b_fltRoTyp;   //!
   TBranch        *b_fltBunchAmbig;   //!
   TBranch        *b_fltBCN;   //!
   TBranch        *b_fc_wc_t;   //!
   TBranch        *b_fc_wc_f;   //!
   TBranch        *b_fc_wc_b;   //!
   TBranch        *b_fc_wc_r;   //!
   TBranch        *b_fltfc_elec;   //!
   TBranch        *b_fltfc_ptmis;   //!
   TBranch        *b_fltfc_beamg;   //!
   TBranch        *b_fltfc_empzlo;   //!
   TBranch        *b_fltfc_empzhi;   //!
   TBranch        *b_fltfc_etcl;   //!
   TBranch        *b_fltfc_abort;   //!
   TBranch        *b_fltfc_fltabort;   //!
   TBranch        *b_fc_readstat_t;   //!
   TBranch        *b_fc_readstat_f;   //!
   TBranch        *b_fc_readstat_b;   //!
   TBranch        *b_fc_readstat_r;   //!
   TBranch        *b_fc_unknaddr_t;   //!
   TBranch        *b_fc_unknaddr_f;   //!
   TBranch        *b_fc_unknaddr_b;   //!
   TBranch        *b_fc_unknaddr_r;   //!
   TBranch        *b_fc_sa_t;   //!
   TBranch        *b_fc_sa_f;   //!
   TBranch        *b_fc_sa_b;   //!
   TBranch        *b_fc_sa_r;   //!
   TBranch        *b_Nmu;   //!
   TBranch        *b_Muqual;   //!
   TBranch        *b_Mucharge;   //!
   TBranch        *b_Mupt;   //!
   TBranch        *b_Muth;   //!
   TBranch        *b_Muph;   //!
   TBranch        *b_Mup;   //!
   TBranch        *b_Muperr;   //!
   TBranch        *b_Mutrfl;   //!
   TBranch        *b_Mutrid;   //!
   TBranch        *b_Muvcid;   //!
   TBranch        *b_Muztid;   //!
   TBranch        *b_Mustid;   //!
   TBranch        *b_Muvtxfl;   //!
   TBranch        *b_Muvtxid;   //!
   TBranch        *b_Muglomu;   //!
   TBranch        *b_Mubremat;   //!
   TBranch        *b_Mubacmat;   //!
   TBranch        *b_Mumubac;   //!
   TBranch        *b_Mumamma;   //!
   TBranch        *b_Mumpmat;   //!
   TBranch        *b_Mumufo;   //!
   TBranch        *b_Mumip;   //!
   TBranch        *b_Mumv;   //!
   TBranch        *b_Mucalfl;   //!
   TBranch        *b_Mucalene;   //!
   TBranch        *b_Muhac2;   //!
   TBranch        *b_Muzufid;   //!
   TBranch        *b_Mupmip;   //!
   TBranch        *b_Muhene;   //!
   TBranch        *b_Mutime;   //!
   TBranch        *b_Muchfl;   //!
   TBranch        *b_Muchid;   //!
   TBranch        *b_Mupmat;   //!
   TBranch        *b_Mundof;   //!
   TBranch        *b_Munphi;   //!
   TBranch        *b_Muz;   //!
   TBranch        *b_Muprec;   //!
   TBranch        *b_Mubmchi2;   //!
   TBranch        *b_Mubmbac;   //!
   TBranch        *b_Mubacdca;   //!
   TBranch        *b_Mubacdimq;   //!
   TBranch        *b_Mudxy;   //!
   TBranch        *b_Mudz;   //!
   TBranch        *b_Muisol;   //!
   TBranch        *b_Munis;   //!
   TBranch        *b_Muisdrmip;   //!
   TBranch        *b_Muisetmip;   //!
   TBranch        *b_Muistumip;   //!
   TBranch        *b_Mujetfl_a;   //!
   TBranch        *b_Mujetid_a;   //!
   TBranch        *b_Mujetdr_a;   //!
   TBranch        *b_Mujetpt_a;   //!
   TBranch        *b_Mujetdr2_a;   //!
   TBranch        *b_Mujetpt2_a;   //!
   TBranch        *b_Muhjet_id;   //!
   TBranch        *b_Mujetfl_b;   //!
   TBranch        *b_Mujetid_b;   //!
   TBranch        *b_Mujetdr_b;   //!
   TBranch        *b_Mujetpt_b;   //!
   TBranch        *b_Mujetdr2_b;   //!
   TBranch        *b_Mujetpt2_b;   //!
   TBranch        *b_Mujetfl_c;   //!
   TBranch        *b_Mujetid_c;   //!
   TBranch        *b_Mujetdr_c;   //!
   TBranch        *b_Mujetpt_c;   //!
   TBranch        *b_Mujetdr2_c;   //!
   TBranch        *b_Mujetpt2_c;   //!
   TBranch        *b_Mujetfl_d;   //!
   TBranch        *b_Mujetid_d;   //!
   TBranch        *b_Mujetdr_d;   //!
   TBranch        *b_Mujetpt_d;   //!
   TBranch        *b_Mujetdr2_d;   //!
   TBranch        *b_Mujetpt2_d;   //!
   TBranch        *b_Bm_n;   //!
   TBranch        *b_Bm_idvc;   //!
   TBranch        *b_Bm_idmubac;   //!
   TBranch        *b_Bm_istop;   //!
   TBranch        *b_Bm_error;   //!
   TBranch        *b_Bm_readout;   //!
   TBranch        *b_Bm_x;   //!
   TBranch        *b_Bm_p;   //!
   TBranch        *b_Bm_chi2;   //!
   TBranch        *b_Bm_dca;   //!
   TBranch        *b_Bm_gcov;   //!
   TBranch        *b_Bm_fcov;   //!
   TBranch        *b_Bm_resloc;   //!
   TBranch        *b_Bm_prob;   //!
   TBranch        *b_Bm_zpen;   //!
   TBranch        *b_Bm_dlh;   //!
   TBranch        *b_Bm_mubac_n;   //!
   TBranch        *b_Bm_mubac_hit;   //!
   TBranch        *b_Bm_mubac_pad;   //!
   TBranch        *b_Bm_mubac_unit;   //!
   TBranch        *b_Bm_mubac_hp1;   //!
   TBranch        *b_Bm_mubac_hp2;   //!
   TBranch        *b_Bm_mubac_xyz;   //!
   TBranch        *b_Bm_mubac_dxyz;   //!
   TBranch        *b_Bm_mubac_cos;   //!
   TBranch        *b_Bm_mubac_plf;   //!
   TBranch        *b_Et_maxIsl;   //!
   TBranch        *b_PtmHiEtCell;   //!
   TBranch        *b_Pt_mimbal;   //!
   TBranch        *b_HiEtCell_Type;   //!
   TBranch        *b_HiEtCell_Nr;   //!
   TBranch        *b_HiEtCell_Px;   //!
   TBranch        *b_HiEtCell_Py;   //!
   TBranch        *b_HiEtCell_Pz;   //!
   TBranch        *b_HiEtCell_Et;   //!
   TBranch        *b_HiEtCell_imbal;   //!
   TBranch        *b_HiEtCell_E;   //!
   TBranch        *b_KT_NJET_A;   //!
   TBranch        *b_Kt_etjet_a;   //!
   TBranch        *b_Kt_etajet_a;   //!
   TBranch        *b_Kt_phijet_a;   //!
   TBranch        *b_Kt_masjet_a;   //!
   TBranch        *b_KT_NJET_B;   //!
   TBranch        *b_Kt_etjet_b;   //!
   TBranch        *b_Kt_etajet_b;   //!
   TBranch        *b_Kt_phijet_b;   //!
   TBranch        *b_Kt_masjet_b;   //!
   TBranch        *b_KT_BST_B;   //!
   TBranch        *b_KT_NJET_C;   //!
   TBranch        *b_Kt_etjet_c;   //!
   TBranch        *b_Kt_etajet_c;   //!
   TBranch        *b_Kt_phijet_c;   //!
   TBranch        *b_Kt_masjet_c;   //!
   TBranch        *b_KT_BST_C;   //!
   TBranch        *b_KT_NJET_D;   //!
   TBranch        *b_Kt_etjet_d;   //!
   TBranch        *b_Kt_etajet_d;   //!
   TBranch        *b_Kt_phijet_d;   //!
   TBranch        *b_Kt_masjet_d;   //!
   TBranch        *b_KT_BST_D;   //!
   TBranch        *b_KT_NJET_E;   //!
   TBranch        *b_Kt_etjet_e;   //!
   TBranch        *b_Kt_etajet_e;   //!
   TBranch        *b_Kt_phijet_e;   //!
   TBranch        *b_KT_BST_E;   //!
   TBranch        *b_KT_NJET_F;   //!
   TBranch        *b_Kt_etjet_f;   //!
   TBranch        *b_Kt_etajet_f;   //!
   TBranch        *b_Kt_phijet_f;   //!
   TBranch        *b_KT_BST_F;   //!
   TBranch        *b_KT_NJET_G;   //!
   TBranch        *b_Kt_etjet_g;   //!
   TBranch        *b_Kt_etajet_g;   //!
   TBranch        *b_Kt_phijet_g;   //!
   TBranch        *b_KT_BST_G;   //!
   TBranch        *b_KT_NJET_H;   //!
   TBranch        *b_Kt_etjet_h;   //!
   TBranch        *b_Kt_etajet_h;   //!
   TBranch        *b_Kt_phijet_h;   //!
   TBranch        *b_KT_BST_H;   //!
   TBranch        *b_KT_NJET_I;   //!
   TBranch        *b_Kt_etjet_i;   //!
   TBranch        *b_Kt_etajet_i;   //!
   TBranch        *b_Kt_phijet_i;   //!
   TBranch        *b_KT_NJET_J;   //!
   TBranch        *b_Kt_etjet_j;   //!
   TBranch        *b_Kt_etajet_j;   //!
   TBranch        *b_Kt_phijet_j;   //!
   TBranch        *b_KT_NJET_K;   //!
   TBranch        *b_Kt_etjet_k;   //!
   TBranch        *b_Kt_etajet_k;   //!
   TBranch        *b_Kt_phijet_k;   //!
   TBranch        *b_KT_BST_K;   //!
   TBranch        *b_KT_NJET_L;   //!
   TBranch        *b_Kt_etjet_l;   //!
   TBranch        *b_Kt_etajet_l;   //!
   TBranch        *b_Kt_phijet_l;   //!
   TBranch        *b_KT_BST_L;   //!
   TBranch        *b_CONE_NJET;   //!
   TBranch        *b_Cone_etjet;   //!
   TBranch        *b_Cone_etajet;   //!
   TBranch        *b_Cone_phijet;   //!
   TBranch        *b_ELumie;   //!
   TBranch        *b_XLumie;   //!
   TBranch        *b_YLumie;   //!
   TBranch        *b_ELumig;   //!
   TBranch        *b_XLumig;   //!
   TBranch        *b_YLumig;   //!
   TBranch        *b_E_pcal;   //!
   TBranch        *b_E_pcal_aero;   //!
   TBranch        *b_Raw_aero1;   //!
   TBranch        *b_Raw_aero2;   //!
   TBranch        *b_Raw_pcal;   //!
   TBranch        *b_I_lepton;   //!
   TBranch        *b_I_proton;   //!
   TBranch        *b_SiNcand;   //!
   TBranch        *b_SiError;   //!
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
   TBranch        *b_Six0;   //!
   TBranch        *b_Sidmcorr;   //!
   TBranch        *b_Sidmcorrcode;   //!
   TBranch        *b_siuvf_ncand;   //!
   TBranch        *b_Siuvf_charge;   //!
   TBranch        *b_Siuvf_result;   //!
   TBranch        *b_Siuvf_nmvd;   //!
   TBranch        *b_Siuvf_nmvdhit;   //!
   TBranch        *b_Siuvf_nctd;   //!
   TBranch        *b_Siuvf_nctdhit;   //!
   TBranch        *b_nBPchn;   //!
   TBranch        *b_Bpmip;   //!
   TBranch        *b_Bpxyz;   //!
   TBranch        *b_Bptim;   //!
   TBranch        *b_tsu_halo;   //!
   TBranch        *b_nv0lite;   //!
   TBranch        *b_Tsecvtx;   //!
   TBranch        *b_Tsecvtx_chi;   //!
   TBranch        *b_Tsecvtx_dca;   //!
   TBranch        *b_Tsecvtx_collin2;   //!
   TBranch        *b_Tsecvtx_collin3;   //!
   TBranch        *b_Tsecvtx_dlen2;   //!
   TBranch        *b_Tsecvtx_dlen3;   //!
   TBranch        *b_Tq1;   //!
   TBranch        *b_Tq2;   //!
   TBranch        *b_Tt1_layinn;   //!
   TBranch        *b_Tt1_layout;   //!
   TBranch        *b_Tt2_layinn;   //!
   TBranch        *b_Tt2_layout;   //!
   TBranch        *b_Tt1_id;   //!
   TBranch        *b_Tt2_id;   //!
   TBranch        *b_Tstt1;   //!
   TBranch        *b_Tstt2;   //!
   TBranch        *b_Tmindca;   //!
   TBranch        *b_Tt1_ndof;   //!
   TBranch        *b_Tt2_ndof;   //!
   TBranch        *b_Tp1;   //!
   TBranch        *b_Tp2;   //!
   TBranch        *b_Tpk;   //!
   TBranch        *b_Tinvmass_lambda;   //!
   TBranch        *b_Tinvmass_alambda;   //!
   TBranch        *b_Tinvmass_k0;   //!
   TBranch        *b_Tinvmass_ee;   //!
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
   TBranch        *b_fcal_NrGoodCells;   //!
   TBranch        *b_fcal_VzErr;   //!
   TBranch        *b_V_H_px_zu;   //!
   TBranch        *b_V_H_py_zu;   //!
   TBranch        *b_V_H_pz_zu;   //!
   TBranch        *b_V_H_E_zu;   //!
   TBranch        *b_Etamax_zu;   //!
   TBranch        *b_Etamax_zu4;   //!
   TBranch        *b_Fgap;   //!
   TBranch        *b_Bgap;   //!
   TBranch        *b_Nzufos;   //!
   TBranch        *b_Tufo;   //!
   TBranch        *b_Zufo_bsp;   //!
   TBranch        *b_Zufo;   //!
   TBranch        *b_Cufo;   //!
   TBranch        *b_Zufoecal;   //!
   TBranch        *b_Zufoeemc;   //!
   TBranch        *b_Zufo_fmax_bemc;   //!
   TBranch        *b_Zufo_fmax_remc;   //!
   TBranch        *b_Zufo_fmax_femc;   //!
   TBranch        *b_Zufo_deltax;   //!
   TBranch        *b_Zufo_deltay;   //!
   TBranch        *b_Zufo_deltaz;   //!
   TBranch        *b_nIsl;   //!
   TBranch        *b_Nrcisl;   //!
   TBranch        *b_Isltyp;   //!
   TBranch        *b_Eisl;   //!
   TBranch        *b_Xisl;   //!
   TBranch        *b_Yisl;   //!
   TBranch        *b_Zisl;   //!
   TBranch        *b_Risl;   //!
   TBranch        *b_nT;   //!
   TBranch        *b_Vcthid;   //!
   TBranch        *b_Hlid;   //!
   TBranch        *b_Qtr;   //!
   TBranch        *b_Swmtr;   //!
   TBranch        *b_Qlttr;   //!
   TBranch        *b_Mtri;   //!
   TBranch        *b_Wtri;   //!
   TBranch        *b_Ptr;   //!
   TBranch        *b_Dptr;   //!
   TBranch        *b_Thtr;   //!
   TBranch        *b_Phtr;   //!
   TBranch        *b_Dist_istr;   //!
   TBranch        *b_trk_ntracks;   //!
   TBranch        *b_Trk_type;   //!
   TBranch        *b_ntrack_type;   //!
   TBranch        *b_def_trk_type;   //!
   TBranch        *b_Trk_id;   //!
//   TBranch        *b_Trk_id2;   //!
   TBranch        *b_Trk_px;   //!
   TBranch        *b_Trk_py;   //!
   TBranch        *b_Trk_pz;   //!
   TBranch        *b_Trk_charge;   //!
   TBranch        *b_Trk_vtx;   //!
   TBranch        *b_Trk_prim_vtx;   //!
   TBranch        *b_Trk_sec_vtx;   //!
   TBranch        *b_Trk_vxid;   //!
   TBranch        *b_Trk_nzbyt;   //!
   TBranch        *b_Trk_naxial;   //!
   TBranch        *b_Trk_nstereo;   //!
   TBranch        *b_Trk_ndof;   //!
   TBranch        *b_Trk_layinner;   //!
   TBranch        *b_Trk_layouter;   //!
   TBranch        *b_Trk_dedxctd;   //!
   TBranch        *b_Trk_dedxctdcr;   //!
   TBranch        *b_Trk_dedxctderr;   //!
   TBranch        *b_Trk_dedxctdnh;   //!
   TBranch        *b_Trk_dedxctdsaturated;   //!
   TBranch        *b_Trk_chi2;   //!
   TBranch        *b_Trk_vchi2;   //!
   TBranch        *b_Trk_nbr;   //!
   TBranch        *b_Trk_nbz;   //!
   TBranch        *b_Trk_nwu;   //!
   TBranch        *b_Trk_nwv;   //!
   TBranch        *b_Trk_nstt;   //!
   TBranch        *b_Trk_dedxmvd;   //!
   TBranch        *b_Trk_helpar;   //!
   TBranch        *b_Trk_covmat;   //!
   TBranch        *b_Trk_helmom;   //!
   TBranch        *b_Trk_imppar;   //!
   TBranch        *b_Trk_imperr;   //!
   TBranch        *b_Trk_pca;   //!
   TBranch        *b_trk_nvert;   //!
   TBranch        *b_Vtx_type;   //!
   TBranch        *b_Vtx_prim;   //!
   TBranch        *b_Vtx_id;   //!
   TBranch        *b_Vtx_x;   //!
   TBranch        *b_Vtx_y;   //!
   TBranch        *b_Vtx_z;   //!
   TBranch        *b_Vtx_chi2;   //!
   TBranch        *b_Vtx_ndf;   //!
   TBranch        *b_sltctd;   //!
   TBranch        *b_sltctd_tgstkf;   //!
   TBranch        *b_sltctd_tgstkm;   //!
   TBranch        *b_sltctd_tgstkr;   //!
   TBranch        *b_sltctd_tgsvxp;   //!
   TBranch        *b_sltctd_tgsvxe;   //!
   TBranch        *b_sltctd_tgsvxm;   //!
   TBranch        *b_sltctd_tgstkd;   //!
   TBranch        *b_sltctd_nTrk;   //!
   TBranch        *b_Sltctd_pt;   //!
   TBranch        *b_Sltctd_ch;   //!
   TBranch        *b_Sltctd_vx;   //!
   TBranch        *b_Sltctd_ns;   //!
   TBranch        *b_Sltctd_ex;   //!
   TBranch        *b_Sltctd_ey;   //!
   TBranch        *b_Sltctd_ez;   //!
   TBranch        *b_Sltctd_phi;   //!
   TBranch        *b_Sltctd_the;   //!
   TBranch        *b_nGTTRK1;   //!
   TBranch        *b_Gttrk1_r;   //!
   TBranch        *b_Gttrk1_pt;   //!
   TBranch        *b_Gttrk1_theta;   //!
   TBranch        *b_Gttrk1_phi;   //!
   TBranch        *b_Gttrk1_zvert;   //!
   TBranch        *b_Gttrk1_zgrad;   //!
   TBranch        *b_Gttrk1_naxseg;   //!
   TBranch        *b_Gttrk1_nstseg;   //!
   TBranch        *b_Gttrk1_nrmvd;   //!
   TBranch        *b_Gttrk1_nzmvd;   //!
   TBranch        *b_Gttrk1_isl;   //!
   TBranch        *b_Gttrk1_osl;   //!
   TBranch        *b_Gttrk1_chiax;   //!
   TBranch        *b_Gttrk1_chist;   //!
   TBranch        *b_Gttrk1_vertid;   //!
   TBranch        *b_nGTVTX;   //!
   TBranch        *b_Gtvtx_pos;   //!
   TBranch        *b_Gtvtx_width;   //!
   TBranch        *b_Gtvtx_ntrax;   //!
   TBranch        *b_Gtvtx_flag1;   //!
   TBranch        *b_Gtvtx_flag2;   //!
   TBranch        *b_GTBEVT_NVert;   //!
   TBranch        *b_GTBEVT_PrVert;   //!
   TBranch        *b_GTBEVT_PVertWdth;   //!
   TBranch        *b_GTBEVT_Ntrax;   //!
   TBranch        *b_GTBEVT_NAxtrax;   //!
   TBranch        *b_GTBEVT_NVtxtrax;   //!
   TBranch        *b_GTBEVT_Nwts;   //!
   TBranch        *b_GTBEVT_Nvtxwts;   //!
   TBranch        *b_GTBEVT_NCTDtrax;   //!
   TBranch        *b_GTBEVT_Flag1;   //!
   TBranch        *b_GTBEVT_Flag2;   //!
   TBranch        *b_GTBEVT_Flag3;   //!
   TBranch        *b_GTBEVT_Flag4;   //!
//   TBranch        *b_vcatcal_n;   //!
//   TBranch        *b_Vcatcal_q;   //!
//   TBranch        *b_Vcatcal_x;   //!
//   TBranch        *b_Vcatcal_p;   //!
   TBranch        *b_nchvtx;   //!
   TBranch        *b_Chvtxpar;   //!
   TBranch        *b_Chvtxcov;   //!
   TBranch        *b_Chchi2;   //!
   TBranch        *b_nchds1;   //!
   TBranch        *b_Ds1ms;   //!
   TBranch        *b_Ds1pm;   //!
   TBranch        *b_Ds1th;   //!
   TBranch        *b_Ds1ph;   //!
   TBranch        *b_D1d0ms;   //!
   TBranch        *b_D1d0pm;   //!
   TBranch        *b_D1d0th;   //!
   TBranch        *b_D1d0ph;   //!
   TBranch        *b_D1kapm;   //!
   TBranch        *b_D1kath;   //!
   TBranch        *b_D1kaph;   //!
   TBranch        *b_D1pipm;   //!
   TBranch        *b_D1pith;   //!
   TBranch        *b_D1piph;   //!
   TBranch        *b_D1pspm;   //!
   TBranch        *b_D1psth;   //!
   TBranch        *b_D1psph;   //!
   TBranch        *b_Ds1trk;   //!
   TBranch        *b_Tds1ka;   //!
   TBranch        *b_Tds1pi;   //!
   TBranch        *b_Tds1ps;   //!
   TBranch        *b_Id1d0vtx;   //!
   TBranch        *b_Ids1rprm;   //!
   TBranch        *b_nchds2;   //!
   TBranch        *b_Ds2ms;   //!
   TBranch        *b_Ds2pm;   //!
   TBranch        *b_Ds2th;   //!
   TBranch        *b_Ds2ph;   //!
   TBranch        *b_D2d0ms;   //!
   TBranch        *b_D2d0pm;   //!
   TBranch        *b_D2d0th;   //!
   TBranch        *b_D2d0ph;   //!
   TBranch        *b_D2kapm;   //!
   TBranch        *b_D2kath;   //!
   TBranch        *b_D2kaph;   //!
   TBranch        *b_D2p1pm;   //!
   TBranch        *b_D2p1th;   //!
   TBranch        *b_D2p1ph;   //!
   TBranch        *b_D2p2pm;   //!
   TBranch        *b_D2p2th;   //!
   TBranch        *b_D2p2ph;   //!
   TBranch        *b_D2p3pm;   //!
   TBranch        *b_D2p3th;   //!
   TBranch        *b_D2p3ph;   //!
   TBranch        *b_D2pspm;   //!
   TBranch        *b_D2psth;   //!
   TBranch        *b_D2psph;   //!
   TBranch        *b_Ds2trk;   //!
   TBranch        *b_Tds2ka;   //!
   TBranch        *b_Tds2p1;   //!
   TBranch        *b_Tds2p2;   //!
   TBranch        *b_Tds2p3;   //!
   TBranch        *b_Tds2ps;   //!
   TBranch        *b_Id2d0vtx;   //!
   TBranch        *b_Ids2rprm;   //!
   TBranch        *b_Ds2rin;   //!
   TBranch        *b_D2maxdca;   //!
   TBranch        *b_nchd0;   //!
   TBranch        *b_D0ms;   //!
   TBranch        *b_D0pm;   //!
   TBranch        *b_D0th;   //!
   TBranch        *b_D0ph;   //!
   TBranch        *b_D0kapm;   //!
   TBranch        *b_D0kath;   //!
   TBranch        *b_D0kaph;   //!
   TBranch        *b_D0pipm;   //!
   TBranch        *b_D0pith;   //!
   TBranch        *b_D0piph;   //!
   TBranch        *b_D0trk;   //!
   TBranch        *b_Td0ka;   //!
   TBranch        *b_Td0pi;   //!
   TBranch        *b_Id0vtx;   //!
   TBranch        *b_Id0rprm;   //!
   TBranch        *b_nchdch;   //!
   TBranch        *b_Dchms;   //!
   TBranch        *b_Dchpm;   //!
   TBranch        *b_Dchth;   //!
   TBranch        *b_Dchph;   //!
   TBranch        *b_Dckapm;   //!
   TBranch        *b_Dckath;   //!
   TBranch        *b_Dckaph;   //!
   TBranch        *b_Dcp1pm;   //!
   TBranch        *b_Dcp1th;   //!
   TBranch        *b_Dcp1ph;   //!
   TBranch        *b_Dcp2pm;   //!
   TBranch        *b_Dcp2th;   //!
   TBranch        *b_Dcp2ph;   //!
   TBranch        *b_Dchtrk;   //!
   TBranch        *b_Tdchka;   //!
   TBranch        *b_Tdchp1;   //!
   TBranch        *b_Tdchp2;   //!
   TBranch        *b_Idchvtx;   //!
   TBranch        *b_Idchrprm;   //!
   TBranch        *b_nchdla;   //!
   TBranch        *b_Dlams;   //!
   TBranch        *b_Dlapm;   //!
   TBranch        *b_Dlath;   //!
   TBranch        *b_Dlaph;   //!
   TBranch        *b_Dlkapm;   //!
   TBranch        *b_Dlkath;   //!
   TBranch        *b_Dlkaph;   //!
   TBranch        *b_Dlprpm;   //!
   TBranch        *b_Dlprth;   //!
   TBranch        *b_Dlprph;   //!
   TBranch        *b_Dlpipm;   //!
   TBranch        *b_Dlpith;   //!
   TBranch        *b_Dlpiph;   //!
   TBranch        *b_Dlatrk;   //!
   TBranch        *b_Tdlaka;   //!
   TBranch        *b_Tdlapr;   //!
   TBranch        *b_Tdlapi;   //!
   TBranch        *b_Idlavtx;   //!
   TBranch        *b_Idlarprm;   //!
   TBranch        *b_nchdss;   //!
   TBranch        *b_Dssms;   //!
   TBranch        *b_Dsspm;   //!
   TBranch        *b_Dssth;   //!
   TBranch        *b_Dssph;   //!
   TBranch        *b_Dsphms;   //!
   TBranch        *b_Dsphpm;   //!
   TBranch        *b_Dsphth;   //!
   TBranch        *b_Dsphph;   //!
   TBranch        *b_Dsk1pm;   //!
   TBranch        *b_Dsk1th;   //!
   TBranch        *b_Dsk1ph;   //!
   TBranch        *b_Dsk2pm;   //!
   TBranch        *b_Dsk2th;   //!
   TBranch        *b_Dsk2ph;   //!
   TBranch        *b_Dspipm;   //!
   TBranch        *b_Dspith;   //!
   TBranch        *b_Dspiph;   //!
   TBranch        *b_Dsstrk;   //!
   TBranch        *b_Tdssk1;   //!
   TBranch        *b_Tdssk2;   //!
   TBranch        *b_Tdsspi;   //!
   TBranch        *b_Idssvtx;   //!
   TBranch        *b_Idssrprm;   //!
   TBranch        *b_gt_nvt;   //!
   TBranch        *b_gt_ntrk;   //!
   TBranch        *b_gt_naxtr;   //!
   TBranch        *b_gt_nvtx;   //!
   TBranch        *b_gt_nctdt;   //!
   TBranch        *b_gt_f1;   //!
   TBranch        *b_gt_f2;   //!
   TBranch        *b_gt_f3;   //!
   TBranch        *b_gt_f4;   //!
   TBranch        *b_gt_prv;   //!
   TBranch        *b_gt_prvw;   //!
   TBranch        *b_gt_pt;   //!
   TBranch        *b_gt_sptvtx;   //!
   TBranch        *b_gt_ctd_size;   //!
   TBranch        *b_gt_bckg;   //!
   TBranch        *b_gt_mass;   //!
   TBranch        *b_gt_ptd0;   //!
   TBranch        *b_gt_nvt_MVD;   //!
   TBranch        *b_gt_ntrk_MVD;   //!
   TBranch        *b_gt_nvtx_MVD;   //!
   TBranch        *b_gt_prv_MVD;   //!
   TBranch        *b_gt_prvw_MVD;   //!
   TBranch        *b_gt_sptvtx_MVD;   //!
   TBranch        *b_bspt_prog;   //!
   TBranch        *b_bspt_x;   //!
   TBranch        *b_bspt_y;   //!
   TBranch        *b_bspt_z;   //!
   TBranch        *b_bspt_xer;   //!
   TBranch        *b_bspt_yer;   //!
   TBranch        *b_bspt_zer;   //!
   TBranch        *b_bspt_dxdz;   //!
   TBranch        *b_bspt_dydz;   //!
   TBranch        *b_bspt_dxdzer;   //!
   TBranch        *b_bspt_dydzer;   //!
   TBranch        *b_bspt_xoff;   //!
   TBranch        *b_bspt_yoff;   //!
   TBranch        *b_bspt_xoffer;   //!
   TBranch        *b_bspt_yoffer;   //!
   TBranch        *b_t6rec_hotx;   //!
   TBranch        *b_t6rec_hoty;   //!
   TBranch        *b_t6rec_ene;   //!
   TBranch        *b_t6rec_x;   //!
   TBranch        *b_t6rec_y;   //!
   TBranch        *b_nr_secvtx;   //!
   TBranch        *b_Vtxsec_type;   //!
   TBranch        *b_Vtxsec_ref;   //!
   TBranch        *b_Vtxsec_x;   //!
   TBranch        *b_Vtxsec_y;   //!
   TBranch        *b_Vtxsec_z;   //!
   TBranch        *b_Vtxsec_mass;   //!
   TBranch        *b_Vtxsec_chi2;   //!
   TBranch        *b_Vtxsec_ndf;   //!
   TBranch        *b_Vtxsec_multi;   //!
   TBranch        *b_Vtxsec_cov;   //!
   TBranch        *b_Vtxsec_zttid;   //!
   TBranch        *b_Vtxsec_weight;   //!
   TBranch        *b_Vtxsec_redprm;   //!
   TBranch        *b_nr_redprim;   //!
   TBranch        *b_Vtxredprim_type;   //!
   TBranch        *b_Vtxredprim_secvtx;   //!
   TBranch        *b_Vtxredprim_x;   //!
   TBranch        *b_Vtxredprim_y;   //!
   TBranch        *b_Vtxredprim_z;   //!
   TBranch        *b_Vtxredprim_chi2;   //!
   TBranch        *b_Vtxredprim_cov;   //!
   TBranch        *b_Vtxredprim_ndf;   //!
   TBranch        *b_Pseudo_Thrust;   //!
   TBranch        *b_Thrust_Axis_Phi;   //!
   TBranch        *b_Thrust_Axis_Theta1;   //!
   TBranch        *b_Thrust_Axis_Theta2;   //!
   TBranch        *b_DIS_Pseudo_Thrust_Breit;   //!
   TBranch        *b_Thrust_Axis_Phi_Breit;   //!
   TBranch        *b_Thrust_Axis_Theta1_Breit;   //!
   TBranch        *b_Thrust_Axis_Theta2_Breit;   //!
   TBranch        *b_Thrust_Axis_Phi1_Lab;   //!
   TBranch        *b_Thrust_Axis_Phi2_Lab;   //!
   TBranch        *b_Thrust_Axis_Theta1_Lab;   //!
   TBranch        *b_Thrust_Axis_Theta2_Lab;   //!
   TBranch        *b_Q2Prime_A;   //!
   TBranch        *b_Isotropy_A;   //!
   TBranch        *b_Part_Band_A;   //!
   TBranch        *b_Sphericity_A;   //!
   TBranch        *b_Q2Prime_B;   //!
   TBranch        *b_Isotropy_B;   //!
   TBranch        *b_Part_Band_B;   //!
   TBranch        *b_Sphericity_B;   //!
   TBranch        *b_trkmsa_ntracks;   //!
   TBranch        *b_Trkmsa_id;   //!
   TBranch        *b_Trkmsa_px;   //!
   TBranch        *b_Trkmsa_py;   //!
   TBranch        *b_Trkmsa_pz;   //!
   TBranch        *b_Trkmsa_charge;   //!
   TBranch        *b_Trkmsa_ndof;   //!
   TBranch        *b_Trkmsa_chi2;   //!
   TBranch        *b_Trkmsa_nbr;   //!
   TBranch        *b_Trkmsa_nbz;   //!
   TBranch        *b_Trkmsa_nwu;   //!
   TBranch        *b_Trkmsa_nwv;   //!
   TBranch        *b_Trkmsa_dedxmvd;   //!
   TBranch        *b_Trkmsa_helpar;   //!
   TBranch        *b_Trkmsa_covmat;   //!
   TBranch        *b_Trkmsa_helmom;   //!
   TBranch        *b_Trkmsa_imppar;   //!
   TBranch        *b_Trkmsa_imperr;   //!
   TBranch        *b_Trkmsa_pca;   //!
   TBranch        *b_uvfall_ncand;   //!
   TBranch        *b_Uvfall_charge;   //!
   TBranch        *b_Uvfall_siraem;   //!
   TBranch        *b_Uvfall_candid;   //!
   TBranch        *b_Uvfall_result;   //!
   TBranch        *b_Uvfall_nmvd;   //!
   TBranch        *b_Uvfall_nmvdhit;   //!
   TBranch        *b_Uvfall_nctd;   //!
   TBranch        *b_Uvfall_nctdhit;   //!
   TBranch        *b_tlt_spp15;   //!
   TBranch        *b_tlt_spp16;   //!
   TBranch        *b_tlt_spp11;   //!
   TBranch        *b_tlt_spp15lq2;   //!
   TBranch        *b_tlt_spp16lq2;   //!
   TBranch        *b_sltcal_etotemc;   //!
   TBranch        *b_sltcal_etothac;   //!
   TBranch        *b_sltcal_etotremc;   //!
   TBranch        *b_sltcal_etotbemc;   //!
   TBranch        *b_sltcal_etotfemc;   //!
   TBranch        *b_sltcal_etotfcal;   //!
   TBranch        *b_sltelc_fl;   //!
   TBranch        *b_sltelc_emcthe;   //!
   TBranch        *b_sltelc_emcphi;   //!
   TBranch        *b_sltelc_emcene;   //!
   TBranch        *b_sltelc_hacene;   //!
   TBranch        *b_gttenv_ctdsize;   //!
   TBranch        *b_tlev_evtype;   //!
   TBranch        *b_tlev_eminpz;   //!

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
      TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject("data_05_57123_57123_01.root");
      if (!f) {
         f = new TFile("data_05_57123_57123_01.root");
      }
      tree = (TTree*)gDirectory->Get("orange");

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

   fChain->SetBranchAddress("Runnr", &Runnr, &b_RUNNR);
   fChain->SetBranchAddress("Eventnr", &Eventnr, &b_EVENTNR);
   fChain->SetBranchAddress("Weight", &Weight, &b_WEIGHT);
   fChain->SetBranchAddress("Evtake", &Evtake, &b_EVTAKE);
   fChain->SetBranchAddress("Evtake_iwant", &Evtake_iwant, &b_EVTAKE_iwant);
   fChain->SetBranchAddress("Mvdtake", &Mvdtake, &b_MVDTAKE);
   fChain->SetBranchAddress("Stttake", &Stttake, &b_STTTAKE);
   fChain->SetBranchAddress("Tpoltake", &Tpoltake, &b_TPOLTAKE);
   fChain->SetBranchAddress("Lpoltake", &Lpoltake, &b_LPOLTAKE);
   fChain->SetBranchAddress("Fmutake", &Fmutake, &b_FMUTAKE);
   fChain->SetBranchAddress("Mbtake", &Mbtake, &b_MBTAKE);
   fChain->SetBranchAddress("Tag6take", &Tag6take, &b_TAG6TAKE);
   fChain->SetBranchAddress("Fltw", Fltw, &b_FLTW);
   fChain->SetBranchAddress("Fltpsw", Fltpsw, &b_FLTPSW);
   fChain->SetBranchAddress("Fltfl", &Fltfl, &b_FLTfl);
   fChain->SetBranchAddress("Gslt_global", &Gslt_global, &b_GSLT_global);
   fChain->SetBranchAddress("Sltw", Sltw, &b_SLTW);
   fChain->SetBranchAddress("Sltupw", Sltupw, &b_SLTUPW);
   fChain->SetBranchAddress("Tltw", Tltw, &b_TLTW);
   fChain->SetBranchAddress("Dstw", Dstw, &b_DSTW);
   fChain->SetBranchAddress("Fltpsfcw", Fltpsfcw, &b_FLTPSFCW);
   fChain->SetBranchAddress("Flt_cal_e", &Flt_cal_e, &b_flt_cal_e);
   fChain->SetBranchAddress("Flt_cal_emc", &Flt_cal_emc, &b_flt_cal_emc);
   fChain->SetBranchAddress("Flt_cal_et_fbp", &Flt_cal_et_fbp, &b_flt_cal_et_fbp);
   fChain->SetBranchAddress("Flt_cal_fbp_ovf", &Flt_cal_fbp_ovf, &b_flt_cal_fbp_ovf);
   fChain->SetBranchAddress("Flt_bcal_emc", &Flt_bcal_emc, &b_flt_bcal_emc);
   fChain->SetBranchAddress("Flt_rcal_emc", &Flt_rcal_emc, &b_flt_rcal_emc);
   fChain->SetBranchAddress("Flt_remcth", &Flt_remcth, &b_flt_remcth);
   fChain->SetBranchAddress("Flt_fcal_tote", &Flt_fcal_tote, &b_flt_fcal_tote);
   fChain->SetBranchAddress("Flt_trk_cl", &Flt_trk_cl, &b_flt_trk_cl);
   fChain->SetBranchAddress("Flt_trk_mlt", &Flt_trk_mlt, &b_flt_trk_mlt);
   fChain->SetBranchAddress("Flt_lumi_ee", &Flt_lumi_ee, &b_flt_lumi_ee);
   fChain->SetBranchAddress("Flt_lumi_eg", &Flt_lumi_eg, &b_flt_lumi_eg);
   fChain->SetBranchAddress("Flt_et", &Flt_et, &b_flt_et);
   fChain->SetBranchAddress("Flt_emiss", &Flt_emiss, &b_flt_emiss);
   fChain->SetBranchAddress("Flt_fcal_ebp", &Flt_fcal_ebp, &b_flt_fcal_ebp);
   fChain->SetBranchAddress("Flt_fcal_oebp", &Flt_fcal_oebp, &b_flt_fcal_oebp);
   fChain->SetBranchAddress("Flt_risoe", &Flt_risoe, &b_flt_risoe);
   fChain->SetBranchAddress("Flt_risoe4", &Flt_risoe4, &b_flt_risoe4);
   fChain->SetBranchAddress("Flt_risoe5", &Flt_risoe5, &b_flt_risoe5);
   fChain->SetBranchAddress("Flt_risoe6", &Flt_risoe6, &b_flt_risoe6);
   fChain->SetBranchAddress("Flt_risoe7", &Flt_risoe7, &b_flt_risoe7);
   fChain->SetBranchAddress("Flt_bisoe", &Flt_bisoe, &b_flt_bisoe);
   fChain->SetBranchAddress("Flt_fisoe", &Flt_fisoe, &b_flt_fisoe);
   fChain->SetBranchAddress("Flt_gtrk", &Flt_gtrk, &b_flt_gtrk);
   fChain->SetBranchAddress("Flt_trk_vmult", &Flt_trk_vmult, &b_flt_trk_vmult);
   fChain->SetBranchAddress("Slt_et", &Slt_et, &b_slt_et);
   fChain->SetBranchAddress("Slt_et_1ir", &Slt_et_1ir, &b_slt_et_1ir);
   fChain->SetBranchAddress("Slt_et_2ir", &Slt_et_2ir, &b_slt_et_2ir);
   fChain->SetBranchAddress("Slt_emnpz", &Slt_emnpz, &b_slt_emnpz);
   fChain->SetBranchAddress("Slt_pzove", &Slt_pzove, &b_slt_pzove);
   fChain->SetBranchAddress("Slt_vtx_z", &Slt_vtx_z, &b_slt_vtx_z);
   fChain->SetBranchAddress("Slt_slf", &Slt_slf, &b_slt_slf);
   fChain->SetBranchAddress("Slt_slu", &Slt_slu, &b_slt_slu);
   fChain->SetBranchAddress("Slt_pt12", &Slt_pt12, &b_slt_pt12);
   fChain->SetBranchAddress("Slt_etotfcal", &Slt_etotfcal, &b_slt_etotfcal);
   fChain->SetBranchAddress("Slt_etotbcal", &Slt_etotbcal, &b_slt_etotbcal);
   fChain->SetBranchAddress("Slt_etotrcal", &Slt_etotrcal, &b_slt_etotrcal);
   fChain->SetBranchAddress("Slt_etotemc", &Slt_etotemc, &b_slt_etotemc);
   fChain->SetBranchAddress("Slt_etransemc", &Slt_etransemc, &b_slt_etransemc);
   fChain->SetBranchAddress("Slt_pxemc", &Slt_pxemc, &b_slt_pxemc);
   fChain->SetBranchAddress("Slt_pyemc", &Slt_pyemc, &b_slt_pyemc);
   fChain->SetBranchAddress("Slt_pzemc", &Slt_pzemc, &b_slt_pzemc);
   fChain->SetBranchAddress("Slt_etothac", &Slt_etothac, &b_slt_etothac);
   fChain->SetBranchAddress("Slt_etranshac", &Slt_etranshac, &b_slt_etranshac);
   fChain->SetBranchAddress("Slt_pxhac", &Slt_pxhac, &b_slt_pxhac);
   fChain->SetBranchAddress("Slt_pyhac", &Slt_pyhac, &b_slt_pyhac);
   fChain->SetBranchAddress("Slt_pzhac", &Slt_pzhac, &b_slt_pzhac);
   fChain->SetBranchAddress("Slt_etot", &Slt_etot, &b_slt_etot);
   fChain->SetBranchAddress("Slt_etmis", &Slt_etmis, &b_slt_etmis);
   fChain->SetBranchAddress("Slt_pxbp", &Slt_pxbp, &b_slt_pxbp);
   fChain->SetBranchAddress("Slt_pybp", &Slt_pybp, &b_slt_pybp);
   fChain->SetBranchAddress("Slt_etmbp", &Slt_etmbp, &b_slt_etmbp);
   fChain->SetBranchAddress("Slt_ebp", &Slt_ebp, &b_slt_ebp);
   fChain->SetBranchAddress("Slt_eremc", &Slt_eremc, &b_slt_eremc);
   fChain->SetBranchAddress("Slt_erhac", &Slt_erhac, &b_slt_erhac);
   fChain->SetBranchAddress("Slt_ebemc", &Slt_ebemc, &b_slt_ebemc);
   fChain->SetBranchAddress("Slt_ebhac", &Slt_ebhac, &b_slt_ebhac);
   fChain->SetBranchAddress("Slt_efemc", &Slt_efemc, &b_slt_efemc);
   fChain->SetBranchAddress("Slt_efhac", &Slt_efhac, &b_slt_efhac);
   fChain->SetBranchAddress("Slt_etfbp", &Slt_etfbp, &b_slt_etfbp);
   fChain->SetBranchAddress("Slt_btime", &Slt_btime, &b_slt_btime);
   fChain->SetBranchAddress("Slt_gtime", &Slt_gtime, &b_slt_gtime);
   fChain->SetBranchAddress("Slt_gnpmt", &Slt_gnpmt, &b_slt_gnpmt);
   fChain->SetBranchAddress("Slt_bnpmt", &Slt_bnpmt, &b_slt_bnpmt);
   fChain->SetBranchAddress("Slt_noclus", &Slt_noclus, &b_slt_noclus);
   fChain->SetBranchAddress("Slt_eemcclus", &Slt_eemcclus, &b_slt_eemcclus);
   fChain->SetBranchAddress("Otrkclass", &Otrkclass, &b_oTRKclass);
   fChain->SetBranchAddress("Otrkmult", &Otrkmult, &b_oTRKmult);
   fChain->SetBranchAddress("Otrkvmult", &Otrkvmult, &b_oTRKvmult);
   fChain->SetBranchAddress("Bac_etot", &Bac_etot, &b_BAC_etot);
   fChain->SetBranchAddress("Bac_etot_o2r", &Bac_etot_o2r, &b_BAC_etot_o2r);
   fChain->SetBranchAddress("Bac_npad", &Bac_npad, &b_BAC_npad);
   fChain->SetBranchAddress("Bac_npad_o2r", &Bac_npad_o2r, &b_BAC_npad_o2r);
   fChain->SetBranchAddress("Bac_et", &Bac_et, &b_BAC_et);
   fChain->SetBranchAddress("Bac_px", &Bac_px, &b_BAC_px);
   fChain->SetBranchAddress("Bac_py", &Bac_py, &b_BAC_py);
   fChain->SetBranchAddress("Nbacmu", &Nbacmu, &b_NBACMU);
   fChain->SetBranchAddress("Mubac_xyz", Mubac_xyz, &b_Mubac_xyz);
   fChain->SetBranchAddress("Mubac_dxyz", Mubac_dxyz, &b_Mubac_dxyz);
   fChain->SetBranchAddress("Mubac_cos", Mubac_cos, &b_Mubac_cos);
   fChain->SetBranchAddress("Mubac_dcos", Mubac_dcos, &b_Mubac_dcos);
   fChain->SetBranchAddress("Mubac_eloss", Mubac_eloss, &b_Mubac_eloss);
   fChain->SetBranchAddress("Mubac_deloss", Mubac_deloss, &b_Mubac_deloss);
   fChain->SetBranchAddress("Mubac_unit", Mubac_unit, &b_Mubac_unit);
   fChain->SetBranchAddress("Mubac_dim", Mubac_dim, &b_Mubac_dim);
   fChain->SetBranchAddress("Mubac_quality", Mubac_quality, &b_Mubac_quality);
   fChain->SetBranchAddress("Ahit", Ahit, &b_Ahit);
   fChain->SetBranchAddress("Pad", Pad, &b_Pad);
   fChain->SetBranchAddress("Nbadpmt", &Nbadpmt, &b_nBadPMT);
   fChain->SetBranchAddress("Badcell", Badcell, &b_Badcell);
   fChain->SetBranchAddress("Badside", Badside, &b_Badside);
   fChain->SetBranchAddress("Ebefore", Ebefore, &b_Ebefore);
   fChain->SetBranchAddress("Eafter", Eafter, &b_Eafter);
   fChain->SetBranchAddress("Bitword", Bitword, &b_BITWORD);
   fChain->SetBranchAddress("Calib_idcalscheme", &Calib_idcalscheme, &b_calib_idcalscheme);
   fChain->SetBranchAddress("Ncaltru", &Ncaltru, &b_ncaltru);
   fChain->SetBranchAddress("Caltru_cellnr", Caltru_cellnr, &b_Caltru_cellnr);
   fChain->SetBranchAddress("Caltru_e", Caltru_e, &b_Caltru_e);
   fChain->SetBranchAddress("Caltru_imbal", Caltru_imbal, &b_Caltru_imbal);
   fChain->SetBranchAddress("Caltru_t", Caltru_t, &b_Caltru_t);
   fChain->SetBranchAddress("Caltru_id", Caltru_id, &b_Caltru_id);
   fChain->SetBranchAddress("Caltru_pos", Caltru_pos, &b_Caltru_pos);
   fChain->SetBranchAddress("Caltru_eoriginal", Caltru_eoriginal, &b_Caltru_eoriginal);
   fChain->SetBranchAddress("Cal_px", &Cal_px, &b_CAL_px);
   fChain->SetBranchAddress("Cal_py", &Cal_py, &b_CAL_py);
   fChain->SetBranchAddress("Cal_pz", &Cal_pz, &b_CAL_pz);
   fChain->SetBranchAddress("Cal_e", &Cal_e, &b_CAL_E);
   fChain->SetBranchAddress("Cal_et", &Cal_et, &b_CAL_Et);
   fChain->SetBranchAddress("Cal_empz", &Cal_empz, &b_CAL_Empz);
   fChain->SetBranchAddress("Cal_pt", &Cal_pt, &b_CAL_Pt);
   fChain->SetBranchAddress("Cal_phi", &Cal_phi, &b_CAL_phi);
   fChain->SetBranchAddress("Remc", Remc, &b_REmc);
   fChain->SetBranchAddress("Bemc", Bemc, &b_BEmc);
   fChain->SetBranchAddress("Femc", Femc, &b_FEmc);
   fChain->SetBranchAddress("Rhac", Rhac, &b_RHac);
   fChain->SetBranchAddress("Bhac", Bhac, &b_BHac);
   fChain->SetBranchAddress("Fhac", Fhac, &b_FHac);
   fChain->SetBranchAddress("Bhac2", Bhac2, &b_BHac2);
   fChain->SetBranchAddress("Fhac2", Fhac2, &b_FHac2);
   fChain->SetBranchAddress("Nfemc", &Nfemc, &b_NFEMC);
   fChain->SetBranchAddress("Nfhac1", &Nfhac1, &b_NFHAC1);
   fChain->SetBranchAddress("Nfhac2", &Nfhac2, &b_NFHAC2);
   fChain->SetBranchAddress("Nbemc", &Nbemc, &b_NBEMC);
   fChain->SetBranchAddress("Nbhac1", &Nbhac1, &b_NBHAC1);
   fChain->SetBranchAddress("Nbhac2", &Nbhac2, &b_NBHAC2);
   fChain->SetBranchAddress("Nremc", &Nremc, &b_NREMC);
   fChain->SetBranchAddress("Nrhac", &Nrhac, &b_NRHAC);
   fChain->SetBranchAddress("Cal_tf", &Cal_tf, &b_CAL_Tf);
   fChain->SetBranchAddress("Cal_tb", &Cal_tb, &b_CAL_Tb);
   fChain->SetBranchAddress("Cal_tr", &Cal_tr, &b_CAL_Tr);
   fChain->SetBranchAddress("Cal_tg", &Cal_tg, &b_CAL_Tg);
   fChain->SetBranchAddress("Cal_tu", &Cal_tu, &b_CAL_Tu);
   fChain->SetBranchAddress("Cal_td", &Cal_td, &b_CAL_Td);
   fChain->SetBranchAddress("Cal_tf_e", &Cal_tf_e, &b_CAL_Tf_E);
   fChain->SetBranchAddress("Cal_tb_e", &Cal_tb_e, &b_CAL_Tb_E);
   fChain->SetBranchAddress("Cal_tr_e", &Cal_tr_e, &b_CAL_Tr_E);
   fChain->SetBranchAddress("Cal_tg_e", &Cal_tg_e, &b_CAL_Tg_E);
   fChain->SetBranchAddress("Cal_tu_e", &Cal_tu_e, &b_CAL_Tu_E);
   fChain->SetBranchAddress("Cal_td_e", &Cal_td_e, &b_CAL_Td_E);
   fChain->SetBranchAddress("Cal_tf_n", &Cal_tf_n, &b_CAL_Tf_n);
   fChain->SetBranchAddress("Cal_tb_n", &Cal_tb_n, &b_CAL_Tb_n);
   fChain->SetBranchAddress("Cal_tr_n", &Cal_tr_n, &b_CAL_Tr_n);
   fChain->SetBranchAddress("Cal_tg_n", &Cal_tg_n, &b_CAL_Tg_n);
   fChain->SetBranchAddress("Cal_tu_n", &Cal_tu_n, &b_CAL_Tu_n);
   fChain->SetBranchAddress("Cal_td_n", &Cal_td_n, &b_CAL_Td_n);
   fChain->SetBranchAddress("Etamax_ce", &Etamax_ce, &b_Etamax_ce);
   fChain->SetBranchAddress("Etamax_ce4", &Etamax_ce4, &b_Etamax_ce4);
   fChain->SetBranchAddress("Cal_et10", &Cal_et10, &b_CAL_Et10);
   fChain->SetBranchAddress("Mtrknoe_pi", &Mtrknoe_pi, &b_Mtrknoe_pi);
   fChain->SetBranchAddress("Mtrknoe_k", &Mtrknoe_k, &b_Mtrknoe_K);
   fChain->SetBranchAddress("E_hk", &E_hk, &b_E_HK);
   fChain->SetBranchAddress("Unmen_pi", &Unmen_pi, &b_UnmEn_pi);
   fChain->SetBranchAddress("Unmen_k", &Unmen_k, &b_UnmEn_k);
   fChain->SetBranchAddress("Sparkf", &Sparkf, &b_SparkF);
   fChain->SetBranchAddress("Pex1ir", Pex1ir, &b_PEX1IR);
   fChain->SetBranchAddress("Et1ir", &Et1ir, &b_ET1IR);
   fChain->SetBranchAddress("Etex1ir", &Etex1ir, &b_ETEX1IR);
   fChain->SetBranchAddress("Pex2ir", Pex2ir, &b_PEX2IR);
   fChain->SetBranchAddress("Et2ir", &Et2ir, &b_ET2IR);
   fChain->SetBranchAddress("Etex2ir", &Etex2ir, &b_ETEX2IR);
   fChain->SetBranchAddress("F1rhac", &F1rhac, &b_F1RHAC);
   fChain->SetBranchAddress("F2rhac", &F2rhac, &b_F2RHAC);
   fChain->SetBranchAddress("Percir", Percir, &b_PERCIR);
   fChain->SetBranchAddress("Etrcir", &Etrcir, &b_ETRCIR);
   fChain->SetBranchAddress("Cc_had_0", Cc_had_0, &b_cc_Had_0);
   fChain->SetBranchAddress("Cc_gamma_0", &Cc_gamma_0, &b_cc_Gamma_0);
   fChain->SetBranchAddress("Cc_cehmom", Cc_cehmom, &b_cc_CeHMom);
   fChain->SetBranchAddress("Cc_zuhmom", Cc_zuhmom, &b_cc_ZuHMom);
   fChain->SetBranchAddress("Cc_cchmom", Cc_cchmom, &b_cc_CCHMom);
   fChain->SetBranchAddress("Cc_pt", &Cc_pt, &b_CC_Pt);
   fChain->SetBranchAddress("Cc_et", &Cc_et, &b_CC_Et);
   fChain->SetBranchAddress("Cc_empz", &Cc_empz, &b_CC_EmPz);
   fChain->SetBranchAddress("Cc_gamma", &Cc_gamma, &b_CC_gamma);
   fChain->SetBranchAddress("Cc_yjb", &Cc_yjb, &b_CC_yjb);
   fChain->SetBranchAddress("Cc_q2jb", &Cc_q2jb, &b_CC_Q2jb);
   fChain->SetBranchAddress("Cc_xjb", &Cc_xjb, &b_CC_xjb);
   fChain->SetBranchAddress("Cc_etamax", &Cc_etamax, &b_cc_ETAMAX);
   fChain->SetBranchAddress("Cc_eemc", &Cc_eemc, &b_cc_EEMC);
   fChain->SetBranchAddress("Cc_ehac1", &Cc_ehac1, &b_cc_EHAC1);
   fChain->SetBranchAddress("Cc_ehac2", &Cc_ehac2, &b_cc_EHAC2);
   fChain->SetBranchAddress("Cc_emaxco", &Cc_emaxco, &b_cc_EMAXCO);
   fChain->SetBranchAddress("Cc_nemc", &Cc_nemc, &b_cc_NEMC);
   fChain->SetBranchAddress("Cc_nhac1", &Cc_nhac1, &b_cc_NHAC1);
   fChain->SetBranchAddress("Cc_nhac2", &Cc_nhac2, &b_cc_NHAC2);
   fChain->SetBranchAddress("Cc_fclus_dt", &Cc_fclus_dt, &b_cc_FClus_dt);
   fChain->SetBranchAddress("Cc_fclus_dm", &Cc_fclus_dm, &b_cc_FClus_dm);
   fChain->SetBranchAddress("Cc_fclus_et", &Cc_fclus_et, &b_cc_FClus_Et);
   fChain->SetBranchAddress("Cc_fclus_e", &Cc_fclus_e, &b_cc_FClus_E);
   fChain->SetBranchAddress("Cc_rclus_asoe", &Cc_rclus_asoe, &b_cc_RClus_asoE);
   fChain->SetBranchAddress("Cc_vapvpcell", &Cc_vapvpcell, &b_cc_VapVpCELL);
   fChain->SetBranchAddress("Cc_vapvpzu", &Cc_vapvpzu, &b_cc_VapVpZU);
   fChain->SetBranchAddress("Cc_vapvpcac", &Cc_vapvpcac, &b_cc_VapVpCAC);
   fChain->SetBranchAddress("Ncell", &Ncell, &b_nCell);
   fChain->SetBranchAddress("Celllist", Celllist, &b_Celllist);
   fChain->SetBranchAddress("Emncand", &Emncand, &b_EmNcand);
   fChain->SetBranchAddress("Emerror", &Emerror, &b_EmError);
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
   fChain->SetBranchAddress("Emfemc", Emfemc, &b_Emfemc);
   fChain->SetBranchAddress("Emcalprob", Emcalprob, &b_Emcalprob);
   fChain->SetBranchAddress("Eminctd", Eminctd, &b_Eminctd);
   fChain->SetBranchAddress("Emnneartrk", Emnneartrk, &b_Emnneartrk);
   fChain->SetBranchAddress("Emetneartrk", Emetneartrk, &b_Emetneartrk);
   fChain->SetBranchAddress("Emtrkmatchi2", Emtrkmatchi2, &b_Emtrkmatchi2);
   fChain->SetBranchAddress("Emfmaxbemc", Emfmaxbemc, &b_Emfmaxbemc);
   fChain->SetBranchAddress("Emfmaxremc", Emfmaxremc, &b_Emfmaxremc);
   fChain->SetBranchAddress("Emfmaxfemc", Emfmaxfemc, &b_Emfmaxfemc);
   fChain->SetBranchAddress("Emdeltaz", Emdeltaz, &b_Emdeltaz);
   fChain->SetBranchAddress("Emdeltax", Emdeltax, &b_Emdeltax);
   fChain->SetBranchAddress("Emdeltay", Emdeltay, &b_Emdeltay);
   fChain->SetBranchAddress("Emx0", Emx0, &b_Emx0);
   fChain->SetBranchAddress("Emdmcorr", Emdmcorr, &b_Emdmcorr);
   fChain->SetBranchAddress("Emdmcorrcode", Emdmcorrcode, &b_Emdmcorrcode);
   fChain->SetBranchAddress("E5ncand", &E5ncand, &b_E5Ncand);
   fChain->SetBranchAddress("E5error", &E5error, &b_E5Error);
   fChain->SetBranchAddress("E5prob", E5prob, &b_E5prob);
   fChain->SetBranchAddress("E5pos", E5pos, &b_E5pos);
   fChain->SetBranchAddress("E5calpos", E5calpos, &b_E5calpos);
   fChain->SetBranchAddress("E5calene", E5calene, &b_E5calene);
   fChain->SetBranchAddress("E5ein", E5ein, &b_E5ein);
   fChain->SetBranchAddress("E5enin", E5enin, &b_E5enin);
   fChain->SetBranchAddress("E5ecorr", E5ecorr, &b_E5ecorr);
   fChain->SetBranchAddress("E5th", E5th, &b_E5th);
   fChain->SetBranchAddress("E5ph", E5ph, &b_E5ph);
   fChain->SetBranchAddress("E5pt", E5pt, &b_E5pt);
   fChain->SetBranchAddress("E5xdet", E5xdet, &b_E5xdet);
   fChain->SetBranchAddress("E5ydet", E5ydet, &b_E5ydet);
   fChain->SetBranchAddress("E5trknr", E5trknr, &b_E5trknr);
   fChain->SetBranchAddress("E5nrsl", E5nrsl, &b_E5nrsl);
   fChain->SetBranchAddress("E5dca", E5dca, &b_E5dca);
   fChain->SetBranchAddress("E5dcabeam", E5dcabeam, &b_E5dcabeam);
   fChain->SetBranchAddress("E5trkp", E5trkp, &b_E5trkp);
   fChain->SetBranchAddress("E5trkth", E5trkth, &b_E5trkth);
   fChain->SetBranchAddress("E5trkph", E5trkph, &b_E5trkph);
   fChain->SetBranchAddress("E5trkq", E5trkq, &b_E5trkq);
   fChain->SetBranchAddress("E5trkdme", E5trkdme, &b_E5trkdme);
   fChain->SetBranchAddress("E5trkdce", E5trkdce, &b_E5trkdce);
   fChain->SetBranchAddress("E5trkpos", E5trkpos, &b_E5trkpos);
   fChain->SetBranchAddress("E5srtf", E5srtf, &b_E5srtf);
   fChain->SetBranchAddress("E5srtquad", E5srtquad, &b_E5srtquad);
   fChain->SetBranchAddress("E5hesf", E5hesf, &b_E5hesf);
   fChain->SetBranchAddress("E5corrcode", E5corrcode, &b_E5corrcode);
   fChain->SetBranchAddress("E5srtpos", E5srtpos, &b_E5srtpos);
   fChain->SetBranchAddress("E5srtene", E5srtene, &b_E5srtene);
   fChain->SetBranchAddress("E5hespos", E5hespos, &b_E5hespos);
   fChain->SetBranchAddress("E5hesene", E5hesene, &b_E5hesene);
   fChain->SetBranchAddress("E5hesr", E5hesr, &b_E5hesr);
   fChain->SetBranchAddress("E5prsene", E5prsene, &b_E5prsene);
   fChain->SetBranchAddress("E5ccet", E5ccet, &b_E5ccet);
   fChain->SetBranchAddress("E5ccempz", E5ccempz, &b_E5ccempz);
   fChain->SetBranchAddress("E5etamax", E5etamax, &b_E5etamax);
   fChain->SetBranchAddress("E5cehmom", E5cehmom, &b_E5cehmom);
   fChain->SetBranchAddress("E5zuhmom", E5zuhmom, &b_E5zuhmom);
   fChain->SetBranchAddress("E5cchmom", E5cchmom, &b_E5cchmom);
   fChain->SetBranchAddress("E5xel", E5xel, &b_E5xel);
   fChain->SetBranchAddress("E5yel", E5yel, &b_E5yel);
   fChain->SetBranchAddress("E5q2el", E5q2el, &b_E5q2el);
   fChain->SetBranchAddress("E5xda", E5xda, &b_E5xda);
   fChain->SetBranchAddress("E5yda", E5yda, &b_E5yda);
   fChain->SetBranchAddress("E5q2da", E5q2da, &b_E5q2da);
   fChain->SetBranchAddress("E5xda_cell", E5xda_cell, &b_E5xda_cell);
   fChain->SetBranchAddress("E5yda_cell", E5yda_cell, &b_E5yda_cell);
   fChain->SetBranchAddress("E5q2da_cell", E5q2da_cell, &b_E5q2da_cell);
   fChain->SetBranchAddress("E5xjb", E5xjb, &b_E5xjb);
   fChain->SetBranchAddress("E5yjb", E5yjb, &b_E5yjb);
   fChain->SetBranchAddress("E5q2jb", E5q2jb, &b_E5q2jb);
   fChain->SetBranchAddress("E5xjb_cell", E5xjb_cell, &b_E5xjb_cell);
   fChain->SetBranchAddress("E5yjb_cell", E5yjb_cell, &b_E5yjb_cell);
   fChain->SetBranchAddress("E5q2jb_cell", E5q2jb_cell, &b_E5q2jb_cell);
   fChain->SetBranchAddress("E5femc", E5femc, &b_E5femc);
   fChain->SetBranchAddress("E5calprob", E5calprob, &b_E5calprob);
   fChain->SetBranchAddress("E5inctd", E5inctd, &b_E5inctd);
   fChain->SetBranchAddress("E5nneartrk", E5nneartrk, &b_E5nneartrk);
   fChain->SetBranchAddress("E5etneartrk", E5etneartrk, &b_E5etneartrk);
   fChain->SetBranchAddress("E5trkmatchi2", E5trkmatchi2, &b_E5trkmatchi2);
   fChain->SetBranchAddress("E5fmaxbemc", E5fmaxbemc, &b_E5fmaxbemc);
   fChain->SetBranchAddress("E5fmaxremc", E5fmaxremc, &b_E5fmaxremc);
   fChain->SetBranchAddress("E5fmaxfemc", E5fmaxfemc, &b_E5fmaxfemc);
   fChain->SetBranchAddress("E5deltaz", E5deltaz, &b_E5deltaz);
   fChain->SetBranchAddress("E5deltax", E5deltax, &b_E5deltax);
   fChain->SetBranchAddress("E5deltay", E5deltay, &b_E5deltay);
   fChain->SetBranchAddress("Fc_etot", &Fc_etot, &b_fc_etot);
   fChain->SetBranchAddress("Fc_pt", &Fc_pt, &b_fc_pt);
   fChain->SetBranchAddress("Fc_empz", &Fc_empz, &b_fc_empz);
   fChain->SetBranchAddress("Fc_proctime", &Fc_proctime, &b_fc_proctime);
   fChain->SetBranchAddress("Fcb_elec", &Fcb_elec, &b_fcb_elec);
   fChain->SetBranchAddress("Fcb_ptmis", &Fcb_ptmis, &b_fcb_ptmis);
   fChain->SetBranchAddress("Fcb_beamg", &Fcb_beamg, &b_fcb_beamg);
   fChain->SetBranchAddress("Fcb_empzlo", &Fcb_empzlo, &b_fcb_empzLo);
   fChain->SetBranchAddress("Fcb_empzhi", &Fcb_empzhi, &b_fcb_empzHi);
   fChain->SetBranchAddress("Fcb_etcl", &Fcb_etcl, &b_fcb_etcl);
   fChain->SetBranchAddress("Fcb_abort", &Fcb_abort, &b_fcb_abort);
   fChain->SetBranchAddress("Fcb_fltabort", &Fcb_fltabort, &b_fcb_fltabort);
   fChain->SetBranchAddress("Fcb_dump", &Fcb_dump, &b_fcb_dump);
   fChain->SetBranchAddress("Fce_dmp_abnd", &Fce_dmp_abnd, &b_fce_DMP_ABND);
   fChain->SetBranchAddress("Fce_fatalnotdone", &Fce_fatalnotdone, &b_fce_fatalNotdone);
   fChain->SetBranchAddress("Fce_toobig", &Fce_toobig, &b_fce_toobig);
   fChain->SetBranchAddress("Fce_incomplete", &Fce_incomplete, &b_fce_incomplete);
   fChain->SetBranchAddress("Fce_nofcfif2", &Fce_nofcfif2, &b_fce_nofcfif2);
   fChain->SetBranchAddress("O1fltfl", &O1fltfl, &b_o1fltFL);
   fChain->SetBranchAddress("Fltfc_valid", &Fltfc_valid, &b_fltfc_valid);
   fChain->SetBranchAddress("Fltfc_fcerror", &Fltfc_fcerror, &b_fltfc_fcError);
   fChain->SetBranchAddress("Fltfc_fcbusy", &Fltfc_fcbusy, &b_fltfc_fcBusy);
   fChain->SetBranchAddress("Fltfc_fcabortcond", &Fltfc_fcabortcond, &b_fltfc_fcAbortCond);
   fChain->SetBranchAddress("Flttesttype", &Flttesttype, &b_fltTestType);
   fChain->SetBranchAddress("Fltrotyp", &Fltrotyp, &b_fltRoTyp);
   fChain->SetBranchAddress("Fltbunchambig", &Fltbunchambig, &b_fltBunchAmbig);
   fChain->SetBranchAddress("Fltbcn", &Fltbcn, &b_fltBCN);
   fChain->SetBranchAddress("Fc_wc_t", &Fc_wc_t, &b_fc_wc_t);
   fChain->SetBranchAddress("Fc_wc_f", &Fc_wc_f, &b_fc_wc_f);
   fChain->SetBranchAddress("Fc_wc_b", &Fc_wc_b, &b_fc_wc_b);
   fChain->SetBranchAddress("Fc_wc_r", &Fc_wc_r, &b_fc_wc_r);
   fChain->SetBranchAddress("Fltfc_elec", &Fltfc_elec, &b_fltfc_elec);
   fChain->SetBranchAddress("Fltfc_ptmis", &Fltfc_ptmis, &b_fltfc_ptmis);
   fChain->SetBranchAddress("Fltfc_beamg", &Fltfc_beamg, &b_fltfc_beamg);
   fChain->SetBranchAddress("Fltfc_empzlo", &Fltfc_empzlo, &b_fltfc_empzlo);
   fChain->SetBranchAddress("Fltfc_empzhi", &Fltfc_empzhi, &b_fltfc_empzhi);
   fChain->SetBranchAddress("Fltfc_etcl", &Fltfc_etcl, &b_fltfc_etcl);
   fChain->SetBranchAddress("Fltfc_abort", &Fltfc_abort, &b_fltfc_abort);
   fChain->SetBranchAddress("Fltfc_fltabort", &Fltfc_fltabort, &b_fltfc_fltabort);
   fChain->SetBranchAddress("Fc_readstat_t", &Fc_readstat_t, &b_fc_readstat_t);
   fChain->SetBranchAddress("Fc_readstat_f", &Fc_readstat_f, &b_fc_readstat_f);
   fChain->SetBranchAddress("Fc_readstat_b", &Fc_readstat_b, &b_fc_readstat_b);
   fChain->SetBranchAddress("Fc_readstat_r", &Fc_readstat_r, &b_fc_readstat_r);
   fChain->SetBranchAddress("Fc_unknaddr_t", &Fc_unknaddr_t, &b_fc_unknaddr_t);
   fChain->SetBranchAddress("Fc_unknaddr_f", &Fc_unknaddr_f, &b_fc_unknaddr_f);
   fChain->SetBranchAddress("Fc_unknaddr_b", &Fc_unknaddr_b, &b_fc_unknaddr_b);
   fChain->SetBranchAddress("Fc_unknaddr_r", &Fc_unknaddr_r, &b_fc_unknaddr_r);
   fChain->SetBranchAddress("Fc_sa_t", &Fc_sa_t, &b_fc_sa_t);
   fChain->SetBranchAddress("Fc_sa_f", &Fc_sa_f, &b_fc_sa_f);
   fChain->SetBranchAddress("Fc_sa_b", &Fc_sa_b, &b_fc_sa_b);
   fChain->SetBranchAddress("Fc_sa_r", &Fc_sa_r, &b_fc_sa_r);
   fChain->SetBranchAddress("Nmu", &Nmu, &b_Nmu);
   fChain->SetBranchAddress("Muqual", Muqual, &b_Muqual);
   fChain->SetBranchAddress("Mucharge", Mucharge, &b_Mucharge);
   fChain->SetBranchAddress("Mupt", Mupt, &b_Mupt);
   fChain->SetBranchAddress("Muth", Muth, &b_Muth);
   fChain->SetBranchAddress("Muph", Muph, &b_Muph);
   fChain->SetBranchAddress("Mup", Mup, &b_Mup);
   fChain->SetBranchAddress("Muperr", Muperr, &b_Muperr);
   fChain->SetBranchAddress("Mutrfl", Mutrfl, &b_Mutrfl);
   fChain->SetBranchAddress("Mutrid", Mutrid, &b_Mutrid);
   fChain->SetBranchAddress("Muvcid", Muvcid, &b_Muvcid);
   fChain->SetBranchAddress("Muztid", Muztid, &b_Muztid);
   fChain->SetBranchAddress("Mustid", Mustid, &b_Mustid);
   fChain->SetBranchAddress("Muvtxfl", Muvtxfl, &b_Muvtxfl);
   fChain->SetBranchAddress("Muvtxid", Muvtxid, &b_Muvtxid);
   fChain->SetBranchAddress("Muglomu", Muglomu, &b_Muglomu);
   fChain->SetBranchAddress("Mubremat", Mubremat, &b_Mubremat);
   fChain->SetBranchAddress("Mubacmat", Mubacmat, &b_Mubacmat);
   fChain->SetBranchAddress("Mumubac", Mumubac, &b_Mumubac);
   fChain->SetBranchAddress("Mumamma", Mumamma, &b_Mumamma);
   fChain->SetBranchAddress("Mumpmat", Mumpmat, &b_Mumpmat);
   fChain->SetBranchAddress("Mumufo", Mumufo, &b_Mumufo);
   fChain->SetBranchAddress("Mumip", Mumip, &b_Mumip);
   fChain->SetBranchAddress("Mumv", Mumv, &b_Mumv);
   fChain->SetBranchAddress("Mucalfl", Mucalfl, &b_Mucalfl);
   fChain->SetBranchAddress("Mucalene", Mucalene, &b_Mucalene);
   fChain->SetBranchAddress("Muhac2", Muhac2, &b_Muhac2);
   fChain->SetBranchAddress("Muzufid", Muzufid, &b_Muzufid);
   fChain->SetBranchAddress("Mupmip", Mupmip, &b_Mupmip);
   fChain->SetBranchAddress("Muhene", Muhene, &b_Muhene);
   fChain->SetBranchAddress("Mutime", Mutime, &b_Mutime);
   fChain->SetBranchAddress("Muchfl", Muchfl, &b_Muchfl);
   fChain->SetBranchAddress("Muchid", Muchid, &b_Muchid);
   fChain->SetBranchAddress("Mupmat", Mupmat, &b_Mupmat);
   fChain->SetBranchAddress("Mundof", Mundof, &b_Mundof);
   fChain->SetBranchAddress("Munphi", Munphi, &b_Munphi);
   fChain->SetBranchAddress("Muz", Muz, &b_Muz);
   fChain->SetBranchAddress("Muprec", Muprec, &b_Muprec);
   fChain->SetBranchAddress("Mubmchi2", Mubmchi2, &b_Mubmchi2);
   fChain->SetBranchAddress("Mubmbac", Mubmbac, &b_Mubmbac);
   fChain->SetBranchAddress("Mubacdca", Mubacdca, &b_Mubacdca);
   fChain->SetBranchAddress("Mubacdimq", Mubacdimq, &b_Mubacdimq);
   fChain->SetBranchAddress("Mudxy", Mudxy, &b_Mudxy);
   fChain->SetBranchAddress("Mudz", Mudz, &b_Mudz);
   fChain->SetBranchAddress("Muisol", Muisol, &b_Muisol);
   fChain->SetBranchAddress("Munis", Munis, &b_Munis);
   fChain->SetBranchAddress("Muisdrmip", Muisdrmip, &b_Muisdrmip);
   fChain->SetBranchAddress("Muisetmip", Muisetmip, &b_Muisetmip);
   fChain->SetBranchAddress("Muistumip", Muistumip, &b_Muistumip);
   fChain->SetBranchAddress("Mujetfl_a", Mujetfl_a, &b_Mujetfl_a);
   fChain->SetBranchAddress("Mujetid_a", Mujetid_a, &b_Mujetid_a);
   fChain->SetBranchAddress("Mujetdr_a", Mujetdr_a, &b_Mujetdr_a);
   fChain->SetBranchAddress("Mujetpt_a", Mujetpt_a, &b_Mujetpt_a);
   fChain->SetBranchAddress("Mujetdr2_a", Mujetdr2_a, &b_Mujetdr2_a);
   fChain->SetBranchAddress("Mujetpt2_a", Mujetpt2_a, &b_Mujetpt2_a);
   fChain->SetBranchAddress("Muhjet_id", Muhjet_id, &b_Muhjet_id);
   fChain->SetBranchAddress("Mujetfl_b", Mujetfl_b, &b_Mujetfl_b);
   fChain->SetBranchAddress("Mujetid_b", Mujetid_b, &b_Mujetid_b);
   fChain->SetBranchAddress("Mujetdr_b", Mujetdr_b, &b_Mujetdr_b);
   fChain->SetBranchAddress("Mujetpt_b", Mujetpt_b, &b_Mujetpt_b);
   fChain->SetBranchAddress("Mujetdr2_b", Mujetdr2_b, &b_Mujetdr2_b);
   fChain->SetBranchAddress("Mujetpt2_b", Mujetpt2_b, &b_Mujetpt2_b);
   fChain->SetBranchAddress("Mujetfl_c", Mujetfl_c, &b_Mujetfl_c);
   fChain->SetBranchAddress("Mujetid_c", Mujetid_c, &b_Mujetid_c);
   fChain->SetBranchAddress("Mujetdr_c", Mujetdr_c, &b_Mujetdr_c);
   fChain->SetBranchAddress("Mujetpt_c", Mujetpt_c, &b_Mujetpt_c);
   fChain->SetBranchAddress("Mujetdr2_c", Mujetdr2_c, &b_Mujetdr2_c);
   fChain->SetBranchAddress("Mujetpt2_c", Mujetpt2_c, &b_Mujetpt2_c);
   fChain->SetBranchAddress("Mujetfl_d", Mujetfl_d, &b_Mujetfl_d);
   fChain->SetBranchAddress("Mujetid_d", Mujetid_d, &b_Mujetid_d);
   fChain->SetBranchAddress("Mujetdr_d", Mujetdr_d, &b_Mujetdr_d);
   fChain->SetBranchAddress("Mujetpt_d", Mujetpt_d, &b_Mujetpt_d);
   fChain->SetBranchAddress("Mujetdr2_d", Mujetdr2_d, &b_Mujetdr2_d);
   fChain->SetBranchAddress("Mujetpt2_d", Mujetpt2_d, &b_Mujetpt2_d);
   fChain->SetBranchAddress("Bm_n", &Bm_n, &b_Bm_n);
   fChain->SetBranchAddress("Bm_idvc", Bm_idvc, &b_Bm_idvc);
   fChain->SetBranchAddress("Bm_idmubac", Bm_idmubac, &b_Bm_idmubac);
   fChain->SetBranchAddress("Bm_istop", Bm_istop, &b_Bm_istop);
   fChain->SetBranchAddress("Bm_error", Bm_error, &b_Bm_error);
   fChain->SetBranchAddress("Bm_readout", Bm_readout, &b_Bm_readout);
   fChain->SetBranchAddress("Bm_x", Bm_x, &b_Bm_x);
   fChain->SetBranchAddress("Bm_p", Bm_p, &b_Bm_p);
   fChain->SetBranchAddress("Bm_chi2", Bm_chi2, &b_Bm_chi2);
   fChain->SetBranchAddress("Bm_dca", Bm_dca, &b_Bm_dca);
   fChain->SetBranchAddress("Bm_gcov", Bm_gcov, &b_Bm_gcov);
   fChain->SetBranchAddress("Bm_fcov", Bm_fcov, &b_Bm_fcov);
   fChain->SetBranchAddress("Bm_resloc", Bm_resloc, &b_Bm_resloc);
   fChain->SetBranchAddress("Bm_prob", Bm_prob, &b_Bm_prob);
   fChain->SetBranchAddress("Bm_zpen", Bm_zpen, &b_Bm_zpen);
   fChain->SetBranchAddress("Bm_dlh", Bm_dlh, &b_Bm_dlh);
   fChain->SetBranchAddress("Bm_mubac_n", &Bm_mubac_n, &b_Bm_mubac_n);
   fChain->SetBranchAddress("Bm_mubac_hit", Bm_mubac_hit, &b_Bm_mubac_hit);
   fChain->SetBranchAddress("Bm_mubac_pad", Bm_mubac_pad, &b_Bm_mubac_pad);
   fChain->SetBranchAddress("Bm_mubac_unit", Bm_mubac_unit, &b_Bm_mubac_unit);
   fChain->SetBranchAddress("Bm_mubac_hp1", Bm_mubac_hp1, &b_Bm_mubac_hp1);
   fChain->SetBranchAddress("Bm_mubac_hp2", Bm_mubac_hp2, &b_Bm_mubac_hp2);
   fChain->SetBranchAddress("Bm_mubac_xyz", Bm_mubac_xyz, &b_Bm_mubac_xyz);
   fChain->SetBranchAddress("Bm_mubac_dxyz", Bm_mubac_dxyz, &b_Bm_mubac_dxyz);
   fChain->SetBranchAddress("Bm_mubac_cos", Bm_mubac_cos, &b_Bm_mubac_cos);
   fChain->SetBranchAddress("Bm_mubac_plf", Bm_mubac_plf, &b_Bm_mubac_plf);
   fChain->SetBranchAddress("Et_maxisl", &Et_maxisl, &b_Et_maxIsl);
   fChain->SetBranchAddress("Ptmhietcell", &Ptmhietcell, &b_PtmHiEtCell);
   fChain->SetBranchAddress("Pt_mimbal", &Pt_mimbal, &b_Pt_mimbal);
   fChain->SetBranchAddress("Hietcell_type", &Hietcell_type, &b_HiEtCell_Type);
   fChain->SetBranchAddress("Hietcell_nr", &Hietcell_nr, &b_HiEtCell_Nr);
   fChain->SetBranchAddress("Hietcell_px", &Hietcell_px, &b_HiEtCell_Px);
   fChain->SetBranchAddress("Hietcell_py", &Hietcell_py, &b_HiEtCell_Py);
   fChain->SetBranchAddress("Hietcell_pz", &Hietcell_pz, &b_HiEtCell_Pz);
   fChain->SetBranchAddress("Hietcell_et", &Hietcell_et, &b_HiEtCell_Et);
   fChain->SetBranchAddress("Hietcell_imbal", &Hietcell_imbal, &b_HiEtCell_imbal);
   fChain->SetBranchAddress("Hietcell_e", &Hietcell_e, &b_HiEtCell_E);
   fChain->SetBranchAddress("Kt_njet_a", &Kt_njet_a, &b_KT_NJET_A);
   fChain->SetBranchAddress("Kt_etjet_a", Kt_etjet_a, &b_Kt_etjet_a);
   fChain->SetBranchAddress("Kt_etajet_a", Kt_etajet_a, &b_Kt_etajet_a);
   fChain->SetBranchAddress("Kt_phijet_a", Kt_phijet_a, &b_Kt_phijet_a);
   fChain->SetBranchAddress("Kt_masjet_a", Kt_masjet_a, &b_Kt_masjet_a);
   fChain->SetBranchAddress("Kt_njet_b", &Kt_njet_b, &b_KT_NJET_B);
   fChain->SetBranchAddress("Kt_etjet_b", Kt_etjet_b, &b_Kt_etjet_b);
   fChain->SetBranchAddress("Kt_etajet_b", Kt_etajet_b, &b_Kt_etajet_b);
   fChain->SetBranchAddress("Kt_phijet_b", Kt_phijet_b, &b_Kt_phijet_b);
   fChain->SetBranchAddress("Kt_masjet_b", Kt_masjet_b, &b_Kt_masjet_b);
   fChain->SetBranchAddress("Kt_bst_b", Kt_bst_b, &b_KT_BST_B);
   fChain->SetBranchAddress("Kt_njet_c", &Kt_njet_c, &b_KT_NJET_C);
   fChain->SetBranchAddress("Kt_etjet_c", Kt_etjet_c, &b_Kt_etjet_c);
   fChain->SetBranchAddress("Kt_etajet_c", Kt_etajet_c, &b_Kt_etajet_c);
   fChain->SetBranchAddress("Kt_phijet_c", Kt_phijet_c, &b_Kt_phijet_c);
   fChain->SetBranchAddress("Kt_masjet_c", Kt_masjet_c, &b_Kt_masjet_c);
   fChain->SetBranchAddress("Kt_bst_c", Kt_bst_c, &b_KT_BST_C);
   fChain->SetBranchAddress("Kt_njet_d", &Kt_njet_d, &b_KT_NJET_D);
   fChain->SetBranchAddress("Kt_etjet_d", Kt_etjet_d, &b_Kt_etjet_d);
   fChain->SetBranchAddress("Kt_etajet_d", Kt_etajet_d, &b_Kt_etajet_d);
   fChain->SetBranchAddress("Kt_phijet_d", Kt_phijet_d, &b_Kt_phijet_d);
   fChain->SetBranchAddress("Kt_masjet_d", Kt_masjet_d, &b_Kt_masjet_d);
   fChain->SetBranchAddress("Kt_bst_d", Kt_bst_d, &b_KT_BST_D);
   fChain->SetBranchAddress("Kt_njet_e", &Kt_njet_e, &b_KT_NJET_E);
   fChain->SetBranchAddress("Kt_etjet_e", Kt_etjet_e, &b_Kt_etjet_e);
   fChain->SetBranchAddress("Kt_etajet_e", Kt_etajet_e, &b_Kt_etajet_e);
   fChain->SetBranchAddress("Kt_phijet_e", Kt_phijet_e, &b_Kt_phijet_e);
   fChain->SetBranchAddress("Kt_bst_e", Kt_bst_e, &b_KT_BST_E);
   fChain->SetBranchAddress("Kt_njet_f", &Kt_njet_f, &b_KT_NJET_F);
   fChain->SetBranchAddress("Kt_etjet_f", Kt_etjet_f, &b_Kt_etjet_f);
   fChain->SetBranchAddress("Kt_etajet_f", Kt_etajet_f, &b_Kt_etajet_f);
   fChain->SetBranchAddress("Kt_phijet_f", Kt_phijet_f, &b_Kt_phijet_f);
   fChain->SetBranchAddress("Kt_bst_f", Kt_bst_f, &b_KT_BST_F);
   fChain->SetBranchAddress("Kt_njet_g", &Kt_njet_g, &b_KT_NJET_G);
   fChain->SetBranchAddress("Kt_etjet_g", Kt_etjet_g, &b_Kt_etjet_g);
   fChain->SetBranchAddress("Kt_etajet_g", Kt_etajet_g, &b_Kt_etajet_g);
   fChain->SetBranchAddress("Kt_phijet_g", Kt_phijet_g, &b_Kt_phijet_g);
   fChain->SetBranchAddress("Kt_bst_g", Kt_bst_g, &b_KT_BST_G);
   fChain->SetBranchAddress("Kt_njet_h", &Kt_njet_h, &b_KT_NJET_H);
   fChain->SetBranchAddress("Kt_etjet_h", Kt_etjet_h, &b_Kt_etjet_h);
   fChain->SetBranchAddress("Kt_etajet_h", Kt_etajet_h, &b_Kt_etajet_h);
   fChain->SetBranchAddress("Kt_phijet_h", Kt_phijet_h, &b_Kt_phijet_h);
   fChain->SetBranchAddress("Kt_bst_h", Kt_bst_h, &b_KT_BST_H);
   fChain->SetBranchAddress("Kt_njet_i", &Kt_njet_i, &b_KT_NJET_I);
   fChain->SetBranchAddress("Kt_etjet_i", Kt_etjet_i, &b_Kt_etjet_i);
   fChain->SetBranchAddress("Kt_etajet_i", Kt_etajet_i, &b_Kt_etajet_i);
   fChain->SetBranchAddress("Kt_phijet_i", Kt_phijet_i, &b_Kt_phijet_i);
   fChain->SetBranchAddress("Kt_njet_j", &Kt_njet_j, &b_KT_NJET_J);
   fChain->SetBranchAddress("Kt_etjet_j", Kt_etjet_j, &b_Kt_etjet_j);
   fChain->SetBranchAddress("Kt_etajet_j", Kt_etajet_j, &b_Kt_etajet_j);
   fChain->SetBranchAddress("Kt_phijet_j", Kt_phijet_j, &b_Kt_phijet_j);
   fChain->SetBranchAddress("Kt_njet_k", &Kt_njet_k, &b_KT_NJET_K);
   fChain->SetBranchAddress("Kt_etjet_k", Kt_etjet_k, &b_Kt_etjet_k);
   fChain->SetBranchAddress("Kt_etajet_k", Kt_etajet_k, &b_Kt_etajet_k);
   fChain->SetBranchAddress("Kt_phijet_k", Kt_phijet_k, &b_Kt_phijet_k);
   fChain->SetBranchAddress("Kt_bst_k", Kt_bst_k, &b_KT_BST_K);
   fChain->SetBranchAddress("Kt_njet_l", &Kt_njet_l, &b_KT_NJET_L);
   fChain->SetBranchAddress("Kt_etjet_l", Kt_etjet_l, &b_Kt_etjet_l);
   fChain->SetBranchAddress("Kt_etajet_l", Kt_etajet_l, &b_Kt_etajet_l);
   fChain->SetBranchAddress("Kt_phijet_l", Kt_phijet_l, &b_Kt_phijet_l);
   fChain->SetBranchAddress("Kt_bst_l", Kt_bst_l, &b_KT_BST_L);
   fChain->SetBranchAddress("Cone_njet", &Cone_njet, &b_CONE_NJET);
   fChain->SetBranchAddress("Cone_etjet", Cone_etjet, &b_Cone_etjet);
   fChain->SetBranchAddress("Cone_etajet", Cone_etajet, &b_Cone_etajet);
   fChain->SetBranchAddress("Cone_phijet", Cone_phijet, &b_Cone_phijet);
   fChain->SetBranchAddress("Elumie", &Elumie, &b_ELumie);
   fChain->SetBranchAddress("Xlumie", &Xlumie, &b_XLumie);
   fChain->SetBranchAddress("Ylumie", &Ylumie, &b_YLumie);
   fChain->SetBranchAddress("Elumig", &Elumig, &b_ELumig);
   fChain->SetBranchAddress("Xlumig", &Xlumig, &b_XLumig);
   fChain->SetBranchAddress("Ylumig", &Ylumig, &b_YLumig);
   fChain->SetBranchAddress("E_pcal", &E_pcal, &b_E_pcal);
   fChain->SetBranchAddress("E_pcal_aero", &E_pcal_aero, &b_E_pcal_aero);
   fChain->SetBranchAddress("Raw_aero1", &Raw_aero1, &b_Raw_aero1);
   fChain->SetBranchAddress("Raw_aero2", &Raw_aero2, &b_Raw_aero2);
   fChain->SetBranchAddress("Raw_pcal", &Raw_pcal, &b_Raw_pcal);
   fChain->SetBranchAddress("I_lepton", &I_lepton, &b_I_lepton);
   fChain->SetBranchAddress("I_proton", &I_proton, &b_I_proton);
   fChain->SetBranchAddress("Sincand", &Sincand, &b_SiNcand);
   fChain->SetBranchAddress("Sierror", &Sierror, &b_SiError);
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
   fChain->SetBranchAddress("Six0", Six0, &b_Six0);
   fChain->SetBranchAddress("Sidmcorr", Sidmcorr, &b_Sidmcorr);
   fChain->SetBranchAddress("Sidmcorrcode", Sidmcorrcode, &b_Sidmcorrcode);
   fChain->SetBranchAddress("Siuvf_ncand", &Siuvf_ncand, &b_siuvf_ncand);
   fChain->SetBranchAddress("Siuvf_charge", Siuvf_charge, &b_Siuvf_charge);
   fChain->SetBranchAddress("Siuvf_result", Siuvf_result, &b_Siuvf_result);
   fChain->SetBranchAddress("Siuvf_nmvd", Siuvf_nmvd, &b_Siuvf_nmvd);
   fChain->SetBranchAddress("Siuvf_nmvdhit", Siuvf_nmvdhit, &b_Siuvf_nmvdhit);
   fChain->SetBranchAddress("Siuvf_nctd", Siuvf_nctd, &b_Siuvf_nctd);
   fChain->SetBranchAddress("Siuvf_nctdhit", Siuvf_nctdhit, &b_Siuvf_nctdhit);
   fChain->SetBranchAddress("Nbpchn", &Nbpchn, &b_nBPchn);
   fChain->SetBranchAddress("Bpmip", Bpmip, &b_Bpmip);
   fChain->SetBranchAddress("Bpxyz", Bpxyz, &b_Bpxyz);
   fChain->SetBranchAddress("Bptim", Bptim, &b_Bptim);
   fChain->SetBranchAddress("Tsu_halo", &Tsu_halo, &b_tsu_halo);
   fChain->SetBranchAddress("Nv0lite", &Nv0lite, &b_nv0lite);
   fChain->SetBranchAddress("Tsecvtx", Tsecvtx, &b_Tsecvtx);
   fChain->SetBranchAddress("Tsecvtx_chi", Tsecvtx_chi, &b_Tsecvtx_chi);
   fChain->SetBranchAddress("Tsecvtx_dca", Tsecvtx_dca, &b_Tsecvtx_dca);
   fChain->SetBranchAddress("Tsecvtx_collin2", Tsecvtx_collin2, &b_Tsecvtx_collin2);
   fChain->SetBranchAddress("Tsecvtx_collin3", Tsecvtx_collin3, &b_Tsecvtx_collin3);
   fChain->SetBranchAddress("Tsecvtx_dlen2", Tsecvtx_dlen2, &b_Tsecvtx_dlen2);
   fChain->SetBranchAddress("Tsecvtx_dlen3", Tsecvtx_dlen3, &b_Tsecvtx_dlen3);
   fChain->SetBranchAddress("Tq1", Tq1, &b_Tq1);
   fChain->SetBranchAddress("Tq2", Tq2, &b_Tq2);
   fChain->SetBranchAddress("Tt1_layinn", Tt1_layinn, &b_Tt1_layinn);
   fChain->SetBranchAddress("Tt1_layout", Tt1_layout, &b_Tt1_layout);
   fChain->SetBranchAddress("Tt2_layinn", Tt2_layinn, &b_Tt2_layinn);
   fChain->SetBranchAddress("Tt2_layout", Tt2_layout, &b_Tt2_layout);
   fChain->SetBranchAddress("Tt1_id", Tt1_id, &b_Tt1_id);
   fChain->SetBranchAddress("Tt2_id", Tt2_id, &b_Tt2_id);
   fChain->SetBranchAddress("Tstt1", Tstt1, &b_Tstt1);
   fChain->SetBranchAddress("Tstt2", Tstt2, &b_Tstt2);
   fChain->SetBranchAddress("Tmindca", Tmindca, &b_Tmindca);
   fChain->SetBranchAddress("Tt1_ndof", Tt1_ndof, &b_Tt1_ndof);
   fChain->SetBranchAddress("Tt2_ndof", Tt2_ndof, &b_Tt2_ndof);
   fChain->SetBranchAddress("Tp1", Tp1, &b_Tp1);
   fChain->SetBranchAddress("Tp2", Tp2, &b_Tp2);
   fChain->SetBranchAddress("Tpk", Tpk, &b_Tpk);
   fChain->SetBranchAddress("Tinvmass_lambda", Tinvmass_lambda, &b_Tinvmass_lambda);
   fChain->SetBranchAddress("Tinvmass_alambda", Tinvmass_alambda, &b_Tinvmass_alambda);
   fChain->SetBranchAddress("Tinvmass_k0", Tinvmass_k0, &b_Tinvmass_k0);
   fChain->SetBranchAddress("Tinvmass_ee", Tinvmass_ee, &b_Tinvmass_ee);
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
   fChain->SetBranchAddress("Phi_tr", &Phi_tr, &b_phi_tr);
   fChain->SetBranchAddress("Zvtx_fcal", &Zvtx_fcal, &b_zvtx_fcal);
   fChain->SetBranchAddress("Fcal_nrgoodcells", &Fcal_nrgoodcells, &b_fcal_NrGoodCells);
   fChain->SetBranchAddress("Fcal_vzerr", &Fcal_vzerr, &b_fcal_VzErr);
   fChain->SetBranchAddress("V_h_px_zu", &V_h_px_zu, &b_V_H_px_zu);
   fChain->SetBranchAddress("V_h_py_zu", &V_h_py_zu, &b_V_H_py_zu);
   fChain->SetBranchAddress("V_h_pz_zu", &V_h_pz_zu, &b_V_H_pz_zu);
   fChain->SetBranchAddress("V_h_e_zu", &V_h_e_zu, &b_V_H_E_zu);
   fChain->SetBranchAddress("Etamax_zu", &Etamax_zu, &b_Etamax_zu);
   fChain->SetBranchAddress("Etamax_zu4", &Etamax_zu4, &b_Etamax_zu4);
   fChain->SetBranchAddress("Fgap", &Fgap, &b_Fgap);
   fChain->SetBranchAddress("Bgap", &Bgap, &b_Bgap);
   fChain->SetBranchAddress("Nzufos", &Nzufos, &b_Nzufos);
   fChain->SetBranchAddress("Tufo", Tufo, &b_Tufo);
   fChain->SetBranchAddress("Zufo_bsp", Zufo_bsp, &b_Zufo_bsp);
   fChain->SetBranchAddress("Zufo", Zufo, &b_Zufo);
   fChain->SetBranchAddress("Cufo", Cufo, &b_Cufo);
   fChain->SetBranchAddress("Zufoecal", Zufoecal, &b_Zufoecal);
   fChain->SetBranchAddress("Zufoeemc", Zufoeemc, &b_Zufoeemc);
   fChain->SetBranchAddress("Zufo_fmax_bemc", Zufo_fmax_bemc, &b_Zufo_fmax_bemc);
   fChain->SetBranchAddress("Zufo_fmax_remc", Zufo_fmax_remc, &b_Zufo_fmax_remc);
   fChain->SetBranchAddress("Zufo_fmax_femc", Zufo_fmax_femc, &b_Zufo_fmax_femc);
   fChain->SetBranchAddress("Zufo_deltax", Zufo_deltax, &b_Zufo_deltax);
   fChain->SetBranchAddress("Zufo_deltay", Zufo_deltay, &b_Zufo_deltay);
   fChain->SetBranchAddress("Zufo_deltaz", Zufo_deltaz, &b_Zufo_deltaz);
   fChain->SetBranchAddress("Nisl", &Nisl, &b_nIsl);
   fChain->SetBranchAddress("Nrcisl", Nrcisl, &b_Nrcisl);
   fChain->SetBranchAddress("Isltyp", Isltyp, &b_Isltyp);
   fChain->SetBranchAddress("Eisl", Eisl, &b_Eisl);
   fChain->SetBranchAddress("Xisl", Xisl, &b_Xisl);
   fChain->SetBranchAddress("Yisl", Yisl, &b_Yisl);
   fChain->SetBranchAddress("Zisl", Zisl, &b_Zisl);
   fChain->SetBranchAddress("Risl", Risl, &b_Risl);
   fChain->SetBranchAddress("Nt", &Nt, &b_nT);
   fChain->SetBranchAddress("Vcthid", Vcthid, &b_Vcthid);
   fChain->SetBranchAddress("Hlid", Hlid, &b_Hlid);
   fChain->SetBranchAddress("Qtr", Qtr, &b_Qtr);
   fChain->SetBranchAddress("Swmtr", Swmtr, &b_Swmtr);
   fChain->SetBranchAddress("Qlttr", Qlttr, &b_Qlttr);
   fChain->SetBranchAddress("Mtri", Mtri, &b_Mtri);
   fChain->SetBranchAddress("Wtri", Wtri, &b_Wtri);
   fChain->SetBranchAddress("Ptr", Ptr, &b_Ptr);
   fChain->SetBranchAddress("Dptr", Dptr, &b_Dptr);
   fChain->SetBranchAddress("Thtr", Thtr, &b_Thtr);
   fChain->SetBranchAddress("Phtr", Phtr, &b_Phtr);
   fChain->SetBranchAddress("Dist_istr", Dist_istr, &b_Dist_istr);
   fChain->SetBranchAddress("Trk_ntracks", &Trk_ntracks, &b_trk_ntracks);
   fChain->SetBranchAddress("Trk_type", Trk_type, &b_Trk_type);
   fChain->SetBranchAddress("Ntrack_type", Ntrack_type, &b_ntrack_type);
   fChain->SetBranchAddress("Def_trk_type", &Def_trk_type, &b_def_trk_type);
   fChain->SetBranchAddress("Trk_id", Trk_id, &b_Trk_id);
//   fChain->SetBranchAddress("Trk_id2", Trk_id2, &b_Trk_id2);
   fChain->SetBranchAddress("Trk_px", Trk_px, &b_Trk_px);
   fChain->SetBranchAddress("Trk_py", Trk_py, &b_Trk_py);
   fChain->SetBranchAddress("Trk_pz", Trk_pz, &b_Trk_pz);
   fChain->SetBranchAddress("Trk_charge", Trk_charge, &b_Trk_charge);
   fChain->SetBranchAddress("Trk_vtx", Trk_vtx, &b_Trk_vtx);
   fChain->SetBranchAddress("Trk_prim_vtx", Trk_prim_vtx, &b_Trk_prim_vtx);
   fChain->SetBranchAddress("Trk_sec_vtx", Trk_sec_vtx, &b_Trk_sec_vtx);
   fChain->SetBranchAddress("Trk_vxid", Trk_vxid, &b_Trk_vxid);
   fChain->SetBranchAddress("Trk_nzbyt", Trk_nzbyt, &b_Trk_nzbyt);
   fChain->SetBranchAddress("Trk_naxial", Trk_naxial, &b_Trk_naxial);
   fChain->SetBranchAddress("Trk_nstereo", Trk_nstereo, &b_Trk_nstereo);
   fChain->SetBranchAddress("Trk_ndof", Trk_ndof, &b_Trk_ndof);
   fChain->SetBranchAddress("Trk_layinner", Trk_layinner, &b_Trk_layinner);
   fChain->SetBranchAddress("Trk_layouter", Trk_layouter, &b_Trk_layouter);
   fChain->SetBranchAddress("Trk_dedxctd", Trk_dedxctd, &b_Trk_dedxctd);
   fChain->SetBranchAddress("Trk_dedxctdcr", Trk_dedxctdcr, &b_Trk_dedxctdcr);
   fChain->SetBranchAddress("Trk_dedxctderr", Trk_dedxctderr, &b_Trk_dedxctderr);
   fChain->SetBranchAddress("Trk_dedxctdnh", Trk_dedxctdnh, &b_Trk_dedxctdnh);
   fChain->SetBranchAddress("Trk_dedxctdsaturated", Trk_dedxctdsaturated, &b_Trk_dedxctdsaturated);
   fChain->SetBranchAddress("Trk_chi2", Trk_chi2, &b_Trk_chi2);
   fChain->SetBranchAddress("Trk_vchi2", Trk_vchi2, &b_Trk_vchi2);
   fChain->SetBranchAddress("Trk_nbr", Trk_nbr, &b_Trk_nbr);
   fChain->SetBranchAddress("Trk_nbz", Trk_nbz, &b_Trk_nbz);
   fChain->SetBranchAddress("Trk_nwu", Trk_nwu, &b_Trk_nwu);
   fChain->SetBranchAddress("Trk_nwv", Trk_nwv, &b_Trk_nwv);
   fChain->SetBranchAddress("Trk_nstt", Trk_nstt, &b_Trk_nstt);
   fChain->SetBranchAddress("Trk_dedxmvd", Trk_dedxmvd, &b_Trk_dedxmvd);
   fChain->SetBranchAddress("Trk_helpar", Trk_helpar, &b_Trk_helpar);
   fChain->SetBranchAddress("Trk_covmat", Trk_covmat, &b_Trk_covmat);
   fChain->SetBranchAddress("Trk_helmom", Trk_helmom, &b_Trk_helmom);
   fChain->SetBranchAddress("Trk_imppar", Trk_imppar, &b_Trk_imppar);
   fChain->SetBranchAddress("Trk_imperr", Trk_imperr, &b_Trk_imperr);
   fChain->SetBranchAddress("Trk_pca", Trk_pca, &b_Trk_pca);
   fChain->SetBranchAddress("Trk_nvert", &Trk_nvert, &b_trk_nvert);
   fChain->SetBranchAddress("Vtx_type", Vtx_type, &b_Vtx_type);
   fChain->SetBranchAddress("Vtx_prim", Vtx_prim, &b_Vtx_prim);
   fChain->SetBranchAddress("Vtx_id", Vtx_id, &b_Vtx_id);
   fChain->SetBranchAddress("Vtx_x", Vtx_x, &b_Vtx_x);
   fChain->SetBranchAddress("Vtx_y", Vtx_y, &b_Vtx_y);
   fChain->SetBranchAddress("Vtx_z", Vtx_z, &b_Vtx_z);
   fChain->SetBranchAddress("Vtx_chi2", Vtx_chi2, &b_Vtx_chi2);
   fChain->SetBranchAddress("Vtx_ndf", Vtx_ndf, &b_Vtx_ndf);
   fChain->SetBranchAddress("Sltctd", &Sltctd, &b_sltctd);
   fChain->SetBranchAddress("Sltctd_tgstkf", &Sltctd_tgstkf, &b_sltctd_tgstkf);
   fChain->SetBranchAddress("Sltctd_tgstkm", &Sltctd_tgstkm, &b_sltctd_tgstkm);
   fChain->SetBranchAddress("Sltctd_tgstkr", &Sltctd_tgstkr, &b_sltctd_tgstkr);
   fChain->SetBranchAddress("Sltctd_tgsvxp", Sltctd_tgsvxp, &b_sltctd_tgsvxp);
   fChain->SetBranchAddress("Sltctd_tgsvxe", &Sltctd_tgsvxe, &b_sltctd_tgsvxe);
   fChain->SetBranchAddress("Sltctd_tgsvxm", &Sltctd_tgsvxm, &b_sltctd_tgsvxm);
   fChain->SetBranchAddress("Sltctd_tgstkd", &Sltctd_tgstkd, &b_sltctd_tgstkd);
   fChain->SetBranchAddress("Sltctd_ntrk", &Sltctd_ntrk, &b_sltctd_nTrk);
   fChain->SetBranchAddress("Sltctd_pt", Sltctd_pt, &b_Sltctd_pt);
   fChain->SetBranchAddress("Sltctd_ch", Sltctd_ch, &b_Sltctd_ch);
   fChain->SetBranchAddress("Sltctd_vx", Sltctd_vx, &b_Sltctd_vx);
   fChain->SetBranchAddress("Sltctd_ns", Sltctd_ns, &b_Sltctd_ns);
   fChain->SetBranchAddress("Sltctd_ex", Sltctd_ex, &b_Sltctd_ex);
   fChain->SetBranchAddress("Sltctd_ey", Sltctd_ey, &b_Sltctd_ey);
   fChain->SetBranchAddress("Sltctd_ez", Sltctd_ez, &b_Sltctd_ez);
   fChain->SetBranchAddress("Sltctd_phi", Sltctd_phi, &b_Sltctd_phi);
   fChain->SetBranchAddress("Sltctd_the", Sltctd_the, &b_Sltctd_the);
   fChain->SetBranchAddress("Ngttrk1", &Ngttrk1, &b_nGTTRK1);
   fChain->SetBranchAddress("Gttrk1_r", Gttrk1_r, &b_Gttrk1_r);
   fChain->SetBranchAddress("Gttrk1_pt", Gttrk1_pt, &b_Gttrk1_pt);
   fChain->SetBranchAddress("Gttrk1_theta", Gttrk1_theta, &b_Gttrk1_theta);
   fChain->SetBranchAddress("Gttrk1_phi", Gttrk1_phi, &b_Gttrk1_phi);
   fChain->SetBranchAddress("Gttrk1_zvert", Gttrk1_zvert, &b_Gttrk1_zvert);
   fChain->SetBranchAddress("Gttrk1_zgrad", Gttrk1_zgrad, &b_Gttrk1_zgrad);
   fChain->SetBranchAddress("Gttrk1_naxseg", Gttrk1_naxseg, &b_Gttrk1_naxseg);
   fChain->SetBranchAddress("Gttrk1_nstseg", Gttrk1_nstseg, &b_Gttrk1_nstseg);
   fChain->SetBranchAddress("Gttrk1_nrmvd", Gttrk1_nrmvd, &b_Gttrk1_nrmvd);
   fChain->SetBranchAddress("Gttrk1_nzmvd", Gttrk1_nzmvd, &b_Gttrk1_nzmvd);
   fChain->SetBranchAddress("Gttrk1_isl", Gttrk1_isl, &b_Gttrk1_isl);
   fChain->SetBranchAddress("Gttrk1_osl", Gttrk1_osl, &b_Gttrk1_osl);
   fChain->SetBranchAddress("Gttrk1_chiax", Gttrk1_chiax, &b_Gttrk1_chiax);
   fChain->SetBranchAddress("Gttrk1_chist", Gttrk1_chist, &b_Gttrk1_chist);
   fChain->SetBranchAddress("Gttrk1_vertid", Gttrk1_vertid, &b_Gttrk1_vertid);
   fChain->SetBranchAddress("Ngtvtx", &Ngtvtx, &b_nGTVTX);
   fChain->SetBranchAddress("Gtvtx_pos", Gtvtx_pos, &b_Gtvtx_pos);
   fChain->SetBranchAddress("Gtvtx_width", Gtvtx_width, &b_Gtvtx_width);
   fChain->SetBranchAddress("Gtvtx_ntrax", Gtvtx_ntrax, &b_Gtvtx_ntrax);
   fChain->SetBranchAddress("Gtvtx_flag1", Gtvtx_flag1, &b_Gtvtx_flag1);
   fChain->SetBranchAddress("Gtvtx_flag2", Gtvtx_flag2, &b_Gtvtx_flag2);
   fChain->SetBranchAddress("Gtbevt_nvert", &Gtbevt_nvert, &b_GTBEVT_NVert);
   fChain->SetBranchAddress("Gtbevt_prvert", Gtbevt_prvert, &b_GTBEVT_PrVert);
   fChain->SetBranchAddress("Gtbevt_pvertwdth", Gtbevt_pvertwdth, &b_GTBEVT_PVertWdth);
   fChain->SetBranchAddress("Gtbevt_ntrax", &Gtbevt_ntrax, &b_GTBEVT_Ntrax);
   fChain->SetBranchAddress("Gtbevt_naxtrax", &Gtbevt_naxtrax, &b_GTBEVT_NAxtrax);
   fChain->SetBranchAddress("Gtbevt_nvtxtrax", &Gtbevt_nvtxtrax, &b_GTBEVT_NVtxtrax);
   fChain->SetBranchAddress("Gtbevt_nwts", &Gtbevt_nwts, &b_GTBEVT_Nwts);
   fChain->SetBranchAddress("Gtbevt_nvtxwts", &Gtbevt_nvtxwts, &b_GTBEVT_Nvtxwts);
   fChain->SetBranchAddress("Gtbevt_nctdtrax", &Gtbevt_nctdtrax, &b_GTBEVT_NCTDtrax);
   fChain->SetBranchAddress("Gtbevt_flag1", &Gtbevt_flag1, &b_GTBEVT_Flag1);
   fChain->SetBranchAddress("Gtbevt_flag2", &Gtbevt_flag2, &b_GTBEVT_Flag2);
   fChain->SetBranchAddress("Gtbevt_flag3", &Gtbevt_flag3, &b_GTBEVT_Flag3);
   fChain->SetBranchAddress("Gtbevt_flag4", &Gtbevt_flag4, &b_GTBEVT_Flag4);
//    fChain->SetBranchAddress("Vcatcal_n", &Vcatcal_n, &b_vcatcal_n);
//    fChain->SetBranchAddress("Vcatcal_q", Vcatcal_q, &b_Vcatcal_q);
//    fChain->SetBranchAddress("Vcatcal_x", Vcatcal_x, &b_Vcatcal_x);
//    fChain->SetBranchAddress("Vcatcal_p", Vcatcal_p, &b_Vcatcal_p);
   fChain->SetBranchAddress("Nchvtx", &Nchvtx, &b_nchvtx);
   fChain->SetBranchAddress("Chvtxpar", Chvtxpar, &b_Chvtxpar);
   fChain->SetBranchAddress("Chvtxcov", Chvtxcov, &b_Chvtxcov);
   fChain->SetBranchAddress("Chchi2", Chchi2, &b_Chchi2);
   fChain->SetBranchAddress("Nchds1", &Nchds1, &b_nchds1);
   fChain->SetBranchAddress("Ds1ms", Ds1ms, &b_Ds1ms);
   fChain->SetBranchAddress("Ds1pm", Ds1pm, &b_Ds1pm);
   fChain->SetBranchAddress("Ds1th", Ds1th, &b_Ds1th);
   fChain->SetBranchAddress("Ds1ph", Ds1ph, &b_Ds1ph);
   fChain->SetBranchAddress("D1d0ms", D1d0ms, &b_D1d0ms);
   fChain->SetBranchAddress("D1d0pm", D1d0pm, &b_D1d0pm);
   fChain->SetBranchAddress("D1d0th", D1d0th, &b_D1d0th);
   fChain->SetBranchAddress("D1d0ph", D1d0ph, &b_D1d0ph);
   fChain->SetBranchAddress("D1kapm", D1kapm, &b_D1kapm);
   fChain->SetBranchAddress("D1kath", D1kath, &b_D1kath);
   fChain->SetBranchAddress("D1kaph", D1kaph, &b_D1kaph);
   fChain->SetBranchAddress("D1pipm", D1pipm, &b_D1pipm);
   fChain->SetBranchAddress("D1pith", D1pith, &b_D1pith);
   fChain->SetBranchAddress("D1piph", D1piph, &b_D1piph);
   fChain->SetBranchAddress("D1pspm", D1pspm, &b_D1pspm);
   fChain->SetBranchAddress("D1psth", D1psth, &b_D1psth);
   fChain->SetBranchAddress("D1psph", D1psph, &b_D1psph);
   fChain->SetBranchAddress("Ds1trk", Ds1trk, &b_Ds1trk);
   fChain->SetBranchAddress("Tds1ka", Tds1ka, &b_Tds1ka);
   fChain->SetBranchAddress("Tds1pi", Tds1pi, &b_Tds1pi);
   fChain->SetBranchAddress("Tds1ps", Tds1ps, &b_Tds1ps);
   fChain->SetBranchAddress("Id1d0vtx", Id1d0vtx, &b_Id1d0vtx);
   fChain->SetBranchAddress("Ids1rprm", Ids1rprm, &b_Ids1rprm);
   fChain->SetBranchAddress("Nchds2", &Nchds2, &b_nchds2);
   fChain->SetBranchAddress("Ds2ms", Ds2ms, &b_Ds2ms);
   fChain->SetBranchAddress("Ds2pm", Ds2pm, &b_Ds2pm);
   fChain->SetBranchAddress("Ds2th", Ds2th, &b_Ds2th);
   fChain->SetBranchAddress("Ds2ph", Ds2ph, &b_Ds2ph);
   fChain->SetBranchAddress("D2d0ms", D2d0ms, &b_D2d0ms);
   fChain->SetBranchAddress("D2d0pm", D2d0pm, &b_D2d0pm);
   fChain->SetBranchAddress("D2d0th", D2d0th, &b_D2d0th);
   fChain->SetBranchAddress("D2d0ph", D2d0ph, &b_D2d0ph);
   fChain->SetBranchAddress("D2kapm", D2kapm, &b_D2kapm);
   fChain->SetBranchAddress("D2kath", D2kath, &b_D2kath);
   fChain->SetBranchAddress("D2kaph", D2kaph, &b_D2kaph);
   fChain->SetBranchAddress("D2p1pm", D2p1pm, &b_D2p1pm);
   fChain->SetBranchAddress("D2p1th", D2p1th, &b_D2p1th);
   fChain->SetBranchAddress("D2p1ph", D2p1ph, &b_D2p1ph);
   fChain->SetBranchAddress("D2p2pm", D2p2pm, &b_D2p2pm);
   fChain->SetBranchAddress("D2p2th", D2p2th, &b_D2p2th);
   fChain->SetBranchAddress("D2p2ph", D2p2ph, &b_D2p2ph);
   fChain->SetBranchAddress("D2p3pm", D2p3pm, &b_D2p3pm);
   fChain->SetBranchAddress("D2p3th", D2p3th, &b_D2p3th);
   fChain->SetBranchAddress("D2p3ph", D2p3ph, &b_D2p3ph);
   fChain->SetBranchAddress("D2pspm", D2pspm, &b_D2pspm);
   fChain->SetBranchAddress("D2psth", D2psth, &b_D2psth);
   fChain->SetBranchAddress("D2psph", D2psph, &b_D2psph);
   fChain->SetBranchAddress("Ds2trk", Ds2trk, &b_Ds2trk);
   fChain->SetBranchAddress("Tds2ka", Tds2ka, &b_Tds2ka);
   fChain->SetBranchAddress("Tds2p1", Tds2p1, &b_Tds2p1);
   fChain->SetBranchAddress("Tds2p2", Tds2p2, &b_Tds2p2);
   fChain->SetBranchAddress("Tds2p3", Tds2p3, &b_Tds2p3);
   fChain->SetBranchAddress("Tds2ps", Tds2ps, &b_Tds2ps);
   fChain->SetBranchAddress("Id2d0vtx", Id2d0vtx, &b_Id2d0vtx);
   fChain->SetBranchAddress("Ids2rprm", Ids2rprm, &b_Ids2rprm);
   fChain->SetBranchAddress("Ds2rin", Ds2rin, &b_Ds2rin);
   fChain->SetBranchAddress("D2maxdca", D2maxdca, &b_D2maxdca);
   fChain->SetBranchAddress("Nchd0", &Nchd0, &b_nchd0);
   fChain->SetBranchAddress("D0ms", D0ms, &b_D0ms);
   fChain->SetBranchAddress("D0pm", D0pm, &b_D0pm);
   fChain->SetBranchAddress("D0th", D0th, &b_D0th);
   fChain->SetBranchAddress("D0ph", D0ph, &b_D0ph);
   fChain->SetBranchAddress("D0kapm", D0kapm, &b_D0kapm);
   fChain->SetBranchAddress("D0kath", D0kath, &b_D0kath);
   fChain->SetBranchAddress("D0kaph", D0kaph, &b_D0kaph);
   fChain->SetBranchAddress("D0pipm", D0pipm, &b_D0pipm);
   fChain->SetBranchAddress("D0pith", D0pith, &b_D0pith);
   fChain->SetBranchAddress("D0piph", D0piph, &b_D0piph);
   fChain->SetBranchAddress("D0trk", D0trk, &b_D0trk);
   fChain->SetBranchAddress("Td0ka", Td0ka, &b_Td0ka);
   fChain->SetBranchAddress("Td0pi", Td0pi, &b_Td0pi);
   fChain->SetBranchAddress("Id0vtx", Id0vtx, &b_Id0vtx);
   fChain->SetBranchAddress("Id0rprm", Id0rprm, &b_Id0rprm);
   fChain->SetBranchAddress("Nchdch", &Nchdch, &b_nchdch);
   fChain->SetBranchAddress("Dchms", Dchms, &b_Dchms);
   fChain->SetBranchAddress("Dchpm", Dchpm, &b_Dchpm);
   fChain->SetBranchAddress("Dchth", Dchth, &b_Dchth);
   fChain->SetBranchAddress("Dchph", Dchph, &b_Dchph);
   fChain->SetBranchAddress("Dckapm", Dckapm, &b_Dckapm);
   fChain->SetBranchAddress("Dckath", Dckath, &b_Dckath);
   fChain->SetBranchAddress("Dckaph", Dckaph, &b_Dckaph);
   fChain->SetBranchAddress("Dcp1pm", Dcp1pm, &b_Dcp1pm);
   fChain->SetBranchAddress("Dcp1th", Dcp1th, &b_Dcp1th);
   fChain->SetBranchAddress("Dcp1ph", Dcp1ph, &b_Dcp1ph);
   fChain->SetBranchAddress("Dcp2pm", Dcp2pm, &b_Dcp2pm);
   fChain->SetBranchAddress("Dcp2th", Dcp2th, &b_Dcp2th);
   fChain->SetBranchAddress("Dcp2ph", Dcp2ph, &b_Dcp2ph);
   fChain->SetBranchAddress("Dchtrk", Dchtrk, &b_Dchtrk);
   fChain->SetBranchAddress("Tdchka", Tdchka, &b_Tdchka);
   fChain->SetBranchAddress("Tdchp1", Tdchp1, &b_Tdchp1);
   fChain->SetBranchAddress("Tdchp2", Tdchp2, &b_Tdchp2);
   fChain->SetBranchAddress("Idchvtx", Idchvtx, &b_Idchvtx);
   fChain->SetBranchAddress("Idchrprm", Idchrprm, &b_Idchrprm);
   fChain->SetBranchAddress("Nchdla", &Nchdla, &b_nchdla);
   fChain->SetBranchAddress("Dlams", Dlams, &b_Dlams);
   fChain->SetBranchAddress("Dlapm", Dlapm, &b_Dlapm);
   fChain->SetBranchAddress("Dlath", Dlath, &b_Dlath);
   fChain->SetBranchAddress("Dlaph", Dlaph, &b_Dlaph);
   fChain->SetBranchAddress("Dlkapm", Dlkapm, &b_Dlkapm);
   fChain->SetBranchAddress("Dlkath", Dlkath, &b_Dlkath);
   fChain->SetBranchAddress("Dlkaph", Dlkaph, &b_Dlkaph);
   fChain->SetBranchAddress("Dlprpm", Dlprpm, &b_Dlprpm);
   fChain->SetBranchAddress("Dlprth", Dlprth, &b_Dlprth);
   fChain->SetBranchAddress("Dlprph", Dlprph, &b_Dlprph);
   fChain->SetBranchAddress("Dlpipm", Dlpipm, &b_Dlpipm);
   fChain->SetBranchAddress("Dlpith", Dlpith, &b_Dlpith);
   fChain->SetBranchAddress("Dlpiph", Dlpiph, &b_Dlpiph);
   fChain->SetBranchAddress("Dlatrk", Dlatrk, &b_Dlatrk);
   fChain->SetBranchAddress("Tdlaka", Tdlaka, &b_Tdlaka);
   fChain->SetBranchAddress("Tdlapr", Tdlapr, &b_Tdlapr);
   fChain->SetBranchAddress("Tdlapi", Tdlapi, &b_Tdlapi);
   fChain->SetBranchAddress("Idlavtx", Idlavtx, &b_Idlavtx);
   fChain->SetBranchAddress("Idlarprm", Idlarprm, &b_Idlarprm);
   fChain->SetBranchAddress("Nchdss", &Nchdss, &b_nchdss);
   fChain->SetBranchAddress("Dssms", Dssms, &b_Dssms);
   fChain->SetBranchAddress("Dsspm", Dsspm, &b_Dsspm);
   fChain->SetBranchAddress("Dssth", Dssth, &b_Dssth);
   fChain->SetBranchAddress("Dssph", Dssph, &b_Dssph);
   fChain->SetBranchAddress("Dsphms", Dsphms, &b_Dsphms);
   fChain->SetBranchAddress("Dsphpm", Dsphpm, &b_Dsphpm);
   fChain->SetBranchAddress("Dsphth", Dsphth, &b_Dsphth);
   fChain->SetBranchAddress("Dsphph", Dsphph, &b_Dsphph);
   fChain->SetBranchAddress("Dsk1pm", Dsk1pm, &b_Dsk1pm);
   fChain->SetBranchAddress("Dsk1th", Dsk1th, &b_Dsk1th);
   fChain->SetBranchAddress("Dsk1ph", Dsk1ph, &b_Dsk1ph);
   fChain->SetBranchAddress("Dsk2pm", Dsk2pm, &b_Dsk2pm);
   fChain->SetBranchAddress("Dsk2th", Dsk2th, &b_Dsk2th);
   fChain->SetBranchAddress("Dsk2ph", Dsk2ph, &b_Dsk2ph);
   fChain->SetBranchAddress("Dspipm", Dspipm, &b_Dspipm);
   fChain->SetBranchAddress("Dspith", Dspith, &b_Dspith);
   fChain->SetBranchAddress("Dspiph", Dspiph, &b_Dspiph);
   fChain->SetBranchAddress("Dsstrk", Dsstrk, &b_Dsstrk);
   fChain->SetBranchAddress("Tdssk1", Tdssk1, &b_Tdssk1);
   fChain->SetBranchAddress("Tdssk2", Tdssk2, &b_Tdssk2);
   fChain->SetBranchAddress("Tdsspi", Tdsspi, &b_Tdsspi);
   fChain->SetBranchAddress("Idssvtx", Idssvtx, &b_Idssvtx);
   fChain->SetBranchAddress("Idssrprm", Idssrprm, &b_Idssrprm);
   fChain->SetBranchAddress("Gt_nvt", &Gt_nvt, &b_gt_nvt);
   fChain->SetBranchAddress("Gt_ntrk", &Gt_ntrk, &b_gt_ntrk);
   fChain->SetBranchAddress("Gt_naxtr", &Gt_naxtr, &b_gt_naxtr);
   fChain->SetBranchAddress("Gt_nvtx", &Gt_nvtx, &b_gt_nvtx);
   fChain->SetBranchAddress("Gt_nctdt", &Gt_nctdt, &b_gt_nctdt);
   fChain->SetBranchAddress("Gt_f1", &Gt_f1, &b_gt_f1);
   fChain->SetBranchAddress("Gt_f2", &Gt_f2, &b_gt_f2);
   fChain->SetBranchAddress("Gt_f3", &Gt_f3, &b_gt_f3);
   fChain->SetBranchAddress("Gt_f4", &Gt_f4, &b_gt_f4);
   fChain->SetBranchAddress("Gt_prv", Gt_prv, &b_gt_prv);
   fChain->SetBranchAddress("Gt_prvw", Gt_prvw, &b_gt_prvw);
   fChain->SetBranchAddress("Gt_pt", Gt_pt, &b_gt_pt);
   fChain->SetBranchAddress("Gt_sptvtx", &Gt_sptvtx, &b_gt_sptvtx);
   fChain->SetBranchAddress("Gt_ctd_size", &Gt_ctd_size, &b_gt_ctd_size);
   fChain->SetBranchAddress("Gt_bckg", &Gt_bckg, &b_gt_bckg);
   fChain->SetBranchAddress("Gt_mass", &Gt_mass, &b_gt_mass);
   fChain->SetBranchAddress("Gt_ptd0", &Gt_ptd0, &b_gt_ptd0);
   fChain->SetBranchAddress("Gt_nvt_mvd", &Gt_nvt_mvd, &b_gt_nvt_MVD);
   fChain->SetBranchAddress("Gt_ntrk_mvd", &Gt_ntrk_mvd, &b_gt_ntrk_MVD);
   fChain->SetBranchAddress("Gt_nvtx_mvd", &Gt_nvtx_mvd, &b_gt_nvtx_MVD);
   fChain->SetBranchAddress("Gt_prv_mvd", Gt_prv_mvd, &b_gt_prv_MVD);
   fChain->SetBranchAddress("Gt_prvw_mvd", Gt_prvw_mvd, &b_gt_prvw_MVD);
   fChain->SetBranchAddress("Gt_sptvtx_mvd", &Gt_sptvtx_mvd, &b_gt_sptvtx_MVD);
   fChain->SetBranchAddress("Bspt_prog", &Bspt_prog, &b_bspt_prog);
   fChain->SetBranchAddress("Bspt_x", &Bspt_x, &b_bspt_x);
   fChain->SetBranchAddress("Bspt_y", &Bspt_y, &b_bspt_y);
   fChain->SetBranchAddress("Bspt_z", &Bspt_z, &b_bspt_z);
   fChain->SetBranchAddress("Bspt_xer", &Bspt_xer, &b_bspt_xer);
   fChain->SetBranchAddress("Bspt_yer", &Bspt_yer, &b_bspt_yer);
   fChain->SetBranchAddress("Bspt_zer", &Bspt_zer, &b_bspt_zer);
   fChain->SetBranchAddress("Bspt_dxdz", &Bspt_dxdz, &b_bspt_dxdz);
   fChain->SetBranchAddress("Bspt_dydz", &Bspt_dydz, &b_bspt_dydz);
   fChain->SetBranchAddress("Bspt_dxdzer", &Bspt_dxdzer, &b_bspt_dxdzer);
   fChain->SetBranchAddress("Bspt_dydzer", &Bspt_dydzer, &b_bspt_dydzer);
   fChain->SetBranchAddress("Bspt_xoff", &Bspt_xoff, &b_bspt_xoff);
   fChain->SetBranchAddress("Bspt_yoff", &Bspt_yoff, &b_bspt_yoff);
   fChain->SetBranchAddress("Bspt_xoffer", &Bspt_xoffer, &b_bspt_xoffer);
   fChain->SetBranchAddress("Bspt_yoffer", &Bspt_yoffer, &b_bspt_yoffer);
   fChain->SetBranchAddress("T6rec_hotx", &T6rec_hotx, &b_t6rec_hotx);
   fChain->SetBranchAddress("T6rec_hoty", &T6rec_hoty, &b_t6rec_hoty);
   fChain->SetBranchAddress("T6rec_ene", &T6rec_ene, &b_t6rec_ene);
   fChain->SetBranchAddress("T6rec_x", &T6rec_x, &b_t6rec_x);
   fChain->SetBranchAddress("T6rec_y", &T6rec_y, &b_t6rec_y);
   fChain->SetBranchAddress("Nr_secvtx", &Nr_secvtx, &b_nr_secvtx);
   fChain->SetBranchAddress("Vtxsec_type", Vtxsec_type, &b_Vtxsec_type);
   fChain->SetBranchAddress("Vtxsec_ref", Vtxsec_ref, &b_Vtxsec_ref);
   fChain->SetBranchAddress("Vtxsec_x", Vtxsec_x, &b_Vtxsec_x);
   fChain->SetBranchAddress("Vtxsec_y", Vtxsec_y, &b_Vtxsec_y);
   fChain->SetBranchAddress("Vtxsec_z", Vtxsec_z, &b_Vtxsec_z);
   fChain->SetBranchAddress("Vtxsec_mass", Vtxsec_mass, &b_Vtxsec_mass);
   fChain->SetBranchAddress("Vtxsec_chi2", Vtxsec_chi2, &b_Vtxsec_chi2);
   fChain->SetBranchAddress("Vtxsec_ndf", Vtxsec_ndf, &b_Vtxsec_ndf);
   fChain->SetBranchAddress("Vtxsec_multi", Vtxsec_multi, &b_Vtxsec_multi);
   fChain->SetBranchAddress("Vtxsec_cov", Vtxsec_cov, &b_Vtxsec_cov);
   fChain->SetBranchAddress("Vtxsec_zttid", Vtxsec_zttid, &b_Vtxsec_zttid);
   fChain->SetBranchAddress("Vtxsec_weight", Vtxsec_weight, &b_Vtxsec_weight);
   fChain->SetBranchAddress("Vtxsec_redprm", Vtxsec_redprm, &b_Vtxsec_redprm);
   fChain->SetBranchAddress("Nr_redprim", &Nr_redprim, &b_nr_redprim);
   fChain->SetBranchAddress("Vtxredprim_type", Vtxredprim_type, &b_Vtxredprim_type);
   fChain->SetBranchAddress("Vtxredprim_secvtx", Vtxredprim_secvtx, &b_Vtxredprim_secvtx);
   fChain->SetBranchAddress("Vtxredprim_x", Vtxredprim_x, &b_Vtxredprim_x);
   fChain->SetBranchAddress("Vtxredprim_y", Vtxredprim_y, &b_Vtxredprim_y);
   fChain->SetBranchAddress("Vtxredprim_z", Vtxredprim_z, &b_Vtxredprim_z);
   fChain->SetBranchAddress("Vtxredprim_chi2", Vtxredprim_chi2, &b_Vtxredprim_chi2);
   fChain->SetBranchAddress("Vtxredprim_cov", Vtxredprim_cov, &b_Vtxredprim_cov);
   fChain->SetBranchAddress("Vtxredprim_ndf", Vtxredprim_ndf, &b_Vtxredprim_ndf);
   fChain->SetBranchAddress("Pseudo_thrust", &Pseudo_thrust, &b_Pseudo_Thrust);
   fChain->SetBranchAddress("Thrust_axis_phi", &Thrust_axis_phi, &b_Thrust_Axis_Phi);
   fChain->SetBranchAddress("Thrust_axis_theta1", &Thrust_axis_theta1, &b_Thrust_Axis_Theta1);
   fChain->SetBranchAddress("Thrust_axis_theta2", &Thrust_axis_theta2, &b_Thrust_Axis_Theta2);
   fChain->SetBranchAddress("Dis_pseudo_thrust_breit", &Dis_pseudo_thrust_breit, &b_DIS_Pseudo_Thrust_Breit);
   fChain->SetBranchAddress("Thrust_axis_phi_breit", &Thrust_axis_phi_breit, &b_Thrust_Axis_Phi_Breit);
   fChain->SetBranchAddress("Thrust_axis_theta1_breit", &Thrust_axis_theta1_breit, &b_Thrust_Axis_Theta1_Breit);
   fChain->SetBranchAddress("Thrust_axis_theta2_breit", &Thrust_axis_theta2_breit, &b_Thrust_Axis_Theta2_Breit);
   fChain->SetBranchAddress("Thrust_axis_phi1_lab", &Thrust_axis_phi1_lab, &b_Thrust_Axis_Phi1_Lab);
   fChain->SetBranchAddress("Thrust_axis_phi2_lab", &Thrust_axis_phi2_lab, &b_Thrust_Axis_Phi2_Lab);
   fChain->SetBranchAddress("Thrust_axis_theta1_lab", &Thrust_axis_theta1_lab, &b_Thrust_Axis_Theta1_Lab);
   fChain->SetBranchAddress("Thrust_axis_theta2_lab", &Thrust_axis_theta2_lab, &b_Thrust_Axis_Theta2_Lab);
   fChain->SetBranchAddress("Q2prime_a", &Q2prime_a, &b_Q2Prime_A);
   fChain->SetBranchAddress("Isotropy_a", &Isotropy_a, &b_Isotropy_A);
   fChain->SetBranchAddress("Part_band_a", &Part_band_a, &b_Part_Band_A);
   fChain->SetBranchAddress("Sphericity_a", &Sphericity_a, &b_Sphericity_A);
   fChain->SetBranchAddress("Q2prime_b", &Q2prime_b, &b_Q2Prime_B);
   fChain->SetBranchAddress("Isotropy_b", &Isotropy_b, &b_Isotropy_B);
   fChain->SetBranchAddress("Part_band_b", &Part_band_b, &b_Part_Band_B);
   fChain->SetBranchAddress("Sphericity_b", &Sphericity_b, &b_Sphericity_B);
   fChain->SetBranchAddress("Trkmsa_ntracks", &Trkmsa_ntracks, &b_trkmsa_ntracks);
   fChain->SetBranchAddress("Trkmsa_id", Trkmsa_id, &b_Trkmsa_id);
   fChain->SetBranchAddress("Trkmsa_px", Trkmsa_px, &b_Trkmsa_px);
   fChain->SetBranchAddress("Trkmsa_py", Trkmsa_py, &b_Trkmsa_py);
   fChain->SetBranchAddress("Trkmsa_pz", Trkmsa_pz, &b_Trkmsa_pz);
   fChain->SetBranchAddress("Trkmsa_charge", Trkmsa_charge, &b_Trkmsa_charge);
   fChain->SetBranchAddress("Trkmsa_ndof", Trkmsa_ndof, &b_Trkmsa_ndof);
   fChain->SetBranchAddress("Trkmsa_chi2", Trkmsa_chi2, &b_Trkmsa_chi2);
   fChain->SetBranchAddress("Trkmsa_nbr", Trkmsa_nbr, &b_Trkmsa_nbr);
   fChain->SetBranchAddress("Trkmsa_nbz", Trkmsa_nbz, &b_Trkmsa_nbz);
   fChain->SetBranchAddress("Trkmsa_nwu", Trkmsa_nwu, &b_Trkmsa_nwu);
   fChain->SetBranchAddress("Trkmsa_nwv", Trkmsa_nwv, &b_Trkmsa_nwv);
   fChain->SetBranchAddress("Trkmsa_dedxmvd", Trkmsa_dedxmvd, &b_Trkmsa_dedxmvd);
   fChain->SetBranchAddress("Trkmsa_helpar", Trkmsa_helpar, &b_Trkmsa_helpar);
   fChain->SetBranchAddress("Trkmsa_covmat", Trkmsa_covmat, &b_Trkmsa_covmat);
   fChain->SetBranchAddress("Trkmsa_helmom", Trkmsa_helmom, &b_Trkmsa_helmom);
   fChain->SetBranchAddress("Trkmsa_imppar", Trkmsa_imppar, &b_Trkmsa_imppar);
   fChain->SetBranchAddress("Trkmsa_imperr", Trkmsa_imperr, &b_Trkmsa_imperr);
   fChain->SetBranchAddress("Trkmsa_pca", Trkmsa_pca, &b_Trkmsa_pca);
   fChain->SetBranchAddress("Uvfall_ncand", &Uvfall_ncand, &b_uvfall_ncand);
   fChain->SetBranchAddress("Uvfall_charge", Uvfall_charge, &b_Uvfall_charge);
   fChain->SetBranchAddress("Uvfall_siraem", Uvfall_siraem, &b_Uvfall_siraem);
   fChain->SetBranchAddress("Uvfall_candid", Uvfall_candid, &b_Uvfall_candid);
   fChain->SetBranchAddress("Uvfall_result", Uvfall_result, &b_Uvfall_result);
   fChain->SetBranchAddress("Uvfall_nmvd", Uvfall_nmvd, &b_Uvfall_nmvd);
   fChain->SetBranchAddress("Uvfall_nmvdhit", Uvfall_nmvdhit, &b_Uvfall_nmvdhit);
   fChain->SetBranchAddress("Uvfall_nctd", Uvfall_nctd, &b_Uvfall_nctd);
   fChain->SetBranchAddress("Uvfall_nctdhit", Uvfall_nctdhit, &b_Uvfall_nctdhit);
   fChain->SetBranchAddress("Tlt_spp15", &Tlt_spp15, &b_tlt_spp15);
   fChain->SetBranchAddress("Tlt_spp16", &Tlt_spp16, &b_tlt_spp16);
   fChain->SetBranchAddress("Tlt_spp11", &Tlt_spp11, &b_tlt_spp11);
   fChain->SetBranchAddress("Tlt_spp15lq2", &Tlt_spp15lq2, &b_tlt_spp15lq2);
   fChain->SetBranchAddress("Tlt_spp16lq2", &Tlt_spp16lq2, &b_tlt_spp16lq2);
   fChain->SetBranchAddress("Sltcal_etotemc", &Sltcal_etotemc, &b_sltcal_etotemc);
   fChain->SetBranchAddress("Sltcal_etothac", &Sltcal_etothac, &b_sltcal_etothac);
   fChain->SetBranchAddress("Sltcal_etotremc", &Sltcal_etotremc, &b_sltcal_etotremc);
   fChain->SetBranchAddress("Sltcal_etotbemc", &Sltcal_etotbemc, &b_sltcal_etotbemc);
   fChain->SetBranchAddress("Sltcal_etotfemc", &Sltcal_etotfemc, &b_sltcal_etotfemc);
   fChain->SetBranchAddress("Sltcal_etotfcal", &Sltcal_etotfcal, &b_sltcal_etotfcal);
   fChain->SetBranchAddress("Sltelc_fl", &Sltelc_fl, &b_sltelc_fl);
   fChain->SetBranchAddress("Sltelc_emcthe", &Sltelc_emcthe, &b_sltelc_emcthe);
   fChain->SetBranchAddress("Sltelc_emcphi", &Sltelc_emcphi, &b_sltelc_emcphi);
   fChain->SetBranchAddress("Sltelc_emcene", &Sltelc_emcene, &b_sltelc_emcene);
   fChain->SetBranchAddress("Sltelc_hacene", &Sltelc_hacene, &b_sltelc_hacene);
   fChain->SetBranchAddress("Gttenv_ctdsize", &Gttenv_ctdsize, &b_gttenv_ctdsize);
   fChain->SetBranchAddress("Tlev_evtype", &Tlev_evtype, &b_tlev_evtype);
   fChain->SetBranchAddress("Tlev_eminpz", &Tlev_eminpz, &b_tlev_eminpz);
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
