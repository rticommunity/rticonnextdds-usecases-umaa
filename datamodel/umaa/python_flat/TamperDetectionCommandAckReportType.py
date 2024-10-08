
# WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

# This file was generated from TamperDetectionCommandAckReportType.idl
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
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/SO/TamperDetectionControl/'))
from TamperDetectionCommandType import *
sys.path.pop()

UMAA = idl.get_module("UMAA")

UMAA_SO = idl.get_module("UMAA_SO")

UMAA.SO = UMAA_SO

UMAA_SO_TamperDetectionControl = idl.get_module("UMAA_SO_TamperDetectionControl")

UMAA.SO.TamperDetectionControl = UMAA_SO_TamperDetectionControl

UMAA_SO_TamperDetectionControl_TamperDetectionCommandAckReportTypeTopic = "UMAA::SO::TamperDetectionControl::TamperDetectionCommandAckReportType"

UMAA.SO.TamperDetectionControl.TamperDetectionCommandAckReportTypeTopic = UMAA_SO_TamperDetectionControl_TamperDetectionCommandAckReportTypeTopic

@idl.struct(
    type_annotations = [idl.type_name("UMAA::SO::TamperDetectionControl::TamperDetectionCommandAckReportType")],
    member_annotations = {
        'source': [idl.key, ],
        'sessionID': [idl.key, ],
    }
)
class UMAA_SO_TamperDetectionControl_TamperDetectionCommandAckReportType:
    command: UMAA.SO.TamperDetectionControl.TamperDetectionCommandType = field(default_factory = UMAA.SO.TamperDetectionControl.TamperDetectionCommandType)
    timeStamp: UMAA.Common.Measurement.DateTime = field(default_factory = UMAA.Common.Measurement.DateTime)
    source: UMAA.Common.IdentifierType = field(default_factory = UMAA.Common.IdentifierType)
    sessionID: UMAA.Common.Measurement.NumericGUID = field(default_factory = UMAA.Common.Measurement.NumericGUID)

UMAA.SO.TamperDetectionControl.TamperDetectionCommandAckReportType = UMAA_SO_TamperDetectionControl_TamperDetectionCommandAckReportType
