
# WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

# This file was generated from MissionPlanType.idl
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
from LargeSetMetadata import *
sys.path.pop()
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/Common/Enumeration/'))
from EnumerationSets import *
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
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/MM/BaseType/'))
from TaskPlanType import *
sys.path.pop()

UMAA = idl.get_module("UMAA")

UMAA_MM = idl.get_module("UMAA_MM")

UMAA.MM = UMAA_MM

UMAA_MM_BaseType = idl.get_module("UMAA_MM_BaseType")

UMAA.MM.BaseType = UMAA_MM_BaseType

@idl.struct(
    type_annotations = [idl.type_name("UMAA::MM::BaseType::MissionPlanType")],
    member_annotations = {
        'missionDescription': [idl.bound(1023)],
        'name': [idl.bound(1023)],
        'stateTrigger': [idl.bound(16)],
    }
)
class UMAA_MM_BaseType_MissionPlanType:
    approvalRequired: bool = False
    missionDescription: str = ""
    missionID: UMAA.Common.Measurement.NumericGUID = field(default_factory = UMAA.Common.Measurement.NumericGUID)
    missionPriority: idl.int32 = 0
    name: str = ""
    stateTrigger: Sequence[UMAA.MM.BaseType.StateTriggerType] = field(default_factory = list)
    taskPlansSetMetadata: UMAA.Common.LargeSetMetadata = field(default_factory = UMAA.Common.LargeSetMetadata)

UMAA.MM.BaseType.MissionPlanType = UMAA_MM_BaseType_MissionPlanType

UMAA_MM_BaseType_MissionPlanTypeTaskPlansSetElementTopic = "UMAA::MM::BaseType::MissionPlanTypeTaskPlansSetElement"

UMAA.MM.BaseType.MissionPlanTypeTaskPlansSetElementTopic = UMAA_MM_BaseType_MissionPlanTypeTaskPlansSetElementTopic

@idl.struct(
    type_annotations = [idl.type_name("UMAA::MM::BaseType::MissionPlanTypeTaskPlansSetElement")],
    member_annotations = {
        'setID': [idl.key, ],
        'elementID': [idl.key, ],
    }
)
class UMAA_MM_BaseType_MissionPlanTypeTaskPlansSetElement:
    element: UMAA.MM.BaseType.TaskPlanType = field(default_factory = UMAA.MM.BaseType.TaskPlanType)
    setID: UMAA.Common.Measurement.NumericGUID = field(default_factory = UMAA.Common.Measurement.NumericGUID)
    elementID: UMAA.Common.Measurement.NumericGUID = field(default_factory = UMAA.Common.Measurement.NumericGUID)
    elementTimestamp: UMAA.Common.Measurement.DateTime = field(default_factory = UMAA.Common.Measurement.DateTime)

UMAA.MM.BaseType.MissionPlanTypeTaskPlansSetElement = UMAA_MM_BaseType_MissionPlanTypeTaskPlansSetElement
