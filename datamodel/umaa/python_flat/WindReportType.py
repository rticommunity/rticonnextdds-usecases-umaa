
# WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

# This file was generated from WindReportType.idl
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

UMAA_SA = idl.get_module("UMAA_SA")

UMAA.SA = UMAA_SA

UMAA_SA_WindStatus = idl.get_module("UMAA_SA_WindStatus")

UMAA.SA.WindStatus = UMAA_SA_WindStatus

UMAA_SA_WindStatus_WindReportTypeTopic = "UMAA::SA::WindStatus::WindReportType"

UMAA.SA.WindStatus.WindReportTypeTopic = UMAA_SA_WindStatus_WindReportTypeTopic

@idl.struct(
    type_annotations = [idl.type_name("UMAA::SA::WindStatus::WindReportType")],
    member_annotations = {
        'source': [idl.key, ],
    }
)
class UMAA_SA_WindStatus_WindReportType:
    relativeAverageDirection: Optional[float] = None
    relativeAverageSpeed: Optional[float] = None
    relativeInstantaneousDirection: Optional[float] = None
    relativeInstantaneousSpeed: Optional[float] = None
    relativeMaximumDirection: Optional[float] = None
    relativeMaximumSpeed: Optional[float] = None
    relativeMinimumDirection: Optional[float] = None
    relativeMinimumSpeed: Optional[float] = None
    straightDeckCrossSpeed: Optional[float] = None
    straightDeckHeadSpeed: Optional[float] = None
    trueAverageDirection: Optional[float] = None
    trueAverageSpeed: Optional[float] = None
    trueInstantaneousDirection: Optional[float] = None
    trueInstantaneousSpeed: Optional[float] = None
    trueMaximumDirection: Optional[float] = None
    trueMaximumSpeed: Optional[float] = None
    trueMinimumDirection: Optional[float] = None
    trueMinimumSpeed: Optional[float] = None
    timeStamp: UMAA.Common.Measurement.DateTime = field(default_factory = UMAA.Common.Measurement.DateTime)
    source: UMAA.Common.IdentifierType = field(default_factory = UMAA.Common.IdentifierType)

UMAA.SA.WindStatus.WindReportType = UMAA_SA_WindStatus_WindReportType
