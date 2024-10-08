
# WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

# This file was generated from GPSClockType.idl
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

sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/Common/MaritimeEnumeration/'))
from MaritimeEnumerationSets import *
sys.path.pop()
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/Common/Measurement/'))
from Measurements import *
sys.path.pop()
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/Common/PrimitiveConstrained/'))
from ConstrainedTypes import *
sys.path.pop()

UMAA = idl.get_module("UMAA")

UMAA_SEM = idl.get_module("UMAA_SEM")

UMAA.SEM = UMAA_SEM

UMAA_SEM_GPSStatus = idl.get_module("UMAA_SEM_GPSStatus")

UMAA.SEM.GPSStatus = UMAA_SEM_GPSStatus

@idl.struct(
    type_annotations = [idl.type_name("UMAA::SEM::GPSStatus::GPSClockType")],
    member_annotations = {
        'referenceCodeTypeFor': [idl.bound(1023)],
    }
)
class UMAA_SEM_GPSStatus_GPSClockType:
    bias: int = 0
    biasUncertainty: int = 0
    drift: idl.int32 = 0
    driftUncertainty: idl.int32 = 0
    elapsedRealtime: int = 0
    elapsedRealtimeUncertainty: int = 0
    fullBias: int = 0
    hardwareClockDiscontinuityCount: int = 0
    leapSecond: idl.int32 = 0
    referenceCarrierFrequency: float = 0.0
    referenceCodeTypeFor: str = ""
    referenceConstellationType: UMAA.Common.MaritimeEnumeration.GPSConstellationEnumModule.GPSConstellationEnumType = UMAA.Common.MaritimeEnumeration.GPSConstellationEnumModule.GPSConstellationEnumType.BEIDOU
    time: idl.int32 = 0
    timeFigureOfMerit: UMAA.Common.MaritimeEnumeration.TFOMEnumModule.TFOMEnumType = UMAA.Common.MaritimeEnumeration.TFOMEnumModule.TFOMEnumType.TFOM_1

UMAA.SEM.GPSStatus.GPSClockType = UMAA_SEM_GPSStatus_GPSClockType
