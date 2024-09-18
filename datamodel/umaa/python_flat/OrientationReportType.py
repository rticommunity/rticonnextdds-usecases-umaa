
# WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

# This file was generated from OrientationReportType.idl
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
from CovarianceOrientationVelocityNEDType import *
sys.path.pop()
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/Common/Measurement/'))
from Measurements import *
sys.path.pop()
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/Common/Measurement/'))
from OrientationVel3D import *
sys.path.pop()
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/Common/Orientation/'))
from Orientation3DNEDType import *
sys.path.pop()

UMAA = idl.get_module("UMAA")

UMAA_SA = idl.get_module("UMAA_SA")

UMAA.SA = UMAA_SA

UMAA_SA_OrientationStatus = idl.get_module("UMAA_SA_OrientationStatus")

UMAA.SA.OrientationStatus = UMAA_SA_OrientationStatus

UMAA_SA_OrientationStatus_OrientationReportTypeTopic = "UMAA::SA::OrientationStatus::OrientationReportType"

UMAA.SA.OrientationStatus.OrientationReportTypeTopic = UMAA_SA_OrientationStatus_OrientationReportTypeTopic

@idl.struct(
    type_annotations = [idl.type_name("UMAA::SA::OrientationStatus::OrientationReportType")],
    member_annotations = {
        'source': [idl.key, ],
    }
)
class UMAA_SA_OrientationStatus_OrientationReportType:
    attitude: UMAA.Common.Orientation.Orientation3DNEDType = field(default_factory = UMAA.Common.Orientation.Orientation3DNEDType)
    attitudeCovariance: Optional[UMAA.Common.Measurement.CovarianceOrientationNEDType] = None
    attitudeRate: Optional[UMAA.Common.Measurement.OrientationVel3D] = None
    attitudeRateCovariance: Optional[UMAA.Common.Measurement.CovarianceOrientationVelocityNEDType] = None
    timeStamp: UMAA.Common.Measurement.DateTime = field(default_factory = UMAA.Common.Measurement.DateTime)
    source: UMAA.Common.IdentifierType = field(default_factory = UMAA.Common.IdentifierType)

UMAA.SA.OrientationStatus.OrientationReportType = UMAA_SA_OrientationStatus_OrientationReportType
