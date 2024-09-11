
# WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

# This file was generated from CommsChannelClearMessageCommandAckReportType.idl
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

sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/CO/CommsChannelControl/'))
from CommsChannelClearMessageCommandType import *
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

UMAA_CO_CommsChannelControl = idl.get_module("UMAA_CO_CommsChannelControl")

UMAA.CO.CommsChannelControl = UMAA_CO_CommsChannelControl

UMAA_CO_CommsChannelControl_CommsChannelClearMessageCommandAckReportTypeTopic = "UMAA::CO::CommsChannelControl::CommsChannelClearMessageCommandAckReportType"

UMAA.CO.CommsChannelControl.CommsChannelClearMessageCommandAckReportTypeTopic = UMAA_CO_CommsChannelControl_CommsChannelClearMessageCommandAckReportTypeTopic

@idl.struct(
    type_annotations = [idl.type_name("UMAA::CO::CommsChannelControl::CommsChannelClearMessageCommandAckReportType")],
    member_annotations = {
        'source': [idl.key, ],
        'sessionID': [idl.key, ],
    }
)
class UMAA_CO_CommsChannelControl_CommsChannelClearMessageCommandAckReportType:
    command: UMAA.CO.CommsChannelControl.CommsChannelClearMessageCommandType = field(default_factory = UMAA.CO.CommsChannelControl.CommsChannelClearMessageCommandType)
    timeStamp: UMAA.Common.Measurement.DateTime = field(default_factory = UMAA.Common.Measurement.DateTime)
    source: UMAA.Common.IdentifierType = field(default_factory = UMAA.Common.IdentifierType)
    sessionID: UMAA.Common.Measurement.NumericGUID = field(default_factory = UMAA.Common.Measurement.NumericGUID)

UMAA.CO.CommsChannelControl.CommsChannelClearMessageCommandAckReportType = UMAA_CO_CommsChannelControl_CommsChannelClearMessageCommandAckReportType
