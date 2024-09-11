
# WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

# This file was generated from BITConfigReportType.idl
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

UMAA_SO = idl.get_module("UMAA_SO")

UMAA.SO = UMAA_SO

UMAA_SO_BITConfig = idl.get_module("UMAA_SO_BITConfig")

UMAA.SO.BITConfig = UMAA_SO_BITConfig

UMAA_SO_BITConfig_BITConfigReportTypeTopic = "UMAA::SO::BITConfig::BITConfigReportType"

UMAA.SO.BITConfig.BITConfigReportTypeTopic = UMAA_SO_BITConfig_BITConfigReportTypeTopic

@idl.struct(
    type_annotations = [idl.type_name("UMAA::SO::BITConfig::BITConfigReportType")],
    member_annotations = {
        'source': [idl.key, ],
        'resourceID': [idl.key, ],
    }
)
class UMAA_SO_BITConfig_BITConfigReportType:
    continuousTestConfiguration: UMAA.Common.MaritimeEnumeration.ContinuousTestEnumModule.ContinuousTestEnumType = UMAA.Common.MaritimeEnumeration.ContinuousTestEnumModule.ContinuousTestEnumType.DISABLED_NO_TEST
    minTimeBetweenTests: Optional[float] = None
    powerOnTestConfiguration: UMAA.Common.MaritimeEnumeration.PowerOnTestEnumModule.PowerOnTestEnumType = UMAA.Common.MaritimeEnumeration.PowerOnTestEnumModule.PowerOnTestEnumType.DISABLED_NO_TEST
    timeStamp: UMAA.Common.Measurement.DateTime = field(default_factory = UMAA.Common.Measurement.DateTime)
    source: UMAA.Common.IdentifierType = field(default_factory = UMAA.Common.IdentifierType)
    resourceID: UMAA.Common.IdentifierType = field(default_factory = UMAA.Common.IdentifierType)

UMAA.SO.BITConfig.BITConfigReportType = UMAA_SO_BITConfig_BITConfigReportType
