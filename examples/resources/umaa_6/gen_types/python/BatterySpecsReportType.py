
# WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

# This file was generated from BatterySpecsReportType.idl
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
from Measurements import *
sys.path.pop()
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/Common/PrimitiveConstrained/'))
from ConstrainedTypes import *
sys.path.pop()

UMAA = idl.get_module("UMAA")

UMAA_EO = idl.get_module("UMAA_EO")

UMAA.EO = UMAA_EO

UMAA_EO_BatterySpecs = idl.get_module("UMAA_EO_BatterySpecs")

UMAA.EO.BatterySpecs = UMAA_EO_BatterySpecs

UMAA_EO_BatterySpecs_BatterySpecsReportTypeTopic = "UMAA::EO::BatterySpecs::BatterySpecsReportType"

UMAA.EO.BatterySpecs.BatterySpecsReportTypeTopic = UMAA_EO_BatterySpecs_BatterySpecsReportTypeTopic

@idl.struct(
    type_annotations = [idl.type_name("UMAA::EO::BatterySpecs::BatterySpecsReportType")],
    member_annotations = {
        'name': [idl.bound(1023)],
        'source': [idl.key, ],
    }
)
class UMAA_EO_BatterySpecs_BatterySpecsReportType:
    cellMinimumVoltage: float = 0.0
    maxCapacity: float = 0.0
    maxChargingCurrent: float = 0.0
    maxChargingTemp: float = 0.0
    maxOutputCurrent: float = 0.0
    maxPulsedChargeCurrent: Optional[float] = None
    maxPulsedChargeCurrentDuration: Optional[float] = None
    maxStorageTemp: float = 0.0
    maxTemperature: float = 0.0
    maxVoltage: float = 0.0
    minChargeCycles: Optional[float] = None
    minChargingTemp: float = 0.0
    minStorageTemp: float = 0.0
    minTemperature: float = 0.0
    minVoltage: float = 0.0
    name: str = ""
    nominalCapacity: float = 0.0
    nominalEnergy: float = 0.0
    nominalVoltage: float = 0.0
    peakDischargeCurrent: float = 0.0
    timeStamp: UMAA.Common.Measurement.DateTime = field(default_factory = UMAA.Common.Measurement.DateTime)
    source: UMAA.Common.IdentifierType = field(default_factory = UMAA.Common.IdentifierType)

UMAA.EO.BatterySpecs.BatterySpecsReportType = UMAA_EO_BatterySpecs_BatterySpecsReportType
