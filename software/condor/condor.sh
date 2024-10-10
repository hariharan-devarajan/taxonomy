CONDOR_CONFIG=/usr/workspace/haridev/iopp/software/condor/etc/condor_config
export CONDOR_CONFIG

PATH=/usr/workspace/haridev/iopp/software/condor/bin:/usr/workspace/haridev/iopp/software/condor/sbin:$PATH
export PATH

if [ "X" != "X${PYTHONPATH-}" ]; then
    PYTHONPATH=/usr/workspace/haridev/iopp/software/condor/lib/python3:$PYTHONPATH
else
    PYTHONPATH=/usr/workspace/haridev/iopp/software/condor/lib/python3
fi
export PYTHONPATH
