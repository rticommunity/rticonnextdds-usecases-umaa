
# WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

# This file was generated from GeneratorSpecsReportType.idl
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

UMAA_EO = idl.get_module("UMAA_EO")

UMAA.EO = UMAA_EO

UMAA_EO_GeneratorSpecs = idl.get_module("UMAA_EO_GeneratorSpecs")

UMAA.EO.GeneratorSpecs = UMAA_EO_GeneratorSpecs

UMAA_EO_GeneratorSpecs_GeneratorSpecsReportTypeTopic = "UMAA::EO::GeneratorSpecs::GeneratorSpecsReportType"

UMAA.EO.GeneratorSpecs.GeneratorSpecsReportTypeTopic = UMAA_EO_GeneratorSpecs_GeneratorSpecsReportTypeTopic

@idl.struct(
    type_annotations = [idl.type_name("UMAA::EO::GeneratorSpecs::GeneratorSpecsReportType")],
    member_annotations = {
        'name': [idl.bound(1023)],
        'source': [idl.key, ],
    }
)
class UMAA_EO_GeneratorSpecs_GeneratorSpecsReportType:
    maxCurrent: float = 0.0
    maxPower: float = 0.0
    name: str = ""
    ratedPower: float = 0.0
    ratedVoltage: float = 0.0
    timeStamp: UMAA.Common.Measurement.DateTime = field(default_factory = UMAA.Common.Measurement.DateTime)
    source: UMAA.Common.IdentifierType = field(default_factory = UMAA.Common.IdentifierType)

UMAA.EO.GeneratorSpecs.GeneratorSpecsReportType = UMAA_EO_GeneratorSpecs_GeneratorSpecsReportType
