
# WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

# This file was generated from CompartmentReportType.idl
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

UMAA_SA = idl.get_module("UMAA_SA")

UMAA.SA = UMAA_SA

UMAA_SA_CompartmentStatus = idl.get_module("UMAA_SA_CompartmentStatus")

UMAA.SA.CompartmentStatus = UMAA_SA_CompartmentStatus

UMAA_SA_CompartmentStatus_CompartmentReportTypeTopic = "UMAA::SA::CompartmentStatus::CompartmentReportType"

UMAA.SA.CompartmentStatus.CompartmentReportTypeTopic = UMAA_SA_CompartmentStatus_CompartmentReportTypeTopic

@idl.struct(
    type_annotations = [idl.type_name("UMAA::SA::CompartmentStatus::CompartmentReportType")],
    member_annotations = {
        'source': [idl.key, ],
    }
)
class UMAA_SA_CompartmentStatus_CompartmentReportType:
    floodDetected: Optional[bool] = None
    humidity: Optional[float] = None
    leakDetected: Optional[bool] = None
    pressure: Optional[float] = None
    temperature: Optional[float] = None
    timeStamp: UMAA.Common.Measurement.DateTime = field(default_factory = UMAA.Common.Measurement.DateTime)
    source: UMAA.Common.IdentifierType = field(default_factory = UMAA.Common.IdentifierType)

UMAA.SA.CompartmentStatus.CompartmentReportType = UMAA_SA_CompartmentStatus_CompartmentReportType
