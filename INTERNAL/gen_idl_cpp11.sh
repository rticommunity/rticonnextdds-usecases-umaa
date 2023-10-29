#!/bin/bash
cd $UMAA_HOME/$1
echo $UMAA_HOME/$1
find . -maxdepth 1 -iname '*.idl' -exec rtiddsgen -I $UMAA_HOME -language C++11 -update typeFiles -update makefiles -platform $NDDSTARGET {} \;
