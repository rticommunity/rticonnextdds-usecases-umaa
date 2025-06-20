# (c) 2025 Copyright, Real-Time Innovations, Inc.  All rights reserved.
# RTI grants Licensee a license to use, modify, compile, and create derivative
# works of the Software.  Licensee has the right to distribute object form only
# for use with RTI products.  The Software is provided "as is", with no warranty
# of any type, including any warranty for fitness for any purpose. RTI is under
# no obligation to maintain or support the Software.  RTI shall not be liable for
# any incidental or consequential damages arising out of the use or inability to
# use the software.

import rti.connextdds as dds
from rti.types.builtin import String
import argparse
import rti.asyncio
import asyncio

# import the types
from LogReportType import *


class UMAA_Logger:
    def __init__(self, participant):
        
      # Lookup the Readers
      print("Looking up readers")
      self.log_report_reader = dds.DataReader(
        participant.find_datareader("sub::LogReportType"))

    async def run_reader(self, reader, topic_name):
        print(f' Listening for {topic_name} data')
        async for data in reader.take_data_async():
          print(f' Received data from Topic: {topic_name}')
          print(data)

    async def run(self):
        # Receive data from all readers in parallel
        print("Starting Readers")

        await asyncio.gather(
          self.run_reader(self.log_report_reader, "LogReportType")
          # Add additional reader functions here
          
        )

def register_types():
  print("Registering Types")

  # Need to Register all types in Component before creating Domain Participant
  dds.DomainParticipant.register_idl_type(
      UMAA_SO_LogReport_LogReportType,
      idl.get_type_support(UMAA_SO_LogReport_LogReportType).type_name)

  # Add additional registered types here


if __name__ == "__main__":
    parser = argparse.ArgumentParser(
        description="UMAA Logging Component"
    )
    parser.add_argument(
        "-v",
        "--verbosity",
        type=int,
        default=2,
        help="Logging Verbosity",
    )

    print("UMAA Logging Component DDS starter\n")

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

    dds.Logger.instance.verbosity = verbosity
    # Set the debug output to a specific file
    dds.Logger.instance.output_file("debug_output.log")

    # Log a debug message to verify- Needs to be at Level 5 Verbosity
    dds.Logger.instance.debug("This is a debug message logged to the file.")

    # Register necessary types
    register_types()

    # All of our XML files are being passed in by the NDDS_QOS_PROFILES env variable
    qos_provider = dds.QosProvider("")

    print("Creating Participant")
    # Lookup the Participant we defined in our XML file resources/components/usvnav.xml
    participant = qos_provider.create_participant_from_config(
        "umaa_components_lib::logger")

    try:
      rti.asyncio.run(UMAA_Logger(participant).run())
    except KeyboardInterrupt:
      print("\nFinishing ...")
      pass
