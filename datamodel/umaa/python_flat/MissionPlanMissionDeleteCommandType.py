
# WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

# This file was generated from MissionPlanMissionDeleteCommandType.idl
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

UMAA_MM_MissionPlanMissionControl = idl.get_module("UMAA_MM_MissionPlanMissionControl")

UMAA.MM.MissionPlanMissionControl = UMAA_MM_MissionPlanMissionControl

UMAA_MM_MissionPlanMissionControl_MissionPlanMissionDeleteCommandTypeTopic = "UMAA::MM::MissionPlanMissionControl::MissionPlanMissionDeleteCommandType"

UMAA.MM.MissionPlanMissionControl.MissionPlanMissionDeleteCommandTypeTopic = UMAA_MM_MissionPlanMissionControl_MissionPlanMissionDeleteCommandTypeTopic

@idl.struct(
    type_annotations = [idl.type_name("UMAA::MM::MissionPlanMissionControl::MissionPlanMissionDeleteCommandType")],
    member_annotations = {
        'source': [idl.key, ],
        'sessionID': [idl.key, ],
        'destination': [idl.key, ],
    }
)
class UMAA_MM_MissionPlanMissionControl_MissionPlanMissionDeleteCommandType:
    missionID: Optional[UMAA.Common.Measurement.NumericGUID] = None
    timeStamp: UMAA.Common.Measurement.DateTime = field(default_factory = UMAA.Common.Measurement.DateTime)
    source: UMAA.Common.IdentifierType = field(default_factory = UMAA.Common.IdentifierType)
    sessionID: UMAA.Common.Measurement.NumericGUID = field(default_factory = UMAA.Common.Measurement.NumericGUID)
    destination: UMAA.Common.IdentifierType = field(default_factory = UMAA.Common.IdentifierType)

UMAA.MM.MissionPlanMissionControl.MissionPlanMissionDeleteCommandType = UMAA_MM_MissionPlanMissionControl_MissionPlanMissionDeleteCommandType