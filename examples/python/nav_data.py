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
    # Set Default QOS Provider
    params = dds.QosProviderParams()
    params.url_profile = [file]
    dds.QosProvider.default_provider_params = params

    # Set the QOS file
    qos_provider = dds.QosProvider(file)

    # Create Participant
    participant = qos_provider.create_participant_from_config("UMAAParticipantLibrary::NavData")

    # Create Writers
    speed_report_writer = dds.DynamicData.DataWriter(participant.find_datawriter("SpeedReportPublisher::SpeedReportWriter"))
    globalpose_report_writer = dds.DynamicData.DataWriter(participant.find_datawriter("GlobalPoseReportPublisher::GlobalPoseReportWriter"))
    velocity_report_writer = dds.DynamicData.DataWriter(participant.find_datawriter("VelocityReportPublisher::VelocityReportWriter"))
    shipmotion_report_writer = dds.DynamicData.DataWriter(participant.find_datawriter("TranslationalShipMotionReportPublisher::TranslationalShipMotionReportWriter"))
    watercurrent_report_writer = dds.DynamicData.DataWriter(participant.find_datawriter("WaterCurrentReportPublisher::WaterCurrentReportWriter"))

    source_guid = []
    for x in range(16):
        source_guid.append(source_id)

    speed_report_sample = speed_report_writer.create_data()
    speed_report_sample["source"] = source_guid

    globalpose_report_sample = globalpose_report_writer.create_data()
    globalpose_report_sample["source"] = source_guid

    velocity_report_sample = velocity_report_writer.create_data()
    velocity_report_sample["source"] = source_guid

    shipmotion_report_sample = shipmotion_report_writer.create_data()
    shipmotion_report_sample["source"] = source_guid

    watercurrent_report_sample = watercurrent_report_writer.create_data()
    watercurrent_report_sample["source"] = source_guid

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
        print("Writing Speed Data: {}".format(speed_report_sample["speedThroughWater"]))

        velocity_report_sample["velocity.eastSpeed"] = random.randrange(-20, 20, 2)
        velocity_report_sample["velocity.northSpeed"] = random.randrange(-20, 20, 2)
        velocity_report_writer.write(velocity_report_sample)
        print("Writing Velocity data")

        # write ship motion
        shipmotion_report_sample["heave"] = random.randrange(0, 5, 1)
        shipmotion_report_sample["sway"] = random.randrange(0, 5, 1)
        shipmotion_report_writer.write(shipmotion_report_sample)
        print("Writing Ship Motion")

        # write watercurrent
        watercurrent_report_sample["currentDrift"] = random.randrange(0, 20, 2)
        watercurrent_report_writer.write(watercurrent_report_sample)
        print("Writing Speed Data: {}".format(watercurrent_report_sample["currentDrift"]))



if __name__ == "__main__":
    parser = argparse.ArgumentParser(
        description="RTI Connext DDS UMAA Example: NavData"
    )
    print("RTI Connext DDS UMAA Example: NavData")

    parser.add_argument(
       "-f", "--file", type=str, default="./resources/umaa_components.xml", help="XML Config file"
    )
    parser.add_argument(
       "--source_id", type=int, default=0, help="Source ID"
    )
           

    args = parser.parse_args()

    publisher_main(args.file, args.source_id)
    