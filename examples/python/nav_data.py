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


def publisher_main(file):
    # Set Default QOS Provider
    params = dds.QosProviderParams()
    params.url_profile = [file]
    dds.QosProvider.default_provider_params = params

    # Set the QOS file
    qos_provider = dds.QosProvider(file)

    # Create Participant
    participant = qos_provider.create_participant_from_config("UMAAParticipantLibrary::NavData")

    # Create Writer
    writer = dds.DynamicData.DataWriter(participant.find_datawriter("SpeedReportPublisher::SpeedReportWriter"))

    sample = writer.create_data()
    sample["speedThroughWater"] = 10

    # write data samples in a loop
    while (True):
        time.sleep(1)
        writer.write(sample)
        print("Writing Speed Data: {}".format(sample["speedThroughWater"]))



if __name__ == "__main__":
    parser = argparse.ArgumentParser(
        description="RTI Connext DDS UMAA Example: NavData"
    )
    print("RTI Connext DDS UMAA Example: NavData")

    parser.add_argument(
       "-f", "--file", type=str, default="./resources/umaa_components.xml", help="XML Config file"
    )

    args = parser.parse_args()

    publisher_main(args.file)