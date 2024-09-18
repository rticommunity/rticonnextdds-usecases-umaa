
# WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

# This file was generated from CommsChannelMessageConfigType.idl
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
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/Common/MaritimeEnumeration/'))
from MaritimeEnumerationSets import *
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

UMAA_CO_CommsChannel = idl.get_module("UMAA_CO_CommsChannel")

UMAA.CO.CommsChannel = UMAA_CO_CommsChannel

@idl.struct(
    type_annotations = [idl.type_name("UMAA::CO::CommsChannel::CommsChannelMessageConfigType")],
    member_annotations = {
        'messageType': [idl.bound(1023)],
    }
)
class UMAA_CO_CommsChannel_CommsChannelMessageConfigType:
    commsChannelID: UMAA.Common.Measurement.NumericGUID = field(default_factory = UMAA.Common.Measurement.NumericGUID)
    deadline: float = 0.0
    destination: UMAA.Common.IdentifierType = field(default_factory = UMAA.Common.IdentifierType)
    messageFilterIDs: UMAA.Common.Measurement.NumericGUID = field(default_factory = UMAA.Common.Measurement.NumericGUID)
    messageType: str = ""
    priority: idl.int32 = 0
    purgeOption: UMAA.Common.MaritimeEnumeration.BufferPurgeOptionEnumModule.BufferPurgeOptionEnumType = UMAA.Common.MaritimeEnumeration.BufferPurgeOptionEnumModule.BufferPurgeOptionEnumType.DROP_LOWEST_PRIORITY

UMAA.CO.CommsChannel.CommsChannelMessageConfigType = UMAA_CO_CommsChannel_CommsChannelMessageConfigType
