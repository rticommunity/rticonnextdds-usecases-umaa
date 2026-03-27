"""Tests that AssignerQoS topic_filter rules resolve to the correct QoS profile.

Each QoS profile sets a distinctive publication_name / subscription_name
(e.g. "TelemetryQoSWriter", "ConfigQoSReader") which we use as proof that the
correct profile was selected.

IMPORTANT: RTI topic_filter uses **first-match-wins** semantics.
Specific patterns like ``*SpecsReportType`` must appear before the broader
``*ReportType`` in the XML, otherwise the broader pattern shadows them.

All topic names are real IDL-generated fully-qualified UMAA topic constants
imported directly from the generated ``rtiumaapy.datamodel`` modules.
"""

import pytest
import rti.connextdds as dds

from tests.conftest import _QOS_FILE

# QoS constants from DdsDefinitions.idl
from rtiumaapy.datamodel.DdsDefinitions import (
    UMAA_DdsDefinitions_QOS_ASSIGNER_PROFILE as QOS_ASSIGNER_PROFILE,
)

# TelemetryQoS topics  (*ReportType)
from rtiumaapy.datamodel.AccelerationReportType import (
    UMAA_SA_AccelerationStatus_AccelerationReportTypeTopic as AccelerationReportTypeTopic,
)
from rtiumaapy.datamodel.BatteryReportType import (
    UMAA_EO_BatteryStatus_BatteryReportTypeTopic as BatteryReportTypeTopic,
)
from rtiumaapy.datamodel.GPSReportType import (
    UMAA_SEM_GPSStatus_GPSReportTypeTopic as GPSReportTypeTopic,
)

# ConfigQoS topics  (*SpecsReportType, *ConfigReportType)
from rtiumaapy.datamodel.AnchorSpecsReportType import (
    UMAA_EO_AnchorSpecs_AnchorSpecsReportTypeTopic as AnchorSpecsReportTypeTopic,
)
from rtiumaapy.datamodel.BatterySpecsReportType import (
    UMAA_EO_BatterySpecs_BatterySpecsReportTypeTopic as BatterySpecsReportTypeTopic,
)
from rtiumaapy.datamodel.BITConfigReportType import (
    UMAA_SO_BITConfig_BITConfigReportTypeTopic as BITConfigReportTypeTopic,
)

# CommandQoS topics  (*CommandType, *CommandStatusType, *CommandAckReportType)
from rtiumaapy.datamodel.AnchorCommandType import (
    UMAA_EO_AnchorControl_AnchorCommandTypeTopic as AnchorCommandTypeTopic,
)
from rtiumaapy.datamodel.AnchorCommandStatusType import (
    UMAA_EO_AnchorControl_AnchorCommandStatusTypeTopic as AnchorCommandStatusTypeTopic,
)
from rtiumaapy.datamodel.AnchorCommandAckReportType import (
    UMAA_EO_AnchorControl_AnchorCommandAckReportTypeTopic as AnchorCommandAckReportTypeTopic,
)
from rtiumaapy.datamodel.BITCommandType import (
    UMAA_SO_BITControl_BITCommandTypeTopic as BITCommandTypeTopic,
)
from rtiumaapy.datamodel.GlobalVectorExecutionStatusReportType import (
    UMAA_MO_GlobalVectorControl_GlobalVectorExecutionStatusReportTypeTopic as GlobalVectorExecStatusTopic,
)

# ElementQoS topics  (*SetElement, *ListElement)
from rtiumaapy.datamodel.ContactReportType import (
    UMAA_SA_ContactReport_ContactReportTypeContactsSetElementTopic as ContactReportTypeContactsSetElementTopic,
)
from rtiumaapy.datamodel.GlobalWaypointCommandType import (
    UMAA_MO_GlobalWaypointControl_GlobalWaypointCommandTypeWaypointsListElementTopic as GlobalWaypointCommandTypeWaypointsListElementTopic,
)


# ── Fixture ───────────────────────────────────────────────────────────────


@pytest.fixture(scope="module")
def qos_provider() -> dds.QosProvider:
    """QosProvider configured with AssignerQoS as default profile."""
    qp = dds.QosProvider(_QOS_FILE)
    qp.default_profile = QOS_ASSIGNER_PROFILE
    return qp


# ── Helpers ───────────────────────────────────────────────────────────────


def _writer_profile_name(qp: dds.QosProvider, topic: str) -> str:
    """Return the resolved publication_name (entity_name) for *topic*."""
    qos = qp.get_topic_datawriter_qos(topic)
    return qos.entity_name.name.strip()


def _reader_profile_name(qp: dds.QosProvider, topic: str) -> str:
    """Return the resolved subscription_name (entity_name) for *topic*."""
    qos = qp.get_topic_datareader_qos(topic)
    return qos.entity_name.name.strip()


# ═══════════════════════════════════════════════════════════════════════════
# TelemetryQoS — generic *ReportType (BEST_EFFORT periodic telemetry)
# ═══════════════════════════════════════════════════════════════════════════


class TestTelemetryQoS:
    """Topics ending in ReportType (but not SpecsReportType or ConfigReportType)."""

    @pytest.mark.parametrize("topic", [
        AccelerationReportTypeTopic,
        BatteryReportTypeTopic,
        GPSReportTypeTopic,
    ])
    def test_writer(self, qos_provider, topic):
        assert _writer_profile_name(qos_provider, topic) == "TelemetryQoSWriter"

    @pytest.mark.parametrize("topic", [
        AccelerationReportTypeTopic,
        BatteryReportTypeTopic,
        GPSReportTypeTopic,
    ])
    def test_reader(self, qos_provider, topic):
        assert _reader_profile_name(qos_provider, topic) == "TelemetryQoSReader"


# ═══════════════════════════════════════════════════════════════════════════
# ConfigQoS — *SpecsReportType and *ConfigReportType (RELIABLE + TRANSIENT_LOCAL)
# ═══════════════════════════════════════════════════════════════════════════


class TestConfigQoS:
    """SpecsReportType and ConfigReportType must match ConfigQoS, not TelemetryQoS.

    This verifies the first-match-wins ordering is correct: *SpecsReportType
    and *ConfigReportType appear before *ReportType in AssignerQoS.
    """

    @pytest.mark.parametrize("topic", [
        AnchorSpecsReportTypeTopic,
        BatterySpecsReportTypeTopic,
        BITConfigReportTypeTopic,
    ])
    def test_writer(self, qos_provider, topic):
        assert _writer_profile_name(qos_provider, topic) == "ConfigQoSWriter"

    @pytest.mark.parametrize("topic", [
        AnchorSpecsReportTypeTopic,
        BatterySpecsReportTypeTopic,
        BITConfigReportTypeTopic,
    ])
    def test_reader(self, qos_provider, topic):
        assert _reader_profile_name(qos_provider, topic) == "ConfigQoSReader"


# ═══════════════════════════════════════════════════════════════════════════
# CommandQoS — *CommandType, *CommandStatusType, *CommandAckReportType,
#              *ExecutionStatusReportType (RELIABLE)
# ═══════════════════════════════════════════════════════════════════════════


class TestCommandQoS:
    """Command-family suffixes all resolve to CommandQoS."""

    @pytest.mark.parametrize("topic", [
        AnchorCommandTypeTopic,
        BITCommandTypeTopic,
        AnchorCommandStatusTypeTopic,
        AnchorCommandAckReportTypeTopic,
        GlobalVectorExecStatusTopic,
    ])
    def test_writer(self, qos_provider, topic):
        assert _writer_profile_name(qos_provider, topic) == "CommandQoSWriter"

    @pytest.mark.parametrize("topic", [
        AnchorCommandTypeTopic,
        BITCommandTypeTopic,
        AnchorCommandStatusTypeTopic,
        AnchorCommandAckReportTypeTopic,
        GlobalVectorExecStatusTopic,
    ])
    def test_reader(self, qos_provider, topic):
        assert _reader_profile_name(qos_provider, topic) == "CommandQoSReader"


# ═══════════════════════════════════════════════════════════════════════════
# ElementQoS — *SetElement, *ListElement (RELIABLE)
# ═══════════════════════════════════════════════════════════════════════════


class TestElementQoS:
    """Element-family suffixes resolve to ElementQoS."""

    @pytest.mark.parametrize("topic", [
        ContactReportTypeContactsSetElementTopic,
        GlobalWaypointCommandTypeWaypointsListElementTopic,
    ])
    def test_writer(self, qos_provider, topic):
        assert _writer_profile_name(qos_provider, topic) == "ElementQoSWriter"

    @pytest.mark.parametrize("topic", [
        ContactReportTypeContactsSetElementTopic,
        GlobalWaypointCommandTypeWaypointsListElementTopic,
    ])
    def test_reader(self, qos_provider, topic):
        assert _reader_profile_name(qos_provider, topic) == "ElementQoSReader"
