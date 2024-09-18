
# WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

# This file was generated from BearingSectorVariantType.idl
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
from BearingSectorGuideCourseVariantType import *
sys.path.pop()
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/Common/Orientation/'))
from BearingSectorMagneticNorthVariantType import *
sys.path.pop()
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/Common/Orientation/'))
from BearingSectorTrueNorthVariantType import *
sys.path.pop()

UMAA = idl.get_module("UMAA")

UMAA_Common = idl.get_module("UMAA_Common")

UMAA.Common = UMAA_Common

UMAA_Common_Orientation = idl.get_module("UMAA_Common_Orientation")

UMAA.Common.Orientation = UMAA_Common_Orientation

@idl.enum
class UMAA_Common_Orientation_BearingSectorVariantTypeEnum(IntEnum):
    BEARINGSECTORGUIDECOURSEVARIANT_D = 0
    BEARINGSECTORMAGNETICNORTHVARIANT_D = 1
    BEARINGSECTORTRUENORTHVARIANT_D = 2

UMAA.Common.Orientation.BearingSectorVariantTypeEnum = UMAA_Common_Orientation_BearingSectorVariantTypeEnum

@idl.union(
    type_annotations = [idl.type_name("UMAA::Common::Orientation::BearingSectorVariantTypeUnion")])
class UMAA_Common_Orientation_BearingSectorVariantTypeUnion:

    discriminator: UMAA.Common.Orientation.BearingSectorVariantTypeEnum = UMAA.Common.Orientation.BearingSectorVariantTypeEnum.BEARINGSECTORGUIDECOURSEVARIANT_D
    value: Union[UMAA.Common.Orientation.BearingSectorGuideCourseVariantType, UMAA.Common.Orientation.BearingSectorMagneticNorthVariantType, UMAA.Common.Orientation.BearingSectorTrueNorthVariantType] = field(default_factory = UMAA.Common.Orientation.BearingSectorGuideCourseVariantType)

    BearingSectorGuideCourseVariantVariant: UMAA.Common.Orientation.BearingSectorGuideCourseVariantType = idl.case(UMAA.Common.Orientation.BearingSectorVariantTypeEnum.BEARINGSECTORGUIDECOURSEVARIANT_D)
    BearingSectorMagneticNorthVariantVariant: UMAA.Common.Orientation.BearingSectorMagneticNorthVariantType = idl.case(UMAA.Common.Orientation.BearingSectorVariantTypeEnum.BEARINGSECTORMAGNETICNORTHVARIANT_D)
    BearingSectorTrueNorthVariantVariant: UMAA.Common.Orientation.BearingSectorTrueNorthVariantType = idl.case(UMAA.Common.Orientation.BearingSectorVariantTypeEnum.BEARINGSECTORTRUENORTHVARIANT_D)

UMAA.Common.Orientation.BearingSectorVariantTypeUnion = UMAA_Common_Orientation_BearingSectorVariantTypeUnion

@idl.struct(
    type_annotations = [idl.type_name("UMAA::Common::Orientation::BearingSectorVariantType")])
class UMAA_Common_Orientation_BearingSectorVariantType:
    BearingSectorVariantTypeSubtypes: UMAA.Common.Orientation.BearingSectorVariantTypeUnion = field(default_factory = UMAA.Common.Orientation.BearingSectorVariantTypeUnion)

UMAA.Common.Orientation.BearingSectorVariantType = UMAA_Common_Orientation_BearingSectorVariantType
