
# WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

# This file was generated from GlobalDriftStateType.idl
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

sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/MO/GlobalDriftState/'))
from GlobalRegionDriftType import *
sys.path.pop()
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/MO/GlobalDriftState/'))
from GlobalTransitDriftType import *
sys.path.pop()

UMAA = idl.get_module("UMAA")

UMAA_MO = idl.get_module("UMAA_MO")

UMAA.MO = UMAA_MO

UMAA_MO_GlobalDriftState = idl.get_module("UMAA_MO_GlobalDriftState")

UMAA.MO.GlobalDriftState = UMAA_MO_GlobalDriftState

@idl.enum
class UMAA_MO_GlobalDriftState_GlobalDriftStateTypeEnum(IntEnum):
    GLOBALTRANSITDRIFT_D = 0
    GLOBALREGIONDRIFT_D = 1

UMAA.MO.GlobalDriftState.GlobalDriftStateTypeEnum = UMAA_MO_GlobalDriftState_GlobalDriftStateTypeEnum

@idl.union(
    type_annotations = [idl.type_name("UMAA::MO::GlobalDriftState::GlobalDriftStateTypeUnion")])
class UMAA_MO_GlobalDriftState_GlobalDriftStateTypeUnion:

    discriminator: UMAA.MO.GlobalDriftState.GlobalDriftStateTypeEnum = UMAA.MO.GlobalDriftState.GlobalDriftStateTypeEnum.GLOBALTRANSITDRIFT_D
    value: Union[UMAA.MO.GlobalDriftState.GlobalTransitDriftType, UMAA.MO.GlobalDriftState.GlobalRegionDriftType] = field(default_factory = UMAA.MO.GlobalDriftState.GlobalTransitDriftType)

    GlobalTransitDriftVariant: UMAA.MO.GlobalDriftState.GlobalTransitDriftType = idl.case(UMAA.MO.GlobalDriftState.GlobalDriftStateTypeEnum.GLOBALTRANSITDRIFT_D)
    GlobalRegionDriftVariant: UMAA.MO.GlobalDriftState.GlobalRegionDriftType = idl.case(UMAA.MO.GlobalDriftState.GlobalDriftStateTypeEnum.GLOBALREGIONDRIFT_D)

UMAA.MO.GlobalDriftState.GlobalDriftStateTypeUnion = UMAA_MO_GlobalDriftState_GlobalDriftStateTypeUnion

@idl.struct(
    type_annotations = [idl.type_name("UMAA::MO::GlobalDriftState::GlobalDriftStateType")])
class UMAA_MO_GlobalDriftState_GlobalDriftStateType:
    GlobalDriftStateTypeSubtypes: UMAA.MO.GlobalDriftState.GlobalDriftStateTypeUnion = field(default_factory = UMAA.MO.GlobalDriftState.GlobalDriftStateTypeUnion)

UMAA.MO.GlobalDriftState.GlobalDriftStateType = UMAA_MO_GlobalDriftState_GlobalDriftStateType
