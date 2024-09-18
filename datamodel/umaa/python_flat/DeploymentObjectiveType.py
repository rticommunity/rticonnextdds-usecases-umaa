
# WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

# This file was generated from DeploymentObjectiveType.idl
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
from ElevationVariantType import *
sys.path.pop()
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/Common/Measurement/'))
from Measurements import *
sys.path.pop()
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/Common/Orientation/'))
from DirectionRequirementVariantType import *
sys.path.pop()
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/Common/Position/'))
from GeoPosition2DRequirement import *
sys.path.pop()
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/Common/PrimitiveConstrained/'))
from ConstrainedTypes import *
sys.path.pop()
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/Common/Speed/'))
from SpeedRequirementVariantType import *
sys.path.pop()
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/Common/Time/'))
from DateTimeRequirementType import *
sys.path.pop()
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/MM/BaseType/'))
from StateTriggerType import *
sys.path.pop()

UMAA = idl.get_module("UMAA")

UMAA_MM = idl.get_module("UMAA_MM")

UMAA.MM = UMAA_MM

UMAA_MM_BaseType = idl.get_module("UMAA_MM_BaseType")

UMAA.MM.BaseType = UMAA_MM_BaseType

UMAA_MM_BaseType_DeploymentObjectiveTypeTopic = "UMAA::MM::BaseType::DeploymentObjectiveType"

UMAA.MM.BaseType.DeploymentObjectiveTypeTopic = UMAA_MM_BaseType_DeploymentObjectiveTypeTopic

@idl.struct(
    type_annotations = [idl.type_name("UMAA::MM::BaseType::DeploymentObjectiveType")],
    member_annotations = {
        'specializationReferenceID': [idl.key, ],
    }
)
class UMAA_MM_BaseType_DeploymentObjectiveType:
    elevation: UMAA.Common.Measurement.ElevationVariantType = field(default_factory = UMAA.Common.Measurement.ElevationVariantType)
    heading: UMAA.Common.Orientation.DirectionRequirementVariantType = field(default_factory = UMAA.Common.Orientation.DirectionRequirementVariantType)
    position: UMAA.Common.Position.GeoPosition2DRequirement = field(default_factory = UMAA.Common.Position.GeoPosition2DRequirement)
    speed: UMAA.Common.Speed.SpeedRequirementVariantType = field(default_factory = UMAA.Common.Speed.SpeedRequirementVariantType)
    specializationReferenceTimestamp: UMAA.Common.Measurement.DateTime = field(default_factory = UMAA.Common.Measurement.DateTime)
    specializationReferenceID: UMAA.Common.Measurement.NumericGUID = field(default_factory = UMAA.Common.Measurement.NumericGUID)

UMAA.MM.BaseType.DeploymentObjectiveType = UMAA_MM_BaseType_DeploymentObjectiveType