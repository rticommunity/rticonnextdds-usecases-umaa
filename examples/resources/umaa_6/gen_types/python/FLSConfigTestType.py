
# WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

# This file was generated from FLSConfigTestType.idl
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
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/Common/MeasurementConstrained/'))
from MeasurementConstrainedTypes import *
sys.path.pop()

UMAA = idl.get_module("UMAA")

UMAA_SEM = idl.get_module("UMAA_SEM")

UMAA.SEM = UMAA_SEM

UMAA_SEM_BaseType = idl.get_module("UMAA_SEM_BaseType")

UMAA.SEM.BaseType = UMAA_SEM_BaseType

@idl.struct(
    type_annotations = [idl.type_name("UMAA::SEM::BaseType::FLSConfigTestType")])
class UMAA_SEM_BaseType_FLSConfigTestType:
    activeBandwidth: float = 0.0
    activeCenterFrequency: float = 0.0
    attenuation: idl.int32 = 0
    beamwidth: UMAA.Common.MaritimeEnumeration.FLSBeamwidthEnumModule.FLSBeamwidthEnumType = UMAA.Common.MaritimeEnumeration.FLSBeamwidthEnumModule.FLSBeamwidthEnumType.MEDIUM
    passiveBandwidth: float = 0.0
    passiveCenterFrequency: float = 0.0
    _py_range: float = 0.0
    steering: float = 0.0
    upSweep: bool = False
    waveformLength: UMAA.Common.MaritimeEnumeration.FLSWaveformLengthEnumModule.FLSWaveformLengthEnumType = UMAA.Common.MaritimeEnumeration.FLSWaveformLengthEnumModule.FLSWaveformLengthEnumType._LONG

UMAA.SEM.BaseType.FLSConfigTestType = UMAA_SEM_BaseType_FLSConfigTestType
