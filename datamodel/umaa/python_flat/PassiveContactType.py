
# WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

# This file was generated from PassiveContactType.idl
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
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/Common/MeasurementConstrained/'))
from MeasurementConstrainedTypes import *
sys.path.pop()
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/Common/PrimitiveConstrained/'))
from ConstrainedTypes import *
sys.path.pop()

UMAA = idl.get_module("UMAA")

UMAA_SA = idl.get_module("UMAA_SA")

UMAA.SA = UMAA_SA

UMAA_SA_PassiveContactReport = idl.get_module("UMAA_SA_PassiveContactReport")

UMAA.SA.PassiveContactReport = UMAA_SA_PassiveContactReport

@idl.struct(
    type_annotations = [idl.type_name("UMAA::SA::PassiveContactReport::PassiveContactType")])
class UMAA_SA_PassiveContactReport_PassiveContactType:
    bearing: float = 0.0
    bearingRate: float = 0.0
    bearingRateUncertainty: float = 0.0
    bearingUncertainty: float = 0.0
    contactLevel: float = 0.0
    contactType: Optional[UMAA.Common.MaritimeEnumeration.PassiveContactFeatureEnumModule.PassiveContactFeatureEnumType] = None
    course: Optional[float] = None
    courseUncertainty: Optional[float] = None
    declination: Optional[float] = None
    declinationUncertainty: Optional[float] = None
    narrowbandContactFrequency: Optional[float] = None
    _py_range: Optional[float] = None
    rangeUncertainty: Optional[float] = None
    threatType: Optional[UMAA.Common.MaritimeEnumeration.TrackIdentityEnumModule.TrackIdentityEnumType] = None

UMAA.SA.PassiveContactReport.PassiveContactType = UMAA_SA_PassiveContactReport_PassiveContactType
