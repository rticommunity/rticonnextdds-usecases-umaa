
# WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

# This file was generated from UVPlatformCapabilitiesReportType.idl
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
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/EO/UVPlatformSpecs/'))
from SurfaceCapabilityLimitsType import *
sys.path.pop()
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/EO/UVPlatformSpecs/'))
from UnderwaterCapabilityLimitsType import *
sys.path.pop()

UMAA = idl.get_module("UMAA")

UMAA_EO = idl.get_module("UMAA_EO")

UMAA.EO = UMAA_EO

UMAA_EO_UVPlatformSpecs = idl.get_module("UMAA_EO_UVPlatformSpecs")

UMAA.EO.UVPlatformSpecs = UMAA_EO_UVPlatformSpecs

UMAA_EO_UVPlatformSpecs_UVPlatformCapabilitiesReportTypeTopic = "UMAA::EO::UVPlatformSpecs::UVPlatformCapabilitiesReportType"

UMAA.EO.UVPlatformSpecs.UVPlatformCapabilitiesReportTypeTopic = UMAA_EO_UVPlatformSpecs_UVPlatformCapabilitiesReportTypeTopic

@idl.struct(
    type_annotations = [idl.type_name("UMAA::EO::UVPlatformSpecs::UVPlatformCapabilitiesReportType")],
    member_annotations = {
        'source': [idl.key, ],
    }
)
class UMAA_EO_UVPlatformSpecs_UVPlatformCapabilitiesReportType:
    minWaterDepth: float = 0.0
    surfaceCapabilities: UMAA.EO.UVPlatformSpecs.SurfaceCapabilityLimitsType = field(default_factory = UMAA.EO.UVPlatformSpecs.SurfaceCapabilityLimitsType)
    towingCapacity: Optional[float] = None
    underwaterCapabilities: Optional[UMAA.EO.UVPlatformSpecs.UnderwaterCapabilityLimitsType] = None
    timeStamp: UMAA.Common.Measurement.DateTime = field(default_factory = UMAA.Common.Measurement.DateTime)
    source: UMAA.Common.IdentifierType = field(default_factory = UMAA.Common.IdentifierType)

UMAA.EO.UVPlatformSpecs.UVPlatformCapabilitiesReportType = UMAA_EO_UVPlatformSpecs_UVPlatformCapabilitiesReportType
