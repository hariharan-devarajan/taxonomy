#!/bin/bash

# ------------------------------------------------------------------------------
# likely to be set for each run
# ------------------------------------------------------------------------------

# path where you want to run mummi (workspace)
export MUMMI_ROOT=/p/gpfs1/splash/campaign4/roots/tests/mummi_c4_test_060321

# ------------------------------------------------------------------------------
# all these are set up automatically for the group (setup/envs/env.host.sh)
# but they can be overwritten per user
# ------------------------------------------------------------------------------

# virtual environment name of your choice
# no need to change (unless you want to do a complete reinstall)
#export MUMMI_VENV=mummi-ras_051421
#export MUMMI_VENV=mummi-ras_051521
export MUMMI_VENV=mummi-ras_101321

# path where you clone mummi repositories
# no need to change (unless you move your repositories)
export MUMMI_RESOURCES=/usr/WS1/mummiusr/mummi_resources
export MUMMI_CORE=/usr/WS1/mummiusr/mummi-core
export MUMMI_APP=/usr/WS1/mummiusr/mummi-ras

# ------------------------------------------------------------------------------
# likey not to be changed
# ------------------------------------------------------------------------------

# group root and spack root
export MUMMI_GRP_ROOT=/usr/gapps/mummi
export MUMMI_SPACK_ROOT=/usr/gapps/mummi/spack

# ------------------------------------------------------------------------------
