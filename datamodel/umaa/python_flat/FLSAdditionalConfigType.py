
# WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

# This file was generated from FLSAdditionalConfigType.idl
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

sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/SEM/BaseType/'))
from FLSConfigSearchBottomType import *
sys.path.pop()
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/SEM/BaseType/'))
from FLSConfigSearchVolumeType import *
sys.path.pop()
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/SEM/BaseType/'))
from FLSConfigTestType import *
sys.path.pop()

UMAA = idl.get_module("UMAA")

UMAA_SEM = idl.get_module("UMAA_SEM")

UMAA.SEM = UMAA_SEM

UMAA_SEM_BaseType = idl.get_module("UMAA_SEM_BaseType")

UMAA.SEM.BaseType = UMAA_SEM_BaseType

@idl.enum
class UMAA_SEM_BaseType_FLSAdditionalConfigTypeEnum(IntEnum):
    FLSCONFIGSEARCHBOTTOM_D = 0
    FLSCONFIGSEARCHVOLUME_D = 1
    FLSCONFIGTEST_D = 2

UMAA.SEM.BaseType.FLSAdditionalConfigTypeEnum = UMAA_SEM_BaseType_FLSAdditionalConfigTypeEnum

@idl.union(
    type_annotations = [idl.type_name("UMAA::SEM::BaseType::FLSAdditionalConfigTypeUnion")])
class UMAA_SEM_BaseType_FLSAdditionalConfigTypeUnion:

    discriminator: UMAA.SEM.BaseType.FLSAdditionalConfigTypeEnum = UMAA.SEM.BaseType.FLSAdditionalConfigTypeEnum.FLSCONFIGSEARCHBOTTOM_D
    value: Union[UMAA.SEM.BaseType.FLSConfigSearchBottomType, UMAA.SEM.BaseType.FLSConfigSearchVolumeType, UMAA.SEM.BaseType.FLSConfigTestType] = field(default_factory = UMAA.SEM.BaseType.FLSConfigSearchBottomType)

    FLSConfigSearchBottomVariant: UMAA.SEM.BaseType.FLSConfigSearchBottomType = idl.case(UMAA.SEM.BaseType.FLSAdditionalConfigTypeEnum.FLSCONFIGSEARCHBOTTOM_D)
    FLSConfigSearchVolumeVariant: UMAA.SEM.BaseType.FLSConfigSearchVolumeType = idl.case(UMAA.SEM.BaseType.FLSAdditionalConfigTypeEnum.FLSCONFIGSEARCHVOLUME_D)
    FLSConfigTestVariant: UMAA.SEM.BaseType.FLSConfigTestType = idl.case(UMAA.SEM.BaseType.FLSAdditionalConfigTypeEnum.FLSCONFIGTEST_D)

UMAA.SEM.BaseType.FLSAdditionalConfigTypeUnion = UMAA_SEM_BaseType_FLSAdditionalConfigTypeUnion

@idl.struct(
    type_annotations = [idl.type_name("UMAA::SEM::BaseType::FLSAdditionalConfigType")])
class UMAA_SEM_BaseType_FLSAdditionalConfigType:
    FLSAdditionalConfigTypeSubtypes: UMAA.SEM.BaseType.FLSAdditionalConfigTypeUnion = field(default_factory = UMAA.SEM.BaseType.FLSAdditionalConfigTypeUnion)

UMAA.SEM.BaseType.FLSAdditionalConfigType = UMAA_SEM_BaseType_FLSAdditionalConfigType
