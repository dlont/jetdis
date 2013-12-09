#/bin/bash
######################################################
#
#       zarah_get.sh
#       script to check jobs in COMPLETED status
#       and download them from zarah farm
#
#       Denys Lontkovskyi denys.lontkovskyi@desy.de
#       12.12.11
#
######################################################
stat="COMPLETED"
files=Hist_data.root\ main.log\ dcache.log\ stdout\ config.xml
dir=$1
pref=$2
list=`zarah-jobq -a|grep $stat|grep $pref|awk '{print $1}'`
if [ -n "$dir" ]; then 	
	echo "";
else
	echo "Download directory is not set"
        echo "Set download dir to ./"
        dir=./
fi
#
if [ -d $dir ]; then
	echo "Dowloading files to $dir"
	for i in $list
	do
		zarah-jobget -y -j $i -a
		mv $i $dir
	done
else 
	echo "Directory $dir does not exists"
	echo "Creating directory ./$dir"
	mkdir $dir
	echo "Dowloading files to $dir"
	for i in $list
	do
		zarah-jobget -y -j $i -a
		mv $i $dir
	done
fi

