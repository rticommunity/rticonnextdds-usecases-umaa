
# WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

# This file was generated from EngineSpecsReportType.idl
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
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/Common/PrimitiveConstrained/'))
from ConstrainedTypes import *
sys.path.pop()

UMAA = idl.get_module("UMAA")

UMAA_EO = idl.get_module("UMAA_EO")

UMAA.EO = UMAA_EO

UMAA_EO_EngineSpecs = idl.get_module("UMAA_EO_EngineSpecs")

UMAA.EO.EngineSpecs = UMAA_EO_EngineSpecs

UMAA_EO_EngineSpecs_EngineSpecsReportTypeTopic = "UMAA::EO::EngineSpecs::EngineSpecsReportType"

UMAA.EO.EngineSpecs.EngineSpecsReportTypeTopic = UMAA_EO_EngineSpecs_EngineSpecsReportTypeTopic

@idl.struct(
    type_annotations = [idl.type_name("UMAA::EO::EngineSpecs::EngineSpecsReportType")],
    member_annotations = {
        'name': [idl.bound(1023)],
        'source': [idl.key, ],
    }
)
class UMAA_EO_EngineSpecs_EngineSpecsReportType:
    engineKind: UMAA.Common.MaritimeEnumeration.EngineKindEnumModule.EngineKindEnumType = UMAA.Common.MaritimeEnumeration.EngineKindEnumModule.EngineKindEnumType.DIESEL
    glowPlugTime: Optional[float] = None
    maxCoolantLevel: float = 0.0
    maxCoolantPressure: float = 0.0
    maxCoolantTemp: float = 0.0
    maxEngineTemp: float = 0.0
    maxGlowPlugTemp: Optional[float] = None
    maxManifoldAirTemp: float = 0.0
    maxManifoldPressure: float = 0.0
    maxOilPressure: float = 0.0
    maxOilTemp: float = 0.0
    minCoolantLevel: float = 0.0
    minOilLevel: float = 0.0
    name: str = ""
    oilCapacity: float = 0.0
    reverseRPMLowerLimit: float = 0.0
    reverseRPMMaxLimit: float = 0.0
    reverseRPMUpperLimit: float = 0.0
    reversible: bool = False
    RPMLowerLimit: float = 0.0
    RPMMaxLimit: float = 0.0
    RPMUpperLimit: float = 0.0
    timeStamp: UMAA.Common.Measurement.DateTime = field(default_factory = UMAA.Common.Measurement.DateTime)
    source: UMAA.Common.IdentifierType = field(default_factory = UMAA.Common.IdentifierType)

UMAA.EO.EngineSpecs.EngineSpecsReportType = UMAA_EO_EngineSpecs_EngineSpecsReportType
