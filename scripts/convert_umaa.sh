#!/bin/bash

# This script just iterates through all the folders in the $UMAA_TYPES directory
# and converts the idl files to desired type files in the $UMAA_TYPES/gen_types/$type directory.

# In Connext 7.3.0 you can just use the -r recursive flag for rtiddsgen to iterate through 
# all of the UMAA sub folders. This script is for 6.1.2 compatibility.

# For Python types there is a bug in RTIDDSGEN that doesn't resolve the include modules paths
# correctly CODEGENII-2112. Connext 7.4.0 has some new options.
# For this reason we export all the modules to a single folder and add them to the PYTHONPATH.

# For XML it will also "flatten" out the includes and create an "include_all" top 
# level file to pull in all the types. 
# This is generally helpful for some use-cases such as Cameo/Simulink/Routing Service etc. 
# to decouple include paths from a $CWD


SECONDS=0
exit=false

# Check NDDSHOME variable
if [[ -z "${NDDSHOME}" ]]; then
    echo "Must set the NDDSHOME environment variable "
    exit 1;
fi

# Check UMAA variable
if [[ -z "${UMAA_TYPES}" ]]; then
    echo "Must set the UMAA_TYPES environment variable to the folder containing the UMAA idl directory."
    exit 1;
fi

if [ "$1" == "xml" ] || [ "$1" == "python" ]; then
    type=$1
    echo "Converting to type: " $type
else
    exit=true
fi

# Clear out destination directory
OUTPUT_PATH=$UMAA_TYPES/gen_types/$type
echo "Using OUTPUT PATH: " $OUTPUT_PATH

echo "Clearing out OUTPUT PATH FOLDER" 
rm -rf $OUTPUT_PATH/*


if $exit; then
    echo "pass in: \n
        arg1: Type: ["python", "xml"] \n
        example: convert_umaa_xml.sh python"
else

    touch $OUTPUT_PATH

    if [ $type == "python" ]; then

        echo "Generating $type type files to /$type folder"
        find $UMAA_TYPES -maxdepth 5 -mindepth 1  -type f \
        -iname '*.idl' -print -exec $NDDSHOME/bin/rtiddsgen -I $UMAA_TYPES -language Python -d $UMAA_TYPES/gen_types/$type {} \;
    
    elif [ $type == "xml" ]; then

        echo "Generating $type type files to /$type folder"
        find $UMAA_TYPES -maxdepth 5 -mindepth 1  -type f \
        -iname '*.idl' -print -exec $NDDSHOME/bin/rtiddsgen -I $UMAA_TYPES -convertToXML -d $UMAA_TYPES/gen_types/$type {} \;

        # Flatten includes
        echo "Flattening xml includes"
        find $UMAA_TYPES/gen_types/xml -type f -iname '*.xml' -print \
        -exec sed -i -r 's/<include.*(\/.*\/)/<include file=".\1/g' {} \;

        echo "Creating top level includes xml"
        # Create output file
        output="$UMAA_TYPES/gen_types/xml/include_all.xml"

        touch $output

        # Set header/footer
        header='<?xml version="1.0"?>
        <dds version="7.1.0"
            xsi:noNamespaceSchemaLocation="http://community.rti.com/schema/current/rti_dds_profiles.xsd"
            xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance">
        <types>'

        footer='    </types>\n</dds>'

        echo "$header" >> $output

        for filename in $(ls $UMAA_TYPES/gen_types/xml/)
        do
            echo '        <include file="./'${filename}'"/>' >> $output
        done;

        echo -e "$footer" >> $output
    fi
fi

duration=$SECONDS
echo "$(($duration / 60)) minutes and $(($duration % 60)) seconds elapsed."