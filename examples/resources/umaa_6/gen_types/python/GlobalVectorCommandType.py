
# WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

# This file was generated from GlobalVectorCommandType.idl
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
from IdentifierType import *
sys.path.pop()
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/Common/MaritimeEnumeration/'))
from MaritimeEnumerationSets import *
sys.path.pop()
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/Common/Measurement/'))
from ElevationRequirementVariantType import *
sys.path.pop()
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/Common/Measurement/'))
from Measurements import *
sys.path.pop()
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/Common/Orientation/'))
from DirectionRequirementVariantType import *
sys.path.pop()
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/Common/Orientation/'))
from PitchYNEDRequirement import *
sys.path.pop()
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/Common/Speed/'))
from SpeedRequirementVariantType import *
sys.path.pop()

UMAA = idl.get_module("UMAA")

UMAA_MO = idl.get_module("UMAA_MO")

UMAA.MO = UMAA_MO

UMAA_MO_GlobalVectorControl = idl.get_module("UMAA_MO_GlobalVectorControl")

UMAA.MO.GlobalVectorControl = UMAA_MO_GlobalVectorControl

UMAA_MO_GlobalVectorControl_GlobalVectorCommandTypeTopic = "UMAA::MO::GlobalVectorControl::GlobalVectorCommandType"

UMAA.MO.GlobalVectorControl.GlobalVectorCommandTypeTopic = UMAA_MO_GlobalVectorControl_GlobalVectorCommandTypeTopic

@idl.struct(
    type_annotations = [idl.type_name("UMAA::MO::GlobalVectorControl::GlobalVectorCommandType")],
    member_annotations = {
        'source': [idl.key, ],
        'sessionID': [idl.key, ],
        'destination': [idl.key, ],
    }
)
class UMAA_MO_GlobalVectorControl_GlobalVectorCommandType:
    depthChangePitch: Optional[UMAA.Common.Orientation.PitchYNEDRequirement] = None
    direction: UMAA.Common.Orientation.DirectionRequirementVariantType = field(default_factory = UMAA.Common.Orientation.DirectionRequirementVariantType)
    directionMode: UMAA.Common.MaritimeEnumeration.DirectionModeEnumModule.DirectionModeEnumType = UMAA.Common.MaritimeEnumeration.DirectionModeEnumModule.DirectionModeEnumType.COURSE
    elevation: Optional[UMAA.Common.Measurement.ElevationRequirementVariantType] = None
    endTime: Optional[UMAA.Common.Measurement.DateTime] = None
    speed: UMAA.Common.Speed.SpeedRequirementVariantType = field(default_factory = UMAA.Common.Speed.SpeedRequirementVariantType)
    timeStamp: UMAA.Common.Measurement.DateTime = field(default_factory = UMAA.Common.Measurement.DateTime)
    source: UMAA.Common.IdentifierType = field(default_factory = UMAA.Common.IdentifierType)
    sessionID: UMAA.Common.Measurement.NumericGUID = field(default_factory = UMAA.Common.Measurement.NumericGUID)
    destination: UMAA.Common.IdentifierType = field(default_factory = UMAA.Common.IdentifierType)

UMAA.MO.GlobalVectorControl.GlobalVectorCommandType = UMAA_MO_GlobalVectorControl_GlobalVectorCommandType
