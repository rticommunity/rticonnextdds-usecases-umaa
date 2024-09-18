
# WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

# This file was generated from GPSSatelliteType.idl
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
    type_annotations = [idl.type_name("UMAA::SEM::GPSStatus::GPSSatelliteType")])
class UMAA_SEM_GPSStatus_GPSSatelliteType:
    antennaCarrierNoiseDensity: float = 0.0
    azimuth: float = 0.0
    basebandCarrierNoiseDensity: float = 0.0
    carrierFrequency: float = 0.0
    constellationType: UMAA.Common.MaritimeEnumeration.GPSConstellationEnumModule.GPSConstellationEnumType = UMAA.Common.MaritimeEnumeration.GPSConstellationEnumModule.GPSConstellationEnumType.BEIDOU
    containsAlmanacData: bool = False
    elevation: float = 0.0
    ephemerisData: bool = False
    satelliteID: float = 0.0
    usedInFix: bool = False

UMAA.SEM.GPSStatus.GPSSatelliteType = UMAA_SEM_GPSStatus_GPSSatelliteType
