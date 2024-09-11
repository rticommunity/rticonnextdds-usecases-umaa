
# WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

# This file was generated from CoordinationSituationalSignalReportType.idl
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

UMAA_MO = idl.get_module("UMAA_MO")

UMAA.MO = UMAA_MO

UMAA_MO_CoordinationSituationalSignalStatus = idl.get_module("UMAA_MO_CoordinationSituationalSignalStatus")

UMAA.MO.CoordinationSituationalSignalStatus = UMAA_MO_CoordinationSituationalSignalStatus

UMAA_MO_CoordinationSituationalSignalStatus_CoordinationSituationalSignalReportTypeTopic = "UMAA::MO::CoordinationSituationalSignalStatus::CoordinationSituationalSignalReportType"

UMAA.MO.CoordinationSituationalSignalStatus.CoordinationSituationalSignalReportTypeTopic = UMAA_MO_CoordinationSituationalSignalStatus_CoordinationSituationalSignalReportTypeTopic

@idl.struct(
    type_annotations = [idl.type_name("UMAA::MO::CoordinationSituationalSignalStatus::CoordinationSituationalSignalReportType")],
    member_annotations = {
        'source': [idl.key, ],
    }
)
class UMAA_MO_CoordinationSituationalSignalStatus_CoordinationSituationalSignalReportType:
    currentSituation: UMAA.Common.MaritimeEnumeration.CoordinationSituationalSignalEnumModule.CoordinationSituationalSignalEnumType = UMAA.Common.MaritimeEnumeration.CoordinationSituationalSignalEnumModule.CoordinationSituationalSignalEnumType.AGREE_TO_BE_OVERTAKEN
    timeStamp: UMAA.Common.Measurement.DateTime = field(default_factory = UMAA.Common.Measurement.DateTime)
    source: UMAA.Common.IdentifierType = field(default_factory = UMAA.Common.IdentifierType)

UMAA.MO.CoordinationSituationalSignalStatus.CoordinationSituationalSignalReportType = UMAA_MO_CoordinationSituationalSignalStatus_CoordinationSituationalSignalReportType
