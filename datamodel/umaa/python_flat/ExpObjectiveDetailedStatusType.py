
# WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

# This file was generated from ExpObjectiveDetailedStatusType.idl
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
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/Common/MaritimeEnumeration/'))
from MaritimeEnumerationSets import *
sys.path.pop()
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/Common/Measurement/'))
from Measurements import *
sys.path.pop()
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/Common/PrimitiveConstrained/'))
from ConstrainedTypes import *
sys.path.pop()
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/MM/BaseType/'))
from KeyValueType import *
sys.path.pop()

UMAA = idl.get_module("UMAA")

UMAA_MM = idl.get_module("UMAA_MM")

UMAA.MM = UMAA_MM

UMAA_MM_BaseType = idl.get_module("UMAA_MM_BaseType")

UMAA.MM.BaseType = UMAA_MM_BaseType

UMAA_MM_BaseType_ExpObjectiveDetailedStatusTypeTopic = "UMAA::MM::BaseType::ExpObjectiveDetailedStatusType"

UMAA.MM.BaseType.ExpObjectiveDetailedStatusTypeTopic = UMAA_MM_BaseType_ExpObjectiveDetailedStatusTypeTopic

@idl.struct(
    type_annotations = [idl.type_name("UMAA::MM::BaseType::ExpObjectiveDetailedStatusType")],
    member_annotations = {
        'expObjectiveStatus': [idl.bound(170)],
        'specializationReferenceID': [idl.key, ],
    }
)
class UMAA_MM_BaseType_ExpObjectiveDetailedStatusType:
    expObjectiveStatus: Sequence[UMAA.MM.BaseType.KeyValueType] = field(default_factory = list)
    timeExpCompleted: UMAA.Common.Measurement.DateTime = field(default_factory = UMAA.Common.Measurement.DateTime)
    specializationReferenceTimestamp: UMAA.Common.Measurement.DateTime = field(default_factory = UMAA.Common.Measurement.DateTime)
    specializationReferenceID: UMAA.Common.Measurement.NumericGUID = field(default_factory = UMAA.Common.Measurement.NumericGUID)

UMAA.MM.BaseType.ExpObjectiveDetailedStatusType = UMAA_MM_BaseType_ExpObjectiveDetailedStatusType
