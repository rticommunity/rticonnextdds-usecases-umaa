
# WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

# This file was generated from Orientation3DPlatformType.idl
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
from AlphaXPlatformType import *
sys.path.pop()
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/Common/Orientation/'))
from BetaYPlatformType import *
sys.path.pop()
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/Common/Orientation/'))
from GammaZPlatformType import *
sys.path.pop()

UMAA = idl.get_module("UMAA")

UMAA_Common = idl.get_module("UMAA_Common")

UMAA.Common = UMAA_Common

UMAA_Common_Orientation = idl.get_module("UMAA_Common_Orientation")

UMAA.Common.Orientation = UMAA_Common_Orientation

@idl.struct(
    type_annotations = [idl.type_name("UMAA::Common::Orientation::Orientation3DPlatformType")])
class UMAA_Common_Orientation_Orientation3DPlatformType:
    alpha: UMAA.Common.Orientation.AlphaXPlatformType = field(default_factory = UMAA.Common.Orientation.AlphaXPlatformType)
    beta: UMAA.Common.Orientation.BetaYPlatformType = field(default_factory = UMAA.Common.Orientation.BetaYPlatformType)
    gamma: UMAA.Common.Orientation.GammaZPlatformType = field(default_factory = UMAA.Common.Orientation.GammaZPlatformType)

UMAA.Common.Orientation.Orientation3DPlatformType = UMAA_Common_Orientation_Orientation3DPlatformType
