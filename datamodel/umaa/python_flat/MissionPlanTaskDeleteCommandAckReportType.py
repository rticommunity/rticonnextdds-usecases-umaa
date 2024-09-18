
# WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

# This file was generated from MissionPlanTaskDeleteCommandAckReportType.idl
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
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/MM/MissionPlanTaskControl/'))
from MissionPlanTaskDeleteCommandType import *
sys.path.pop()

UMAA = idl.get_module("UMAA")

UMAA_MM = idl.get_module("UMAA_MM")

UMAA.MM = UMAA_MM

UMAA_MM_MissionPlanTaskControl = idl.get_module("UMAA_MM_MissionPlanTaskControl")

UMAA.MM.MissionPlanTaskControl = UMAA_MM_MissionPlanTaskControl

UMAA_MM_MissionPlanTaskControl_MissionPlanTaskDeleteCommandAckReportTypeTopic = "UMAA::MM::MissionPlanTaskControl::MissionPlanTaskDeleteCommandAckReportType"

UMAA.MM.MissionPlanTaskControl.MissionPlanTaskDeleteCommandAckReportTypeTopic = UMAA_MM_MissionPlanTaskControl_MissionPlanTaskDeleteCommandAckReportTypeTopic

@idl.struct(
    type_annotations = [idl.type_name("UMAA::MM::MissionPlanTaskControl::MissionPlanTaskDeleteCommandAckReportType")],
    member_annotations = {
        'source': [idl.key, ],
        'sessionID': [idl.key, ],
    }
)
class UMAA_MM_MissionPlanTaskControl_MissionPlanTaskDeleteCommandAckReportType:
    command: UMAA.MM.MissionPlanTaskControl.MissionPlanTaskDeleteCommandType = field(default_factory = UMAA.MM.MissionPlanTaskControl.MissionPlanTaskDeleteCommandType)
    timeStamp: UMAA.Common.Measurement.DateTime = field(default_factory = UMAA.Common.Measurement.DateTime)
    source: UMAA.Common.IdentifierType = field(default_factory = UMAA.Common.IdentifierType)
    sessionID: UMAA.Common.Measurement.NumericGUID = field(default_factory = UMAA.Common.Measurement.NumericGUID)

UMAA.MM.MissionPlanTaskControl.MissionPlanTaskDeleteCommandAckReportType = UMAA_MM_MissionPlanTaskControl_MissionPlanTaskDeleteCommandAckReportType
