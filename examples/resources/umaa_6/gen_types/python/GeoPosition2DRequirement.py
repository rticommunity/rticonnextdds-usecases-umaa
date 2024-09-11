
# WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

# This file was generated from GeoPosition2DRequirement.idl
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
from GeoPosition2D import *
sys.path.pop()
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/Common/Position/'))
from GeoPosition2DTolerance import *
sys.path.pop()

UMAA = idl.get_module("UMAA")

UMAA_Common = idl.get_module("UMAA_Common")

UMAA.Common = UMAA_Common

UMAA_Common_Position = idl.get_module("UMAA_Common_Position")

UMAA.Common.Position = UMAA_Common_Position

@idl.struct(
    type_annotations = [idl.type_name("UMAA::Common::Position::GeoPosition2DRequirement")])
class UMAA_Common_Position_GeoPosition2DRequirement:
    tolerance: Optional[UMAA.Common.Position.GeoPosition2DTolerance] = None
    value: UMAA.Common.Measurement.GeoPosition2D = field(default_factory = UMAA.Common.Measurement.GeoPosition2D)

UMAA.Common.Position.GeoPosition2DRequirement = UMAA_Common_Position_GeoPosition2DRequirement
