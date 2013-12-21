#!/bin/bash
######################################################
#
#       naf_submit.sh
#       script to submit naf jobs
#
#       Denys Lontkovskyi denys.lontkovskyi@desy.de
#       Inna Makarenko inna.makarenko@desy.de
#       created from zarah_run.sh: 10.11.11
#       last modified: 09.02.2012
#
######################################################
sample=$1
pref=$2
outputfolder=/afs/desy.de/group/zeus/pool/diont/
confile=./NAF/config.xml
nafqueue=short.q
nafscript=./NAF/naf_run.sh

if [ "$sample" == "alldata_beforecorr" ]
then
	let JID=0
        for i in ./input/DATA/before_corr/config*_data.xml
	do
                echo "submitting $i"
		NAFOUTPUTDIR=$outputfolder/$sample\_$pref
		CONFIGFILE=$PWD/$i
		qsub -N $sample\_$pref\_$JID -l os=sld6 -q $nafqueue -cwd $nafscript $CONFIGFILE $NAFOUTPUTDIR
		let JID=JID+1
	done
#DATA et LEPTO corr applied
elif [ "$sample" == "alldata_aftercorr_LEPTO" ]
then
	let JID=0
        for i in ./input/DATA/after_corr/LEPTO/config*_data.xml
	do
                echo "submitting $i"
		NAFOUTPUTDIR=$outputfolder/$sample\_$pref
		CONFIGFILE=$PWD/$i
		qsub -N $sample\_$pref\_$JID -l os=sld6 -q $nafqueue -cwd $nafscript $CONFIGFILE $NAFOUTPUTDIR
		let JID=JID+1
	done
#DATA et ARIANDE corr applied
elif [ "$sample" == "alldata_aftercorr_ARIADNE" ]
then
	let JID=0
        for i in ./input/DATA/after_corr/ARIADNE/config*_data.xml
	do
                echo "submitting $i"
		NAFOUTPUTDIR=$outputfolder/$sample\_$pref
		CONFIGFILE=$PWD/$i
		qsub -N $sample\_$pref\_$JID -l os=sld6 -q $nafqueue -cwd $nafscript $CONFIGFILE $NAFOUTPUTDIR
		let JID=JID+1
	done
#MC before corrections
elif [ "$sample" == "allmc_LEPTO_beforecorr" ]
then
	let JID=0
	for i in ./input/MC/*/config*_lepto.xml
        do
                echo "submitting $i"
		NAFOUTPUTDIR=$outputfolder/$sample\_$pref
		CONFIGFILE=$PWD/$i
		qsub -N $sample\_$pref\_$JID -l os=sld6 -q $nafqueue -cwd $nafscript $CONFIGFILE $NAFOUTPUTDIR
		let JID=JID+1
        done
elif [ "$sample" == "allmc_ARIADNE_beforecorr" ]
then
	let JID=0
	for i in ./input/MC/*/config*_ariadne.xml
        do
                echo "submitting $i"
		NAFOUTPUTDIR=$outputfolder/$sample\_$pref
		CONFIGFILE=$PWD/$i
		qsub -N $sample\_$pref\_$JID -l os=sld6 -q $nafqueue -cwd $nafscript $CONFIGFILE $NAFOUTPUTDIR
		let JID=JID+1
        done
#MC after corrections and reweightings
elif [ "$sample" == "allmc_corrected" ]
then
	let JID=0
	for i in ./input/MC/*/config*_ecorrected_zvtxreweighted_tvrewap_q2rewap.xml
        do
                echo "submitting $i"
		NAFOUTPUTDIR=$outputfolder/$sample\_$pref
		CONFIGFILE=$PWD/$i
		qsub -N $sample\_$pref\_$JID -l os=sld6 -q $nafqueue -cwd $nafscript $CONFIGFILE $NAFOUTPUTDIR
		let JID=JID+1
        done
#en-scale syst
elif [ "$sample" == "allmc_enscsyst" ]
then
	let JID=0
	for i in ./input/MC/*/config*_enscsyst.xml
        do
                echo "submitting $i"
		NAFOUTPUTDIR=$outputfolder/$sample\_$pref
		CONFIGFILE=$PWD/$i
		qsub -N $sample\_$pref\_$JID -l os=sld6 -q $nafqueue -cwd $nafscript $CONFIGFILE $NAFOUTPUTDIR
		let JID=JID+1
        done
#tvrew syst
elif [ "$sample" == "allmc_tvrewsyst" ]
then
	let JID=0
	for i in ./input/MC/*/config*_ecorrected_zvtxreweighted_tvrewsystap_q2rewap.xml
        do
                echo "submitting $i"
		NAFOUTPUTDIR=$outputfolder/$sample\_$pref
		CONFIGFILE=$PWD/$i
		qsub -N $sample\_$pref\_$JID -l os=sld6 -q $nafqueue -cwd $nafscript $CONFIGFILE $NAFOUTPUTDIR
		let JID=JID+1
        done
#Single file
else
	echo "ATTENTION: This option works only if config.xml file is in the same folder as main.exe"
	echo "ATTENTION: Copy config.xml to that folder"
	echo "submitting $sample"
	NAFOUTPUTDIR=$outputfolder/$sample\_$pref
	CONFIGFILE=$PWD/$sample
	qsub -N $sample\_$pref -l os=sld6 -q $nafqueue -cwd $nafscript $CONFIGFILE $NAFOUTPUTDIR
fi

