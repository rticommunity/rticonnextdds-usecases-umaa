
# WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

# This file was generated from TaskPlanExecutionCommandType.idl
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

UMAA_MM = idl.get_module("UMAA_MM")

UMAA.MM = UMAA_MM

UMAA_MM_TaskPlanExecutionControl = idl.get_module("UMAA_MM_TaskPlanExecutionControl")

UMAA.MM.TaskPlanExecutionControl = UMAA_MM_TaskPlanExecutionControl

UMAA_MM_TaskPlanExecutionControl_TaskPlanExecutionCommandTypeTopic = "UMAA::MM::TaskPlanExecutionControl::TaskPlanExecutionCommandType"

UMAA.MM.TaskPlanExecutionControl.TaskPlanExecutionCommandTypeTopic = UMAA_MM_TaskPlanExecutionControl_TaskPlanExecutionCommandTypeTopic

@idl.struct(
    type_annotations = [idl.type_name("UMAA::MM::TaskPlanExecutionControl::TaskPlanExecutionCommandType")],
    member_annotations = {
        'source': [idl.key, ],
        'sessionID': [idl.key, ],
        'destination': [idl.key, ],
    }
)
class UMAA_MM_TaskPlanExecutionControl_TaskPlanExecutionCommandType:
    missionID: UMAA.Common.Measurement.NumericGUID = field(default_factory = UMAA.Common.Measurement.NumericGUID)
    state: UMAA.Common.MaritimeEnumeration.TaskControlEnumModule.TaskControlEnumType = UMAA.Common.MaritimeEnumeration.TaskControlEnumModule.TaskControlEnumType.CANCEL
    taskID: Optional[UMAA.Common.Measurement.NumericGUID] = None
    timeStamp: UMAA.Common.Measurement.DateTime = field(default_factory = UMAA.Common.Measurement.DateTime)
    source: UMAA.Common.IdentifierType = field(default_factory = UMAA.Common.IdentifierType)
    sessionID: UMAA.Common.Measurement.NumericGUID = field(default_factory = UMAA.Common.Measurement.NumericGUID)
    destination: UMAA.Common.IdentifierType = field(default_factory = UMAA.Common.IdentifierType)

UMAA.MM.TaskPlanExecutionControl.TaskPlanExecutionCommandType = UMAA_MM_TaskPlanExecutionControl_TaskPlanExecutionCommandType
