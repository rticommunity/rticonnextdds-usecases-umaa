"""Tests for rtiumaapy.guid_util — GUIDUtil and NIL constant."""

import uuid

from rtiumaapy.guid_util import NIL, GUIDUtil


class TestGUIDGenerate:
    """GUIDUtil.generate() produces valid 16-byte random GUIDs."""

    def test_returns_bytes(self):
        g = GUIDUtil.generate()
        assert isinstance(g, bytes)

    def test_length_is_16(self):
        g = GUIDUtil.generate()
        assert len(g) == 16

    def test_unique(self):
        """Two consecutive calls should never collide."""
        a = GUIDUtil.generate()
        b = GUIDUtil.generate()
        assert a != b

    def test_uuid4_version(self):
        """Generated GUID should be a valid UUID v4."""
        g = GUIDUtil.generate()
        u = uuid.UUID(bytes=g)
        assert u.version == 4


class TestGUIDToHex:
    """GUIDUtil.to_hex() → space-separated hex string for &hex() CFT."""

    def test_known_value(self):
        raw = bytes.fromhex("550e8400e29b41d4a716446655440000")
        result = GUIDUtil.to_hex(raw)
        assert result == "55 0e 84 00 e2 9b 41 d4 a7 16 44 66 55 44 00 00"

    def test_all_zeros(self):
        result = GUIDUtil.to_hex(NIL)
        assert result == "00 " * 15 + "00"

    def test_all_ff(self):
        raw = b"\xff" * 16
        result = GUIDUtil.to_hex(raw)
        assert result == "ff " * 15 + "ff"

    def test_rejects_wrong_length(self):
        import pytest

        with pytest.raises(ValueError, match="16 bytes"):
            GUIDUtil.to_hex(b"\x00" * 15)
        with pytest.raises(ValueError, match="16 bytes"):
            GUIDUtil.to_hex(b"\x00" * 17)


class TestGUIDToString:
    """GUIDUtil.to_string() → human-readable UUID string."""

    def test_known_roundtrip(self):
        raw = bytes.fromhex("550e8400e29b41d4a716446655440000")
        result = GUIDUtil.to_string(raw)
        assert result == "550e8400-e29b-41d4-a716-446655440000"

    def test_nil(self):
        result = GUIDUtil.to_string(NIL)
        assert result == "00000000-0000-0000-0000-000000000000"

    def test_rejects_wrong_length(self):
        import pytest

        with pytest.raises(ValueError, match="16 bytes"):
            GUIDUtil.to_string(b"\x00" * 8)


class TestGUIDFromString:
    """GUIDUtil.from_string() → 16 raw bytes from UUID string."""

    def test_known_value(self):
        result = GUIDUtil.from_string("550e8400-e29b-41d4-a716-446655440000")
        assert result == bytes.fromhex("550e8400e29b41d4a716446655440000")

    def test_roundtrip_generate(self):
        """generate → to_string → from_string → should match original."""
        original = GUIDUtil.generate()
        s = GUIDUtil.to_string(original)
        recovered = GUIDUtil.from_string(s)
        assert recovered == original

    def test_roundtrip_hex(self):
        """generate → to_hex → the hex tokens should match to_string bytes."""
        original = GUIDUtil.generate()
        hex_str = GUIDUtil.to_hex(original)
        reconstructed = bytes.fromhex(hex_str.replace(" ", ""))
        assert reconstructed == original

    def test_invalid_string_raises(self):
        import pytest

        with pytest.raises(ValueError):
            GUIDUtil.from_string("not-a-uuid")


class TestNILConstant:
    """NIL is the all-zero 16-byte sentinel."""

    def test_value(self):
        assert NIL == b"\x00" * 16

    def test_length(self):
        assert len(NIL) == 16

    def test_is_not_generate(self):
        """NIL should never be equal to a random GUID."""
        g = GUIDUtil.generate()
        assert g != NIL
