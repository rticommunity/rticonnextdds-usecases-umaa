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
import os


def publisher_main(file, source_id):

    # All of our XML files are being passed in by the NDDS_QOS_PROFILES env variable
    qos_provider = dds.QosProvider("")

    # Lookup the Participant we defined in our XML file
    participant = qos_provider.create_participant_from_config("umaa_components_lib::autopilot")

    # Lookup the Writers
    log_report_writer = dds.DynamicData.DataWriter(participant.find_datawriter("outputs::LogReportType"))
    health_report_writer = dds.DynamicData.DataWriter(participant.find_datawriter("outputs::HealthReportType"))

    log_report_sample = log_report_writer.create_data()
    health_report_sample = health_report_writer.create_data()


    log_report_sample["entry"] = "testing"
    health_report_sample["status"] = "healthy"


    # write data samples in a loop
    while (True):
        time.sleep(1)
        # write messages
        print("Writing log report")
        log_report_writer.write(log_report_sample)

        print("Writing health report")
        health_report_writer.write(health_report_sample)





if __name__ == "__main__":
    parser = argparse.ArgumentParser(
        description="UMAA Autopilot Publisher"
    )
    print("UMAA Autopilot Publisher")

    parser.add_argument(
       "-f", "--file", type=str, default="", help="XML Config files"
    )
    parser.add_argument(
       "-s", "--source", type=int, default=0, help="Source ID"
    )
           

    args = parser.parse_args()

    publisher_main(args.file, args.source)
