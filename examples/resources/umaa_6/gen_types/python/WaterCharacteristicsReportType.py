
# WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

# This file was generated from WaterCharacteristicsReportType.idl
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

sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/Common/'))
from IdentifierType import *
sys.path.pop()
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/Common/Measurement/'))
from Measurements import *
sys.path.pop()

UMAA = idl.get_module("UMAA")

UMAA_SA = idl.get_module("UMAA_SA")

UMAA.SA = UMAA_SA

UMAA_SA_WaterCharacteristicsStatus = idl.get_module("UMAA_SA_WaterCharacteristicsStatus")

UMAA.SA.WaterCharacteristicsStatus = UMAA_SA_WaterCharacteristicsStatus

UMAA_SA_WaterCharacteristicsStatus_WaterCharacteristicsReportTypeTopic = "UMAA::SA::WaterCharacteristicsStatus::WaterCharacteristicsReportType"

UMAA.SA.WaterCharacteristicsStatus.WaterCharacteristicsReportTypeTopic = UMAA_SA_WaterCharacteristicsStatus_WaterCharacteristicsReportTypeTopic

@idl.struct(
    type_annotations = [idl.type_name("UMAA::SA::WaterCharacteristicsStatus::WaterCharacteristicsReportType")],
    member_annotations = {
        'source': [idl.key, ],
    }
)
class UMAA_SA_WaterCharacteristicsStatus_WaterCharacteristicsReportType:
    conductivity: Optional[float] = None
    density: Optional[float] = None
    depth: float = 0.0
    pressure: Optional[float] = None
    salinity: Optional[float] = None
    soundVelocity: Optional[float] = None
    temperature: Optional[float] = None
    turbidity: Optional[float] = None
    timeStamp: UMAA.Common.Measurement.DateTime = field(default_factory = UMAA.Common.Measurement.DateTime)
    source: UMAA.Common.IdentifierType = field(default_factory = UMAA.Common.IdentifierType)

UMAA.SA.WaterCharacteristicsStatus.WaterCharacteristicsReportType = UMAA_SA_WaterCharacteristicsStatus_WaterCharacteristicsReportType
