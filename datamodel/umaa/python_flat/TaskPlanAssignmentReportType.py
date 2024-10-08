
# WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

# This file was generated from TaskPlanAssignmentReportType.idl
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
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/Common/Measurement/'))
from Measurements import *
sys.path.pop()

UMAA = idl.get_module("UMAA")

UMAA_MM = idl.get_module("UMAA_MM")

UMAA.MM = UMAA_MM

UMAA_MM_TaskPlanAssignmentReport = idl.get_module("UMAA_MM_TaskPlanAssignmentReport")

UMAA.MM.TaskPlanAssignmentReport = UMAA_MM_TaskPlanAssignmentReport

UMAA_MM_TaskPlanAssignmentReport_TaskPlanAssignmentReportTypeTopic = "UMAA::MM::TaskPlanAssignmentReport::TaskPlanAssignmentReportType"

UMAA.MM.TaskPlanAssignmentReport.TaskPlanAssignmentReportTypeTopic = UMAA_MM_TaskPlanAssignmentReport_TaskPlanAssignmentReportTypeTopic

@idl.struct(
    type_annotations = [idl.type_name("UMAA::MM::TaskPlanAssignmentReport::TaskPlanAssignmentReportType")],
    member_annotations = {
        'resourceIDs': [idl.bound(256)],
        'source': [idl.key, ],
        'missionID': [idl.key, ],
        'taskID': [idl.key, ],
    }
)
class UMAA_MM_TaskPlanAssignmentReport_TaskPlanAssignmentReportType:
    resourceIDs: Sequence[UMAA.Common.IdentifierType] = field(default_factory = list)
    timeStamp: UMAA.Common.Measurement.DateTime = field(default_factory = UMAA.Common.Measurement.DateTime)
    source: UMAA.Common.IdentifierType = field(default_factory = UMAA.Common.IdentifierType)
    missionID: UMAA.Common.Measurement.NumericGUID = field(default_factory = UMAA.Common.Measurement.NumericGUID)
    taskID: UMAA.Common.Measurement.NumericGUID = field(default_factory = UMAA.Common.Measurement.NumericGUID)

UMAA.MM.TaskPlanAssignmentReport.TaskPlanAssignmentReportType = UMAA_MM_TaskPlanAssignmentReport_TaskPlanAssignmentReportType
