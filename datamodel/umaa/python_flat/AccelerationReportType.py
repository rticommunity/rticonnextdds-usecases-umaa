
# WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

# This file was generated from AccelerationReportType.idl
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
from Acceleration3DPlatformXYZ import *
sys.path.pop()
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/Common/Measurement/'))
from CovarianceAccelerationPlatformXYZType import *
sys.path.pop()
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/Common/Measurement/'))
from CovarianceOrientationAccelerationPlatformXYZType import *
sys.path.pop()
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/Common/Measurement/'))
from Measurements import *
sys.path.pop()
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/Common/Orientation/'))
from OrientationAcceleration3DPlatformXYZ import *
sys.path.pop()

UMAA = idl.get_module("UMAA")

UMAA_SA = idl.get_module("UMAA_SA")

UMAA.SA = UMAA_SA

UMAA_SA_AccelerationStatus = idl.get_module("UMAA_SA_AccelerationStatus")

UMAA.SA.AccelerationStatus = UMAA_SA_AccelerationStatus

UMAA_SA_AccelerationStatus_AccelerationReportTypeTopic = "UMAA::SA::AccelerationStatus::AccelerationReportType"

UMAA.SA.AccelerationStatus.AccelerationReportTypeTopic = UMAA_SA_AccelerationStatus_AccelerationReportTypeTopic

@idl.struct(
    type_annotations = [idl.type_name("UMAA::SA::AccelerationStatus::AccelerationReportType")],
    member_annotations = {
        'source': [idl.key, ],
    }
)
class UMAA_SA_AccelerationStatus_AccelerationReportType:
    acceleration: UMAA.Common.Measurement.Acceleration3DPlatformXYZ = field(default_factory = UMAA.Common.Measurement.Acceleration3DPlatformXYZ)
    accelerationCovariance: Optional[UMAA.Common.Measurement.CovarianceAccelerationPlatformXYZType] = None
    rotationalAcceleration: Optional[UMAA.Common.Orientation.OrientationAcceleration3DPlatformXYZ] = None
    rotationalAccelerationCovariance: Optional[UMAA.Common.Measurement.CovarianceOrientationAccelerationPlatformXYZType] = None
    timeStamp: UMAA.Common.Measurement.DateTime = field(default_factory = UMAA.Common.Measurement.DateTime)
    source: UMAA.Common.IdentifierType = field(default_factory = UMAA.Common.IdentifierType)

UMAA.SA.AccelerationStatus.AccelerationReportType = UMAA_SA_AccelerationStatus_AccelerationReportType
