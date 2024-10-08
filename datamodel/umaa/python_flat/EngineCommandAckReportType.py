
# WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

# This file was generated from EngineCommandAckReportType.idl
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
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/Common/Measurement/'))
from Measurements import *
sys.path.pop()
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/EO/EngineControl/'))
from EngineCommandType import *
sys.path.pop()

UMAA = idl.get_module("UMAA")

UMAA_EO = idl.get_module("UMAA_EO")

UMAA.EO = UMAA_EO

UMAA_EO_EngineControl = idl.get_module("UMAA_EO_EngineControl")

UMAA.EO.EngineControl = UMAA_EO_EngineControl

UMAA_EO_EngineControl_EngineCommandAckReportTypeTopic = "UMAA::EO::EngineControl::EngineCommandAckReportType"

UMAA.EO.EngineControl.EngineCommandAckReportTypeTopic = UMAA_EO_EngineControl_EngineCommandAckReportTypeTopic

@idl.struct(
    type_annotations = [idl.type_name("UMAA::EO::EngineControl::EngineCommandAckReportType")],
    member_annotations = {
        'source': [idl.key, ],
        'sessionID': [idl.key, ],
    }
)
class UMAA_EO_EngineControl_EngineCommandAckReportType:
    command: UMAA.EO.EngineControl.EngineCommandType = field(default_factory = UMAA.EO.EngineControl.EngineCommandType)
    timeStamp: UMAA.Common.Measurement.DateTime = field(default_factory = UMAA.Common.Measurement.DateTime)
    source: UMAA.Common.IdentifierType = field(default_factory = UMAA.Common.IdentifierType)
    sessionID: UMAA.Common.Measurement.NumericGUID = field(default_factory = UMAA.Common.Measurement.NumericGUID)

UMAA.EO.EngineControl.EngineCommandAckReportType = UMAA_EO_EngineControl_EngineCommandAckReportType
