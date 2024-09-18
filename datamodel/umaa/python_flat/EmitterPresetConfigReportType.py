
# WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

# This file was generated from EmitterPresetConfigReportType.idl
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
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/Common/Measurement/'))
from Measurements import *
sys.path.pop()
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/Common/PrimitiveConstrained/'))
from ConstrainedTypes import *
sys.path.pop()

UMAA = idl.get_module("UMAA")

UMAA_SO = idl.get_module("UMAA_SO")

UMAA.SO = UMAA_SO

UMAA_SO_EmitterPresetConfig = idl.get_module("UMAA_SO_EmitterPresetConfig")

UMAA.SO.EmitterPresetConfig = UMAA_SO_EmitterPresetConfig

UMAA_SO_EmitterPresetConfig_EmitterPresetConfigReportTypeTopic = "UMAA::SO::EmitterPresetConfig::EmitterPresetConfigReportType"

UMAA.SO.EmitterPresetConfig.EmitterPresetConfigReportTypeTopic = UMAA_SO_EmitterPresetConfig_EmitterPresetConfigReportTypeTopic

@idl.struct(
    type_annotations = [idl.type_name("UMAA::SO::EmitterPresetConfig::EmitterPresetConfigReportType")],
    member_annotations = {
        'allowedEmitterID': [idl.bound(128)],
        'levelName': [idl.bound(1023)],
        'securedEmitterID': [idl.bound(128)],
        'source': [idl.key, ],
        'levelID': [idl.key, ],
    }
)
class UMAA_SO_EmitterPresetConfig_EmitterPresetConfigReportType:
    allowedEmitterID: Sequence[UMAA.Common.Measurement.NumericGUID] = field(default_factory = list)
    levelName: str = ""
    securedEmitterID: Sequence[UMAA.Common.Measurement.NumericGUID] = field(default_factory = list)
    timeStamp: UMAA.Common.Measurement.DateTime = field(default_factory = UMAA.Common.Measurement.DateTime)
    source: UMAA.Common.IdentifierType = field(default_factory = UMAA.Common.IdentifierType)
    levelID: UMAA.Common.Measurement.NumericGUID = field(default_factory = UMAA.Common.Measurement.NumericGUID)

UMAA.SO.EmitterPresetConfig.EmitterPresetConfigReportType = UMAA_SO_EmitterPresetConfig_EmitterPresetConfigReportType