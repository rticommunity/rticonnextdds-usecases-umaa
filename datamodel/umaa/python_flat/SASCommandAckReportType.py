
# WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

# This file was generated from SASCommandAckReportType.idl
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
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/SEM/SASControl/'))
from SASCommandType import *
sys.path.pop()

UMAA = idl.get_module("UMAA")

UMAA_SEM = idl.get_module("UMAA_SEM")

UMAA.SEM = UMAA_SEM

UMAA_SEM_SASControl = idl.get_module("UMAA_SEM_SASControl")

UMAA.SEM.SASControl = UMAA_SEM_SASControl

UMAA_SEM_SASControl_SASCommandAckReportTypeTopic = "UMAA::SEM::SASControl::SASCommandAckReportType"

UMAA.SEM.SASControl.SASCommandAckReportTypeTopic = UMAA_SEM_SASControl_SASCommandAckReportTypeTopic

@idl.struct(
    type_annotations = [idl.type_name("UMAA::SEM::SASControl::SASCommandAckReportType")],
    member_annotations = {
        'source': [idl.key, ],
        'sessionID': [idl.key, ],
    }
)
class UMAA_SEM_SASControl_SASCommandAckReportType:
    command: UMAA.SEM.SASControl.SASCommandType = field(default_factory = UMAA.SEM.SASControl.SASCommandType)
    timeStamp: UMAA.Common.Measurement.DateTime = field(default_factory = UMAA.Common.Measurement.DateTime)
    source: UMAA.Common.IdentifierType = field(default_factory = UMAA.Common.IdentifierType)
    sessionID: UMAA.Common.Measurement.NumericGUID = field(default_factory = UMAA.Common.Measurement.NumericGUID)

UMAA.SEM.SASControl.SASCommandAckReportType = UMAA_SEM_SASControl_SASCommandAckReportType
