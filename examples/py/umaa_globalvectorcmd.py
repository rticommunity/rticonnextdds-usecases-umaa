# (c) 2024 Copyright, Real-Time Innovations, Inc.  All rights reserved.
# RTI grants Licensee a license to use, modify, compile, and create derivative
# works of the Software.  Licensee has the right to distribute object form only
# for use with RTI products.  The Software is provided "as is", with no warranty
# of any type, including any warranty for fitness for any purpose. RTI is under
# no obligation to maintain or support the Software.  RTI shall not be liable for
# any incidental or consequential damages arising out of the use or inability to
# use the software.

import rti.connextdds as dds
from rti.types.builtin import String
import time
import argparse
import random
import uuid
import rti.idl as idl

from GlobalVectorCommandType import *
from GlobalVectorCommandAckReportType import *
from GlobalVectorCommandStatusType import *
from GlobalVectorExecutionStatusReportType import *

# This example uses Python modules generated from the UMAA IDL files

def register_types():
    print("Registering Types")

    # Need to register all types in component before creating Domain Participant
    dds.DomainParticipant.register_idl_type(
        UMAA_MO_GlobalVectorControl_GlobalVectorCommandType,
        idl.get_type_support(UMAA_MO_GlobalVectorControl_GlobalVectorCommandType).type_name)

    dds.DomainParticipant.register_idl_type(
        UMAA_MO_GlobalVectorControl_GlobalVectorCommandAckReportType,
        idl.get_type_support(UMAA_MO_GlobalVectorControl_GlobalVectorCommandAckReportType).type_name)

    dds.DomainParticipant.register_idl_type(
        UMAA_MO_GlobalVectorControl_GlobalVectorCommandStatusType,
        idl.get_type_support(UMAA_MO_GlobalVectorControl_GlobalVectorCommandStatusType).type_name)

    dds.DomainParticipant.register_idl_type(
        UMAA_MO_GlobalVectorControl_GlobalVectorExecutionStatusReportType,
        idl.get_type_support(UMAA_MO_GlobalVectorControl_GlobalVectorExecutionStatusReportType).type_name)

def publisher_main():
    register_types()

    # All of our XML files are being passed in by the NDDS_QOS_PROFILES env variable
    qos_provider = dds.QosProvider("")

    # Lookup the Participant we defined in our XML file resources/components/globalvector.xml
    participant = qos_provider.create_participant_from_config(
        "umaa_components_lib::globalvector")

    # Lookup the Writers
    globalvector_command_w = dds.DataWriter(
        participant.find_datawriter("pub::GlobalVectorCommandType"))

    globalvector_command_sample = UMAA_MO_GlobalVectorControl_GlobalVectorCommandType()

    # Select the union to send
    speed_cmd = random.randrange(0, 10, 2)
    globalvector_command_sample.speed.SpeedRequirementVariantTypeSubtypes.discriminator = \
            UMAA_Common_Speed_SpeedRequirementVariantTypeEnum.WATERSPEEDREQUIREMENTVARIANT_D

    # Set a random value
    globalvector_command_sample.speed.SpeedRequirementVariantTypeSubtypes \
            .WaterSpeedRequirementVariantVariant.speed.speed = speed_cmd
    
    # Set a random SessionID GUID
    sessionid_guid = uuid.uuid4()
    sessionid_guid_list = list(sessionid_guid.bytes)
    globalvector_command_sample.sessionID.value = dds.Uint8Seq(sessionid_guid_list)


    # write data samples in a loop
    while (True):
        time.sleep(5)

        globalvector_command_w.write(globalvector_command_sample)
        print(f'Writing Global Vector Command (Speed): {speed_cmd }')


if __name__ == "__main__":
    parser = argparse.ArgumentParser(
        description="Global Vector Command Consumer"
    )
    parser.add_argument(
        "-v",
        "--verbosity",
        type=int,
        default=2,
        help="Logging Verbosity",
    )
    print("Global Vector Command Consumer\n" \
        "This is just an example 'Global Vector Command Consumer' " \
        "to interact with the AutoPilot component.\n" \
        "Does NOT implement UMAA Flow Control\n\n")

    args = parser.parse_args()

    verbosity_levels = {
        0: dds.Verbosity.SILENT,
        1: dds.Verbosity.EXCEPTION,
        2: dds.Verbosity.WARNING,
        3: dds.Verbosity.STATUS_LOCAL,
        4: dds.Verbosity.STATUS_REMOTE,
        5: dds.Verbosity.STATUS_ALL,
    }

    # Sets Connext verbosity to help debugging
    verbosity = verbosity_levels.get(args.verbosity, dds.Verbosity.EXCEPTION)
    
    # Set the debug output to a specific file
    dds.Logger.instance.output_file("debug_output.log")

    # Log a debug message to verify- Needs to be at Level 5 Verbosity
    dds.Logger.instance.debug("This is a debug message logged to the file.")

    try:
      publisher_main()
    except KeyboardInterrupt:
      print("\nFinishing ...")
      pass
