
# WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

# This file was generated from ConstraintType.idl
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

UMAA_MM_Constraint = idl.get_module("UMAA_MM_Constraint")

UMAA.MM.Constraint = UMAA_MM_Constraint

@idl.struct(
    type_annotations = [idl.type_name("UMAA::MM::Constraint::ConstraintType")],
    member_annotations = {
        'name': [idl.bound(1023)],
    }
)
class UMAA_MM_Constraint_ConstraintType:
    constraintConditionalID: UMAA.Common.Measurement.NumericGUID = field(default_factory = UMAA.Common.Measurement.NumericGUID)
    constraintID: UMAA.Common.Measurement.NumericGUID = field(default_factory = UMAA.Common.Measurement.NumericGUID)
    name: str = ""
    triggerConditionalID: Optional[UMAA.Common.Measurement.NumericGUID] = None

UMAA.MM.Constraint.ConstraintType = UMAA_MM_Constraint_ConstraintType
