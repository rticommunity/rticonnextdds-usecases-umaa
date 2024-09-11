
# WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

# This file was generated from SpeedRequirementVariantType.idl
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
from AirSpeedRequirementVariantType import *
sys.path.pop()
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/Common/Speed/'))
from EngineRPMSpeedRequirementVariantType import *
sys.path.pop()
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/Common/Speed/'))
from GroundSpeedRequirementVariantType import *
sys.path.pop()
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/Common/Speed/'))
from VehicleSpeedModeRequirementVariantType import *
sys.path.pop()
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/Common/Speed/'))
from WaterSpeedRequirementVariantType import *
sys.path.pop()

UMAA = idl.get_module("UMAA")

UMAA_Common = idl.get_module("UMAA_Common")

UMAA.Common = UMAA_Common

UMAA_Common_Speed = idl.get_module("UMAA_Common_Speed")

UMAA.Common.Speed = UMAA_Common_Speed

@idl.enum
class UMAA_Common_Speed_SpeedRequirementVariantTypeEnum(IntEnum):
    AIRSPEEDREQUIREMENTVARIANT_D = 0
    ENGINERPMSPEEDREQUIREMENTVARIANT_D = 1
    GROUNDSPEEDREQUIREMENTVARIANT_D = 2
    VEHICLESPEEDMODEREQUIREMENTVARIANT_D = 3
    WATERSPEEDREQUIREMENTVARIANT_D = 4

UMAA.Common.Speed.SpeedRequirementVariantTypeEnum = UMAA_Common_Speed_SpeedRequirementVariantTypeEnum

@idl.union(
    type_annotations = [idl.type_name("UMAA::Common::Speed::SpeedRequirementVariantTypeUnion")])
class UMAA_Common_Speed_SpeedRequirementVariantTypeUnion:

    discriminator: UMAA.Common.Speed.SpeedRequirementVariantTypeEnum = UMAA.Common.Speed.SpeedRequirementVariantTypeEnum.AIRSPEEDREQUIREMENTVARIANT_D
    value: Union[UMAA.Common.Speed.AirSpeedRequirementVariantType, UMAA.Common.Speed.EngineRPMSpeedRequirementVariantType, UMAA.Common.Speed.GroundSpeedRequirementVariantType, UMAA.Common.Speed.VehicleSpeedModeRequirementVariantType, UMAA.Common.Speed.WaterSpeedRequirementVariantType] = field(default_factory = UMAA.Common.Speed.AirSpeedRequirementVariantType)

    AirSpeedRequirementVariantVariant: UMAA.Common.Speed.AirSpeedRequirementVariantType = idl.case(UMAA.Common.Speed.SpeedRequirementVariantTypeEnum.AIRSPEEDREQUIREMENTVARIANT_D)
    EngineRPMSpeedRequirementVariantVariant: UMAA.Common.Speed.EngineRPMSpeedRequirementVariantType = idl.case(UMAA.Common.Speed.SpeedRequirementVariantTypeEnum.ENGINERPMSPEEDREQUIREMENTVARIANT_D)
    GroundSpeedRequirementVariantVariant: UMAA.Common.Speed.GroundSpeedRequirementVariantType = idl.case(UMAA.Common.Speed.SpeedRequirementVariantTypeEnum.GROUNDSPEEDREQUIREMENTVARIANT_D)
    VehicleSpeedModeRequirementVariantVariant: UMAA.Common.Speed.VehicleSpeedModeRequirementVariantType = idl.case(UMAA.Common.Speed.SpeedRequirementVariantTypeEnum.VEHICLESPEEDMODEREQUIREMENTVARIANT_D)
    WaterSpeedRequirementVariantVariant: UMAA.Common.Speed.WaterSpeedRequirementVariantType = idl.case(UMAA.Common.Speed.SpeedRequirementVariantTypeEnum.WATERSPEEDREQUIREMENTVARIANT_D)

UMAA.Common.Speed.SpeedRequirementVariantTypeUnion = UMAA_Common_Speed_SpeedRequirementVariantTypeUnion

@idl.struct(
    type_annotations = [idl.type_name("UMAA::Common::Speed::SpeedRequirementVariantType")])
class UMAA_Common_Speed_SpeedRequirementVariantType:
    SpeedRequirementVariantTypeSubtypes: UMAA.Common.Speed.SpeedRequirementVariantTypeUnion = field(default_factory = UMAA.Common.Speed.SpeedRequirementVariantTypeUnion)

UMAA.Common.Speed.SpeedRequirementVariantType = UMAA_Common_Speed_SpeedRequirementVariantType
