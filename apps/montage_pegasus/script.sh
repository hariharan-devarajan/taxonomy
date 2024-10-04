#!/bin/bash
ps -aef | grep haridev | grep sleep | grep -v jsrun | grep -v var_monitor | awk {'print $2'} | xargs kill -9 2> /dev/null
echo Successfully killed the sleep from var_monitor
