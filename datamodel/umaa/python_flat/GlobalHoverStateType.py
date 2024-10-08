
# WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

# This file was generated from GlobalHoverStateType.idl
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

sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/MO/GlobalHoverState/'))
from GlobalHoveringHoverType import *
sys.path.pop()
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/MO/GlobalHoverState/'))
from GlobalTransitHoverType import *
sys.path.pop()

UMAA = idl.get_module("UMAA")

UMAA_MO = idl.get_module("UMAA_MO")

UMAA.MO = UMAA_MO

UMAA_MO_GlobalHoverState = idl.get_module("UMAA_MO_GlobalHoverState")

UMAA.MO.GlobalHoverState = UMAA_MO_GlobalHoverState

@idl.enum
class UMAA_MO_GlobalHoverState_GlobalHoverStateTypeEnum(IntEnum):
    GLOBALTRANSITHOVER_D = 0
    GLOBALHOVERINGHOVER_D = 1

UMAA.MO.GlobalHoverState.GlobalHoverStateTypeEnum = UMAA_MO_GlobalHoverState_GlobalHoverStateTypeEnum

@idl.union(
    type_annotations = [idl.type_name("UMAA::MO::GlobalHoverState::GlobalHoverStateTypeUnion")])
class UMAA_MO_GlobalHoverState_GlobalHoverStateTypeUnion:

    discriminator: UMAA.MO.GlobalHoverState.GlobalHoverStateTypeEnum = UMAA.MO.GlobalHoverState.GlobalHoverStateTypeEnum.GLOBALTRANSITHOVER_D
    value: Union[UMAA.MO.GlobalHoverState.GlobalTransitHoverType, UMAA.MO.GlobalHoverState.GlobalHoveringHoverType] = field(default_factory = UMAA.MO.GlobalHoverState.GlobalTransitHoverType)

    GlobalTransitHoverVariant: UMAA.MO.GlobalHoverState.GlobalTransitHoverType = idl.case(UMAA.MO.GlobalHoverState.GlobalHoverStateTypeEnum.GLOBALTRANSITHOVER_D)
    GlobalHoveringHoverVariant: UMAA.MO.GlobalHoverState.GlobalHoveringHoverType = idl.case(UMAA.MO.GlobalHoverState.GlobalHoverStateTypeEnum.GLOBALHOVERINGHOVER_D)

UMAA.MO.GlobalHoverState.GlobalHoverStateTypeUnion = UMAA_MO_GlobalHoverState_GlobalHoverStateTypeUnion

@idl.struct(
    type_annotations = [idl.type_name("UMAA::MO::GlobalHoverState::GlobalHoverStateType")])
class UMAA_MO_GlobalHoverState_GlobalHoverStateType:
    GlobalHoverStateTypeSubtypes: UMAA.MO.GlobalHoverState.GlobalHoverStateTypeUnion = field(default_factory = UMAA.MO.GlobalHoverState.GlobalHoverStateTypeUnion)

UMAA.MO.GlobalHoverState.GlobalHoverStateType = UMAA_MO_GlobalHoverState_GlobalHoverStateType
