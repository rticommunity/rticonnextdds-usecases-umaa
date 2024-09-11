
# WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

# This file was generated from GlobalPoseReportType.idl
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
from CovarianceOrientationNEDType import *
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

UMAA_SA = idl.get_module("UMAA_SA")

UMAA.SA = UMAA_SA

UMAA_SA_GlobalPoseStatus = idl.get_module("UMAA_SA_GlobalPoseStatus")

UMAA.SA.GlobalPoseStatus = UMAA_SA_GlobalPoseStatus

UMAA_SA_GlobalPoseStatus_GlobalPoseReportTypeTopic = "UMAA::SA::GlobalPoseStatus::GlobalPoseReportType"

UMAA.SA.GlobalPoseStatus.GlobalPoseReportTypeTopic = UMAA_SA_GlobalPoseStatus_GlobalPoseReportTypeTopic

@idl.struct(
    type_annotations = [idl.type_name("UMAA::SA::GlobalPoseStatus::GlobalPoseReportType")],
    member_annotations = {
        'source': [idl.key, ],
    }
)
class UMAA_SA_GlobalPoseStatus_GlobalPoseReportType:
    altitude: Optional[float] = None
    altitudeAGL: Optional[float] = None
    altitudeASF: Optional[float] = None
    altitudeGeodetic: Optional[float] = None
    attitude: UMAA.Common.Orientation.Orientation3DNEDType = field(default_factory = UMAA.Common.Orientation.Orientation3DNEDType)
    attitudeCovariance: Optional[UMAA.Common.Measurement.CovarianceOrientationNEDType] = None
    course: float = 0.0
    depth: Optional[float] = None
    navigationSolution: UMAA.Common.MaritimeEnumeration.NavigationSolutionEnumModule.NavigationSolutionEnumType = UMAA.Common.MaritimeEnumeration.NavigationSolutionEnumModule.NavigationSolutionEnumType.ESTIMATED
    position: UMAA.Common.Measurement.GeoPosition2D = field(default_factory = UMAA.Common.Measurement.GeoPosition2D)
    positionCovariance: Optional[UMAA.Common.Measurement.CovariancePositionNEDType] = None
    timeStamp: UMAA.Common.Measurement.DateTime = field(default_factory = UMAA.Common.Measurement.DateTime)
    source: UMAA.Common.IdentifierType = field(default_factory = UMAA.Common.IdentifierType)

UMAA.SA.GlobalPoseStatus.GlobalPoseReportType = UMAA_SA_GlobalPoseStatus_GlobalPoseReportType
