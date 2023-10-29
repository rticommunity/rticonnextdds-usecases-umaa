#!/bin/bash
dir=$PWD
cd $UMAA_HOME
echo "$(date)"
$dir/merge_xml.sh UMAA/Common
$dir/merge_xml.sh BasicTypes
find ./UMAA -maxdepth 1 -mindepth 1  -type d -exec $dir/merge_xml.sh {} \;
cd $UMAA_HOME
echo "$(date)"