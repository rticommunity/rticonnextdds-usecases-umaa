
# WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

# This file was generated from CommsChannelSenderReportType.idl
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
from LargeListMetadata import *
sys.path.pop()
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/CO/CommsChannel/'))
from CommsChannelMessageType import *
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

UMAA_CO_CommsChannelStatus_CommsChannelSenderReportTypeTopic = "UMAA::CO::CommsChannelStatus::CommsChannelSenderReportType"

UMAA.CO.CommsChannelStatus.CommsChannelSenderReportTypeTopic = UMAA_CO_CommsChannelStatus_CommsChannelSenderReportTypeTopic

@idl.struct(
    type_annotations = [idl.type_name("UMAA::CO::CommsChannelStatus::CommsChannelSenderReportType")],
    member_annotations = {
        'source': [idl.key, ],
    }
)
class UMAA_CO_CommsChannelStatus_CommsChannelSenderReportType:
    bufferPercentFull: float = 0.0
    timeStamp: UMAA.Common.Measurement.DateTime = field(default_factory = UMAA.Common.Measurement.DateTime)
    source: UMAA.Common.IdentifierType = field(default_factory = UMAA.Common.IdentifierType)
    queuedMessagesListMetadata: UMAA.Common.LargeListMetadata = field(default_factory = UMAA.Common.LargeListMetadata)

UMAA.CO.CommsChannelStatus.CommsChannelSenderReportType = UMAA_CO_CommsChannelStatus_CommsChannelSenderReportType

UMAA_CO_CommsChannelStatus_CommsChannelSenderReportTypeQueuedMessagesListElementTopic = "UMAA::CO::CommsChannelStatus::CommsChannelSenderReportTypeQueuedMessagesListElement"

UMAA.CO.CommsChannelStatus.CommsChannelSenderReportTypeQueuedMessagesListElementTopic = UMAA_CO_CommsChannelStatus_CommsChannelSenderReportTypeQueuedMessagesListElementTopic

@idl.struct(
    type_annotations = [idl.type_name("UMAA::CO::CommsChannelStatus::CommsChannelSenderReportTypeQueuedMessagesListElement")],
    member_annotations = {
        'listID': [idl.key, ],
        'elementID': [idl.key, ],
    }
)
class UMAA_CO_CommsChannelStatus_CommsChannelSenderReportTypeQueuedMessagesListElement:
    element: UMAA.CO.CommsChannel.CommsChannelMessageType = field(default_factory = UMAA.CO.CommsChannel.CommsChannelMessageType)
    listID: UMAA.Common.Measurement.NumericGUID = field(default_factory = UMAA.Common.Measurement.NumericGUID)
    elementID: UMAA.Common.Measurement.NumericGUID = field(default_factory = UMAA.Common.Measurement.NumericGUID)
    elementTimestamp: UMAA.Common.Measurement.DateTime = field(default_factory = UMAA.Common.Measurement.DateTime)
    nextElementID: Optional[UMAA.Common.Measurement.NumericGUID] = None

UMAA.CO.CommsChannelStatus.CommsChannelSenderReportTypeQueuedMessagesListElement = UMAA_CO_CommsChannelStatus_CommsChannelSenderReportTypeQueuedMessagesListElement
