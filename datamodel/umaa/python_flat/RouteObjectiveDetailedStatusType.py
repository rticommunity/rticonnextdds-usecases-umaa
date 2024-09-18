
# WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

# This file was generated from RouteObjectiveDetailedStatusType.idl
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

sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/Common/'))
from LargeSetMetadata import *
sys.path.pop()
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/Common/Enumeration/'))
from EnumerationSets import *
sys.path.pop()
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/Common/MaritimeEnumeration/'))
from MaritimeEnumerationSets import *
sys.path.pop()
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/Common/Measurement/'))
from Measurements import *
sys.path.pop()
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/Common/PrimitiveConstrained/'))
from ConstrainedTypes import *
sys.path.pop()
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/Common/Speed/'))
from SpeedVariantType import *
sys.path.pop()
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/MM/BaseType/'))
from WaypointDetailedStatusType import *
sys.path.pop()

UMAA = idl.get_module("UMAA")

UMAA_MM = idl.get_module("UMAA_MM")

UMAA.MM = UMAA_MM

UMAA_MM_BaseType = idl.get_module("UMAA_MM_BaseType")

UMAA.MM.BaseType = UMAA_MM_BaseType

UMAA_MM_BaseType_RouteObjectiveDetailedStatusTypeTopic = "UMAA::MM::BaseType::RouteObjectiveDetailedStatusType"

UMAA.MM.BaseType.RouteObjectiveDetailedStatusTypeTopic = UMAA_MM_BaseType_RouteObjectiveDetailedStatusTypeTopic

@idl.struct(
    type_annotations = [idl.type_name("UMAA::MM::BaseType::RouteObjectiveDetailedStatusType")],
    member_annotations = {
        'specializationReferenceID': [idl.key, ],
    }
)
class UMAA_MM_BaseType_RouteObjectiveDetailedStatusType:
    crossTrackError: Optional[float] = None
    currentWaypointID: UMAA.Common.Measurement.NumericGUID = field(default_factory = UMAA.Common.Measurement.NumericGUID)
    distanceRemaining: float = 0.0
    distanceToWaypoint: float = 0.0
    isCrossTrackLimitAchieved: Optional[bool] = None
    speedToWaypoint: UMAA.Common.Speed.SpeedVariantType = field(default_factory = UMAA.Common.Speed.SpeedVariantType)
    specializationReferenceTimestamp: UMAA.Common.Measurement.DateTime = field(default_factory = UMAA.Common.Measurement.DateTime)
    specializationReferenceID: UMAA.Common.Measurement.NumericGUID = field(default_factory = UMAA.Common.Measurement.NumericGUID)
    waypointDetailedStatusSetMetadata: UMAA.Common.LargeSetMetadata = field(default_factory = UMAA.Common.LargeSetMetadata)

UMAA.MM.BaseType.RouteObjectiveDetailedStatusType = UMAA_MM_BaseType_RouteObjectiveDetailedStatusType

UMAA_MM_BaseType_RouteObjectiveDetailedStatusTypeWaypointDetailedStatusSetElementTopic = "UMAA::MM::BaseType::RouteObjectiveDetailedStatusTypeWaypointDetailedStatusSetElement"

UMAA.MM.BaseType.RouteObjectiveDetailedStatusTypeWaypointDetailedStatusSetElementTopic = UMAA_MM_BaseType_RouteObjectiveDetailedStatusTypeWaypointDetailedStatusSetElementTopic

@idl.struct(
    type_annotations = [idl.type_name("UMAA::MM::BaseType::RouteObjectiveDetailedStatusTypeWaypointDetailedStatusSetElement")],
    member_annotations = {
        'setID': [idl.key, ],
        'elementID': [idl.key, ],
    }
)
class UMAA_MM_BaseType_RouteObjectiveDetailedStatusTypeWaypointDetailedStatusSetElement:
    element: UMAA.MM.BaseType.WaypointDetailedStatusType = field(default_factory = UMAA.MM.BaseType.WaypointDetailedStatusType)
    setID: UMAA.Common.Measurement.NumericGUID = field(default_factory = UMAA.Common.Measurement.NumericGUID)
    elementID: UMAA.Common.Measurement.NumericGUID = field(default_factory = UMAA.Common.Measurement.NumericGUID)
    elementTimestamp: UMAA.Common.Measurement.DateTime = field(default_factory = UMAA.Common.Measurement.DateTime)

UMAA.MM.BaseType.RouteObjectiveDetailedStatusTypeWaypointDetailedStatusSetElement = UMAA_MM_BaseType_RouteObjectiveDetailedStatusTypeWaypointDetailedStatusSetElement
