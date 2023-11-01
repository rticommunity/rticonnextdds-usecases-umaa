#!/bin/bash
cd $UMAA_HOME
echo "$(date)"
$UMAA_HOME/scripts/gen_idl_cpp98.sh UMAA/Common
$UMAA_HOME/scripts/gen_idl_cpp98.sh BasicTypes
find ./UMAA -maxdepth 2 -mindepth 2  -type d -exec $UMAA_HOME/scripts/gen_idl_cpp98.sh {} \;
$UMAA_HOME/scripts/edit_makefiles.sh UMAA/Common
$UMAA_HOME/scripts/edit_makefiles.sh BasicTypes
find ./UMAA -maxdepth 2 -mindepth 2  -type d -exec $UMAA_HOME/scripts/edit_makefiles.sh {} \;
$UMAA_HOME/scripts/comp_idl.sh UMAA/Common
$UMAA_HOME/scripts/comp_idl.sh BasicTypes
find ./UMAA -maxdepth 2 -mindepth 2  -type d -exec $UMAA_HOME/scripts/comp_idl.sh {} \;
cd $UMAA_HOME
echo "$(date)"

