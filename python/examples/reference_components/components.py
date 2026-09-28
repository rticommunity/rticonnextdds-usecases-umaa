"""Discovery-only UMAA component definitions for the USV reference set.

These components create every DDS endpoint specified by UMAA Component
Definitions v1.0. They intentionally contain no application-level behavior:
they do not publish samples, process commands, or retain received data.
"""

from __future__ import annotations

import asyncio

from rtiumaapy.base_component import BaseComponent
from rtiumaapy.dds_context import DDSContext
from rtiumaapy.services.eo import UVPlatformSpecsReportConsumer
from rtiumaapy.services.mm import (
    ActiveConstraintsControlConsumer,
    ActiveConstraintsControlProvider,
    ConditionalAddControlProvider,
    ConditionalDeleteControlProvider,
    ConditionalReportConsumer,
    ConditionalReportProvider,
    MissionPlanConstraintAddControlProvider,
    MissionPlanConstraintDeleteControlProvider,
    MissionPlanExecutionControlProvider,
    MissionPlanExecutionReportProvider,
    MissionPlanMissionAddControlProvider,
    MissionPlanMissionClearControlProvider,
    MissionPlanMissionDeleteControlProvider,
    MissionPlanObjectiveAddControlProvider,
    MissionPlanObjectiveDeleteControlProvider,
    MissionPlanReportProvider,
    MissionPlanTaskAddControlProvider,
    MissionPlanTaskDeleteControlProvider,
    ObjectiveExecutionControlProvider,
    ObjectiveExecutionReportProvider,
    TaskPlanExecutionControlProvider,
    TaskPlanExecutionReportProvider,
)
from rtiumaapy.services.mo import (
    ContactManeuverInfluenceReportProvider,
    GlobalHoverControlConsumer,
    GlobalHoverControlProvider,
    GlobalVectorControlConsumer,
    GlobalVectorControlProvider,
    GlobalWaypointControlConsumer,
    GlobalWaypointControlProvider,
)
from rtiumaapy.services.sa import (
    ContactCOLREGSClassificationReportConsumer,
    ContactReportConsumer,
    ContactVisualClassificationReportConsumer,
    GlobalPoseReportConsumer,
    GlobalPoseReportProvider,
    SpeedReportConsumer,
    SpeedReportProvider,
    VelocityReportConsumer,
    VelocityReportProvider,
    WaterCurrentReportConsumer,
    WaterCurrentReportProvider,
    WindReportConsumer,
    WindReportProvider,
)
from rtiumaapy.services.so import HealthReportProvider, LogReportConsumer, LogReportProvider


class DiscoveryComponent(BaseComponent):
    """Base component that keeps declared DDS services alive for discovery."""

    def __init__(self, ctx: DDSContext, component_name: str) -> None:
        super().__init__(ctx, component_name)

    async def _run(self) -> None:
        await asyncio.Future()

    async def close(self) -> None:
        pass


class ColregsHazardAvoidanceComponent(DiscoveryComponent):
    """COLREGS and Hazard Avoidance endpoints from §3.2."""

    def __init__(self, ctx: DDSContext, source_id) -> None:
        super().__init__(ctx, "ColregsHazardAvoidance")

        self.global_waypoint = GlobalWaypointControlProvider(ctx, source_id=source_id)
        self.global_vector_provider = GlobalVectorControlProvider(ctx, source_id=source_id)
        self.global_hover_provider = GlobalHoverControlProvider(ctx, source_id=source_id)
        self.contact_maneuver_influence = ContactManeuverInfluenceReportProvider(ctx)
        self.active_constraints = ActiveConstraintsControlProvider(ctx, source_id=source_id)
        self.log = LogReportProvider(ctx)
        self.health = HealthReportProvider(ctx)

        self.contact = ContactReportConsumer(ctx)
        self.global_pose = GlobalPoseReportConsumer(ctx)
        self.colregs_classification = ContactCOLREGSClassificationReportConsumer(ctx)
        self.visual_classification = ContactVisualClassificationReportConsumer(ctx)
        self.global_vector_consumer = GlobalVectorControlConsumer(ctx)
        self.global_hover_consumer = GlobalHoverControlConsumer(ctx)
        self.platform_specs = UVPlatformSpecsReportConsumer(ctx)
        self.speed = SpeedReportConsumer(ctx)
        self.velocity = VelocityReportConsumer(ctx)
        self.conditionals = ConditionalReportConsumer(ctx)


class LoggingComponent(DiscoveryComponent):
    """Logging endpoints from §3.3."""

    def __init__(self, ctx: DDSContext, source_id) -> None:
        super().__init__(ctx, "Logging")
        self.log = LogReportConsumer(ctx)


class MissionExecutorComponent(DiscoveryComponent):
    """Mission Executor endpoints from §3.4."""

    def __init__(self, ctx: DDSContext, source_id) -> None:
        super().__init__(ctx, "MissionExecutor")

        self.conditional_add = ConditionalAddControlProvider(ctx, source_id=source_id)
        self.conditional_delete = ConditionalDeleteControlProvider(ctx, source_id=source_id)
        self.constraint_add = MissionPlanConstraintAddControlProvider(ctx, source_id=source_id)
        self.constraint_delete = MissionPlanConstraintDeleteControlProvider(ctx, source_id=source_id)
        self.mission_add = MissionPlanMissionAddControlProvider(ctx, source_id=source_id)
        self.mission_clear = MissionPlanMissionClearControlProvider(ctx, source_id=source_id)
        self.mission_delete = MissionPlanMissionDeleteControlProvider(ctx, source_id=source_id)
        self.task_add = MissionPlanTaskAddControlProvider(ctx, source_id=source_id)
        self.task_delete = MissionPlanTaskDeleteControlProvider(ctx, source_id=source_id)
        self.objective_add = MissionPlanObjectiveAddControlProvider(ctx, source_id=source_id)
        self.objective_delete = MissionPlanObjectiveDeleteControlProvider(ctx, source_id=source_id)
        self.mission_execution = MissionPlanExecutionReportProvider(ctx)
        self.task_execution = TaskPlanExecutionReportProvider(ctx)
        self.mission_execution_control = MissionPlanExecutionControlProvider(ctx, source_id=source_id)
        self.task_execution_control = TaskPlanExecutionControlProvider(ctx, source_id=source_id)
        self.log = LogReportProvider(ctx)
        self.conditionals = ConditionalReportProvider(ctx)
        self.health = HealthReportProvider(ctx)
        self.objective_execution = ObjectiveExecutionReportProvider(ctx)
        self.mission_plan = MissionPlanReportProvider(ctx)
        self.objective_execution_control = ObjectiveExecutionControlProvider(ctx, source_id=source_id)

        self.active_constraints = ActiveConstraintsControlConsumer(ctx)
        self.global_pose = GlobalPoseReportConsumer(ctx)
        self.speed = SpeedReportConsumer(ctx)
        self.global_vector = GlobalVectorControlConsumer(ctx)
        self.global_waypoint = GlobalWaypointControlConsumer(ctx)
        self.global_hover = GlobalHoverControlConsumer(ctx)
        self.velocity = VelocityReportConsumer(ctx)
        self.contact = ContactReportConsumer(ctx)
        self.platform_specs = UVPlatformSpecsReportConsumer(ctx)
        self.colregs_classification = ContactCOLREGSClassificationReportConsumer(ctx)
        self.visual_classification = ContactVisualClassificationReportConsumer(ctx)
        self.water_current = WaterCurrentReportConsumer(ctx)
        self.wind = WindReportConsumer(ctx)


class USVNavigationComponent(DiscoveryComponent):
    """USV Navigation endpoints from §3.5."""

    def __init__(self, ctx: DDSContext, source_id) -> None:
        super().__init__(ctx, "USVNavigation")
        self.global_pose = GlobalPoseReportProvider(ctx)
        self.velocity = VelocityReportProvider(ctx)
        self.speed = SpeedReportProvider(ctx)
        self.log = LogReportProvider(ctx)
        self.health = HealthReportProvider(ctx)


class WaterEnvironmentComponent(DiscoveryComponent):
    """Water Environment endpoints from §3.8."""

    def __init__(self, ctx: DDSContext, source_id) -> None:
        super().__init__(ctx, "WaterEnvironment")
        self.water_current = WaterCurrentReportProvider(ctx)
        self.log = LogReportProvider(ctx)
        self.health = HealthReportProvider(ctx)


class WeatherComponent(DiscoveryComponent):
    """Weather endpoints from §3.9."""

    def __init__(self, ctx: DDSContext, source_id) -> None:
        super().__init__(ctx, "Weather")
        self.wind = WindReportProvider(ctx)
        self.log = LogReportProvider(ctx)
        self.health = HealthReportProvider(ctx)