"""Tests for rtiumaapy.errors — CommandHookError, CommandFailedError, AssemblyError, CommandResult."""

import pytest

from rtiumaapy.errors import AssemblyError, CommandResult, CommandHookError, CommandFailedError


class TestCommandHookError:
    """CommandHookError carries reason_enum and message (D40)."""

    def test_attributes(self):
        e = CommandHookError(reason_enum=3, message="bad param")
        assert e.reason_enum == 3
        assert e.message == "bad param"

    def test_message_format(self):
        e = CommandHookError(reason_enum=3, message="bad param")
        assert "3" in str(e)
        assert "bad param" in str(e)

    def test_is_exception(self):
        assert issubclass(CommandHookError, Exception)

    def test_catchable(self):
        with pytest.raises(CommandHookError):
            raise CommandHookError(reason_enum=1, message="fail")

    def test_defaults(self):
        e = CommandHookError()
        assert e.reason_enum == 0
        assert e.message == ""


class TestCommandFailedError:
    """CommandFailedError carries session_id, status, reason_enum, message (D40)."""

    def test_attributes(self):
        e = CommandFailedError(
            session_id="abc-123",
            status="FAILED",
            reason_enum=5,
            message="RPM too high",
        )
        assert e.session_id == "abc-123"
        assert e.status == "FAILED"
        assert e.reason_enum == 5
        assert e.message == "RPM too high"

    def test_message_format(self):
        e = CommandFailedError(
            session_id="abc-123",
            status="FAILED",
            reason_enum=5,
            message="RPM too high",
        )
        assert "abc-123" in str(e)
        assert "FAILED" in str(e)
        assert "5" in str(e)
        assert "RPM too high" in str(e)

    def test_is_exception(self):
        assert issubclass(CommandFailedError, Exception)

    def test_catchable(self):
        with pytest.raises(CommandFailedError) as exc_info:
            raise CommandFailedError(
                session_id="x", status="FAILED", reason_enum=1, message="rejected"
            )
        assert exc_info.value.session_id == "x"

    def test_defaults(self):
        e = CommandFailedError()
        assert e.session_id == ""
        assert e.status == ""
        assert e.reason_enum == 0
        assert e.message == ""


class TestAssemblyError:
    """AssemblyError carries root_type, slot_name, and message."""

    def test_attributes(self):
        e = AssemblyError(
            root_type="ContactReportType",
            slot_name="contacts",
            message="No elements found after retries",
        )
        assert e.root_type == "ContactReportType"
        assert e.slot_name == "contacts"

    def test_message_format(self):
        e = AssemblyError(
            root_type="ContactReportType",
            slot_name="contacts",
            message="No elements found",
        )
        msg = str(e)
        assert "ContactReportType" in msg
        assert "contacts" in msg
        assert "No elements found" in msg

    def test_is_exception(self):
        assert issubclass(AssemblyError, Exception)

    def test_catchable(self):
        with pytest.raises(AssemblyError):
            raise AssemblyError(
                root_type="X", slot_name="y", message="broken"
            )


class TestCommandResult:
    """CommandResult is a dataclass returned on successful command completion."""

    def test_defaults(self):
        r = CommandResult()
        assert r.session_id == ""
        assert r.status == ""
        assert r.data is None

    def test_ok_completed(self):
        r = CommandResult(session_id="s1", status="COMPLETED")
        assert r.ok is True

    def test_ok_canceled(self):
        r = CommandResult(session_id="s1", status="CANCELED")
        assert r.ok is False

    def test_ok_empty_status(self):
        r = CommandResult()
        assert r.ok is False

    def test_data_field(self):
        payload = {"rpm": 2500}
        r = CommandResult(session_id="s1", status="COMPLETED", data=payload)
        assert r.data == payload
        assert r.ok is True

    def test_is_dataclass(self):
        from dataclasses import is_dataclass

        assert is_dataclass(CommandResult)

    def test_repr_excludes_data(self):
        """data field has repr=False to keep logs clean."""
        r = CommandResult(session_id="s1", status="COMPLETED", data={"big": "payload"})
        r_str = repr(r)
        assert "big" not in r_str
        assert "s1" in r_str
