
# WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

# This file was generated from ElevationRequirementVariantType.idl
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

sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/Common/Measurement/'))
from AltitudeAGLRequirementVariantType import *
sys.path.pop()
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/Common/Measurement/'))
from AltitudeASFRequirementVariantType import *
sys.path.pop()
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/Common/Measurement/'))
from AltitudeGeodeticRequirementVariantType import *
sys.path.pop()
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/Common/Measurement/'))
from AltitudeMSLRequirementVariantType import *
sys.path.pop()
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/Common/Measurement/'))
from AltitudeRateASFRequirementVariantType import *
sys.path.pop()
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/Common/Measurement/'))
from DepthRateRequirementVariantType import *
sys.path.pop()
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/Common/Measurement/'))
from DepthRequirementVariantType import *
sys.path.pop()

UMAA = idl.get_module("UMAA")

UMAA_Common = idl.get_module("UMAA_Common")

UMAA.Common = UMAA_Common

UMAA_Common_Measurement = idl.get_module("UMAA_Common_Measurement")

UMAA.Common.Measurement = UMAA_Common_Measurement

@idl.enum
class UMAA_Common_Measurement_ElevationRequirementVariantTypeEnum(IntEnum):
    ALTITUDEAGLREQUIREMENTVARIANT_D = 0
    ALTITUDEASFREQUIREMENTVARIANT_D = 1
    ALTITUDEGEODETICREQUIREMENTVARIANT_D = 2
    ALTITUDEMSLREQUIREMENTVARIANT_D = 3
    ALTITUDERATEASFREQUIREMENTVARIANT_D = 4
    DEPTHRATEREQUIREMENTVARIANT_D = 5
    DEPTHREQUIREMENTVARIANT_D = 6

UMAA.Common.Measurement.ElevationRequirementVariantTypeEnum = UMAA_Common_Measurement_ElevationRequirementVariantTypeEnum

@idl.union(
    type_annotations = [idl.type_name("UMAA::Common::Measurement::ElevationRequirementVariantTypeUnion")])
class UMAA_Common_Measurement_ElevationRequirementVariantTypeUnion:

    discriminator: UMAA.Common.Measurement.ElevationRequirementVariantTypeEnum = UMAA.Common.Measurement.ElevationRequirementVariantTypeEnum.ALTITUDEAGLREQUIREMENTVARIANT_D
    value: Union[UMAA.Common.Measurement.AltitudeAGLRequirementVariantType, UMAA.Common.Measurement.AltitudeASFRequirementVariantType, UMAA.Common.Measurement.AltitudeGeodeticRequirementVariantType, UMAA.Common.Measurement.AltitudeMSLRequirementVariantType, UMAA.Common.Measurement.AltitudeRateASFRequirementVariantType, UMAA.Common.Measurement.DepthRateRequirementVariantType, UMAA.Common.Measurement.DepthRequirementVariantType] = field(default_factory = UMAA.Common.Measurement.AltitudeAGLRequirementVariantType)

    AltitudeAGLRequirementVariantVariant: UMAA.Common.Measurement.AltitudeAGLRequirementVariantType = idl.case(UMAA.Common.Measurement.ElevationRequirementVariantTypeEnum.ALTITUDEAGLREQUIREMENTVARIANT_D)
    AltitudeASFRequirementVariantVariant: UMAA.Common.Measurement.AltitudeASFRequirementVariantType = idl.case(UMAA.Common.Measurement.ElevationRequirementVariantTypeEnum.ALTITUDEASFREQUIREMENTVARIANT_D)
    AltitudeGeodeticRequirementVariantVariant: UMAA.Common.Measurement.AltitudeGeodeticRequirementVariantType = idl.case(UMAA.Common.Measurement.ElevationRequirementVariantTypeEnum.ALTITUDEGEODETICREQUIREMENTVARIANT_D)
    AltitudeMSLRequirementVariantVariant: UMAA.Common.Measurement.AltitudeMSLRequirementVariantType = idl.case(UMAA.Common.Measurement.ElevationRequirementVariantTypeEnum.ALTITUDEMSLREQUIREMENTVARIANT_D)
    AltitudeRateASFRequirementVariantVariant: UMAA.Common.Measurement.AltitudeRateASFRequirementVariantType = idl.case(UMAA.Common.Measurement.ElevationRequirementVariantTypeEnum.ALTITUDERATEASFREQUIREMENTVARIANT_D)
    DepthRateRequirementVariantVariant: UMAA.Common.Measurement.DepthRateRequirementVariantType = idl.case(UMAA.Common.Measurement.ElevationRequirementVariantTypeEnum.DEPTHRATEREQUIREMENTVARIANT_D)
    DepthRequirementVariantVariant: UMAA.Common.Measurement.DepthRequirementVariantType = idl.case(UMAA.Common.Measurement.ElevationRequirementVariantTypeEnum.DEPTHREQUIREMENTVARIANT_D)

UMAA.Common.Measurement.ElevationRequirementVariantTypeUnion = UMAA_Common_Measurement_ElevationRequirementVariantTypeUnion

@idl.struct(
    type_annotations = [idl.type_name("UMAA::Common::Measurement::ElevationRequirementVariantType")])
class UMAA_Common_Measurement_ElevationRequirementVariantType:
    ElevationRequirementVariantTypeSubtypes: UMAA.Common.Measurement.ElevationRequirementVariantTypeUnion = field(default_factory = UMAA.Common.Measurement.ElevationRequirementVariantTypeUnion)

UMAA.Common.Measurement.ElevationRequirementVariantType = UMAA_Common_Measurement_ElevationRequirementVariantType
