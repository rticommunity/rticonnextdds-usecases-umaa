
# WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

# This file was generated from VariableSpeedVariantType.idl
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

sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/Common/Speed/'))
from RecommendedSpeedVariantType import *
sys.path.pop()
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/Common/Speed/'))
from RequiredSpeedVariantType import *
sys.path.pop()
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/Common/Speed/'))
from TimeWithSpeedVariantType import *
sys.path.pop()

UMAA = idl.get_module("UMAA")

UMAA_Common = idl.get_module("UMAA_Common")

UMAA.Common = UMAA_Common

UMAA_Common_Speed = idl.get_module("UMAA_Common_Speed")

UMAA.Common.Speed = UMAA_Common_Speed

@idl.enum
class UMAA_Common_Speed_VariableSpeedVariantTypeEnum(IntEnum):
    RECOMMENDEDSPEEDVARIANT_D = 0
    REQUIREDSPEEDVARIANT_D = 1
    TIMEWITHSPEEDVARIANT_D = 2

UMAA.Common.Speed.VariableSpeedVariantTypeEnum = UMAA_Common_Speed_VariableSpeedVariantTypeEnum

@idl.union(
    type_annotations = [idl.type_name("UMAA::Common::Speed::VariableSpeedVariantTypeUnion")])
class UMAA_Common_Speed_VariableSpeedVariantTypeUnion:

    discriminator: UMAA.Common.Speed.VariableSpeedVariantTypeEnum = UMAA.Common.Speed.VariableSpeedVariantTypeEnum.RECOMMENDEDSPEEDVARIANT_D
    value: Union[UMAA.Common.Speed.RecommendedSpeedVariantType, UMAA.Common.Speed.RequiredSpeedVariantType, UMAA.Common.Speed.TimeWithSpeedVariantType] = field(default_factory = UMAA.Common.Speed.RecommendedSpeedVariantType)

    RecommendedSpeedVariantVariant: UMAA.Common.Speed.RecommendedSpeedVariantType = idl.case(UMAA.Common.Speed.VariableSpeedVariantTypeEnum.RECOMMENDEDSPEEDVARIANT_D)
    RequiredSpeedVariantVariant: UMAA.Common.Speed.RequiredSpeedVariantType = idl.case(UMAA.Common.Speed.VariableSpeedVariantTypeEnum.REQUIREDSPEEDVARIANT_D)
    TimeWithSpeedVariantVariant: UMAA.Common.Speed.TimeWithSpeedVariantType = idl.case(UMAA.Common.Speed.VariableSpeedVariantTypeEnum.TIMEWITHSPEEDVARIANT_D)

UMAA.Common.Speed.VariableSpeedVariantTypeUnion = UMAA_Common_Speed_VariableSpeedVariantTypeUnion

@idl.struct(
    type_annotations = [idl.type_name("UMAA::Common::Speed::VariableSpeedVariantType")])
class UMAA_Common_Speed_VariableSpeedVariantType:
    VariableSpeedVariantTypeSubtypes: UMAA.Common.Speed.VariableSpeedVariantTypeUnion = field(default_factory = UMAA.Common.Speed.VariableSpeedVariantTypeUnion)

UMAA.Common.Speed.VariableSpeedVariantType = UMAA_Common_Speed_VariableSpeedVariantType
