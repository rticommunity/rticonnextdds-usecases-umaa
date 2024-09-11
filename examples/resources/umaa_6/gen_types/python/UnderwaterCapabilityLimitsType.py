
# WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

# This file was generated from UnderwaterCapabilityLimitsType.idl
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
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/Common/Measurement/'))
from OrientationAcceleration3D import *
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
    type_annotations = [idl.type_name("UMAA::EO::UVPlatformSpecs::UnderwaterCapabilityLimitsType")])
class UMAA_EO_UVPlatformSpecs_UnderwaterCapabilityLimitsType:
    cruisingSpeed: Optional[float] = None
    maxAcceleration: Optional[float] = None
    maxAttitudeAcceleration: Optional[UMAA.Common.Measurement.OrientationAcceleration3D] = None
    maxAttitudeDeceleration: Optional[UMAA.Common.Measurement.OrientationAcceleration3D] = None
    maxDeceleration: Optional[float] = None
    maxDepthAcceleration: Optional[float] = None
    maxDepthChangeRate: Optional[float] = None
    maxForwardSpeed: Optional[float] = None
    maxPitchRate: Optional[float] = None
    maxReverseSpeed: Optional[float] = None
    maxTowingSpeed: Optional[float] = None
    maxTowingTurnAcceleration: Optional[float] = None
    maxTowingTurnRate: Optional[float] = None
    maxTurnAcceleration: Optional[float] = None
    maxTurnRate: Optional[float] = None
    maxVehicleDepth: Optional[float] = None
    minSpeedInMedium: Optional[float] = None
    minTowingSpeed: Optional[float] = None

UMAA.EO.UVPlatformSpecs.UnderwaterCapabilityLimitsType = UMAA_EO_UVPlatformSpecs_UnderwaterCapabilityLimitsType
