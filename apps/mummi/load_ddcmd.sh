#!/bin/bash

#init spack
source iopp-init
spack env activate -p ddcmd

# Export explicit compiler binaries
export CC=`which mpicc`
export CXX=`which mpic++`
export F90=mpif90
export F77=mpif77
export FC=mpif90

# --------------------------------------------------------
# System Settings
export OMP_NUM_THREADS=4

# add autobind to path
export MUMMI_AUTOBIND_PATH=/usr/gapps/mummi/bin
export PATH=$MUMMI_AUTOBIND_PATH:$PATH
