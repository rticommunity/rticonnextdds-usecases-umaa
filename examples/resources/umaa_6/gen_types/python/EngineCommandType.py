
# WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

# This file was generated from EngineCommandType.idl
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
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/Common/MaritimeEnumeration/'))
from MaritimeEnumerationSets import *
sys.path.pop()
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/Common/Measurement/'))
from Measurements import *
sys.path.pop()
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/Common/Propulsion/'))
from PropulsionType import *
sys.path.pop()

UMAA = idl.get_module("UMAA")

UMAA_EO = idl.get_module("UMAA_EO")

UMAA.EO = UMAA_EO

UMAA_EO_EngineControl = idl.get_module("UMAA_EO_EngineControl")

UMAA.EO.EngineControl = UMAA_EO_EngineControl

UMAA_EO_EngineControl_EngineCommandTypeTopic = "UMAA::EO::EngineControl::EngineCommandType"

UMAA.EO.EngineControl.EngineCommandTypeTopic = UMAA_EO_EngineControl_EngineCommandTypeTopic

@idl.struct(
    type_annotations = [idl.type_name("UMAA::EO::EngineControl::EngineCommandType")],
    member_annotations = {
        'source': [idl.key, ],
        'sessionID': [idl.key, ],
        'destination': [idl.key, ],
    }
)
class UMAA_EO_EngineControl_EngineCommandType:
    plugState: Optional[UMAA.Common.Enumeration.OnOffStatusEnumModule.OnOffStatusEnumType] = None
    propulsion: Optional[UMAA.Common.Propulsion.PropulsionType] = None
    state: UMAA.Common.MaritimeEnumeration.IgnitionControlEnumModule.IgnitionControlEnumType = UMAA.Common.MaritimeEnumeration.IgnitionControlEnumModule.IgnitionControlEnumType.OFF
    timeStamp: UMAA.Common.Measurement.DateTime = field(default_factory = UMAA.Common.Measurement.DateTime)
    source: UMAA.Common.IdentifierType = field(default_factory = UMAA.Common.IdentifierType)
    sessionID: UMAA.Common.Measurement.NumericGUID = field(default_factory = UMAA.Common.Measurement.NumericGUID)
    destination: UMAA.Common.IdentifierType = field(default_factory = UMAA.Common.IdentifierType)

UMAA.EO.EngineControl.EngineCommandType = UMAA_EO_EngineControl_EngineCommandType
