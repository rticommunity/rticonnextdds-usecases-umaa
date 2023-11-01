#!/bin/bash
cd $UMAA_HOME/$1

echo "EDITING MAKEFILES in Folder: " $UMAA_HOME/$1
find . -maxdepth 1 -iname 'makefile_*' -exec sed -i 's/INCLUDES = -I./INCLUDES = -I${UMAA_HOME}'/g {} \;



