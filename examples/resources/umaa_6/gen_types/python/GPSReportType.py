
# WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

# This file was generated from GPSReportType.idl
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
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/SEM/GPSStatus/'))
from GPSClockType import *
sys.path.pop()
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/SEM/GPSStatus/'))
from GPSSatelliteType import *
sys.path.pop()

UMAA = idl.get_module("UMAA")

UMAA_SEM = idl.get_module("UMAA_SEM")

UMAA.SEM = UMAA_SEM

UMAA_SEM_GPSStatus = idl.get_module("UMAA_SEM_GPSStatus")

UMAA.SEM.GPSStatus = UMAA_SEM_GPSStatus

UMAA_SEM_GPSStatus_GPSReportTypeTopic = "UMAA::SEM::GPSStatus::GPSReportType"

UMAA.SEM.GPSStatus.GPSReportTypeTopic = UMAA_SEM_GPSStatus_GPSReportTypeTopic

@idl.struct(
    type_annotations = [idl.type_name("UMAA::SEM::GPSStatus::GPSReportType")],
    member_annotations = {
        'satellites': [idl.bound(300)],
        'source': [idl.key, ],
    }
)
class UMAA_SEM_GPSStatus_GPSReportType:
    clock: UMAA.SEM.GPSStatus.GPSClockType = field(default_factory = UMAA.SEM.GPSStatus.GPSClockType)
    numberSatellitesInView: idl.int32 = 0
    satellites: Sequence[UMAA.SEM.GPSStatus.GPSSatelliteType] = field(default_factory = list)
    timeStamp: UMAA.Common.Measurement.DateTime = field(default_factory = UMAA.Common.Measurement.DateTime)
    source: UMAA.Common.IdentifierType = field(default_factory = UMAA.Common.IdentifierType)

UMAA.SEM.GPSStatus.GPSReportType = UMAA_SEM_GPSStatus_GPSReportType
