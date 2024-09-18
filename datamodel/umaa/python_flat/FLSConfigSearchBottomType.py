
# WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

# This file was generated from FLSConfigSearchBottomType.idl
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

UMAA_SEM = idl.get_module("UMAA_SEM")

UMAA.SEM = UMAA_SEM

UMAA_SEM_BaseType = idl.get_module("UMAA_SEM_BaseType")

UMAA.SEM.BaseType = UMAA_SEM_BaseType

@idl.struct(
    type_annotations = [idl.type_name("UMAA::SEM::BaseType::FLSConfigSearchBottomType")])
class UMAA_SEM_BaseType_FLSConfigSearchBottomType:
    goalVehicleAltitude: float = 0.0
    goalVehicleDepth: float = 0.0
    maxRange: float = 0.0
    minRange: Optional[float] = None

UMAA.SEM.BaseType.FLSConfigSearchBottomType = UMAA_SEM_BaseType_FLSConfigSearchBottomType
