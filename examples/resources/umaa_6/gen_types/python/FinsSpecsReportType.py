
# WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

# This file was generated from FinsSpecsReportType.idl
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
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/EO/FinsSpecs/'))
from FinSpecsType import *
sys.path.pop()

UMAA = idl.get_module("UMAA")

UMAA_EO = idl.get_module("UMAA_EO")

UMAA.EO = UMAA_EO

UMAA_EO_FinsSpecs = idl.get_module("UMAA_EO_FinsSpecs")

UMAA.EO.FinsSpecs = UMAA_EO_FinsSpecs

UMAA_EO_FinsSpecs_FinsSpecsReportTypeTopic = "UMAA::EO::FinsSpecs::FinsSpecsReportType"

UMAA.EO.FinsSpecs.FinsSpecsReportTypeTopic = UMAA_EO_FinsSpecs_FinsSpecsReportTypeTopic

@idl.struct(
    type_annotations = [idl.type_name("UMAA::EO::FinsSpecs::FinsSpecsReportType")],
    member_annotations = {
        'finSpecs': [idl.bound(16)],
        'source': [idl.key, ],
    }
)
class UMAA_EO_FinsSpecs_FinsSpecsReportType:
    finSpecs: Sequence[UMAA.EO.FinsSpecs.FinSpecsType] = field(default_factory = list)
    timeStamp: UMAA.Common.Measurement.DateTime = field(default_factory = UMAA.Common.Measurement.DateTime)
    source: UMAA.Common.IdentifierType = field(default_factory = UMAA.Common.IdentifierType)

UMAA.EO.FinsSpecs.FinsSpecsReportType = UMAA_EO_FinsSpecs_FinsSpecsReportType
