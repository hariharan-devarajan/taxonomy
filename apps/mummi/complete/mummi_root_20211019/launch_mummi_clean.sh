#!/bin/bash

CPWD=$PWD
source ~/.mummi/config.mummi.sh
unset LD_PRELOAD
#perl -e 'for(<*>){((stat)[9]<(unlink))}'
echo "Clean MuMMI root"
pushd $MUMMI_ROOT
mkdir -p ../.tmp
mv -- * ../.tmp
rm -rf ../.tmp &
echo "Copy macro folder"
cp -r $CPWD/macro .
chmod 777 macro -R
echo "Run MuMMI"
#rsync -a --delete temp/ $MUMMI_ROOT
ls -l $MUMMI_ROOT   
export pfs=/p/gpfs1/iopp
bsub -J Campaign4 -nnodes $MUMMI_NNODES -W "2:00" -core_isolation 0 -G asccasc -q pbatch $MUMMI_APP/setup/master_batch.sh $MUMMI_NNODES
