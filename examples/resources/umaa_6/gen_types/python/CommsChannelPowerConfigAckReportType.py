
# WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

# This file was generated from CommsChannelPowerConfigAckReportType.idl
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

sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/CO/CommsChannelPowerConfig/'))
from CommsChannelPowerConfigCommandType import *
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

UMAA_CO_CommsChannelPowerConfig = idl.get_module("UMAA_CO_CommsChannelPowerConfig")

UMAA.CO.CommsChannelPowerConfig = UMAA_CO_CommsChannelPowerConfig

UMAA_CO_CommsChannelPowerConfig_CommsChannelPowerConfigAckReportTypeTopic = "UMAA::CO::CommsChannelPowerConfig::CommsChannelPowerConfigAckReportType"

UMAA.CO.CommsChannelPowerConfig.CommsChannelPowerConfigAckReportTypeTopic = UMAA_CO_CommsChannelPowerConfig_CommsChannelPowerConfigAckReportTypeTopic

@idl.struct(
    type_annotations = [idl.type_name("UMAA::CO::CommsChannelPowerConfig::CommsChannelPowerConfigAckReportType")],
    member_annotations = {
        'source': [idl.key, ],
    }
)
class UMAA_CO_CommsChannelPowerConfig_CommsChannelPowerConfigAckReportType:
    config: UMAA.CO.CommsChannelPowerConfig.CommsChannelPowerConfigCommandType = field(default_factory = UMAA.CO.CommsChannelPowerConfig.CommsChannelPowerConfigCommandType)
    timeStamp: UMAA.Common.Measurement.DateTime = field(default_factory = UMAA.Common.Measurement.DateTime)
    source: UMAA.Common.IdentifierType = field(default_factory = UMAA.Common.IdentifierType)

UMAA.CO.CommsChannelPowerConfig.CommsChannelPowerConfigAckReportType = UMAA_CO_CommsChannelPowerConfig_CommsChannelPowerConfigAckReportType
