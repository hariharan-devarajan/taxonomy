#!/bin/bash
### LSF syntax
#BSUB -cwd /usr/workspace/iopp/software/iopp/apps/galaxy_pegasus 
#BSUB -nnodes 32         #number of nodes
#BSUB -W 03:00             #walltime in minutes
#BSUB -G asccasc           #account
#BSUB -J galaxy_pegasus   #name of job
#BSUB -q pbatch            #queue to use

CPWD=$PWD
source /usr/workspace/iopp/install_scripts/bin/iopp-init
source /usr/workspace/iopp/install_scripts/bin/spack-init
module load mpifileutils/0.11
spack env activate -p galaxy-pegasus
conda activate $CPWD/env

source /usr/WS2/iopp/software/htcondor-V9.0.6/install/bin/condor.sh

echo "Loading environment - Done"
sleep 5

export PATH=/usr/WS2/iopp/software/spack/var/spack/environments/galaxy-pegasus/.spack-env/view/bin:/usr/WS2/iopp/software/pegasus/install/bin:$PATH
export PEGASUS_HOME=/usr/WS2/iopp/software/pegasus/install
/usr/WS2/iopp/software/htcondor-V9.0.6/install/sbin/condor_master


echo "Loading condor - Done"

JOB_DIR=/p/gpfs1/iopp/temp/galaxy-pegasus-$USER/app
SCRATCH_DIR=/p/gpfs1/iopp/temp/galaxy-pegasus-$USER/scratch

echo "Cleaning folders"
mv /p/gpfs1/iopp/temp/galaxy-pegasus-$USER /p/gpfs1/iopp/temp/.tmp1
rm -rf /p/gpfs1/iopp/temp/.tmp1 &

sleep 10
echo "Preparing workflow folder - Start"
mkdir -p $JOB_DIR
mkdir -p $SCRATCH_DIR
cp -r $CPWD/run_workflow_lassen.py $JOB_DIR/

pushd $JOB_DIR

cp $CPWD/sites.yml.lassen . 
cp $CPWD/run_workflow_lassen.py .

echo "Building workflow folder - Done"
./run_workflow_lassen.py --sites sites.lassen.yml execution_site condorpool --pmc --data_path /p/gpfs1/iopp/datasets/pegasus_galaxy/images_training_rev1 

pushd $JOB_DIR/run_dir

echo "Planning of workflow - Done"
pegasus-run $PWD
sleep $((3*3550))
pegasus-status -l $PWD
pegasus-remove $PWD

popd
popd
