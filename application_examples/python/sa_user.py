# (c) 2022 Copyright, Real-Time Innovations, Inc.  All rights reserved.
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


def subscriber_main(sample_count):
    
    # Set Default QOS Provider
    params = dds.QosProviderParams()
    params.url_profile = ["../sa_xml/umaa_sa_entities.xml"]
    dds.QosProvider.default_provider_params = params

    # Set QOS file
    qos_provider = dds.QosProvider("../sa_xml/umaa_sa_entities.xml")

    # Create Participant
    participant = qos_provider.create_participant_from_config("UMAAParticipantLibrary::SAConsumer")

    # Create Reader
    reader = dds.DynamicData.DataReader(participant.find_datareader("WaterCurrentReportSubscriber::WaterCurrentReportReader"))

    # Enable Reader
    reader.enable()

    print("Waiting for Data")

    count = 0
    while (sample_count == 0) or (count < sample_count):
        time.sleep(1)
        for sample in reader.take_data():
            print(sample)
        count += 1



if __name__ == "__main__":
    parser = argparse.ArgumentParser(
        description="RTI Connext DDS UMAA Example: WaterCurrentReport (Subscriber)"
    )
    parser.add_argument(
        "-c", "--count", type=int, default=0, help="Number of samples to send"
    )

    print("RTI Connext DDS UMAA Example: WaterCurrentReport (Subscriber)")


    args = parser.parse_args()
    subscriber_main(args.count)