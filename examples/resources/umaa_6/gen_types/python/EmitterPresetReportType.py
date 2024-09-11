
# WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

# This file was generated from EmitterPresetReportType.idl
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
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/Common/'))
from IdentifierType import *
sys.path.pop()
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/Common/Measurement/'))
from Measurements import *
sys.path.pop()

UMAA = idl.get_module("UMAA")

UMAA_SO = idl.get_module("UMAA_SO")

UMAA.SO = UMAA_SO

UMAA_SO_EmitterPresetReport = idl.get_module("UMAA_SO_EmitterPresetReport")

UMAA.SO.EmitterPresetReport = UMAA_SO_EmitterPresetReport

UMAA_SO_EmitterPresetReport_EmitterPresetReportTypeTopic = "UMAA::SO::EmitterPresetReport::EmitterPresetReportType"

UMAA.SO.EmitterPresetReport.EmitterPresetReportTypeTopic = UMAA_SO_EmitterPresetReport_EmitterPresetReportTypeTopic

@idl.struct(
    type_annotations = [idl.type_name("UMAA::SO::EmitterPresetReport::EmitterPresetReportType")],
    member_annotations = {
        'source': [idl.key, ],
    }
)
class UMAA_SO_EmitterPresetReport_EmitterPresetReportType:
    endLevelID: Optional[UMAA.Common.Measurement.NumericGUID] = None
    endTime: Optional[UMAA.Common.Measurement.DateTime] = None
    isModified: bool = False
    levelID: UMAA.Common.Measurement.NumericGUID = field(default_factory = UMAA.Common.Measurement.NumericGUID)
    timeStamp: UMAA.Common.Measurement.DateTime = field(default_factory = UMAA.Common.Measurement.DateTime)
    source: UMAA.Common.IdentifierType = field(default_factory = UMAA.Common.IdentifierType)

UMAA.SO.EmitterPresetReport.EmitterPresetReportType = UMAA_SO_EmitterPresetReport_EmitterPresetReportType
