
# WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

# This file was generated from TaskPlanExecutionReportType.idl
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

UMAA_MM = idl.get_module("UMAA_MM")

UMAA.MM = UMAA_MM

UMAA_MM_TaskPlanExecutionStatus = idl.get_module("UMAA_MM_TaskPlanExecutionStatus")

UMAA.MM.TaskPlanExecutionStatus = UMAA_MM_TaskPlanExecutionStatus

UMAA_MM_TaskPlanExecutionStatus_TaskPlanExecutionReportTypeTopic = "UMAA::MM::TaskPlanExecutionStatus::TaskPlanExecutionReportType"

UMAA.MM.TaskPlanExecutionStatus.TaskPlanExecutionReportTypeTopic = UMAA_MM_TaskPlanExecutionStatus_TaskPlanExecutionReportTypeTopic

@idl.struct(
    type_annotations = [idl.type_name("UMAA::MM::TaskPlanExecutionStatus::TaskPlanExecutionReportType")],
    member_annotations = {
        'feedback': [idl.bound(1023)],
        'source': [idl.key, ],
        'missionID': [idl.key, ],
        'taskID': [idl.key, ],
    }
)
class UMAA_MM_TaskPlanExecutionStatus_TaskPlanExecutionReportType:
    endTime: Optional[UMAA.Common.Measurement.DateTime] = None
    feedback: str = ""
    startTime: Optional[UMAA.Common.Measurement.DateTime] = None
    state: UMAA.Common.MaritimeEnumeration.TaskStateEnumModule.TaskStateEnumType = UMAA.Common.MaritimeEnumeration.TaskStateEnumModule.TaskStateEnumType.AWAITING_EXECUTION_APPROVAL
    timeStamp: UMAA.Common.Measurement.DateTime = field(default_factory = UMAA.Common.Measurement.DateTime)
    source: UMAA.Common.IdentifierType = field(default_factory = UMAA.Common.IdentifierType)
    missionID: UMAA.Common.Measurement.NumericGUID = field(default_factory = UMAA.Common.Measurement.NumericGUID)
    taskID: UMAA.Common.Measurement.NumericGUID = field(default_factory = UMAA.Common.Measurement.NumericGUID)

UMAA.MM.TaskPlanExecutionStatus.TaskPlanExecutionReportType = UMAA_MM_TaskPlanExecutionStatus_TaskPlanExecutionReportType
