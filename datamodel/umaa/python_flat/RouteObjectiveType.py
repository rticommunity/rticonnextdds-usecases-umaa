
# WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

# This file was generated from RouteObjectiveType.idl
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
from LargeListMetadata import *
sys.path.pop()
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/Common/Enumeration/'))
from EnumerationSets import *
sys.path.pop()
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/Common/'))
from IdentifierType import *
sys.path.pop()
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/Common/Measurement/'))
from Measurements import *
sys.path.pop()
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/Common/PrimitiveConstrained/'))
from ConstrainedTypes import *
sys.path.pop()
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/Common/Time/'))
from DateTimeRequirementType import *
sys.path.pop()
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/MM/BaseType/'))
from StateTriggerType import *
sys.path.pop()
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/MM/BaseType/'))
from WaypointType import *
sys.path.pop()

UMAA = idl.get_module("UMAA")

UMAA_MM = idl.get_module("UMAA_MM")

UMAA.MM = UMAA_MM

UMAA_MM_BaseType = idl.get_module("UMAA_MM_BaseType")

UMAA.MM.BaseType = UMAA_MM_BaseType

UMAA_MM_BaseType_RouteObjectiveTypeTopic = "UMAA::MM::BaseType::RouteObjectiveType"

UMAA.MM.BaseType.RouteObjectiveTypeTopic = UMAA_MM_BaseType_RouteObjectiveTypeTopic

@idl.struct(
    type_annotations = [idl.type_name("UMAA::MM::BaseType::RouteObjectiveType")],
    member_annotations = {
        'routeDescription': [idl.bound(1023)],
        'specializationReferenceID': [idl.key, ],
    }
)
class UMAA_MM_BaseType_RouteObjectiveType:
    routeDescription: str = ""
    specializationReferenceTimestamp: UMAA.Common.Measurement.DateTime = field(default_factory = UMAA.Common.Measurement.DateTime)
    specializationReferenceID: UMAA.Common.Measurement.NumericGUID = field(default_factory = UMAA.Common.Measurement.NumericGUID)
    waypointsListMetadata: UMAA.Common.LargeListMetadata = field(default_factory = UMAA.Common.LargeListMetadata)

UMAA.MM.BaseType.RouteObjectiveType = UMAA_MM_BaseType_RouteObjectiveType

UMAA_MM_BaseType_RouteObjectiveTypeWaypointsListElementTopic = "UMAA::MM::BaseType::RouteObjectiveTypeWaypointsListElement"

UMAA.MM.BaseType.RouteObjectiveTypeWaypointsListElementTopic = UMAA_MM_BaseType_RouteObjectiveTypeWaypointsListElementTopic

@idl.struct(
    type_annotations = [idl.type_name("UMAA::MM::BaseType::RouteObjectiveTypeWaypointsListElement")],
    member_annotations = {
        'listID': [idl.key, ],
        'elementID': [idl.key, ],
    }
)
class UMAA_MM_BaseType_RouteObjectiveTypeWaypointsListElement:
    element: UMAA.MM.BaseType.WaypointType = field(default_factory = UMAA.MM.BaseType.WaypointType)
    listID: UMAA.Common.Measurement.NumericGUID = field(default_factory = UMAA.Common.Measurement.NumericGUID)
    elementID: UMAA.Common.Measurement.NumericGUID = field(default_factory = UMAA.Common.Measurement.NumericGUID)
    elementTimestamp: UMAA.Common.Measurement.DateTime = field(default_factory = UMAA.Common.Measurement.DateTime)
    nextElementID: Optional[UMAA.Common.Measurement.NumericGUID] = None

UMAA.MM.BaseType.RouteObjectiveTypeWaypointsListElement = UMAA_MM_BaseType_RouteObjectiveTypeWaypointsListElement
