
# WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

# This file was generated from GlobalRegionDriftType.idl
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

sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/Common/Enumeration/'))
from EnumerationSets import *
sys.path.pop()

UMAA = idl.get_module("UMAA")

UMAA_MO = idl.get_module("UMAA_MO")

UMAA.MO = UMAA_MO

UMAA_MO_GlobalDriftState = idl.get_module("UMAA_MO_GlobalDriftState")

UMAA.MO.GlobalDriftState = UMAA_MO_GlobalDriftState

@idl.struct(
    type_annotations = [idl.type_name("UMAA::MO::GlobalDriftState::GlobalRegionDriftType")])
class UMAA_MO_GlobalDriftState_GlobalRegionDriftType:
    driftRadiusAchieved: bool = False
    elevationAchieved: bool = False

UMAA.MO.GlobalDriftState.GlobalRegionDriftType = UMAA_MO_GlobalDriftState_GlobalRegionDriftType
