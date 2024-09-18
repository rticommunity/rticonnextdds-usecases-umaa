
# WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

# This file was generated from LogicalANDConditionalType.idl
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
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/Common/PrimitiveConstrained/'))
from ConstrainedTypes import *
sys.path.pop()

UMAA = idl.get_module("UMAA")

UMAA_MM = idl.get_module("UMAA_MM")

UMAA.MM = UMAA_MM

UMAA_MM_Conditional = idl.get_module("UMAA_MM_Conditional")

UMAA.MM.Conditional = UMAA_MM_Conditional

UMAA_MM_Conditional_LogicalANDConditionalTypeTopic = "UMAA::MM::Conditional::LogicalANDConditionalType"

UMAA.MM.Conditional.LogicalANDConditionalTypeTopic = UMAA_MM_Conditional_LogicalANDConditionalTypeTopic

@idl.struct(
    type_annotations = [idl.type_name("UMAA::MM::Conditional::LogicalANDConditionalType")],
    member_annotations = {
        'specializationReferenceID': [idl.key, ],
    }
)
class UMAA_MM_Conditional_LogicalANDConditionalType:
    conditionalID1: UMAA.Common.Measurement.NumericGUID = field(default_factory = UMAA.Common.Measurement.NumericGUID)
    conditionalID2: UMAA.Common.Measurement.NumericGUID = field(default_factory = UMAA.Common.Measurement.NumericGUID)
    specializationReferenceTimestamp: UMAA.Common.Measurement.DateTime = field(default_factory = UMAA.Common.Measurement.DateTime)
    specializationReferenceID: UMAA.Common.Measurement.NumericGUID = field(default_factory = UMAA.Common.Measurement.NumericGUID)

UMAA.MM.Conditional.LogicalANDConditionalType = UMAA_MM_Conditional_LogicalANDConditionalType
