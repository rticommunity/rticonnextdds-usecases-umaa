
# WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

# This file was generated from CommsChannelSpecsReportType.idl
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

sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/CO/CommsChannelSpecs/'))
from FrequencyRangeType import *
sys.path.pop()
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

UMAA_CO_CommsChannelSpecs = idl.get_module("UMAA_CO_CommsChannelSpecs")

UMAA.CO.CommsChannelSpecs = UMAA_CO_CommsChannelSpecs

UMAA_CO_CommsChannelSpecs_CommsChannelSpecsReportTypeTopic = "UMAA::CO::CommsChannelSpecs::CommsChannelSpecsReportType"

UMAA.CO.CommsChannelSpecs.CommsChannelSpecsReportTypeTopic = UMAA_CO_CommsChannelSpecs_CommsChannelSpecsReportTypeTopic

@idl.struct(
    type_annotations = [idl.type_name("UMAA::CO::CommsChannelSpecs::CommsChannelSpecsReportType")],
    member_annotations = {
        'commsDeviceIdentifier': [idl.bound(1023)],
        'source': [idl.key, ],
    }
)
class UMAA_CO_CommsChannelSpecs_CommsChannelSpecsReportType:
    bufferSize: idl.int32 = 0
    commsDeviceIdentifier: Optional[str] = None
    maxTransmitPower: float = 0.0
    minimumSNR: float = 0.0
    spectrumRange: UMAA.CO.CommsChannelSpecs.FrequencyRangeType = field(default_factory = UMAA.CO.CommsChannelSpecs.FrequencyRangeType)
    timeStamp: UMAA.Common.Measurement.DateTime = field(default_factory = UMAA.Common.Measurement.DateTime)
    source: UMAA.Common.IdentifierType = field(default_factory = UMAA.Common.IdentifierType)

UMAA.CO.CommsChannelSpecs.CommsChannelSpecsReportType = UMAA_CO_CommsChannelSpecs_CommsChannelSpecsReportType
