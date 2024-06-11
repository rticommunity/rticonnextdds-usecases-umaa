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

    # The Default QOS provider is set to allow us to configure logging through XML.
    # Not necessary if setting logging verbosity programatically.
    params = dds.QosProviderParams()
    params.url_profile = [file]
    dds.QosProvider.default_provider_params = params

    # Set the XML file into the regular QOS provider to access all of our components etc.
    qos_provider = dds.QosProvider(file)

    # Lookup the Participant we defined in our XML file
    participant = qos_provider.create_participant_from_config("UMAAParticipantLibrary::GPS")

    # Lookup the writer we defined in our XML file
    gps_report_writer = dds.DynamicData.DataWriter(participant.find_datawriter("GPSReportPublisher::GPSReportWriter"))


    # Create a "GUID" from the source_id arg
    source_guid = [source_id for d in range(16)]

    gps_report_sample = gps_report_writer.create_data()
    gps_report_sample["source"] = source_guid

    # write data samples in a loop
    while (True):
        time.sleep(1)

        # Example to index into a sequence of sub types
        gps_report_sample["satellites[1].azimuth"] = 120
        gps_report_sample["satellites[5].elevation"] = 7

        gps_report_writer.write(gps_report_sample)

        print('Writing GPS Report')
        


if __name__ == "__main__":
    parser = argparse.ArgumentParser(
        description="RTI Connext DDS UMAA Example: NavData"
    )
    print("RTI Connext DDS UMAA Example: NavData")

    parser.add_argument(
       "-f", "--file", type=str, default="./resources/umaa_components.xml", help="XML Config file"
    )
    parser.add_argument(
       "-s", "--source", type=int, default=0, help="Source ID"
    )
           

    args = parser.parse_args()

    publisher_main(args.file, args.source)
