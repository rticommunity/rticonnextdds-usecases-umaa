
# WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

# This file was generated from AreaRandomWalkObjectiveDetailedStatusType.idl
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

UMAA = idl.get_module("UMAA")

UMAA_MM = idl.get_module("UMAA_MM")

UMAA.MM = UMAA_MM

UMAA_MM_BaseType = idl.get_module("UMAA_MM_BaseType")

UMAA.MM.BaseType = UMAA_MM_BaseType

UMAA_MM_BaseType_AreaRandomWalkObjectiveDetailedStatusTypeTopic = "UMAA::MM::BaseType::AreaRandomWalkObjectiveDetailedStatusType"

UMAA.MM.BaseType.AreaRandomWalkObjectiveDetailedStatusTypeTopic = UMAA_MM_BaseType_AreaRandomWalkObjectiveDetailedStatusTypeTopic

@idl.struct(
    type_annotations = [idl.type_name("UMAA::MM::BaseType::AreaRandomWalkObjectiveDetailedStatusType")],
    member_annotations = {
        'specializationReferenceID': [idl.key, ],
    }
)
class UMAA_MM_BaseType_AreaRandomWalkObjectiveDetailedStatusType:
    isAreaAchieved: bool = False
    isInPattern: bool = False
    timePatternAchieved: UMAA.Common.Measurement.DateTime = field(default_factory = UMAA.Common.Measurement.DateTime)
    timePatternCompleted: Optional[UMAA.Common.Measurement.DateTime] = None
    specializationReferenceTimestamp: UMAA.Common.Measurement.DateTime = field(default_factory = UMAA.Common.Measurement.DateTime)
    specializationReferenceID: UMAA.Common.Measurement.NumericGUID = field(default_factory = UMAA.Common.Measurement.NumericGUID)

UMAA.MM.BaseType.AreaRandomWalkObjectiveDetailedStatusType = UMAA_MM_BaseType_AreaRandomWalkObjectiveDetailedStatusType
