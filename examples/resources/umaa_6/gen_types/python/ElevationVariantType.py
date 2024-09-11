
# WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

# This file was generated from ElevationVariantType.idl
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
from AltitudeAGLVariantType import *
sys.path.pop()
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/Common/Measurement/'))
from AltitudeASFVariantType import *
sys.path.pop()
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/Common/Measurement/'))
from AltitudeGeodeticVariantType import *
sys.path.pop()
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/Common/Measurement/'))
from AltitudeMSLVariantType import *
sys.path.pop()
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/Common/Measurement/'))
from DepthVariantType import *
sys.path.pop()

UMAA = idl.get_module("UMAA")

UMAA_Common = idl.get_module("UMAA_Common")

UMAA.Common = UMAA_Common

UMAA_Common_Measurement = idl.get_module("UMAA_Common_Measurement")

UMAA.Common.Measurement = UMAA_Common_Measurement

@idl.enum
class UMAA_Common_Measurement_ElevationVariantTypeEnum(IntEnum):
    ALTITUDEAGLVARIANT_D = 0
    ALTITUDEASFVARIANT_D = 1
    ALTITUDEGEODETICVARIANT_D = 2
    ALTITUDEMSLVARIANT_D = 3
    DEPTHVARIANT_D = 4

UMAA.Common.Measurement.ElevationVariantTypeEnum = UMAA_Common_Measurement_ElevationVariantTypeEnum

@idl.union(
    type_annotations = [idl.type_name("UMAA::Common::Measurement::ElevationVariantTypeUnion")])
class UMAA_Common_Measurement_ElevationVariantTypeUnion:

    discriminator: UMAA.Common.Measurement.ElevationVariantTypeEnum = UMAA.Common.Measurement.ElevationVariantTypeEnum.ALTITUDEAGLVARIANT_D
    value: Union[UMAA.Common.Measurement.AltitudeAGLVariantType, UMAA.Common.Measurement.AltitudeASFVariantType, UMAA.Common.Measurement.AltitudeGeodeticVariantType, UMAA.Common.Measurement.AltitudeMSLVariantType, UMAA.Common.Measurement.DepthVariantType] = field(default_factory = UMAA.Common.Measurement.AltitudeAGLVariantType)

    AltitudeAGLVariantVariant: UMAA.Common.Measurement.AltitudeAGLVariantType = idl.case(UMAA.Common.Measurement.ElevationVariantTypeEnum.ALTITUDEAGLVARIANT_D)
    AltitudeASFVariantVariant: UMAA.Common.Measurement.AltitudeASFVariantType = idl.case(UMAA.Common.Measurement.ElevationVariantTypeEnum.ALTITUDEASFVARIANT_D)
    AltitudeGeodeticVariantVariant: UMAA.Common.Measurement.AltitudeGeodeticVariantType = idl.case(UMAA.Common.Measurement.ElevationVariantTypeEnum.ALTITUDEGEODETICVARIANT_D)
    AltitudeMSLVariantVariant: UMAA.Common.Measurement.AltitudeMSLVariantType = idl.case(UMAA.Common.Measurement.ElevationVariantTypeEnum.ALTITUDEMSLVARIANT_D)
    DepthVariantVariant: UMAA.Common.Measurement.DepthVariantType = idl.case(UMAA.Common.Measurement.ElevationVariantTypeEnum.DEPTHVARIANT_D)

UMAA.Common.Measurement.ElevationVariantTypeUnion = UMAA_Common_Measurement_ElevationVariantTypeUnion

@idl.struct(
    type_annotations = [idl.type_name("UMAA::Common::Measurement::ElevationVariantType")])
class UMAA_Common_Measurement_ElevationVariantType:
    ElevationVariantTypeSubtypes: UMAA.Common.Measurement.ElevationVariantTypeUnion = field(default_factory = UMAA.Common.Measurement.ElevationVariantTypeUnion)

UMAA.Common.Measurement.ElevationVariantType = UMAA_Common_Measurement_ElevationVariantType
