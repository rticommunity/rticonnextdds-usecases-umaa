
# WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

# This file was generated from OperationalModeReportType.idl
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

UMAA_MM = idl.get_module("UMAA_MM")

UMAA.MM = UMAA_MM

UMAA_MM_OperationalModeStatus = idl.get_module("UMAA_MM_OperationalModeStatus")

UMAA.MM.OperationalModeStatus = UMAA_MM_OperationalModeStatus

UMAA_MM_OperationalModeStatus_OperationalModeReportTypeTopic = "UMAA::MM::OperationalModeStatus::OperationalModeReportType"

UMAA.MM.OperationalModeStatus.OperationalModeReportTypeTopic = UMAA_MM_OperationalModeStatus_OperationalModeReportTypeTopic

@idl.struct(
    type_annotations = [idl.type_name("UMAA::MM::OperationalModeStatus::OperationalModeReportType")],
    member_annotations = {
        'source': [idl.key, ],
    }
)
class UMAA_MM_OperationalModeStatus_OperationalModeReportType:
    operationalMode: UMAA.Common.MaritimeEnumeration.OperationalModeEnumModule.OperationalModeEnumType = UMAA.Common.MaritimeEnumeration.OperationalModeEnumModule.OperationalModeEnumType.AUTONOMOUS
    timeStamp: UMAA.Common.Measurement.DateTime = field(default_factory = UMAA.Common.Measurement.DateTime)
    source: UMAA.Common.IdentifierType = field(default_factory = UMAA.Common.IdentifierType)

UMAA.MM.OperationalModeStatus.OperationalModeReportType = UMAA_MM_OperationalModeStatus_OperationalModeReportType
