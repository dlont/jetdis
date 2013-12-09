#!/bin/sh
#
# print date and time when job starts
#
#date
#
# compile and link program 
#
#tar zxvf tarball.tgz
#make
#mkdir out
#
# prepare environment
ZEUS_BASE_ROOT=/afs/desy.de/group/zeus.zsmsm
. $ZEUS_BASE_ROOT/ZEUSSysSoft/Setup/setup_ZEUS.sh
#
export LD_LIBRARY_PATH=./:$LD_LIBRARY_PATH
export LD_LIBRARY_PATH=./lib:$LD_LIBRARY_PATH
export LD_LIBRARY_PATH=/opt/products/CLHEP/2.0.3.1/lib:$LD_LIBRARY_PATH
#dcache speed-up
export DCACHE_RAHEAD=1
export DCACHE_RA_BUFFER=102400
#
# run the program and write results to file 
./main.exe config.xml > main.log
#
# erase unwanted files
#rm -rf Makefile
#rm -rf *.o
#rm -rf ./lib
#rm -rf ./source
#rm -rf ./include
#rm -rf ./run_script.sh
#rm -rf ./tarball.tgz
#
# print time when the jobs finished.
#
#date

