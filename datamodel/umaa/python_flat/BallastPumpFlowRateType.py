
# WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

# This file was generated from BallastPumpFlowRateType.idl
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

sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/EO/BallastTank/'))
from MassBallastFlowRateType import *
sys.path.pop()
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/EO/BallastTank/'))
from VolumeBallastFlowRateType import *
sys.path.pop()

UMAA = idl.get_module("UMAA")

UMAA_EO = idl.get_module("UMAA_EO")

UMAA.EO = UMAA_EO

UMAA_EO_BallastTank = idl.get_module("UMAA_EO_BallastTank")

UMAA.EO.BallastTank = UMAA_EO_BallastTank

@idl.enum
class UMAA_EO_BallastTank_BallastPumpFlowRateTypeEnum(IntEnum):
    MASSBALLASTFLOWRATE_D = 0
    VOLUMEBALLASTFLOWRATE_D = 1

UMAA.EO.BallastTank.BallastPumpFlowRateTypeEnum = UMAA_EO_BallastTank_BallastPumpFlowRateTypeEnum

@idl.union(
    type_annotations = [idl.type_name("UMAA::EO::BallastTank::BallastPumpFlowRateTypeUnion")])
class UMAA_EO_BallastTank_BallastPumpFlowRateTypeUnion:

    discriminator: UMAA.EO.BallastTank.BallastPumpFlowRateTypeEnum = UMAA.EO.BallastTank.BallastPumpFlowRateTypeEnum.MASSBALLASTFLOWRATE_D
    value: Union[UMAA.EO.BallastTank.MassBallastFlowRateType, UMAA.EO.BallastTank.VolumeBallastFlowRateType] = field(default_factory = UMAA.EO.BallastTank.MassBallastFlowRateType)

    MassBallastFlowRateVariant: UMAA.EO.BallastTank.MassBallastFlowRateType = idl.case(UMAA.EO.BallastTank.BallastPumpFlowRateTypeEnum.MASSBALLASTFLOWRATE_D)
    VolumeBallastFlowRateVariant: UMAA.EO.BallastTank.VolumeBallastFlowRateType = idl.case(UMAA.EO.BallastTank.BallastPumpFlowRateTypeEnum.VOLUMEBALLASTFLOWRATE_D)

UMAA.EO.BallastTank.BallastPumpFlowRateTypeUnion = UMAA_EO_BallastTank_BallastPumpFlowRateTypeUnion

@idl.struct(
    type_annotations = [idl.type_name("UMAA::EO::BallastTank::BallastPumpFlowRateType")])
class UMAA_EO_BallastTank_BallastPumpFlowRateType:
    BallastPumpFlowRateTypeSubtypes: UMAA.EO.BallastTank.BallastPumpFlowRateTypeUnion = field(default_factory = UMAA.EO.BallastTank.BallastPumpFlowRateTypeUnion)

UMAA.EO.BallastTank.BallastPumpFlowRateType = UMAA_EO_BallastTank_BallastPumpFlowRateType
