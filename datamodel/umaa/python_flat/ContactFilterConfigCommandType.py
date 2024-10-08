
# WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

# This file was generated from ContactFilterConfigCommandType.idl
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

UMAA_SA_ContactFilterConfig_ContactFilterConfigCommandTypeTopic = "UMAA::SA::ContactFilterConfig::ContactFilterConfigCommandType"

UMAA.SA.ContactFilterConfig.ContactFilterConfigCommandTypeTopic = UMAA_SA_ContactFilterConfig_ContactFilterConfigCommandTypeTopic

@idl.struct(
    type_annotations = [idl.type_name("UMAA::SA::ContactFilterConfig::ContactFilterConfigCommandType")],
    member_annotations = {
        'source': [idl.key, ],
        'sessionID': [idl.key, ],
        'destination': [idl.key, ],
    }
)
class UMAA_SA_ContactFilterConfig_ContactFilterConfigCommandType:
    bearingChangeLimit: float = 0.0
    headingChangeLimit: float = 0.0
    messageFilterID: UMAA.Common.Measurement.NumericGUID = field(default_factory = UMAA.Common.Measurement.NumericGUID)
    noChangeTimerUpdate: float = 0.0
    positionChangeLimit: float = 0.0
    rangeChangeLimit: float = 0.0
    speedChangeLimit: float = 0.0
    withinRangeofOwnship: float = 0.0
    timeStamp: UMAA.Common.Measurement.DateTime = field(default_factory = UMAA.Common.Measurement.DateTime)
    source: UMAA.Common.IdentifierType = field(default_factory = UMAA.Common.IdentifierType)
    sessionID: UMAA.Common.Measurement.NumericGUID = field(default_factory = UMAA.Common.Measurement.NumericGUID)
    destination: UMAA.Common.IdentifierType = field(default_factory = UMAA.Common.IdentifierType)

UMAA.SA.ContactFilterConfig.ContactFilterConfigCommandType = UMAA_SA_ContactFilterConfig_ContactFilterConfigCommandType
