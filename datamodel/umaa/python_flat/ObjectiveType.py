
# WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

# This file was generated from ObjectiveType.idl
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
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/Common/PrimitiveConstrained/'))
from ConstrainedTypes import *
sys.path.pop()
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/Common/Time/'))
from DateTimeRequirementType import *
sys.path.pop()
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/MM/BaseType/'))
from StateTriggerType import *
sys.path.pop()

UMAA = idl.get_module("UMAA")

UMAA_MM = idl.get_module("UMAA_MM")

UMAA.MM = UMAA_MM

UMAA_MM_BaseType = idl.get_module("UMAA_MM_BaseType")

UMAA.MM.BaseType = UMAA_MM_BaseType

@idl.struct(
    type_annotations = [idl.type_name("UMAA::MM::BaseType::ObjectiveType")],
    member_annotations = {
        'name': [idl.bound(1023)],
        'objectiveDescription': [idl.bound(1023)],
        'preferredResourceID': [idl.bound(16)],
        'stateTrigger': [idl.bound(16)],
        'specializationTopic': [idl.bound(1023)],
    }
)
class UMAA_MM_BaseType_ObjectiveType:
    approvalRequired: bool = False
    duringConditionID: Optional[UMAA.Common.Measurement.NumericGUID] = None
    name: str = ""
    objectiveDescription: str = ""
    objectiveID: UMAA.Common.Measurement.NumericGUID = field(default_factory = UMAA.Common.Measurement.NumericGUID)
    objectivePriority: idl.int32 = 0
    preconditionID: Optional[UMAA.Common.Measurement.NumericGUID] = None
    preferredResourceID: Sequence[UMAA.Common.IdentifierType] = field(default_factory = list)
    stateTrigger: Sequence[UMAA.MM.BaseType.StateTriggerType] = field(default_factory = list)
    specializationID: UMAA.Common.Measurement.NumericGUID = field(default_factory = UMAA.Common.Measurement.NumericGUID)
    specializationTimestamp: UMAA.Common.Measurement.DateTime = field(default_factory = UMAA.Common.Measurement.DateTime)
    specializationTopic: str = ""

UMAA.MM.BaseType.ObjectiveType = UMAA_MM_BaseType_ObjectiveType
