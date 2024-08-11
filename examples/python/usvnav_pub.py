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


def publisher_main(file, source_id):

    # All of our XML files are being passed in by the NDDS_QOS_PROFILES env variable
    qos_provider = dds.QosProvider("")

    # Lookup the Participant we defined in our XML file
    participant = qos_provider.create_participant_from_config("umaa_components_lib::usvnav")

    # Lookup the Writers
    speed_report_writer = dds.DynamicData.DataWriter(participant.find_datawriter("outputs::SpeedReportType"))
    globalpose_report_writer = dds.DynamicData.DataWriter(participant.find_datawriter("outputs::GlobalPoseReportType"))
    velocity_report_writer = dds.DynamicData.DataWriter(participant.find_datawriter("outputs::VelocityReportType"))

    speed_report_sample = speed_report_writer.create_data()
    globalpose_report_sample = globalpose_report_writer.create_data()
    velocity_report_sample = velocity_report_writer.create_data()

    # write data samples in a loop
    while (True):
        time.sleep(1)

        # write global pose
        globalpose_report_sample["position.geodeticLatitude"] = 42.361145
        globalpose_report_sample["position.geodeticLongitude"] = -71.057083
        globalpose_report_writer.write(globalpose_report_sample)
        print(f'Writing GlobalPose data Lat: {globalpose_report_sample["position.geodeticLatitude"]}')
        print(f'Writing GlobalPose data Long: {globalpose_report_sample["position.geodeticLongitude"]}')
        
        # write speed
        speed_report_sample["speedThroughWater"] = random.randrange(0, 20, 2)
        speed_report_writer.write(speed_report_sample)
        print(f'Writing Speed Data: {speed_report_sample["speedThroughWater"]}')

        velocity_report_sample["velocity.eastSpeed"] = random.randrange(-20, 20, 2)
        velocity_report_sample["velocity.northSpeed"] = random.randrange(-20, 20, 2)
        velocity_report_writer.write(velocity_report_sample)
        print("Writing Velocity data")



if __name__ == "__main__":
    parser = argparse.ArgumentParser(
        description="UMAA USV NAV Publisher"
    )
    print("UMAA USV NAV Publisher")

    parser.add_argument(
       "-f", "--file", type=str, default="", help="XML Config file"
    )
    parser.add_argument(
       "-s", "--source", type=int, default=0, help="Source ID"
    )
           

    args = parser.parse_args()

    publisher_main(args.file, args.source)
