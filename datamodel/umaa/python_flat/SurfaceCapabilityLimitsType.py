
# WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

# This file was generated from SurfaceCapabilityLimitsType.idl
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

sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/Common/Measurement/'))
from Measurements import *
sys.path.pop()
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/Common/PrimitiveConstrained/'))
from ConstrainedTypes import *
sys.path.pop()

UMAA = idl.get_module("UMAA")

UMAA_EO = idl.get_module("UMAA_EO")

UMAA.EO = UMAA_EO

UMAA_EO_UVPlatformSpecs = idl.get_module("UMAA_EO_UVPlatformSpecs")

UMAA.EO.UVPlatformSpecs = UMAA_EO_UVPlatformSpecs

@idl.struct(
    type_annotations = [idl.type_name("UMAA::EO::UVPlatformSpecs::SurfaceCapabilityLimitsType")])
class UMAA_EO_UVPlatformSpecs_SurfaceCapabilityLimitsType:
    cruisingSpeed: Optional[float] = None
    maxAcceleration: Optional[float] = None
    maxDeceleration: Optional[float] = None
    maxForwardSpeed: Optional[float] = None
    maxReverseSpeed: Optional[float] = None
    maxTowingSpeed: Optional[float] = None
    maxTowingTurnAcceleration: Optional[float] = None
    maxTowingTurnRate: Optional[float] = None
    maxTurnAcceleration: Optional[float] = None
    maxTurnRate: Optional[float] = None
    minSpeedInMedium: Optional[float] = None
    minTowingSpeed: Optional[float] = None

UMAA.EO.UVPlatformSpecs.SurfaceCapabilityLimitsType = UMAA_EO_UVPlatformSpecs_SurfaceCapabilityLimitsType
