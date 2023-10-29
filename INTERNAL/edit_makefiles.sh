#!/bin/bash
cd $UMAA_HOME/$1
echo $UMAA_HOME/$1
find . -maxdepth 1 -iname 'makefile_*' -exec sed -i 's/INCLUDES =/INCLUDES = -I${UMAA_HOME}'/g {} \;
