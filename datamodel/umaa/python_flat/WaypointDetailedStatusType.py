
# WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

# This file was generated from WaypointDetailedStatusType.idl
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

sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/Common/MaritimeEnumeration/'))
from MaritimeEnumerationSets import *
sys.path.pop()
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/Common/Measurement/'))
from Measurements import *
sys.path.pop()
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/Common/PrimitiveConstrained/'))
from ConstrainedTypes import *
sys.path.pop()

UMAA = idl.get_module("UMAA")

UMAA_MM = idl.get_module("UMAA_MM")

UMAA.MM = UMAA_MM

UMAA_MM_BaseType = idl.get_module("UMAA_MM_BaseType")

UMAA.MM.BaseType = UMAA_MM_BaseType

@idl.struct(
    type_annotations = [idl.type_name("UMAA::MM::BaseType::WaypointDetailedStatusType")],
    member_annotations = {
        'errors': [idl.bound(1023)],
        'feedback': [idl.bound(1023)],
        'warnings': [idl.bound(1023)],
    }
)
class UMAA_MM_BaseType_WaypointDetailedStatusType:
    avgCrossTrackError: Optional[float] = None
    avgSpeed: Optional[float] = None
    errors: str = ""
    feedback: str = ""
    maxCrossTrackError: Optional[float] = None
    maxSpeed: Optional[float] = None
    state: UMAA.Common.MaritimeEnumeration.WaypointStateEnumModule.WaypointStateEnumType = UMAA.Common.MaritimeEnumeration.WaypointStateEnumModule.WaypointStateEnumType.ACHIEVED
    warnings: str = ""
    waypointID: UMAA.Common.Measurement.NumericGUID = field(default_factory = UMAA.Common.Measurement.NumericGUID)

UMAA.MM.BaseType.WaypointDetailedStatusType = UMAA_MM_BaseType_WaypointDetailedStatusType