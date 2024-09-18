
# WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

# This file was generated from IlluminatorSpecsReportType.idl
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
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/Common/PrimitiveConstrained/'))
from ConstrainedTypes import *
sys.path.pop()
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/SEM/IlluminatorSpecs/'))
from BeamWidthSpecsType import *
sys.path.pop()

UMAA = idl.get_module("UMAA")

UMAA_SEM = idl.get_module("UMAA_SEM")

UMAA.SEM = UMAA_SEM

UMAA_SEM_IlluminatorSpecs = idl.get_module("UMAA_SEM_IlluminatorSpecs")

UMAA.SEM.IlluminatorSpecs = UMAA_SEM_IlluminatorSpecs

UMAA_SEM_IlluminatorSpecs_IlluminatorSpecsReportTypeTopic = "UMAA::SEM::IlluminatorSpecs::IlluminatorSpecsReportType"

UMAA.SEM.IlluminatorSpecs.IlluminatorSpecsReportTypeTopic = UMAA_SEM_IlluminatorSpecs_IlluminatorSpecsReportTypeTopic

@idl.struct(
    type_annotations = [idl.type_name("UMAA::SEM::IlluminatorSpecs::IlluminatorSpecsReportType")],
    member_annotations = {
        'name': [idl.bound(1023)],
        'source': [idl.key, ],
    }
)
class UMAA_SEM_IlluminatorSpecs_IlluminatorSpecsReportType:
    beamWidthSpecs: Optional[UMAA.SEM.IlluminatorSpecs.BeamWidthSpecsType] = None
    name: str = ""
    supportedColor: bool = False
    supportedInfrared: bool = False
    supportedIntensityLevel: bool = False
    timeStamp: UMAA.Common.Measurement.DateTime = field(default_factory = UMAA.Common.Measurement.DateTime)
    source: UMAA.Common.IdentifierType = field(default_factory = UMAA.Common.IdentifierType)

UMAA.SEM.IlluminatorSpecs.IlluminatorSpecsReportType = UMAA_SEM_IlluminatorSpecs_IlluminatorSpecsReportType
