
# WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

# This file was generated from BITExecutionStatusReportType.idl
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
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/Common/Measurement/'))
from Measurements import *
sys.path.pop()

UMAA = idl.get_module("UMAA")

UMAA_SO = idl.get_module("UMAA_SO")

UMAA.SO = UMAA_SO

UMAA_SO_BITControl = idl.get_module("UMAA_SO_BITControl")

UMAA.SO.BITControl = UMAA_SO_BITControl

UMAA_SO_BITControl_BITExecutionStatusReportTypeTopic = "UMAA::SO::BITControl::BITExecutionStatusReportType"

UMAA.SO.BITControl.BITExecutionStatusReportTypeTopic = UMAA_SO_BITControl_BITExecutionStatusReportTypeTopic

@idl.struct(
    type_annotations = [idl.type_name("UMAA::SO::BITControl::BITExecutionStatusReportType")],
    member_annotations = {
        'source': [idl.key, ],
        'sessionID': [idl.key, ],
    }
)
class UMAA_SO_BITControl_BITExecutionStatusReportType:
    estimatedTestCompletion: Optional[UMAA.Common.Measurement.DateTime] = None
    resourceID: UMAA.Common.IdentifierType = field(default_factory = UMAA.Common.IdentifierType)
    testCancelable: bool = False
    timeStamp: UMAA.Common.Measurement.DateTime = field(default_factory = UMAA.Common.Measurement.DateTime)
    source: UMAA.Common.IdentifierType = field(default_factory = UMAA.Common.IdentifierType)
    sessionID: UMAA.Common.Measurement.NumericGUID = field(default_factory = UMAA.Common.Measurement.NumericGUID)

UMAA.SO.BITControl.BITExecutionStatusReportType = UMAA_SO_BITControl_BITExecutionStatusReportType
