#!/bin/bash

# This script just iterates through all the folders in the $UMAA_HOME directory, 
# creates the typefiles, then modifies the generated makefiles to add the $UMAA_HOME
# to the list of includes, and finally calls make on all the modified makefiles.

dir=$PWD
cpp_vers=$1
SECONDS=0

# Check CPP version
if [[ "$cpp_vers" != "c++98" ]] && [[ "$cpp_vers" != "c++11" ]]; then
    echo "Invalid CPP type arg, please enter either c++98 or c++11"
    echo "You entered: " $cpp_vers
    exit 1;
fi

# Check NDDSHOME variable
if [[ -z "${NDDSHOME}" ]]; then
    echo "Must set the NDDSHOME environment variable "
    exit 1;
fi

# Strip out version number
dds_vers=$(echo "$NDDSHOME" | grep -o '[0-9]' | head -1)
echo "USING DDS VERSION: " $dds_vers

# Set rtiddsgen flags based on versions
if [[ "$cpp_vers" == "c++98" ]]; then
    cond_arg="-qualifiedEnumerator"
    if [[ $dds_vers == 6 ]]; then
        cpp_vers="c++"
        echo "Backwards compatible mode: " $cpp_vers
    fi
fi


# Find all IDL files and call rtiddsgen on them
echo "Generating type files"
find $UMAA_HOME -maxdepth 5 -mindepth 1  -type f \
    -iname '*.idl' -print -exec rtiddsgen -I $UMAA_HOME -language $cpp_vers \
    -update typeFiles -update makefiles -platform $NDDSTARGET $cond_arg {} \;

# Find all generated makefiles and add the UMAA_HOME include to them
echo "Modifying makefiles"
find $UMAA_HOME/UMAA $UMAA_HOME/BasicTypes -maxdepth 5 -mindepth 1  -type f \
    -iname 'makefile_*' -print -exec sed -i 's/INCLUDES = -I./INCLUDES = -I${UMAA_HOME}'/g {} \;

# Call make on all generated makefiles
echo "Building types"
find $UMAA_HOME/UMAA $UMAA_HOME/BasicTypes -maxdepth 5 -mindepth 1  -type f \
    -iname 'makefile_*' -print -execdir make -f {} \;

duration=$SECONDS
echo "$(($duration / 60)) minutes and $(($duration % 60)) seconds elapsed."