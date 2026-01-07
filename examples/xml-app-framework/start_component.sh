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

if [ "$1" == "autopilot" ] || [ "$1" == "usvnav" ] || [ "$1" == "globalvectorcmd" ] || [ "$1" == "logging" ]; then
    component=$1
    if [ "$2" ]; then
        export DOMAIN_ID=$2
    fi
    if [ $component == "autopilot" ]; then
        # Check for binary in top-level build folder
        if [ -f "../../build/examples/xml-app-framework/xml_app_autopilot" ]; then
            cmd="../../build/examples/xml-app-framework/xml_app_autopilot"
        else
            echo "Error: autopilot binary not found in ../../build/examples/xml-app-framework/"
            echo "Build from repository root: cd ../../ && mkdir -p build && cd build && cmake .. && make xml_app_autopilot"
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
    echo "pass in:
        arg1: component name: ["autopilot", "usvnav", "globalvectorcmd", "logging"]
        arg2: Domain ID to override <components>.xml definition
        example: start_component.sh autopilot 5 "
else

    # These xml files do need to be added in this order:

    # Add QOS File
    NDDS_QOS_PROFILES+="../../qos/umaa_qos_lib.xml;"
    
    # Add UMAA Domain Topics
    NDDS_QOS_PROFILES+="./domain/umaa_domain_lib.xml;"
    
    # Add desired component
    NDDS_QOS_PROFILES+="./components/umaa_${component}.xml"

    echo "NDDS_QOS_PROFILES updated: "
    echo $NDDS_QOS_PROFILES

    # start
    $cmd -v $VERBOSITY

fi
