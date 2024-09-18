
# WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

# This file was generated from VelocityReportType.idl
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
from CovarianceOrientationVelocityNEDType import *
sys.path.pop()
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/Common/Measurement/'))
from CovarianceVelocityNEDType import *
sys.path.pop()
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/Common/Measurement/'))
from Measurements import *
sys.path.pop()
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/Common/Measurement/'))
from OrientationVel3D import *
sys.path.pop()
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/Common/Measurement/'))
from Velocity3DPlatformNEDType import *
sys.path.pop()

UMAA = idl.get_module("UMAA")

UMAA_SA = idl.get_module("UMAA_SA")

UMAA.SA = UMAA_SA

UMAA_SA_VelocityStatus = idl.get_module("UMAA_SA_VelocityStatus")

UMAA.SA.VelocityStatus = UMAA_SA_VelocityStatus

UMAA_SA_VelocityStatus_VelocityReportTypeTopic = "UMAA::SA::VelocityStatus::VelocityReportType"

UMAA.SA.VelocityStatus.VelocityReportTypeTopic = UMAA_SA_VelocityStatus_VelocityReportTypeTopic

@idl.struct(
    type_annotations = [idl.type_name("UMAA::SA::VelocityStatus::VelocityReportType")],
    member_annotations = {
        'source': [idl.key, ],
    }
)
class UMAA_SA_VelocityStatus_VelocityReportType:
    attitudeRate: UMAA.Common.Measurement.OrientationVel3D = field(default_factory = UMAA.Common.Measurement.OrientationVel3D)
    attitudeRateCovariance: Optional[UMAA.Common.Measurement.CovarianceOrientationVelocityNEDType] = None
    velocity: UMAA.Common.Measurement.Velocity3DPlatformNEDType = field(default_factory = UMAA.Common.Measurement.Velocity3DPlatformNEDType)
    velocityCovariance: Optional[UMAA.Common.Measurement.CovarianceVelocityNEDType] = None
    timeStamp: UMAA.Common.Measurement.DateTime = field(default_factory = UMAA.Common.Measurement.DateTime)
    source: UMAA.Common.IdentifierType = field(default_factory = UMAA.Common.IdentifierType)

UMAA.SA.VelocityStatus.VelocityReportType = UMAA_SA_VelocityStatus_VelocityReportType
