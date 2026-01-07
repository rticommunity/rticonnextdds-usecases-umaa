#!/bin/bash

# Add Necessary Files to XML variable
export NDDS_QOS_PROFILES=""
export PYTHONPATH=""
exit=false
cmd=""


# Set verbosity level
# 0 = SILENT
# 1 = EXCEPTION
# 2 = WARNING
# 3 = STATUS_LOCAL
# 4 = STATUS_REMOTE
# 5 = STATUS_ALL

export VERBOSITY=2
export DOMAIN_ID=1

if [ "$1" == "autopilot" ]; then
    component=$1
    if [ "$2" ]; then
        DOMAIN_ID=$2
    fi
    if [ $component == "autopilot" ]; then
        # Check for binary in top-level build folder
        if [ -f "../../build/examples/service-template-wrappers/service_autopilot" ]; then
            cmd="../../build/examples/service-template-wrappers/service_autopilot"
        else
            echo "Error: autopilot binary not found in ../../build/examples/service-template-wrappers/"
            echo "Build from repository root: cd ../../ && mkdir -p build && cd build && cmake .. && make service_autopilot"
            exit 1
        fi
    else
        cmd="python3 ./py/umaa_$component.py"

        # Add UMAA Python modules to PATH
        PYTHONPATH+="../../datamodel/umaa/python_flat"
        echo "PYTHONPATH updated: "
        echo $PYTHONPATH
    fi
else
    exit=true
fi

if $exit; then
    echo "pass in: \n
        arg1: component name: ["autopilot"] \n
        arg2: Domain ID \n
        example: start_component.sh autopilot 5 "
else

    # start
    $cmd -v $VERBOSITY -d $DOMAIN_ID

fi
