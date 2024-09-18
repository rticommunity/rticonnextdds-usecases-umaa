
# WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

# This file was generated from BITCommandAckReportType.idl
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
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/SO/BITControl/'))
from BITCommandType import *
sys.path.pop()

UMAA = idl.get_module("UMAA")

UMAA_SO = idl.get_module("UMAA_SO")

UMAA.SO = UMAA_SO

UMAA_SO_BITControl = idl.get_module("UMAA_SO_BITControl")

UMAA.SO.BITControl = UMAA_SO_BITControl

UMAA_SO_BITControl_BITCommandAckReportTypeTopic = "UMAA::SO::BITControl::BITCommandAckReportType"

UMAA.SO.BITControl.BITCommandAckReportTypeTopic = UMAA_SO_BITControl_BITCommandAckReportTypeTopic

@idl.struct(
    type_annotations = [idl.type_name("UMAA::SO::BITControl::BITCommandAckReportType")],
    member_annotations = {
        'source': [idl.key, ],
        'sessionID': [idl.key, ],
    }
)
class UMAA_SO_BITControl_BITCommandAckReportType:
    command: UMAA.SO.BITControl.BITCommandType = field(default_factory = UMAA.SO.BITControl.BITCommandType)
    timeStamp: UMAA.Common.Measurement.DateTime = field(default_factory = UMAA.Common.Measurement.DateTime)
    source: UMAA.Common.IdentifierType = field(default_factory = UMAA.Common.IdentifierType)
    sessionID: UMAA.Common.Measurement.NumericGUID = field(default_factory = UMAA.Common.Measurement.NumericGUID)

UMAA.SO.BITControl.BITCommandAckReportType = UMAA_SO_BITControl_BITCommandAckReportType
