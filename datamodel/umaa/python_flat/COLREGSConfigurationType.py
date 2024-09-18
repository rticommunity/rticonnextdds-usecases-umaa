
# WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

# This file was generated from COLREGSConfigurationType.idl
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

UMAA_MO = idl.get_module("UMAA_MO")

UMAA.MO = UMAA_MO

UMAA_MO_HazardAvoidanceConfig = idl.get_module("UMAA_MO_HazardAvoidanceConfig")

UMAA.MO.HazardAvoidanceConfig = UMAA_MO_HazardAvoidanceConfig

@idl.struct(
    type_annotations = [idl.type_name("UMAA::MO::HazardAvoidanceConfig::COLREGSConfigurationType")])
class UMAA_MO_HazardAvoidanceConfig_COLREGSConfigurationType:
    dangerRange: float = 0.0
    doubtRange: float = 0.0
    influenceRange: float = 0.0

UMAA.MO.HazardAvoidanceConfig.COLREGSConfigurationType = UMAA_MO_HazardAvoidanceConfig_COLREGSConfigurationType