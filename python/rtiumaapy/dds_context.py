"""DDSContext — singleton DDS infrastructure owner for UMAA applications.

Manages the DomainParticipant, Publisher, Subscriber, QoS provider, topic
cache, and service registry.  Services receive a ``DDSContext`` at
construction and use its factory methods to create DDS entities.
"""

from __future__ import annotations

import asyncio
import logging
import os
import signal
from pathlib import Path
from typing import Any, Dict, List, Optional, Tuple, Type

import rti.asyncio as rti_asyncio
import rti.connextdds as dds

_logger = logging.getLogger(__name__)

# ── Constants ─────────────────────────────────────────────────────────────
# Mirrors UMAA::DdsDefinitions IDL constants.  When the generated code is
# available these can be replaced by imports from the generated module.

QOS_ASSIGNER_PROFILE = "UMAAQoSLib::AssignerQoS"
QOS_PARTICIPANT_PROFILE = "UMAAQoSLib::DefaultUMAAParticipant"


UMAA_QOS_FILE_ENV = "UMAA_QOS_FILE"


def _default_qos_file() -> str:
    """Return the path to the QoS XML from the ``UMAA_QOS_FILE`` env var.

    Raises:
        EnvironmentError: If ``UMAA_QOS_FILE`` is not set.
        FileNotFoundError: If the path does not exist.
    """
    env = os.environ.get(UMAA_QOS_FILE_ENV)
    if not env:
        raise EnvironmentError(
            f"{UMAA_QOS_FILE_ENV} environment variable is not set. "
            "Set it to the path of qos/umaa_qos_lib.xml."
        )
    p = Path(env)
    if not p.exists():
        raise FileNotFoundError(
            f"{UMAA_QOS_FILE_ENV}={env!r} does not exist."
        )
    return str(p)


class DDSContext:
    """Singleton encapsulating all DDS infrastructure for a UMAA application.

    Only one ``DDSContext`` may exist at a time.  Call
    :meth:`shutdown` before creating a new one.
    """

    _instance: Optional[DDSContext] = None

    # ── Construction ──────────────────────────────────────────────────────

    def __init__(
        self,
        domain_id: int = 0,
        qos_file: Optional[str] = None,
    ) -> None:
        """Create the DDS infrastructure.

        Args:
            domain_id: DDS domain ID.
            qos_file: Path to QoS XML.  If *None*, reads from the
                ``UMAA_QOS_FILE`` environment variable.

        Raises:
            RuntimeError: If a ``DDSContext`` already exists.
        """
        if DDSContext._instance is not None:
            raise RuntimeError(
                "A DDSContext already exists. Call shutdown() before creating a new one."
            )

        self._domain_id = domain_id
        self._qos_file = qos_file or _default_qos_file()

        # QoS provider — loads XML profiles, sets default for topic_filter matching
        self._qos_provider = dds.QosProvider(self._qos_file)
        self._qos_provider.default_profile = QOS_ASSIGNER_PROFILE

        # DomainParticipant
        self._participant = dds.DomainParticipant(
            domain_id,
            qos=self._qos_provider.participant_qos_from_profile(
                QOS_PARTICIPANT_PROFILE
            ),
        )

        # Shared Publisher / Subscriber
        self._publisher = dds.Publisher(self._participant)
        self._subscriber = dds.Subscriber(self._participant)

        # Service registry: service_name → service instance (insertion-ordered)
        self._registry: Dict[str, Any] = {}

        # Monotonic counter for unique CFT names
        self._cft_counter = 0

        # Shutdown guard
        self._is_shutdown = False

        # Commit singleton only after all DDS setup succeeds
        DDSContext._instance = self

    # ── Singleton access ──────────────────────────────────────────────────

    @classmethod
    def current(cls) -> DDSContext:
        """Return the active ``DDSContext``.

        Raises:
            RuntimeError: If no context has been created yet.
        """
        if cls._instance is None:
            raise RuntimeError("DDSContext not initialized.")
        return cls._instance

    # ── Properties ────────────────────────────────────────────────────────

    @property
    def participant(self) -> dds.DomainParticipant:
        return self._participant

    @property
    def publisher(self) -> dds.Publisher:
        return self._publisher

    @property
    def subscriber(self) -> dds.Subscriber:
        return self._subscriber

    @property
    def qos_provider(self) -> dds.QosProvider:
        return self._qos_provider

    @property
    def domain_id(self) -> int:
        return self._domain_id

    # ── Topic lookup ─────────────────────────────────────────────────────

    def get_topic(self, data_type: Type, topic_name: str) -> dds.Topic:
        """Retrieve or create a typed DDS Topic.

        Uses ``dds.Topic.find()`` to look up an existing Topic registered
        with the DomainParticipant before creating a new one (D17).

        Args:
            data_type: An ``@idl.struct`` type (the IDL-generated Python class).
            topic_name: The DDS topic name string.

        Returns:
            The existing or newly created ``dds.Topic``.
        """
        topic = dds.Topic.find(self._participant, topic_name)
        if topic is None:
            topic = dds.Topic(self._participant, topic_name, data_type)
        return topic

    # ── Service registry ──────────────────────────────────────────────────

    def register_service(self, key: str, service: Any) -> None:
        """Register a service.  Does **not** start it.

        Called automatically by :class:`BaseService.__init__`.

        Raises:
            ValueError: If *key* is already registered.
        """
        if key in self._registry:
            raise ValueError(f"Service already registered under key '{key}'.")
        self._registry[key] = service

    def unregister_service(self, key: str) -> Optional[Any]:
        """Remove and return a service, or *None* if not found.

        Cancels the service's ``_run()`` task if one is active.
        """
        service = self._registry.pop(key, None)
        if service is not None and hasattr(service, "_task") and service._task is not None:
            service._task.cancel()
        return service

    def get_service(self, key: str) -> Optional[Any]:
        """Look up a registered service by key."""
        return self._registry.get(key)

    def registered_service_keys(self) -> List[str]:
        """Return a snapshot of all registered service keys."""
        return list(self._registry.keys())

    # ── Factory methods ───────────────────────────────────────────────────

    def create_writer(
        self,
        data_type: Type,
        topic_name: str,
    ) -> dds.DataWriter:
        """Create a typed ``DataWriter`` with QoS resolved from topic_filter rules.

        Args:
            data_type: An ``@idl.struct`` type.
            topic_name: The DDS topic name — drives automatic QoS assignment.
        """
        topic = self.get_topic(data_type, topic_name)
        writer_qos = self._qos_provider.get_topic_datawriter_qos(topic_name)
        return dds.DataWriter(self._publisher, topic, qos=writer_qos)

    def create_reader(
        self,
        data_type: Type,
        topic_name: str,
    ) -> dds.DataReader:
        """Create a typed ``DataReader`` with QoS resolved from topic_filter rules.

        Args:
            data_type: An ``@idl.struct`` type.
            topic_name: The DDS topic name — drives automatic QoS assignment.
        """
        topic = self.get_topic(data_type, topic_name)
        reader_qos = self._qos_provider.get_topic_datareader_qos(topic_name)
        return dds.DataReader(self._subscriber, topic, qos=reader_qos)

    def create_filtered_reader(
        self,
        data_type: Type,
        topic_name: str,
        filter_expression: str,
        filter_parameters: Optional[List[str]] = None,
        filter_name: Optional[str] = None,
    ) -> Tuple[dds.DataReader, dds.ContentFilteredTopic]:
        """Create a content-filtered ``DataReader``.

        Returns:
            ``(DataReader, ContentFilteredTopic)`` — the caller can update
            the filter dynamically via ``cft.set_filter()``.
        """
        topic = self.get_topic(data_type, topic_name)
        reader_qos = self._qos_provider.get_topic_datareader_qos(topic_name)

        if filter_name is None:
            self._cft_counter += 1
            filter_name = f"{topic_name}_cft_{self._cft_counter}"

        cft = dds.ContentFilteredTopic(
            topic,
            filter_name,
            dds.Filter(filter_expression, parameters=filter_parameters or []),
        )
        reader = dds.DataReader(self._subscriber, cft, qos=reader_qos)
        return reader, cft

    # ── Lifecycle ─────────────────────────────────────────────────────────

    async def run_until_shutdown(self) -> None:
        """Start all registered services and block until SIGINT/SIGTERM.

        Each service with a ``_run`` coroutine method gets its own
        ``asyncio.Task``.  When a termination signal arrives the context
        calls :meth:`shutdown` to tear everything down.
        """
        # Call on_start() for services/components that define it
        for service in self._registry.values():
            if hasattr(service, "on_start"):
                await service.on_start()

        # Start _run() for every registered service
        for service in self._registry.values():
            if hasattr(service, "_run"):
                service._task = asyncio.create_task(service._run())

        # Wait for shutdown signal
        stop = asyncio.Event()
        loop = asyncio.get_running_loop()
        for sig in (signal.SIGINT, signal.SIGTERM):
            loop.add_signal_handler(sig, stop.set)

        await stop.wait()
        await self.shutdown()

    async def shutdown(self) -> None:
        """Tear down all managed resources in order:

        1. Stop the ``rti.asyncio`` dispatcher — we are done listening.
        2. Cancel every service's ``_run()`` task.
        3. Await ``close()`` on every registered service (reverse order)
           — services publish final messages (writes only).
        4. Close all DDS contained entities.
        5. Close the DomainParticipant.
        6. Clear the singleton reference.
        """
        if self._is_shutdown:
            return
        self._is_shutdown = True

        # 1. Stop the rti.asyncio dispatcher thread.
        #    We are done listening — no more data will be received.
        #    Writer.write() is synchronous and does not need the dispatcher,
        #    so final status messages can still be published after this.
        await rti_asyncio.close()

        # 2. Cancel _run() tasks.  With the dispatcher already stopped,
        #    take_async() coroutines can no longer block; CancelledError
        #    is delivered by the asyncio event loop, not the dispatcher.
        for service in self._registry.values():
            task: Optional[asyncio.Task] = getattr(service, "_task", None)
            if task is not None and not task.done():
                task.cancel()
                try:
                    await task
                except asyncio.CancelledError:
                    pass

        # 3. Close registered services in reverse order.
        #    Service close() publishes final messages (FAILED statuses,
        #    dispose instances) via synchronous writer.write() calls.
        #    No DDS entities are closed here.
        for key in reversed(list(self._registry.keys())):
            service = self._registry[key]
            try:
                await service.close()
            except Exception:
                _logger.exception("Error closing service %s", key)
        self._registry.clear()

        # 4–5. Close DDS entities (dispatcher already stopped — safe).
        self._participant.close_contained_entities()
        self._participant.close()

        # 6. Clear singleton
        if DDSContext._instance is self:
            DDSContext._instance = None
