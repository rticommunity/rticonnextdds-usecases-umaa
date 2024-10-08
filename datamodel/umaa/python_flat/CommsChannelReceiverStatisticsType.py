
# WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

# This file was generated from CommsChannelReceiverStatisticsType.idl
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

sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/Common/Measurement/'))
from Measurements import *
sys.path.pop()

UMAA = idl.get_module("UMAA")

UMAA_CO = idl.get_module("UMAA_CO")

UMAA.CO = UMAA_CO

UMAA_CO_CommsChannel = idl.get_module("UMAA_CO_CommsChannel")

UMAA.CO.CommsChannel = UMAA_CO_CommsChannel

@idl.struct(
    type_annotations = [idl.type_name("UMAA::CO::CommsChannel::CommsChannelReceiverStatisticsType")])
class UMAA_CO_CommsChannel_CommsChannelReceiverStatisticsType:
    countBytes: idl.int32 = 0
    duration: float = 0.0
    numMessages: idl.int32 = 0

UMAA.CO.CommsChannel.CommsChannelReceiverStatisticsType = UMAA_CO_CommsChannel_CommsChannelReceiverStatisticsType
