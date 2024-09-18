
# WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

# This file was generated from GlobalVectorExecutionStatusReportType.idl
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

UMAA_MO = idl.get_module("UMAA_MO")

UMAA.MO = UMAA_MO

UMAA_MO_GlobalVectorControl = idl.get_module("UMAA_MO_GlobalVectorControl")

UMAA.MO.GlobalVectorControl = UMAA_MO_GlobalVectorControl

UMAA_MO_GlobalVectorControl_GlobalVectorExecutionStatusReportTypeTopic = "UMAA::MO::GlobalVectorControl::GlobalVectorExecutionStatusReportType"

UMAA.MO.GlobalVectorControl.GlobalVectorExecutionStatusReportTypeTopic = UMAA_MO_GlobalVectorControl_GlobalVectorExecutionStatusReportTypeTopic

@idl.struct(
    type_annotations = [idl.type_name("UMAA::MO::GlobalVectorControl::GlobalVectorExecutionStatusReportType")],
    member_annotations = {
        'source': [idl.key, ],
        'sessionID': [idl.key, ],
    }
)
class UMAA_MO_GlobalVectorControl_GlobalVectorExecutionStatusReportType:
    directionAchieved: bool = False
    elevationAchieved: bool = False
    speedAchieved: bool = False
    timeStamp: UMAA.Common.Measurement.DateTime = field(default_factory = UMAA.Common.Measurement.DateTime)
    source: UMAA.Common.IdentifierType = field(default_factory = UMAA.Common.IdentifierType)
    sessionID: UMAA.Common.Measurement.NumericGUID = field(default_factory = UMAA.Common.Measurement.NumericGUID)

UMAA.MO.GlobalVectorControl.GlobalVectorExecutionStatusReportType = UMAA_MO_GlobalVectorControl_GlobalVectorExecutionStatusReportType
