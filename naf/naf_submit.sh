#!/bin/bash
######################################################
#
#       zarah_run.sh
#       script to make an archive of files
#       for zarah farm
#
#       Denys Lontkovskyi denys.lontkovskyi@desy.de
#       Inna Makarenko inna.makarenko@desy.de
#       10.11.11
#       modified 09.02.2012
#
######################################################
sample=$1
pref=$2
outputfolder=/afs/desy.de/group/zeus/pool/diont/
confile=./NAF/config.xml
tarballfile=tarball.tgz
zarahqueue=short.q
zarahscript=./NAF/naf_run.sh
etscale=etscalecorr*.xml
etcorr=etcorr*.xml
zvtxrew=zvtxreweighting_func_*.root
tvrew=fit_func_tvrew_*.root
q2rew=fit_func_q2rew_*.root

if [ "$sample" == "alldata_beforecorr" ]
then
	let JID=0
        for i in ./input/DATA/before_corr/config*_data.xml
	do
                echo "submitting $i $etscale $etcorr $zvtxrew $tvrew $q2rew"
		NAFOUTPUTDIR=$outputfolder/$sample\_$pref
		CONFIGFILE=$PWD/$i
		qsub -N $sample\_$pref\_$JID -l os=sld6 -q $zarahqueue -cwd $zarahscript $CONFIGFILE $NAFOUTPUTDIR
		let JID=JID+1
	done
#DATA et LEPTO corr applied
elif [ "$sample" == "alldata_aftercorr_LEPTO" ]
then
	let JID=0
        for i in ./input/DATA/after_corr/LEPTO/config*_data.xml
	do
                echo "submitting $i $etscale $etcorr $zvtxrew $tvrew $q2rew"
		NAFOUTPUTDIR=$outputfolder/$sample\_$pref
		CONFIGFILE=$PWD/$i
		qsub -N $sample\_$pref\_$JID -l os=sld6 -q $zarahqueue -cwd $zarahscript $CONFIGFILE $NAFOUTPUTDIR
		let JID=JID+1
	done
#DATA et ARIANDE corr applied
elif [ "$sample" == "alldata_aftercorr_ARIADNE" ]
then
	let JID=0
        for i in ./input/DATA/after_corr/ARIADNE/config*_data.xml
	do
                echo "submitting $i $etscale $etcorr $zvtxrew $tvrew $q2rew"
		NAFOUTPUTDIR=$outputfolder/$sample\_$pref
		CONFIGFILE=$PWD/$i
		qsub -N $sample\_$pref\_$JID -l os=sld6 -q $zarahqueue -cwd $zarahscript $CONFIGFILE $NAFOUTPUTDIR
		let JID=JID+1
	done
#MC before corrections
elif [ "$sample" == "allmc_LEPTO_beforecorr" ]
then
	let JID=0
	for i in ./input/MC/*/config*_lepto.xml
        do
                echo "submitting $i $etscale $etcorr $zvtxrew $tvrew $q2rew"
		NAFOUTPUTDIR=$outputfolder/$sample\_$pref
		CONFIGFILE=$PWD/$i
		qsub -N $sample\_$pref\_$JID -l os=sld6 -q $zarahqueue -cwd $zarahscript $CONFIGFILE $NAFOUTPUTDIR
		let JID=JID+1
        done
elif [ "$sample" == "allmc_ARIADNE_beforecorr" ]
then
	let JID=0
	for i in ./input/MC/*/config*_ariadne.xml
        do
                echo "submitting $i $etscale $etcorr $zvtxrew $tvrew $q2rew"
		NAFOUTPUTDIR=$outputfolder/$sample\_$pref
		CONFIGFILE=$PWD/$i
		qsub -N $sample\_$pref\_$JID -l os=sld6 -q $zarahqueue -cwd $zarahscript $CONFIGFILE $NAFOUTPUTDIR
		let JID=JID+1
        done
#MC after corrections and reweightings
elif [ "$sample" == "allmc_corrected" ]
then
	let JID=0
	for i in ./input/MC/*/config*_ecorrected_zvtxreweighted_tvrewap_q2rewap.xml
        do
                echo "submitting $i $etscale $etcorr $zvtxrew $tvrew $q2rew"
		NAFOUTPUTDIR=$outputfolder/$sample\_$pref
		CONFIGFILE=$PWD/$i
		qsub -N $sample\_$pref\_$JID -l os=sld6 -q $zarahqueue -cwd $zarahscript $CONFIGFILE $NAFOUTPUTDIR
		let JID=JID+1
        done
#en-scale syst
elif [ "$sample" == "allmc_enscsyst" ]
then
	let JID=0
	for i in ./input/MC/*/config*_enscsyst.xml
        do
                echo "submitting $i $etscale $etcorr $zvtxrew $tvrew $q2rew"
		NAFOUTPUTDIR=$outputfolder/$sample\_$pref
		CONFIGFILE=$PWD/$i
		qsub -N $sample\_$pref\_$JID -l os=sld6 -q $zarahqueue -cwd $zarahscript $CONFIGFILE $NAFOUTPUTDIR
		let JID=JID+1
        done
#tvrew syst
elif [ "$sample" == "allmc_tvrewsyst" ]
then
	let JID=0
	for i in ./input/MC/*/config*_ecorrected_zvtxreweighted_tvrewsystap_q2rewap.xml
        do
                echo "submitting $i $etscale $etcorr $zvtxrew $tvrew $q2rew"
		NAFOUTPUTDIR=$outputfolder/$sample\_$pref
		CONFIGFILE=$PWD/$i
		qsub -N $sample\_$pref\_$JID -l os=sld6 -q $zarahqueue -cwd $zarahscript $CONFIGFILE $NAFOUTPUTDIR
		let JID=JID+1
        done
#Single file
else

	echo "submitting $sample $etscale $etcorr $zvtxrew $tvrew $q2rew"
	NAFOUTPUTDIR=$outputfolder/$sample\_$pref
	CONFIGFILE=$PWD/$sample
	qsub -N $sample\_$pref -l os=sld6 -q $zarahqueue -cwd $zarahscript $CONFIGFILE $NAFOUTPUTDIR
fi

