
# WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

# This file was generated from EmitterSpecsReportType.idl
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

UMAA_SO = idl.get_module("UMAA_SO")

UMAA.SO = UMAA_SO

UMAA_SO_EmitterSpecs = idl.get_module("UMAA_SO_EmitterSpecs")

UMAA.SO.EmitterSpecs = UMAA_SO_EmitterSpecs

UMAA_SO_EmitterSpecs_EmitterSpecsReportTypeTopic = "UMAA::SO::EmitterSpecs::EmitterSpecsReportType"

UMAA.SO.EmitterSpecs.EmitterSpecsReportTypeTopic = UMAA_SO_EmitterSpecs_EmitterSpecsReportTypeTopic

@idl.struct(
    type_annotations = [idl.type_name("UMAA::SO::EmitterSpecs::EmitterSpecsReportType")],
    member_annotations = {
        'frequencyBand': [idl.bound(16)],
        'name': [idl.bound(1023)],
        'source': [idl.key, ],
        'emitterID': [idl.key, ],
    }
)
class UMAA_SO_EmitterSpecs_EmitterSpecsReportType:
    frequencyBand: Sequence[float] = field(default_factory = idl.array_factory(float))
    name: str = ""
    timeStamp: UMAA.Common.Measurement.DateTime = field(default_factory = UMAA.Common.Measurement.DateTime)
    source: UMAA.Common.IdentifierType = field(default_factory = UMAA.Common.IdentifierType)
    emitterID: UMAA.Common.Measurement.NumericGUID = field(default_factory = UMAA.Common.Measurement.NumericGUID)

UMAA.SO.EmitterSpecs.EmitterSpecsReportType = UMAA_SO_EmitterSpecs_EmitterSpecsReportType
