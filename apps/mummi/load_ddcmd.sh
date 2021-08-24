#!/bin/bash

set -x

export SPACK_ROOT="/usr/gapps/mummi/spack"
source $SPACK_ROOT/share/spack/setup-env.sh
spack load -r ddcmd@20210520

set +x
