
# WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

# This file was generated from BatteryCellDataType.idl
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

sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/Common/Measurement/'))
from Measurements import *
sys.path.pop()

UMAA = idl.get_module("UMAA")

UMAA_EO = idl.get_module("UMAA_EO")

UMAA.EO = UMAA_EO

UMAA_EO_BatteryStatus = idl.get_module("UMAA_EO_BatteryStatus")

UMAA.EO.BatteryStatus = UMAA_EO_BatteryStatus

@idl.struct(
    type_annotations = [idl.type_name("UMAA::EO::BatteryStatus::BatteryCellDataType")])
class UMAA_EO_BatteryStatus_BatteryCellDataType:
    current: float = 0.0
    temperature: float = 0.0
    voltage: float = 0.0

UMAA.EO.BatteryStatus.BatteryCellDataType = UMAA_EO_BatteryStatus_BatteryCellDataType
