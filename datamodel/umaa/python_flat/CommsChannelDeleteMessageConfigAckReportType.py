
# WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

# This file was generated from CommsChannelDeleteMessageConfigAckReportType.idl
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

sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/CO/CommsChannelConfig/'))
from CommsChannelDeleteMessageConfigCommandType import *
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

UMAA_CO_CommsChannelConfig = idl.get_module("UMAA_CO_CommsChannelConfig")

UMAA.CO.CommsChannelConfig = UMAA_CO_CommsChannelConfig

UMAA_CO_CommsChannelConfig_CommsChannelDeleteMessageConfigAckReportTypeTopic = "UMAA::CO::CommsChannelConfig::CommsChannelDeleteMessageConfigAckReportType"

UMAA.CO.CommsChannelConfig.CommsChannelDeleteMessageConfigAckReportTypeTopic = UMAA_CO_CommsChannelConfig_CommsChannelDeleteMessageConfigAckReportTypeTopic

@idl.struct(
    type_annotations = [idl.type_name("UMAA::CO::CommsChannelConfig::CommsChannelDeleteMessageConfigAckReportType")],
    member_annotations = {
        'source': [idl.key, ],
    }
)
class UMAA_CO_CommsChannelConfig_CommsChannelDeleteMessageConfigAckReportType:
    config: UMAA.CO.CommsChannelConfig.CommsChannelDeleteMessageConfigCommandType = field(default_factory = UMAA.CO.CommsChannelConfig.CommsChannelDeleteMessageConfigCommandType)
    timeStamp: UMAA.Common.Measurement.DateTime = field(default_factory = UMAA.Common.Measurement.DateTime)
    source: UMAA.Common.IdentifierType = field(default_factory = UMAA.Common.IdentifierType)

UMAA.CO.CommsChannelConfig.CommsChannelDeleteMessageConfigAckReportType = UMAA_CO_CommsChannelConfig_CommsChannelDeleteMessageConfigAckReportType
