
# WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

# This file was generated from RacetrackObjectiveType.idl
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
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/Common/Enumeration/'))
from EnumerationSets import *
sys.path.pop()
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/Common/'))
from IdentifierType import *
sys.path.pop()
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/Common/MaritimeEnumeration/'))
from MaritimeEnumerationSets import *
sys.path.pop()
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/Common/Measurement/'))
from ElevationRequirementVariantType import *
sys.path.pop()
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/Common/Measurement/'))
from ElevationVariantType import *
sys.path.pop()
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/Common/Measurement/'))
from GeoPosition2D import *
sys.path.pop()
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/Common/Measurement/'))
from Measurements import *
sys.path.pop()
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/Common/Orientation/'))
from DirectionVariantType import *
sys.path.pop()
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/Common/PrimitiveConstrained/'))
from ConstrainedTypes import *
sys.path.pop()
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/Common/Speed/'))
from SpeedRequirementVariantType import *
sys.path.pop()
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/Common/Speed/'))
from SpeedVariantType import *
sys.path.pop()
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/Common/Time/'))
from DateTimeRequirementType import *
sys.path.pop()
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/MM/BaseType/'))
from StateTriggerType import *
sys.path.pop()

UMAA = idl.get_module("UMAA")

UMAA_MM = idl.get_module("UMAA_MM")

UMAA.MM = UMAA_MM

UMAA_MM_BaseType = idl.get_module("UMAA_MM_BaseType")

UMAA.MM.BaseType = UMAA_MM_BaseType

UMAA_MM_BaseType_RacetrackObjectiveTypeTopic = "UMAA::MM::BaseType::RacetrackObjectiveType"

UMAA.MM.BaseType.RacetrackObjectiveTypeTopic = UMAA_MM_BaseType_RacetrackObjectiveTypeTopic

@idl.struct(
    type_annotations = [idl.type_name("UMAA::MM::BaseType::RacetrackObjectiveType")],
    member_annotations = {
        'specializationReferenceID': [idl.key, ],
    }
)
class UMAA_MM_BaseType_RacetrackObjectiveType:
    duration: Optional[float] = None
    elevation: Optional[UMAA.Common.Measurement.ElevationRequirementVariantType] = None
    length: float = 0.0
    loops: Optional[float] = None
    orientation: UMAA.Common.Orientation.DirectionVariantType = field(default_factory = UMAA.Common.Orientation.DirectionVariantType)
    position: Optional[UMAA.Common.Measurement.GeoPosition2D] = None
    radius: float = 0.0
    speed: UMAA.Common.Speed.SpeedRequirementVariantType = field(default_factory = UMAA.Common.Speed.SpeedRequirementVariantType)
    trackTolerance: UMAA.Common.Distance.DistanceRequirementType = field(default_factory = UMAA.Common.Distance.DistanceRequirementType)
    transitElevation: Optional[UMAA.Common.Measurement.ElevationVariantType] = None
    transitSpeed: UMAA.Common.Speed.SpeedVariantType = field(default_factory = UMAA.Common.Speed.SpeedVariantType)
    turnDirection: UMAA.Common.MaritimeEnumeration.WaterTurnDirectionEnumModule.WaterTurnDirectionEnumType = UMAA.Common.MaritimeEnumeration.WaterTurnDirectionEnumModule.WaterTurnDirectionEnumType.LEFT_TURN
    specializationReferenceTimestamp: UMAA.Common.Measurement.DateTime = field(default_factory = UMAA.Common.Measurement.DateTime)
    specializationReferenceID: UMAA.Common.Measurement.NumericGUID = field(default_factory = UMAA.Common.Measurement.NumericGUID)

UMAA.MM.BaseType.RacetrackObjectiveType = UMAA_MM_BaseType_RacetrackObjectiveType
