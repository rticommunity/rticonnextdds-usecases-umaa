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

class UMAA_Sub:
    def __init__(self, args):

      # Pull in XML files with QoS Profiles and Types
      self.qos_provider = dds.QosProvider("../../qos/umaa_qos_lib.xml;../../datamodel/umaa/xml_flat/include_all.xml")

      # Create a Participant on specific Domain ID
      self.participant = dds.DomainParticipant(args.domain)

      # For UMAA 6.0, Topic and Type names are the same
      self.topic_name = args.topic
      self.type_name = args.topic
      self.qos_profile = args.qos

      # Pull in DynamicData type
      # Make sure it is in the ./types/include_all.xml list
      self.type = self.qos_provider.type(self.type_name)

      # Create Topics and associate with types
      self.topic = dds.DynamicData.Topic(
          self.participant,
          self.topic_name,
          self.type
      )

      # Create a Listener and set the right QoS Profile
      self.reader = dds.DynamicData.DataReader(
          self.topic,
          self.qos_provider.datareader_qos_from_profile(self.qos_profile)
      )

    async def read_data(self):
      # Get Topic Name
      topic_name = self.reader.topic_name
      print(f'Waiting for {topic_name} data')

      async for data,info in self.reader.take_async():
        if info.valid:
          # Access the writer's instance handle from the sample info
          writer_handle = info.publication_handle

          # Get the Participant Info for the matched DataWriter
          participant_data = self.reader.matched_publication_participant_data(writer_handle)

          # Print out first locator
          ip_list = participant_data.default_unicast_locators[0].address[-4:]
          address_str = '.'.join(str(byte) for byte in ip_list)
          domain_id = participant_data.domain_id

          # Get first port
          port = participant_data.default_unicast_locators[0].port

          # Get Source GUID example
          # src_byte_array = data["source.id"]
          # src_uuid_from_list = uuid.UUID(bytes=bytes(src_byte_array))

          flow_rate = data["ballastPumpFlowRate.BallastPumpFlowRateTypeSubtypes.MassBallastFlowRateVariant.massBallastFlowRate"]

          # Print out the whole message
          # print(data)

          # Print Values
          print(f"""
            Received Topic: {topic_name}
            From: {participant_data.participant_name.name}
            IP: {address_str}
            Port: {port}
            Domain ID: {domain_id}
            Flow Rate: {flow_rate}
            """)


    async def run(self) -> None:
        await asyncio.gather(
           
            self.read_data()
            #Can add more read functions here

            )


if __name__ == "__main__":
    parser = argparse.ArgumentParser(
        description="UMAA Dynamic Subscriber"
    )
    print("\n\nUMAA Dynamic Subscriber\n\n")
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
      rti.asyncio.run(UMAA_Sub(args).run())
        
    except KeyboardInterrupt:
      print("Stopping Application")
      pass


