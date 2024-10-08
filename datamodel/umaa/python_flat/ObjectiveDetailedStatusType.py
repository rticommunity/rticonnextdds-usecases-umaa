
# WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

# This file was generated from ObjectiveDetailedStatusType.idl
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

UMAA_MM = idl.get_module("UMAA_MM")

UMAA.MM = UMAA_MM

UMAA_MM_BaseType = idl.get_module("UMAA_MM_BaseType")

UMAA.MM.BaseType = UMAA_MM_BaseType

@idl.struct(
    type_annotations = [idl.type_name("UMAA::MM::BaseType::ObjectiveDetailedStatusType")],
    member_annotations = {
        'childObjectiveIDs': [idl.bound(256)],
        'errors': [idl.bound(1023)],
        'feedback': [idl.bound(1023)],
        'warnings': [idl.bound(1023)],
        'specializationTopic': [idl.bound(1023)],
    }
)
class UMAA_MM_BaseType_ObjectiveDetailedStatusType:
    childObjectiveIDs: Sequence[UMAA.Common.Measurement.NumericGUID] = field(default_factory = list)
    errors: str = ""
    feedback: str = ""
    isCurrentlyMeetingObjective: bool = False
    objectiveID: UMAA.Common.Measurement.NumericGUID = field(default_factory = UMAA.Common.Measurement.NumericGUID)
    objectiveStatus: UMAA.Common.MaritimeEnumeration.ObjectiveExecutorStateEnumModule.ObjectiveExecutorStateEnumType = UMAA.Common.MaritimeEnumeration.ObjectiveExecutorStateEnumModule.ObjectiveExecutorStateEnumType.CANCELED
    objectiveStatusReason: UMAA.Common.MaritimeEnumeration.ObjectiveExecutorStateReasonEnumModule.ObjectiveExecutorStateReasonEnumType = UMAA.Common.MaritimeEnumeration.ObjectiveExecutorStateReasonEnumModule.ObjectiveExecutorStateReasonEnumType.BUS_MSG_DISPOSE
    startTime: UMAA.Common.Measurement.DateTime = field(default_factory = UMAA.Common.Measurement.DateTime)
    warnings: str = ""
    specializationID: UMAA.Common.Measurement.NumericGUID = field(default_factory = UMAA.Common.Measurement.NumericGUID)
    specializationTimestamp: UMAA.Common.Measurement.DateTime = field(default_factory = UMAA.Common.Measurement.DateTime)
    specializationTopic: str = ""

UMAA.MM.BaseType.ObjectiveDetailedStatusType = UMAA_MM_BaseType_ObjectiveDetailedStatusType
