
# WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

# This file was generated from MastReportType.idl
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

UMAA_EO = idl.get_module("UMAA_EO")

UMAA.EO = UMAA_EO

UMAA_EO_MastStatus = idl.get_module("UMAA_EO_MastStatus")

UMAA.EO.MastStatus = UMAA_EO_MastStatus

UMAA_EO_MastStatus_MastReportTypeTopic = "UMAA::EO::MastStatus::MastReportType"

UMAA.EO.MastStatus.MastReportTypeTopic = UMAA_EO_MastStatus_MastReportTypeTopic

@idl.struct(
    type_annotations = [idl.type_name("UMAA::EO::MastStatus::MastReportType")],
    member_annotations = {
        'source': [idl.key, ],
    }
)
class UMAA_EO_MastStatus_MastReportType:
    state: UMAA.Common.MaritimeEnumeration.MastStateEnumModule.MastStateEnumType = UMAA.Common.MaritimeEnumeration.MastStateEnumModule.MastStateEnumType.DOWN
    timeStamp: UMAA.Common.Measurement.DateTime = field(default_factory = UMAA.Common.Measurement.DateTime)
    source: UMAA.Common.IdentifierType = field(default_factory = UMAA.Common.IdentifierType)

UMAA.EO.MastStatus.MastReportType = UMAA_EO_MastStatus_MastReportType
