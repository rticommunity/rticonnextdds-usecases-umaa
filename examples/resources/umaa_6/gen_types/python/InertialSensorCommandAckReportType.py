
# WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

# This file was generated from InertialSensorCommandAckReportType.idl
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
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/SEM/InertialSensorControl/'))
from InertialSensorCommandType import *
sys.path.pop()

UMAA = idl.get_module("UMAA")

UMAA_SEM = idl.get_module("UMAA_SEM")

UMAA.SEM = UMAA_SEM

UMAA_SEM_InertialSensorControl = idl.get_module("UMAA_SEM_InertialSensorControl")

UMAA.SEM.InertialSensorControl = UMAA_SEM_InertialSensorControl

UMAA_SEM_InertialSensorControl_InertialSensorCommandAckReportTypeTopic = "UMAA::SEM::InertialSensorControl::InertialSensorCommandAckReportType"

UMAA.SEM.InertialSensorControl.InertialSensorCommandAckReportTypeTopic = UMAA_SEM_InertialSensorControl_InertialSensorCommandAckReportTypeTopic

@idl.struct(
    type_annotations = [idl.type_name("UMAA::SEM::InertialSensorControl::InertialSensorCommandAckReportType")],
    member_annotations = {
        'source': [idl.key, ],
        'sessionID': [idl.key, ],
    }
)
class UMAA_SEM_InertialSensorControl_InertialSensorCommandAckReportType:
    command: UMAA.SEM.InertialSensorControl.InertialSensorCommandType = field(default_factory = UMAA.SEM.InertialSensorControl.InertialSensorCommandType)
    timeStamp: UMAA.Common.Measurement.DateTime = field(default_factory = UMAA.Common.Measurement.DateTime)
    source: UMAA.Common.IdentifierType = field(default_factory = UMAA.Common.IdentifierType)
    sessionID: UMAA.Common.Measurement.NumericGUID = field(default_factory = UMAA.Common.Measurement.NumericGUID)

UMAA.SEM.InertialSensorControl.InertialSensorCommandAckReportType = UMAA_SEM_InertialSensorControl_InertialSensorCommandAckReportType
