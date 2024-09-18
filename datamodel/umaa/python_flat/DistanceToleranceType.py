
# WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

# This file was generated from DistanceToleranceType.idl
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

UMAA_Common = idl.get_module("UMAA_Common")

UMAA.Common = UMAA_Common

UMAA_Common_Distance = idl.get_module("UMAA_Common_Distance")

UMAA.Common.Distance = UMAA_Common_Distance

@idl.struct(
    type_annotations = [idl.type_name("UMAA::Common::Distance::DistanceToleranceType")])
class UMAA_Common_Distance_DistanceToleranceType:
    failureDelay: Optional[float] = None
    limit: float = 0.0

UMAA.Common.Distance.DistanceToleranceType = UMAA_Common_Distance_DistanceToleranceType
