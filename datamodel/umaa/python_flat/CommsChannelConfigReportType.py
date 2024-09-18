
# WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

# This file was generated from CommsChannelConfigReportType.idl
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
from LargeSetMetadata import *
sys.path.pop()
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/CO/CommsChannel/'))
from CommsChannelMessageConfigType import *
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

UMAA_CO_CommsChannelConfig_CommsChannelConfigReportTypeTopic = "UMAA::CO::CommsChannelConfig::CommsChannelConfigReportType"

UMAA.CO.CommsChannelConfig.CommsChannelConfigReportTypeTopic = UMAA_CO_CommsChannelConfig_CommsChannelConfigReportTypeTopic

@idl.struct(
    type_annotations = [idl.type_name("UMAA::CO::CommsChannelConfig::CommsChannelConfigReportType")],
    member_annotations = {
        'source': [idl.key, ],
    }
)
class UMAA_CO_CommsChannelConfig_CommsChannelConfigReportType:
    timeStamp: UMAA.Common.Measurement.DateTime = field(default_factory = UMAA.Common.Measurement.DateTime)
    source: UMAA.Common.IdentifierType = field(default_factory = UMAA.Common.IdentifierType)
    messageConfigsSetMetadata: UMAA.Common.LargeSetMetadata = field(default_factory = UMAA.Common.LargeSetMetadata)

UMAA.CO.CommsChannelConfig.CommsChannelConfigReportType = UMAA_CO_CommsChannelConfig_CommsChannelConfigReportType

UMAA_CO_CommsChannelConfig_CommsChannelConfigReportTypeMessageConfigsSetElementTopic = "UMAA::CO::CommsChannelConfig::CommsChannelConfigReportTypeMessageConfigsSetElement"

UMAA.CO.CommsChannelConfig.CommsChannelConfigReportTypeMessageConfigsSetElementTopic = UMAA_CO_CommsChannelConfig_CommsChannelConfigReportTypeMessageConfigsSetElementTopic

@idl.struct(
    type_annotations = [idl.type_name("UMAA::CO::CommsChannelConfig::CommsChannelConfigReportTypeMessageConfigsSetElement")],
    member_annotations = {
        'setID': [idl.key, ],
        'elementID': [idl.key, ],
    }
)
class UMAA_CO_CommsChannelConfig_CommsChannelConfigReportTypeMessageConfigsSetElement:
    element: UMAA.CO.CommsChannel.CommsChannelMessageConfigType = field(default_factory = UMAA.CO.CommsChannel.CommsChannelMessageConfigType)
    setID: UMAA.Common.Measurement.NumericGUID = field(default_factory = UMAA.Common.Measurement.NumericGUID)
    elementID: UMAA.Common.Measurement.NumericGUID = field(default_factory = UMAA.Common.Measurement.NumericGUID)
    elementTimestamp: UMAA.Common.Measurement.DateTime = field(default_factory = UMAA.Common.Measurement.DateTime)

UMAA.CO.CommsChannelConfig.CommsChannelConfigReportTypeMessageConfigsSetElement = UMAA_CO_CommsChannelConfig_CommsChannelConfigReportTypeMessageConfigsSetElement
