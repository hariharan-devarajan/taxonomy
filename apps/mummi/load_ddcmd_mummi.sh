#!/bin/bash

#init spack
export SPACK_ROOT="/usr/gapps/mummi/spack"
source $SPACK_ROOT/share/spack/setup-env.sh
# Load current modules
module load gcc/8.3.1
module load cmake/3.20.2
module load cuda/10.1.105
module load spectrum-mpi/2019.06.24
module load fftw/3.3.8

# Export explicit compiler binaries
export CC=`which mpicc`
export CXX=`which mpic++`
export F90=mpif90
export F77=mpif77
export FC=mpif90

# --------------------------------------------------------
# System Settings
export OMP_NUM_THREADS=4

# Load the spack packages
#spack load -r ddcmd@20210520

#export LD_LIBRARY_PATH=/usr/tce/packages/cuda/cuda-10.1.105/nvidia/compat/:$LD_LIBRARY_PATH

# add autobind to path
#export MUMMI_AUTOBIND_PATH=/usr/gapps/mummi/bin
#export PATH=$MUMMI_AUTOBIND_PATH:$PATH

source ~/.mummi/config.mummi.sh
source $MUMMI_APP/setup/setup.env.sh

