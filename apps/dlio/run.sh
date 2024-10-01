#/bin/bash

SCRIPT_DIR=$( cd -- "$( dirname -- "${BASH_SOURCE[0]}" )" &> /dev/null && pwd )
source ${SCRIPT_DIR}/../../setup.sh

IOPP_OUTPUT=${IOPP_PROJECT_HOME}/apps/genome_pegasus/logs/${IOPP_JOB_NAME}
flux batch -N $IOPP_JOB_NODES -t ${IOPP_JOB_TIME} -q ${IOPP_JOB_QUEUE} --exclusive ${SCRIPT_DIR}/script.sh  ${SCRIPT_DIR}
FLUXID=$(flux job last)
touch flux-$FLUXID.out
tail -f flux-$FLUXID.out