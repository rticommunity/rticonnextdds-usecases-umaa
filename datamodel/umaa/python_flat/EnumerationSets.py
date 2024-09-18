
# WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

# This file was generated from EnumerationSets.idl
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

UMAA_Common_Enumeration = idl.get_module("UMAA_Common_Enumeration")

UMAA.Common.Enumeration = UMAA_Common_Enumeration

UMAA_Common_Enumeration_BooleanEnumType = bool

UMAA.Common.Enumeration.BooleanEnumType = UMAA_Common_Enumeration_BooleanEnumType

UMAA_Common_Enumeration_LineSegmentEnumModule = idl.get_module("UMAA_Common_Enumeration_LineSegmentEnumModule")

UMAA.Common.Enumeration.LineSegmentEnumModule = UMAA_Common_Enumeration_LineSegmentEnumModule

@idl.enum
class UMAA_Common_Enumeration_LineSegmentEnumModule_LineSegmentEnumType(IntEnum):
    GREAT_CIRCLE = 0
    RHUMB = 1

UMAA.Common.Enumeration.LineSegmentEnumModule.LineSegmentEnumType = UMAA_Common_Enumeration_LineSegmentEnumModule_LineSegmentEnumType

UMAA_Common_Enumeration_OnOffStatusEnumModule = idl.get_module("UMAA_Common_Enumeration_OnOffStatusEnumModule")

UMAA.Common.Enumeration.OnOffStatusEnumModule = UMAA_Common_Enumeration_OnOffStatusEnumModule

@idl.enum
class UMAA_Common_Enumeration_OnOffStatusEnumModule_OnOffStatusEnumType(IntEnum):
    OFF = 0
    ON = 1

UMAA.Common.Enumeration.OnOffStatusEnumModule.OnOffStatusEnumType = UMAA_Common_Enumeration_OnOffStatusEnumModule_OnOffStatusEnumType

UMAA_Common_Enumeration_PrecipitationEnumModule = idl.get_module("UMAA_Common_Enumeration_PrecipitationEnumModule")

UMAA.Common.Enumeration.PrecipitationEnumModule = UMAA_Common_Enumeration_PrecipitationEnumModule

@idl.enum
class UMAA_Common_Enumeration_PrecipitationEnumModule_PrecipitationEnumType(IntEnum):
    DRIZZLE = 0
    FOG = 1
    HAZE = 2
    RAIN = 3
    SHOWERS = 4
    SNOW = 5
    THUNDERSTORMS = 6

UMAA.Common.Enumeration.PrecipitationEnumModule.PrecipitationEnumType = UMAA_Common_Enumeration_PrecipitationEnumModule_PrecipitationEnumType

UMAA_Common_Enumeration_ResourceAllocationStatusEnumModule = idl.get_module("UMAA_Common_Enumeration_ResourceAllocationStatusEnumModule")

UMAA.Common.Enumeration.ResourceAllocationStatusEnumModule = UMAA_Common_Enumeration_ResourceAllocationStatusEnumModule

@idl.enum
class UMAA_Common_Enumeration_ResourceAllocationStatusEnumModule_ResourceAllocationStatusEnumType(IntEnum):
    ALLOCATED = 0
    ALLOCATED_W_LAUNCH_RECOVERY = 1
    AVAILABLE = 2
    FAULT = 3
    FORCED_ALLOCATION = 4
    FORCED_ALLOCATION_W_LAUNCH_RECOVERY = 5
    RELEASED = 6
    TEMPORARILY_UNAVAILABLE = 7
    UNAVAILABLE = 8

UMAA.Common.Enumeration.ResourceAllocationStatusEnumModule.ResourceAllocationStatusEnumType = UMAA_Common_Enumeration_ResourceAllocationStatusEnumModule_ResourceAllocationStatusEnumType

UMAA_Common_Enumeration_SpecificLOIEnumModule = idl.get_module("UMAA_Common_Enumeration_SpecificLOIEnumModule")

UMAA.Common.Enumeration.SpecificLOIEnumModule = UMAA_Common_Enumeration_SpecificLOIEnumModule

@idl.enum
class UMAA_Common_Enumeration_SpecificLOIEnumModule_SpecificLOIEnumType(IntEnum):
    LOI_1 = 0
    LOI_2 = 1
    LOI_3 = 2
    LOI_4 = 3
    LOI_5 = 4

UMAA.Common.Enumeration.SpecificLOIEnumModule.SpecificLOIEnumType = UMAA_Common_Enumeration_SpecificLOIEnumModule_SpecificLOIEnumType
