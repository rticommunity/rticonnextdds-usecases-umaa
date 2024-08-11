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
import argparse
import rti.asyncio
import asyncio
import sys


class UMAASubscriber:
    def __init__(self, participant):
        
        # Lookup the Readers
        self.velocity_report_reader = dds.DynamicData.DataReader(participant.find_datareader("inputs::VelocityReportType"))
        self.speed_report_reader = dds.DynamicData.DataReader(participant.find_datareader("inputs::SpeedReportType"))
        self.globalpose_report_reader = dds.DynamicData.DataReader(participant.find_datareader("inputs::GlobalPoseReportType"))

        self.samples_read = 0

    async def run_reader(self, sample_count: int, reader, profile_name):
        async for data in reader.take_data_async():
            # print(f"- Received data from {profile_name}: {data}")
            print(f"- Received data from {profile_name}")
            self.samples_read += 1
            if self.samples_read >= sample_count:
                break

    async def run(self, sample_count: int):
        # Receive data from both readers in parallel
        print("Waiting for Data")

        await asyncio.gather(
            self.run_reader(
                sample_count, self.speed_report_reader, "Speed Report"
            ),
            self.run_reader(
                sample_count, self.velocity_report_reader, "Velocity Report"
            ),
            self.run_reader(
                sample_count, self.globalpose_report_reader, "Global Pose Report"
            )
            
        )


if __name__ == "__main__":
    parser = argparse.ArgumentParser(
        description="UMAA Autopilot Subscriber"
    )
    print("UMAA Autopilot Subscriber")

    parser.add_argument(
       "-f", "--file", type=str, default="", help="XML Config file"
    )
    parser.add_argument(
       "-s", "--source", type=int, default=0, help="Source ID"
    )
           
    cmd_args = parser.parse_args()

    # Set the XML file into the regular QOS provider to access all of our components etc.
    # Note: QOS file before XML Application Create file
    qos_provider = dds.QosProvider("")

    # Lookup the Participant we defined in our XML file
    participant = qos_provider.create_participant_from_config("umaa_components_lib::autopilot")


    try:
        rti.asyncio.run(UMAASubscriber(participant).run(sys.maxsize))
    except KeyboardInterrupt:
        pass