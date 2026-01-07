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

class UMAA_Pub:
    def __init__(self, args):

      # Pull in XML files with QoS Profiles and Types
      self.qos_provider = dds.QosProvider("../../qos/umaa_qos_lib.xml;../../datamodel/umaa/xml_flat/include_all.xml")

      # Create a Participant on specific Domain ID
      self.participant = dds.DomainParticipant(args.domain)

      # For UMAA 6.0, Topic and Type names are the same
      self.topic_name = args.topic
      self.type_name = args.topic
      self.qos_profile = args.qos

      # Pull in DynamicData type from UMAA datamodel
      self.type = self.qos_provider.type(self.type_name)


      # Create Topics and associate with types
      self.topic = dds.DynamicData.Topic(
          self.participant,
          self.topic_name,
          self.type
      )

      # Create a Listener and set the right QoS Profile
      self.writer = dds.DynamicData.DataWriter(
          self.topic,
          self.qos_provider.datawriter_qos_from_profile(self.qos_profile)
      )

    async def write_data(self):
      print("Writing data")

      # Create a DynamicData object for the main type
      sample = self.writer.create_data()


      # Create a DynamicData object for the Union Struct
      union_struct_type = self.qos_provider.type("UMAA::EO::BallastTank::MassBallastFlowRateType")
      union_struct = dds.DynamicData(union_struct_type)

      # Assign values as needed to the Union Struct
      union_struct["massBallastFlowRate"] = 5

      sample["ballastPumpFlowRate.BallastPumpFlowRateTypeSubtypes.MassBallastFlowRateVariant"] = union_struct

      while True:
        self.writer.write(sample)
        print(f'Writing to {self.topic_name} topic')
        await asyncio.sleep(1)
     

    async def run(self) -> None:
      await asyncio.gather(
         
        # Write data 
        self.write_data()

        )


if __name__ == "__main__":
    parser = argparse.ArgumentParser(
        description="UMAA Dynamic Publisher"
    )
    print("\n\nUMAA Dynamic Publisher\n\n")
    parser.add_argument(
      "--qos", type=str, default="umaa_qos_lib::periodic_best_effort_qos", help="QOS Profile"
    )
    parser.add_argument(
      "--topic", type=str, default="UMAA::EO::BallastTank::BallastPumpCommandType", help="UMAA Topic Name"
    )
    parser.add_argument(
      "-d", "--domain", type=int, default=0, help="Domain ID"
    )
    parser.add_argument(
      "-v", "--verbosity", type=int, default=1, help="How much debugging output to show | Range: 0-3 | Default: 1",
    )

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

    try:
      # Run
      rti.asyncio.run(UMAA_Pub(args).run())
        
    except KeyboardInterrupt:
      print("Stopping Application")
      pass


