
# WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

# This file was generated from PathReporterReportType.idl
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
from LargeListMetadata import *
sys.path.pop()
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/Common/'))
from IdentifierType import *
sys.path.pop()
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/Common/Measurement/'))
from Measurements import *
sys.path.pop()
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/MM/BaseType/'))
from WaypointType import *
sys.path.pop()

UMAA = idl.get_module("UMAA")

UMAA_SA = idl.get_module("UMAA_SA")

UMAA.SA = UMAA_SA

UMAA_SA_PathReporterStatus = idl.get_module("UMAA_SA_PathReporterStatus")

UMAA.SA.PathReporterStatus = UMAA_SA_PathReporterStatus

UMAA_SA_PathReporterStatus_PathReporterReportTypeTopic = "UMAA::SA::PathReporterStatus::PathReporterReportType"

UMAA.SA.PathReporterStatus.PathReporterReportTypeTopic = UMAA_SA_PathReporterStatus_PathReporterReportTypeTopic

@idl.struct(
    type_annotations = [idl.type_name("UMAA::SA::PathReporterStatus::PathReporterReportType")],
    member_annotations = {
        'source': [idl.key, ],
    }
)
class UMAA_SA_PathReporterStatus_PathReporterReportType:
    timeStamp: UMAA.Common.Measurement.DateTime = field(default_factory = UMAA.Common.Measurement.DateTime)
    source: UMAA.Common.IdentifierType = field(default_factory = UMAA.Common.IdentifierType)
    historicalGlobalPathsListMetadata: UMAA.Common.LargeListMetadata = field(default_factory = UMAA.Common.LargeListMetadata)
    historicalLocalPathsListMetadata: UMAA.Common.LargeListMetadata = field(default_factory = UMAA.Common.LargeListMetadata)
    plannedGlobalPathsListMetadata: UMAA.Common.LargeListMetadata = field(default_factory = UMAA.Common.LargeListMetadata)
    plannedLocalPathsListMetadata: UMAA.Common.LargeListMetadata = field(default_factory = UMAA.Common.LargeListMetadata)

UMAA.SA.PathReporterStatus.PathReporterReportType = UMAA_SA_PathReporterStatus_PathReporterReportType

UMAA_SA_PathReporterStatus_PathReporterReportTypeHistoricalGlobalPathsListElementTopic = "UMAA::SA::PathReporterStatus::PathReporterReportTypeHistoricalGlobalPathsListElement"

UMAA.SA.PathReporterStatus.PathReporterReportTypeHistoricalGlobalPathsListElementTopic = UMAA_SA_PathReporterStatus_PathReporterReportTypeHistoricalGlobalPathsListElementTopic

@idl.struct(
    type_annotations = [idl.type_name("UMAA::SA::PathReporterStatus::PathReporterReportTypeHistoricalGlobalPathsListElement")],
    member_annotations = {
        'listID': [idl.key, ],
        'elementID': [idl.key, ],
    }
)
class UMAA_SA_PathReporterStatus_PathReporterReportTypeHistoricalGlobalPathsListElement:
    element: UMAA.MM.BaseType.WaypointType = field(default_factory = UMAA.MM.BaseType.WaypointType)
    listID: UMAA.Common.Measurement.NumericGUID = field(default_factory = UMAA.Common.Measurement.NumericGUID)
    elementID: UMAA.Common.Measurement.NumericGUID = field(default_factory = UMAA.Common.Measurement.NumericGUID)
    elementTimestamp: UMAA.Common.Measurement.DateTime = field(default_factory = UMAA.Common.Measurement.DateTime)
    nextElementID: Optional[UMAA.Common.Measurement.NumericGUID] = None

UMAA.SA.PathReporterStatus.PathReporterReportTypeHistoricalGlobalPathsListElement = UMAA_SA_PathReporterStatus_PathReporterReportTypeHistoricalGlobalPathsListElement

UMAA_SA_PathReporterStatus_PathReporterReportTypeHistoricalLocalPathsListElementTopic = "UMAA::SA::PathReporterStatus::PathReporterReportTypeHistoricalLocalPathsListElement"

UMAA.SA.PathReporterStatus.PathReporterReportTypeHistoricalLocalPathsListElementTopic = UMAA_SA_PathReporterStatus_PathReporterReportTypeHistoricalLocalPathsListElementTopic

@idl.struct(
    type_annotations = [idl.type_name("UMAA::SA::PathReporterStatus::PathReporterReportTypeHistoricalLocalPathsListElement")],
    member_annotations = {
        'listID': [idl.key, ],
        'elementID': [idl.key, ],
    }
)
class UMAA_SA_PathReporterStatus_PathReporterReportTypeHistoricalLocalPathsListElement:
    element: UMAA.MM.BaseType.WaypointType = field(default_factory = UMAA.MM.BaseType.WaypointType)
    listID: UMAA.Common.Measurement.NumericGUID = field(default_factory = UMAA.Common.Measurement.NumericGUID)
    elementID: UMAA.Common.Measurement.NumericGUID = field(default_factory = UMAA.Common.Measurement.NumericGUID)
    elementTimestamp: UMAA.Common.Measurement.DateTime = field(default_factory = UMAA.Common.Measurement.DateTime)
    nextElementID: Optional[UMAA.Common.Measurement.NumericGUID] = None

UMAA.SA.PathReporterStatus.PathReporterReportTypeHistoricalLocalPathsListElement = UMAA_SA_PathReporterStatus_PathReporterReportTypeHistoricalLocalPathsListElement

UMAA_SA_PathReporterStatus_PathReporterReportTypePlannedGlobalPathsListElementTopic = "UMAA::SA::PathReporterStatus::PathReporterReportTypePlannedGlobalPathsListElement"

UMAA.SA.PathReporterStatus.PathReporterReportTypePlannedGlobalPathsListElementTopic = UMAA_SA_PathReporterStatus_PathReporterReportTypePlannedGlobalPathsListElementTopic

@idl.struct(
    type_annotations = [idl.type_name("UMAA::SA::PathReporterStatus::PathReporterReportTypePlannedGlobalPathsListElement")],
    member_annotations = {
        'listID': [idl.key, ],
        'elementID': [idl.key, ],
    }
)
class UMAA_SA_PathReporterStatus_PathReporterReportTypePlannedGlobalPathsListElement:
    element: UMAA.MM.BaseType.WaypointType = field(default_factory = UMAA.MM.BaseType.WaypointType)
    listID: UMAA.Common.Measurement.NumericGUID = field(default_factory = UMAA.Common.Measurement.NumericGUID)
    elementID: UMAA.Common.Measurement.NumericGUID = field(default_factory = UMAA.Common.Measurement.NumericGUID)
    elementTimestamp: UMAA.Common.Measurement.DateTime = field(default_factory = UMAA.Common.Measurement.DateTime)
    nextElementID: Optional[UMAA.Common.Measurement.NumericGUID] = None

UMAA.SA.PathReporterStatus.PathReporterReportTypePlannedGlobalPathsListElement = UMAA_SA_PathReporterStatus_PathReporterReportTypePlannedGlobalPathsListElement

UMAA_SA_PathReporterStatus_PathReporterReportTypePlannedLocalPathsListElementTopic = "UMAA::SA::PathReporterStatus::PathReporterReportTypePlannedLocalPathsListElement"

UMAA.SA.PathReporterStatus.PathReporterReportTypePlannedLocalPathsListElementTopic = UMAA_SA_PathReporterStatus_PathReporterReportTypePlannedLocalPathsListElementTopic

@idl.struct(
    type_annotations = [idl.type_name("UMAA::SA::PathReporterStatus::PathReporterReportTypePlannedLocalPathsListElement")],
    member_annotations = {
        'listID': [idl.key, ],
        'elementID': [idl.key, ],
    }
)
class UMAA_SA_PathReporterStatus_PathReporterReportTypePlannedLocalPathsListElement:
    element: UMAA.MM.BaseType.WaypointType = field(default_factory = UMAA.MM.BaseType.WaypointType)
    listID: UMAA.Common.Measurement.NumericGUID = field(default_factory = UMAA.Common.Measurement.NumericGUID)
    elementID: UMAA.Common.Measurement.NumericGUID = field(default_factory = UMAA.Common.Measurement.NumericGUID)
    elementTimestamp: UMAA.Common.Measurement.DateTime = field(default_factory = UMAA.Common.Measurement.DateTime)
    nextElementID: Optional[UMAA.Common.Measurement.NumericGUID] = None

UMAA.SA.PathReporterStatus.PathReporterReportTypePlannedLocalPathsListElement = UMAA_SA_PathReporterStatus_PathReporterReportTypePlannedLocalPathsListElement
