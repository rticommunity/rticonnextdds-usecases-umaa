
# WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

# This file was generated from SASConfigReportType.idl
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
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/Common/PrimitiveConstrained/'))
from ConstrainedTypes import *
sys.path.pop()

UMAA = idl.get_module("UMAA")

UMAA_SEM = idl.get_module("UMAA_SEM")

UMAA.SEM = UMAA_SEM

UMAA_SEM_SASConfig = idl.get_module("UMAA_SEM_SASConfig")

UMAA.SEM.SASConfig = UMAA_SEM_SASConfig

UMAA_SEM_SASConfig_SASConfigReportTypeTopic = "UMAA::SEM::SASConfig::SASConfigReportType"

UMAA.SEM.SASConfig.SASConfigReportTypeTopic = UMAA_SEM_SASConfig_SASConfigReportTypeTopic

@idl.struct(
    type_annotations = [idl.type_name("UMAA::SEM::SASConfig::SASConfigReportType")],
    member_annotations = {
        'name': [idl.bound(2047)],
        'source': [idl.key, ],
    }
)
class UMAA_SEM_SASConfig_SASConfigReportType:
    autoOffMode: UMAA.Common.MaritimeEnumeration.AutoOffModeEnumModule.AutoOffModeEnumType = UMAA.Common.MaritimeEnumeration.AutoOffModeEnumModule.AutoOffModeEnumType.DEACTIVATE
    name: str = ""
    timeStamp: UMAA.Common.Measurement.DateTime = field(default_factory = UMAA.Common.Measurement.DateTime)
    source: UMAA.Common.IdentifierType = field(default_factory = UMAA.Common.IdentifierType)

UMAA.SEM.SASConfig.SASConfigReportType = UMAA_SEM_SASConfig_SASConfigReportType
