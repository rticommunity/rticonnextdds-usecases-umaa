
# WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

# This file was generated from ECEFPoseReportType.idl
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
from CovarianceOrientationNEDType import *
sys.path.pop()
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/Common/Measurement/'))
from CovariancePositionECEFType import *
sys.path.pop()
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/Common/Measurement/'))
from Measurements import *
sys.path.pop()
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/Common/Orientation/'))
from Orientation3DNEDType import *
sys.path.pop()

UMAA = idl.get_module("UMAA")

UMAA_SA = idl.get_module("UMAA_SA")

UMAA.SA = UMAA_SA

UMAA_SA_ECEFPoseStatus = idl.get_module("UMAA_SA_ECEFPoseStatus")

UMAA.SA.ECEFPoseStatus = UMAA_SA_ECEFPoseStatus

UMAA_SA_ECEFPoseStatus_ECEFPoseReportTypeTopic = "UMAA::SA::ECEFPoseStatus::ECEFPoseReportType"

UMAA.SA.ECEFPoseStatus.ECEFPoseReportTypeTopic = UMAA_SA_ECEFPoseStatus_ECEFPoseReportTypeTopic

@idl.struct(
    type_annotations = [idl.type_name("UMAA::SA::ECEFPoseStatus::ECEFPoseReportType")],
    member_annotations = {
        'source': [idl.key, ],
    }
)
class UMAA_SA_ECEFPoseStatus_ECEFPoseReportType:
    attitude: UMAA.Common.Orientation.Orientation3DNEDType = field(default_factory = UMAA.Common.Orientation.Orientation3DNEDType)
    attitudeCovariance: Optional[UMAA.Common.Measurement.CovarianceOrientationNEDType] = None
    positionCovariance: Optional[UMAA.Common.Measurement.CovariancePositionECEFType] = None
    xPosition: float = 0.0
    yPosition: float = 0.0
    zPosition: float = 0.0
    timeStamp: UMAA.Common.Measurement.DateTime = field(default_factory = UMAA.Common.Measurement.DateTime)
    source: UMAA.Common.IdentifierType = field(default_factory = UMAA.Common.IdentifierType)

UMAA.SA.ECEFPoseStatus.ECEFPoseReportType = UMAA_SA_ECEFPoseStatus_ECEFPoseReportType
