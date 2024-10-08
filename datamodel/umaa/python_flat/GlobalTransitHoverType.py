
# WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

# This file was generated from GlobalTransitHoverType.idl
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

UMAA_MO_GlobalHoverState = idl.get_module("UMAA_MO_GlobalHoverState")

UMAA.MO.GlobalHoverState = UMAA_MO_GlobalHoverState

@idl.struct(
    type_annotations = [idl.type_name("UMAA::MO::GlobalHoverState::GlobalTransitHoverType")])
class UMAA_MO_GlobalHoverState_GlobalTransitHoverType:
    elevationAchieved: bool = False
    speedAchieved: bool = False

UMAA.MO.GlobalHoverState.GlobalTransitHoverType = UMAA_MO_GlobalHoverState_GlobalTransitHoverType
