
# WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

# This file was generated from ContactCOLREGSClassificationReportType.idl
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

UMAA_SA = idl.get_module("UMAA_SA")

UMAA.SA = UMAA_SA

UMAA_SA_ContactCOLREGSClassificationStatus = idl.get_module("UMAA_SA_ContactCOLREGSClassificationStatus")

UMAA.SA.ContactCOLREGSClassificationStatus = UMAA_SA_ContactCOLREGSClassificationStatus

UMAA_SA_ContactCOLREGSClassificationStatus_ContactCOLREGSClassificationReportTypeTopic = "UMAA::SA::ContactCOLREGSClassificationStatus::ContactCOLREGSClassificationReportType"

UMAA.SA.ContactCOLREGSClassificationStatus.ContactCOLREGSClassificationReportTypeTopic = UMAA_SA_ContactCOLREGSClassificationStatus_ContactCOLREGSClassificationReportTypeTopic

@idl.struct(
    type_annotations = [idl.type_name("UMAA::SA::ContactCOLREGSClassificationStatus::ContactCOLREGSClassificationReportType")],
    member_annotations = {
        'source': [idl.key, ],
        'colregsClassification': [idl.key, ],
        'contactID': [idl.key, ],
    }
)
class UMAA_SA_ContactCOLREGSClassificationStatus_ContactCOLREGSClassificationReportType:
    confidence: float = 0.0
    timeStamp: UMAA.Common.Measurement.DateTime = field(default_factory = UMAA.Common.Measurement.DateTime)
    source: UMAA.Common.IdentifierType = field(default_factory = UMAA.Common.IdentifierType)
    colregsClassification: UMAA.Common.MaritimeEnumeration.COLREGSClassificationEnumModule.COLREGSClassificationEnumType = UMAA.Common.MaritimeEnumeration.COLREGSClassificationEnumModule.COLREGSClassificationEnumType.ANCHORED
    contactID: UMAA.Common.Measurement.NumericGUID = field(default_factory = UMAA.Common.Measurement.NumericGUID)

UMAA.SA.ContactCOLREGSClassificationStatus.ContactCOLREGSClassificationReportType = UMAA_SA_ContactCOLREGSClassificationStatus_ContactCOLREGSClassificationReportType
