
# WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

# This file was generated from SASStatusReportType.idl
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

sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/Common/'))
from IdentifierType import *
sys.path.pop()
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/Common/MaritimeEnumeration/'))
from MaritimeEnumerationSets import *
sys.path.pop()
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/Common/Measurement/'))
from Measurements import *
sys.path.pop()

UMAA = idl.get_module("UMAA")

UMAA_SEM = idl.get_module("UMAA_SEM")

UMAA.SEM = UMAA_SEM

UMAA_SEM_SASStatus = idl.get_module("UMAA_SEM_SASStatus")

UMAA.SEM.SASStatus = UMAA_SEM_SASStatus

UMAA_SEM_SASStatus_SASStatusReportTypeTopic = "UMAA::SEM::SASStatus::SASStatusReportType"

UMAA.SEM.SASStatus.SASStatusReportTypeTopic = UMAA_SEM_SASStatus_SASStatusReportTypeTopic

@idl.struct(
    type_annotations = [idl.type_name("UMAA::SEM::SASStatus::SASStatusReportType")],
    member_annotations = {
        'source': [idl.key, ],
    }
)
class UMAA_SEM_SASStatus_SASStatusReportType:
    currentState: UMAA.Common.MaritimeEnumeration.ActivationStateEnumModule.ActivationStateEnumType = UMAA.Common.MaritimeEnumeration.ActivationStateEnumModule.ActivationStateEnumType.ACTIVE
    timeStamp: UMAA.Common.Measurement.DateTime = field(default_factory = UMAA.Common.Measurement.DateTime)
    source: UMAA.Common.IdentifierType = field(default_factory = UMAA.Common.IdentifierType)

UMAA.SEM.SASStatus.SASStatusReportType = UMAA_SEM_SASStatus_SASStatusReportType
