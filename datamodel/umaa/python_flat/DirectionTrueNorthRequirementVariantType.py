
# WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

# This file was generated from DirectionTrueNorthRequirementVariantType.idl
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

sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/Common/Orientation/'))
from DirectionTrueNorthRequirement import *
sys.path.pop()

UMAA = idl.get_module("UMAA")

UMAA_Common = idl.get_module("UMAA_Common")

UMAA.Common = UMAA_Common

UMAA_Common_Orientation = idl.get_module("UMAA_Common_Orientation")

UMAA.Common.Orientation = UMAA_Common_Orientation

@idl.struct(
    type_annotations = [idl.type_name("UMAA::Common::Orientation::DirectionTrueNorthRequirementVariantType")])
class UMAA_Common_Orientation_DirectionTrueNorthRequirementVariantType:
    direction: UMAA.Common.Orientation.DirectionTrueNorthRequirement = field(default_factory = UMAA.Common.Orientation.DirectionTrueNorthRequirement)

UMAA.Common.Orientation.DirectionTrueNorthRequirementVariantType = UMAA_Common_Orientation_DirectionTrueNorthRequirementVariantType