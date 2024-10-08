
# WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

# This file was generated from ObjectiveAssignmentCommandType.idl
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

UMAA_MM_ObjectiveAssignmentControl = idl.get_module("UMAA_MM_ObjectiveAssignmentControl")

UMAA.MM.ObjectiveAssignmentControl = UMAA_MM_ObjectiveAssignmentControl

UMAA_MM_ObjectiveAssignmentControl_ObjectiveAssignmentCommandTypeTopic = "UMAA::MM::ObjectiveAssignmentControl::ObjectiveAssignmentCommandType"

UMAA.MM.ObjectiveAssignmentControl.ObjectiveAssignmentCommandTypeTopic = UMAA_MM_ObjectiveAssignmentControl_ObjectiveAssignmentCommandTypeTopic

@idl.struct(
    type_annotations = [idl.type_name("UMAA::MM::ObjectiveAssignmentControl::ObjectiveAssignmentCommandType")],
    member_annotations = {
        'resourceIDs': [idl.bound(256)],
        'source': [idl.key, ],
        'sessionID': [idl.key, ],
        'destination': [idl.key, ],
    }
)
class UMAA_MM_ObjectiveAssignmentControl_ObjectiveAssignmentCommandType:
    missionID: UMAA.Common.Measurement.NumericGUID = field(default_factory = UMAA.Common.Measurement.NumericGUID)
    objectiveID: UMAA.Common.Measurement.NumericGUID = field(default_factory = UMAA.Common.Measurement.NumericGUID)
    resourceIDs: Sequence[UMAA.Common.IdentifierType] = field(default_factory = list)
    taskID: UMAA.Common.Measurement.NumericGUID = field(default_factory = UMAA.Common.Measurement.NumericGUID)
    timeStamp: UMAA.Common.Measurement.DateTime = field(default_factory = UMAA.Common.Measurement.DateTime)
    source: UMAA.Common.IdentifierType = field(default_factory = UMAA.Common.IdentifierType)
    sessionID: UMAA.Common.Measurement.NumericGUID = field(default_factory = UMAA.Common.Measurement.NumericGUID)
    destination: UMAA.Common.IdentifierType = field(default_factory = UMAA.Common.IdentifierType)

UMAA.MM.ObjectiveAssignmentControl.ObjectiveAssignmentCommandType = UMAA_MM_ObjectiveAssignmentControl_ObjectiveAssignmentCommandType
