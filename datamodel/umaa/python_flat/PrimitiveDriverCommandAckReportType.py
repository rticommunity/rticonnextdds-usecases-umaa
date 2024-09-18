
# WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

# This file was generated from PrimitiveDriverCommandAckReportType.idl
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
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/MO/PrimitiveDriverControl/'))
from PrimitiveDriverCommandType import *
sys.path.pop()

UMAA = idl.get_module("UMAA")

UMAA_MO = idl.get_module("UMAA_MO")

UMAA.MO = UMAA_MO

UMAA_MO_PrimitiveDriverControl = idl.get_module("UMAA_MO_PrimitiveDriverControl")

UMAA.MO.PrimitiveDriverControl = UMAA_MO_PrimitiveDriverControl

UMAA_MO_PrimitiveDriverControl_PrimitiveDriverCommandAckReportTypeTopic = "UMAA::MO::PrimitiveDriverControl::PrimitiveDriverCommandAckReportType"

UMAA.MO.PrimitiveDriverControl.PrimitiveDriverCommandAckReportTypeTopic = UMAA_MO_PrimitiveDriverControl_PrimitiveDriverCommandAckReportTypeTopic

@idl.struct(
    type_annotations = [idl.type_name("UMAA::MO::PrimitiveDriverControl::PrimitiveDriverCommandAckReportType")],
    member_annotations = {
        'source': [idl.key, ],
        'sessionID': [idl.key, ],
    }
)
class UMAA_MO_PrimitiveDriverControl_PrimitiveDriverCommandAckReportType:
    command: UMAA.MO.PrimitiveDriverControl.PrimitiveDriverCommandType = field(default_factory = UMAA.MO.PrimitiveDriverControl.PrimitiveDriverCommandType)
    timeStamp: UMAA.Common.Measurement.DateTime = field(default_factory = UMAA.Common.Measurement.DateTime)
    source: UMAA.Common.IdentifierType = field(default_factory = UMAA.Common.IdentifierType)
    sessionID: UMAA.Common.Measurement.NumericGUID = field(default_factory = UMAA.Common.Measurement.NumericGUID)

UMAA.MO.PrimitiveDriverControl.PrimitiveDriverCommandAckReportType = UMAA_MO_PrimitiveDriverControl_PrimitiveDriverCommandAckReportType
