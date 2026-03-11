"""Tests for rtiumaapy.errors — UmaaCommandException, AssemblyError, CommandResult."""

import pytest

from rtiumaapy.errors import AssemblyError, CommandResult, UmaaCommandException


class TestUmaaCommandException:
    """UmaaCommandException carries session_id, reason, and stage."""

    def test_attributes(self):
        e = UmaaCommandException(
            session_id="abc-123",
            reason="Active command exists",
            stage="ACK",
        )
        assert e.session_id == "abc-123"
        assert e.reason == "Active command exists"
        assert e.stage == "ACK"

    def test_message_format(self):
        e = UmaaCommandException(
            session_id="abc-123",
            reason="RPM too high",
            stage="EXECUTING",
        )
        assert "abc-123" in str(e)
        assert "EXECUTING" in str(e)
        assert "RPM too high" in str(e)

    def test_is_exception(self):
        assert issubclass(UmaaCommandException, Exception)

    def test_catchable(self):
        with pytest.raises(UmaaCommandException) as exc_info:
            raise UmaaCommandException(
                session_id="x", reason="rejected", stage="ACK"
            )
        assert exc_info.value.stage == "ACK"

    def test_plain_message(self):
        """Allow single-arg usage for simple cases."""
        e = UmaaCommandException(reason="Consumer already has an active session")
        assert "active session" in str(e)
        assert e.session_id == ""
        assert e.stage == ""

    def test_default_empty(self):
        e = UmaaCommandException()
        assert e.session_id == ""
        assert e.reason == ""
        assert e.stage == ""

    def test_all_stages(self):
        for stage in ("ACK", "EXECUTING", "STATUS", "TIMEOUT"):
            e = UmaaCommandException(session_id="s", reason="r", stage=stage)
            assert e.stage == stage


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
