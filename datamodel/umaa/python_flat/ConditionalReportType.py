
# WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

# This file was generated from ConditionalReportType.idl
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
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/MM/Conditional/'))
from ConditionalType import *
sys.path.pop()

UMAA = idl.get_module("UMAA")

UMAA_MM = idl.get_module("UMAA_MM")

UMAA.MM = UMAA_MM

UMAA_MM_ConditionalReport = idl.get_module("UMAA_MM_ConditionalReport")

UMAA.MM.ConditionalReport = UMAA_MM_ConditionalReport

UMAA_MM_ConditionalReport_ConditionalReportTypeTopic = "UMAA::MM::ConditionalReport::ConditionalReportType"

UMAA.MM.ConditionalReport.ConditionalReportTypeTopic = UMAA_MM_ConditionalReport_ConditionalReportTypeTopic

@idl.struct(
    type_annotations = [idl.type_name("UMAA::MM::ConditionalReport::ConditionalReportType")],
    member_annotations = {
        'source': [idl.key, ],
    }
)
class UMAA_MM_ConditionalReport_ConditionalReportType:
    timeStamp: UMAA.Common.Measurement.DateTime = field(default_factory = UMAA.Common.Measurement.DateTime)
    source: UMAA.Common.IdentifierType = field(default_factory = UMAA.Common.IdentifierType)
    conditionalsSetMetadata: UMAA.Common.LargeSetMetadata = field(default_factory = UMAA.Common.LargeSetMetadata)

UMAA.MM.ConditionalReport.ConditionalReportType = UMAA_MM_ConditionalReport_ConditionalReportType

UMAA_MM_ConditionalReport_ConditionalReportTypeConditionalsSetElementTopic = "UMAA::MM::ConditionalReport::ConditionalReportTypeConditionalsSetElement"

UMAA.MM.ConditionalReport.ConditionalReportTypeConditionalsSetElementTopic = UMAA_MM_ConditionalReport_ConditionalReportTypeConditionalsSetElementTopic

@idl.struct(
    type_annotations = [idl.type_name("UMAA::MM::ConditionalReport::ConditionalReportTypeConditionalsSetElement")],
    member_annotations = {
        'setID': [idl.key, ],
        'elementID': [idl.key, ],
    }
)
class UMAA_MM_ConditionalReport_ConditionalReportTypeConditionalsSetElement:
    element: UMAA.MM.Conditional.ConditionalType = field(default_factory = UMAA.MM.Conditional.ConditionalType)
    setID: UMAA.Common.Measurement.NumericGUID = field(default_factory = UMAA.Common.Measurement.NumericGUID)
    elementID: UMAA.Common.Measurement.NumericGUID = field(default_factory = UMAA.Common.Measurement.NumericGUID)
    elementTimestamp: UMAA.Common.Measurement.DateTime = field(default_factory = UMAA.Common.Measurement.DateTime)

UMAA.MM.ConditionalReport.ConditionalReportTypeConditionalsSetElement = UMAA_MM_ConditionalReport_ConditionalReportTypeConditionalsSetElement
