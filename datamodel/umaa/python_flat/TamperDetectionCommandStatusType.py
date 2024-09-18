
# WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

# This file was generated from TamperDetectionCommandStatusType.idl
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

UMAA_SO_TamperDetectionControl = idl.get_module("UMAA_SO_TamperDetectionControl")

UMAA.SO.TamperDetectionControl = UMAA_SO_TamperDetectionControl

UMAA_SO_TamperDetectionControl_TamperDetectionCommandStatusTypeTopic = "UMAA::SO::TamperDetectionControl::TamperDetectionCommandStatusType"

UMAA.SO.TamperDetectionControl.TamperDetectionCommandStatusTypeTopic = UMAA_SO_TamperDetectionControl_TamperDetectionCommandStatusTypeTopic

@idl.struct(
    type_annotations = [idl.type_name("UMAA::SO::TamperDetectionControl::TamperDetectionCommandStatusType")],
    member_annotations = {
        'source': [idl.key, ],
        'sessionID': [idl.key, ],
        'logMessage': [idl.bound(4095)],
    }
)
class UMAA_SO_TamperDetectionControl_TamperDetectionCommandStatusType:
    timeStamp: UMAA.Common.Measurement.DateTime = field(default_factory = UMAA.Common.Measurement.DateTime)
    source: UMAA.Common.IdentifierType = field(default_factory = UMAA.Common.IdentifierType)
    sessionID: UMAA.Common.Measurement.NumericGUID = field(default_factory = UMAA.Common.Measurement.NumericGUID)
    commandStatus: UMAA.Common.MaritimeEnumeration.CommandStatusEnumModule.CommandStatusEnumType = UMAA.Common.MaritimeEnumeration.CommandStatusEnumModule.CommandStatusEnumType.CANCELED
    commandStatusReason: UMAA.Common.MaritimeEnumeration.CommandStatusReasonEnumModule.CommandStatusReasonEnumType = UMAA.Common.MaritimeEnumeration.CommandStatusReasonEnumModule.CommandStatusReasonEnumType.CANCELED
    logMessage: str = ""

UMAA.SO.TamperDetectionControl.TamperDetectionCommandStatusType = UMAA_SO_TamperDetectionControl_TamperDetectionCommandStatusType
