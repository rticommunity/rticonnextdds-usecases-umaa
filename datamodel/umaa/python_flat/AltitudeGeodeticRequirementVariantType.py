
# WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

# This file was generated from AltitudeGeodeticRequirementVariantType.idl
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
from AltitudeGeodeticRequirementType import *
sys.path.pop()

UMAA = idl.get_module("UMAA")

UMAA_Common = idl.get_module("UMAA_Common")

UMAA.Common = UMAA_Common

UMAA_Common_Measurement = idl.get_module("UMAA_Common_Measurement")

UMAA.Common.Measurement = UMAA_Common_Measurement

@idl.struct(
    type_annotations = [idl.type_name("UMAA::Common::Measurement::AltitudeGeodeticRequirementVariantType")])
class UMAA_Common_Measurement_AltitudeGeodeticRequirementVariantType:
    altitude: UMAA.Common.Measurement.AltitudeGeodeticRequirementType = field(default_factory = UMAA.Common.Measurement.AltitudeGeodeticRequirementType)

UMAA.Common.Measurement.AltitudeGeodeticRequirementVariantType = UMAA_Common_Measurement_AltitudeGeodeticRequirementVariantType
