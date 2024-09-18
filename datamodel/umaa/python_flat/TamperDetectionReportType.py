
# WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

# This file was generated from TamperDetectionReportType.idl
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

UMAA_SO_TamperDetectionStatus = idl.get_module("UMAA_SO_TamperDetectionStatus")

UMAA.SO.TamperDetectionStatus = UMAA_SO_TamperDetectionStatus

UMAA_SO_TamperDetectionStatus_TamperDetectionReportTypeTopic = "UMAA::SO::TamperDetectionStatus::TamperDetectionReportType"

UMAA.SO.TamperDetectionStatus.TamperDetectionReportTypeTopic = UMAA_SO_TamperDetectionStatus_TamperDetectionReportTypeTopic

@idl.struct(
    type_annotations = [idl.type_name("UMAA::SO::TamperDetectionStatus::TamperDetectionReportType")],
    member_annotations = {
        'descriptor': [idl.bound(1023)],
        'source': [idl.key, ],
    }
)
class UMAA_SO_TamperDetectionStatus_TamperDetectionReportType:
    descriptor: str = ""
    electricalTamper: bool = False
    hardwareTamper: bool = False
    networkInstrusion: bool = False
    otherTamper: bool = False
    state: UMAA.Common.MaritimeEnumeration.TamperDetectionStateEnumModule.TamperDetectionStateEnumType = UMAA.Common.MaritimeEnumeration.TamperDetectionStateEnumModule.TamperDetectionStateEnumType.ALWAYS_ENABLED_OR_CLEAR
    timeStamp: UMAA.Common.Measurement.DateTime = field(default_factory = UMAA.Common.Measurement.DateTime)
    source: UMAA.Common.IdentifierType = field(default_factory = UMAA.Common.IdentifierType)

UMAA.SO.TamperDetectionStatus.TamperDetectionReportType = UMAA_SO_TamperDetectionStatus_TamperDetectionReportType
