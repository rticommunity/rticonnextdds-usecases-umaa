
# WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

# This file was generated from EngineReportType.idl
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

sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/Common/Enumeration/'))
from EnumerationSets import *
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

UMAA = idl.get_module("UMAA")

UMAA_EO = idl.get_module("UMAA_EO")

UMAA.EO = UMAA_EO

UMAA_EO_EngineStatus = idl.get_module("UMAA_EO_EngineStatus")

UMAA.EO.EngineStatus = UMAA_EO_EngineStatus

UMAA_EO_EngineStatus_EngineReportTypeTopic = "UMAA::EO::EngineStatus::EngineReportType"

UMAA.EO.EngineStatus.EngineReportTypeTopic = UMAA_EO_EngineStatus_EngineReportTypeTopic

@idl.struct(
    type_annotations = [idl.type_name("UMAA::EO::EngineStatus::EngineReportType")],
    member_annotations = {
        'source': [idl.key, ],
    }
)
class UMAA_EO_EngineStatus_EngineReportType:
    coolantLevel: Optional[float] = None
    coolantPressure: Optional[float] = None
    coolantTemp: Optional[float] = None
    engineTemp: Optional[float] = None
    exhaustTemp: Optional[float] = None
    glowPlugIndicator: Optional[bool] = None
    glowPlugState: Optional[UMAA.Common.Enumeration.OnOffStatusEnumModule.OnOffStatusEnumType] = None
    glowPlugTemp: Optional[float] = None
    glowPlugTimeRemaining: Optional[float] = None
    hours: Optional[float] = None
    manifoldAirTemp: Optional[float] = None
    manifoldPressure: Optional[float] = None
    oilLevel: Optional[float] = None
    oilPressure: Optional[float] = None
    oilTemp: Optional[float] = None
    percentOilPressure: Optional[float] = None
    RPM: Optional[float] = None
    state: UMAA.Common.MaritimeEnumeration.IgnitionStateEnumModule.IgnitionStateEnumType = UMAA.Common.MaritimeEnumeration.IgnitionStateEnumModule.IgnitionStateEnumType.OFF
    throttle: Optional[float] = None
    timeStamp: UMAA.Common.Measurement.DateTime = field(default_factory = UMAA.Common.Measurement.DateTime)
    source: UMAA.Common.IdentifierType = field(default_factory = UMAA.Common.IdentifierType)

UMAA.EO.EngineStatus.EngineReportType = UMAA_EO_EngineStatus_EngineReportType
