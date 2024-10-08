
# WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

# This file was generated from BITSpecsReportType.idl
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

UMAA = idl.get_module("UMAA")

UMAA_SO = idl.get_module("UMAA_SO")

UMAA.SO = UMAA_SO

UMAA_SO_BITSpecs = idl.get_module("UMAA_SO_BITSpecs")

UMAA.SO.BITSpecs = UMAA_SO_BITSpecs

UMAA_SO_BITSpecs_BITSpecsReportTypeTopic = "UMAA::SO::BITSpecs::BITSpecsReportType"

UMAA.SO.BITSpecs.BITSpecsReportTypeTopic = UMAA_SO_BITSpecs_BITSpecsReportTypeTopic

@idl.struct(
    type_annotations = [idl.type_name("UMAA::SO::BITSpecs::BITSpecsReportType")],
    member_annotations = {
        'source': [idl.key, ],
        'resourceID': [idl.key, ],
    }
)
class UMAA_SO_BITSpecs_BITSpecsReportType:
    avgMinTimeBetweenContinuousTests: Optional[float] = None
    fullContinuousTestSupported: bool = False
    fullPowerOnTestSupported: bool = False
    initiatedDestructiveTestSupported: bool = False
    initiatedNonDestructiveTestSupported: bool = False
    minTimeBetweenTestsSupported: bool = False
    nonIntrusiveContinuousTestSupported: bool = False
    quickPowerOnTestSupported: bool = False
    timeStamp: UMAA.Common.Measurement.DateTime = field(default_factory = UMAA.Common.Measurement.DateTime)
    source: UMAA.Common.IdentifierType = field(default_factory = UMAA.Common.IdentifierType)
    resourceID: UMAA.Common.IdentifierType = field(default_factory = UMAA.Common.IdentifierType)

UMAA.SO.BITSpecs.BITSpecsReportType = UMAA_SO_BITSpecs_BITSpecsReportType
