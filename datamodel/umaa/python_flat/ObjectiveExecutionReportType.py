
# WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

# This file was generated from ObjectiveExecutionReportType.idl
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

UMAA_MM_ObjectiveExecutionStatus = idl.get_module("UMAA_MM_ObjectiveExecutionStatus")

UMAA.MM.ObjectiveExecutionStatus = UMAA_MM_ObjectiveExecutionStatus

UMAA_MM_ObjectiveExecutionStatus_ObjectiveExecutionReportTypeTopic = "UMAA::MM::ObjectiveExecutionStatus::ObjectiveExecutionReportType"

UMAA.MM.ObjectiveExecutionStatus.ObjectiveExecutionReportTypeTopic = UMAA_MM_ObjectiveExecutionStatus_ObjectiveExecutionReportTypeTopic

@idl.struct(
    type_annotations = [idl.type_name("UMAA::MM::ObjectiveExecutionStatus::ObjectiveExecutionReportType")],
    member_annotations = {
        'childObjectiveIDs': [idl.bound(256)],
        'feedback': [idl.bound(1023)],
        'source': [idl.key, ],
        'missionID': [idl.key, ],
        'objectiveID': [idl.key, ],
        'taskID': [idl.key, ],
    }
)
class UMAA_MM_ObjectiveExecutionStatus_ObjectiveExecutionReportType:
    childObjectiveIDs: Sequence[UMAA.Common.Measurement.NumericGUID] = field(default_factory = list)
    endTime: Optional[UMAA.Common.Measurement.DateTime] = None
    feedback: str = ""
    startTime: Optional[UMAA.Common.Measurement.DateTime] = None
    state: UMAA.Common.MaritimeEnumeration.TaskStateEnumModule.TaskStateEnumType = UMAA.Common.MaritimeEnumeration.TaskStateEnumModule.TaskStateEnumType.AWAITING_EXECUTION_APPROVAL
    timeStamp: UMAA.Common.Measurement.DateTime = field(default_factory = UMAA.Common.Measurement.DateTime)
    source: UMAA.Common.IdentifierType = field(default_factory = UMAA.Common.IdentifierType)
    missionID: UMAA.Common.Measurement.NumericGUID = field(default_factory = UMAA.Common.Measurement.NumericGUID)
    objectiveID: UMAA.Common.Measurement.NumericGUID = field(default_factory = UMAA.Common.Measurement.NumericGUID)
    taskID: UMAA.Common.Measurement.NumericGUID = field(default_factory = UMAA.Common.Measurement.NumericGUID)

UMAA.MM.ObjectiveExecutionStatus.ObjectiveExecutionReportType = UMAA_MM_ObjectiveExecutionStatus_ObjectiveExecutionReportType
