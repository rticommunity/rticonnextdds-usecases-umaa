
# WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

# This file was generated from PropulsionType.idl
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

sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/Common/Propulsion/'))
from PropulsiveEffortType import *
sys.path.pop()
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/Common/Propulsion/'))
from PropulsiveRPMType import *
sys.path.pop()

UMAA = idl.get_module("UMAA")

UMAA_Common = idl.get_module("UMAA_Common")

UMAA.Common = UMAA_Common

UMAA_Common_Propulsion = idl.get_module("UMAA_Common_Propulsion")

UMAA.Common.Propulsion = UMAA_Common_Propulsion

@idl.enum
class UMAA_Common_Propulsion_PropulsionTypeEnum(IntEnum):
    PROPULSIVEEFFORT_D = 0
    PROPULSIVERPM_D = 1

UMAA.Common.Propulsion.PropulsionTypeEnum = UMAA_Common_Propulsion_PropulsionTypeEnum

@idl.union(
    type_annotations = [idl.type_name("UMAA::Common::Propulsion::PropulsionTypeUnion")])
class UMAA_Common_Propulsion_PropulsionTypeUnion:

    discriminator: UMAA.Common.Propulsion.PropulsionTypeEnum = UMAA.Common.Propulsion.PropulsionTypeEnum.PROPULSIVEEFFORT_D
    value: Union[UMAA.Common.Propulsion.PropulsiveEffortType, UMAA.Common.Propulsion.PropulsiveRPMType] = field(default_factory = UMAA.Common.Propulsion.PropulsiveEffortType)

    PropulsiveEffortVariant: UMAA.Common.Propulsion.PropulsiveEffortType = idl.case(UMAA.Common.Propulsion.PropulsionTypeEnum.PROPULSIVEEFFORT_D)
    PropulsiveRPMVariant: UMAA.Common.Propulsion.PropulsiveRPMType = idl.case(UMAA.Common.Propulsion.PropulsionTypeEnum.PROPULSIVERPM_D)

UMAA.Common.Propulsion.PropulsionTypeUnion = UMAA_Common_Propulsion_PropulsionTypeUnion

@idl.struct(
    type_annotations = [idl.type_name("UMAA::Common::Propulsion::PropulsionType")])
class UMAA_Common_Propulsion_PropulsionType:
    PropulsionTypeSubtypes: UMAA.Common.Propulsion.PropulsionTypeUnion = field(default_factory = UMAA.Common.Propulsion.PropulsionTypeUnion)

UMAA.Common.Propulsion.PropulsionType = UMAA_Common_Propulsion_PropulsionType
