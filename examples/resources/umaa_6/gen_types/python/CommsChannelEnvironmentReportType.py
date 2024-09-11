
# WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

# This file was generated from CommsChannelEnvironmentReportType.idl
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
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/Common/PrimitiveConstrained/'))
from ConstrainedTypes import *
sys.path.pop()

UMAA = idl.get_module("UMAA")

UMAA_CO = idl.get_module("UMAA_CO")

UMAA.CO = UMAA_CO

UMAA_CO_CommsChannelEnvironmentReport = idl.get_module("UMAA_CO_CommsChannelEnvironmentReport")

UMAA.CO.CommsChannelEnvironmentReport = UMAA_CO_CommsChannelEnvironmentReport

UMAA_CO_CommsChannelEnvironmentReport_CommsChannelEnvironmentReportTypeTopic = "UMAA::CO::CommsChannelEnvironmentReport::CommsChannelEnvironmentReportType"

UMAA.CO.CommsChannelEnvironmentReport.CommsChannelEnvironmentReportTypeTopic = UMAA_CO_CommsChannelEnvironmentReport_CommsChannelEnvironmentReportTypeTopic

@idl.struct(
    type_annotations = [idl.type_name("UMAA::CO::CommsChannelEnvironmentReport::CommsChannelEnvironmentReportType")],
    member_annotations = {
        'source': [idl.key, ],
    }
)
class UMAA_CO_CommsChannelEnvironmentReport_CommsChannelEnvironmentReportType:
    mostRecentSNR: float = 0.0
    timeStamp: UMAA.Common.Measurement.DateTime = field(default_factory = UMAA.Common.Measurement.DateTime)
    source: UMAA.Common.IdentifierType = field(default_factory = UMAA.Common.IdentifierType)

UMAA.CO.CommsChannelEnvironmentReport.CommsChannelEnvironmentReportType = UMAA_CO_CommsChannelEnvironmentReport_CommsChannelEnvironmentReportType
