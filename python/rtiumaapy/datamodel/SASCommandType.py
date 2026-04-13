
# WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

# This file was generated from SASCommandType.idl
# using RTI Code Generator (rtiddsgen) version 4.6.0.
# The rtiddsgen tool is part of the RTI Connext DDS distribution.
# For more information, type 'rtiddsgen -help' at a command shell
# or consult the Code Generator User's Manual.

from dataclasses import field
from typing import Union, Sequence, Optional
import rti.idl as idl
import rti.rpc as rpc
from enum import IntEnum
import sys
import os
from abc import ABC


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

UMAA_SEM_SASControl = idl.get_module("UMAA_SEM_SASControl")

UMAA.SEM.SASControl = UMAA_SEM_SASControl

UMAA_SEM_SASControl_SASCommandTypeTopic = "UMAA::SEM::SASControl::SASCommandType"

UMAA.SEM.SASControl.SASCommandTypeTopic = UMAA_SEM_SASControl_SASCommandTypeTopic

@idl.struct(
    type_annotations = [idl.type_name("UMAA::SEM::SASControl::SASCommandType"), idl.xtypes_compliance(0x0000018C), ],

    member_annotations = {
        'targetState': [idl.default(0),],
        'source': [idl.key, ],
        'sessionID': [idl.key, ],
        'destination': [idl.key, ],
    }
)
class UMAA_SEM_SASControl_SASCommandType:
    targetState: UMAA.Common.MaritimeEnumeration.ActivationStateTargetEnumModule.ActivationStateTargetEnumType = UMAA.Common.MaritimeEnumeration.ActivationStateTargetEnumModule.ActivationStateTargetEnumType.ACTIVE
    timeStamp: UMAA.Common.Measurement.DateTime = field(default_factory = UMAA.Common.Measurement.DateTime)
    source: UMAA.Common.IdentifierType = field(default_factory = UMAA.Common.IdentifierType)
    sessionID: UMAA.Common.Measurement.NumericGUID = field(default_factory = UMAA.Common.Measurement.NumericGUID)
    destination: UMAA.Common.IdentifierType = field(default_factory = UMAA.Common.IdentifierType)

UMAA.SEM.SASControl.SASCommandType = UMAA_SEM_SASControl_SASCommandType
