
# WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

# This file was generated from FLSCommandType.idl
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
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/SEM/BaseType/'))
from FLSAdditionalConfigType import *
sys.path.pop()

UMAA = idl.get_module("UMAA")

UMAA_SEM = idl.get_module("UMAA_SEM")

UMAA.SEM = UMAA_SEM

UMAA_SEM_FLSControl = idl.get_module("UMAA_SEM_FLSControl")

UMAA.SEM.FLSControl = UMAA_SEM_FLSControl

UMAA_SEM_FLSControl_FLSCommandTypeTopic = "UMAA::SEM::FLSControl::FLSCommandType"

UMAA.SEM.FLSControl.FLSCommandTypeTopic = UMAA_SEM_FLSControl_FLSCommandTypeTopic

@idl.struct(
    type_annotations = [idl.type_name("UMAA::SEM::FLSControl::FLSCommandType")],
    member_annotations = {
        'source': [idl.key, ],
        'sessionID': [idl.key, ],
        'destination': [idl.key, ],
    }
)
class UMAA_SEM_FLSControl_FLSCommandType:
    additionalConfig: Optional[UMAA.SEM.BaseType.FLSAdditionalConfigType] = None
    configMode: UMAA.Common.MaritimeEnumeration.FLSConfigModeEnumModule.FLSConfigModeEnumType = UMAA.Common.MaritimeEnumeration.FLSConfigModeEnumModule.FLSConfigModeEnumType.DEV_TEST
    operationalState: UMAA.Common.MaritimeEnumeration.ActivationStateTargetEnumModule.ActivationStateTargetEnumType = UMAA.Common.MaritimeEnumeration.ActivationStateTargetEnumModule.ActivationStateTargetEnumType.ACTIVE
    timeStamp: UMAA.Common.Measurement.DateTime = field(default_factory = UMAA.Common.Measurement.DateTime)
    source: UMAA.Common.IdentifierType = field(default_factory = UMAA.Common.IdentifierType)
    sessionID: UMAA.Common.Measurement.NumericGUID = field(default_factory = UMAA.Common.Measurement.NumericGUID)
    destination: UMAA.Common.IdentifierType = field(default_factory = UMAA.Common.IdentifierType)

UMAA.SEM.FLSControl.FLSCommandType = UMAA_SEM_FLSControl_FLSCommandType
