CONDOR_CONFIG=/usr/WS2/haridev/iopp/software/condor/etc/condor_config
export CONDOR_CONFIG

PATH=/usr/WS2/haridev/iopp/software/condor/bin:/usr/WS2/haridev/iopp/software/condor/sbin:$PATH
export PATH

if [ "X" != "X${PYTHONPATH-}" ]; then
    PYTHONPATH=/usr/WS2/haridev/iopp/software/condor/lib/python3:$PYTHONPATH
else
    PYTHONPATH=/usr/WS2/haridev/iopp/software/condor/lib/python3
fi
export PYTHONPATH
