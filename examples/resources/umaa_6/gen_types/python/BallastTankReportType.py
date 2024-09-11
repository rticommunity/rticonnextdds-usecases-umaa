
# WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

# This file was generated from BallastTankReportType.idl
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

sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/Common/Enumeration/'))
from EnumerationSets import *
sys.path.pop()
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/Common/'))
from IdentifierType import *
sys.path.pop()
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/Common/Measurement/'))
from Measurements import *
sys.path.pop()

UMAA = idl.get_module("UMAA")

UMAA_EO = idl.get_module("UMAA_EO")

UMAA.EO = UMAA_EO

UMAA_EO_BallastTank = idl.get_module("UMAA_EO_BallastTank")

UMAA.EO.BallastTank = UMAA_EO_BallastTank

UMAA_EO_BallastTank_BallastTankReportTypeTopic = "UMAA::EO::BallastTank::BallastTankReportType"

UMAA.EO.BallastTank.BallastTankReportTypeTopic = UMAA_EO_BallastTank_BallastTankReportTypeTopic

@idl.struct(
    type_annotations = [idl.type_name("UMAA::EO::BallastTank::BallastTankReportType")],
    member_annotations = {
        'source': [idl.key, ],
    }
)
class UMAA_EO_BallastTank_BallastTankReportType:
    level: Optional[float] = None
    lowPressureLimit: float = 0.0
    mass: Optional[float] = None
    pressure: float = 0.0
    pressureLimit: float = 0.0
    trimActive: bool = False
    timeStamp: UMAA.Common.Measurement.DateTime = field(default_factory = UMAA.Common.Measurement.DateTime)
    source: UMAA.Common.IdentifierType = field(default_factory = UMAA.Common.IdentifierType)

UMAA.EO.BallastTank.BallastTankReportType = UMAA_EO_BallastTank_BallastTankReportType
