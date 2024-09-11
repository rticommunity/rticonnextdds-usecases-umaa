
# WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

# This file was generated from GlobalPoseConfigReportType.idl
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
from Measurements import *
sys.path.pop()

UMAA = idl.get_module("UMAA")

UMAA_SA = idl.get_module("UMAA_SA")

UMAA.SA = UMAA_SA

UMAA_SA_GlobalPoseConfig = idl.get_module("UMAA_SA_GlobalPoseConfig")

UMAA.SA.GlobalPoseConfig = UMAA_SA_GlobalPoseConfig

UMAA_SA_GlobalPoseConfig_GlobalPoseConfigReportTypeTopic = "UMAA::SA::GlobalPoseConfig::GlobalPoseConfigReportType"

UMAA.SA.GlobalPoseConfig.GlobalPoseConfigReportTypeTopic = UMAA_SA_GlobalPoseConfig_GlobalPoseConfigReportTypeTopic

@idl.struct(
    type_annotations = [idl.type_name("UMAA::SA::GlobalPoseConfig::GlobalPoseConfigReportType")],
    member_annotations = {
        'source': [idl.key, ],
    }
)
class UMAA_SA_GlobalPoseConfig_GlobalPoseConfigReportType:
    timeStamp: UMAA.Common.Measurement.DateTime = field(default_factory = UMAA.Common.Measurement.DateTime)
    source: UMAA.Common.IdentifierType = field(default_factory = UMAA.Common.IdentifierType)

UMAA.SA.GlobalPoseConfig.GlobalPoseConfigReportType = UMAA_SA_GlobalPoseConfig_GlobalPoseConfigReportType
