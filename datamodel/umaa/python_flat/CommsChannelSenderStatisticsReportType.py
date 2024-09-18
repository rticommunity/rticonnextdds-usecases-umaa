
# WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

# This file was generated from CommsChannelSenderStatisticsReportType.idl
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

sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/CO/CommsChannel/'))
from CommsChannelSenderStatisticsType import *
sys.path.pop()
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/Common/'))
from IdentifierType import *
sys.path.pop()
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/Common/Measurement/'))
from Measurements import *
sys.path.pop()

UMAA = idl.get_module("UMAA")

UMAA_CO = idl.get_module("UMAA_CO")

UMAA.CO = UMAA_CO

UMAA_CO_CommsChannelStatus = idl.get_module("UMAA_CO_CommsChannelStatus")

UMAA.CO.CommsChannelStatus = UMAA_CO_CommsChannelStatus

UMAA_CO_CommsChannelStatus_CommsChannelSenderStatisticsReportTypeTopic = "UMAA::CO::CommsChannelStatus::CommsChannelSenderStatisticsReportType"

UMAA.CO.CommsChannelStatus.CommsChannelSenderStatisticsReportTypeTopic = UMAA_CO_CommsChannelStatus_CommsChannelSenderStatisticsReportTypeTopic

@idl.struct(
    type_annotations = [idl.type_name("UMAA::CO::CommsChannelStatus::CommsChannelSenderStatisticsReportType")],
    member_annotations = {
        'senderStatistics': [idl.bound(256)],
        'source': [idl.key, ],
    }
)
class UMAA_CO_CommsChannelStatus_CommsChannelSenderStatisticsReportType:
    senderStatistics: Sequence[UMAA.CO.CommsChannel.CommsChannelSenderStatisticsType] = field(default_factory = list)
    timeStamp: UMAA.Common.Measurement.DateTime = field(default_factory = UMAA.Common.Measurement.DateTime)
    source: UMAA.Common.IdentifierType = field(default_factory = UMAA.Common.IdentifierType)

UMAA.CO.CommsChannelStatus.CommsChannelSenderStatisticsReportType = UMAA_CO_CommsChannelStatus_CommsChannelSenderStatisticsReportType
