#!/bin/bash
### LSF syntax
#BSUB -cwd /usr/workspace/iopp/software/iopp/apps/genome_pegasus 
#BSUB -nnodes 4          #number of nodes
#BSUB -W 04:00             #walltime in minutes
#BSUB -G asccasc           #account
#BSUB -J genome-pegasus   #name of job
#BSUB -q pbatch            #queue to use

CPWD=$PWD
source /usr/workspace/iopp/install_scripts/bin/iopp-init
source /usr/workspace/iopp/install_scripts/bin/spack-init
module load mpifileutils/0.11
spack env activate -p genome-pegasus


source /usr/WS2/iopp/software/htcondor-V9.0.6/install/bin/condor.sh

echo "Loading environment - Done"
sleep 5

export PATH=/usr/WS2/iopp/software/spack/var/spack/environments/genome-pegasus/.spack-env/view/bin:/usr/WS2/iopp/software/pegasus/install/bin:$PATH
export PEGASUS_HOME=/usr/WS2/iopp/software/pegasus/install
/usr/WS2/iopp/software/htcondor-V9.0.6/install/sbin/condor_master


echo "Loading condor - Done"
sleep 10

JOB_DIR=/p/gpfs1/iopp/temp/1000-genome-$USER

mkdir -p empty_dir
rsync -a --delete empty_dir/ /p/gpfs1/iopp/temp/1000-genome/scratch/run_dir
rsync -a --delete empty_dir/ $JOB_DIR

echo "Cleaning folders"
#rm -rf /p/gpfs1/iopp/temp/1000-genome/scratch/run_dir/*
#rm -rf $JOB_DIR
mkdir -p $JOB_DIR
cp -r /usr/workspace/iopp/applications/1000genome-workflow/* $JOB_DIR

pushd $JOB_DIR

cp $CPWD/sites.yml sites.local.yml 
cp $CPWD/daxgen_lassen.py daxgen_lassen.py

echo "Building workflow folder - Done"
./daxgen_lassen.py -S sites.local.yml -e condorpool -n run_dir --pmc

pushd $JOB_DIR/run_dir

echo "Planning of workflow - Done"
pegasus-run $PWD
sleep $((4*3500))
pegasus-status -l $PWD
pegasus-remove $PWD

popd
popd
