
# WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

# This file was generated from ResourceAuthorizationReportType.idl
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

UMAA_SO_ResourceIdentification = idl.get_module("UMAA_SO_ResourceIdentification")

UMAA.SO.ResourceIdentification = UMAA_SO_ResourceIdentification

UMAA_SO_ResourceIdentification_ResourceAuthorizationReportTypeTopic = "UMAA::SO::ResourceIdentification::ResourceAuthorizationReportType"

UMAA.SO.ResourceIdentification.ResourceAuthorizationReportTypeTopic = UMAA_SO_ResourceIdentification_ResourceAuthorizationReportTypeTopic

@idl.struct(
    type_annotations = [idl.type_name("UMAA::SO::ResourceIdentification::ResourceAuthorizationReportType")],
    member_annotations = {
        'source': [idl.key, ],
        'authorizationLevel': [idl.key, ],
    }
)
class UMAA_SO_ResourceIdentification_ResourceAuthorizationReportType:
    timeStamp: UMAA.Common.Measurement.DateTime = field(default_factory = UMAA.Common.Measurement.DateTime)
    source: UMAA.Common.IdentifierType = field(default_factory = UMAA.Common.IdentifierType)
    authorizationLevel: UMAA.Common.Enumeration.SpecificLOIEnumModule.SpecificLOIEnumType = UMAA.Common.Enumeration.SpecificLOIEnumModule.SpecificLOIEnumType.LOI_1

UMAA.SO.ResourceIdentification.ResourceAuthorizationReportType = UMAA_SO_ResourceIdentification_ResourceAuthorizationReportType
