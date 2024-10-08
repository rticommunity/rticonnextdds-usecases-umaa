
# WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

# This file was generated from FuelTankSpecsReportType.idl
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

UMAA_EO_FuelTankSpecs = idl.get_module("UMAA_EO_FuelTankSpecs")

UMAA.EO.FuelTankSpecs = UMAA_EO_FuelTankSpecs

UMAA_EO_FuelTankSpecs_FuelTankSpecsReportTypeTopic = "UMAA::EO::FuelTankSpecs::FuelTankSpecsReportType"

UMAA.EO.FuelTankSpecs.FuelTankSpecsReportTypeTopic = UMAA_EO_FuelTankSpecs_FuelTankSpecsReportTypeTopic

@idl.struct(
    type_annotations = [idl.type_name("UMAA::EO::FuelTankSpecs::FuelTankSpecsReportType")],
    member_annotations = {
        'name': [idl.bound(1023)],
        'source': [idl.key, ],
    }
)
class UMAA_EO_FuelTankSpecs_FuelTankSpecsReportType:
    capacity: float = 0.0
    name: str = ""
    timeStamp: UMAA.Common.Measurement.DateTime = field(default_factory = UMAA.Common.Measurement.DateTime)
    source: UMAA.Common.IdentifierType = field(default_factory = UMAA.Common.IdentifierType)

UMAA.EO.FuelTankSpecs.FuelTankSpecsReportType = UMAA_EO_FuelTankSpecs_FuelTankSpecsReportType
