
# WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

# This file was generated from PassiveContactReportType.idl
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
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/Common/Environment/'))
from PoseType import *
sys.path.pop()
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/Common/'))
from IdentifierType import *
sys.path.pop()
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/Common/Measurement/'))
from Measurements import *
sys.path.pop()
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/SA/PassiveContactReport/'))
from PassiveContactType import *
sys.path.pop()

UMAA = idl.get_module("UMAA")

UMAA_SA = idl.get_module("UMAA_SA")

UMAA.SA = UMAA_SA

UMAA_SA_PassiveContactReport = idl.get_module("UMAA_SA_PassiveContactReport")

UMAA.SA.PassiveContactReport = UMAA_SA_PassiveContactReport

UMAA_SA_PassiveContactReport_PassiveContactReportTypeTopic = "UMAA::SA::PassiveContactReport::PassiveContactReportType"

UMAA.SA.PassiveContactReport.PassiveContactReportTypeTopic = UMAA_SA_PassiveContactReport_PassiveContactReportTypeTopic

@idl.struct(
    type_annotations = [idl.type_name("UMAA::SA::PassiveContactReport::PassiveContactReportType")],
    member_annotations = {
        'source': [idl.key, ],
    }
)
class UMAA_SA_PassiveContactReport_PassiveContactReportType:
    platformPose: UMAA.Common.Environment.PoseType = field(default_factory = UMAA.Common.Environment.PoseType)
    timeStamp: UMAA.Common.Measurement.DateTime = field(default_factory = UMAA.Common.Measurement.DateTime)
    source: UMAA.Common.IdentifierType = field(default_factory = UMAA.Common.IdentifierType)
    contactsSetMetadata: UMAA.Common.LargeSetMetadata = field(default_factory = UMAA.Common.LargeSetMetadata)

UMAA.SA.PassiveContactReport.PassiveContactReportType = UMAA_SA_PassiveContactReport_PassiveContactReportType

UMAA_SA_PassiveContactReport_PassiveContactReportTypeContactsSetElementTopic = "UMAA::SA::PassiveContactReport::PassiveContactReportTypeContactsSetElement"

UMAA.SA.PassiveContactReport.PassiveContactReportTypeContactsSetElementTopic = UMAA_SA_PassiveContactReport_PassiveContactReportTypeContactsSetElementTopic

@idl.struct(
    type_annotations = [idl.type_name("UMAA::SA::PassiveContactReport::PassiveContactReportTypeContactsSetElement")],
    member_annotations = {
        'setID': [idl.key, ],
        'elementID': [idl.key, ],
    }
)
class UMAA_SA_PassiveContactReport_PassiveContactReportTypeContactsSetElement:
    element: UMAA.SA.PassiveContactReport.PassiveContactType = field(default_factory = UMAA.SA.PassiveContactReport.PassiveContactType)
    setID: UMAA.Common.Measurement.NumericGUID = field(default_factory = UMAA.Common.Measurement.NumericGUID)
    elementID: UMAA.Common.Measurement.NumericGUID = field(default_factory = UMAA.Common.Measurement.NumericGUID)
    elementTimestamp: UMAA.Common.Measurement.DateTime = field(default_factory = UMAA.Common.Measurement.DateTime)

UMAA.SA.PassiveContactReport.PassiveContactReportTypeContactsSetElement = UMAA_SA_PassiveContactReport_PassiveContactReportTypeContactsSetElement
