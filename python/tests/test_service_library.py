"""Parametrized validation of every pre-wired service class.

Tier 1 — Import & subclass validation (no DDS, instant):
    Verifies every class is importable and inherits the correct base.

Tier 2 — Type-binding validation (no DDS, instant):
    Verifies all referenced datamodel types resolved at import time.

Auto-discovers classes from rtiumaapy.services.{domain}.__all__.
"""

from __future__ import annotations

import importlib

import pytest

from rtiumaapy.command_consumer import CommandConsumer
from rtiumaapy.command_provider import CommandProvider
from rtiumaapy.report_consumer import ReportConsumer
from rtiumaapy.report_provider import ReportProvider

# ---------------------------------------------------------------------------
# Build SERVICE_REGISTRY from domain __all__ exports
# ---------------------------------------------------------------------------

DOMAINS = ("co", "eo", "mm", "mo", "sa", "sem", "so")

# Map class-name suffix → expected base class
_SUFFIX_MAP = [
    ("ControlProvider", CommandProvider),
    ("ControlConsumer", CommandConsumer),
    ("ConfigProvider", CommandProvider),
    ("ConfigConsumer", CommandConsumer),
    ("ReportProvider", ReportProvider),
    ("ReportConsumer", ReportConsumer),
]


def _detect_base(cls_name: str):
    """Determine expected base class from the class name suffix."""
    for suffix, base in _SUFFIX_MAP:
        if cls_name.endswith(suffix):
            return base
    raise ValueError(f"Cannot determine base class for {cls_name!r}")


def _build_registry():
    """Scan all domain packages and return (cls_name, domain, expected_base) tuples."""
    registry = []
    for domain in DOMAINS:
        mod = importlib.import_module(f"rtiumaapy.services.{domain}")
        for name in mod.__all__:
            base = _detect_base(name)
            registry.append((name, domain, base))
    return registry


SERVICE_REGISTRY = _build_registry()


def _id_fn(val):
    """Readable test IDs: use cls_name."""
    if isinstance(val, str):
        return val
    return None


# ---------------------------------------------------------------------------
# Tier 1 — Import & Subclass Validation
# ---------------------------------------------------------------------------


class TestServiceImport:
    """Every service class is importable and has correct inheritance."""

    @pytest.mark.parametrize("cls_name,domain,expected_base", SERVICE_REGISTRY, ids=_id_fn)
    def test_class_importable(self, cls_name, domain, expected_base):
        mod = importlib.import_module(f"rtiumaapy.services.{domain}")
        cls = getattr(mod, cls_name)
        assert cls is not None

    @pytest.mark.parametrize("cls_name,domain,expected_base", SERVICE_REGISTRY, ids=_id_fn)
    def test_correct_base_class(self, cls_name, domain, expected_base):
        mod = importlib.import_module(f"rtiumaapy.services.{domain}")
        cls = getattr(mod, cls_name)
        assert issubclass(cls, expected_base), (
            f"{cls_name} should inherit from {expected_base.__name__}, "
            f"got {cls.__bases__}"
        )


# ---------------------------------------------------------------------------
# Tier 2 — Type-Binding Validation
# ---------------------------------------------------------------------------


class TestServiceBindings:
    """DataModel types referenced by service classes actually exist."""

    @pytest.mark.parametrize("cls_name,domain,expected_base", SERVICE_REGISTRY, ids=_id_fn)
    def test_module_loaded_successfully(self, cls_name, domain, expected_base):
        """Module-level imports are the real test: if the datamodel type or topic
        constant is missing, the module fails to load entirely."""
        mod = importlib.import_module(f"rtiumaapy.services.{domain}")
        cls = getattr(mod, cls_name)
        assert cls.__module__ == f"rtiumaapy.services.{domain}"

    @pytest.mark.parametrize("cls_name,domain,expected_base", SERVICE_REGISTRY, ids=_id_fn)
    def test_top_level_reexport(self, cls_name, domain, expected_base):
        """Class is accessible from the top-level rtiumaapy.services package."""
        top = importlib.import_module("rtiumaapy.services")
        cls = getattr(top, cls_name, None)
        assert cls is not None, f"{cls_name} missing from rtiumaapy.services"


# ---------------------------------------------------------------------------
# Coverage summary
# ---------------------------------------------------------------------------


class TestServiceCounts:
    """Verify expected class counts per domain."""

    EXPECTED = {
        "co": 42,
        "eo": 58,
        "mm": 70,
        "mo": 18,
        "sa": 66,
        "sem": 26,
        "so": 70,
    }

    @pytest.mark.parametrize("domain,expected_count", list(EXPECTED.items()))
    def test_domain_class_count(self, domain, expected_count):
        mod = importlib.import_module(f"rtiumaapy.services.{domain}")
        assert len(mod.__all__) == expected_count

    def test_total_class_count(self):
        top = importlib.import_module("rtiumaapy.services")
        assert len(top.__all__) == 350
