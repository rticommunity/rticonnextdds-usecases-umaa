"""Print effective participant QoS from an XML profile."""

import argparse
from pathlib import Path

import rti.connextdds as dds


DEFAULT_QOS_FILE = Path(__file__).resolve().parents[2] / "qos" / "umaa_qos_lib.xml"


def main() -> None:
    parser = argparse.ArgumentParser()
    parser.add_argument("qos_file", nargs="?", type=Path, default=DEFAULT_QOS_FILE)
    parser.add_argument("--domain-id", type=int, default=6)
    parser.add_argument(
        "--participant-profile",
        default="UMAAQoSLib::DefaultUMAAParticipant",
    )
    args = parser.parse_args()

    provider = dds.QosProvider(str(args.qos_file))
    participant = dds.DomainParticipant(
        args.domain_id,
        qos=provider.participant_qos_from_profile(args.participant_profile),
    )

    try:
        qos = participant.qos
        discovery = qos.discovery_config
        print(f"initial_peers={list(qos.discovery.initial_peers)}")
        print(f"transport_mask={qos.transport_builtin.mask}")
        print(
            "type_object_max_serialized_length="
            f"{qos.resource_limits.type_object_max_serialized_length}"
        )
        print(
            "contentfilter_property_max_length="
            f"{qos.resource_limits.contentfilter_property_max_length}"
        )
        print(
            "publication_writer_publish_mode="
            f"{discovery.publication_writer_publish_mode.kind}"
        )
        print(
            "subscription_writer_publish_mode="
            f"{discovery.subscription_writer_publish_mode.kind}"
        )
    finally:
        participant.close()


if __name__ == "__main__":
    main()