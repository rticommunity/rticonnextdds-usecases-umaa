
# WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

# This file was generated from PowerReportType.idl
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

UMAA_EO_PowerStatus = idl.get_module("UMAA_EO_PowerStatus")

UMAA.EO.PowerStatus = UMAA_EO_PowerStatus

UMAA_EO_PowerStatus_PowerReportTypeTopic = "UMAA::EO::PowerStatus::PowerReportType"

UMAA.EO.PowerStatus.PowerReportTypeTopic = UMAA_EO_PowerStatus_PowerReportTypeTopic

@idl.struct(
    type_annotations = [idl.type_name("UMAA::EO::PowerStatus::PowerReportType")],
    member_annotations = {
        'source': [idl.key, ],
        'resourceID': [idl.key, ],
    }
)
class UMAA_EO_PowerStatus_PowerReportType:
    state: UMAA.Common.MaritimeEnumeration.PowerStateEnumModule.PowerStateEnumType = UMAA.Common.MaritimeEnumeration.PowerStateEnumModule.PowerStateEnumType.EMERGENCY_POWER
    timeStamp: UMAA.Common.Measurement.DateTime = field(default_factory = UMAA.Common.Measurement.DateTime)
    source: UMAA.Common.IdentifierType = field(default_factory = UMAA.Common.IdentifierType)
    resourceID: UMAA.Common.IdentifierType = field(default_factory = UMAA.Common.IdentifierType)

UMAA.EO.PowerStatus.PowerReportType = UMAA_EO_PowerStatus_PowerReportType
