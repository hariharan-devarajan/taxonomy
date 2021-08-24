Loading ddcMD and running:

export SPACK_ROOT="/usr/gapps/mummi/spack/"
source $SPACK_ROOT/share/spack/setup-env.sh
spack load -r ddcmd@20210520

The above should put "ddcMD_GPU" into your path.

# Running ddcMD

Reference the "cganalysis-mu12-0ras0raf-instance1_000000001704.flux.sh" script.
The current script utilizes an in-situ script that runs ddcMD. This script can be modified to run
just ddcMD by replacing the cganalysis call with:

cd <simulation path>
ddcMD_GPU object.data molecule.data >> ddcmd.out

The required resources for the call above are 1 GPU, 1 task, and 1 core per task. (The reference script
uses 3 cores per taks to account for analysis)

You'll need to modify the output path in the script as well.
