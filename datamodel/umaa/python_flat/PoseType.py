
# WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

# This file was generated from PoseType.idl
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

sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/Common/MaritimeEnumeration/'))
from MaritimeEnumerationSets import *
sys.path.pop()
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/Common/Measurement/'))
from CovariancePositionNEDType import *
sys.path.pop()
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/Common/Measurement/'))
from GeoPosition2D import *
sys.path.pop()
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/Common/Measurement/'))
from Measurements import *
sys.path.pop()
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/Common/Orientation/'))
from Orientation3DNEDType import *
sys.path.pop()
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/Common/PrimitiveConstrained/'))
from ConstrainedTypes import *
sys.path.pop()

UMAA = idl.get_module("UMAA")

UMAA_Common = idl.get_module("UMAA_Common")

UMAA.Common = UMAA_Common

UMAA_Common_Environment = idl.get_module("UMAA_Common_Environment")

UMAA.Common.Environment = UMAA_Common_Environment

@idl.struct(
    type_annotations = [idl.type_name("UMAA::Common::Environment::PoseType")])
class UMAA_Common_Environment_PoseType:
    altitude: Optional[float] = None
    altitudeAGL: Optional[float] = None
    altitudeASF: Optional[float] = None
    altitudeGeodetic: Optional[float] = None
    attitude: UMAA.Common.Orientation.Orientation3DNEDType = field(default_factory = UMAA.Common.Orientation.Orientation3DNEDType)
    course: float = 0.0
    depth: Optional[float] = None
    navigationSolution: UMAA.Common.MaritimeEnumeration.NavigationSolutionEnumModule.NavigationSolutionEnumType = UMAA.Common.MaritimeEnumeration.NavigationSolutionEnumModule.NavigationSolutionEnumType.ESTIMATED
    position: UMAA.Common.Measurement.GeoPosition2D = field(default_factory = UMAA.Common.Measurement.GeoPosition2D)
    positionCovariance: Optional[UMAA.Common.Measurement.CovariancePositionNEDType] = None

UMAA.Common.Environment.PoseType = UMAA_Common_Environment_PoseType