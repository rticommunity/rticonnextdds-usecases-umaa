#!/bin/bash

# (c) Copyright, Real-Time Innovations, 2025.  All rights reserved.
# RTI grants Licensee a license to use, modify, compile, and create derivative
# works of the software solely for use with RTI Connext DDS. Licensee may
# redistribute copies of the software provided that all such copies are subject
# to this license. The software is provided "as is", with no warranty of any
# type, including any warranty for fitness for any purpose. RTI is under no
# obligation to maintain or support the software. RTI shall not be liable for
# any incidental or consequential damages arising out of the use or inability
# to use the software.



# NOTE: Source a platform/c2 ENV script before running

# Check NDDSHOME variable
if [[ -z "${NDDSHOME}" ]]; then
    echo "Must set the NDDSHOME environment variable "
    exit 1;
fi


if [ "$1" == "debug" ] || [ "$1" == "deploy" ] ; then
  config=$1
  if [ "$2" ]; then
    export DOMAIN_ID=$2
  fi
else
  echo "pass in:"
  echo "arg1: Recording Service Configuration name from umaa_record.xml: ["debug", "deploy"]"
  echo "arg2: DDS Domain ID (Default: 1)"
  echo "example: start_record.sh deploy 1"
fi

# Recording Service configuration file
xml="./umaa_record.xml"


################################################################################
#                                 VERBOSITY                                    #
################################################################################

# Controls what type of messages are logged.
# <service_level> is the verbosity level for the service logs
# <dds_level> is the verbosity level for the DDS logs. 

# Both can take any of the following values:
# | SILENT      | No messages will be logged. (lowest verbosity) |
# | ERROR       | Log only high-priority error messages. (default) |
# | WARN        | Log warning and error messages. |
# | LOCAL       | Log verbose info, warnings, and errors about local Connext objects. |
# | REMOTE      | Log verbose info, warnings, and errors about remote objects. |

# Format:  <service_level>[:<dds_level>]
# Default: ERROR:ERROR

verbosity=ERROR:ERROR

################################################################################

echo "
-------------------------RECORDING SERVICE CONFIGS: ----------------------------
XML FILES used:  $xml
CONFIG = $config
Domain ID: $DOMAIN_ID
Logging Verbosity: $verbosity
-------------------------RECORDING SERVICE CONFIGS: ----------------------------
"


# Run Recording Service
$NDDSHOME/bin/rtirecordingservice -cfgName $config -verbosity $verbosity  -cfgFile $xml
