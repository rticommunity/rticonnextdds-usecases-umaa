
# WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

# This file was generated from PolygonVariantType.idl
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

sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/Common/Enumeration/'))
from EnumerationSets import *
sys.path.pop()
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/Common/Measurement/'))
from GeoPosition2D import *
sys.path.pop()

UMAA = idl.get_module("UMAA")

UMAA_MM = idl.get_module("UMAA_MM")

UMAA.MM = UMAA_MM

UMAA_MM_BaseType = idl.get_module("UMAA_MM_BaseType")

UMAA.MM.BaseType = UMAA_MM_BaseType

@idl.struct(
    type_annotations = [idl.type_name("UMAA::MM::BaseType::PolygonVariantType")],
    member_annotations = {
        'referencePoints': [idl.bound(128)],
    }
)
class UMAA_MM_BaseType_PolygonVariantType:
    lineKind: UMAA.Common.Enumeration.LineSegmentEnumModule.LineSegmentEnumType = UMAA.Common.Enumeration.LineSegmentEnumModule.LineSegmentEnumType.GREAT_CIRCLE
    referencePoints: Sequence[UMAA.Common.Measurement.GeoPosition2D] = field(default_factory = list)

UMAA.MM.BaseType.PolygonVariantType = UMAA_MM_BaseType_PolygonVariantType
