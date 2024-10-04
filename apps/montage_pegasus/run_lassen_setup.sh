#!/bin/bash
### LSF syntax
#BSUB -cwd /usr/workspace/iopp/software/iopp/apps/montage_pegasus 
#BSUB -nnodes 1          #number of nodes
#BSUB -W 02:00             #walltime in minutes
#BSUB -G asccasc           #account
#BSUB -J montage-pegasus   #name of job
#BSUB -q pdebug            #queue to use

echo "Loading environment - Start"
module load mpifileutils
CPWD=$PWD
source /usr/workspace/iopp/install_scripts/bin/iopp-init
source /usr/workspace/iopp/install_scripts/bin/spack-init

spack env activate montage-pegasus


spack load htcondor-git@9.0.6 pegasus@5.0  python@3.9.6 montage@main  py-pip  py-pyyaml
source /usr/WS2/iopp/software/htcondor-V9.0.6/install/bin/condor.sh

/usr/WS2/iopp/software/htcondor-V9.0.6/install/sbin/condor_master


sleep 10

echo "Loading environment - Done"

RUN=job/custom

echo "Create worklow directory - Start"
pushd /usr/workspace/iopp/applications/montage-workflow-v3

jsrun /usr/tce/packages/mpifileutils/mpifileutils-0.11.1/bin/drm /p/gpfs1/iopp/temp/montage-workflow-${USER}/scratch
jsrun /usr/tce/packages/mpifileutils/mpifileutils-0.11.1/bin/drm $RUN

mkdir -p $RUN

cp $CPWD/sites.yml.lassen $RUN/sites.yml
cp $CPWD/pegasus.properties.lassen $RUN/pegasus.properties
cp $CPWD/transformations.yml.lassen $RUN/transformations.yml 

pushd $RUN

echo "Create worklow directory - End"
echo "Create worklow data - Start"
jsrun /usr/tce/packages/mpifileutils/mpifileutils-0.11.1/bin/drm $RUN/data
#/usr/workspace/iopp/applications/montage-workflow-v3/montage-workflow.py --center "56.7 24.00" --degrees 2.0 --band dss:DSS2B:1 --band dss:DSS2R:2 --band dss:DSS2IR:3 --band dss:DSS2B:4 --band dss:DSS2R:5 --band dss:DSS2IR:6 --band dss:DSS2B:7 --band dss:DSS2R:8 --band dss:DSS2IR:9 --band dss:DSS2B:10 --band dss:DSS2R:11 --band dss:DSS2IR:12 --band dss:DSS2IR:13 --band dss:DSS2B:14 --band dss:DSS2R:15 --band dss:DSS2IR:16 --band dss:DSS2B:17 --band dss:DSS2R:18 --band dss:DSS2IR:19 --band dss:DSS2B:20 --band dss:DSS2R:21 --band dss:DSS2IR:22 --band dss:DSS2R:23 --band dss:DSS2IR:24
#/usr/workspace/iopp/applications/montage-workflow-v3/montage-workflow.py --center "56.7 24.00" --degrees 2.0 --band dss:DSS2B:1 --band dss:DSS2R:2 --band dss:DSS2IR:3 --band dss:DSS2B:4 --band dss:DSS2R:5 --band dss:DSS2IR:6 --band dss:DSS2B:7 --band dss:DSS2R:8 --band dss:DSS2IR:9 --band dss:DSS2B:10 --band dss:DSS2R:11 --band dss:DSS2IR:12
#/usr/workspace/iopp/applications/montage-workflow-v3/montage-workflow.py --center "56.7 24.00" --degrees 2.0 --band dss:DSS2B:1 --band dss:DSS2R:2 --band dss:DSS2IR:3 --band dss:DSS2B:4 --band dss:DSS2R:5 --band dss:DSS2IR:6
#/usr/workspace/iopp/applications/montage-workflow-v3/montage-workflow.py --center "24.0 24.00" --degrees 4.0 --band dss:DSS2B:blue --band dss:DSS2R:green --band dss:DSS2IR:red
#/usr/workspace/iopp/applications/montage-workflow-v3/montage-workflow.py --center "56.7 24.00" --degrees 0.5 --band dss:DSS2B:blue --band dss:DSS2R:green --band dss:DSS2IR:red
#/usr/workspace/iopp/applications/montage-workflow-v3/montage-workflow.py --center "56.7 24.00" --degrees 2.0 --band dss:DSS2B:blue --band dss:DSS2R:green --band dss:DSS2IR:red
/usr/workspace/iopp/applications/montage-workflow-v3/montage-workflow.py --center "15.09552 -0.74559" --degrees 7.0 --band 2mass:j:red --band 2mass:h:green --band 2mass:k:blu

du -sh data 

echo "Create worklow data - End"
echo "Plan worklow - Start"
#pegasus-plan --dir work --dax data/montage-workflow.yml --output-site local --cluster horizontal --relative-dir run_dir
pegasus-plan --dir work --dax data/montage-workflow.yml --output-site local --sites condorpool  --cluster whole --relative-dir run_dir
exit 0

pushd work/run_dir

#recorder_lib_path=/usr/workspace/iopp/software/Recorder/install/lib/librecorder.so
#export RECORDER_TRACES_DIR=$pfs/recorder_logs/montage_pegasus_${USER}_${LSB_JOBID}
#export LD_PRELOAD=$recorder_lib_path

#export RECORDER_NO_MPI=1

sleep 30
echo "Plan worklow - End"
echo "Run worklow - Start"
pegasus-run $PWD

sleep $((6*3500))
#unset RECORDER_NO_MPI
pegasus-status $PWD
echo "Run worklow - End"

popd
popd
popd
