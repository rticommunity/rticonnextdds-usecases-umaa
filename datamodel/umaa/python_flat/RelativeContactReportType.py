
# WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

# This file was generated from RelativeContactReportType.idl
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
from GeoPosition2D import *
sys.path.pop()
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/Common/Measurement/'))
from Measurements import *
sys.path.pop()

UMAA = idl.get_module("UMAA")

UMAA_SA = idl.get_module("UMAA_SA")

UMAA.SA = UMAA_SA

UMAA_SA_RelativeContactReport = idl.get_module("UMAA_SA_RelativeContactReport")

UMAA.SA.RelativeContactReport = UMAA_SA_RelativeContactReport

UMAA_SA_RelativeContactReport_RelativeContactReportTypeTopic = "UMAA::SA::RelativeContactReport::RelativeContactReportType"

UMAA.SA.RelativeContactReport.RelativeContactReportTypeTopic = UMAA_SA_RelativeContactReport_RelativeContactReportTypeTopic

@idl.struct(
    type_annotations = [idl.type_name("UMAA::SA::RelativeContactReport::RelativeContactReportType")],
    member_annotations = {
        'source': [idl.key, ],
        'contactID': [idl.key, ],
    }
)
class UMAA_SA_RelativeContactReport_RelativeContactReportType:
    bearing: Optional[float] = None
    CPA: Optional[UMAA.Common.Measurement.GeoPosition2D] = None
    CPATime: Optional[UMAA.Common.Measurement.DateTime] = None
    timeStamp: UMAA.Common.Measurement.DateTime = field(default_factory = UMAA.Common.Measurement.DateTime)
    source: UMAA.Common.IdentifierType = field(default_factory = UMAA.Common.IdentifierType)
    contactID: UMAA.Common.Measurement.NumericGUID = field(default_factory = UMAA.Common.Measurement.NumericGUID)

UMAA.SA.RelativeContactReport.RelativeContactReportType = UMAA_SA_RelativeContactReport_RelativeContactReportType
