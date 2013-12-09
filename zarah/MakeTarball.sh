#!/bin/bash
######################################################
#
#	Maketarball.sh
#	script to make an archive of files
#	for zarah farm
#	
#	Denys Lontkovskyi denys.lontkovskyi@desy.de
#	10.11.11
#
######################################################
files=$1
allfiles=./Makefile\ ./main.cpp\ ./source\ ./include\ ./lib\ ./main.exe
exefiles=./lib\ ./main.exe

echo "Creating tarball.tgz of $files"
if [ "$files" == "all" ]
then
	tar zcvf tarball.tgz $allfiles
elif [ "$files" == "exe" ]
then
	tar zcvf tarball.tgz $exefiles
else
	tar zcvf tarball.tgz $files
fi
