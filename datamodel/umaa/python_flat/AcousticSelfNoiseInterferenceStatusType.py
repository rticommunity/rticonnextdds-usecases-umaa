
# WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

# This file was generated from AcousticSelfNoiseInterferenceStatusType.idl
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

UMAA = idl.get_module("UMAA")

UMAA_SEM = idl.get_module("UMAA_SEM")

UMAA.SEM = UMAA_SEM

UMAA_SEM_AcousticInterferenceStatus = idl.get_module("UMAA_SEM_AcousticInterferenceStatus")

UMAA.SEM.AcousticInterferenceStatus = UMAA_SEM_AcousticInterferenceStatus

@idl.struct(
    type_annotations = [idl.type_name("UMAA::SEM::AcousticInterferenceStatus::AcousticSelfNoiseInterferenceStatusType")])
class UMAA_SEM_AcousticInterferenceStatus_AcousticSelfNoiseInterferenceStatusType:
    bandwidth: Optional[float] = None
    centerFrequency: Optional[float] = None
    duration: float = 0.0
    time: UMAA.Common.Measurement.DateTime = field(default_factory = UMAA.Common.Measurement.DateTime)
    type: Optional[UMAA.Common.MaritimeEnumeration.InterferenceEnumModule.InterferenceEnumType] = None

UMAA.SEM.AcousticInterferenceStatus.AcousticSelfNoiseInterferenceStatusType = UMAA_SEM_AcousticInterferenceStatus_AcousticSelfNoiseInterferenceStatusType
