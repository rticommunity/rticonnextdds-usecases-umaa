
# WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

# This file was generated from FrequencyRangeType.idl
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

UMAA_CO_CommsChannelSpecs = idl.get_module("UMAA_CO_CommsChannelSpecs")

UMAA.CO.CommsChannelSpecs = UMAA_CO_CommsChannelSpecs

@idl.struct(
    type_annotations = [idl.type_name("UMAA::CO::CommsChannelSpecs::FrequencyRangeType")])
class UMAA_CO_CommsChannelSpecs_FrequencyRangeType:
    maximum: float = 0.0
    minimum: float = 0.0

UMAA.CO.CommsChannelSpecs.FrequencyRangeType = UMAA_CO_CommsChannelSpecs_FrequencyRangeType