
# WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

# This file was generated from GeographicCoordinateAxes.idl
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


UMAA = idl.get_module("UMAA")

UMAA_Common = idl.get_module("UMAA_Common")

UMAA.Common = UMAA_Common

UMAA_Common_MeasurementCoordinate = idl.get_module("UMAA_Common_MeasurementCoordinate")

UMAA.Common.MeasurementCoordinate = UMAA_Common_MeasurementCoordinate

UMAA_Common_MeasurementCoordinate_GeodeticLatitude_MIN = -90.0

UMAA.Common.MeasurementCoordinate.GeodeticLatitude_MIN = UMAA_Common_MeasurementCoordinate_GeodeticLatitude_MIN

UMAA_Common_MeasurementCoordinate_GeodeticLatitude_MAX = 90.0

UMAA.Common.MeasurementCoordinate.GeodeticLatitude_MAX = UMAA_Common_MeasurementCoordinate_GeodeticLatitude_MAX

UMAA_Common_MeasurementCoordinate_GeodeticLatitude = float

UMAA.Common.MeasurementCoordinate.GeodeticLatitude = UMAA_Common_MeasurementCoordinate_GeodeticLatitude

UMAA_Common_MeasurementCoordinate_GeodeticLongitude_MIN = -180.0

UMAA.Common.MeasurementCoordinate.GeodeticLongitude_MIN = UMAA_Common_MeasurementCoordinate_GeodeticLongitude_MIN

UMAA_Common_MeasurementCoordinate_GeodeticLongitude_MAX = 180.0

UMAA.Common.MeasurementCoordinate.GeodeticLongitude_MAX = UMAA_Common_MeasurementCoordinate_GeodeticLongitude_MAX

UMAA_Common_MeasurementCoordinate_GeodeticLongitude = float

UMAA.Common.MeasurementCoordinate.GeodeticLongitude = UMAA_Common_MeasurementCoordinate_GeodeticLongitude
