
# WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

# This file was generated from ContactFilterCancelConfigType.idl
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

UMAA = idl.get_module("UMAA")

UMAA_SA = idl.get_module("UMAA_SA")

UMAA.SA = UMAA_SA

UMAA_SA_ContactFilterConfig = idl.get_module("UMAA_SA_ContactFilterConfig")

UMAA.SA.ContactFilterConfig = UMAA_SA_ContactFilterConfig

UMAA_SA_ContactFilterConfig_ContactFilterCancelConfigTypeTopic = "UMAA::SA::ContactFilterConfig::ContactFilterCancelConfigType"

UMAA.SA.ContactFilterConfig.ContactFilterCancelConfigTypeTopic = UMAA_SA_ContactFilterConfig_ContactFilterCancelConfigTypeTopic

@idl.struct(
    type_annotations = [idl.type_name("UMAA::SA::ContactFilterConfig::ContactFilterCancelConfigType")],
    member_annotations = {
        'source': [idl.key, ],
        'sessionID': [idl.key, ],
        'destination': [idl.key, ],
    }
)
class UMAA_SA_ContactFilterConfig_ContactFilterCancelConfigType:
    timeStamp: UMAA.Common.Measurement.DateTime = field(default_factory = UMAA.Common.Measurement.DateTime)
    source: UMAA.Common.IdentifierType = field(default_factory = UMAA.Common.IdentifierType)
    sessionID: UMAA.Common.Measurement.NumericGUID = field(default_factory = UMAA.Common.Measurement.NumericGUID)
    destination: UMAA.Common.IdentifierType = field(default_factory = UMAA.Common.IdentifierType)

UMAA.SA.ContactFilterConfig.ContactFilterCancelConfigType = UMAA_SA_ContactFilterConfig_ContactFilterCancelConfigType
