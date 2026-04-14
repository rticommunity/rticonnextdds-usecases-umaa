
# WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

# This file was generated from HealthReportType.idl
# using RTI Code Generator (rtiddsgen) version 4.6.0.
# The rtiddsgen tool is part of the RTI Connext DDS distribution.
# For more information, type 'rtiddsgen -help' at a command shell
# or consult the Code Generator User's Manual.

from dataclasses import field
from typing import Union, Sequence, Optional
import rti.idl as idl
import rti.rpc as rpc
from enum import IntEnum
import sys
import os
from abc import ABC


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

UMAA_SO_HealthReport = idl.get_module("UMAA_SO_HealthReport")

UMAA.SO.HealthReport = UMAA_SO_HealthReport

UMAA_SO_HealthReport_HealthReportTypeTopic = "UMAA::SO::HealthReport::HealthReportType"

UMAA.SO.HealthReport.HealthReportTypeTopic = UMAA_SO_HealthReport_HealthReportTypeTopic

@idl.struct(
    type_annotations = [idl.type_name("UMAA::SO::HealthReport::HealthReportType"), idl.xtypes_compliance(0x0000018C), ],

    member_annotations = {
        'severity': [idl.default(0),],
        'status': [idl.bound(4095),],
        'source': [idl.key, ],
        'code': [idl.key, idl.default(0),],
        'resourceID': [idl.key, ],
    }
)
class UMAA_SO_HealthReport_HealthReportType:
    logTime: UMAA.Common.Measurement.DateTime = field(default_factory = UMAA.Common.Measurement.DateTime)
    severity: UMAA.Common.MaritimeEnumeration.ErrorConditionEnumModule.ErrorConditionEnumType = UMAA.Common.MaritimeEnumeration.ErrorConditionEnumModule.ErrorConditionEnumType.ERROR
    status: Optional[str] = None
    timeStamp: UMAA.Common.Measurement.DateTime = field(default_factory = UMAA.Common.Measurement.DateTime)
    source: UMAA.Common.IdentifierType = field(default_factory = UMAA.Common.IdentifierType)
    code: UMAA.Common.MaritimeEnumeration.ErrorCodeEnumModule.ErrorCodeEnumType = UMAA.Common.MaritimeEnumeration.ErrorCodeEnumModule.ErrorCodeEnumType.ACTUATOR
    resourceID: UMAA.Common.IdentifierType = field(default_factory = UMAA.Common.IdentifierType)

UMAA.SO.HealthReport.HealthReportType = UMAA_SO_HealthReport_HealthReportType
