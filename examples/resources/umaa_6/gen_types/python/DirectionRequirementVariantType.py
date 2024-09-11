
# WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

# This file was generated from DirectionRequirementVariantType.idl
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

sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/Common/Orientation/'))
from DirectionCurrentRequirementVariantType import *
sys.path.pop()
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/Common/Orientation/'))
from DirectionMagneticNorthRequirementVariantType import *
sys.path.pop()
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/Common/Orientation/'))
from DirectionTrueNorthRequirementVariantType import *
sys.path.pop()
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/Common/Orientation/'))
from DirectionTurnRateRequirementVariantType import *
sys.path.pop()
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/Common/Orientation/'))
from DirectionWindRequirementVariantType import *
sys.path.pop()

UMAA = idl.get_module("UMAA")

UMAA_Common = idl.get_module("UMAA_Common")

UMAA.Common = UMAA_Common

UMAA_Common_Orientation = idl.get_module("UMAA_Common_Orientation")

UMAA.Common.Orientation = UMAA_Common_Orientation

@idl.enum
class UMAA_Common_Orientation_DirectionRequirementVariantTypeEnum(IntEnum):
    DIRECTIONCURRENTREQUIREMENTVARIANT_D = 0
    DIRECTIONMAGNETICNORTHREQUIREMENTVARIANT_D = 1
    DIRECTIONTRUENORTHREQUIREMENTVARIANT_D = 2
    DIRECTIONTURNRATEREQUIREMENTVARIANT_D = 3
    DIRECTIONWINDREQUIREMENTVARIANT_D = 4

UMAA.Common.Orientation.DirectionRequirementVariantTypeEnum = UMAA_Common_Orientation_DirectionRequirementVariantTypeEnum

@idl.union(
    type_annotations = [idl.type_name("UMAA::Common::Orientation::DirectionRequirementVariantTypeUnion")])
class UMAA_Common_Orientation_DirectionRequirementVariantTypeUnion:

    discriminator: UMAA.Common.Orientation.DirectionRequirementVariantTypeEnum = UMAA.Common.Orientation.DirectionRequirementVariantTypeEnum.DIRECTIONCURRENTREQUIREMENTVARIANT_D
    value: Union[UMAA.Common.Orientation.DirectionCurrentRequirementVariantType, UMAA.Common.Orientation.DirectionMagneticNorthRequirementVariantType, UMAA.Common.Orientation.DirectionTrueNorthRequirementVariantType, UMAA.Common.Orientation.DirectionTurnRateRequirementVariantType, UMAA.Common.Orientation.DirectionWindRequirementVariantType] = field(default_factory = UMAA.Common.Orientation.DirectionCurrentRequirementVariantType)

    DirectionCurrentRequirementVariantVariant: UMAA.Common.Orientation.DirectionCurrentRequirementVariantType = idl.case(UMAA.Common.Orientation.DirectionRequirementVariantTypeEnum.DIRECTIONCURRENTREQUIREMENTVARIANT_D)
    DirectionMagneticNorthRequirementVariantVariant: UMAA.Common.Orientation.DirectionMagneticNorthRequirementVariantType = idl.case(UMAA.Common.Orientation.DirectionRequirementVariantTypeEnum.DIRECTIONMAGNETICNORTHREQUIREMENTVARIANT_D)
    DirectionTrueNorthRequirementVariantVariant: UMAA.Common.Orientation.DirectionTrueNorthRequirementVariantType = idl.case(UMAA.Common.Orientation.DirectionRequirementVariantTypeEnum.DIRECTIONTRUENORTHREQUIREMENTVARIANT_D)
    DirectionTurnRateRequirementVariantVariant: UMAA.Common.Orientation.DirectionTurnRateRequirementVariantType = idl.case(UMAA.Common.Orientation.DirectionRequirementVariantTypeEnum.DIRECTIONTURNRATEREQUIREMENTVARIANT_D)
    DirectionWindRequirementVariantVariant: UMAA.Common.Orientation.DirectionWindRequirementVariantType = idl.case(UMAA.Common.Orientation.DirectionRequirementVariantTypeEnum.DIRECTIONWINDREQUIREMENTVARIANT_D)

UMAA.Common.Orientation.DirectionRequirementVariantTypeUnion = UMAA_Common_Orientation_DirectionRequirementVariantTypeUnion

@idl.struct(
    type_annotations = [idl.type_name("UMAA::Common::Orientation::DirectionRequirementVariantType")])
class UMAA_Common_Orientation_DirectionRequirementVariantType:
    DirectionRequirementVariantTypeSubtypes: UMAA.Common.Orientation.DirectionRequirementVariantTypeUnion = field(default_factory = UMAA.Common.Orientation.DirectionRequirementVariantTypeUnion)

UMAA.Common.Orientation.DirectionRequirementVariantType = UMAA_Common_Orientation_DirectionRequirementVariantType
