
# WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

# This file was generated from GlobalWaypointExecutionStatusReportType.idl
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
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/Common/'))
from IdentifierType import *
sys.path.pop()
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/Common/Measurement/'))
from Measurements import *
sys.path.pop()

UMAA = idl.get_module("UMAA")

UMAA_MO = idl.get_module("UMAA_MO")

UMAA.MO = UMAA_MO

UMAA_MO_GlobalWaypointControl = idl.get_module("UMAA_MO_GlobalWaypointControl")

UMAA.MO.GlobalWaypointControl = UMAA_MO_GlobalWaypointControl

UMAA_MO_GlobalWaypointControl_GlobalWaypointExecutionStatusReportTypeTopic = "UMAA::MO::GlobalWaypointControl::GlobalWaypointExecutionStatusReportType"

UMAA.MO.GlobalWaypointControl.GlobalWaypointExecutionStatusReportTypeTopic = UMAA_MO_GlobalWaypointControl_GlobalWaypointExecutionStatusReportTypeTopic

@idl.struct(
    type_annotations = [idl.type_name("UMAA::MO::GlobalWaypointControl::GlobalWaypointExecutionStatusReportType")],
    member_annotations = {
        'source': [idl.key, ],
        'sessionID': [idl.key, ],
    }
)
class UMAA_MO_GlobalWaypointControl_GlobalWaypointExecutionStatusReportType:
    arrivalTime: UMAA.Common.Measurement.DateTime = field(default_factory = UMAA.Common.Measurement.DateTime)
    attitudeAchieved: Optional[bool] = None
    crossTrackError: Optional[float] = None
    cumulativeDistance: float = 0.0
    distanceRemaining: float = 0.0
    distanceToWaypoint: float = 0.0
    elevationAchieved: bool = False
    positionAchieved: bool = False
    speedAchieved: bool = False
    timeToWaypoint: UMAA.Common.Measurement.DateTime = field(default_factory = UMAA.Common.Measurement.DateTime)
    trackLineAchieved: bool = False
    waypointID: UMAA.Common.Measurement.NumericGUID = field(default_factory = UMAA.Common.Measurement.NumericGUID)
    waypointsRemaining: idl.int32 = 0
    timeStamp: UMAA.Common.Measurement.DateTime = field(default_factory = UMAA.Common.Measurement.DateTime)
    source: UMAA.Common.IdentifierType = field(default_factory = UMAA.Common.IdentifierType)
    sessionID: UMAA.Common.Measurement.NumericGUID = field(default_factory = UMAA.Common.Measurement.NumericGUID)

UMAA.MO.GlobalWaypointControl.GlobalWaypointExecutionStatusReportType = UMAA_MO_GlobalWaypointControl_GlobalWaypointExecutionStatusReportType
