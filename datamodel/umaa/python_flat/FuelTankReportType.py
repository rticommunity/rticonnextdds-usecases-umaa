
# WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

# This file was generated from FuelTankReportType.idl
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

UMAA_EO = idl.get_module("UMAA_EO")

UMAA.EO = UMAA_EO

UMAA_EO_FuelTankStatus = idl.get_module("UMAA_EO_FuelTankStatus")

UMAA.EO.FuelTankStatus = UMAA_EO_FuelTankStatus

UMAA_EO_FuelTankStatus_FuelTankReportTypeTopic = "UMAA::EO::FuelTankStatus::FuelTankReportType"

UMAA.EO.FuelTankStatus.FuelTankReportTypeTopic = UMAA_EO_FuelTankStatus_FuelTankReportTypeTopic

@idl.struct(
    type_annotations = [idl.type_name("UMAA::EO::FuelTankStatus::FuelTankReportType")],
    member_annotations = {
        'source': [idl.key, ],
    }
)
class UMAA_EO_FuelTankStatus_FuelTankReportType:
    fuelLevel: float = 0.0
    waterInFuel: Optional[bool] = None
    timeStamp: UMAA.Common.Measurement.DateTime = field(default_factory = UMAA.Common.Measurement.DateTime)
    source: UMAA.Common.IdentifierType = field(default_factory = UMAA.Common.IdentifierType)

UMAA.EO.FuelTankStatus.FuelTankReportType = UMAA_EO_FuelTankStatus_FuelTankReportType
