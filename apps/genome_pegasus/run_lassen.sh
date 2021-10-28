#!/bin/bash
### LSF syntax
#BSUB -cwd /usr/workspace/iopp/software/iopp/apps/genome_pegasus 
#BSUB -nnodes 1            #number of nodes
#BSUB -W 02:00             #walltime in minutes
#BSUB -G asccasc           #account
#BSUB -J genome-pegasus   #name of job
#BSUB -q pbatch            #queue to use

CPWD=$PWD
source /usr/workspace/iopp/install_scripts/bin/iopp-init
source /usr/workspace/iopp/install_scripts/bin/spack-init
module load mpifileutils/0.11
spack env activate -p genome-pegasus


source /usr/WS2/iopp/software/htcondor-V9.0.6/install/bin/condor.sh

/usr/workspace/iopp/software/htcondor-V9.0.6/install/bin/condor_log_clean

sleep 5

export PATH=/usr/WS2/iopp/software/pegasus/install/bin:$PATH
export PEGASUS_HOME=/usr/WS2/iopp/software/pegasus/install
/usr/WS2/iopp/software/htcondor-V9.0.6/install/sbin/condor_master


sleep 10

JOB_DIR=/p/gpfs1/iopp/temp/1000-genome-$USER
rm -rf $JOB_DIR
mkdir -p $JOB_DIR
cp -r /usr/workspace/iopp/applications/1000genome-workflow/* $JOB_DIR

pushd $JOB_DIR

cp $CPWD/sites.yml sites.local.yml 
cp $CPWD/daxgen.py daxgen_custom.py

./daxgen_custom.py -S sites.local.yml -e local -n run_dir

pushd $JOB_DIR/run_dir

pegasus-run $PWD
sleep $((2*3500))
pegasus-status -l $PWD
pegasus-remove $PWD

popd
popd
