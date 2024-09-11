
# WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

# This file was generated from IlluminatorReportType.idl
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
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/Common/PrimitiveConstrained/'))
from ConstrainedTypes import *
sys.path.pop()
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/SEM/BaseType/'))
from RGBType import *
sys.path.pop()

UMAA = idl.get_module("UMAA")

UMAA_SEM = idl.get_module("UMAA_SEM")

UMAA.SEM = UMAA_SEM

UMAA_SEM_IlluminatorStatus = idl.get_module("UMAA_SEM_IlluminatorStatus")

UMAA.SEM.IlluminatorStatus = UMAA_SEM_IlluminatorStatus

UMAA_SEM_IlluminatorStatus_IlluminatorReportTypeTopic = "UMAA::SEM::IlluminatorStatus::IlluminatorReportType"

UMAA.SEM.IlluminatorStatus.IlluminatorReportTypeTopic = UMAA_SEM_IlluminatorStatus_IlluminatorReportTypeTopic

@idl.struct(
    type_annotations = [idl.type_name("UMAA::SEM::IlluminatorStatus::IlluminatorReportType")],
    member_annotations = {
        'source': [idl.key, ],
    }
)
class UMAA_SEM_IlluminatorStatus_IlluminatorReportType:
    beamWidth: Optional[float] = None
    color: Optional[UMAA.SEM.BaseType.RGBType] = None
    intensity: Optional[float] = None
    state: UMAA.Common.MaritimeEnumeration.IlluminatorStateEnumModule.IlluminatorStateEnumType = UMAA.Common.MaritimeEnumeration.IlluminatorStateEnumModule.IlluminatorStateEnumType.FLASHING
    timeStamp: UMAA.Common.Measurement.DateTime = field(default_factory = UMAA.Common.Measurement.DateTime)
    source: UMAA.Common.IdentifierType = field(default_factory = UMAA.Common.IdentifierType)

UMAA.SEM.IlluminatorStatus.IlluminatorReportType = UMAA_SEM_IlluminatorStatus_IlluminatorReportType
