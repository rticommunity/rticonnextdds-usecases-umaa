
# WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

# This file was generated from PropulsorsStatusType.idl
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
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/EO/PropulsorsStatus/'))
from PropulsorStatusType import *
sys.path.pop()

UMAA = idl.get_module("UMAA")

UMAA_EO = idl.get_module("UMAA_EO")

UMAA.EO = UMAA_EO

UMAA_EO_PropulsorsStatus = idl.get_module("UMAA_EO_PropulsorsStatus")

UMAA.EO.PropulsorsStatus = UMAA_EO_PropulsorsStatus

@idl.struct(
    type_annotations = [idl.type_name("UMAA::EO::PropulsorsStatus::PropulsorsStatusType")],
    member_annotations = {
        'propulsorStatus': [idl.bound(16)],
    }
)
class UMAA_EO_PropulsorsStatus_PropulsorsStatusType:
    propulsorStatus: Sequence[UMAA.EO.PropulsorsStatus.PropulsorStatusType] = field(default_factory = list)

UMAA.EO.PropulsorsStatus.PropulsorsStatusType = UMAA_EO_PropulsorsStatus_PropulsorsStatusType