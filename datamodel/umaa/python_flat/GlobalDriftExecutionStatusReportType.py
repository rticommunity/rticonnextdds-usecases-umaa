
# WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

# This file was generated from GlobalDriftExecutionStatusReportType.idl
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
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/MO/GlobalDriftState/'))
from GlobalDriftStateType import *
sys.path.pop()

UMAA = idl.get_module("UMAA")

UMAA_MO = idl.get_module("UMAA_MO")

UMAA.MO = UMAA_MO

UMAA_MO_GlobalDriftControl = idl.get_module("UMAA_MO_GlobalDriftControl")

UMAA.MO.GlobalDriftControl = UMAA_MO_GlobalDriftControl

UMAA_MO_GlobalDriftControl_GlobalDriftExecutionStatusReportTypeTopic = "UMAA::MO::GlobalDriftControl::GlobalDriftExecutionStatusReportType"

UMAA.MO.GlobalDriftControl.GlobalDriftExecutionStatusReportTypeTopic = UMAA_MO_GlobalDriftControl_GlobalDriftExecutionStatusReportTypeTopic

@idl.struct(
    type_annotations = [idl.type_name("UMAA::MO::GlobalDriftControl::GlobalDriftExecutionStatusReportType")],
    member_annotations = {
        'source': [idl.key, ],
        'sessionID': [idl.key, ],
    }
)
class UMAA_MO_GlobalDriftControl_GlobalDriftExecutionStatusReportType:
    distanceFromReference: float = 0.0
    globalDriftState: UMAA.MO.GlobalDriftState.GlobalDriftStateType = field(default_factory = UMAA.MO.GlobalDriftState.GlobalDriftStateType)
    timeDriftAchieved: UMAA.Common.Measurement.DateTime = field(default_factory = UMAA.Common.Measurement.DateTime)
    timeDriftCompleted: Optional[UMAA.Common.Measurement.DateTime] = None
    timeStamp: UMAA.Common.Measurement.DateTime = field(default_factory = UMAA.Common.Measurement.DateTime)
    source: UMAA.Common.IdentifierType = field(default_factory = UMAA.Common.IdentifierType)
    sessionID: UMAA.Common.Measurement.NumericGUID = field(default_factory = UMAA.Common.Measurement.NumericGUID)

UMAA.MO.GlobalDriftControl.GlobalDriftExecutionStatusReportType = UMAA_MO_GlobalDriftControl_GlobalDriftExecutionStatusReportType
