
# WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

# This file was generated from AnchorSpecsReportType.idl
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

UMAA_EO = idl.get_module("UMAA_EO")

UMAA.EO = UMAA_EO

UMAA_EO_AnchorSpecs = idl.get_module("UMAA_EO_AnchorSpecs")

UMAA.EO.AnchorSpecs = UMAA_EO_AnchorSpecs

UMAA_EO_AnchorSpecs_AnchorSpecsReportTypeTopic = "UMAA::EO::AnchorSpecs::AnchorSpecsReportType"

UMAA.EO.AnchorSpecs.AnchorSpecsReportTypeTopic = UMAA_EO_AnchorSpecs_AnchorSpecsReportTypeTopic

@idl.struct(
    type_annotations = [idl.type_name("UMAA::EO::AnchorSpecs::AnchorSpecsReportType")],
    member_annotations = {
        'anchorDescription': [idl.bound(1023)],
        'source': [idl.key, ],
    }
)
class UMAA_EO_AnchorSpecs_AnchorSpecsReportType:
    anchorDescription: str = ""
    anchorHoldingPower: float = 0.0
    anchorHoldingPowerRatio: float = 0.0
    anchorKind: UMAA.Common.MaritimeEnumeration.AnchorKindEnumModule.AnchorKindEnumType = UMAA.Common.MaritimeEnumeration.AnchorKindEnumModule.AnchorKindEnumType.COMMERCIAL_STOCKLESS
    anchorLocation: UMAA.Common.MaritimeEnumeration.AnchorLocationEnumModule.AnchorLocationEnumType = UMAA.Common.MaritimeEnumeration.AnchorLocationEnumModule.AnchorLocationEnumType.BOWER
    anchorSize: float = 0.0
    rodeLength: float = 0.0
    rodeSize: float = 0.0
    rodeType: UMAA.Common.MaritimeEnumeration.AnchorRodeEnumModule.AnchorRodeEnumType = UMAA.Common.MaritimeEnumeration.AnchorRodeEnumModule.AnchorRodeEnumType.CHAIN
    rodeWorkingLoadLimit: float = 0.0
    timeStamp: UMAA.Common.Measurement.DateTime = field(default_factory = UMAA.Common.Measurement.DateTime)
    source: UMAA.Common.IdentifierType = field(default_factory = UMAA.Common.IdentifierType)

UMAA.EO.AnchorSpecs.AnchorSpecsReportType = UMAA_EO_AnchorSpecs_AnchorSpecsReportType
