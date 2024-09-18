
# WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

# This file was generated from OrderedEnumerationSets.idl
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

UMAA_Common_OrderedEnumeration = idl.get_module("UMAA_Common_OrderedEnumeration")

UMAA.Common.OrderedEnumeration = UMAA_Common_OrderedEnumeration

UMAA_Common_OrderedEnumeration_CloudCoverEnumModule = idl.get_module("UMAA_Common_OrderedEnumeration_CloudCoverEnumModule")

UMAA.Common.OrderedEnumeration.CloudCoverEnumModule = UMAA_Common_OrderedEnumeration_CloudCoverEnumModule

@idl.enum
class UMAA_Common_OrderedEnumeration_CloudCoverEnumModule_CloudCoverEnumType(IntEnum):
    BROKEN = 0
    CLEAR = 1
    FEW = 2
    OVERCAST = 3
    SCATTERED = 4

UMAA.Common.OrderedEnumeration.CloudCoverEnumModule.CloudCoverEnumType = UMAA_Common_OrderedEnumeration_CloudCoverEnumModule_CloudCoverEnumType

UMAA_Common_OrderedEnumeration_SeaStateEnumModule = idl.get_module("UMAA_Common_OrderedEnumeration_SeaStateEnumModule")

UMAA.Common.OrderedEnumeration.SeaStateEnumModule = UMAA_Common_OrderedEnumeration_SeaStateEnumModule

@idl.enum
class UMAA_Common_OrderedEnumeration_SeaStateEnumModule_SeaStateEnumType(IntEnum):
    CALM_GLOSSY = 0
    CALM_RIPPLED = 1
    HIGH = 2
    MODERATE = 3
    PHENOMENAL = 4
    ROUGH = 5
    SLIGHT = 6
    SMOOTH = 7
    VERY_HIGH = 8
    VERY_ROUGH = 9

UMAA.Common.OrderedEnumeration.SeaStateEnumModule.SeaStateEnumType = UMAA_Common_OrderedEnumeration_SeaStateEnumModule_SeaStateEnumType

UMAA_Common_OrderedEnumeration_WeatherSeverityEnumModule = idl.get_module("UMAA_Common_OrderedEnumeration_WeatherSeverityEnumModule")

UMAA.Common.OrderedEnumeration.WeatherSeverityEnumModule = UMAA_Common_OrderedEnumeration_WeatherSeverityEnumModule

@idl.enum
class UMAA_Common_OrderedEnumeration_WeatherSeverityEnumModule_WeatherSeverityEnumType(IntEnum):
    EXTREME = 0
    LIGHT = 1
    MODERATE = 2
    NONE = 3
    SEVERE = 4

UMAA.Common.OrderedEnumeration.WeatherSeverityEnumModule.WeatherSeverityEnumType = UMAA_Common_OrderedEnumeration_WeatherSeverityEnumModule_WeatherSeverityEnumType
