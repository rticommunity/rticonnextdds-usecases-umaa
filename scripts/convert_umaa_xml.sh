#!/bin/bash

# This script just iterates through all the folders in the $UMAA_TYPES directory
# and converts the idl files to xml files.
# If "flatten" arg passed in will generate to /xml folder and flatten includes.

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

# Clear out directory
rm -rf $UMAA_TYPES/xml

if [[ "$1" == "flatten" ]]; then
    echo "Generating XML type files to /xml folder"
    find $UMAA_TYPES/UMAA $UMAA_TYPES/BasicTypes -maxdepth 5 -mindepth 1  -type f \
    -iname '*.idl' -print -exec rtiddsgen -I $UMAA_TYPES -convertToXML {} -d $UMAA_TYPES/xml \;

    # Flatten includes
    echo "Modifying xml files"
    find $UMAA_TYPES/xml -type f -iname '*.xml' -print \
    -exec sed -i -r 's/<include.*(\/.*\/)/<include file=".\1/g' {} \;

    echo "Creating top level includes xml"
    # Create output file
    output="$UMAA_TYPES/xml/include_all.xml"

    # create an array
    arr=($UMAA_TYPES/xml/*)

    touch $output

    # Set header/footer
    header='<?xml version="1.0"?>
<dds version="7.1.0"
        xsi:noNamespaceSchemaLocation="http://community.rti.com/schema/current/rti_dds_profiles.xsd"
        xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance">
    <types>'
    
    footer='    </types>\n</dds>'

    echo "$header" >> $output

    for filename in $(ls $UMAA_TYPES/xml/)
    do
        echo '        <include file="./'${filename}'"/>' >> $output
        #echo $filename
    done;

    echo -e "$footer" >> $output

else
    echo "Generating XML type files in place"
    find $UMAA_TYPES/UMAA $UMAA_TYPES/BasicTypes -maxdepth 5 -mindepth 1  -type f \
    -iname '*.idl' -print -exec rtiddsgen -I $UMAA_TYPES -convertToXML {} \;
fi

duration=$SECONDS
echo "$(($duration / 60)) minutes and $(($duration % 60)) seconds elapsed."