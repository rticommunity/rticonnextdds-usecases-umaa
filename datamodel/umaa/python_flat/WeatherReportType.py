
# WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

# This file was generated from WeatherReportType.idl
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
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/Common/OrderedEnumeration/'))
from OrderedEnumerationSets import *
sys.path.pop()
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/Common/PrimitiveConstrained/'))
from ConstrainedTypes import *
sys.path.pop()

UMAA = idl.get_module("UMAA")

UMAA_SA = idl.get_module("UMAA_SA")

UMAA.SA = UMAA_SA

UMAA_SA_WeatherStatus = idl.get_module("UMAA_SA_WeatherStatus")

UMAA.SA.WeatherStatus = UMAA_SA_WeatherStatus

UMAA_SA_WeatherStatus_WeatherReportTypeTopic = "UMAA::SA::WeatherStatus::WeatherReportType"

UMAA.SA.WeatherStatus.WeatherReportTypeTopic = UMAA_SA_WeatherStatus_WeatherReportTypeTopic

@idl.struct(
    type_annotations = [idl.type_name("UMAA::SA::WeatherStatus::WeatherReportType")],
    member_annotations = {
        'source': [idl.key, ],
    }
)
class UMAA_SA_WeatherStatus_WeatherReportType:
    airTemperature: Optional[float] = None
    barometricPressure: Optional[float] = None
    cloudiness: Optional[UMAA.Common.OrderedEnumeration.CloudCoverEnumModule.CloudCoverEnumType] = None
    dewPoint: Optional[float] = None
    icingSeverity: Optional[UMAA.Common.OrderedEnumeration.WeatherSeverityEnumModule.WeatherSeverityEnumType] = None
    precipitation: Optional[UMAA.Common.Enumeration.PrecipitationEnumModule.PrecipitationEnumType] = None
    relativeHumidity: Optional[float] = None
    thunderstormPotential: Optional[float] = None
    visibility: Optional[float] = None
    waterTemperature: Optional[float] = None
    timeStamp: UMAA.Common.Measurement.DateTime = field(default_factory = UMAA.Common.Measurement.DateTime)
    source: UMAA.Common.IdentifierType = field(default_factory = UMAA.Common.IdentifierType)

UMAA.SA.WeatherStatus.WeatherReportType = UMAA_SA_WeatherStatus_WeatherReportType
