#!/bin/bash
### LSF syntax
#BSUB -nnodes 1            #number of nodes
#BSUB -W 30                #walltime in minutes
#BSUB -G asccasc           #account
#BSUB -J mummi             #name of job
#BSUB -q pdebug            #queue to use


ulimit -m 28 10485760
echo "date:" `date`
echo "host:" `hostname`
echo "pwd: " `pwd`
echo "uri:  " $FLUX_URI

for simname in mu-6-1ras1raf-instance3_000000001169; do 

  echo "--- Starting $simname ---"
  outpath=/p/gpfs1/haridev/project/taxonomy/apps/mummi/sims-cg/$simname
  locpath=/var/tmp/$USER/cg/${simname}_20210715-143741
  mkdir -p $locpath; cd $locpath

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
  #flux mini run -n 1 -N 1 -c 3 -g 1 -o mpi=spectrum sh -c  "autobind-12 cganalysis  --simname $simname  --pathremote $outpath  --path $locpath  --fstype mummi  --fbio mummi  --maxsimtime 5000000  --frameProcessBatchSize 5  --simbin ddcMD_GPU  --siminputs $outpath  -c  -d 2  --fcount $cframe  --nprocs 3 >> cg_analysis.out 2>&1" &
  # 4 tasks on 4 resources on 1 CPU and 4 GPUs per node
  jsrun -n 4 -a 1 -c 1 -g 1 -r 4 ddcMD_GPU object.data molecule.data >> ddcmd.out &
  sleep 10
done
echo "Waiting..."
wait

#### copy log files back
for simname in mu-6-1ras1raf-instance3_000000001169; do 

  outpath=/p/gpfs1/haridev/project/taxonomy/apps/mummi/sims-cg/$simname
  locpath=/var/tmp/$USER/cg/${simname}_20210715-143741
  cp $locpath/*.log $outpath/
  cp $locpath/*.out $outpath/
done

