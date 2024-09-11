
# WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

# This file was generated from GlobalWaypointType.idl
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

sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/Common/Distance/'))
from DistanceRequirementType import *
sys.path.pop()
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/Common/Measurement/'))
from ElevationRequirementVariantType import *
sys.path.pop()
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/Common/Measurement/'))
from Measurements import *
sys.path.pop()
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/Common/Orientation/'))
from Orientation3DNEDRequirement import *
sys.path.pop()
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/Common/Position/'))
from GeoPosition2DRequirement import *
sys.path.pop()
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/Common/PrimitiveConstrained/'))
from ConstrainedTypes import *
sys.path.pop()
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/Common/Speed/'))
from VariableSpeedVariantType import *
sys.path.pop()

UMAA = idl.get_module("UMAA")

UMAA_MO = idl.get_module("UMAA_MO")

UMAA.MO = UMAA_MO

UMAA_MO_GlobalWaypointControl = idl.get_module("UMAA_MO_GlobalWaypointControl")

UMAA.MO.GlobalWaypointControl = UMAA_MO_GlobalWaypointControl

@idl.struct(
    type_annotations = [idl.type_name("UMAA::MO::GlobalWaypointControl::GlobalWaypointType")],
    member_annotations = {
        'name': [idl.bound(1023)],
    }
)
class UMAA_MO_GlobalWaypointControl_GlobalWaypointType:
    attitude: Optional[UMAA.Common.Orientation.Orientation3DNEDRequirement] = None
    elevation: Optional[UMAA.Common.Measurement.ElevationRequirementVariantType] = None
    name: Optional[str] = None
    position: UMAA.Common.Position.GeoPosition2DRequirement = field(default_factory = UMAA.Common.Position.GeoPosition2DRequirement)
    speed: UMAA.Common.Speed.VariableSpeedVariantType = field(default_factory = UMAA.Common.Speed.VariableSpeedVariantType)
    trackTolerance: Optional[UMAA.Common.Distance.DistanceRequirementType] = None
    waypointID: UMAA.Common.Measurement.NumericGUID = field(default_factory = UMAA.Common.Measurement.NumericGUID)

UMAA.MO.GlobalWaypointControl.GlobalWaypointType = UMAA_MO_GlobalWaypointControl_GlobalWaypointType
