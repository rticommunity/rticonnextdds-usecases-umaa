
# WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

# This file was generated from ContactType.idl
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
from CovariancePositionNEDType import *
sys.path.pop()
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/Common/Measurement/'))
from CovariancePositionVelocityNEDType import *
sys.path.pop()
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/Common/Measurement/'))
from CovarianceVelocityNEDType import *
sys.path.pop()
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/Common/Measurement/'))
from GeoPosition2D import *
sys.path.pop()
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/Common/Measurement/'))
from Measurements import *
sys.path.pop()
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/Common/Measurement/'))
from Velocity3DPlatformNEDType import *
sys.path.pop()
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/Common/PrimitiveConstrained/'))
from ConstrainedTypes import *
sys.path.pop()

UMAA = idl.get_module("UMAA")

UMAA_SA = idl.get_module("UMAA_SA")

UMAA.SA = UMAA_SA

UMAA_SA_ContactReport = idl.get_module("UMAA_SA_ContactReport")

UMAA.SA.ContactReport = UMAA_SA_ContactReport

@idl.struct(
    type_annotations = [idl.type_name("UMAA::SA::ContactReport::ContactType")],
    member_annotations = {
        'callSign': [idl.bound(1023)],
        'contactName': [idl.bound(1023)],
        'MMSINumber': [idl.bound(9)],
        'SIDC': [idl.bound(1023)],
        'sourceContactID': [idl.bound(32)],
    }
)
class UMAA_SA_ContactReport_ContactType:
    altitudeAGL: Optional[float] = None
    altitudeASF: Optional[float] = None
    altitudeGeodetic: Optional[float] = None
    altitudeMSL: Optional[float] = None
    callSign: Optional[str] = None
    confidence: Optional[float] = None
    contactID: UMAA.Common.Measurement.NumericGUID = field(default_factory = UMAA.Common.Measurement.NumericGUID)
    contactName: str = ""
    course: Optional[float] = None
    depth: Optional[float] = None
    heading: Optional[float] = None
    height: Optional[float] = None
    length: Optional[float] = None
    MMSINumber: Optional[str] = None
    position: UMAA.Common.Measurement.GeoPosition2D = field(default_factory = UMAA.Common.Measurement.GeoPosition2D)
    positionCovariance: Optional[UMAA.Common.Measurement.CovariancePositionNEDType] = None
    positionVelocityCovariance: Optional[UMAA.Common.Measurement.CovariancePositionVelocityNEDType] = None
    quality: Optional[float] = None
    SIDC: Optional[str] = None
    sourceContactID: Sequence[UMAA.Common.Measurement.NumericGUID] = field(default_factory = list)
    sourceIndicator: UMAA.Common.MaritimeEnumeration.SourceIndicatorEnumModule.SourceIndicatorEnumType = UMAA.Common.MaritimeEnumeration.SourceIndicatorEnumModule.SourceIndicatorEnumType.ACTUAL
    specialManeuverIndicator: UMAA.Common.MaritimeEnumeration.SpecialManeuverIndicatorEnumModule.SpecialManeuverIndicatorEnumType = UMAA.Common.MaritimeEnumeration.SpecialManeuverIndicatorEnumModule.SpecialManeuverIndicatorEnumType.ENGAGED
    speedOverGround: float = 0.0
    timeFirstAcquired: UMAA.Common.Measurement.DateTime = field(default_factory = UMAA.Common.Measurement.DateTime)
    timeLost: Optional[UMAA.Common.Measurement.DateTime] = None
    velocity: Optional[UMAA.Common.Measurement.Velocity3DPlatformNEDType] = None
    velocityCovariance: Optional[UMAA.Common.Measurement.CovarianceVelocityNEDType] = None
    width: Optional[float] = None

UMAA.SA.ContactReport.ContactType = UMAA_SA_ContactReport_ContactType
