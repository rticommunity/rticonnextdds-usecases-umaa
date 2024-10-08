
# WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

# This file was generated from FreeFloatExecutionStatusReportType.idl
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

UMAA = idl.get_module("UMAA")

UMAA_MO = idl.get_module("UMAA_MO")

UMAA.MO = UMAA_MO

UMAA_MO_FreeFloatControl = idl.get_module("UMAA_MO_FreeFloatControl")

UMAA.MO.FreeFloatControl = UMAA_MO_FreeFloatControl

UMAA_MO_FreeFloatControl_FreeFloatExecutionStatusReportTypeTopic = "UMAA::MO::FreeFloatControl::FreeFloatExecutionStatusReportType"

UMAA.MO.FreeFloatControl.FreeFloatExecutionStatusReportTypeTopic = UMAA_MO_FreeFloatControl_FreeFloatExecutionStatusReportTypeTopic

@idl.struct(
    type_annotations = [idl.type_name("UMAA::MO::FreeFloatControl::FreeFloatExecutionStatusReportType")],
    member_annotations = {
        'source': [idl.key, ],
        'sessionID': [idl.key, ],
    }
)
class UMAA_MO_FreeFloatControl_FreeFloatExecutionStatusReportType:
    timeFreeFloatAchieved: UMAA.Common.Measurement.DateTime = field(default_factory = UMAA.Common.Measurement.DateTime)
    timeFreeFloatCompleted: Optional[UMAA.Common.Measurement.DateTime] = None
    timeStamp: UMAA.Common.Measurement.DateTime = field(default_factory = UMAA.Common.Measurement.DateTime)
    source: UMAA.Common.IdentifierType = field(default_factory = UMAA.Common.IdentifierType)
    sessionID: UMAA.Common.Measurement.NumericGUID = field(default_factory = UMAA.Common.Measurement.NumericGUID)

UMAA.MO.FreeFloatControl.FreeFloatExecutionStatusReportType = UMAA_MO_FreeFloatControl_FreeFloatExecutionStatusReportType
