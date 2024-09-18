
# WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

# This file was generated from ShapeVariantType.idl
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

sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/MM/BaseType/'))
from EllipseVariantType import *
sys.path.pop()
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/MM/BaseType/'))
from PolygonVariantType import *
sys.path.pop()

UMAA = idl.get_module("UMAA")

UMAA_MM = idl.get_module("UMAA_MM")

UMAA.MM = UMAA_MM

UMAA_MM_BaseType = idl.get_module("UMAA_MM_BaseType")

UMAA.MM.BaseType = UMAA_MM_BaseType

@idl.enum
class UMAA_MM_BaseType_ShapeVariantTypeEnum(IntEnum):
    ELLIPSEVARIANT_D = 0
    POLYGONVARIANT_D = 1

UMAA.MM.BaseType.ShapeVariantTypeEnum = UMAA_MM_BaseType_ShapeVariantTypeEnum

@idl.union(
    type_annotations = [idl.type_name("UMAA::MM::BaseType::ShapeVariantTypeUnion")])
class UMAA_MM_BaseType_ShapeVariantTypeUnion:

    discriminator: UMAA.MM.BaseType.ShapeVariantTypeEnum = UMAA.MM.BaseType.ShapeVariantTypeEnum.ELLIPSEVARIANT_D
    value: Union[UMAA.MM.BaseType.EllipseVariantType, UMAA.MM.BaseType.PolygonVariantType] = field(default_factory = UMAA.MM.BaseType.EllipseVariantType)

    EllipseVariantVariant: UMAA.MM.BaseType.EllipseVariantType = idl.case(UMAA.MM.BaseType.ShapeVariantTypeEnum.ELLIPSEVARIANT_D)
    PolygonVariantVariant: UMAA.MM.BaseType.PolygonVariantType = idl.case(UMAA.MM.BaseType.ShapeVariantTypeEnum.POLYGONVARIANT_D)

UMAA.MM.BaseType.ShapeVariantTypeUnion = UMAA_MM_BaseType_ShapeVariantTypeUnion

@idl.struct(
    type_annotations = [idl.type_name("UMAA::MM::BaseType::ShapeVariantType")])
class UMAA_MM_BaseType_ShapeVariantType:
    ShapeVariantTypeSubtypes: UMAA.MM.BaseType.ShapeVariantTypeUnion = field(default_factory = UMAA.MM.BaseType.ShapeVariantTypeUnion)

UMAA.MM.BaseType.ShapeVariantType = UMAA_MM_BaseType_ShapeVariantType
