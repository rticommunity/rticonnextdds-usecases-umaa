
# WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

# This file was generated from ContactReportType.idl
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
from LargeSetMetadata import *
sys.path.pop()
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/Common/'))
from IdentifierType import *
sys.path.pop()
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/Common/Measurement/'))
from Measurements import *
sys.path.pop()
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/SA/ContactReport/'))
from ContactType import *
sys.path.pop()

UMAA = idl.get_module("UMAA")

UMAA_SA = idl.get_module("UMAA_SA")

UMAA.SA = UMAA_SA

UMAA_SA_ContactReport = idl.get_module("UMAA_SA_ContactReport")

UMAA.SA.ContactReport = UMAA_SA_ContactReport

UMAA_SA_ContactReport_ContactReportTypeTopic = "UMAA::SA::ContactReport::ContactReportType"

UMAA.SA.ContactReport.ContactReportTypeTopic = UMAA_SA_ContactReport_ContactReportTypeTopic

@idl.struct(
    type_annotations = [idl.type_name("UMAA::SA::ContactReport::ContactReportType")],
    member_annotations = {
        'source': [idl.key, ],
    }
)
class UMAA_SA_ContactReport_ContactReportType:
    timeStamp: UMAA.Common.Measurement.DateTime = field(default_factory = UMAA.Common.Measurement.DateTime)
    source: UMAA.Common.IdentifierType = field(default_factory = UMAA.Common.IdentifierType)
    contactsSetMetadata: UMAA.Common.LargeSetMetadata = field(default_factory = UMAA.Common.LargeSetMetadata)

UMAA.SA.ContactReport.ContactReportType = UMAA_SA_ContactReport_ContactReportType

UMAA_SA_ContactReport_ContactReportTypeContactsSetElementTopic = "UMAA::SA::ContactReport::ContactReportTypeContactsSetElement"

UMAA.SA.ContactReport.ContactReportTypeContactsSetElementTopic = UMAA_SA_ContactReport_ContactReportTypeContactsSetElementTopic

@idl.struct(
    type_annotations = [idl.type_name("UMAA::SA::ContactReport::ContactReportTypeContactsSetElement")],
    member_annotations = {
        'setID': [idl.key, ],
        'elementID': [idl.key, ],
    }
)
class UMAA_SA_ContactReport_ContactReportTypeContactsSetElement:
    element: UMAA.SA.ContactReport.ContactType = field(default_factory = UMAA.SA.ContactReport.ContactType)
    setID: UMAA.Common.Measurement.NumericGUID = field(default_factory = UMAA.Common.Measurement.NumericGUID)
    elementID: UMAA.Common.Measurement.NumericGUID = field(default_factory = UMAA.Common.Measurement.NumericGUID)
    elementTimestamp: UMAA.Common.Measurement.DateTime = field(default_factory = UMAA.Common.Measurement.DateTime)

UMAA.SA.ContactReport.ContactReportTypeContactsSetElement = UMAA_SA_ContactReport_ContactReportTypeContactsSetElement
