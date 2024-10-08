
# WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

# This file was generated from MessageFilterType.idl
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

sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/CO/Filter/'))
from AllFilterType import *
sys.path.pop()
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/CO/Filter/'))
from DecimateStructureFilterType import *
sys.path.pop()
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/CO/Filter/'))
from SendOnlyIfChangedFilterType import *
sys.path.pop()

UMAA = idl.get_module("UMAA")

UMAA_CO = idl.get_module("UMAA_CO")

UMAA.CO = UMAA_CO

UMAA_CO_Filter = idl.get_module("UMAA_CO_Filter")

UMAA.CO.Filter = UMAA_CO_Filter

@idl.enum
class UMAA_CO_Filter_MessageFilterTypeEnum(IntEnum):
    ALLFILTER_D = 0
    DECIMATESTRUCTUREFILTER_D = 1
    SENDONLYIFCHANGEDFILTER_D = 2

UMAA.CO.Filter.MessageFilterTypeEnum = UMAA_CO_Filter_MessageFilterTypeEnum

@idl.union(
    type_annotations = [idl.type_name("UMAA::CO::Filter::MessageFilterTypeUnion")])
class UMAA_CO_Filter_MessageFilterTypeUnion:

    discriminator: UMAA.CO.Filter.MessageFilterTypeEnum = UMAA.CO.Filter.MessageFilterTypeEnum.ALLFILTER_D
    value: Union[UMAA.CO.Filter.AllFilterType, UMAA.CO.Filter.DecimateStructureFilterType, UMAA.CO.Filter.SendOnlyIfChangedFilterType] = field(default_factory = UMAA.CO.Filter.AllFilterType)

    AllFilterVariant: UMAA.CO.Filter.AllFilterType = idl.case(UMAA.CO.Filter.MessageFilterTypeEnum.ALLFILTER_D)
    DecimateStructureFilterVariant: UMAA.CO.Filter.DecimateStructureFilterType = idl.case(UMAA.CO.Filter.MessageFilterTypeEnum.DECIMATESTRUCTUREFILTER_D)
    SendOnlyIfChangedFilterVariant: UMAA.CO.Filter.SendOnlyIfChangedFilterType = idl.case(UMAA.CO.Filter.MessageFilterTypeEnum.SENDONLYIFCHANGEDFILTER_D)

UMAA.CO.Filter.MessageFilterTypeUnion = UMAA_CO_Filter_MessageFilterTypeUnion

@idl.struct(
    type_annotations = [idl.type_name("UMAA::CO::Filter::MessageFilterType")])
class UMAA_CO_Filter_MessageFilterType:
    MessageFilterTypeSubtypes: UMAA.CO.Filter.MessageFilterTypeUnion = field(default_factory = UMAA.CO.Filter.MessageFilterTypeUnion)

UMAA.CO.Filter.MessageFilterType = UMAA_CO_Filter_MessageFilterType
