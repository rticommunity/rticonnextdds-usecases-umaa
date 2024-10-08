
# WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

# This file was generated from StillImageReportType.idl
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

sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/Common/Environment/'))
from WorldTransformType import *
sys.path.pop()
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/Common/'))
from IdentifierType import *
sys.path.pop()
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/Common/MaritimeEnumeration/'))
from MaritimeEnumerationSets import *
sys.path.pop()
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/Common/Measurement/'))
from GeoPosition3DWGS84 import *
sys.path.pop()
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/Common/Measurement/'))
from Measurements import *
sys.path.pop()
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/Common/PrimitiveConstrained/'))
from ConstrainedTypes import *
sys.path.pop()

UMAA = idl.get_module("UMAA")

UMAA_SA = idl.get_module("UMAA_SA")

UMAA.SA = UMAA_SA

UMAA_SA_StillImageStatus = idl.get_module("UMAA_SA_StillImageStatus")

UMAA.SA.StillImageStatus = UMAA_SA_StillImageStatus

UMAA_SA_StillImageStatus_StillImageReportTypeTopic = "UMAA::SA::StillImageStatus::StillImageReportType"

UMAA.SA.StillImageStatus.StillImageReportTypeTopic = UMAA_SA_StillImageStatus_StillImageReportTypeTopic

@idl.struct(
    type_annotations = [idl.type_name("UMAA::SA::StillImageStatus::StillImageReportType")],
    member_annotations = {
        'imageName': [idl.bound(1023)],
        'imageURI': [idl.bound(2047)],
        'source': [idl.key, ],
        'contactID': [idl.key, ],
        'imageID': [idl.key, ],
    }
)
class UMAA_SA_StillImageStatus_StillImageReportType:
    altitudeAGL: Optional[float] = None
    altitudeASF: Optional[float] = None
    altitudeGeodetic: Optional[float] = None
    altitudeMSL: Optional[float] = None
    depth: Optional[float] = None
    imageFormat: UMAA.Common.MaritimeEnumeration.ImageFormatEnumModule.ImageFormatEnumType = UMAA.Common.MaritimeEnumeration.ImageFormatEnumModule.ImageFormatEnumType.ARW
    imageName: Optional[str] = None
    imageURI: str = ""
    position: Optional[UMAA.Common.Measurement.GeoPosition3DWGS84] = None
    transform: Optional[UMAA.Common.Environment.WorldTransformType] = None
    timeStamp: UMAA.Common.Measurement.DateTime = field(default_factory = UMAA.Common.Measurement.DateTime)
    source: UMAA.Common.IdentifierType = field(default_factory = UMAA.Common.IdentifierType)
    contactID: UMAA.Common.Measurement.NumericGUID = field(default_factory = UMAA.Common.Measurement.NumericGUID)
    imageID: UMAA.Common.Measurement.NumericGUID = field(default_factory = UMAA.Common.Measurement.NumericGUID)

UMAA.SA.StillImageStatus.StillImageReportType = UMAA_SA_StillImageStatus_StillImageReportType
