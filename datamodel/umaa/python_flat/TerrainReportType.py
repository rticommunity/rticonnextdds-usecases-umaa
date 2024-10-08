
# WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

# This file was generated from TerrainReportType.idl
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
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/Common/PrimitiveConstrained/'))
from ConstrainedTypes import *
sys.path.pop()

UMAA = idl.get_module("UMAA")

UMAA_SA = idl.get_module("UMAA_SA")

UMAA.SA = UMAA_SA

UMAA_SA_TerrainReport = idl.get_module("UMAA_SA_TerrainReport")

UMAA.SA.TerrainReport = UMAA_SA_TerrainReport

UMAA_SA_TerrainReport_TerrainReportTypeTopic = "UMAA::SA::TerrainReport::TerrainReportType"

UMAA.SA.TerrainReport.TerrainReportTypeTopic = UMAA_SA_TerrainReport_TerrainReportTypeTopic

@idl.struct(
    type_annotations = [idl.type_name("UMAA::SA::TerrainReport::TerrainReportType")],
    member_annotations = {
        'terrainDepthURI': [idl.bound(2047)],
        'source': [idl.key, ],
    }
)
class UMAA_SA_TerrainReport_TerrainReportType:
    terrainDepthURI: str = ""
    timeStamp: UMAA.Common.Measurement.DateTime = field(default_factory = UMAA.Common.Measurement.DateTime)
    source: UMAA.Common.IdentifierType = field(default_factory = UMAA.Common.IdentifierType)

UMAA.SA.TerrainReport.TerrainReportType = UMAA_SA_TerrainReport_TerrainReportType
