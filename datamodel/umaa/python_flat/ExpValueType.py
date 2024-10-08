
# WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

# This file was generated from ExpValueType.idl
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

sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/MM/BaseType/'))
from ExpBinaryValueType import *
sys.path.pop()
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/MM/BaseType/'))
from ExpBooleanValueType import *
sys.path.pop()
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/MM/BaseType/'))
from ExpByteValueType import *
sys.path.pop()
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/MM/BaseType/'))
from ExpCharValueType import *
sys.path.pop()
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/MM/BaseType/'))
from ExpDateTimeValueType import *
sys.path.pop()
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/MM/BaseType/'))
from ExpDoubleValueType import *
sys.path.pop()
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/MM/BaseType/'))
from ExpIntegerValueType import *
sys.path.pop()
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/MM/BaseType/'))
from ExpLongLongValueType import *
sys.path.pop()
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/MM/BaseType/'))
from ExpStringValueType import *
sys.path.pop()

UMAA = idl.get_module("UMAA")

UMAA_MM = idl.get_module("UMAA_MM")

UMAA.MM = UMAA_MM

UMAA_MM_BaseType = idl.get_module("UMAA_MM_BaseType")

UMAA.MM.BaseType = UMAA_MM_BaseType

@idl.enum
class UMAA_MM_BaseType_ExpValueTypeEnum(IntEnum):
    EXPBINARYVALUE_D = 0
    EXPBOOLEANVALUE_D = 1
    EXPBYTEVALUE_D = 2
    EXPCHARVALUE_D = 3
    EXPDATETIMEVALUE_D = 4
    EXPDOUBLEVALUE_D = 5
    EXPINTEGERVALUE_D = 6
    EXPLONGLONGVALUE_D = 7
    EXPSTRINGVALUE_D = 8

UMAA.MM.BaseType.ExpValueTypeEnum = UMAA_MM_BaseType_ExpValueTypeEnum

@idl.union(
    type_annotations = [idl.type_name("UMAA::MM::BaseType::ExpValueTypeUnion")])
class UMAA_MM_BaseType_ExpValueTypeUnion:

    discriminator: UMAA.MM.BaseType.ExpValueTypeEnum = UMAA.MM.BaseType.ExpValueTypeEnum.EXPBINARYVALUE_D
    value: Union[UMAA.MM.BaseType.ExpBinaryValueType, UMAA.MM.BaseType.ExpBooleanValueType, UMAA.MM.BaseType.ExpByteValueType, UMAA.MM.BaseType.ExpCharValueType, UMAA.MM.BaseType.ExpDateTimeValueType, UMAA.MM.BaseType.ExpDoubleValueType, UMAA.MM.BaseType.ExpIntegerValueType, UMAA.MM.BaseType.ExpLongLongValueType, UMAA.MM.BaseType.ExpStringValueType] = field(default_factory = UMAA.MM.BaseType.ExpBinaryValueType)

    ExpBinaryValueVariant: UMAA.MM.BaseType.ExpBinaryValueType = idl.case(UMAA.MM.BaseType.ExpValueTypeEnum.EXPBINARYVALUE_D)
    ExpBooleanValueVariant: UMAA.MM.BaseType.ExpBooleanValueType = idl.case(UMAA.MM.BaseType.ExpValueTypeEnum.EXPBOOLEANVALUE_D)
    ExpByteValueVariant: UMAA.MM.BaseType.ExpByteValueType = idl.case(UMAA.MM.BaseType.ExpValueTypeEnum.EXPBYTEVALUE_D)
    ExpCharValueVariant: UMAA.MM.BaseType.ExpCharValueType = idl.case(UMAA.MM.BaseType.ExpValueTypeEnum.EXPCHARVALUE_D)
    ExpDateTimeValueVariant: UMAA.MM.BaseType.ExpDateTimeValueType = idl.case(UMAA.MM.BaseType.ExpValueTypeEnum.EXPDATETIMEVALUE_D)
    ExpDoubleValueVariant: UMAA.MM.BaseType.ExpDoubleValueType = idl.case(UMAA.MM.BaseType.ExpValueTypeEnum.EXPDOUBLEVALUE_D)
    ExpIntegerValueVariant: UMAA.MM.BaseType.ExpIntegerValueType = idl.case(UMAA.MM.BaseType.ExpValueTypeEnum.EXPINTEGERVALUE_D)
    ExpLongLongValueVariant: UMAA.MM.BaseType.ExpLongLongValueType = idl.case(UMAA.MM.BaseType.ExpValueTypeEnum.EXPLONGLONGVALUE_D)
    ExpStringValueVariant: UMAA.MM.BaseType.ExpStringValueType = idl.case(UMAA.MM.BaseType.ExpValueTypeEnum.EXPSTRINGVALUE_D)

UMAA.MM.BaseType.ExpValueTypeUnion = UMAA_MM_BaseType_ExpValueTypeUnion

@idl.struct(
    type_annotations = [idl.type_name("UMAA::MM::BaseType::ExpValueType")])
class UMAA_MM_BaseType_ExpValueType:
    ExpValueTypeSubtypes: UMAA.MM.BaseType.ExpValueTypeUnion = field(default_factory = UMAA.MM.BaseType.ExpValueTypeUnion)

UMAA.MM.BaseType.ExpValueType = UMAA_MM_BaseType_ExpValueType
