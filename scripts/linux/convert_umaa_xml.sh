#!/bin/bash

# This script just iterates through all the folders in the $UMAA_HOME directory
# and converts the idl files to xml files.

dir=$PWD
cpp_vers=$1

# Check NDDSHOME variable
if [[ -z "${NDDSHOME}" ]]; then
    echo "Must set the NDDSHOME environment variable "
    exit 1;
fi

# Strip out version number
dds_vers=$(echo "$NDDSHOME" | grep -o '[0-9]' | head -1)
echo "USING DDS VERSION: " $dds_vers

echo "Generating XML type files"
if [[ $dds_vers == 6 ]]; 
then
    echo "Backwards compatible mode"
    find $UMAA_HOME/UMAA $UMAA_HOME/BasicTypes -maxdepth 5 -mindepth 1  -type f \
    -iname '*.idl' -print -exec rtiddsgen -I $UMAA_HOME -convertToXML {} \;
else # Use recursion flag if > 7.x
    rtiddsgen -I $UMAA_HOME -convertToXML -inputIdl $UMAA_HOME/UMAA $UMAA_HOME/BasicTypes -r

fi
