
# WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

# This file was generated from BallastFillType.idl
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
from BallastMassType import *
sys.path.pop()
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/Common/Measurement/'))
from LevelType import *
sys.path.pop()

UMAA = idl.get_module("UMAA")

UMAA_EO = idl.get_module("UMAA_EO")

UMAA.EO = UMAA_EO

UMAA_EO_BallastTank = idl.get_module("UMAA_EO_BallastTank")

UMAA.EO.BallastTank = UMAA_EO_BallastTank

@idl.enum
class UMAA_EO_BallastTank_BallastFillTypeEnum(IntEnum):
    LEVEL_D = 0
    BALLASTMASS_D = 1

UMAA.EO.BallastTank.BallastFillTypeEnum = UMAA_EO_BallastTank_BallastFillTypeEnum

@idl.union(
    type_annotations = [idl.type_name("UMAA::EO::BallastTank::BallastFillTypeUnion")])
class UMAA_EO_BallastTank_BallastFillTypeUnion:

    discriminator: UMAA.EO.BallastTank.BallastFillTypeEnum = UMAA.EO.BallastTank.BallastFillTypeEnum.LEVEL_D
    value: Union[UMAA.Common.Measurement.LevelType, UMAA.Common.Measurement.BallastMassType] = field(default_factory = UMAA.Common.Measurement.LevelType)

    LevelVariant: UMAA.Common.Measurement.LevelType = idl.case(UMAA.EO.BallastTank.BallastFillTypeEnum.LEVEL_D)
    BallastMassVariant: UMAA.Common.Measurement.BallastMassType = idl.case(UMAA.EO.BallastTank.BallastFillTypeEnum.BALLASTMASS_D)

UMAA.EO.BallastTank.BallastFillTypeUnion = UMAA_EO_BallastTank_BallastFillTypeUnion

@idl.struct(
    type_annotations = [idl.type_name("UMAA::EO::BallastTank::BallastFillType")])
class UMAA_EO_BallastTank_BallastFillType:
    BallastFillTypeSubtypes: UMAA.EO.BallastTank.BallastFillTypeUnion = field(default_factory = UMAA.EO.BallastTank.BallastFillTypeUnion)

UMAA.EO.BallastTank.BallastFillType = UMAA_EO_BallastTank_BallastFillType
