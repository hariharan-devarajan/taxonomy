#!/bin/bash
### LSF syntax
#BSUB -cwd /usr/workspace/iopp/software/iopp/apps/montage_pegasus 
#BSUB -nnodes 1            #number of nodes
#BSUB -W 11:00             #walltime in minutes
#BSUB -G asccasc           #account
#BSUB -J montage-pegasus   #name of job
#BSUB -q pbatch            #queue to use


source /usr/workspace/iopp/install_scripts/bin/iopp-init
source /usr/workspace/iopp/install_scripts/bin/spack-init

spack env activate montage-pegasus


source /usr/WS2/iopp/software/htcondor-V9.0.6/install/bin/condor.sh

/usr/WS2/iopp/software/htcondor-V9.0.6/install/sbin/condor_master

sleep 10

pushd /usr/workspace/iopp/applications/montage-workflow-v3

rm -rf job/$LSB_JOBID

mkdir -p job/$LSB_JOBID/

cp sites.yml job/$LSB_JOBID/
cp pegasus.properties job/$LSB_JOBID/ 

pushd job/$LSB_JOBID

rm -rf job/$LSB_JOBID/data
/usr/workspace/iopp/applications/montage-workflow-v3/montage-workflow.py --center "56.7 24.00" --degrees 2.0 --band dss:DSS2B:blue --band dss:DSS2R:green --band dss:DSS2IR:red



pegasus-plan --dir work --dax data/montage-workflow.yml --output-site local --cluster horizontal --relative-dir run_dir

pushd work/run_dir

pegasus-run $PWD

sleep 5000
pegasus-status -l .

sleep 5000
pegasus-status -l .

sleep 5000
pegasus-status -l .


sleep 5000
pegasus-status -l .


sleep 5000
pegasus-status -l .


sleep 5000
pegasus-status -l .


sleep 5000
pegasus-status -l .


popd
popd
popd
