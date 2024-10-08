
# WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

# This file was generated from TaskPlanType.idl
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
from ObjectiveType import *
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
    type_annotations = [idl.type_name("UMAA::MM::BaseType::TaskPlanType")],
    member_annotations = {
        'name': [idl.bound(1023)],
        'stateTrigger': [idl.bound(16)],
        'taskDescription': [idl.bound(1023)],
    }
)
class UMAA_MM_BaseType_TaskPlanType:
    approvalRequired: bool = False
    name: str = ""
    stateTrigger: Sequence[UMAA.MM.BaseType.StateTriggerType] = field(default_factory = list)
    taskDescription: str = ""
    taskID: UMAA.Common.Measurement.NumericGUID = field(default_factory = UMAA.Common.Measurement.NumericGUID)
    taskPriority: idl.int32 = 0
    objectivesSetMetadata: UMAA.Common.LargeSetMetadata = field(default_factory = UMAA.Common.LargeSetMetadata)

UMAA.MM.BaseType.TaskPlanType = UMAA_MM_BaseType_TaskPlanType

UMAA_MM_BaseType_TaskPlanTypeObjectivesSetElementTopic = "UMAA::MM::BaseType::TaskPlanTypeObjectivesSetElement"

UMAA.MM.BaseType.TaskPlanTypeObjectivesSetElementTopic = UMAA_MM_BaseType_TaskPlanTypeObjectivesSetElementTopic

@idl.struct(
    type_annotations = [idl.type_name("UMAA::MM::BaseType::TaskPlanTypeObjectivesSetElement")],
    member_annotations = {
        'setID': [idl.key, ],
        'elementID': [idl.key, ],
    }
)
class UMAA_MM_BaseType_TaskPlanTypeObjectivesSetElement:
    element: UMAA.MM.BaseType.ObjectiveType = field(default_factory = UMAA.MM.BaseType.ObjectiveType)
    setID: UMAA.Common.Measurement.NumericGUID = field(default_factory = UMAA.Common.Measurement.NumericGUID)
    elementID: UMAA.Common.Measurement.NumericGUID = field(default_factory = UMAA.Common.Measurement.NumericGUID)
    elementTimestamp: UMAA.Common.Measurement.DateTime = field(default_factory = UMAA.Common.Measurement.DateTime)

UMAA.MM.BaseType.TaskPlanTypeObjectivesSetElement = UMAA_MM_BaseType_TaskPlanTypeObjectivesSetElement
