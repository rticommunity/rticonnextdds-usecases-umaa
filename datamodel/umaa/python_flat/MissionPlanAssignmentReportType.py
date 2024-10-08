
# WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

# This file was generated from MissionPlanAssignmentReportType.idl
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

UMAA_MM_MissionPlanAssignmentReport = idl.get_module("UMAA_MM_MissionPlanAssignmentReport")

UMAA.MM.MissionPlanAssignmentReport = UMAA_MM_MissionPlanAssignmentReport

UMAA_MM_MissionPlanAssignmentReport_MissionPlanAssignmentReportTypeTopic = "UMAA::MM::MissionPlanAssignmentReport::MissionPlanAssignmentReportType"

UMAA.MM.MissionPlanAssignmentReport.MissionPlanAssignmentReportTypeTopic = UMAA_MM_MissionPlanAssignmentReport_MissionPlanAssignmentReportTypeTopic

@idl.struct(
    type_annotations = [idl.type_name("UMAA::MM::MissionPlanAssignmentReport::MissionPlanAssignmentReportType")],
    member_annotations = {
        'resourceIDs': [idl.bound(256)],
        'source': [idl.key, ],
        'missionID': [idl.key, ],
    }
)
class UMAA_MM_MissionPlanAssignmentReport_MissionPlanAssignmentReportType:
    resourceIDs: Sequence[UMAA.Common.IdentifierType] = field(default_factory = list)
    timeStamp: UMAA.Common.Measurement.DateTime = field(default_factory = UMAA.Common.Measurement.DateTime)
    source: UMAA.Common.IdentifierType = field(default_factory = UMAA.Common.IdentifierType)
    missionID: UMAA.Common.Measurement.NumericGUID = field(default_factory = UMAA.Common.Measurement.NumericGUID)

UMAA.MM.MissionPlanAssignmentReport.MissionPlanAssignmentReportType = UMAA_MM_MissionPlanAssignmentReport_MissionPlanAssignmentReportType
