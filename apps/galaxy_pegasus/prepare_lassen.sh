#!/bin/bash

CPWD=/usr/workspace/iopp/software/iopp/apps/galaxy_pegasus

source /usr/workspace/iopp/install_scripts/bin/iopp-init
source /usr/workspace/iopp/install_scripts/bin/spack-init
spack env activate -p galaxy-pegasus-conda
conda-activate
conda activate galaxy-pegasus
source /usr/WS2/iopp/software/htcondor-V9.0.6/install/bin/condor.sh

echo "Loading environment - Done"
sleep 5

export PEGASUS_HOME=/usr/WS2/iopp/software/pegasus/install
export PATH=$PEGASUS_HOME/bin:$PEGASUS_HOME/sbin:$PATH


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

cp -r /usr/workspace/iopp/applications/galaxy-classification-workflow-llnl/* .
cp $CPWD/sites.yml.lassen . 
./unzip_dataset.sh > unzip.log 
export LC_ALL=en_US.utf-8
export LANG=en_US.utf-8

echo "Building workflow folder - Done"
./galaxy_generator.py --sites sites.yml.lassen --execution_site condorpool --num_workers=40 --trials 1 --epochs 2 --batch 192

popd

bsub $CPWD/run_lassen.sh
