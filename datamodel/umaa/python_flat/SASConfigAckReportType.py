
# WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

# This file was generated from SASConfigAckReportType.idl
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
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/SEM/SASConfig/'))
from SASConfigCommandType import *
sys.path.pop()

UMAA = idl.get_module("UMAA")

UMAA_SEM = idl.get_module("UMAA_SEM")

UMAA.SEM = UMAA_SEM

UMAA_SEM_SASConfig = idl.get_module("UMAA_SEM_SASConfig")

UMAA.SEM.SASConfig = UMAA_SEM_SASConfig

UMAA_SEM_SASConfig_SASConfigAckReportTypeTopic = "UMAA::SEM::SASConfig::SASConfigAckReportType"

UMAA.SEM.SASConfig.SASConfigAckReportTypeTopic = UMAA_SEM_SASConfig_SASConfigAckReportTypeTopic

@idl.struct(
    type_annotations = [idl.type_name("UMAA::SEM::SASConfig::SASConfigAckReportType")],
    member_annotations = {
        'source': [idl.key, ],
    }
)
class UMAA_SEM_SASConfig_SASConfigAckReportType:
    config: UMAA.SEM.SASConfig.SASConfigCommandType = field(default_factory = UMAA.SEM.SASConfig.SASConfigCommandType)
    timeStamp: UMAA.Common.Measurement.DateTime = field(default_factory = UMAA.Common.Measurement.DateTime)
    source: UMAA.Common.IdentifierType = field(default_factory = UMAA.Common.IdentifierType)

UMAA.SEM.SASConfig.SASConfigAckReportType = UMAA_SEM_SASConfig_SASConfigAckReportType
