
# WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

# This file was generated from MissionPlanReportType.idl
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
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/MM/BaseType/'))
from MissionPlanType import *
sys.path.pop()
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/MM/Constraint/'))
from ConstraintType import *
sys.path.pop()

UMAA = idl.get_module("UMAA")

UMAA_MM = idl.get_module("UMAA_MM")

UMAA.MM = UMAA_MM

UMAA_MM_MissionPlanReport = idl.get_module("UMAA_MM_MissionPlanReport")

UMAA.MM.MissionPlanReport = UMAA_MM_MissionPlanReport

UMAA_MM_MissionPlanReport_MissionPlanReportTypeTopic = "UMAA::MM::MissionPlanReport::MissionPlanReportType"

UMAA.MM.MissionPlanReport.MissionPlanReportTypeTopic = UMAA_MM_MissionPlanReport_MissionPlanReportTypeTopic

@idl.struct(
    type_annotations = [idl.type_name("UMAA::MM::MissionPlanReport::MissionPlanReportType")],
    member_annotations = {
        'source': [idl.key, ],
    }
)
class UMAA_MM_MissionPlanReport_MissionPlanReportType:
    timeStamp: UMAA.Common.Measurement.DateTime = field(default_factory = UMAA.Common.Measurement.DateTime)
    source: UMAA.Common.IdentifierType = field(default_factory = UMAA.Common.IdentifierType)
    constraintsSetMetadata: UMAA.Common.LargeSetMetadata = field(default_factory = UMAA.Common.LargeSetMetadata)
    missionPlanSetMetadata: UMAA.Common.LargeSetMetadata = field(default_factory = UMAA.Common.LargeSetMetadata)

UMAA.MM.MissionPlanReport.MissionPlanReportType = UMAA_MM_MissionPlanReport_MissionPlanReportType

UMAA_MM_MissionPlanReport_MissionPlanReportTypeConstraintsSetElementTopic = "UMAA::MM::MissionPlanReport::MissionPlanReportTypeConstraintsSetElement"

UMAA.MM.MissionPlanReport.MissionPlanReportTypeConstraintsSetElementTopic = UMAA_MM_MissionPlanReport_MissionPlanReportTypeConstraintsSetElementTopic

@idl.struct(
    type_annotations = [idl.type_name("UMAA::MM::MissionPlanReport::MissionPlanReportTypeConstraintsSetElement")],
    member_annotations = {
        'setID': [idl.key, ],
        'elementID': [idl.key, ],
    }
)
class UMAA_MM_MissionPlanReport_MissionPlanReportTypeConstraintsSetElement:
    element: UMAA.MM.Constraint.ConstraintType = field(default_factory = UMAA.MM.Constraint.ConstraintType)
    setID: UMAA.Common.Measurement.NumericGUID = field(default_factory = UMAA.Common.Measurement.NumericGUID)
    elementID: UMAA.Common.Measurement.NumericGUID = field(default_factory = UMAA.Common.Measurement.NumericGUID)
    elementTimestamp: UMAA.Common.Measurement.DateTime = field(default_factory = UMAA.Common.Measurement.DateTime)

UMAA.MM.MissionPlanReport.MissionPlanReportTypeConstraintsSetElement = UMAA_MM_MissionPlanReport_MissionPlanReportTypeConstraintsSetElement

UMAA_MM_MissionPlanReport_MissionPlanReportTypeMissionPlanSetElementTopic = "UMAA::MM::MissionPlanReport::MissionPlanReportTypeMissionPlanSetElement"

UMAA.MM.MissionPlanReport.MissionPlanReportTypeMissionPlanSetElementTopic = UMAA_MM_MissionPlanReport_MissionPlanReportTypeMissionPlanSetElementTopic

@idl.struct(
    type_annotations = [idl.type_name("UMAA::MM::MissionPlanReport::MissionPlanReportTypeMissionPlanSetElement")],
    member_annotations = {
        'setID': [idl.key, ],
        'elementID': [idl.key, ],
    }
)
class UMAA_MM_MissionPlanReport_MissionPlanReportTypeMissionPlanSetElement:
    element: UMAA.MM.BaseType.MissionPlanType = field(default_factory = UMAA.MM.BaseType.MissionPlanType)
    setID: UMAA.Common.Measurement.NumericGUID = field(default_factory = UMAA.Common.Measurement.NumericGUID)
    elementID: UMAA.Common.Measurement.NumericGUID = field(default_factory = UMAA.Common.Measurement.NumericGUID)
    elementTimestamp: UMAA.Common.Measurement.DateTime = field(default_factory = UMAA.Common.Measurement.DateTime)

UMAA.MM.MissionPlanReport.MissionPlanReportTypeMissionPlanSetElement = UMAA_MM_MissionPlanReport_MissionPlanReportTypeMissionPlanSetElement
