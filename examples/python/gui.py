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


def publisher_main(command, file):

    # Set Default QOS Provider
    params = dds.QosProviderParams()
    params.url_profile = [file]
    dds.QosProvider.default_provider_params = params

    
    # Set the QOS file
    qos_provider = dds.QosProvider(file)

    # Create Participant
    participant = qos_provider.create_participant_from_config("UMAAParticipantLibrary::GUI")

    # Create Writer
    writer = dds.DynamicData.DataWriter(participant.find_datawriter("AnchorCommandPublisher::AnchorCommandWriter"))

    # Give a sec for discovery
    time.sleep(1)

    sample = writer.create_data()
    sample["action"] = command

    # write data samples in a loop
    writer.write(sample)
    print("Writing Anchor Command: {}".format(sample["action"]))

    # Couple secs for repair if needed
    time.sleep(2)

    print("Shutting down")


if __name__ == "__main__":
    parser = argparse.ArgumentParser(
        description="RTI Connext DDS UMAA Example: GUI"
    )
    print("RTI Connext DDS UMAA Example: GUI")

    parser.add_argument(
        "-c", "--command", type=int, default=0, help="Anchor command",
    )
    parser.add_argument(
       "-f", "--file", type=str, default="./resources/umaa_components.xml", help="XML Config file"
    )

    args = parser.parse_args()
    assert args.command >= 0

    publisher_main(args.command, args.file)