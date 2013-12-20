#!/bin/zsh
#
#
# This is a simple example of a SGE batch script

# request Bourne shell as shell for job
#$ -S /bin/zsh

#
# print date and time
echo "$QUEUE $JOB $HOST"

# print date and time again
date

echo $TMP

# workaround for occasional NAF problem with SL6
source /etc/profile.d/modules.sh

# ROOT for SL6
module load root/5.34

echo $SHELL
#echo $ROOTSYS
# . /afs/cern.ch/sw/lcg/contrib/gcc/4.3/x86_64-slc5/setup.sh
# cd /afs/cern.ch/sw/lcg/app/releases/ROOT/5.27.04/x86_64-slc5-gcc43-opt/root
# . bin/thisroot.sh
# /usr/local/bin/root_5.26.00 -b -q

# Executable programm
EXEC=/afs/desy.de/user/d/diont/public/InclDiTri_DIS/main.exe
CONFIGFILE=$1
NAFOUTPUTDIR=$2

# Execute program
echo "$EXEC $CONFIGFILE $NAFOUTPUTDIR"
$EXEC $CONFIGFILE $NAFOUTPUTDIR

