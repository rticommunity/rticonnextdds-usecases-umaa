
# WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

# This file was generated from EmitterReportType.idl
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

UMAA_SO_EmitterReport = idl.get_module("UMAA_SO_EmitterReport")

UMAA.SO.EmitterReport = UMAA_SO_EmitterReport

UMAA_SO_EmitterReport_EmitterReportTypeTopic = "UMAA::SO::EmitterReport::EmitterReportType"

UMAA.SO.EmitterReport.EmitterReportTypeTopic = UMAA_SO_EmitterReport_EmitterReportTypeTopic

@idl.struct(
    type_annotations = [idl.type_name("UMAA::SO::EmitterReport::EmitterReportType")],
    member_annotations = {
        'source': [idl.key, ],
        'emitterID': [idl.key, ],
    }
)
class UMAA_SO_EmitterReport_EmitterReportType:
    endTime: Optional[UMAA.Common.Measurement.DateTime] = None
    state: UMAA.Common.MaritimeEnumeration.EmitterStateEnumModule.EmitterStateEnumType = UMAA.Common.MaritimeEnumeration.EmitterStateEnumModule.EmitterStateEnumType.ALLOWED
    timeStamp: UMAA.Common.Measurement.DateTime = field(default_factory = UMAA.Common.Measurement.DateTime)
    source: UMAA.Common.IdentifierType = field(default_factory = UMAA.Common.IdentifierType)
    emitterID: UMAA.Common.Measurement.NumericGUID = field(default_factory = UMAA.Common.Measurement.NumericGUID)

UMAA.SO.EmitterReport.EmitterReportType = UMAA_SO_EmitterReport_EmitterReportType
