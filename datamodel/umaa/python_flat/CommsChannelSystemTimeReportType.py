
# WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

# This file was generated from CommsChannelSystemTimeReportType.idl
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

UMAA_CO = idl.get_module("UMAA_CO")

UMAA.CO = UMAA_CO

UMAA_CO_CommsChannelSystemTimeReport = idl.get_module("UMAA_CO_CommsChannelSystemTimeReport")

UMAA.CO.CommsChannelSystemTimeReport = UMAA_CO_CommsChannelSystemTimeReport

UMAA_CO_CommsChannelSystemTimeReport_CommsChannelSystemTimeReportTypeTopic = "UMAA::CO::CommsChannelSystemTimeReport::CommsChannelSystemTimeReportType"

UMAA.CO.CommsChannelSystemTimeReport.CommsChannelSystemTimeReportTypeTopic = UMAA_CO_CommsChannelSystemTimeReport_CommsChannelSystemTimeReportTypeTopic

@idl.struct(
    type_annotations = [idl.type_name("UMAA::CO::CommsChannelSystemTimeReport::CommsChannelSystemTimeReportType")],
    member_annotations = {
        'source': [idl.key, ],
    }
)
class UMAA_CO_CommsChannelSystemTimeReport_CommsChannelSystemTimeReportType:
    timeSent: UMAA.Common.Measurement.DateTime = field(default_factory = UMAA.Common.Measurement.DateTime)
    timeStamp: UMAA.Common.Measurement.DateTime = field(default_factory = UMAA.Common.Measurement.DateTime)
    source: UMAA.Common.IdentifierType = field(default_factory = UMAA.Common.IdentifierType)

UMAA.CO.CommsChannelSystemTimeReport.CommsChannelSystemTimeReportType = UMAA_CO_CommsChannelSystemTimeReport_CommsChannelSystemTimeReportType
