
# WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

# This file was generated from DirectionVariantType.idl
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
from DirectionCurrentVariantType import *
sys.path.pop()
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/Common/Orientation/'))
from DirectionMagneticNorthVariantType import *
sys.path.pop()
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/Common/Orientation/'))
from DirectionTrueNorthVariantType import *
sys.path.pop()
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/Common/Orientation/'))
from DirectionWindVariantType import *
sys.path.pop()

UMAA = idl.get_module("UMAA")

UMAA_Common = idl.get_module("UMAA_Common")

UMAA.Common = UMAA_Common

UMAA_Common_Orientation = idl.get_module("UMAA_Common_Orientation")

UMAA.Common.Orientation = UMAA_Common_Orientation

@idl.enum
class UMAA_Common_Orientation_DirectionVariantTypeEnum(IntEnum):
    DIRECTIONCURRENTVARIANT_D = 0
    DIRECTIONMAGNETICNORTHVARIANT_D = 1
    DIRECTIONTRUENORTHVARIANT_D = 2
    DIRECTIONWINDVARIANT_D = 3

UMAA.Common.Orientation.DirectionVariantTypeEnum = UMAA_Common_Orientation_DirectionVariantTypeEnum

@idl.union(
    type_annotations = [idl.type_name("UMAA::Common::Orientation::DirectionVariantTypeUnion")])
class UMAA_Common_Orientation_DirectionVariantTypeUnion:

    discriminator: UMAA.Common.Orientation.DirectionVariantTypeEnum = UMAA.Common.Orientation.DirectionVariantTypeEnum.DIRECTIONCURRENTVARIANT_D
    value: Union[UMAA.Common.Orientation.DirectionCurrentVariantType, UMAA.Common.Orientation.DirectionMagneticNorthVariantType, UMAA.Common.Orientation.DirectionTrueNorthVariantType, UMAA.Common.Orientation.DirectionWindVariantType] = field(default_factory = UMAA.Common.Orientation.DirectionCurrentVariantType)

    DirectionCurrentVariantVariant: UMAA.Common.Orientation.DirectionCurrentVariantType = idl.case(UMAA.Common.Orientation.DirectionVariantTypeEnum.DIRECTIONCURRENTVARIANT_D)
    DirectionMagneticNorthVariantVariant: UMAA.Common.Orientation.DirectionMagneticNorthVariantType = idl.case(UMAA.Common.Orientation.DirectionVariantTypeEnum.DIRECTIONMAGNETICNORTHVARIANT_D)
    DirectionTrueNorthVariantVariant: UMAA.Common.Orientation.DirectionTrueNorthVariantType = idl.case(UMAA.Common.Orientation.DirectionVariantTypeEnum.DIRECTIONTRUENORTHVARIANT_D)
    DirectionWindVariantVariant: UMAA.Common.Orientation.DirectionWindVariantType = idl.case(UMAA.Common.Orientation.DirectionVariantTypeEnum.DIRECTIONWINDVARIANT_D)

UMAA.Common.Orientation.DirectionVariantTypeUnion = UMAA_Common_Orientation_DirectionVariantTypeUnion

@idl.struct(
    type_annotations = [idl.type_name("UMAA::Common::Orientation::DirectionVariantType")])
class UMAA_Common_Orientation_DirectionVariantType:
    DirectionVariantTypeSubtypes: UMAA.Common.Orientation.DirectionVariantTypeUnion = field(default_factory = UMAA.Common.Orientation.DirectionVariantTypeUnion)

UMAA.Common.Orientation.DirectionVariantType = UMAA_Common_Orientation_DirectionVariantType
