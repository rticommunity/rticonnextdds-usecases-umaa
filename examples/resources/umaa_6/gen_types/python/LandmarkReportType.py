
# WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

# This file was generated from LandmarkReportType.idl
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
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/Common/MaritimeEnumeration/'))
from MaritimeEnumerationSets import *
sys.path.pop()
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/Common/Measurement/'))
from GeoPosition2D import *
sys.path.pop()
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/Common/Measurement/'))
from Measurements import *
sys.path.pop()

UMAA = idl.get_module("UMAA")

UMAA_SA = idl.get_module("UMAA_SA")

UMAA.SA = UMAA_SA

UMAA_SA_LandmarkReport = idl.get_module("UMAA_SA_LandmarkReport")

UMAA.SA.LandmarkReport = UMAA_SA_LandmarkReport

UMAA_SA_LandmarkReport_LandmarkReportTypeTopic = "UMAA::SA::LandmarkReport::LandmarkReportType"

UMAA.SA.LandmarkReport.LandmarkReportTypeTopic = UMAA_SA_LandmarkReport_LandmarkReportTypeTopic

@idl.struct(
    type_annotations = [idl.type_name("UMAA::SA::LandmarkReport::LandmarkReportType")],
    member_annotations = {
        'source': [idl.key, ],
        'landmarkID': [idl.key, ],
    }
)
class UMAA_SA_LandmarkReport_LandmarkReportType:
    depth: float = 0.0
    landmarkType: Optional[UMAA.Common.MaritimeEnumeration.LandmarkEnumModule.LandmarkEnumType] = None
    location: UMAA.Common.Measurement.GeoPosition2D = field(default_factory = UMAA.Common.Measurement.GeoPosition2D)
    timeStamp: UMAA.Common.Measurement.DateTime = field(default_factory = UMAA.Common.Measurement.DateTime)
    source: UMAA.Common.IdentifierType = field(default_factory = UMAA.Common.IdentifierType)
    landmarkID: UMAA.Common.Measurement.NumericGUID = field(default_factory = UMAA.Common.Measurement.NumericGUID)

UMAA.SA.LandmarkReport.LandmarkReportType = UMAA_SA_LandmarkReport_LandmarkReportType
