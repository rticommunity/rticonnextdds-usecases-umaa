#!/bin/bash

# Add Necessary Files to XML variable
export NDDS_QOS_PROFILES=""
export PYTHONPATH=""
exit=false

cmd=""

if [ "$1" == "autopilot" ] || [ "$1" == "usvnav" ] || [ "$1" == "globalvectorcmd" ] || [ "$1" == "logging" ]; then
    component=$1
    if [ $component == "autopilot" ]; then
        cmd="./build/$component"

    elif [ "$2" ]; then
        export DOMAIN_ID=$2
    else
        cmd="python3 ./py/umaa_$component.py"

        # Add UMAA Python modules to PATH
        PYTHONPATH+="../datamodel/umaa/python_flat"
        echo "PYTHONPATH updated: "
        echo $PYTHONPATH
    fi
else
    exit=true
fi

if $exit; then
    echo "pass in: \n
        arg1: component name: ["autopilot", "usvnav", "globalvectorcmd", "logger"] \n
        arg2: Domain ID to override <components>.xml definition \n
        example: start_component.sh autopilot 5 "
else

    # These xml files do need to be added in this order:

    # Add QOS File
    NDDS_QOS_PROFILES+="../resources/qos/umaa_qos_lib.xml;"
    
    # Add UMAA Domain Topics
    NDDS_QOS_PROFILES+="../resources/domain/umaa_domain_lib.xml;"
    
    # Add desired component
    NDDS_QOS_PROFILES+="../resources/components/umaa_${component}.xml"

    echo "NDDS_QOS_PROFILES updated: "
    echo $NDDS_QOS_PROFILES

    # start
    $cmd

fi