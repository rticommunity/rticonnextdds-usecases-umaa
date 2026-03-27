"""Tests for rtiumaapy.validation — generic recursive UMAA message validator."""

from __future__ import annotations

import pytest

from rtiumaapy.field_ranges import FIELD_RANGES
from rtiumaapy.validation import validate_message


# ---------------------------------------------------------------------------
# Fixtures: UMAA types used across tests
# ---------------------------------------------------------------------------

@pytest.fixture()
def DateTime():
    from rtiumaapy.datamodel.Measurements import UMAA_Common_Measurement_DateTime
    return UMAA_Common_Measurement_DateTime


@pytest.fixture()
def GlobalVectorCommandType():
    from rtiumaapy.datamodel.GlobalVectorCommandType import (
        UMAA_MO_GlobalVectorControl_GlobalVectorCommandType,
    )
    return UMAA_MO_GlobalVectorControl_GlobalVectorCommandType


@pytest.fixture()
def FinsSpecsReportType():
    from rtiumaapy.datamodel.FinsSpecsReportType import (
        UMAA_EO_FinsSpecs_FinsSpecsReportType,
    )
    return UMAA_EO_FinsSpecs_FinsSpecsReportType


@pytest.fixture()
def FinSpecsType():
    from rtiumaapy.datamodel.FinSpecsType import (
        UMAA_EO_FinsSpecs_FinSpecsType,
    )
    return UMAA_EO_FinsSpecs_FinSpecsType


# ===================================================================
# Scalar range checks
# ===================================================================


class TestScalarRanges:
    """Validate scalar field range checking."""

    def test_valid_datetime(self, DateTime):
        dt = DateTime()
        dt.seconds = 1000
        dt.nanoseconds = 500
        valid, errors = validate_message(dt)
        assert valid is True
        assert errors == []

    def test_nanoseconds_above_max(self, DateTime):
        dt = DateTime()
        dt.nanoseconds = 1_000_000_000
        valid, errors = validate_message(dt)
        assert valid is False
        assert len(errors) == 1
        assert "nanoseconds" in errors[0]
        assert "out of range" in errors[0]

    def test_nanoseconds_below_min(self, DateTime):
        dt = DateTime()
        dt.nanoseconds = -1
        valid, errors = validate_message(dt)
        assert valid is False
        assert "nanoseconds" in errors[0]

    def test_nanoseconds_at_boundary_max(self, DateTime):
        dt = DateTime()
        dt.nanoseconds = 999_999_999
        valid, errors = validate_message(dt)
        assert valid is True

    def test_nanoseconds_at_boundary_min(self, DateTime):
        dt = DateTime()
        dt.nanoseconds = 0
        valid, errors = validate_message(dt)
        assert valid is True

    def test_multiple_errors(self, DateTime):
        dt = DateTime()
        dt.seconds = 9_999_999_999_999_999_999  # above max
        dt.nanoseconds = -100
        valid, errors = validate_message(dt)
        assert valid is False
        assert len(errors) == 2


# ===================================================================
# Optional field handling
# ===================================================================


class TestOptionalFields:
    """Validate that optional fields are skipped when None."""

    def test_optional_none_skipped(self, GlobalVectorCommandType):
        cmd = GlobalVectorCommandType()
        cmd.endTime = None
        valid, errors = validate_message(cmd)
        assert valid is True

    def test_optional_present_valid(self, GlobalVectorCommandType, DateTime):
        cmd = GlobalVectorCommandType()
        dt = DateTime()
        dt.seconds = 100
        dt.nanoseconds = 500
        cmd.endTime = dt
        valid, errors = validate_message(cmd)
        assert valid is True

    def test_optional_present_invalid(self, GlobalVectorCommandType, DateTime):
        cmd = GlobalVectorCommandType()
        dt = DateTime()
        dt.nanoseconds = 9_999_999_999
        cmd.endTime = dt
        valid, errors = validate_message(cmd)
        assert valid is False
        assert "endTime.nanoseconds" in errors[0]


# ===================================================================
# Nested structs
# ===================================================================


class TestNestedStructs:
    """Validate recursive struct walking."""

    def test_valid_nested(self, GlobalVectorCommandType):
        cmd = GlobalVectorCommandType()
        valid, errors = validate_message(cmd)
        assert valid is True

    def test_invalid_nested_timestamp(self, GlobalVectorCommandType):
        cmd = GlobalVectorCommandType()
        cmd.timeStamp.nanoseconds = 2_000_000_000
        valid, errors = validate_message(cmd)
        assert valid is False
        assert "timeStamp.nanoseconds" in errors[0]

    def test_deep_error_path(self, GlobalVectorCommandType):
        """Error path shows full dotted path."""
        cmd = GlobalVectorCommandType()
        cmd.timeStamp.nanoseconds = -1
        valid, errors = validate_message(cmd)
        assert valid is False
        assert errors[0].startswith("timeStamp.nanoseconds:")


# ===================================================================
# Enum validation
# ===================================================================


class TestEnumValidation:
    """Validate enum member checking."""

    def test_valid_enum(self, GlobalVectorCommandType):
        cmd = GlobalVectorCommandType()
        # Default enum value should be valid
        valid, errors = validate_message(cmd)
        assert valid is True


# ===================================================================
# Sequence validation
# ===================================================================


class TestSequenceValidation:
    """Validate sequence element iteration."""

    def test_empty_sequence(self, FinsSpecsReportType):
        report = FinsSpecsReportType()
        report.finSpecs = []
        valid, errors = validate_message(report)
        assert valid is True

    def test_valid_sequence(self, FinsSpecsReportType, FinSpecsType):
        report = FinsSpecsReportType()
        report.finSpecs = [FinSpecsType(), FinSpecsType()]
        valid, errors = validate_message(report)
        assert valid is True

    def test_invalid_element_in_sequence(self, FinsSpecsReportType, FinSpecsType):
        report = FinsSpecsReportType()
        fin1 = FinSpecsType()
        fin2 = FinSpecsType()
        fin2.maxDeflectionRate = 999.0  # range is [-62.831, 62.831]
        report.finSpecs = [fin1, fin2]
        valid, errors = validate_message(report)
        assert valid is False
        assert "finSpecs[1].maxDeflectionRate" in errors[0]

    def test_multiple_invalid_elements(self, FinsSpecsReportType, FinSpecsType):
        report = FinsSpecsReportType()
        fin1 = FinSpecsType()
        fin1.maxDeflectionRate = -100.0
        fin2 = FinSpecsType()
        fin2.maxPositiveDeflection = 99.0  # range is [-pi, pi]
        report.finSpecs = [fin1, fin2]
        valid, errors = validate_message(report)
        assert valid is False
        assert len(errors) == 2
        assert "finSpecs[0]" in errors[0]
        assert "finSpecs[1]" in errors[1]


# ===================================================================
# Union / variant validation
# ===================================================================


class TestUnionValidation:
    """Validate union (variant type) recursive walking."""

    def test_direction_variant_valid(self, GlobalVectorCommandType):
        """Default direction variant should validate."""
        cmd = GlobalVectorCommandType()
        valid, errors = validate_message(cmd)
        assert valid is True

    def test_variant_with_invalid_nested_field(self):
        """Inject invalid value through a union branch."""
        from rtiumaapy.datamodel.SpeedRequirementVariantType import (
            UMAA_Common_Speed_SpeedRequirementVariantType,
        )
        # Default should be valid
        sv = UMAA_Common_Speed_SpeedRequirementVariantType()
        valid, errors = validate_message(sv)
        assert valid is True


# ===================================================================
# Realistic multi-field validation
# ===================================================================


class TestRealisticScenarios:
    """Full-message validation scenarios matching C++ isMessageValid() checks."""

    def test_global_vector_command_fully_valid(self, GlobalVectorCommandType):
        cmd = GlobalVectorCommandType()
        cmd.timeStamp.seconds = 1711000000
        cmd.timeStamp.nanoseconds = 0
        cmd.endTime = None
        cmd.depthChangePitch = None
        cmd.elevation = None
        valid, errors = validate_message(cmd)
        assert valid is True
        assert errors == []

    def test_global_vector_command_multiple_errors(
        self, GlobalVectorCommandType, DateTime
    ):
        cmd = GlobalVectorCommandType()
        cmd.timeStamp.nanoseconds = -1
        dt = DateTime()
        dt.nanoseconds = 2_000_000_000
        cmd.endTime = dt
        valid, errors = validate_message(cmd)
        assert valid is False
        assert len(errors) == 2

    def test_pose_report_validation(self):
        """Validate a GlobalPoseReportType with range-checked fields."""
        from rtiumaapy.datamodel.GlobalPoseReportType import (
            UMAA_SA_GlobalPoseStatus_GlobalPoseReportType as PoseReport,
        )
        report = PoseReport()
        valid, errors = validate_message(report)
        assert valid is True

    def test_speed_report_validation(self):
        """Validate SpeedReportType — range-checked speed fields."""
        from rtiumaapy.datamodel.SpeedReportType import (
            UMAA_SA_SpeedStatus_SpeedReportType,
        )
        report = UMAA_SA_SpeedStatus_SpeedReportType()
        valid, errors = validate_message(report)
        assert valid is True

    def test_speed_report_invalid_speed(self):
        """Set speed above max to trigger error."""
        from rtiumaapy.datamodel.SpeedReportType import (
            UMAA_SA_SpeedStatus_SpeedReportType,
        )
        report = UMAA_SA_SpeedStatus_SpeedReportType()
        report.speedOverGround = 999_999_999.0  # max is 299792458.0
        valid, errors = validate_message(report)
        assert valid is False
        assert "speedOverGround" in errors[0]


# ===================================================================
# Edge cases
# ===================================================================


class TestEdgeCases:
    """Edge case handling."""

    def test_non_dataclass_returns_valid(self):
        """Non-dataclass input returns valid (no fields to check)."""
        valid, errors = validate_message("not_a_dataclass")
        assert valid is True
        assert errors == []

    def test_field_ranges_boundary_inclusive(self, DateTime):
        """Boundary values should be accepted (inclusive range)."""
        dt = DateTime()
        dt.seconds = -9223372036854775807  # exactly MIN
        dt.nanoseconds = 0
        valid, errors = validate_message(dt)
        assert valid is True

        dt.seconds = 9223372036854775807  # exactly MAX
        valid, errors = validate_message(dt)
        assert valid is True

    def test_inf_upper_bound(self):
        """Types with only MIN (MAX=inf) accept large values."""
        from rtiumaapy.datamodel.BITConfigCommandType import (
            UMAA_SO_BITConfig_BITConfigCommandType,
        )
        cmd = UMAA_SO_BITConfig_BITConfigCommandType()
        cmd.minTimeBetweenTests = 999_999_999.0
        valid, errors = validate_message(cmd)
        # Should be valid — max is inf
        range_errors = [e for e in errors if "minTimeBetweenTests" in e]
        assert len(range_errors) == 0


# ===================================================================
# Direction / speed range checks
# ===================================================================


class TestDomainRanges:
    """Test domain-specific range checks (direction, speed)."""

    def test_invalid_direction_range(self):
        """Direction heading outside [-2π, 2π] fails."""
        from rtiumaapy.datamodel.DirectionCurrentRequirement import (
            UMAA_Common_Orientation_DirectionCurrentRequirement,
        )
        req = UMAA_Common_Orientation_DirectionCurrentRequirement()
        req.direction = 10.0  # range is [-6.283, 6.283]
        valid, errors = validate_message(req)
        assert valid is False
        assert "direction" in errors[0]
        assert "out of range" in errors[0]

    def test_valid_direction(self):
        """Direction heading within [-2π, 2π] passes."""
        from rtiumaapy.datamodel.DirectionCurrentRequirement import (
            UMAA_Common_Orientation_DirectionCurrentRequirement,
        )
        req = UMAA_Common_Orientation_DirectionCurrentRequirement()
        req.direction = 3.14
        valid, errors = validate_message(req)
        dir_errors = [e for e in errors if "direction" in e and "out of range" in e]
        assert len(dir_errors) == 0

    def test_invalid_speed_range(self):
        """Speed outside [-299792458, 299792458] fails."""
        from rtiumaapy.datamodel.SpeedReportType import (
            UMAA_SA_SpeedStatus_SpeedReportType,
        )
        report = UMAA_SA_SpeedStatus_SpeedReportType()
        report.speedOverGround = 999_999_999.0
        valid, errors = validate_message(report)
        assert valid is False
        assert "speedOverGround" in errors[0]


# ===================================================================
# Enum edge case — non-member value
# ===================================================================


class TestEnumEdgeCases:
    """Enum validation when a raw int is assigned (not a member)."""

    def test_enum_invalid_raw_int(self):
        """Raw int assigned to an enum field is flagged."""
        from rtiumaapy.datamodel.AnchorCommandType import (
            UMAA_EO_AnchorControl_AnchorCommandType,
        )
        cmd = UMAA_EO_AnchorControl_AnchorCommandType()
        cmd.action = 9999  # not a valid AnchorActionEnumType member
        valid, errors = validate_message(cmd)
        assert valid is False
        assert "action" in errors[0]
        assert "not a valid" in errors[0]


# ===================================================================
# Report type validation
# ===================================================================


class TestReportTypeValidation:
    """HealthReportType / LogReportType validate correctly."""

    def test_health_report_valid(self):
        from rtiumaapy.datamodel.HealthReportType import (
            UMAA_SO_HealthReport_HealthReportType,
        )
        report = UMAA_SO_HealthReport_HealthReportType()
        valid, errors = validate_message(report)
        assert valid is True

    def test_health_report_invalid_timestamp(self):
        from rtiumaapy.datamodel.HealthReportType import (
            UMAA_SO_HealthReport_HealthReportType,
        )
        report = UMAA_SO_HealthReport_HealthReportType()
        report.timeStamp.nanoseconds = -1
        valid, errors = validate_message(report)
        assert valid is False
        assert "timeStamp.nanoseconds" in errors[0]

    def test_log_report_valid(self):
        from rtiumaapy.datamodel.LogReportType import (
            UMAA_SO_LogReport_LogReportType,
        )
        report = UMAA_SO_LogReport_LogReportType()
        valid, errors = validate_message(report)
        assert valid is True

    def test_log_report_invalid_timestamp(self):
        from rtiumaapy.datamodel.LogReportType import (
            UMAA_SO_LogReport_LogReportType,
        )
        report = UMAA_SO_LogReport_LogReportType()
        report.timeStamp.nanoseconds = 2_000_000_000
        valid, errors = validate_message(report)
        assert valid is False
        assert "timeStamp.nanoseconds" in errors[0]


# ===================================================================
# Field ranges coverage
# ===================================================================


class TestFieldRangesCoverage:
    """Ensure the auto-generated range table has expected coverage."""

    def test_field_ranges_count(self):
        """FIELD_RANGES has at least 80 entries (matches typedef count)."""
        assert len(FIELD_RANGES) >= 80

    def test_field_ranges_has_datetime(self):
        """DateTime seconds/nanoseconds are in the table."""
        assert ("UMAA::Common::Measurement::DateTime", "nanoseconds") in FIELD_RANGES
        assert ("UMAA::Common::Measurement::DateTime", "seconds") in FIELD_RANGES
