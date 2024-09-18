
# WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

# This file was generated from BilgePumpReportType.idl
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

UMAA_EO_BilgePumpStatus = idl.get_module("UMAA_EO_BilgePumpStatus")

UMAA.EO.BilgePumpStatus = UMAA_EO_BilgePumpStatus

UMAA_EO_BilgePumpStatus_BilgePumpReportTypeTopic = "UMAA::EO::BilgePumpStatus::BilgePumpReportType"

UMAA.EO.BilgePumpStatus.BilgePumpReportTypeTopic = UMAA_EO_BilgePumpStatus_BilgePumpReportTypeTopic

@idl.struct(
    type_annotations = [idl.type_name("UMAA::EO::BilgePumpStatus::BilgePumpReportType")],
    member_annotations = {
        'source': [idl.key, ],
    }
)
class UMAA_EO_BilgePumpStatus_BilgePumpReportType:
    state: UMAA.Common.MaritimeEnumeration.BilgeStateEnumModule.BilgeStateEnumType = UMAA.Common.MaritimeEnumeration.BilgeStateEnumModule.BilgeStateEnumType.FAULT
    timeStamp: UMAA.Common.Measurement.DateTime = field(default_factory = UMAA.Common.Measurement.DateTime)
    source: UMAA.Common.IdentifierType = field(default_factory = UMAA.Common.IdentifierType)

UMAA.EO.BilgePumpStatus.BilgePumpReportType = UMAA_EO_BilgePumpStatus_BilgePumpReportType
