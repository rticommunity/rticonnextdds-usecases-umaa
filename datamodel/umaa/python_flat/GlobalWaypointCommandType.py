
# WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

# This file was generated from GlobalWaypointCommandType.idl
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
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/Common/'))
from IdentifierType import *
sys.path.pop()
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/Common/Measurement/'))
from Measurements import *
sys.path.pop()
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/MO/GlobalWaypointControl/'))
from GlobalWaypointType import *
sys.path.pop()

UMAA = idl.get_module("UMAA")

UMAA_MO = idl.get_module("UMAA_MO")

UMAA.MO = UMAA_MO

UMAA_MO_GlobalWaypointControl = idl.get_module("UMAA_MO_GlobalWaypointControl")

UMAA.MO.GlobalWaypointControl = UMAA_MO_GlobalWaypointControl

UMAA_MO_GlobalWaypointControl_GlobalWaypointCommandTypeTopic = "UMAA::MO::GlobalWaypointControl::GlobalWaypointCommandType"

UMAA.MO.GlobalWaypointControl.GlobalWaypointCommandTypeTopic = UMAA_MO_GlobalWaypointControl_GlobalWaypointCommandTypeTopic

@idl.struct(
    type_annotations = [idl.type_name("UMAA::MO::GlobalWaypointControl::GlobalWaypointCommandType")],
    member_annotations = {
        'source': [idl.key, ],
        'sessionID': [idl.key, ],
        'destination': [idl.key, ],
    }
)
class UMAA_MO_GlobalWaypointControl_GlobalWaypointCommandType:
    timeStamp: UMAA.Common.Measurement.DateTime = field(default_factory = UMAA.Common.Measurement.DateTime)
    source: UMAA.Common.IdentifierType = field(default_factory = UMAA.Common.IdentifierType)
    sessionID: UMAA.Common.Measurement.NumericGUID = field(default_factory = UMAA.Common.Measurement.NumericGUID)
    destination: UMAA.Common.IdentifierType = field(default_factory = UMAA.Common.IdentifierType)
    waypointsListMetadata: UMAA.Common.LargeListMetadata = field(default_factory = UMAA.Common.LargeListMetadata)

UMAA.MO.GlobalWaypointControl.GlobalWaypointCommandType = UMAA_MO_GlobalWaypointControl_GlobalWaypointCommandType

UMAA_MO_GlobalWaypointControl_GlobalWaypointCommandTypeWaypointsListElementTopic = "UMAA::MO::GlobalWaypointControl::GlobalWaypointCommandTypeWaypointsListElement"

UMAA.MO.GlobalWaypointControl.GlobalWaypointCommandTypeWaypointsListElementTopic = UMAA_MO_GlobalWaypointControl_GlobalWaypointCommandTypeWaypointsListElementTopic

@idl.struct(
    type_annotations = [idl.type_name("UMAA::MO::GlobalWaypointControl::GlobalWaypointCommandTypeWaypointsListElement")],
    member_annotations = {
        'listID': [idl.key, ],
        'elementID': [idl.key, ],
    }
)
class UMAA_MO_GlobalWaypointControl_GlobalWaypointCommandTypeWaypointsListElement:
    element: UMAA.MO.GlobalWaypointControl.GlobalWaypointType = field(default_factory = UMAA.MO.GlobalWaypointControl.GlobalWaypointType)
    listID: UMAA.Common.Measurement.NumericGUID = field(default_factory = UMAA.Common.Measurement.NumericGUID)
    elementID: UMAA.Common.Measurement.NumericGUID = field(default_factory = UMAA.Common.Measurement.NumericGUID)
    elementTimestamp: UMAA.Common.Measurement.DateTime = field(default_factory = UMAA.Common.Measurement.DateTime)
    nextElementID: Optional[UMAA.Common.Measurement.NumericGUID] = None

UMAA.MO.GlobalWaypointControl.GlobalWaypointCommandTypeWaypointsListElement = UMAA_MO_GlobalWaypointControl_GlobalWaypointCommandTypeWaypointsListElement
