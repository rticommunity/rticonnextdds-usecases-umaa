
# WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

# This file was generated from TamperDetectionCommandType.idl
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

UMAA_SO_TamperDetectionControl_TamperDetectionCommandTypeTopic = "UMAA::SO::TamperDetectionControl::TamperDetectionCommandType"

UMAA.SO.TamperDetectionControl.TamperDetectionCommandTypeTopic = UMAA_SO_TamperDetectionControl_TamperDetectionCommandTypeTopic

@idl.struct(
    type_annotations = [idl.type_name("UMAA::SO::TamperDetectionControl::TamperDetectionCommandType")],
    member_annotations = {
        'source': [idl.key, ],
        'sessionID': [idl.key, ],
        'destination': [idl.key, ],
    }
)
class UMAA_SO_TamperDetectionControl_TamperDetectionCommandType:
    state: UMAA.Common.MaritimeEnumeration.TamperDetectionStateEnumModule.TamperDetectionStateEnumType = UMAA.Common.MaritimeEnumeration.TamperDetectionStateEnumModule.TamperDetectionStateEnumType.ALWAYS_ENABLED_OR_CLEAR
    timeStamp: UMAA.Common.Measurement.DateTime = field(default_factory = UMAA.Common.Measurement.DateTime)
    source: UMAA.Common.IdentifierType = field(default_factory = UMAA.Common.IdentifierType)
    sessionID: UMAA.Common.Measurement.NumericGUID = field(default_factory = UMAA.Common.Measurement.NumericGUID)
    destination: UMAA.Common.IdentifierType = field(default_factory = UMAA.Common.IdentifierType)

UMAA.SO.TamperDetectionControl.TamperDetectionCommandType = UMAA_SO_TamperDetectionControl_TamperDetectionCommandType
