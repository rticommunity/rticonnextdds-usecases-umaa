#!/bin/bash
cd $UMAA_HOME/$1
echo $UMAA_HOME/$1
find . -maxdepth 1 -iname '*.xml' -exec sed --debug -i 's/include file="UMAA/include file\=\"\.\/UMAA'/g {} \;
