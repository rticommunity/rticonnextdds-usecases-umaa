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



# Check NDDSHOME variable
if [[ -z "${NDDSHOME}" ]]; then
    echo "Must set the NDDSHOME environment variable "
    exit 1;
fi


# Recording Service configuration file and UMAA QoS file
xml="./umaa_replay.xml;../qos/umaa_qos_lib.xml"

if [ "$1" == "xcdr" ] || [ "$1" == "json" ] ; then
  config=$1
  if [ "$2" ]; then
    export DOMAIN_ID=$2
  fi
else
  echo "pass in:"
  echo "arg1: Replay Service Configuration name from umaa_play.xml: ["xcdr", "json"]"
  echo "arg2: DDS Domain ID (Default: 1)"
  echo "example: start_replay.sh xcdr 1"
fi

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
---------------------------REPLAY SERVICE CONFIGS: -----------------------------
XML FILES used:  $xml
Logging Verbosity: $verbosity
CONFIG = $config

---------------------------REPLAY SERVICE CONFIGS: -----------------------------
"


# Run Replay Service
$NDDSHOME/bin/rtireplayservice -cfgName $config -verbosity $verbosity  -cfgFile $xml
