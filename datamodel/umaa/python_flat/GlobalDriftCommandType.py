
# WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

# This file was generated from GlobalDriftCommandType.idl
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
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/Common/'))
from IdentifierType import *
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
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/Common/Speed/'))
from SpeedVariantType import *
sys.path.pop()

UMAA = idl.get_module("UMAA")

UMAA_MO = idl.get_module("UMAA_MO")

UMAA.MO = UMAA_MO

UMAA_MO_GlobalDriftControl = idl.get_module("UMAA_MO_GlobalDriftControl")

UMAA.MO.GlobalDriftControl = UMAA_MO_GlobalDriftControl

UMAA_MO_GlobalDriftControl_GlobalDriftCommandTypeTopic = "UMAA::MO::GlobalDriftControl::GlobalDriftCommandType"

UMAA.MO.GlobalDriftControl.GlobalDriftCommandTypeTopic = UMAA_MO_GlobalDriftControl_GlobalDriftCommandTypeTopic

@idl.struct(
    type_annotations = [idl.type_name("UMAA::MO::GlobalDriftControl::GlobalDriftCommandType")],
    member_annotations = {
        'source': [idl.key, ],
        'sessionID': [idl.key, ],
        'destination': [idl.key, ],
    }
)
class UMAA_MO_GlobalDriftControl_GlobalDriftCommandType:
    driftRadius: UMAA.Common.Distance.DistanceRequirementType = field(default_factory = UMAA.Common.Distance.DistanceRequirementType)
    elevation: Optional[UMAA.Common.Measurement.ElevationRequirementVariantType] = None
    endTime: Optional[UMAA.Common.Measurement.DateTime] = None
    position: UMAA.Common.Measurement.GeoPosition2D = field(default_factory = UMAA.Common.Measurement.GeoPosition2D)
    speed: UMAA.Common.Speed.SpeedVariantType = field(default_factory = UMAA.Common.Speed.SpeedVariantType)
    transitElevation: Optional[UMAA.Common.Measurement.ElevationVariantType] = None
    transitSpeed: UMAA.Common.Speed.SpeedVariantType = field(default_factory = UMAA.Common.Speed.SpeedVariantType)
    timeStamp: UMAA.Common.Measurement.DateTime = field(default_factory = UMAA.Common.Measurement.DateTime)
    source: UMAA.Common.IdentifierType = field(default_factory = UMAA.Common.IdentifierType)
    sessionID: UMAA.Common.Measurement.NumericGUID = field(default_factory = UMAA.Common.Measurement.NumericGUID)
    destination: UMAA.Common.IdentifierType = field(default_factory = UMAA.Common.IdentifierType)

UMAA.MO.GlobalDriftControl.GlobalDriftCommandType = UMAA_MO_GlobalDriftControl_GlobalDriftCommandType
