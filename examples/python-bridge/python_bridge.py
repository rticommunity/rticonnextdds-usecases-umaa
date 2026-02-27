# (c) 2025 Copyright, Real-Time Innovations, Inc.  All rights reserved.
# RTI grants Licensee a license to use, modify, compile, and create derivative
# works of the Software.  Licensee has the right to distribute object form only
# for use with RTI products.  The Software is provided "as is", with no warranty
# of any type, including any warranty for fitness for any purpose. RTI is under
# no obligation to maintain or support the Software.  RTI shall not be liable for
# any incidental or consequential damages arising out of the use or inability to
# use the software.

import asyncio
import argparse
import sys
import os

import rti.connextdds as dds
import rti.asyncio

# Add the python_flat directory so we can import the generated types
sys.path.insert(0, os.path.join(
    os.path.dirname(__file__), '..', '..', 'datamodel', 'umaa', 'python_flat'))
from GlobalPoseReportType import *


# Topic name constant
TOPIC_NAME = UMAA_SA_GlobalPoseStatus_GlobalPoseReportTypeTopic
# Type alias for convenience
GlobalPoseReportType = UMAA_SA_GlobalPoseStatus_GlobalPoseReportType


class PythonBridge:
    """Bridge that subscribes to GlobalPoseReportType on one domain participant
    and republishes the exact same message on a second domain participant
    with the vendor compliance mask set."""

    def __init__(self, args):
        # ----------------------------------------------------------------
        # QoS provider – loads the UMAA QoS library
        # ----------------------------------------------------------------
        qos_xml = os.path.join(
            os.path.dirname(__file__), '..', '..', 'qos', 'umaa_qos_lib.xml')
        self.qos_provider = dds.QosProvider(qos_xml)

        # ----------------------------------------------------------------
        # Participant 1 – PUBLISHER side (created first, no compliance mask)
        # ----------------------------------------------------------------
        pub_participant_qos = self.qos_provider.participant_qos_from_profile(
            "umaa_qos_lib::default_participant")

        print(f"XTypes mask BEFORE publisher participant: "
              f"{dds.compliance.get_xtypes_mask()}")
        self.pub_participant = dds.DomainParticipant(
            args.pub_domain, pub_participant_qos)
        print(f"XTypes mask AFTER  publisher participant: "
              f"{dds.compliance.get_xtypes_mask()}")

        # Create publisher-side topic
        self.pub_topic = dds.Topic(
            self.pub_participant, TOPIC_NAME, GlobalPoseReportType)

        # Create DataWriter with the periodic best-effort QoS
        writer_qos = self.qos_provider.datawriter_qos_from_profile(
            args.qos)
        self.writer = dds.DataWriter(
            dds.Publisher(self.pub_participant), self.pub_topic, writer_qos)

        # ----------------------------------------------------------------
        # Set the vendor compliance mask BEFORE creating the subscriber
        # participant. This must be called before DomainParticipant creation.
        # See: https://community.rti.com/static/documentation/connext-dds/
        #      7.3.1/doc/api/connext_dds/api_python/rti.connextdds.html
        #      #module-rti.connextdds.compliance
        # ----------------------------------------------------------------
        dds.compliance.set_xtypes_mask(dds.compliance.XTypesMask.VENDOR)
        print(f"Vendor compliance XTypes mask set: "
              f"{dds.compliance.get_xtypes_mask()}")

        # ----------------------------------------------------------------
        # Participant 2 – SUBSCRIBER side (with vendor compliance mask)
        # ----------------------------------------------------------------
        sub_participant_qos = self.qos_provider.participant_qos_from_profile(
            "umaa_qos_lib::default_participant")

        print(f"XTypes mask BEFORE subscriber participant: "
              f"{dds.compliance.get_xtypes_mask()}")
        self.sub_participant = dds.DomainParticipant(
            args.sub_domain, sub_participant_qos)
        print(f"XTypes mask AFTER  subscriber participant: "
              f"{dds.compliance.get_xtypes_mask()}")

        # Create subscriber-side topic
        self.sub_topic = dds.Topic(
            self.sub_participant, TOPIC_NAME, GlobalPoseReportType)

        # Create DataReader with the periodic best-effort QoS
        reader_qos = self.qos_provider.datareader_qos_from_profile(
            args.qos)
        self.reader = dds.DataReader(
            dds.Subscriber(self.sub_participant), self.sub_topic, reader_qos)

    async def bridge_data(self):
        """Read samples from the subscriber and write them out on the
        publisher – forwarding the exact same message."""
        print(f"Python Bridge running – subscribing on domain "
              f"{self.sub_participant.domain_id}, "
              f"publishing on domain {self.pub_participant.domain_id}")
        print(f"Topic: {TOPIC_NAME}")
        print("Waiting for data...\n")

        async for data, info in self.reader.take_async():
            if info.valid:
                print(f"  Received sample – "
                      f"lat: {data.position.geodeticLatitude}, "
                      f"lon: {data.position.geodeticLongitude}, "
                      f"course: {data.course}")

                # Write the exact same sample out on the publisher side
                self.writer.write(data)

                print(f"  Forwarded sample – "
                      f"lat: {data.position.geodeticLatitude}, "
                      f"lon: {data.position.geodeticLongitude}, "
                      f"course: {data.course}\n")

    async def run(self):
        await self.bridge_data()


def main():
    parser = argparse.ArgumentParser(
        description="UMAA Python Bridge – subscribes to "
                    "GlobalPoseReportType and republishes with "
                    "vendor compliance mask")

    parser.add_argument(
        "--sub-domain", type=int, default=0,
        help="Domain ID for the subscribing participant (default: 0)")
    parser.add_argument(
        "--pub-domain", type=int, default=1,
        help="Domain ID for the publishing participant (default: 1)")
    parser.add_argument(
        "--qos", type=str,
        default="umaa_qos_lib::periodic_best_effort_qos",
        help="QoS profile name (default: "
             "umaa_qos_lib::periodic_best_effort_qos)")
    parser.add_argument(
        "-v", "--verbosity", type=int, default=1,
        help="Connext verbosity level 0-5 (default: 1)")

    args = parser.parse_args()

    verbosity_levels = {
        0: dds.Verbosity.SILENT,
        1: dds.Verbosity.EXCEPTION,
        2: dds.Verbosity.WARNING,
        3: dds.Verbosity.STATUS_LOCAL,
        4: dds.Verbosity.STATUS_REMOTE,
        5: dds.Verbosity.STATUS_ALL,
    }
    dds.Logger.instance.verbosity = verbosity_levels.get(
        args.verbosity, dds.Verbosity.EXCEPTION)

    print("\n=== UMAA Python Bridge ===\n")

    bridge = PythonBridge(args)

    try:
        rti.asyncio.run(bridge.run())
    except KeyboardInterrupt:
        print("\nBridge stopped.")


if __name__ == "__main__":
    main()
