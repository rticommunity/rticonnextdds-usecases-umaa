
# WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

# This file was generated from VolumeBallastFlowRateType.idl
# using RTI Code Generator (rtiddsgen) version 4.6.0.
# The rtiddsgen tool is part of the RTI Connext DDS distribution.
# For more information, type 'rtiddsgen -help' at a command shell
# or consult the Code Generator User's Manual.

from dataclasses import field
from typing import Union, Sequence, Optional
import rti.idl as idl
import rti.rpc as rpc
from enum import IntEnum
import sys
import os
from abc import ABC


sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/Common/Measurement/'))
from Measurements import *
sys.path.pop()

UMAA = idl.get_module("UMAA")

UMAA_EO = idl.get_module("UMAA_EO")

UMAA.EO = UMAA_EO

UMAA_EO_BallastTank = idl.get_module("UMAA_EO_BallastTank")

UMAA.EO.BallastTank = UMAA_EO_BallastTank

@idl.struct(
    type_annotations = [idl.type_name("UMAA::EO::BallastTank::VolumeBallastFlowRateType"), idl.xtypes_compliance(0x0000018C), ])
class UMAA_EO_BallastTank_VolumeBallastFlowRateType:
    volumeBallastFlowRate: float = 0.0

UMAA.EO.BallastTank.VolumeBallastFlowRateType = UMAA_EO_BallastTank_VolumeBallastFlowRateType
