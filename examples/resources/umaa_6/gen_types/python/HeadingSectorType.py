
# WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

# This file was generated from HeadingSectorType.idl
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

sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/Common/MaritimeEnumeration/'))
from MaritimeEnumerationSets import *
sys.path.pop()
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/Common/Measurement/'))
from Measurements import *
sys.path.pop()

UMAA = idl.get_module("UMAA")

UMAA_MM = idl.get_module("UMAA_MM")

UMAA.MM = UMAA_MM

UMAA_MM_Conditional = idl.get_module("UMAA_MM_Conditional")

UMAA.MM.Conditional = UMAA_MM_Conditional

@idl.struct(
    type_annotations = [idl.type_name("UMAA::MM::Conditional::HeadingSectorType")])
class UMAA_MM_Conditional_HeadingSectorType:
    endHeading: float = 0.0
    headingSectorKind: UMAA.Common.MaritimeEnumeration.HeadingSectorKindEnumModule.HeadingSectorKindEnumType = UMAA.Common.MaritimeEnumeration.HeadingSectorKindEnumModule.HeadingSectorKindEnumType.INSIDE
    startHeading: float = 0.0

UMAA.MM.Conditional.HeadingSectorType = UMAA_MM_Conditional_HeadingSectorType
