#/bin/bash

SCRIPT_DIR=$( cd -- "$( dirname -- "${BASH_SOURCE[0]}" )" &> /dev/null && pwd )
source ${SCRIPT_DIR}/../../setup.sh

flux alloc -N $IOPP_JOB_NODES -t ${IOPP_JOB_TIME} -q ${IOPP_JOB_QUEUE} ${SCRIPT_DIR}/script.sh
