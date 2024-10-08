
# WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

# This file was generated from SpeedVariantType.idl
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
from AirSpeedVariantType import *
sys.path.pop()
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/Common/Speed/'))
from EngineRPMSpeedVariantType import *
sys.path.pop()
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/Common/Speed/'))
from GroundSpeedVariantType import *
sys.path.pop()
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/Common/Speed/'))
from VehicleSpeedModeVariantType import *
sys.path.pop()
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/Common/Speed/'))
from WaterSpeedVariantType import *
sys.path.pop()

UMAA = idl.get_module("UMAA")

UMAA_Common = idl.get_module("UMAA_Common")

UMAA.Common = UMAA_Common

UMAA_Common_Speed = idl.get_module("UMAA_Common_Speed")

UMAA.Common.Speed = UMAA_Common_Speed

@idl.enum
class UMAA_Common_Speed_SpeedVariantTypeEnum(IntEnum):
    AIRSPEEDVARIANT_D = 0
    ENGINERPMSPEEDVARIANT_D = 1
    GROUNDSPEEDVARIANT_D = 2
    VEHICLESPEEDMODEVARIANT_D = 3
    WATERSPEEDVARIANT_D = 4

UMAA.Common.Speed.SpeedVariantTypeEnum = UMAA_Common_Speed_SpeedVariantTypeEnum

@idl.union(
    type_annotations = [idl.type_name("UMAA::Common::Speed::SpeedVariantTypeUnion")])
class UMAA_Common_Speed_SpeedVariantTypeUnion:

    discriminator: UMAA.Common.Speed.SpeedVariantTypeEnum = UMAA.Common.Speed.SpeedVariantTypeEnum.AIRSPEEDVARIANT_D
    value: Union[UMAA.Common.Speed.AirSpeedVariantType, UMAA.Common.Speed.EngineRPMSpeedVariantType, UMAA.Common.Speed.GroundSpeedVariantType, UMAA.Common.Speed.VehicleSpeedModeVariantType, UMAA.Common.Speed.WaterSpeedVariantType] = field(default_factory = UMAA.Common.Speed.AirSpeedVariantType)

    AirSpeedVariantVariant: UMAA.Common.Speed.AirSpeedVariantType = idl.case(UMAA.Common.Speed.SpeedVariantTypeEnum.AIRSPEEDVARIANT_D)
    EngineRPMSpeedVariantVariant: UMAA.Common.Speed.EngineRPMSpeedVariantType = idl.case(UMAA.Common.Speed.SpeedVariantTypeEnum.ENGINERPMSPEEDVARIANT_D)
    GroundSpeedVariantVariant: UMAA.Common.Speed.GroundSpeedVariantType = idl.case(UMAA.Common.Speed.SpeedVariantTypeEnum.GROUNDSPEEDVARIANT_D)
    VehicleSpeedModeVariantVariant: UMAA.Common.Speed.VehicleSpeedModeVariantType = idl.case(UMAA.Common.Speed.SpeedVariantTypeEnum.VEHICLESPEEDMODEVARIANT_D)
    WaterSpeedVariantVariant: UMAA.Common.Speed.WaterSpeedVariantType = idl.case(UMAA.Common.Speed.SpeedVariantTypeEnum.WATERSPEEDVARIANT_D)

UMAA.Common.Speed.SpeedVariantTypeUnion = UMAA_Common_Speed_SpeedVariantTypeUnion

@idl.struct(
    type_annotations = [idl.type_name("UMAA::Common::Speed::SpeedVariantType")])
class UMAA_Common_Speed_SpeedVariantType:
    SpeedVariantTypeSubtypes: UMAA.Common.Speed.SpeedVariantTypeUnion = field(default_factory = UMAA.Common.Speed.SpeedVariantTypeUnion)

UMAA.Common.Speed.SpeedVariantType = UMAA_Common_Speed_SpeedVariantType
