#!/bin/bash

# This script just iterates through all the folders in the $UMAA_HOME directory
# and converts the idl files to xml files.

dir=$PWD
cpp_vers=$1
SECONDS=0

# Check NDDSHOME variable
if [[ -z "${NDDSHOME}" ]]; then
    echo "Must set the NDDSHOME environment variable "
    exit 1;
fi

# Check UMAA_TYPES variable
if [[ -z "${UMAA_TYPES}" ]]; then
    echo "Must set the UMAA_TYPES environment variable "
    exit 1;
fi


echo "Generating XML type files"
find $UMAA_TYPES/idl/UMAA $UMAA_TYPES/idl/BasicTypes -maxdepth 5 -mindepth 1  -type f \
-iname '*.idl' -print -exec rtiddsgen -I $UMAA_TYPES/idl -convertToXML {} -d $UMAA_TYPES/xml \;

# Flatten includes to same folder
echo "Modifying xml files"
find $UMAA_TYPES/xml -type f -iname '*.xml' -print \
-exec sed -i -r 's/<include.*(\/.*\/)/<include file=".\1/g' {} \;


duration=$SECONDS
echo "$(($duration / 60)) minutes and $(($duration % 60)) seconds elapsed."