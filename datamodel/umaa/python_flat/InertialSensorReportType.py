
# WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

# This file was generated from InertialSensorReportType.idl
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

UMAA_SEM = idl.get_module("UMAA_SEM")

UMAA.SEM = UMAA_SEM

UMAA_SEM_InertialSensorStatus = idl.get_module("UMAA_SEM_InertialSensorStatus")

UMAA.SEM.InertialSensorStatus = UMAA_SEM_InertialSensorStatus

UMAA_SEM_InertialSensorStatus_InertialSensorReportTypeTopic = "UMAA::SEM::InertialSensorStatus::InertialSensorReportType"

UMAA.SEM.InertialSensorStatus.InertialSensorReportTypeTopic = UMAA_SEM_InertialSensorStatus_InertialSensorReportTypeTopic

@idl.struct(
    type_annotations = [idl.type_name("UMAA::SEM::InertialSensorStatus::InertialSensorReportType")],
    member_annotations = {
        'source': [idl.key, ],
    }
)
class UMAA_SEM_InertialSensorStatus_InertialSensorReportType:
    status: UMAA.Common.MaritimeEnumeration.InertialSensorOpStatusEnumModule.InertialSensorOpStatusEnumType = UMAA.Common.MaritimeEnumeration.InertialSensorOpStatusEnumModule.InertialSensorOpStatusEnumType.BEST_ALIGNMENT_FAILURE
    timeStamp: UMAA.Common.Measurement.DateTime = field(default_factory = UMAA.Common.Measurement.DateTime)
    source: UMAA.Common.IdentifierType = field(default_factory = UMAA.Common.IdentifierType)

UMAA.SEM.InertialSensorStatus.InertialSensorReportType = UMAA_SEM_InertialSensorStatus_InertialSensorReportType
