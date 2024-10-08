
# WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

# This file was generated from FLSCommandAckReportType.idl
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
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/SEM/FLSControl/'))
from FLSCommandType import *
sys.path.pop()

UMAA = idl.get_module("UMAA")

UMAA_SEM = idl.get_module("UMAA_SEM")

UMAA.SEM = UMAA_SEM

UMAA_SEM_FLSControl = idl.get_module("UMAA_SEM_FLSControl")

UMAA.SEM.FLSControl = UMAA_SEM_FLSControl

UMAA_SEM_FLSControl_FLSCommandAckReportTypeTopic = "UMAA::SEM::FLSControl::FLSCommandAckReportType"

UMAA.SEM.FLSControl.FLSCommandAckReportTypeTopic = UMAA_SEM_FLSControl_FLSCommandAckReportTypeTopic

@idl.struct(
    type_annotations = [idl.type_name("UMAA::SEM::FLSControl::FLSCommandAckReportType")],
    member_annotations = {
        'source': [idl.key, ],
        'sessionID': [idl.key, ],
    }
)
class UMAA_SEM_FLSControl_FLSCommandAckReportType:
    command: UMAA.SEM.FLSControl.FLSCommandType = field(default_factory = UMAA.SEM.FLSControl.FLSCommandType)
    timeStamp: UMAA.Common.Measurement.DateTime = field(default_factory = UMAA.Common.Measurement.DateTime)
    source: UMAA.Common.IdentifierType = field(default_factory = UMAA.Common.IdentifierType)
    sessionID: UMAA.Common.Measurement.NumericGUID = field(default_factory = UMAA.Common.Measurement.NumericGUID)

UMAA.SEM.FLSControl.FLSCommandAckReportType = UMAA_SEM_FLSControl_FLSCommandAckReportType
