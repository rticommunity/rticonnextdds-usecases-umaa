
# WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

# This file was generated from GlobalPoseConfigCommandType.idl
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
from CovariancePositionNEDType import *
sys.path.pop()
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/Common/Measurement/'))
from ElevationVariantType import *
sys.path.pop()
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/Common/Measurement/'))
from GeoPosition2D import *
sys.path.pop()
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/Common/Measurement/'))
from Measurements import *
sys.path.pop()
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/Common/Orientation/'))
from Orientation3DNEDRequirement import *
sys.path.pop()

UMAA = idl.get_module("UMAA")

UMAA_SA = idl.get_module("UMAA_SA")

UMAA.SA = UMAA_SA

UMAA_SA_GlobalPoseConfig = idl.get_module("UMAA_SA_GlobalPoseConfig")

UMAA.SA.GlobalPoseConfig = UMAA_SA_GlobalPoseConfig

UMAA_SA_GlobalPoseConfig_GlobalPoseConfigCommandTypeTopic = "UMAA::SA::GlobalPoseConfig::GlobalPoseConfigCommandType"

UMAA.SA.GlobalPoseConfig.GlobalPoseConfigCommandTypeTopic = UMAA_SA_GlobalPoseConfig_GlobalPoseConfigCommandTypeTopic

@idl.struct(
    type_annotations = [idl.type_name("UMAA::SA::GlobalPoseConfig::GlobalPoseConfigCommandType")],
    member_annotations = {
        'source': [idl.key, ],
        'sessionID': [idl.key, ],
        'destination': [idl.key, ],
    }
)
class UMAA_SA_GlobalPoseConfig_GlobalPoseConfigCommandType:
    attitude: UMAA.Common.Orientation.Orientation3DNEDRequirement = field(default_factory = UMAA.Common.Orientation.Orientation3DNEDRequirement)
    attitudeCovariance: Optional[UMAA.Common.Measurement.CovarianceOrientationNEDType] = None
    elevation: UMAA.Common.Measurement.ElevationVariantType = field(default_factory = UMAA.Common.Measurement.ElevationVariantType)
    position: UMAA.Common.Measurement.GeoPosition2D = field(default_factory = UMAA.Common.Measurement.GeoPosition2D)
    positionCovariance: Optional[UMAA.Common.Measurement.CovariancePositionNEDType] = None
    timeStamp: UMAA.Common.Measurement.DateTime = field(default_factory = UMAA.Common.Measurement.DateTime)
    source: UMAA.Common.IdentifierType = field(default_factory = UMAA.Common.IdentifierType)
    sessionID: UMAA.Common.Measurement.NumericGUID = field(default_factory = UMAA.Common.Measurement.NumericGUID)
    destination: UMAA.Common.IdentifierType = field(default_factory = UMAA.Common.IdentifierType)

UMAA.SA.GlobalPoseConfig.GlobalPoseConfigCommandType = UMAA_SA_GlobalPoseConfig_GlobalPoseConfigCommandType
