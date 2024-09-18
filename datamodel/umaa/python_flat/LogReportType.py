
# WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

# This file was generated from LogReportType.idl
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
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/Common/MaritimeEnumeration/'))
from MaritimeEnumerationSets import *
sys.path.pop()
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/Common/Measurement/'))
from Measurements import *
sys.path.pop()
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/Common/PrimitiveConstrained/'))
from ConstrainedTypes import *
sys.path.pop()

UMAA = idl.get_module("UMAA")

UMAA_SO = idl.get_module("UMAA_SO")

UMAA.SO = UMAA_SO

UMAA_SO_LogReport = idl.get_module("UMAA_SO_LogReport")

UMAA.SO.LogReport = UMAA_SO_LogReport

UMAA_SO_LogReport_LogReportTypeTopic = "UMAA::SO::LogReport::LogReportType"

UMAA.SO.LogReport.LogReportTypeTopic = UMAA_SO_LogReport_LogReportTypeTopic

@idl.struct(
    type_annotations = [idl.type_name("UMAA::SO::LogReport::LogReportType")],
    member_annotations = {
        'entry': [idl.bound(4095)],
        'source': [idl.key, ],
    }
)
class UMAA_SO_LogReport_LogReportType:
    entry: str = ""
    level: UMAA.Common.MaritimeEnumeration.LogLevelEnumModule.LogLevelEnumType = UMAA.Common.MaritimeEnumeration.LogLevelEnumModule.LogLevelEnumType.ERROR
    timeStamp: UMAA.Common.Measurement.DateTime = field(default_factory = UMAA.Common.Measurement.DateTime)
    source: UMAA.Common.IdentifierType = field(default_factory = UMAA.Common.IdentifierType)

UMAA.SO.LogReport.LogReportType = UMAA_SO_LogReport_LogReportType
