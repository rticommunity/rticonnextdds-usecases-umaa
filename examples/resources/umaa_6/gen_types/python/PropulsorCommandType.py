
# WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

# This file was generated from PropulsorCommandType.idl
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

sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/Common/Angle/'))
from GammaAnglePropulsorRequirementType import *
sys.path.pop()
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/Common/Angle/'))
from PropellerPitchAnglePropulsorRequirementType import *
sys.path.pop()
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/Common/Angle/'))
from RhoAnglePropulsorRequirementType import *
sys.path.pop()
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/Common/'))
from IdentifierType import *
sys.path.pop()
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/Common/Speed/'))
from EngineRPMSpeedRequirement import *
sys.path.pop()

UMAA = idl.get_module("UMAA")

UMAA_EO = idl.get_module("UMAA_EO")

UMAA.EO = UMAA_EO

UMAA_EO_PropulsorsControl = idl.get_module("UMAA_EO_PropulsorsControl")

UMAA.EO.PropulsorsControl = UMAA_EO_PropulsorsControl

UMAA_EO_PropulsorsControl_PropulsorCommandTypeTopic = "UMAA::EO::PropulsorsControl::PropulsorCommandType"

UMAA.EO.PropulsorsControl.PropulsorCommandTypeTopic = UMAA_EO_PropulsorsControl_PropulsorCommandTypeTopic

@idl.struct(
    type_annotations = [idl.type_name("UMAA::EO::PropulsorsControl::PropulsorCommandType")],
    member_annotations = {
        'source': [idl.key, ],
        'sessionID': [idl.key, ],
        'destination': [idl.key, ],
    }
)
class UMAA_EO_PropulsorsControl_PropulsorCommandType:
    gamma: Optional[UMAA.Common.Angle.GammaAnglePropulsorRequirementType] = None
    propellerPitch: Optional[UMAA.Common.Angle.PropellerPitchAnglePropulsorRequirementType] = None
    propulsion: UMAA.Common.Speed.EngineRPMSpeedRequirement = field(default_factory = UMAA.Common.Speed.EngineRPMSpeedRequirement)
    rho: Optional[UMAA.Common.Angle.RhoAnglePropulsorRequirementType] = None
    timeStamp: UMAA.Common.Measurement.DateTime = field(default_factory = UMAA.Common.Measurement.DateTime)
    source: UMAA.Common.IdentifierType = field(default_factory = UMAA.Common.IdentifierType)
    sessionID: UMAA.Common.Measurement.NumericGUID = field(default_factory = UMAA.Common.Measurement.NumericGUID)
    destination: UMAA.Common.IdentifierType = field(default_factory = UMAA.Common.IdentifierType)

UMAA.EO.PropulsorsControl.PropulsorCommandType = UMAA_EO_PropulsorsControl_PropulsorCommandType
