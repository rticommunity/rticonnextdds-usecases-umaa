
# WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

# This file was generated from PropulsorStatusType.idl
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

UMAA_EO = idl.get_module("UMAA_EO")

UMAA.EO = UMAA_EO

UMAA_EO_PropulsorsStatus = idl.get_module("UMAA_EO_PropulsorsStatus")

UMAA.EO.PropulsorsStatus = UMAA_EO_PropulsorsStatus

@idl.struct(
    type_annotations = [idl.type_name("UMAA::EO::PropulsorsStatus::PropulsorStatusType")])
class UMAA_EO_PropulsorsStatus_PropulsorStatusType:
    gamma: Optional[float] = None
    propellerPitch: Optional[float] = None
    propulsion: idl.int32 = 0
    rho: Optional[float] = None

UMAA.EO.PropulsorsStatus.PropulsorStatusType = UMAA_EO_PropulsorsStatus_PropulsorStatusType
