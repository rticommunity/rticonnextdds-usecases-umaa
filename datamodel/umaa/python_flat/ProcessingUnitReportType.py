
# WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

# This file was generated from ProcessingUnitReportType.idl
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

UMAA = idl.get_module("UMAA")

UMAA_SO = idl.get_module("UMAA_SO")

UMAA.SO = UMAA_SO

UMAA_SO_ProcessingUnitStatus = idl.get_module("UMAA_SO_ProcessingUnitStatus")

UMAA.SO.ProcessingUnitStatus = UMAA_SO_ProcessingUnitStatus

UMAA_SO_ProcessingUnitStatus_ProcessingUnitReportTypeTopic = "UMAA::SO::ProcessingUnitStatus::ProcessingUnitReportType"

UMAA.SO.ProcessingUnitStatus.ProcessingUnitReportTypeTopic = UMAA_SO_ProcessingUnitStatus_ProcessingUnitReportTypeTopic

@idl.struct(
    type_annotations = [idl.type_name("UMAA::SO::ProcessingUnitStatus::ProcessingUnitReportType")],
    member_annotations = {
        'source': [idl.key, ],
    }
)
class UMAA_SO_ProcessingUnitStatus_ProcessingUnitReportType:
    load15MinuteAverage: Optional[float] = None
    load1MinuteAverage: Optional[float] = None
    load5MinuteAverage: Optional[float] = None
    numberOfBlockedProcesses: Optional[idl.int32] = None
    numberOfProcesses: Optional[idl.int32] = None
    numberOfRunningProcesses: Optional[idl.int32] = None
    processorTemperature: Optional[float] = None
    type: UMAA.Common.MaritimeEnumeration.ProcessingUnitEnumModule.ProcessingUnitEnumType = UMAA.Common.MaritimeEnumeration.ProcessingUnitEnumModule.ProcessingUnitEnumType.CPU
    uptime: Optional[float] = None
    timeStamp: UMAA.Common.Measurement.DateTime = field(default_factory = UMAA.Common.Measurement.DateTime)
    source: UMAA.Common.IdentifierType = field(default_factory = UMAA.Common.IdentifierType)

UMAA.SO.ProcessingUnitStatus.ProcessingUnitReportType = UMAA_SO_ProcessingUnitStatus_ProcessingUnitReportType
