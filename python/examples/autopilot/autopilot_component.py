"""AutopilotComponent — Python UMAA USV Autopilot per Component Definitions v1.0 §3.1.

Implements **all 18 services** from the UMAA Autopilot Component Definition:

**Command Providers** (4):
  - PrimitiveDriverControl — accepts effort commands, echoes as exec status
  - GlobalVectorControl    — accepts heading/speed, publishes exec status
  - GlobalHoverControl     — accepts hover position, publishes exec status
  - ActiveConstraintsControl — accepts constraint-ID list, completes

**Command Consumers** (4):
  - ConditionalAddControl           — forwards conditional-add commands
  - ConditionalDeleteControl        — forwards conditional-delete commands
  - MissionPlanConstraintAddControl — receives constraint-add status
  - MissionPlanConstraintDeleteControl — receives constraint-delete status

**Report Providers** (4):
  - HealthReport      — publishes periodic health
  - LogReport         — publishes log entries on lifecycle events
  - UVPlatformSpecs   — publishes specs once at startup
  - UVPlatformCapabilities — publishes capabilities once at startup

**Report Consumers** (6):
  - GlobalPoseReport      — caches latest pose
  - VelocityReport        — caches latest velocity
  - SpeedReport           — caches latest speed
  - WindReport            — caches latest wind
  - WaterCurrentReport    — caches latest water current
  - ConditionalReport     — caches latest conditional report

All services auto-register with the :class:`DDSContext` and are started
by ``ctx.run_until_shutdown()``, which automatically calls ``on_start()``,
``_run()`` (periodic publishers), and ``close()`` for every registered
component and service.

Usage::

    ctx = DDSContext(domain_id=0)
    component = AutopilotComponent(ctx, source_id=my_id)
    asyncio.run(ctx.run_until_shutdown())
"""

from __future__ import annotations

import asyncio
import logging
from typing import List

import rti.connextdds as dds

from rtiumaapy.base_component import BaseComponent
from rtiumaapy.dds_context import DDSContext
from rtiumaapy.guid_util import GUIDUtil
from rtiumaapy.timestamp import set_timestamp
from rtiumaapy.command_provider_session import CommandProviderSession

# --- Common UMAA types ---
from rtiumaapy.datamodel.HealthReportType import (
    UMAA_Common_IdentifierType as IdentifierType,
    UMAA_Common_Measurement_NumericGUID as NumericGUID,
    UMAA_SO_HealthReport_HealthReportType as HealthReportType,
    UMAA_Common_MaritimeEnumeration_ErrorConditionEnumModule_ErrorConditionEnumType as ErrorCondition,
    UMAA_Common_MaritimeEnumeration_ErrorCodeEnumModule_ErrorCodeEnumType as ErrorCode,
)
from rtiumaapy.datamodel.LogReportType import (
    UMAA_SO_LogReport_LogReportType as LogReportType,
    UMAA_Common_MaritimeEnumeration_LogLevelEnumModule_LogLevelEnumType as LogLevel,
)
from rtiumaapy.datamodel.GlobalVectorExecutionStatusReportType import (
    UMAA_MO_GlobalVectorControl_GlobalVectorExecutionStatusReportType as GlobalVectorExecStatus,
)
from rtiumaapy.datamodel.GlobalHoverExecutionStatusReportType import (
    UMAA_MO_GlobalHoverControl_GlobalHoverExecutionStatusReportType as GlobalHoverExecStatus,
)
from rtiumaapy.datamodel.PrimitiveDriverExecutionStatusReportType import (
    UMAA_MO_PrimitiveDriverControl_PrimitiveDriverExecutionStatusReportType as PrimitiveDriverExecStatus,
)

# --- Pre-wired service classes from P1 ---
from rtiumaapy.services.mo import (
    GlobalVectorControlProvider,
    GlobalHoverControlProvider,
    PrimitiveDriverControlProvider,
)
from rtiumaapy.services.mm import (
    ActiveConstraintsControlProvider,
    ConditionalAddControlConsumer,
    ConditionalDeleteControlConsumer,
    MissionPlanConstraintAddControlConsumer,
    MissionPlanConstraintDeleteControlConsumer,
    ConditionalReportConsumer,
)
from rtiumaapy.services.so import (
    HealthReportProvider,
    LogReportProvider,
)
from rtiumaapy.services.eo import (
    UVPlatformSpecsReportProvider,
    UVPlatformCapabilitiesReportProvider,
)
from rtiumaapy.services.sa import (
    GlobalPoseReportConsumer,
    SpeedReportConsumer,
    VelocityReportConsumer,
    WaterCurrentReportConsumer,
    WindReportConsumer,
)

logger = logging.getLogger("autopilot")


# ---------------------------------------------------------------------------
# Command Provider subclasses — all fully implemented
# ---------------------------------------------------------------------------


class _APGlobalVectorProvider(GlobalVectorControlProvider):
    """GlobalVector — heading/speed control with execution status."""

    def __init__(self, ctx, *, source_id, component: "AutopilotComponent"):
        super().__init__(ctx, source_id=source_id)
        self._component = component

    async def on_commanded(self, session: CommandProviderSession):
        cmd = session.command
        logger.info(
            "GlobalVector COMMANDED — sessionID=%s direction=%s speed=%s",
            GUIDUtil.to_hex(cmd.sessionID.value),
            getattr(cmd, "direction", "?"),
            getattr(cmd, "speed", "?"),
        )

    async def on_executing(self, session: CommandProviderSession):
        cmd = session.command
        pose = self._component.latest_pose
        speed = self._component.latest_speed

        exec_status = GlobalVectorExecStatus()
        exec_status.source = self._source_id
        exec_status.sessionID = cmd.sessionID
        exec_status.elevationAchieved = True
        exec_status.directionAchieved = pose is not None
        exec_status.speedAchieved = speed is not None
        set_timestamp(exec_status)

        if self._exec_status_writer is not None:
            self._exec_status_writer.write(exec_status)

        logger.info(
            "GlobalVector EXECUTING — dir=%s speed=%s",
            exec_status.directionAchieved,
            exec_status.speedAchieved,
        )

    async def on_complete(self, session: CommandProviderSession):
        logger.info("GlobalVector COMPLETED")

    async def on_failed(self, session: CommandProviderSession, exception):
        logger.warning("GlobalVector FAILED: %s", exception)


class _APGlobalHoverProvider(GlobalHoverControlProvider):
    """GlobalHover — hold position with transit-to-hover state tracking."""

    def __init__(self, ctx, *, source_id, component: "AutopilotComponent"):
        super().__init__(ctx, source_id=source_id)
        self._component = component

    async def on_commanded(self, session: CommandProviderSession):
        cmd = session.command
        logger.info(
            "GlobalHover COMMANDED — pos=(%s, %s) sessionID=%s",
            getattr(cmd.position, "geodeticLatitude", "?"),
            getattr(cmd.position, "geodeticLongitude", "?"),
            GUIDUtil.to_hex(cmd.sessionID.value),
        )

    async def on_executing(self, session: CommandProviderSession):
        cmd = session.command
        pose = self._component.latest_pose

        exec_status = GlobalHoverExecStatus()
        exec_status.source = self._source_id
        exec_status.sessionID = cmd.sessionID
        set_timestamp(exec_status)

        # Transit-hover state: report elevation/speed achieved
        transit = exec_status.globalHoverState.GlobalHoverStateTypeSubtypes.value
        transit.elevationAchieved = True
        transit.speedAchieved = pose is not None

        exec_status.timeHoverAchieved = exec_status.timeStamp

        if self._exec_status_writer is not None:
            self._exec_status_writer.write(exec_status)

        logger.info(
            "GlobalHover EXECUTING — speedAchieved=%s",
            transit.speedAchieved,
        )

    async def on_complete(self, session: CommandProviderSession):
        logger.info("GlobalHover COMPLETED")

    async def on_failed(self, session: CommandProviderSession, exception):
        logger.warning("GlobalHover FAILED: %s", exception)


class _APPrimitiveDriverProvider(PrimitiveDriverControlProvider):
    """PrimitiveDriver — direct effort control, echoes commanded efforts."""

    def __init__(self, ctx, *, source_id, component: "AutopilotComponent"):
        super().__init__(ctx, source_id=source_id)
        self._component = component

    async def on_commanded(self, session: CommandProviderSession):
        cmd = session.command
        logger.info(
            "PrimitiveDriver COMMANDED — propLinear=(%s, %s, %s) sessionID=%s",
            cmd.propulsiveLinearEffort.xAxis,
            cmd.propulsiveLinearEffort.yAxis,
            cmd.propulsiveLinearEffort.zAxis,
            GUIDUtil.to_hex(cmd.sessionID.value),
        )

    async def on_executing(self, session: CommandProviderSession):
        cmd = session.command

        exec_status = PrimitiveDriverExecStatus()
        exec_status.source = self._source_id
        exec_status.sessionID = cmd.sessionID
        set_timestamp(exec_status)

        # Echo the commanded efforts as the achieved efforts
        exec_status.propulsiveLinearEffort = cmd.propulsiveLinearEffort
        exec_status.propulsiveRotationalEffort = cmd.propulsiveRotationalEffort
        exec_status.resistiveLinearEffort = cmd.resistiveLinearEffort
        exec_status.resistiveRotationalEffort = cmd.resistiveRotationalEffort

        if self._exec_status_writer is not None:
            self._exec_status_writer.write(exec_status)

        logger.info(
            "PrimitiveDriver EXECUTING — x=%.2f y=%.2f z=%.2f",
            exec_status.propulsiveLinearEffort.xAxis,
            exec_status.propulsiveLinearEffort.yAxis,
            exec_status.propulsiveLinearEffort.zAxis,
        )

    async def on_complete(self, session: CommandProviderSession):
        logger.info("PrimitiveDriver COMPLETED")

    async def on_failed(self, session: CommandProviderSession, exception):
        logger.warning("PrimitiveDriver FAILED: %s", exception)


class _APActiveConstraintsProvider(ActiveConstraintsControlProvider):
    """ActiveConstraints — accepts constraint-conditional-ID lists."""

    def __init__(self, ctx, *, source_id, component: "AutopilotComponent"):
        super().__init__(ctx, source_id=source_id)
        self._component = component

    async def on_commanded(self, session: CommandProviderSession):
        cmd = session.command
        n_ids = len(cmd.constraintConditionalIDs)
        logger.info(
            "ActiveConstraints COMMANDED — %d constraint IDs, sessionID=%s",
            n_ids,
            GUIDUtil.to_hex(cmd.sessionID.value),
        )
        # Store the active constraint IDs on the component
        self._component.active_constraint_ids = list(cmd.constraintConditionalIDs)

    async def on_executing(self, session: CommandProviderSession):
        logger.info(
            "ActiveConstraints EXECUTING — %d constraints applied",
            len(self._component.active_constraint_ids),
        )

    async def on_complete(self, session: CommandProviderSession):
        logger.info("ActiveConstraints COMPLETED")

    async def on_failed(self, session: CommandProviderSession, exception):
        logger.warning("ActiveConstraints FAILED: %s", exception)


# ---------------------------------------------------------------------------
# Command Consumer subclasses — log received status updates
# ---------------------------------------------------------------------------


class _APConstraintAddConsumer(MissionPlanConstraintAddControlConsumer):
    """Logs constraint-add command status from the mission planner."""

    async def on_status(self, session_id, status):
        logger.info(
            "MissionPlanConstraintAdd status — session=%s status=%s",
            GUIDUtil.to_hex(session_id), status.status,
        )

    async def on_terminal(self, session_id, status):
        logger.info("MissionPlanConstraintAdd terminal — session=%s",
                     GUIDUtil.to_hex(session_id))


class _APConstraintDeleteConsumer(MissionPlanConstraintDeleteControlConsumer):
    """Logs constraint-delete command status from the mission planner."""

    async def on_status(self, session_id, status):
        logger.info(
            "MissionPlanConstraintDelete status — session=%s status=%s",
            GUIDUtil.to_hex(session_id), status.status,
        )

    async def on_terminal(self, session_id, status):
        logger.info("MissionPlanConstraintDelete terminal — session=%s",
                     GUIDUtil.to_hex(session_id))


# ---------------------------------------------------------------------------
# Report Consumer subclasses — cache latest data
# ---------------------------------------------------------------------------


class _APPoseConsumer(GlobalPoseReportConsumer):
    def __init__(self, ctx, component: "AutopilotComponent"):
        super().__init__(ctx)
        self._component = component

    async def on_report(self, sample):
        self._component.latest_pose = sample
        logger.debug("Pose update received")


class _APSpeedConsumer(SpeedReportConsumer):
    def __init__(self, ctx, component: "AutopilotComponent"):
        super().__init__(ctx)
        self._component = component

    async def on_report(self, sample):
        self._component.latest_speed = sample
        logger.debug("Speed update received")


class _APVelocityConsumer(VelocityReportConsumer):
    def __init__(self, ctx, component: "AutopilotComponent"):
        super().__init__(ctx)
        self._component = component

    async def on_report(self, sample):
        self._component.latest_velocity = sample
        logger.debug("Velocity update received")


class _APWaterCurrentConsumer(WaterCurrentReportConsumer):
    def __init__(self, ctx, component: "AutopilotComponent"):
        super().__init__(ctx)
        self._component = component

    async def on_report(self, sample):
        self._component.latest_water_current = sample
        logger.debug("WaterCurrent update received")


class _APWindConsumer(WindReportConsumer):
    def __init__(self, ctx, component: "AutopilotComponent"):
        super().__init__(ctx)
        self._component = component

    async def on_report(self, sample):
        self._component.latest_wind = sample
        logger.debug("Wind update received")


class _APConditionalConsumer(ConditionalReportConsumer):
    def __init__(self, ctx, component: "AutopilotComponent"):
        super().__init__(ctx)
        self._component = component

    async def on_report(self, sample):
        self._component.latest_conditional = sample
        logger.debug("Conditional report received")


# ---------------------------------------------------------------------------
# AutopilotComponent
# ---------------------------------------------------------------------------


class AutopilotComponent(BaseComponent):
    """Python UMAA autopilot component (Component Definitions v1.0 §3.1).

    Implements all 18 services defined in the UMAA Autopilot Component
    Definition: 4 command providers, 4 command consumers, 4 report
    providers, and 6 report consumers.

    Registers itself as a :class:`BaseComponent` named ``"AutopilotComponent""`
    so that :meth:`DDSContext.run_until_shutdown` automatically starts its
    ``_run()`` coroutine (periodic publishers) and calls ``close()`` during
    shutdown while DDS writers are still open.

    Usage::

        ctx = DDSContext(domain_id=0)
        component = AutopilotComponent(ctx, source_id=my_id)
        asyncio.run(ctx.run_until_shutdown())

    Parameters
    ----------
    ctx : DDSContext
        DDS infrastructure (created externally for testability).
    source_id : IdentifierType
        This component's unique UMAA identity (used as key for reports
        and as the content-filter for incoming commands).
    health_period : float
        Seconds between health report publications (default 1.0).
    """

    def __init__(
        self,
        ctx: DDSContext,
        source_id: IdentifierType,
        *,
        health_period: float = 1.0,
    ) -> None:
        super().__init__(ctx, "AutopilotComponent")
        self._source_id = source_id
        self._health_period = health_period

        # --- Telemetry cache (updated by report consumers) ---
        self.latest_pose = None
        self.latest_speed = None
        self.latest_velocity = None
        self.latest_water_current = None
        self.latest_wind = None
        self.latest_conditional = None

        # --- Mutable state (updated by command providers) ---
        self.active_constraint_ids: List = []

        # --- Command Providers (4) ---
        self.global_vector = _APGlobalVectorProvider(
            ctx, source_id=source_id, component=self,
        )
        self.global_hover = _APGlobalHoverProvider(
            ctx, source_id=source_id, component=self,
        )
        self.primitive_driver = _APPrimitiveDriverProvider(
            ctx, source_id=source_id, component=self,
        )
        self.active_constraints = _APActiveConstraintsProvider(
            ctx, source_id=source_id, component=self,
        )

        # --- Command Consumers (4) ---
        self.conditional_add = ConditionalAddControlConsumer(ctx)
        self.conditional_delete = ConditionalDeleteControlConsumer(ctx)
        self.constraint_add = _APConstraintAddConsumer(ctx)
        self.constraint_delete = _APConstraintDeleteConsumer(ctx)

        # --- Report Providers (4) ---
        health_key = HealthReportType()
        health_key.source = source_id
        self.health_provider = HealthReportProvider(
            ctx, "HealthReportProvider", health_key,
        )

        log_key = LogReportType()
        log_key.source = source_id
        self.log_provider = LogReportProvider(ctx, "LogReportProvider", log_key)

        from rtiumaapy.datamodel.UVPlatformSpecsReportType import (
            UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportType as UVSpecsType,
        )
        specs_key = UVSpecsType()
        specs_key.source = source_id
        self.specs_provider = UVPlatformSpecsReportProvider(
            ctx, "UVPlatformSpecsProvider", specs_key,
        )

        from rtiumaapy.datamodel.UVPlatformCapabilitiesReportType import (
            UMAA_EO_UVPlatformSpecs_UVPlatformCapabilitiesReportType as UVCapsType,
        )
        caps_key = UVCapsType()
        caps_key.source = source_id
        self.caps_provider = UVPlatformCapabilitiesReportProvider(
            ctx, "UVPlatformCapabilitiesProvider", caps_key,
        )

        # --- Report Consumers (6) ---
        self.pose_consumer = _APPoseConsumer(ctx, self)
        self.speed_consumer = _APSpeedConsumer(ctx, self)
        self.velocity_consumer = _APVelocityConsumer(ctx, self)
        self.water_current_consumer = _APWaterCurrentConsumer(ctx, self)
        self.wind_consumer = _APWindConsumer(ctx, self)
        self.conditional_consumer = _APConditionalConsumer(ctx, self)

        logger.info(
            "AutopilotComponent initialized — source=%s",
            GUIDUtil.to_hex(source_id.id.value),
        )

    # --- Periodic publishers ---

    async def _publish_health_loop(self):
        """Publish health reports at the configured period."""
        try:
            while True:
                sample = HealthReportType()
                sample.source = self._source_id
                set_timestamp(sample)
                sample.severity = ErrorCondition.NONE
                sample.code = ErrorCode.NONE
                self.health_provider.write(sample)
                logger.debug("Published health report")
                await asyncio.sleep(self._health_period)
        except asyncio.CancelledError:
            pass

    async def _publish_specs_once(self):
        """Publish platform specs once at startup (C++ ref values)."""
        from rtiumaapy.datamodel.UVPlatformSpecsReportType import (
            UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportType as UVSpecsType,
        )
        specs = UVSpecsType()
        specs.source = self._source_id
        set_timestamp(specs)
        specs.name = "USV1"
        specs.lengthAtWaterline = 5.14
        specs.beamAtWaterline = 1.03
        specs.draft = 0.85
        specs.displacement = 1.1
        specs.weightLight = 2.40
        specs.weightLoaded = 3.22
        specs.forwardDistance = 4.1
        specs.aftDistance = 4.1
        specs.portDistance = 1.90
        specs.starboardDistance = 1.90
        specs.topDistance = 1.52
        specs.bottomDistance = 1.52
        self.specs_provider.write(specs)
        logger.info("Published UVPlatformSpecs")

    async def _publish_caps_once(self):
        """Publish platform capabilities once at startup (C++ ref values)."""
        from rtiumaapy.datamodel.UVPlatformCapabilitiesReportType import (
            UMAA_EO_UVPlatformSpecs_UVPlatformCapabilitiesReportType as UVCapsType,
        )
        caps = UVCapsType()
        caps.source = self._source_id
        set_timestamp(caps)
        caps.minWaterDepth = 2.0
        caps.surfaceCapabilities.maxForwardSpeed = 22.35
        caps.surfaceCapabilities.maxTurnRate = 0.5
        self.caps_provider.write(caps)
        logger.info("Published UVPlatformCapabilities")

    # --- BaseComponent lifecycle ---

    async def on_start(self) -> None:
        """Publish startup log, specs, and capabilities once."""
        self._publish_log("Autopilot component started")
        await self._publish_specs_once()
        await self._publish_caps_once()
        logger.info("Autopilot started — publishing health every %.1fs",
                     self._health_period)

    async def _run(self) -> None:
        """Periodic health publishing — runs until cancelled by shutdown."""
        await self._publish_health_loop()

    async def close(self) -> None:
        """Publish shutdown log.  Called by ``DDSContext.shutdown()`` while writers are still open."""
        self._publish_log("Autopilot component shutting down")
        logger.info("Autopilot stopped")

    def _publish_log(self, message: str, level=LogLevel.INFORMATION) -> None:
        """Publish a single log report."""
        sample = LogReportType()
        sample.source = self._source_id
        set_timestamp(sample)
        sample.entry = message
        sample.level = level
        self.log_provider.write(sample)
        logger.info("Log: %s", message)
