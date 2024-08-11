#!/bin/bash

# Add Necessary Files to XML variable
export NDDS_QOS_PROFILES=""

exit=false

if [ "$1" == "autopilot" ] || [ "$1" == "usvnav" ]; then
    component=$1
    if [ "$3" ]; then
        export DOMAIN_ID=$3
    fi
else
    $exit=true
fi

if [ "$2" == "pub" ] || [ "$2" == "sub" ]; then 
    suffix=$2
else
    $exit=true
fi

if $exit; then
    echo "pass in: \n
        arg1: component name: ["autopilot", "usvnav"] \n
        arg2: pub or sub \n
        arg3: Domain ID to override components.xml definition 
        example: start_component.sh autopilot pub 5 "
else

    # These xml files do need to be added in this order:

    # Add Base Components File
    # XML+="./resources/umaa_6/components/base.xml;"


    # Add QOS File
    NDDS_QOS_PROFILES+="./resources/qos/umaa_qos.xml;"
    
    # Add UMAA base
    NDDS_QOS_PROFILES+="./resources/umaa_6/components/base.xml;"
    
    # Add desired component
    NDDS_QOS_PROFILES+="./resources/umaa_6/components/${component}.xml"

    echo $NDDS_QOS_PROFILES

    # start python script
    python3 ./python/${component}_${suffix}.py


fi