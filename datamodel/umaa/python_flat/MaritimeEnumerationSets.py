
# WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

# This file was generated from MaritimeEnumerationSets.idl
# using RTI Code Generator (rtiddsgen) version 4.3.0.
# The rtiddsgen tool is part of the RTI Connext DDS distribution.
# For more information, type 'rtiddsgen -help' at a command shell
# or consult the Code Generator User's Manual.

from dataclasses import field
from typing import Union, Sequence, Optional
import rti.idl as idl
from enum import IntEnum
import sys
import os


UMAA = idl.get_module("UMAA")

UMAA_Common = idl.get_module("UMAA_Common")

UMAA.Common = UMAA_Common

UMAA_Common_MaritimeEnumeration = idl.get_module("UMAA_Common_MaritimeEnumeration")

UMAA.Common.MaritimeEnumeration = UMAA_Common_MaritimeEnumeration

UMAA_Common_MaritimeEnumeration_ActivationStateEnumModule = idl.get_module("UMAA_Common_MaritimeEnumeration_ActivationStateEnumModule")

UMAA.Common.MaritimeEnumeration.ActivationStateEnumModule = UMAA_Common_MaritimeEnumeration_ActivationStateEnumModule

@idl.enum
class UMAA_Common_MaritimeEnumeration_ActivationStateEnumModule_ActivationStateEnumType(IntEnum):
    ACTIVE = 0
    ERROR = 1
    OFF = 2
    READY = 3
    STANDBY = 4

UMAA.Common.MaritimeEnumeration.ActivationStateEnumModule.ActivationStateEnumType = UMAA_Common_MaritimeEnumeration_ActivationStateEnumModule_ActivationStateEnumType

UMAA_Common_MaritimeEnumeration_ActivationStateTargetEnumModule = idl.get_module("UMAA_Common_MaritimeEnumeration_ActivationStateTargetEnumModule")

UMAA.Common.MaritimeEnumeration.ActivationStateTargetEnumModule = UMAA_Common_MaritimeEnumeration_ActivationStateTargetEnumModule

@idl.enum
class UMAA_Common_MaritimeEnumeration_ActivationStateTargetEnumModule_ActivationStateTargetEnumType(IntEnum):
    ACTIVE = 0
    OFF = 1
    READY = 2
    STANDBY = 3

UMAA.Common.MaritimeEnumeration.ActivationStateTargetEnumModule.ActivationStateTargetEnumType = UMAA_Common_MaritimeEnumeration_ActivationStateTargetEnumModule_ActivationStateTargetEnumType

UMAA_Common_MaritimeEnumeration_AnchorActionEnumModule = idl.get_module("UMAA_Common_MaritimeEnumeration_AnchorActionEnumModule")

UMAA.Common.MaritimeEnumeration.AnchorActionEnumModule = UMAA_Common_MaritimeEnumeration_AnchorActionEnumModule

@idl.enum
class UMAA_Common_MaritimeEnumeration_AnchorActionEnumModule_AnchorActionEnumType(IntEnum):
    LOWER = 0
    RAISE = 1
    STOP = 2

UMAA.Common.MaritimeEnumeration.AnchorActionEnumModule.AnchorActionEnumType = UMAA_Common_MaritimeEnumeration_AnchorActionEnumModule_AnchorActionEnumType

UMAA_Common_MaritimeEnumeration_AnchorKindEnumModule = idl.get_module("UMAA_Common_MaritimeEnumeration_AnchorKindEnumModule")

UMAA.Common.MaritimeEnumeration.AnchorKindEnumModule = UMAA_Common_MaritimeEnumeration_AnchorKindEnumModule

@idl.enum
class UMAA_Common_MaritimeEnumeration_AnchorKindEnumModule_AnchorKindEnumType(IntEnum):
    COMMERCIAL_STOCKLESS = 0
    DANFORTH = 1
    FOUR_FLUKE = 2
    GENERAL = 3
    LIGHTWEIGHT = 4
    MARK_2_LWT = 5
    MARK_2_STOCKLESS = 6
    MUSHROOM = 7
    NAVY_TYPE_STOCK = 8
    NONMAGNETIC = 9
    STANDARD_NAVY_STOCKLESS = 10
    TWO_FLUKE_BALANCED_FLUKE = 11
    WEDGE_BLOCK_LWT = 12

UMAA.Common.MaritimeEnumeration.AnchorKindEnumModule.AnchorKindEnumType = UMAA_Common_MaritimeEnumeration_AnchorKindEnumModule_AnchorKindEnumType

UMAA_Common_MaritimeEnumeration_AnchorLocationEnumModule = idl.get_module("UMAA_Common_MaritimeEnumeration_AnchorLocationEnumModule")

UMAA.Common.MaritimeEnumeration.AnchorLocationEnumModule = UMAA_Common_MaritimeEnumeration_AnchorLocationEnumModule

@idl.enum
class UMAA_Common_MaritimeEnumeration_AnchorLocationEnumModule_AnchorLocationEnumType(IntEnum):
    BOWER = 0
    KEEL = 1
    STERN = 2

UMAA.Common.MaritimeEnumeration.AnchorLocationEnumModule.AnchorLocationEnumType = UMAA_Common_MaritimeEnumeration_AnchorLocationEnumModule_AnchorLocationEnumType

UMAA_Common_MaritimeEnumeration_AnchorRodeEnumModule = idl.get_module("UMAA_Common_MaritimeEnumeration_AnchorRodeEnumModule")

UMAA.Common.MaritimeEnumeration.AnchorRodeEnumModule = UMAA_Common_MaritimeEnumeration_AnchorRodeEnumModule

@idl.enum
class UMAA_Common_MaritimeEnumeration_AnchorRodeEnumModule_AnchorRodeEnumType(IntEnum):
    CHAIN = 0
    ROPE = 1

UMAA.Common.MaritimeEnumeration.AnchorRodeEnumModule.AnchorRodeEnumType = UMAA_Common_MaritimeEnumeration_AnchorRodeEnumModule_AnchorRodeEnumType

UMAA_Common_MaritimeEnumeration_AnchorStateEnumModule = idl.get_module("UMAA_Common_MaritimeEnumeration_AnchorStateEnumModule")

UMAA.Common.MaritimeEnumeration.AnchorStateEnumModule = UMAA_Common_MaritimeEnumeration_AnchorStateEnumModule

@idl.enum
class UMAA_Common_MaritimeEnumeration_AnchorStateEnumModule_AnchorStateEnumType(IntEnum):
    DEPLOYED = 0
    LOWERING = 1
    RAISING = 2
    STOPPED = 3
    STOWED = 4

UMAA.Common.MaritimeEnumeration.AnchorStateEnumModule.AnchorStateEnumType = UMAA_Common_MaritimeEnumeration_AnchorStateEnumModule_AnchorStateEnumType

UMAA_Common_MaritimeEnumeration_AutoOffModeEnumModule = idl.get_module("UMAA_Common_MaritimeEnumeration_AutoOffModeEnumModule")

UMAA.Common.MaritimeEnumeration.AutoOffModeEnumModule = UMAA_Common_MaritimeEnumeration_AutoOffModeEnumModule

@idl.enum
class UMAA_Common_MaritimeEnumeration_AutoOffModeEnumModule_AutoOffModeEnumType(IntEnum):
    DEACTIVATE = 0
    SHUTDOWN = 1

UMAA.Common.MaritimeEnumeration.AutoOffModeEnumModule.AutoOffModeEnumType = UMAA_Common_MaritimeEnumeration_AutoOffModeEnumModule_AutoOffModeEnumType

UMAA_Common_MaritimeEnumeration_BilgeStateEnumModule = idl.get_module("UMAA_Common_MaritimeEnumeration_BilgeStateEnumModule")

UMAA.Common.MaritimeEnumeration.BilgeStateEnumModule = UMAA_Common_MaritimeEnumeration_BilgeStateEnumModule

@idl.enum
class UMAA_Common_MaritimeEnumeration_BilgeStateEnumModule_BilgeStateEnumType(IntEnum):
    FAULT = 0
    OFF = 1
    ON = 2

UMAA.Common.MaritimeEnumeration.BilgeStateEnumModule.BilgeStateEnumType = UMAA_Common_MaritimeEnumeration_BilgeStateEnumModule_BilgeStateEnumType

UMAA_Common_MaritimeEnumeration_BufferPurgeOptionEnumModule = idl.get_module("UMAA_Common_MaritimeEnumeration_BufferPurgeOptionEnumModule")

UMAA.Common.MaritimeEnumeration.BufferPurgeOptionEnumModule = UMAA_Common_MaritimeEnumeration_BufferPurgeOptionEnumModule

@idl.enum
class UMAA_Common_MaritimeEnumeration_BufferPurgeOptionEnumModule_BufferPurgeOptionEnumType(IntEnum):
    DROP_LOWEST_PRIORITY = 0
    DROP_MOST_RECENT = 1
    DROP_OLDEST = 2

UMAA.Common.MaritimeEnumeration.BufferPurgeOptionEnumModule.BufferPurgeOptionEnumType = UMAA_Common_MaritimeEnumeration_BufferPurgeOptionEnumModule_BufferPurgeOptionEnumType

UMAA_Common_MaritimeEnumeration_COLREGSClassificationEnumModule = idl.get_module("UMAA_Common_MaritimeEnumeration_COLREGSClassificationEnumModule")

UMAA.Common.MaritimeEnumeration.COLREGSClassificationEnumModule = UMAA_Common_MaritimeEnumeration_COLREGSClassificationEnumModule

@idl.enum
class UMAA_Common_MaritimeEnumeration_COLREGSClassificationEnumModule_COLREGSClassificationEnumType(IntEnum):
    ANCHORED = 0
    CONSTRAINED_BY_DRAUGHT = 1
    FISHING = 2
    NON_VESSEL = 3
    NOT_UNDER_COMMAND = 4
    POWER_DRIVEN_UNDERWAY = 5
    PUSHING = 6
    RESTRICTED_IN_ABILITY_TO_MANUEVER = 7
    SAILING = 8
    TOWING = 9

UMAA.Common.MaritimeEnumeration.COLREGSClassificationEnumModule.COLREGSClassificationEnumType = UMAA_Common_MaritimeEnumeration_COLREGSClassificationEnumModule_COLREGSClassificationEnumType

UMAA_Common_MaritimeEnumeration_CommandStatusReasonEnumModule = idl.get_module("UMAA_Common_MaritimeEnumeration_CommandStatusReasonEnumModule")

UMAA.Common.MaritimeEnumeration.CommandStatusReasonEnumModule = UMAA_Common_MaritimeEnumeration_CommandStatusReasonEnumModule

@idl.enum
class UMAA_Common_MaritimeEnumeration_CommandStatusReasonEnumModule_CommandStatusReasonEnumType(IntEnum):
    CANCELED = 0
    INTERRUPTED = 1
    OBJECTIVE_FAILED = 2
    RESOURCE_FAILED = 3
    RESOURCE_REJECTED = 4
    SERVICE_FAILED = 5
    SUCCEEDED = 6
    TIMEOUT = 7
    UPDATED = 8
    VALIDATION_FAILED = 9

UMAA.Common.MaritimeEnumeration.CommandStatusReasonEnumModule.CommandStatusReasonEnumType = UMAA_Common_MaritimeEnumeration_CommandStatusReasonEnumModule_CommandStatusReasonEnumType

UMAA_Common_MaritimeEnumeration_CommsChannelOperationalStatusEnumModule = idl.get_module("UMAA_Common_MaritimeEnumeration_CommsChannelOperationalStatusEnumModule")

UMAA.Common.MaritimeEnumeration.CommsChannelOperationalStatusEnumModule = UMAA_Common_MaritimeEnumeration_CommsChannelOperationalStatusEnumModule

@idl.enum
class UMAA_Common_MaritimeEnumeration_CommsChannelOperationalStatusEnumModule_CommsChannelOperationalStatusEnumType(IntEnum):
    OFF = 0
    ON = 1
    OPERATIONAL = 2

UMAA.Common.MaritimeEnumeration.CommsChannelOperationalStatusEnumModule.CommsChannelOperationalStatusEnumType = UMAA_Common_MaritimeEnumeration_CommsChannelOperationalStatusEnumModule_CommsChannelOperationalStatusEnumType

UMAA_Common_MaritimeEnumeration_ConditionalOperatorEnumModule = idl.get_module("UMAA_Common_MaritimeEnumeration_ConditionalOperatorEnumModule")

UMAA.Common.MaritimeEnumeration.ConditionalOperatorEnumModule = UMAA_Common_MaritimeEnumeration_ConditionalOperatorEnumModule

@idl.enum
class UMAA_Common_MaritimeEnumeration_ConditionalOperatorEnumModule_ConditionalOperatorEnumType(IntEnum):
    GREATER_THAN = 0
    GREATER_THAN_OR_EQUAL_TO = 1
    LESS_THAN = 2
    LESS_THAN_OR_EQUAL_TO = 3

UMAA.Common.MaritimeEnumeration.ConditionalOperatorEnumModule.ConditionalOperatorEnumType = UMAA_Common_MaritimeEnumeration_ConditionalOperatorEnumModule_ConditionalOperatorEnumType

UMAA_Common_MaritimeEnumeration_ContactManeuverInfluenceEnumModule = idl.get_module("UMAA_Common_MaritimeEnumeration_ContactManeuverInfluenceEnumModule")

UMAA.Common.MaritimeEnumeration.ContactManeuverInfluenceEnumModule = UMAA_Common_MaritimeEnumeration_ContactManeuverInfluenceEnumModule

@idl.enum
class UMAA_Common_MaritimeEnumeration_ContactManeuverInfluenceEnumModule_ContactManeuverInfluenceEnumType(IntEnum):
    COLLISION = 0
    COLLISION_AVOIDANCE = 1
    CROSSING_LEFT_COMPLIANT = 2
    CROSSING_LEFT_NONCOMPLIANT = 3
    CROSSING_RIGHT_COMPLIANT = 4
    CROSSING_RIGHT_NONCOMPLIANT = 5
    DYNAMIC_AVOIDANCE = 6
    GUIDE = 7
    HEAD_ON_COMPLIANT = 8
    HEAD_ON_NONCOMPLIANT = 9
    NONE = 10
    OVERTAKEN_COMPLIANT = 11
    OVERTAKEN_NONCOMPLIANT = 12
    OVERTAKING_COMPLIANT = 13
    OVERTAKING_NONCOMPLIANT = 14
    PREEMPTIVE = 15
    STATIC_AVOIDANCE = 16

UMAA.Common.MaritimeEnumeration.ContactManeuverInfluenceEnumModule.ContactManeuverInfluenceEnumType = UMAA_Common_MaritimeEnumeration_ContactManeuverInfluenceEnumModule_ContactManeuverInfluenceEnumType

UMAA_Common_MaritimeEnumeration_ContingencyBehaviorEnumModule = idl.get_module("UMAA_Common_MaritimeEnumeration_ContingencyBehaviorEnumModule")

UMAA.Common.MaritimeEnumeration.ContingencyBehaviorEnumModule = UMAA_Common_MaritimeEnumeration_ContingencyBehaviorEnumModule

@idl.enum
class UMAA_Common_MaritimeEnumeration_ContingencyBehaviorEnumModule_ContingencyBehaviorEnumType(IntEnum):
    CONTINUE = 0
    FINISH = 1
    _HOME = 2
    LOITER = 3
    NONE = 4
    VEHICLE_SPECIFIC = 5

UMAA.Common.MaritimeEnumeration.ContingencyBehaviorEnumModule.ContingencyBehaviorEnumType = UMAA_Common_MaritimeEnumeration_ContingencyBehaviorEnumModule_ContingencyBehaviorEnumType

UMAA_Common_MaritimeEnumeration_ContinuousTestEnumModule = idl.get_module("UMAA_Common_MaritimeEnumeration_ContinuousTestEnumModule")

UMAA.Common.MaritimeEnumeration.ContinuousTestEnumModule = UMAA_Common_MaritimeEnumeration_ContinuousTestEnumModule

@idl.enum
class UMAA_Common_MaritimeEnumeration_ContinuousTestEnumModule_ContinuousTestEnumType(IntEnum):
    DISABLED_NO_TEST = 0
    FULL_TEST = 1
    NON_INTRUSIVE_TESTS_ONLY = 2

UMAA.Common.MaritimeEnumeration.ContinuousTestEnumModule.ContinuousTestEnumType = UMAA_Common_MaritimeEnumeration_ContinuousTestEnumModule_ContinuousTestEnumType

UMAA_Common_MaritimeEnumeration_CoordinationSituationalSignalEnumModule = idl.get_module("UMAA_Common_MaritimeEnumeration_CoordinationSituationalSignalEnumModule")

UMAA.Common.MaritimeEnumeration.CoordinationSituationalSignalEnumModule = UMAA_Common_MaritimeEnumeration_CoordinationSituationalSignalEnumModule

@idl.enum
class UMAA_Common_MaritimeEnumeration_CoordinationSituationalSignalEnumModule_CoordinationSituationalSignalEnumType(IntEnum):
    AGREE_TO_BE_OVERTAKEN = 0
    ALTERING_COURSE_TO_PORT = 1
    ALTERING_COURSE_TO_STARBOARD = 2
    BLIND_BEND_SIGNAL = 3
    DANGER_SIGNAL = 4
    IN_DISTRESS_NEED_ASSISTANCE = 5
    NONE = 6
    OPERATING_ASTERN_PROPULSION = 7
    TO_OVERTAKE_LEAVE_VESSEL_TO_PORT = 8
    TO_OVERTAKE_LEAVE_VESSEL_TO_STARBOARD = 9
    VESSEL_LEAVING_DOCK = 10
    VISIBILITY_RESTRICTED_VEHICLE_STOPPED = 11
    VISIBILITY_RESTRICTED_VEHICLE_UNDERWAY = 12

UMAA.Common.MaritimeEnumeration.CoordinationSituationalSignalEnumModule.CoordinationSituationalSignalEnumType = UMAA_Common_MaritimeEnumeration_CoordinationSituationalSignalEnumModule_CoordinationSituationalSignalEnumType

UMAA_Common_MaritimeEnumeration_DirectionModeEnumModule = idl.get_module("UMAA_Common_MaritimeEnumeration_DirectionModeEnumModule")

UMAA.Common.MaritimeEnumeration.DirectionModeEnumModule = UMAA_Common_MaritimeEnumeration_DirectionModeEnumModule

@idl.enum
class UMAA_Common_MaritimeEnumeration_DirectionModeEnumModule_DirectionModeEnumType(IntEnum):
    COURSE = 0
    HEADING = 1

UMAA.Common.MaritimeEnumeration.DirectionModeEnumModule.DirectionModeEnumType = UMAA_Common_MaritimeEnumeration_DirectionModeEnumModule_DirectionModeEnumType

UMAA_Common_MaritimeEnumeration_DomainEnumModule = idl.get_module("UMAA_Common_MaritimeEnumeration_DomainEnumModule")

UMAA.Common.MaritimeEnumeration.DomainEnumModule = UMAA_Common_MaritimeEnumeration_DomainEnumModule

@idl.enum
class UMAA_Common_MaritimeEnumeration_DomainEnumModule_DomainEnumType(IntEnum):
    AIR = 0
    GROUND = 1
    SURFACE = 2
    UNDERSEA = 3

UMAA.Common.MaritimeEnumeration.DomainEnumModule.DomainEnumType = UMAA_Common_MaritimeEnumeration_DomainEnumModule_DomainEnumType

UMAA_Common_MaritimeEnumeration_EmitterStateEnumModule = idl.get_module("UMAA_Common_MaritimeEnumeration_EmitterStateEnumModule")

UMAA.Common.MaritimeEnumeration.EmitterStateEnumModule = UMAA_Common_MaritimeEnumeration_EmitterStateEnumModule

@idl.enum
class UMAA_Common_MaritimeEnumeration_EmitterStateEnumModule_EmitterStateEnumType(IntEnum):
    ALLOWED = 0
    SECURED = 1

UMAA.Common.MaritimeEnumeration.EmitterStateEnumModule.EmitterStateEnumType = UMAA_Common_MaritimeEnumeration_EmitterStateEnumModule_EmitterStateEnumType

UMAA_Common_MaritimeEnumeration_EngineKindEnumModule = idl.get_module("UMAA_Common_MaritimeEnumeration_EngineKindEnumModule")

UMAA.Common.MaritimeEnumeration.EngineKindEnumModule = UMAA_Common_MaritimeEnumeration_EngineKindEnumModule

@idl.enum
class UMAA_Common_MaritimeEnumeration_EngineKindEnumModule_EngineKindEnumType(IntEnum):
    DIESEL = 0
    GAS = 1

UMAA.Common.MaritimeEnumeration.EngineKindEnumModule.EngineKindEnumType = UMAA_Common_MaritimeEnumeration_EngineKindEnumModule_EngineKindEnumType

UMAA_Common_MaritimeEnumeration_ErrorCodeEnumModule = idl.get_module("UMAA_Common_MaritimeEnumeration_ErrorCodeEnumModule")

UMAA.Common.MaritimeEnumeration.ErrorCodeEnumModule = UMAA_Common_MaritimeEnumeration_ErrorCodeEnumModule

@idl.enum
class UMAA_Common_MaritimeEnumeration_ErrorCodeEnumModule_ErrorCodeEnumType(IntEnum):
    ACTUATOR = 0
    FILESYS = 1
    NONE = 2
    POWER = 3
    PROCESSOR = 4
    RAM = 5
    ROM = 6
    SENSOR = 7
    SOFTWARE = 8

UMAA.Common.MaritimeEnumeration.ErrorCodeEnumModule.ErrorCodeEnumType = UMAA_Common_MaritimeEnumeration_ErrorCodeEnumModule_ErrorCodeEnumType

UMAA_Common_MaritimeEnumeration_ErrorConditionEnumModule = idl.get_module("UMAA_Common_MaritimeEnumeration_ErrorConditionEnumModule")

UMAA.Common.MaritimeEnumeration.ErrorConditionEnumModule = UMAA_Common_MaritimeEnumeration_ErrorConditionEnumModule

@idl.enum
class UMAA_Common_MaritimeEnumeration_ErrorConditionEnumModule_ErrorConditionEnumType(IntEnum):
    ERROR = 0
    FAIL = 1
    INFO = 2
    NONE = 3
    WARN = 4

UMAA.Common.MaritimeEnumeration.ErrorConditionEnumModule.ErrorConditionEnumType = UMAA_Common_MaritimeEnumeration_ErrorConditionEnumModule_ErrorConditionEnumType

UMAA_Common_MaritimeEnumeration_FLSBeamwidthEnumModule = idl.get_module("UMAA_Common_MaritimeEnumeration_FLSBeamwidthEnumModule")

UMAA.Common.MaritimeEnumeration.FLSBeamwidthEnumModule = UMAA_Common_MaritimeEnumeration_FLSBeamwidthEnumModule

@idl.enum
class UMAA_Common_MaritimeEnumeration_FLSBeamwidthEnumModule_FLSBeamwidthEnumType(IntEnum):
    MEDIUM = 0
    NARROW = 1
    WIDE = 2

UMAA.Common.MaritimeEnumeration.FLSBeamwidthEnumModule.FLSBeamwidthEnumType = UMAA_Common_MaritimeEnumeration_FLSBeamwidthEnumModule_FLSBeamwidthEnumType

UMAA_Common_MaritimeEnumeration_FLSConfigModeEnumModule = idl.get_module("UMAA_Common_MaritimeEnumeration_FLSConfigModeEnumModule")

UMAA.Common.MaritimeEnumeration.FLSConfigModeEnumModule = UMAA_Common_MaritimeEnumeration_FLSConfigModeEnumModule

@idl.enum
class UMAA_Common_MaritimeEnumeration_FLSConfigModeEnumModule_FLSConfigModeEnumType(IntEnum):
    DEV_TEST = 0
    DIVE = 1
    PASSIVE_ONLY = 2
    SEARCH_BOTTOM = 3
    SEARCH_VOLUME = 4
    SURFACE = 5
    TEST = 6
    TRANSIT = 7

UMAA.Common.MaritimeEnumeration.FLSConfigModeEnumModule.FLSConfigModeEnumType = UMAA_Common_MaritimeEnumeration_FLSConfigModeEnumModule_FLSConfigModeEnumType

UMAA_Common_MaritimeEnumeration_FLSWaveformLengthEnumModule = idl.get_module("UMAA_Common_MaritimeEnumeration_FLSWaveformLengthEnumModule")

UMAA.Common.MaritimeEnumeration.FLSWaveformLengthEnumModule = UMAA_Common_MaritimeEnumeration_FLSWaveformLengthEnumModule

@idl.enum
class UMAA_Common_MaritimeEnumeration_FLSWaveformLengthEnumModule_FLSWaveformLengthEnumType(IntEnum):
    _LONG = 0
    MEDIUM = 1
    _SHORT = 2
    XSHORT = 3

UMAA.Common.MaritimeEnumeration.FLSWaveformLengthEnumModule.FLSWaveformLengthEnumType = UMAA_Common_MaritimeEnumeration_FLSWaveformLengthEnumModule_FLSWaveformLengthEnumType

UMAA_Common_MaritimeEnumeration_GPSConstellationEnumModule = idl.get_module("UMAA_Common_MaritimeEnumeration_GPSConstellationEnumModule")

UMAA.Common.MaritimeEnumeration.GPSConstellationEnumModule = UMAA_Common_MaritimeEnumeration_GPSConstellationEnumModule

@idl.enum
class UMAA_Common_MaritimeEnumeration_GPSConstellationEnumModule_GPSConstellationEnumType(IntEnum):
    BEIDOU = 0
    GALILEO = 1
    GLONASS = 2
    GPS = 3
    IRNSS = 4
    QZSS = 5
    SBAS = 6
    UNKNOWN = 7

UMAA.Common.MaritimeEnumeration.GPSConstellationEnumModule.GPSConstellationEnumType = UMAA_Common_MaritimeEnumeration_GPSConstellationEnumModule_GPSConstellationEnumType

UMAA_Common_MaritimeEnumeration_HandoverResultEnumModule = idl.get_module("UMAA_Common_MaritimeEnumeration_HandoverResultEnumModule")

UMAA.Common.MaritimeEnumeration.HandoverResultEnumModule = UMAA_Common_MaritimeEnumeration_HandoverResultEnumModule

@idl.enum
class UMAA_Common_MaritimeEnumeration_HandoverResultEnumModule_HandoverResultEnumType(IntEnum):
    DEFERRED = 0
    DENIED = 1
    GRANTED = 2
    INSUFFICIENT_AUTHORITY = 3
    NOT_AVAILABLE = 4
    TIMEOUT = 5

UMAA.Common.MaritimeEnumeration.HandoverResultEnumModule.HandoverResultEnumType = UMAA_Common_MaritimeEnumeration_HandoverResultEnumModule_HandoverResultEnumType

UMAA_Common_MaritimeEnumeration_HeadingSectorKindEnumModule = idl.get_module("UMAA_Common_MaritimeEnumeration_HeadingSectorKindEnumModule")

UMAA.Common.MaritimeEnumeration.HeadingSectorKindEnumModule = UMAA_Common_MaritimeEnumeration_HeadingSectorKindEnumModule

@idl.enum
class UMAA_Common_MaritimeEnumeration_HeadingSectorKindEnumModule_HeadingSectorKindEnumType(IntEnum):
    INSIDE = 0
    OUTSIDE = 1

UMAA.Common.MaritimeEnumeration.HeadingSectorKindEnumModule.HeadingSectorKindEnumType = UMAA_Common_MaritimeEnumeration_HeadingSectorKindEnumModule_HeadingSectorKindEnumType

UMAA_Common_MaritimeEnumeration_HoverKindEnumModule = idl.get_module("UMAA_Common_MaritimeEnumeration_HoverKindEnumModule")

UMAA.Common.MaritimeEnumeration.HoverKindEnumModule = UMAA_Common_MaritimeEnumeration_HoverKindEnumModule

@idl.enum
class UMAA_Common_MaritimeEnumeration_HoverKindEnumModule_HoverKindEnumType(IntEnum):
    LAT_LON_PRIORITY = 0
    Z_PRIORITY = 1

UMAA.Common.MaritimeEnumeration.HoverKindEnumModule.HoverKindEnumType = UMAA_Common_MaritimeEnumeration_HoverKindEnumModule_HoverKindEnumType

UMAA_Common_MaritimeEnumeration_IgnitionControlEnumModule = idl.get_module("UMAA_Common_MaritimeEnumeration_IgnitionControlEnumModule")

UMAA.Common.MaritimeEnumeration.IgnitionControlEnumModule = UMAA_Common_MaritimeEnumeration_IgnitionControlEnumModule

@idl.enum
class UMAA_Common_MaritimeEnumeration_IgnitionControlEnumModule_IgnitionControlEnumType(IntEnum):
    OFF = 0
    RUN = 1

UMAA.Common.MaritimeEnumeration.IgnitionControlEnumModule.IgnitionControlEnumType = UMAA_Common_MaritimeEnumeration_IgnitionControlEnumModule_IgnitionControlEnumType

UMAA_Common_MaritimeEnumeration_IgnitionStateEnumModule = idl.get_module("UMAA_Common_MaritimeEnumeration_IgnitionStateEnumModule")

UMAA.Common.MaritimeEnumeration.IgnitionStateEnumModule = UMAA_Common_MaritimeEnumeration_IgnitionStateEnumModule

@idl.enum
class UMAA_Common_MaritimeEnumeration_IgnitionStateEnumModule_IgnitionStateEnumType(IntEnum):
    OFF = 0
    RUN = 1
    START = 2

UMAA.Common.MaritimeEnumeration.IgnitionStateEnumModule.IgnitionStateEnumType = UMAA_Common_MaritimeEnumeration_IgnitionStateEnumModule_IgnitionStateEnumType

UMAA_Common_MaritimeEnumeration_IlluminatorStateEnumModule = idl.get_module("UMAA_Common_MaritimeEnumeration_IlluminatorStateEnumModule")

UMAA.Common.MaritimeEnumeration.IlluminatorStateEnumModule = UMAA_Common_MaritimeEnumeration_IlluminatorStateEnumModule

@idl.enum
class UMAA_Common_MaritimeEnumeration_IlluminatorStateEnumModule_IlluminatorStateEnumType(IntEnum):
    FLASHING = 0
    OFF = 1
    ON = 2

UMAA.Common.MaritimeEnumeration.IlluminatorStateEnumModule.IlluminatorStateEnumType = UMAA_Common_MaritimeEnumeration_IlluminatorStateEnumModule_IlluminatorStateEnumType

UMAA_Common_MaritimeEnumeration_ImageFormatEnumModule = idl.get_module("UMAA_Common_MaritimeEnumeration_ImageFormatEnumModule")

UMAA.Common.MaritimeEnumeration.ImageFormatEnumModule = UMAA_Common_MaritimeEnumeration_ImageFormatEnumModule

@idl.enum
class UMAA_Common_MaritimeEnumeration_ImageFormatEnumModule_ImageFormatEnumType(IntEnum):
    ARW = 0
    BMP = 1
    CR2_RAW = 2
    DNG = 3
    GEOJPEG = 4
    GEOTIFF = 5
    GIF = 6
    GPR = 7
    JPEG = 8
    NEF = 9
    PGM = 10
    PNG = 11
    PNM = 12
    PPM = 13
    TIFF = 14

UMAA.Common.MaritimeEnumeration.ImageFormatEnumModule.ImageFormatEnumType = UMAA_Common_MaritimeEnumeration_ImageFormatEnumModule_ImageFormatEnumType

UMAA_Common_MaritimeEnumeration_InertialSensorCmdEnumModule = idl.get_module("UMAA_Common_MaritimeEnumeration_InertialSensorCmdEnumModule")

UMAA.Common.MaritimeEnumeration.InertialSensorCmdEnumModule = UMAA_Common_MaritimeEnumeration_InertialSensorCmdEnumModule

@idl.enum
class UMAA_Common_MaritimeEnumeration_InertialSensorCmdEnumModule_InertialSensorCmdEnumType(IntEnum):
    BEST_ALIGN = 0
    GPS_ALIGN = 1
    INIT = 2
    SNAP_ALIGN = 3
    STATIONARY_ALIGN = 4
    TRANSFER_ALIGN = 5

UMAA.Common.MaritimeEnumeration.InertialSensorCmdEnumModule.InertialSensorCmdEnumType = UMAA_Common_MaritimeEnumeration_InertialSensorCmdEnumModule_InertialSensorCmdEnumType

UMAA_Common_MaritimeEnumeration_InertialSensorOpStatusEnumModule = idl.get_module("UMAA_Common_MaritimeEnumeration_InertialSensorOpStatusEnumModule")

UMAA.Common.MaritimeEnumeration.InertialSensorOpStatusEnumModule = UMAA_Common_MaritimeEnumeration_InertialSensorOpStatusEnumModule

@idl.enum
class UMAA_Common_MaritimeEnumeration_InertialSensorOpStatusEnumModule_InertialSensorOpStatusEnumType(IntEnum):
    BEST_ALIGNMENT_FAILURE = 0
    COARSE_BEST_ALIGNMENT = 1
    COARSE_GPS_ALIGNMENT = 2
    COARSE_STATIONARY_ALIGNMENT = 3
    COARSE_TRANSFER_ALIGNMENT = 4
    FINE_BEST_ALIGNMENT_COMPLETE = 5
    FINE_BEST_ALIGNMENT_STARTED = 6
    FINE_GPS_ALIGNMENT_COMPLETE = 7
    FINE_GPS_ALIGNMENT_STARTED = 8
    FINE_STATIONARY_ALIGNMENT_COMPLETE = 9
    FINE_STATIONARY_ALIGNMENT_STARTED = 10
    FINE_TRANSFER_ALIGNMENT_COMPLETE = 11
    FINE_TRANSFER_ALIGNMENT_STARTED = 12
    GPS_ALIGNMENT_FAILURE = 13
    INERTIAL_SENSOR_FAILURE = 14
    INIT = 15
    SNAP_ALIGNMENT_COMPLETE = 16
    SNAP_ALIGNMENT_FAILURE = 17
    STATIONARY_ALIGNMENT_FAILURE = 18
    TRANSFER_ALIGNMENT_FAILURE = 19

UMAA.Common.MaritimeEnumeration.InertialSensorOpStatusEnumModule.InertialSensorOpStatusEnumType = UMAA_Common_MaritimeEnumeration_InertialSensorOpStatusEnumModule_InertialSensorOpStatusEnumType

UMAA_Common_MaritimeEnumeration_InitiatedTestEnumModule = idl.get_module("UMAA_Common_MaritimeEnumeration_InitiatedTestEnumModule")

UMAA.Common.MaritimeEnumeration.InitiatedTestEnumModule = UMAA_Common_MaritimeEnumeration_InitiatedTestEnumModule

@idl.enum
class UMAA_Common_MaritimeEnumeration_InitiatedTestEnumModule_InitiatedTestEnumType(IntEnum):
    DESTRUCTIVE = 0
    NON_DESTRUCTIVE = 1

UMAA.Common.MaritimeEnumeration.InitiatedTestEnumModule.InitiatedTestEnumType = UMAA_Common_MaritimeEnumeration_InitiatedTestEnumModule_InitiatedTestEnumType

UMAA_Common_MaritimeEnumeration_InterferenceEnumModule = idl.get_module("UMAA_Common_MaritimeEnumeration_InterferenceEnumModule")

UMAA.Common.MaritimeEnumeration.InterferenceEnumModule = UMAA_Common_MaritimeEnumeration_InterferenceEnumModule

@idl.enum
class UMAA_Common_MaritimeEnumeration_InterferenceEnumModule_InterferenceEnumType(IntEnum):
    ACOUSTIC = 0
    NONACOUSTIC = 1
    UNKNOWN = 2

UMAA.Common.MaritimeEnumeration.InterferenceEnumModule.InterferenceEnumType = UMAA_Common_MaritimeEnumeration_InterferenceEnumModule_InterferenceEnumType

UMAA_Common_MaritimeEnumeration_LandmarkEnumModule = idl.get_module("UMAA_Common_MaritimeEnumeration_LandmarkEnumModule")

UMAA.Common.MaritimeEnumeration.LandmarkEnumModule = UMAA_Common_MaritimeEnumeration_LandmarkEnumModule

@idl.enum
class UMAA_Common_MaritimeEnumeration_LandmarkEnumModule_LandmarkEnumType(IntEnum):
    CLUSTER_OBJECT = 0
    LARGE_OBJECT = 1
    MARKED = 2
    TERRAIN = 3

UMAA.Common.MaritimeEnumeration.LandmarkEnumModule.LandmarkEnumType = UMAA_Common_MaritimeEnumeration_LandmarkEnumModule_LandmarkEnumType

UMAA_Common_MaritimeEnumeration_LogLevelEnumModule = idl.get_module("UMAA_Common_MaritimeEnumeration_LogLevelEnumModule")

UMAA.Common.MaritimeEnumeration.LogLevelEnumModule = UMAA_Common_MaritimeEnumeration_LogLevelEnumModule

@idl.enum
class UMAA_Common_MaritimeEnumeration_LogLevelEnumModule_LogLevelEnumType(IntEnum):
    ERROR = 0
    INFORMATION = 1
    WARNING = 2

UMAA.Common.MaritimeEnumeration.LogLevelEnumModule.LogLevelEnumType = UMAA_Common_MaritimeEnumeration_LogLevelEnumModule_LogLevelEnumType

UMAA_Common_MaritimeEnumeration_MastActionEnumModule = idl.get_module("UMAA_Common_MaritimeEnumeration_MastActionEnumModule")

UMAA.Common.MaritimeEnumeration.MastActionEnumModule = UMAA_Common_MaritimeEnumeration_MastActionEnumModule

@idl.enum
class UMAA_Common_MaritimeEnumeration_MastActionEnumModule_MastActionEnumType(IntEnum):
    LOWER = 0
    RAISE = 1
    STOP = 2

UMAA.Common.MaritimeEnumeration.MastActionEnumModule.MastActionEnumType = UMAA_Common_MaritimeEnumeration_MastActionEnumModule_MastActionEnumType

UMAA_Common_MaritimeEnumeration_MastStateEnumModule = idl.get_module("UMAA_Common_MaritimeEnumeration_MastStateEnumModule")

UMAA.Common.MaritimeEnumeration.MastStateEnumModule = UMAA_Common_MaritimeEnumeration_MastStateEnumModule

@idl.enum
class UMAA_Common_MaritimeEnumeration_MastStateEnumModule_MastStateEnumType(IntEnum):
    DOWN = 0
    MOVING_DOWN = 1
    MOVING_UP = 2
    STOPPED = 3
    UP = 4

UMAA.Common.MaritimeEnumeration.MastStateEnumModule.MastStateEnumType = UMAA_Common_MaritimeEnumeration_MastStateEnumModule_MastStateEnumType

UMAA_Common_MaritimeEnumeration_CommandStatusEnumModule = idl.get_module("UMAA_Common_MaritimeEnumeration_CommandStatusEnumModule")

UMAA.Common.MaritimeEnumeration.CommandStatusEnumModule = UMAA_Common_MaritimeEnumeration_CommandStatusEnumModule

@idl.enum
class UMAA_Common_MaritimeEnumeration_CommandStatusEnumModule_CommandStatusEnumType(IntEnum):
    CANCELED = 0
    COMMANDED = 1
    COMPLETED = 2
    EXECUTING = 3
    FAILED = 4
    ISSUED = 5

UMAA.Common.MaritimeEnumeration.CommandStatusEnumModule.CommandStatusEnumType = UMAA_Common_MaritimeEnumeration_CommandStatusEnumModule_CommandStatusEnumType

UMAA_Common_MaritimeEnumeration_TaskControlEnumModule = idl.get_module("UMAA_Common_MaritimeEnumeration_TaskControlEnumModule")

UMAA.Common.MaritimeEnumeration.TaskControlEnumModule = UMAA_Common_MaritimeEnumeration_TaskControlEnumModule

@idl.enum
class UMAA_Common_MaritimeEnumeration_TaskControlEnumModule_TaskControlEnumType(IntEnum):
    CANCEL = 0
    EXECUTION_APPROVED = 1
    EXECUTION_NOT_APPROVED = 2
    PAUSE = 3
    PLAN = 4
    QUEUE = 5
    RESTART = 6
    RESUME = 7

UMAA.Common.MaritimeEnumeration.TaskControlEnumModule.TaskControlEnumType = UMAA_Common_MaritimeEnumeration_TaskControlEnumModule_TaskControlEnumType

UMAA_Common_MaritimeEnumeration_TaskStateEnumModule = idl.get_module("UMAA_Common_MaritimeEnumeration_TaskStateEnumModule")

UMAA.Common.MaritimeEnumeration.TaskStateEnumModule = UMAA_Common_MaritimeEnumeration_TaskStateEnumModule

@idl.enum
class UMAA_Common_MaritimeEnumeration_TaskStateEnumModule_TaskStateEnumType(IntEnum):
    AWAITING_EXECUTION_APPROVAL = 0
    CANCELED = 1
    CANCELING = 2
    COMPLETED = 3
    EXECUTING = 4
    EXECUTION_APPROVED = 5
    FAILED = 6
    NOT_PLANNED = 7
    NOT_QUEUED = 8
    PAUSED = 9
    PAUSING = 10
    PLANNED = 11
    PLANNING = 12
    QUEUED = 13
    QUEUING = 14
    RESTARTING = 15
    RESUMING = 16

UMAA.Common.MaritimeEnumeration.TaskStateEnumModule.TaskStateEnumType = UMAA_Common_MaritimeEnumeration_TaskStateEnumModule_TaskStateEnumType

UMAA_Common_MaritimeEnumeration_NavigationSolutionEnumModule = idl.get_module("UMAA_Common_MaritimeEnumeration_NavigationSolutionEnumModule")

UMAA.Common.MaritimeEnumeration.NavigationSolutionEnumModule = UMAA_Common_MaritimeEnumeration_NavigationSolutionEnumModule

@idl.enum
class UMAA_Common_MaritimeEnumeration_NavigationSolutionEnumModule_NavigationSolutionEnumType(IntEnum):
    ESTIMATED = 0
    GROUND_TRUTH = 1
    MEASURED = 2

UMAA.Common.MaritimeEnumeration.NavigationSolutionEnumModule.NavigationSolutionEnumType = UMAA_Common_MaritimeEnumeration_NavigationSolutionEnumModule_NavigationSolutionEnumType

UMAA_Common_MaritimeEnumeration_ObjectiveExecutorControlEnumModule = idl.get_module("UMAA_Common_MaritimeEnumeration_ObjectiveExecutorControlEnumModule")

UMAA.Common.MaritimeEnumeration.ObjectiveExecutorControlEnumModule = UMAA_Common_MaritimeEnumeration_ObjectiveExecutorControlEnumModule

@idl.enum
class UMAA_Common_MaritimeEnumeration_ObjectiveExecutorControlEnumModule_ObjectiveExecutorControlEnumType(IntEnum):
    EXECUTE = 0
    PAUSE = 1
    RESUME = 2

UMAA.Common.MaritimeEnumeration.ObjectiveExecutorControlEnumModule.ObjectiveExecutorControlEnumType = UMAA_Common_MaritimeEnumeration_ObjectiveExecutorControlEnumModule_ObjectiveExecutorControlEnumType

UMAA_Common_MaritimeEnumeration_ObjectiveExecutorStateEnumModule = idl.get_module("UMAA_Common_MaritimeEnumeration_ObjectiveExecutorStateEnumModule")

UMAA.Common.MaritimeEnumeration.ObjectiveExecutorStateEnumModule = UMAA_Common_MaritimeEnumeration_ObjectiveExecutorStateEnumModule

@idl.enum
class UMAA_Common_MaritimeEnumeration_ObjectiveExecutorStateEnumModule_ObjectiveExecutorStateEnumType(IntEnum):
    CANCELED = 0
    CANCELING = 1
    COMPLETED = 2
    EXECUTING = 3
    FAILED = 4
    MODIFYING = 5
    PAUSED = 6
    PAUSING = 7
    QUEUED = 8
    RESUMING = 9

UMAA.Common.MaritimeEnumeration.ObjectiveExecutorStateEnumModule.ObjectiveExecutorStateEnumType = UMAA_Common_MaritimeEnumeration_ObjectiveExecutorStateEnumModule_ObjectiveExecutorStateEnumType

UMAA_Common_MaritimeEnumeration_ObjectiveExecutorStateReasonEnumModule = idl.get_module("UMAA_Common_MaritimeEnumeration_ObjectiveExecutorStateReasonEnumModule")

UMAA.Common.MaritimeEnumeration.ObjectiveExecutorStateReasonEnumModule = UMAA_Common_MaritimeEnumeration_ObjectiveExecutorStateReasonEnumModule

@idl.enum
class UMAA_Common_MaritimeEnumeration_ObjectiveExecutorStateReasonEnumModule_ObjectiveExecutorStateReasonEnumType(IntEnum):
    BUS_MSG_DISPOSE = 0
    BUS_MSG_UPDATE = 1
    CANNOT_PERFORM_UNDER_CONSTRAINTS = 2
    COMMAND_VALIDATION_FAILED = 3
    COMMANDED = 4
    INTERNAL_FAILURE = 5
    LOWER_SERVICE_FAILED = 6
    LOWER_SERVICE_INTERRUPTED = 7
    LOWER_SERVICE_REJECTED = 8
    LOWER_SERVICE_TIMEOUT = 9
    OBJECTIVE_REPLACED = 10
    SUCCEEDED = 11

UMAA.Common.MaritimeEnumeration.ObjectiveExecutorStateReasonEnumModule.ObjectiveExecutorStateReasonEnumType = UMAA_Common_MaritimeEnumeration_ObjectiveExecutorStateReasonEnumModule_ObjectiveExecutorStateReasonEnumType

UMAA_Common_MaritimeEnumeration_OperationalModeControlEnumModule = idl.get_module("UMAA_Common_MaritimeEnumeration_OperationalModeControlEnumModule")

UMAA.Common.MaritimeEnumeration.OperationalModeControlEnumModule = UMAA_Common_MaritimeEnumeration_OperationalModeControlEnumModule

@idl.enum
class UMAA_Common_MaritimeEnumeration_OperationalModeControlEnumModule_OperationalModeControlEnumType(IntEnum):
    AUTONOMOUS = 0
    REMOTE = 1
    STANDBY = 2

UMAA.Common.MaritimeEnumeration.OperationalModeControlEnumModule.OperationalModeControlEnumType = UMAA_Common_MaritimeEnumeration_OperationalModeControlEnumModule_OperationalModeControlEnumType

UMAA_Common_MaritimeEnumeration_OperationalModeEnumModule = idl.get_module("UMAA_Common_MaritimeEnumeration_OperationalModeEnumModule")

UMAA.Common.MaritimeEnumeration.OperationalModeEnumModule = UMAA_Common_MaritimeEnumeration_OperationalModeEnumModule

@idl.enum
class UMAA_Common_MaritimeEnumeration_OperationalModeEnumModule_OperationalModeEnumType(IntEnum):
    AUTONOMOUS = 0
    MANUAL = 1
    REMOTE = 2
    STANDBY = 3

UMAA.Common.MaritimeEnumeration.OperationalModeEnumModule.OperationalModeEnumType = UMAA_Common_MaritimeEnumeration_OperationalModeEnumModule_OperationalModeEnumType

UMAA_Common_MaritimeEnumeration_PassiveContactFeatureEnumModule = idl.get_module("UMAA_Common_MaritimeEnumeration_PassiveContactFeatureEnumModule")

UMAA.Common.MaritimeEnumeration.PassiveContactFeatureEnumModule = UMAA_Common_MaritimeEnumeration_PassiveContactFeatureEnumModule

@idl.enum
class UMAA_Common_MaritimeEnumeration_PassiveContactFeatureEnumModule_PassiveContactFeatureEnumType(IntEnum):
    BROADBAND = 0
    NARROWBAND = 1
    TRANSIENT = 2

UMAA.Common.MaritimeEnumeration.PassiveContactFeatureEnumModule.PassiveContactFeatureEnumType = UMAA_Common_MaritimeEnumeration_PassiveContactFeatureEnumModule_PassiveContactFeatureEnumType

UMAA_Common_MaritimeEnumeration_PathWayEnumModule = idl.get_module("UMAA_Common_MaritimeEnumeration_PathWayEnumModule")

UMAA.Common.MaritimeEnumeration.PathWayEnumModule = UMAA_Common_MaritimeEnumeration_PathWayEnumModule

@idl.enum
class UMAA_Common_MaritimeEnumeration_PathWayEnumModule_PathWayEnumType(IntEnum):
    HISTORICAL_GLOBAL = 0
    HISTORICAL_LOCAL = 1
    PLANNED_GLOBAL = 2
    PLANNED_LOCAL = 3

UMAA.Common.MaritimeEnumeration.PathWayEnumModule.PathWayEnumType = UMAA_Common_MaritimeEnumeration_PathWayEnumModule_PathWayEnumType

UMAA_Common_MaritimeEnumeration_PowerOnTestEnumModule = idl.get_module("UMAA_Common_MaritimeEnumeration_PowerOnTestEnumModule")

UMAA.Common.MaritimeEnumeration.PowerOnTestEnumModule = UMAA_Common_MaritimeEnumeration_PowerOnTestEnumModule

@idl.enum
class UMAA_Common_MaritimeEnumeration_PowerOnTestEnumModule_PowerOnTestEnumType(IntEnum):
    DISABLED_NO_TEST = 0
    FULL_TEST = 1
    QUICK_TEST = 2

UMAA.Common.MaritimeEnumeration.PowerOnTestEnumModule.PowerOnTestEnumType = UMAA_Common_MaritimeEnumeration_PowerOnTestEnumModule_PowerOnTestEnumType

UMAA_Common_MaritimeEnumeration_PowerPlantStateEnumModule = idl.get_module("UMAA_Common_MaritimeEnumeration_PowerPlantStateEnumModule")

UMAA.Common.MaritimeEnumeration.PowerPlantStateEnumModule = UMAA_Common_MaritimeEnumeration_PowerPlantStateEnumModule

@idl.enum
class UMAA_Common_MaritimeEnumeration_PowerPlantStateEnumModule_PowerPlantStateEnumType(IntEnum):
    FAULT = 0
    OFF = 1
    ON = 2

UMAA.Common.MaritimeEnumeration.PowerPlantStateEnumModule.PowerPlantStateEnumType = UMAA_Common_MaritimeEnumeration_PowerPlantStateEnumModule_PowerPlantStateEnumType

UMAA_Common_MaritimeEnumeration_PowerStateEnumModule = idl.get_module("UMAA_Common_MaritimeEnumeration_PowerStateEnumModule")

UMAA.Common.MaritimeEnumeration.PowerStateEnumModule = UMAA_Common_MaritimeEnumeration_PowerStateEnumModule

@idl.enum
class UMAA_Common_MaritimeEnumeration_PowerStateEnumModule_PowerStateEnumType(IntEnum):
    EMERGENCY_POWER = 0
    POWER_OFF = 1
    POWER_ON = 2
    POWER_STANDBY = 3

UMAA.Common.MaritimeEnumeration.PowerStateEnumModule.PowerStateEnumType = UMAA_Common_MaritimeEnumeration_PowerStateEnumModule_PowerStateEnumType

UMAA_Common_MaritimeEnumeration_ProcessingUnitEnumModule = idl.get_module("UMAA_Common_MaritimeEnumeration_ProcessingUnitEnumModule")

UMAA.Common.MaritimeEnumeration.ProcessingUnitEnumModule = UMAA_Common_MaritimeEnumeration_ProcessingUnitEnumModule

@idl.enum
class UMAA_Common_MaritimeEnumeration_ProcessingUnitEnumModule_ProcessingUnitEnumType(IntEnum):
    CPU = 0
    DSP = 1
    FPGA = 2
    GPU = 3
    NPU = 4
    PhPU = 5
    PPU = 6
    QPU = 7
    SPU = 8
    TPU = 9
    VPU = 10

UMAA.Common.MaritimeEnumeration.ProcessingUnitEnumModule.ProcessingUnitEnumType = UMAA_Common_MaritimeEnumeration_ProcessingUnitEnumModule_ProcessingUnitEnumType

UMAA_Common_MaritimeEnumeration_PumpStateEnumModule = idl.get_module("UMAA_Common_MaritimeEnumeration_PumpStateEnumModule")

UMAA.Common.MaritimeEnumeration.PumpStateEnumModule = UMAA_Common_MaritimeEnumeration_PumpStateEnumModule

@idl.enum
class UMAA_Common_MaritimeEnumeration_PumpStateEnumModule_PumpStateEnumType(IntEnum):
    FAULT = 0
    OFF = 1
    ON_FORWARD = 2
    ON_REVERSE = 3

UMAA.Common.MaritimeEnumeration.PumpStateEnumModule.PumpStateEnumType = UMAA_Common_MaritimeEnumeration_PumpStateEnumModule_PumpStateEnumType

UMAA_Common_MaritimeEnumeration_ReferenceFrameOriginEnumModule = idl.get_module("UMAA_Common_MaritimeEnumeration_ReferenceFrameOriginEnumModule")

UMAA.Common.MaritimeEnumeration.ReferenceFrameOriginEnumModule = UMAA_Common_MaritimeEnumeration_ReferenceFrameOriginEnumModule

@idl.enum
class UMAA_Common_MaritimeEnumeration_ReferenceFrameOriginEnumModule_ReferenceFrameOriginEnumType(IntEnum):
    BOW_WATERLINE_INTERSECTION = 0
    CENTER_OF_BUOYANCY = 1
    CENTER_OF_GRAVITY = 2
    INS_LOCATION = 3
    KEEL_TRANSOM_INTERSECTION = 4

UMAA.Common.MaritimeEnumeration.ReferenceFrameOriginEnumModule.ReferenceFrameOriginEnumType = UMAA_Common_MaritimeEnumeration_ReferenceFrameOriginEnumModule_ReferenceFrameOriginEnumType

UMAA_Common_MaritimeEnumeration_SourceIndicatorEnumModule = idl.get_module("UMAA_Common_MaritimeEnumeration_SourceIndicatorEnumModule")

UMAA.Common.MaritimeEnumeration.SourceIndicatorEnumModule = UMAA_Common_MaritimeEnumeration_SourceIndicatorEnumModule

@idl.enum
class UMAA_Common_MaritimeEnumeration_SourceIndicatorEnumModule_SourceIndicatorEnumType(IntEnum):
    ACTUAL = 0
    GROUND_TRUTH = 1
    SIMULATED = 2
    TENTATIVE = 3

UMAA.Common.MaritimeEnumeration.SourceIndicatorEnumModule.SourceIndicatorEnumType = UMAA_Common_MaritimeEnumeration_SourceIndicatorEnumModule_SourceIndicatorEnumType

UMAA_Common_MaritimeEnumeration_SpecialManeuverIndicatorEnumModule = idl.get_module("UMAA_Common_MaritimeEnumeration_SpecialManeuverIndicatorEnumModule")

UMAA.Common.MaritimeEnumeration.SpecialManeuverIndicatorEnumModule = UMAA_Common_MaritimeEnumeration_SpecialManeuverIndicatorEnumModule

@idl.enum
class UMAA_Common_MaritimeEnumeration_SpecialManeuverIndicatorEnumModule_SpecialManeuverIndicatorEnumType(IntEnum):
    ENGAGED = 0
    NOT_AVAILABLE = 1
    NOT_ENGAGED = 2
    NOT_PROVIDED = 3

UMAA.Common.MaritimeEnumeration.SpecialManeuverIndicatorEnumModule.SpecialManeuverIndicatorEnumType = UMAA_Common_MaritimeEnumeration_SpecialManeuverIndicatorEnumModule_SpecialManeuverIndicatorEnumType

UMAA_Common_MaritimeEnumeration_TamperDetectionStateEnumModule = idl.get_module("UMAA_Common_MaritimeEnumeration_TamperDetectionStateEnumModule")

UMAA.Common.MaritimeEnumeration.TamperDetectionStateEnumModule = UMAA_Common_MaritimeEnumeration_TamperDetectionStateEnumModule

@idl.enum
class UMAA_Common_MaritimeEnumeration_TamperDetectionStateEnumModule_TamperDetectionStateEnumType(IntEnum):
    ALWAYS_ENABLED_OR_CLEAR = 0
    DISABLED = 1
    ENABLED = 2

UMAA.Common.MaritimeEnumeration.TamperDetectionStateEnumModule.TamperDetectionStateEnumType = UMAA_Common_MaritimeEnumeration_TamperDetectionStateEnumModule_TamperDetectionStateEnumType

UMAA_Common_MaritimeEnumeration_TFOMEnumModule = idl.get_module("UMAA_Common_MaritimeEnumeration_TFOMEnumModule")

UMAA.Common.MaritimeEnumeration.TFOMEnumModule = UMAA_Common_MaritimeEnumeration_TFOMEnumModule

@idl.enum
class UMAA_Common_MaritimeEnumeration_TFOMEnumModule_TFOMEnumType(IntEnum):
    TFOM_1 = 0
    TFOM_2 = 1
    TFOM_3 = 2
    TFOM_4 = 3
    TFOM_5 = 4
    TFOM_6 = 5
    TFOM_7 = 6
    TFOM_8 = 7
    TFOM_9 = 8

UMAA.Common.MaritimeEnumeration.TFOMEnumModule.TFOMEnumType = UMAA_Common_MaritimeEnumeration_TFOMEnumModule_TFOMEnumType

UMAA_Common_MaritimeEnumeration_TrackCategoryEnumModule = idl.get_module("UMAA_Common_MaritimeEnumeration_TrackCategoryEnumModule")

UMAA.Common.MaritimeEnumeration.TrackCategoryEnumModule = UMAA_Common_MaritimeEnumeration_TrackCategoryEnumModule

@idl.enum
class UMAA_Common_MaritimeEnumeration_TrackCategoryEnumModule_TrackCategoryEnumType(IntEnum):
    ADS_B_DIRECTIONAL_AIR = 0
    ADS_B_DIRECTIONAL_SURFACE = 1
    ADS_B_NONDIRECTIONAL_AIR = 2
    ADS_B_NONDIRECTIONAL_SURFACE = 3
    AIR = 4
    ASW = 5
    EMERGENCY = 6
    EW = 7
    LAND_POINT = 8
    LAND_TRACK = 9
    MP_AREA = 10
    MP_LINE = 11
    NA = 12
    NO_STATEMENT = 13
    POINTER = 14
    REF_POINT = 15
    SP_AREA = 16
    SPACE = 17
    SUB_SURFACE = 18
    SURFACE = 19

UMAA.Common.MaritimeEnumeration.TrackCategoryEnumModule.TrackCategoryEnumType = UMAA_Common_MaritimeEnumeration_TrackCategoryEnumModule_TrackCategoryEnumType

UMAA_Common_MaritimeEnumeration_TrackIdentityEnumModule = idl.get_module("UMAA_Common_MaritimeEnumeration_TrackIdentityEnumModule")

UMAA.Common.MaritimeEnumeration.TrackIdentityEnumModule = UMAA_Common_MaritimeEnumeration_TrackIdentityEnumModule

@idl.enum
class UMAA_Common_MaritimeEnumeration_TrackIdentityEnumModule_TrackIdentityEnumType(IntEnum):
    ASSUMED_FRIEND = 0
    FAKER = 1
    FRIEND = 2
    HOSTILE = 3
    JOKER = 4
    NEUTRAL = 5
    PENDING = 6
    SUSPECT = 7
    UNKNOWN = 8

UMAA.Common.MaritimeEnumeration.TrackIdentityEnumModule.TrackIdentityEnumType = UMAA_Common_MaritimeEnumeration_TrackIdentityEnumModule_TrackIdentityEnumType

UMAA_Common_MaritimeEnumeration_TriggerStateEnumModule = idl.get_module("UMAA_Common_MaritimeEnumeration_TriggerStateEnumModule")

UMAA.Common.MaritimeEnumeration.TriggerStateEnumModule = UMAA_Common_MaritimeEnumeration_TriggerStateEnumModule

@idl.enum
class UMAA_Common_MaritimeEnumeration_TriggerStateEnumModule_TriggerStateEnumType(IntEnum):
    CANCEL = 0
    PAUSE = 1
    PLAN = 2
    QUEUE = 3
    RESTART = 4
    RESUME = 5

UMAA.Common.MaritimeEnumeration.TriggerStateEnumModule.TriggerStateEnumType = UMAA_Common_MaritimeEnumeration_TriggerStateEnumModule_TriggerStateEnumType

UMAA_Common_MaritimeEnumeration_VehicleSpeedModeEnumModule = idl.get_module("UMAA_Common_MaritimeEnumeration_VehicleSpeedModeEnumModule")

UMAA.Common.MaritimeEnumeration.VehicleSpeedModeEnumModule = UMAA_Common_MaritimeEnumeration_VehicleSpeedModeEnumModule

@idl.enum
class UMAA_Common_MaritimeEnumeration_VehicleSpeedModeEnumModule_VehicleSpeedModeEnumType(IntEnum):
    LRC = 0
    MEC = 1
    MRC = 2
    SLOW = 3
    VEHICLE_SPECIFIC = 4

UMAA.Common.MaritimeEnumeration.VehicleSpeedModeEnumModule.VehicleSpeedModeEnumType = UMAA_Common_MaritimeEnumeration_VehicleSpeedModeEnumModule_VehicleSpeedModeEnumType

UMAA_Common_MaritimeEnumeration_VisualClassificationEnumModule = idl.get_module("UMAA_Common_MaritimeEnumeration_VisualClassificationEnumModule")

UMAA.Common.MaritimeEnumeration.VisualClassificationEnumModule = UMAA_Common_MaritimeEnumeration_VisualClassificationEnumModule

@idl.enum
class UMAA_Common_MaritimeEnumeration_VisualClassificationEnumModule_VisualClassificationEnumType(IntEnum):
    AID_TO_NAVIGATION_CHANNEL_MARKER = 0
    AID_TO_NAVIGATION_GENERAL = 1
    AID_TO_NAVIGATION_LARGE_BUOY = 2
    AID_TO_NAVIGATION_LIGHTHOUSE = 3
    AID_TO_NAVIGATION_SMALL_BUOY = 4
    LARGE_GENERAL_OBSTACLE = 5
    LARGE_VESSEL_CARGO = 6
    LARGE_VESSEL_GENERAL = 7
    LARGE_VESSEL_MILITARY = 8
    LARGE_VESSEL_OTHER = 9
    LARGE_VESSEL_PASSENGER = 10
    MEDIUM_VESSEL_FISHING = 11
    MEDIUM_VESSEL_GENERAL = 12
    MEDIUM_VESSEL_MILITARY = 13
    MEDIUM_VESSEL_OTHER = 14
    MEDIUM_VESSEL_TUG = 15
    MEDIUM_VESSEL_TUG_IN_TOW = 16
    MEDIUM_VESSEL_YACHT = 17
    SAILBOAT = 18
    SMALL_GENERAL_OBSTACLE = 19
    SMALL_VESSEL_GENERAL = 20
    SMALL_VESSEL_JET_SKI = 21
    SMALL_VESSEL_MILITARY = 22
    SMALL_VESSEL_OTHER = 23
    SMALL_VESSEL_POWER_BOAT = 24

UMAA.Common.MaritimeEnumeration.VisualClassificationEnumModule.VisualClassificationEnumType = UMAA_Common_MaritimeEnumeration_VisualClassificationEnumModule_VisualClassificationEnumType

UMAA_Common_MaritimeEnumeration_WaterTurnDirectionEnumModule = idl.get_module("UMAA_Common_MaritimeEnumeration_WaterTurnDirectionEnumModule")

UMAA.Common.MaritimeEnumeration.WaterTurnDirectionEnumModule = UMAA_Common_MaritimeEnumeration_WaterTurnDirectionEnumModule

@idl.enum
class UMAA_Common_MaritimeEnumeration_WaterTurnDirectionEnumModule_WaterTurnDirectionEnumType(IntEnum):
    LEFT_TURN = 0
    RIGHT_TURN = 1

UMAA.Common.MaritimeEnumeration.WaterTurnDirectionEnumModule.WaterTurnDirectionEnumType = UMAA_Common_MaritimeEnumeration_WaterTurnDirectionEnumModule_WaterTurnDirectionEnumType

UMAA_Common_MaritimeEnumeration_WaterZoneKindEnumModule = idl.get_module("UMAA_Common_MaritimeEnumeration_WaterZoneKindEnumModule")

UMAA.Common.MaritimeEnumeration.WaterZoneKindEnumModule = UMAA_Common_MaritimeEnumeration_WaterZoneKindEnumModule

@idl.enum
class UMAA_Common_MaritimeEnumeration_WaterZoneKindEnumModule_WaterZoneKindEnumType(IntEnum):
    INSIDE = 0
    OUTSIDE = 1

UMAA.Common.MaritimeEnumeration.WaterZoneKindEnumModule.WaterZoneKindEnumType = UMAA_Common_MaritimeEnumeration_WaterZoneKindEnumModule_WaterZoneKindEnumType

UMAA_Common_MaritimeEnumeration_WaypointStateEnumModule = idl.get_module("UMAA_Common_MaritimeEnumeration_WaypointStateEnumModule")

UMAA.Common.MaritimeEnumeration.WaypointStateEnumModule = UMAA_Common_MaritimeEnumeration_WaypointStateEnumModule

@idl.enum
class UMAA_Common_MaritimeEnumeration_WaypointStateEnumModule_WaypointStateEnumType(IntEnum):
    ACHIEVED = 0
    COMPLETED = 1
    EXECUTING = 2
    FAILED = 3
    QUEUED = 4

UMAA.Common.MaritimeEnumeration.WaypointStateEnumModule.WaypointStateEnumType = UMAA_Common_MaritimeEnumeration_WaypointStateEnumModule_WaypointStateEnumType
