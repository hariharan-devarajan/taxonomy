#!/bin/bash
#INFO (nodes) 1
#INFO (walltime) inf
#INFO (flux_uri) local:///tmp/flux-D5tkSk/597/local
#INFO (flux version) 0.19.0


ulimit -m 28 10485760
echo "date:" `date`
echo "host:" `hostname`
echo "pwd: " `pwd`
echo "uri:  " $FLUX_URI

module load spectrum-mpi/10.3.1.2-20200121
source $MUMMI_CODE/setup/dbr/load_client.sh
for simname in pfpatch_000004078716; do 

  echo "--- Starting $simname ---"
  outpath=/gpfs/alpine/lrn005/proj-shared/Campaign3/roots/mummi_c3_20201223/sims-cg/$simname
  locpath=/var/tmp/mummi/cg/${simname}_20210225-230318

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


  flux mini run -N 1 -n 1 -c 3 -o "mpi=spectrum" sh -c "autobind-12 cganalysis  --simname $simname  --pathremote $outpath  --path $locpath  --fstype mummi  --fbio mummi  --maxsimtime 250000000  --frameProcessBatchSize 5  --simbin ddcMD  --siminputs $outpath  -c  -d 2  --fcount $cframe  --nprocs 3 >> analysis.log 2>&1" &

  sleep 10
done
echo "Waiting..."
wait

#### copy log files back
for simname in pfpatch_000004078716; do 

  outpath=/gpfs/alpine/lrn005/proj-shared/Campaign3/roots/mummi_c3_20201223/sims-cg/$simname
  locpath=/var/tmp/mummi/cg/${simname}_20210225-230318
  cp $locpath/*.log $outpath/
done

