
# WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

# This file was generated from BatteryReportType.idl
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
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/Common/MaritimeEnumeration/'))
from MaritimeEnumerationSets import *
sys.path.pop()
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/Common/Measurement/'))
from Measurements import *
sys.path.pop()
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/EO/BatteryStatus/'))
from BatteryCellDataType import *
sys.path.pop()

UMAA = idl.get_module("UMAA")

UMAA_EO = idl.get_module("UMAA_EO")

UMAA.EO = UMAA_EO

UMAA_EO_BatteryStatus = idl.get_module("UMAA_EO_BatteryStatus")

UMAA.EO.BatteryStatus = UMAA_EO_BatteryStatus

UMAA_EO_BatteryStatus_BatteryReportTypeTopic = "UMAA::EO::BatteryStatus::BatteryReportType"

UMAA.EO.BatteryStatus.BatteryReportTypeTopic = UMAA_EO_BatteryStatus_BatteryReportTypeTopic

@idl.struct(
    type_annotations = [idl.type_name("UMAA::EO::BatteryStatus::BatteryReportType")],
    member_annotations = {
        'source': [idl.key, ],
    }
)
class UMAA_EO_BatteryStatus_BatteryReportType:
    chargeRemaining: Optional[float] = None
    current: Optional[float] = None
    energyUsageRate: Optional[float] = None
    hours: Optional[float] = None
    state: UMAA.Common.MaritimeEnumeration.PowerPlantStateEnumModule.PowerPlantStateEnumType = UMAA.Common.MaritimeEnumeration.PowerPlantStateEnumModule.PowerPlantStateEnumType.FAULT
    temp: Optional[float] = None
    voltage: Optional[float] = None
    timeStamp: UMAA.Common.Measurement.DateTime = field(default_factory = UMAA.Common.Measurement.DateTime)
    source: UMAA.Common.IdentifierType = field(default_factory = UMAA.Common.IdentifierType)
    cellsListMetadata: UMAA.Common.LargeListMetadata = field(default_factory = UMAA.Common.LargeListMetadata)

UMAA.EO.BatteryStatus.BatteryReportType = UMAA_EO_BatteryStatus_BatteryReportType

UMAA_EO_BatteryStatus_BatteryReportTypeCellsListElementTopic = "UMAA::EO::BatteryStatus::BatteryReportTypeCellsListElement"

UMAA.EO.BatteryStatus.BatteryReportTypeCellsListElementTopic = UMAA_EO_BatteryStatus_BatteryReportTypeCellsListElementTopic

@idl.struct(
    type_annotations = [idl.type_name("UMAA::EO::BatteryStatus::BatteryReportTypeCellsListElement")],
    member_annotations = {
        'listID': [idl.key, ],
        'elementID': [idl.key, ],
    }
)
class UMAA_EO_BatteryStatus_BatteryReportTypeCellsListElement:
    element: UMAA.EO.BatteryStatus.BatteryCellDataType = field(default_factory = UMAA.EO.BatteryStatus.BatteryCellDataType)
    listID: UMAA.Common.Measurement.NumericGUID = field(default_factory = UMAA.Common.Measurement.NumericGUID)
    elementID: UMAA.Common.Measurement.NumericGUID = field(default_factory = UMAA.Common.Measurement.NumericGUID)
    elementTimestamp: UMAA.Common.Measurement.DateTime = field(default_factory = UMAA.Common.Measurement.DateTime)
    nextElementID: Optional[UMAA.Common.Measurement.NumericGUID] = None

UMAA.EO.BatteryStatus.BatteryReportTypeCellsListElement = UMAA_EO_BatteryStatus_BatteryReportTypeCellsListElement
