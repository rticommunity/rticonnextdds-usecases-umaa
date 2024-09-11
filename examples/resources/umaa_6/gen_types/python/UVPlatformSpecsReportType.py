
# WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

# This file was generated from UVPlatformSpecsReportType.idl
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
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/Common/Measurement/'))
from Position3DBodyXYZ import *
sys.path.pop()
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/Common/PrimitiveConstrained/'))
from ConstrainedTypes import *
sys.path.pop()

UMAA = idl.get_module("UMAA")

UMAA_EO = idl.get_module("UMAA_EO")

UMAA.EO = UMAA_EO

UMAA_EO_UVPlatformSpecs = idl.get_module("UMAA_EO_UVPlatformSpecs")

UMAA.EO.UVPlatformSpecs = UMAA_EO_UVPlatformSpecs

UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportTypeTopic = "UMAA::EO::UVPlatformSpecs::UVPlatformSpecsReportType"

UMAA.EO.UVPlatformSpecs.UVPlatformSpecsReportTypeTopic = UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportTypeTopic

@idl.struct(
    type_annotations = [idl.type_name("UMAA::EO::UVPlatformSpecs::UVPlatformSpecsReportType")],
    member_annotations = {
        'name': [idl.bound(1023)],
        'source': [idl.key, ],
    }
)
class UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportType:
    aftDistance: float = 0.0
    beamAtWaterline: float = 0.0
    bottomDistance: float = 0.0
    centerOfBuoyancy: UMAA.Common.Measurement.Position3DBodyXYZ = field(default_factory = UMAA.Common.Measurement.Position3DBodyXYZ)
    centerOfGravity: UMAA.Common.Measurement.Position3DBodyXYZ = field(default_factory = UMAA.Common.Measurement.Position3DBodyXYZ)
    diameter: Optional[float] = None
    displacement: float = 0.0
    draft: float = 0.0
    forwardDistance: float = 0.0
    lengthAtWaterline: float = 0.0
    name: str = ""
    portDistance: float = 0.0
    referenceFrameOrigin: UMAA.Common.MaritimeEnumeration.ReferenceFrameOriginEnumModule.ReferenceFrameOriginEnumType = UMAA.Common.MaritimeEnumeration.ReferenceFrameOriginEnumModule.ReferenceFrameOriginEnumType.BOW_WATERLINE_INTERSECTION
    starboardDistance: float = 0.0
    topDistance: float = 0.0
    weightInWater: Optional[float] = None
    weightLight: float = 0.0
    weightLoaded: float = 0.0
    timeStamp: UMAA.Common.Measurement.DateTime = field(default_factory = UMAA.Common.Measurement.DateTime)
    source: UMAA.Common.IdentifierType = field(default_factory = UMAA.Common.IdentifierType)

UMAA.EO.UVPlatformSpecs.UVPlatformSpecsReportType = UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportType
