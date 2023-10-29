#!/bin/bash

# This script merges xml files in the target folder to an 
# output file saved into $UMAA_HOME/RTI/XML

# Navigate
cd $UMAA_HOME/$1
echo $UMAA_HOME/$1

# File names
xml_dir="$UMAA_HOME/RTI/XML"
dir_name=${PWD##*/}
output="$xml_dir/temp_$dir_name.xml"
output_clean="$xml_dir/UMAATYPES_$dir_name.xml"

echo "Merging $dir_name folder"
echo "Output file: $output_clean"

# Create file
if [[ ! -e $output ]]; then
    touch $output
fi

#Concatenate
find ./ -name '*.xml' -type f ! -name "$dir_name.xml" -exec cat {} \; > $output

# Grab header
header=`head -3 $output`
footer=`tail -2 $output`

# Add includesback
include_basic=$'\n<include file="UMAATYPES_BasicTypes.xml"/>'
include_common=$'\n<include file="UMAATYPES_Common.xml"/>'
include_mm=$'\n<include file="UMAATYPES_MM.xml"/>'
include_sem=$'\n<include file="UMAATYPES_SEM.xml"/>'

if [[ "$dir_name" != "BasicTypes" ]]
then
    header+="$include_basic"
    if [[ "$dir_name" != "Common" ]]
    then
        header+="$include_common"
    fi
    if [[ "$dir_name" == "SA" ]]
    then
        header+="$include_mm"
        header+="$include_sem"
    fi
fi

# Clean up
grep -Ev "^[[:blank:]]*(<inc|<types|</types|<dds|</dds|<\?x)" $output > $output_clean

# Add header/footer back in
echo "$header" | cat - $output_clean > temp && mv temp $output_clean
echo "$footer" >> $output_clean

# Delete temp files
rm -rf "$xml_dir"/temp_*
