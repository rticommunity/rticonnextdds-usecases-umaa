
# WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

# This file was generated from SoundVelocityProfileReportType.idl
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

sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/Common/Environment/'))
from DepthSpeedPairType import *
sys.path.pop()
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/Common/'))
from IdentifierType import *
sys.path.pop()
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/Common/Measurement/'))
from Measurements import *
sys.path.pop()

UMAA = idl.get_module("UMAA")

UMAA_SA = idl.get_module("UMAA_SA")

UMAA.SA = UMAA_SA

UMAA_SA_SoundVelocityProfileReport = idl.get_module("UMAA_SA_SoundVelocityProfileReport")

UMAA.SA.SoundVelocityProfileReport = UMAA_SA_SoundVelocityProfileReport

UMAA_SA_SoundVelocityProfileReport_SoundVelocityProfileReportTypeTopic = "UMAA::SA::SoundVelocityProfileReport::SoundVelocityProfileReportType"

UMAA.SA.SoundVelocityProfileReport.SoundVelocityProfileReportTypeTopic = UMAA_SA_SoundVelocityProfileReport_SoundVelocityProfileReportTypeTopic

@idl.struct(
    type_annotations = [idl.type_name("UMAA::SA::SoundVelocityProfileReport::SoundVelocityProfileReportType")],
    member_annotations = {
        'soundSpeed': [idl.bound(1024)],
        'source': [idl.key, ],
    }
)
class UMAA_SA_SoundVelocityProfileReport_SoundVelocityProfileReportType:
    soundSpeed: Sequence[UMAA.Common.Environment.DepthSpeedPairType] = field(default_factory = list)
    timeStamp: UMAA.Common.Measurement.DateTime = field(default_factory = UMAA.Common.Measurement.DateTime)
    source: UMAA.Common.IdentifierType = field(default_factory = UMAA.Common.IdentifierType)

UMAA.SA.SoundVelocityProfileReport.SoundVelocityProfileReportType = UMAA_SA_SoundVelocityProfileReport_SoundVelocityProfileReportType
