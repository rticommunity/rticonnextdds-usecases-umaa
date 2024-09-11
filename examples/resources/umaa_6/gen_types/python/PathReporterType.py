
# WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

# This file was generated from PathReporterType.idl
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

UMAA_SA = idl.get_module("UMAA_SA")

UMAA.SA = UMAA_SA

UMAA_SA_PathReporterSpecs = idl.get_module("UMAA_SA_PathReporterSpecs")

UMAA.SA.PathReporterSpecs = UMAA_SA_PathReporterSpecs

@idl.struct(
    type_annotations = [idl.type_name("UMAA::SA::PathReporterSpecs::PathReporterType")])
class UMAA_SA_PathReporterSpecs_PathReporterType:
    maxDistance: float = 0.0
    maxPoints: idl.int32 = 0
    maxTgtResolution: float = 0.0
    maxTime: float = 0.0
    minTgtResolution: float = 0.0
    pathType: UMAA.Common.MaritimeEnumeration.PathWayEnumModule.PathWayEnumType = UMAA.Common.MaritimeEnumeration.PathWayEnumModule.PathWayEnumType.HISTORICAL_GLOBAL

UMAA.SA.PathReporterSpecs.PathReporterType = UMAA_SA_PathReporterSpecs_PathReporterType
