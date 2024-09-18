
# WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

# This file was generated from PropulsorSpecsType.idl
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

sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/Common/Angle/'))
from GammaAnglePropulsorToleranceType import *
sys.path.pop()
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/Common/Angle/'))
from PropellerPitchAnglePropulsorToleranceType import *
sys.path.pop()
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/Common/Angle/'))
from RhoAnglePropulsorToleranceType import *
sys.path.pop()
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/Common/Enumeration/'))
from EnumerationSets import *
sys.path.pop()
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/Common/Measurement/'))
from Measurements import *
sys.path.pop()
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/Common/Measurement/'))
from Position3DBodyXYZ import *
sys.path.pop()
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/Common/Orientation/'))
from Orientation3DPlatformType import *
sys.path.pop()
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/Common/PrimitiveConstrained/'))
from ConstrainedTypes import *
sys.path.pop()

UMAA = idl.get_module("UMAA")

UMAA_EO = idl.get_module("UMAA_EO")

UMAA.EO = UMAA_EO

UMAA_EO_PropulsorsSpecs = idl.get_module("UMAA_EO_PropulsorsSpecs")

UMAA.EO.PropulsorsSpecs = UMAA_EO_PropulsorsSpecs

@idl.struct(
    type_annotations = [idl.type_name("UMAA::EO::PropulsorsSpecs::PropulsorSpecsType")],
    member_annotations = {
        'name': [idl.bound(1023)],
    }
)
class UMAA_EO_PropulsorsSpecs_PropulsorSpecsType:
    counterRotator: bool = False
    gamma: Optional[UMAA.Common.Angle.GammaAnglePropulsorToleranceType] = None
    name: str = ""
    orientation: UMAA.Common.Orientation.Orientation3DPlatformType = field(default_factory = UMAA.Common.Orientation.Orientation3DPlatformType)
    position: UMAA.Common.Measurement.Position3DBodyXYZ = field(default_factory = UMAA.Common.Measurement.Position3DBodyXYZ)
    propellerPitch: Optional[UMAA.Common.Angle.PropellerPitchAnglePropulsorToleranceType] = None
    propulsionLowerLimit: Optional[idl.int32] = None
    propulsionUpperLimit: idl.int32 = 0
    rho: Optional[UMAA.Common.Angle.RhoAnglePropulsorToleranceType] = None

UMAA.EO.PropulsorsSpecs.PropulsorSpecsType = UMAA_EO_PropulsorsSpecs_PropulsorSpecsType