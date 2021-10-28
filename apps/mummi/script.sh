#!/bin/sh


#IFS=$'\r\n' GLOBIGNORE='*' command eval 'PATCHES=($(cat $1))'
#if [ -z "${OMPI_COMM_WORLD_SIZE}" ]
#then
#    echo "NOT USING MPI"
#    WORLD_RANK=0
#    WORLD_SIZE=1
#else
#    WORLD_RANK=$OMPI_COMM_WORLD_RANK
#    WORLD_SIZE=$OMPI_COMM_WORLD_SIZE
#fi

#modulo=$(( $WORLD_RANK % ${WORLD_SIZE} ))
simname=$1 #${PATCHES[modulo]}
proc=$2
INTRE='^[0-9]+$'

srcpath=$iopp/applications/mummi/sims-cg/$simname

if ! [[ $proc =~ $INTRE ]] ; then
   echo "ERROR: number of processes is not a number" >&2; exit 1
fi

if [[ ! -d $srcpath ]]; then
    echo "Simulation directory not found ${srcpath}. Exiting."
    exit 1
fi

echo "proc $proc running simulation $simname on directory $srcpath"
cd ${LSB_JOBID}
CURR_DIR=$PWD
ulimit -m 28 10485760
echo "date:" `date`
echo "host:" `hostname`
echo "pwd: " `pwd`
echo "uri:  " $FLUX_URI
#source $PWD/load_ddcmd.sh #> /dev/null 2>&1
parent_outpath=$pfs/temp/$LSB_JOBID

echo "--- Starting $simname ---"
outpath=$pfs/temp/$LSB_JOBID/$proc/sims-cg/$simname
mkdir -p $outpath
cp -r $srcpath/* $outpath/
locpath=/var/tmp/$USER/cg/${simname}_${LSB_JOBID}_${proc}
mkdir -p $locpath; 

cd $locpath

cp $outpath/ConsAtom.data                         $locpath/
cp $outpath/martini.data                          $locpath/
cp $outpath/molecule.data                         $locpath/
cp $outpath/object.data                           $locpath/
cp $outpath/restraint.data                        $locpath/
cp $outpath/topol.tpr                             $locpath/
cp $outpath/lipids-water-eq4.gro                  $locpath/
cp $outpath/POPX_Martini_v2.0_lipid.itp           $locpath/
cp $outpath/resItpList                            $locpath/

cp -P $outpath/restart                            $locpath/
cp -r $(dirname `readlink -f $outpath/restart`)   $locpath/

rs=`readlink -f $locpath/restart`
sname=`basename $(dirname $rs)`
snum=$(echo "${sname//[!0-9]/}")
[[ ! -z "$snum" ]] && cframe=`expr $snum + 25000` || cframe=25000

cd $outpath
# 4 tasks on 4 resources on 1 CPU and 4 GPUs per node
#which ddcMD_GPU
ddcMD_GPU -o object.data molecule.data #> $CURR_DIR/${LSB_JOBID}_${proc}.log
#hostname
cd $CURR_DIR
echo "Finished simulation $simname"
exit 0
