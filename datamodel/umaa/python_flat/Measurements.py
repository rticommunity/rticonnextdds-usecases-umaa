
# WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

# This file was generated from Measurements.idl
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

UMAA_Common_Measurement = idl.get_module("UMAA_Common_Measurement")

UMAA.Common.Measurement = UMAA_Common_Measurement

UMAA_Common_Measurement_AmpHours_MIN = 0.0

UMAA.Common.Measurement.AmpHours_MIN = UMAA_Common_Measurement_AmpHours_MIN

UMAA_Common_Measurement_AmpHours_MAX = 500.0

UMAA.Common.Measurement.AmpHours_MAX = UMAA_Common_Measurement_AmpHours_MAX

UMAA_Common_Measurement_AmpHours = float

UMAA.Common.Measurement.AmpHours = UMAA_Common_Measurement_AmpHours

UMAA_Common_Measurement_AngleAcceleration_MIN = -10000.0

UMAA.Common.Measurement.AngleAcceleration_MIN = UMAA_Common_Measurement_AngleAcceleration_MIN

UMAA_Common_Measurement_AngleAcceleration_MAX = 10000.0

UMAA.Common.Measurement.AngleAcceleration_MAX = UMAA_Common_Measurement_AngleAcceleration_MAX

UMAA_Common_Measurement_AngleAcceleration = float

UMAA.Common.Measurement.AngleAcceleration = UMAA_Common_Measurement_AngleAcceleration

UMAA_Common_Measurement_AzimuthTrueNorthAngle_MIN = -6.28318530718

UMAA.Common.Measurement.AzimuthTrueNorthAngle_MIN = UMAA_Common_Measurement_AzimuthTrueNorthAngle_MIN

UMAA_Common_Measurement_AzimuthTrueNorthAngle_MAX = 6.28318530718

UMAA.Common.Measurement.AzimuthTrueNorthAngle_MAX = UMAA_Common_Measurement_AzimuthTrueNorthAngle_MAX

UMAA_Common_Measurement_AzimuthTrueNorthAngle = float

UMAA.Common.Measurement.AzimuthTrueNorthAngle = UMAA_Common_Measurement_AzimuthTrueNorthAngle

UMAA_Common_Measurement_BatteryCurrent_MIN = 0.0

UMAA.Common.Measurement.BatteryCurrent_MIN = UMAA_Common_Measurement_BatteryCurrent_MIN

UMAA_Common_Measurement_BatteryCurrent_MAX = 1000.0

UMAA.Common.Measurement.BatteryCurrent_MAX = UMAA_Common_Measurement_BatteryCurrent_MAX

UMAA_Common_Measurement_BatteryCurrent = float

UMAA.Common.Measurement.BatteryCurrent = UMAA_Common_Measurement_BatteryCurrent

UMAA_Common_Measurement_BatteryCurrentDuration_MIN = 0.0

UMAA.Common.Measurement.BatteryCurrentDuration_MIN = UMAA_Common_Measurement_BatteryCurrentDuration_MIN

UMAA_Common_Measurement_BatteryCurrentDuration_MAX = 20.0

UMAA.Common.Measurement.BatteryCurrentDuration_MAX = UMAA_Common_Measurement_BatteryCurrentDuration_MAX

UMAA_Common_Measurement_BatteryCurrentDuration = float

UMAA.Common.Measurement.BatteryCurrentDuration = UMAA_Common_Measurement_BatteryCurrentDuration

UMAA_Common_Measurement_BatteryCycles_MIN = 0.0

UMAA.Common.Measurement.BatteryCycles_MIN = UMAA_Common_Measurement_BatteryCycles_MIN

UMAA_Common_Measurement_BatteryCycles_MAX = 10000.0

UMAA.Common.Measurement.BatteryCycles_MAX = UMAA_Common_Measurement_BatteryCycles_MAX

UMAA_Common_Measurement_BatteryCycles = float

UMAA.Common.Measurement.BatteryCycles = UMAA_Common_Measurement_BatteryCycles

@idl.alias(
    annotations = [idl.array([256]),]
)
class UMAA_Common_Measurement_BinaryValue:
    value: Sequence[idl.uint8] = field(default_factory = idl.array_factory(idl.uint8, [256]))

UMAA.Common.Measurement.BinaryValue = UMAA_Common_Measurement_BinaryValue

UMAA_Common_Measurement_ByteValue = idl.uint8

UMAA.Common.Measurement.ByteValue = UMAA_Common_Measurement_ByteValue

UMAA_Common_Measurement_Charge_MIN = 0.0

UMAA.Common.Measurement.Charge_MIN = UMAA_Common_Measurement_Charge_MIN

UMAA_Common_Measurement_Charge_MAX = 3600000.0

UMAA.Common.Measurement.Charge_MAX = UMAA_Common_Measurement_Charge_MAX

UMAA_Common_Measurement_Charge = float

UMAA.Common.Measurement.Charge = UMAA_Common_Measurement_Charge

UMAA_Common_Measurement_CharValue = idl.char

UMAA.Common.Measurement.CharValue = UMAA_Common_Measurement_CharValue

UMAA_Common_Measurement_Conductivity = float

UMAA.Common.Measurement.Conductivity = UMAA_Common_Measurement_Conductivity

UMAA_Common_Measurement_DataTransferRate_MIN = 0.0

UMAA.Common.Measurement.DataTransferRate_MIN = UMAA_Common_Measurement_DataTransferRate_MIN

UMAA_Common_Measurement_DataTransferRate = float

UMAA.Common.Measurement.DataTransferRate = UMAA_Common_Measurement_DataTransferRate

UMAA_Common_Measurement_DistanceASF_MIN = 0.0

UMAA.Common.Measurement.DistanceASF_MIN = UMAA_Common_Measurement_DistanceASF_MIN

UMAA_Common_Measurement_DistanceASF_MAX = 401056000.0

UMAA.Common.Measurement.DistanceASF_MAX = UMAA_Common_Measurement_DistanceASF_MAX

UMAA_Common_Measurement_DistanceASF = float

UMAA.Common.Measurement.DistanceASF = UMAA_Common_Measurement_DistanceASF

UMAA_Common_Measurement_DistanceBSL_MIN = 0.0

UMAA.Common.Measurement.DistanceBSL_MIN = UMAA_Common_Measurement_DistanceBSL_MIN

UMAA_Common_Measurement_DistanceBSL_MAX = 10000.0

UMAA.Common.Measurement.DistanceBSL_MAX = UMAA_Common_Measurement_DistanceBSL_MAX

UMAA_Common_Measurement_DistanceBSL = float

UMAA.Common.Measurement.DistanceBSL = UMAA_Common_Measurement_DistanceBSL

UMAA_Common_Measurement_DistanceAGL_MIN = 0.0

UMAA.Common.Measurement.DistanceAGL_MIN = UMAA_Common_Measurement_DistanceAGL_MIN

UMAA_Common_Measurement_DistanceAGL = float

UMAA.Common.Measurement.DistanceAGL = UMAA_Common_Measurement_DistanceAGL

UMAA_Common_Measurement_DoubleValue = float

UMAA.Common.Measurement.DoubleValue = UMAA_Common_Measurement_DoubleValue

UMAA_Common_Measurement_DurationMilliseconds_MIN = 0.0

UMAA.Common.Measurement.DurationMilliseconds_MIN = UMAA_Common_Measurement_DurationMilliseconds_MIN

UMAA_Common_Measurement_DurationMilliseconds = float

UMAA.Common.Measurement.DurationMilliseconds = UMAA_Common_Measurement_DurationMilliseconds

UMAA_Common_Measurement_Effort_MIN = -100.0

UMAA.Common.Measurement.Effort_MIN = UMAA_Common_Measurement_Effort_MIN

UMAA_Common_Measurement_Effort_MAX = 100.0

UMAA.Common.Measurement.Effort_MAX = UMAA_Common_Measurement_Effort_MAX

UMAA_Common_Measurement_Effort = float

UMAA.Common.Measurement.Effort = UMAA_Common_Measurement_Effort

UMAA_Common_Measurement_ElectroMagneticFrequencyHertz_MIN = 0.0

UMAA.Common.Measurement.ElectroMagneticFrequencyHertz_MIN = UMAA_Common_Measurement_ElectroMagneticFrequencyHertz_MIN

UMAA_Common_Measurement_ElectroMagneticFrequencyHertz_MAX = 1e25

UMAA.Common.Measurement.ElectroMagneticFrequencyHertz_MAX = UMAA_Common_Measurement_ElectroMagneticFrequencyHertz_MAX

UMAA_Common_Measurement_ElectroMagneticFrequencyHertz = float

UMAA.Common.Measurement.ElectroMagneticFrequencyHertz = UMAA_Common_Measurement_ElectroMagneticFrequencyHertz

UMAA_Common_Measurement_EnergyPercent_MIN = 0.0

UMAA.Common.Measurement.EnergyPercent_MIN = UMAA_Common_Measurement_EnergyPercent_MIN

UMAA_Common_Measurement_EnergyPercent_MAX = 1000.0

UMAA.Common.Measurement.EnergyPercent_MAX = UMAA_Common_Measurement_EnergyPercent_MAX

UMAA_Common_Measurement_EnergyPercent = float

UMAA.Common.Measurement.EnergyPercent = UMAA_Common_Measurement_EnergyPercent

UMAA_Common_Measurement_FrequencyRPM_MIN = -100000

UMAA.Common.Measurement.FrequencyRPM_MIN = UMAA_Common_Measurement_FrequencyRPM_MIN

UMAA_Common_Measurement_FrequencyRPM_MAX = 100000

UMAA.Common.Measurement.FrequencyRPM_MAX = UMAA_Common_Measurement_FrequencyRPM_MAX

UMAA_Common_Measurement_FrequencyRPM = idl.int32

UMAA.Common.Measurement.FrequencyRPM = UMAA_Common_Measurement_FrequencyRPM

UMAA_Common_Measurement_GammaAnglePropulsor_MIN = -6.28318530718

UMAA.Common.Measurement.GammaAnglePropulsor_MIN = UMAA_Common_Measurement_GammaAnglePropulsor_MIN

UMAA_Common_Measurement_GammaAnglePropulsor_MAX = 6.28318530718

UMAA.Common.Measurement.GammaAnglePropulsor_MAX = UMAA_Common_Measurement_GammaAnglePropulsor_MAX

UMAA_Common_Measurement_GammaAnglePropulsor = float

UMAA.Common.Measurement.GammaAnglePropulsor = UMAA_Common_Measurement_GammaAnglePropulsor

UMAA_Common_Measurement_HeadingCurrentDirection_MIN = -6.28318530718

UMAA.Common.Measurement.HeadingCurrentDirection_MIN = UMAA_Common_Measurement_HeadingCurrentDirection_MIN

UMAA_Common_Measurement_HeadingCurrentDirection_MAX = 6.28318530718

UMAA.Common.Measurement.HeadingCurrentDirection_MAX = UMAA_Common_Measurement_HeadingCurrentDirection_MAX

UMAA_Common_Measurement_HeadingCurrentDirection = float

UMAA.Common.Measurement.HeadingCurrentDirection = UMAA_Common_Measurement_HeadingCurrentDirection

UMAA_Common_Measurement_HeadingMagneticNorth_MIN = -6.28318530718

UMAA.Common.Measurement.HeadingMagneticNorth_MIN = UMAA_Common_Measurement_HeadingMagneticNorth_MIN

UMAA_Common_Measurement_HeadingMagneticNorth_MAX = 6.28318530718

UMAA.Common.Measurement.HeadingMagneticNorth_MAX = UMAA_Common_Measurement_HeadingMagneticNorth_MAX

UMAA_Common_Measurement_HeadingMagneticNorth = float

UMAA.Common.Measurement.HeadingMagneticNorth = UMAA_Common_Measurement_HeadingMagneticNorth

UMAA_Common_Measurement_HeadingTarget_MIN = -6.28318530718

UMAA.Common.Measurement.HeadingTarget_MIN = UMAA_Common_Measurement_HeadingTarget_MIN

UMAA_Common_Measurement_HeadingTarget_MAX = 6.28318530718

UMAA.Common.Measurement.HeadingTarget_MAX = UMAA_Common_Measurement_HeadingTarget_MAX

UMAA_Common_Measurement_HeadingTarget = float

UMAA.Common.Measurement.HeadingTarget = UMAA_Common_Measurement_HeadingTarget

UMAA_Common_Measurement_HeadingWindDirection_MIN = -6.28318530718

UMAA.Common.Measurement.HeadingWindDirection_MIN = UMAA_Common_Measurement_HeadingWindDirection_MIN

UMAA_Common_Measurement_HeadingWindDirection_MAX = 6.28318530718

UMAA.Common.Measurement.HeadingWindDirection_MAX = UMAA_Common_Measurement_HeadingWindDirection_MAX

UMAA_Common_Measurement_HeadingWindDirection = float

UMAA.Common.Measurement.HeadingWindDirection = UMAA_Common_Measurement_HeadingWindDirection

UMAA_Common_Measurement_IntegerValue = idl.int32

UMAA.Common.Measurement.IntegerValue = UMAA_Common_Measurement_IntegerValue

UMAA_Common_Measurement_LargeCount = idl.uint64

UMAA.Common.Measurement.LargeCount = UMAA_Common_Measurement_LargeCount

UMAA_Common_Measurement_MassMetricTon_MIN = 0.0

UMAA.Common.Measurement.MassMetricTon_MIN = UMAA_Common_Measurement_MassMetricTon_MIN

UMAA_Common_Measurement_MassMetricTon_MAX = 100000.0

UMAA.Common.Measurement.MassMetricTon_MAX = UMAA_Common_Measurement_MassMetricTon_MAX

UMAA_Common_Measurement_MassMetricTon = float

UMAA.Common.Measurement.MassMetricTon = UMAA_Common_Measurement_MassMetricTon

UMAA_Common_Measurement_MassFlowRate = float

UMAA.Common.Measurement.MassFlowRate = UMAA_Common_Measurement_MassFlowRate

UMAA_Common_Measurement_MSLAltitude_MIN = 0.0

UMAA.Common.Measurement.MSLAltitude_MIN = UMAA_Common_Measurement_MSLAltitude_MIN

UMAA_Common_Measurement_MSLAltitude = float

UMAA.Common.Measurement.MSLAltitude = UMAA_Common_Measurement_MSLAltitude

UMAA_Common_Measurement_PressurePercent_MIN = 0.0

UMAA.Common.Measurement.PressurePercent_MIN = UMAA_Common_Measurement_PressurePercent_MIN

UMAA_Common_Measurement_PressurePercent_MAX = 200.0

UMAA.Common.Measurement.PressurePercent_MAX = UMAA_Common_Measurement_PressurePercent_MAX

UMAA_Common_Measurement_PressurePercent = float

UMAA.Common.Measurement.PressurePercent = UMAA_Common_Measurement_PressurePercent

UMAA_Common_Measurement_Priority_MIN = 0

UMAA.Common.Measurement.Priority_MIN = UMAA_Common_Measurement_Priority_MIN

UMAA_Common_Measurement_Priority_MAX = 255

UMAA.Common.Measurement.Priority_MAX = UMAA_Common_Measurement_Priority_MAX

UMAA_Common_Measurement_Priority = idl.int32

UMAA.Common.Measurement.Priority = UMAA_Common_Measurement_Priority

UMAA_Common_Measurement_PropellerPitchAnglePropulsor_MIN = -6.28318530718

UMAA.Common.Measurement.PropellerPitchAnglePropulsor_MIN = UMAA_Common_Measurement_PropellerPitchAnglePropulsor_MIN

UMAA_Common_Measurement_PropellerPitchAnglePropulsor_MAX = 6.28318530718

UMAA.Common.Measurement.PropellerPitchAnglePropulsor_MAX = UMAA_Common_Measurement_PropellerPitchAnglePropulsor_MAX

UMAA_Common_Measurement_PropellerPitchAnglePropulsor = float

UMAA.Common.Measurement.PropellerPitchAnglePropulsor = UMAA_Common_Measurement_PropellerPitchAnglePropulsor

UMAA_Common_Measurement_RhoAnglePropulsor_MIN = -6.28318530718

UMAA.Common.Measurement.RhoAnglePropulsor_MIN = UMAA_Common_Measurement_RhoAnglePropulsor_MIN

UMAA_Common_Measurement_RhoAnglePropulsor_MAX = 6.28318530718

UMAA.Common.Measurement.RhoAnglePropulsor_MAX = UMAA_Common_Measurement_RhoAnglePropulsor_MAX

UMAA_Common_Measurement_RhoAnglePropulsor = float

UMAA.Common.Measurement.RhoAnglePropulsor = UMAA_Common_Measurement_RhoAnglePropulsor

UMAA_Common_Measurement_Salinity = float

UMAA.Common.Measurement.Salinity = UMAA_Common_Measurement_Salinity

UMAA_Common_Measurement_SegmentID_MIN = 0

UMAA.Common.Measurement.SegmentID_MIN = UMAA_Common_Measurement_SegmentID_MIN

UMAA_Common_Measurement_SegmentID_MAX = 100000

UMAA.Common.Measurement.SegmentID_MAX = UMAA_Common_Measurement_SegmentID_MAX

UMAA_Common_Measurement_SegmentID = idl.int32

UMAA.Common.Measurement.SegmentID = UMAA_Common_Measurement_SegmentID

UMAA_Common_Measurement_SidesCount_MIN = 3

UMAA.Common.Measurement.SidesCount_MIN = UMAA_Common_Measurement_SidesCount_MIN

UMAA_Common_Measurement_SidesCount_MAX = 255

UMAA.Common.Measurement.SidesCount_MAX = UMAA_Common_Measurement_SidesCount_MAX

UMAA_Common_Measurement_SidesCount = idl.int32

UMAA.Common.Measurement.SidesCount = UMAA_Common_Measurement_SidesCount

UMAA_Common_Measurement_SizeLargeBytes = idl.uint64

UMAA.Common.Measurement.SizeLargeBytes = UMAA_Common_Measurement_SizeLargeBytes

UMAA_Common_Measurement_SpeedASF_MIN = -299792458.0

UMAA.Common.Measurement.SpeedASF_MIN = UMAA_Common_Measurement_SpeedASF_MIN

UMAA_Common_Measurement_SpeedASF_MAX = 299792458.0

UMAA.Common.Measurement.SpeedASF_MAX = UMAA_Common_Measurement_SpeedASF_MAX

UMAA_Common_Measurement_SpeedASF = float

UMAA.Common.Measurement.SpeedASF = UMAA_Common_Measurement_SpeedASF

UMAA_Common_Measurement_SpeedBSL_MIN = -299792458.0

UMAA.Common.Measurement.SpeedBSL_MIN = UMAA_Common_Measurement_SpeedBSL_MIN

UMAA_Common_Measurement_SpeedBSL_MAX = 299792458.0

UMAA.Common.Measurement.SpeedBSL_MAX = UMAA_Common_Measurement_SpeedBSL_MAX

UMAA_Common_Measurement_SpeedBSL = float

UMAA.Common.Measurement.SpeedBSL = UMAA_Common_Measurement_SpeedBSL

UMAA_Common_Measurement_SpeedLocalWaterMass_MIN = 0.0

UMAA.Common.Measurement.SpeedLocalWaterMass_MIN = UMAA_Common_Measurement_SpeedLocalWaterMass_MIN

UMAA_Common_Measurement_SpeedLocalWaterMass_MAX = 299792458.0

UMAA.Common.Measurement.SpeedLocalWaterMass_MAX = UMAA_Common_Measurement_SpeedLocalWaterMass_MAX

UMAA_Common_Measurement_SpeedLocalWaterMass = float

UMAA.Common.Measurement.SpeedLocalWaterMass = UMAA_Common_Measurement_SpeedLocalWaterMass

UMAA_Common_Measurement_TransmitAttenuation_MIN = 0

UMAA.Common.Measurement.TransmitAttenuation_MIN = UMAA_Common_Measurement_TransmitAttenuation_MIN

UMAA_Common_Measurement_TransmitAttenuation_MAX = 18

UMAA.Common.Measurement.TransmitAttenuation_MAX = UMAA_Common_Measurement_TransmitAttenuation_MAX

UMAA_Common_Measurement_TransmitAttenuation = idl.int32

UMAA.Common.Measurement.TransmitAttenuation = UMAA_Common_Measurement_TransmitAttenuation

UMAA_Common_Measurement_Turbidity_MIN = 0.0

UMAA.Common.Measurement.Turbidity_MIN = UMAA_Common_Measurement_Turbidity_MIN

UMAA_Common_Measurement_Turbidity = float

UMAA.Common.Measurement.Turbidity = UMAA_Common_Measurement_Turbidity

UMAA_Common_Measurement_VolumeCubicMeter_MIN = 0.0

UMAA.Common.Measurement.VolumeCubicMeter_MIN = UMAA_Common_Measurement_VolumeCubicMeter_MIN

UMAA_Common_Measurement_VolumeCubicMeter_MAX = 1000.0

UMAA.Common.Measurement.VolumeCubicMeter_MAX = UMAA_Common_Measurement_VolumeCubicMeter_MAX

UMAA_Common_Measurement_VolumeCubicMeter = float

UMAA.Common.Measurement.VolumeCubicMeter = UMAA_Common_Measurement_VolumeCubicMeter

UMAA_Common_Measurement_VolumePercent_MIN = 0.0

UMAA.Common.Measurement.VolumePercent_MIN = UMAA_Common_Measurement_VolumePercent_MIN

UMAA_Common_Measurement_VolumePercent_MAX = 1000.0

UMAA.Common.Measurement.VolumePercent_MAX = UMAA_Common_Measurement_VolumePercent_MAX

UMAA_Common_Measurement_VolumePercent = float

UMAA.Common.Measurement.VolumePercent = UMAA_Common_Measurement_VolumePercent

UMAA_Common_Measurement_VolumetricFlowRate_MIN = -100000000.0

UMAA.Common.Measurement.VolumetricFlowRate_MIN = UMAA_Common_Measurement_VolumetricFlowRate_MIN

UMAA_Common_Measurement_VolumetricFlowRate_MAX = 100000000.0

UMAA.Common.Measurement.VolumetricFlowRate_MAX = UMAA_Common_Measurement_VolumetricFlowRate_MAX

UMAA_Common_Measurement_VolumetricFlowRate = float

UMAA.Common.Measurement.VolumetricFlowRate = UMAA_Common_Measurement_VolumetricFlowRate

UMAA_Common_Measurement_WattHours_MIN = 0.0

UMAA.Common.Measurement.WattHours_MIN = UMAA_Common_Measurement_WattHours_MIN

UMAA_Common_Measurement_WattHours_MAX = 900000.0

UMAA.Common.Measurement.WattHours_MAX = UMAA_Common_Measurement_WattHours_MAX

UMAA_Common_Measurement_WattHours = float

UMAA.Common.Measurement.WattHours = UMAA_Common_Measurement_WattHours

UMAA_Common_Measurement_YawAngle_MIN = -6.28318530718

UMAA.Common.Measurement.YawAngle_MIN = UMAA_Common_Measurement_YawAngle_MIN

UMAA_Common_Measurement_YawAngle_MAX = 6.28318530718

UMAA.Common.Measurement.YawAngle_MAX = UMAA_Common_Measurement_YawAngle_MAX

UMAA_Common_Measurement_YawAngle = float

UMAA.Common.Measurement.YawAngle = UMAA_Common_Measurement_YawAngle

UMAA = idl.get_module("UMAA")

UMAA_Common = idl.get_module("UMAA_Common")

UMAA.Common = UMAA_Common

UMAA_Common_Measurement = idl.get_module("UMAA_Common_Measurement")

UMAA.Common.Measurement = UMAA_Common_Measurement

UMAA_Common_Measurement_AccelerationScalar_MIN = -1310.68

UMAA.Common.Measurement.AccelerationScalar_MIN = UMAA_Common_Measurement_AccelerationScalar_MIN

UMAA_Common_Measurement_AccelerationScalar_MAX = 1310.68

UMAA.Common.Measurement.AccelerationScalar_MAX = UMAA_Common_Measurement_AccelerationScalar_MAX

UMAA_Common_Measurement_AccelerationScalar = float

UMAA.Common.Measurement.AccelerationScalar = UMAA_Common_Measurement_AccelerationScalar

UMAA_Common_Measurement_Angle_MIN = -3.1415926535897932

UMAA.Common.Measurement.Angle_MIN = UMAA_Common_Measurement_Angle_MIN

UMAA_Common_Measurement_Angle_MAX = 3.1415926535897932

UMAA.Common.Measurement.Angle_MAX = UMAA_Common_Measurement_Angle_MAX

UMAA_Common_Measurement_Angle = float

UMAA.Common.Measurement.Angle = UMAA_Common_Measurement_Angle

UMAA_Common_Measurement_AngleRate_MIN = -62.831

UMAA.Common.Measurement.AngleRate_MIN = UMAA_Common_Measurement_AngleRate_MIN

UMAA_Common_Measurement_AngleRate_MAX = 62.831

UMAA.Common.Measurement.AngleRate_MAX = UMAA_Common_Measurement_AngleRate_MAX

UMAA_Common_Measurement_AngleRate = float

UMAA.Common.Measurement.AngleRate = UMAA_Common_Measurement_AngleRate

UMAA_Common_Measurement_Count_MIN = -2147483648

UMAA.Common.Measurement.Count_MIN = UMAA_Common_Measurement_Count_MIN

UMAA_Common_Measurement_Count_MAX = 2147483647

UMAA.Common.Measurement.Count_MAX = UMAA_Common_Measurement_Count_MAX

UMAA_Common_Measurement_Count = idl.int32

UMAA.Common.Measurement.Count = UMAA_Common_Measurement_Count

UMAA_Common_Measurement_CourseTrueNorth_MIN = -6.28318530718

UMAA.Common.Measurement.CourseTrueNorth_MIN = UMAA_Common_Measurement_CourseTrueNorth_MIN

UMAA_Common_Measurement_CourseTrueNorth_MAX = 6.28318530718

UMAA.Common.Measurement.CourseTrueNorth_MAX = UMAA_Common_Measurement_CourseTrueNorth_MAX

UMAA_Common_Measurement_CourseTrueNorth = float

UMAA.Common.Measurement.CourseTrueNorth = UMAA_Common_Measurement_CourseTrueNorth

UMAA_Common_Measurement_DateTimeSeconds_MIN = -9223372036854775807

UMAA.Common.Measurement.DateTimeSeconds_MIN = UMAA_Common_Measurement_DateTimeSeconds_MIN

UMAA_Common_Measurement_DateTimeSeconds_MAX = 9223372036854775807

UMAA.Common.Measurement.DateTimeSeconds_MAX = UMAA_Common_Measurement_DateTimeSeconds_MAX

UMAA_Common_Measurement_DateTimeSeconds = int

UMAA.Common.Measurement.DateTimeSeconds = UMAA_Common_Measurement_DateTimeSeconds

UMAA_Common_Measurement_DateTimeNanoseconds_MIN = 0

UMAA.Common.Measurement.DateTimeNanoseconds_MIN = UMAA_Common_Measurement_DateTimeNanoseconds_MIN

UMAA_Common_Measurement_DateTimeNanoseconds_MAX = 999999999

UMAA.Common.Measurement.DateTimeNanoseconds_MAX = UMAA_Common_Measurement_DateTimeNanoseconds_MAX

UMAA_Common_Measurement_DateTimeNanoseconds = idl.int32

UMAA.Common.Measurement.DateTimeNanoseconds = UMAA_Common_Measurement_DateTimeNanoseconds

@idl.struct(
    type_annotations = [idl.type_name("UMAA::Common::Measurement::DateTime")])
class UMAA_Common_Measurement_DateTime:
    seconds: int = 0
    nanoseconds: idl.int32 = 0

UMAA.Common.Measurement.DateTime = UMAA_Common_Measurement_DateTime

UMAA_Common_Measurement_Density_MIN = 0.0

UMAA.Common.Measurement.Density_MIN = UMAA_Common_Measurement_Density_MIN

UMAA_Common_Measurement_Density_MAX = 3e17

UMAA.Common.Measurement.Density_MAX = UMAA_Common_Measurement_Density_MAX

UMAA_Common_Measurement_Density = float

UMAA.Common.Measurement.Density = UMAA_Common_Measurement_Density

UMAA_Common_Measurement_Distance_MIN = 0.0

UMAA.Common.Measurement.Distance_MIN = UMAA_Common_Measurement_Distance_MIN

UMAA_Common_Measurement_Distance_MAX = 401056000.0

UMAA.Common.Measurement.Distance_MAX = UMAA_Common_Measurement_Distance_MAX

UMAA_Common_Measurement_Distance = float

UMAA.Common.Measurement.Distance = UMAA_Common_Measurement_Distance

UMAA_Common_Measurement_DurationHours_MIN = 0.0

UMAA.Common.Measurement.DurationHours_MIN = UMAA_Common_Measurement_DurationHours_MIN

UMAA_Common_Measurement_DurationHours_MAX = 10505.0

UMAA.Common.Measurement.DurationHours_MAX = UMAA_Common_Measurement_DurationHours_MAX

UMAA_Common_Measurement_DurationHours = float

UMAA.Common.Measurement.DurationHours = UMAA_Common_Measurement_DurationHours

UMAA_Common_Measurement_DurationSeconds_MIN = 0.0

UMAA.Common.Measurement.DurationSeconds_MIN = UMAA_Common_Measurement_DurationSeconds_MIN

UMAA_Common_Measurement_DurationSeconds_MAX = 37817280.0

UMAA.Common.Measurement.DurationSeconds_MAX = UMAA_Common_Measurement_DurationSeconds_MAX

UMAA_Common_Measurement_DurationSeconds = float

UMAA.Common.Measurement.DurationSeconds = UMAA_Common_Measurement_DurationSeconds

UMAA_Common_Measurement_ElectricalPower_MIN = 0.0

UMAA.Common.Measurement.ElectricalPower_MIN = UMAA_Common_Measurement_ElectricalPower_MIN

UMAA_Common_Measurement_ElectricalPower_MAX = 100000000.0

UMAA.Common.Measurement.ElectricalPower_MAX = UMAA_Common_Measurement_ElectricalPower_MAX

UMAA_Common_Measurement_ElectricalPower = float

UMAA.Common.Measurement.ElectricalPower = UMAA_Common_Measurement_ElectricalPower

UMAA_Common_Measurement_EngineSpeed_MIN = -100000.0

UMAA.Common.Measurement.EngineSpeed_MIN = UMAA_Common_Measurement_EngineSpeed_MIN

UMAA_Common_Measurement_EngineSpeed_MAX = 100000.0

UMAA.Common.Measurement.EngineSpeed_MAX = UMAA_Common_Measurement_EngineSpeed_MAX

UMAA_Common_Measurement_EngineSpeed = float

UMAA.Common.Measurement.EngineSpeed = UMAA_Common_Measurement_EngineSpeed

UMAA_Common_Measurement_Force_MIN = 0.0

UMAA.Common.Measurement.Force_MIN = UMAA_Common_Measurement_Force_MIN

UMAA_Common_Measurement_Force_MAX = 100000000.0

UMAA.Common.Measurement.Force_MAX = UMAA_Common_Measurement_Force_MAX

UMAA_Common_Measurement_Force = float

UMAA.Common.Measurement.Force = UMAA_Common_Measurement_Force

UMAA_Common_Measurement_FrequencyHertz_MIN = 0.0

UMAA.Common.Measurement.FrequencyHertz_MIN = UMAA_Common_Measurement_FrequencyHertz_MIN

UMAA_Common_Measurement_FrequencyHertz_MAX = 1e10

UMAA.Common.Measurement.FrequencyHertz_MAX = UMAA_Common_Measurement_FrequencyHertz_MAX

UMAA_Common_Measurement_FrequencyHertz = float

UMAA.Common.Measurement.FrequencyHertz = UMAA_Common_Measurement_FrequencyHertz

UMAA_Common_Measurement_GroundSpeed_MIN = -299792458.0

UMAA.Common.Measurement.GroundSpeed_MIN = UMAA_Common_Measurement_GroundSpeed_MIN

UMAA_Common_Measurement_GroundSpeed_MAX = 299792458.0

UMAA.Common.Measurement.GroundSpeed_MAX = UMAA_Common_Measurement_GroundSpeed_MAX

UMAA_Common_Measurement_GroundSpeed = float

UMAA.Common.Measurement.GroundSpeed = UMAA_Common_Measurement_GroundSpeed

UMAA_Common_Measurement_HeadingTrueNorthAngle_MIN = -6.28318530718

UMAA.Common.Measurement.HeadingTrueNorthAngle_MIN = UMAA_Common_Measurement_HeadingTrueNorthAngle_MIN

UMAA_Common_Measurement_HeadingTrueNorthAngle_MAX = 6.28318530718

UMAA.Common.Measurement.HeadingTrueNorthAngle_MAX = UMAA_Common_Measurement_HeadingTrueNorthAngle_MAX

UMAA_Common_Measurement_HeadingTrueNorthAngle = float

UMAA.Common.Measurement.HeadingTrueNorthAngle = UMAA_Common_Measurement_HeadingTrueNorthAngle

UMAA_Common_Measurement_IndicatedAirspeed_MIN = 0.0

UMAA.Common.Measurement.IndicatedAirspeed_MIN = UMAA_Common_Measurement_IndicatedAirspeed_MIN

UMAA_Common_Measurement_IndicatedAirspeed_MAX = 299792458.0

UMAA.Common.Measurement.IndicatedAirspeed_MAX = UMAA_Common_Measurement_IndicatedAirspeed_MAX

UMAA_Common_Measurement_IndicatedAirspeed = float

UMAA.Common.Measurement.IndicatedAirspeed = UMAA_Common_Measurement_IndicatedAirspeed

UMAA_Common_Measurement_MagneticVariation_MIN = -6.28318530718

UMAA.Common.Measurement.MagneticVariation_MIN = UMAA_Common_Measurement_MagneticVariation_MIN

UMAA_Common_Measurement_MagneticVariation_MAX = 6.28318530718

UMAA.Common.Measurement.MagneticVariation_MAX = UMAA_Common_Measurement_MagneticVariation_MAX

UMAA_Common_Measurement_MagneticVariation = float

UMAA.Common.Measurement.MagneticVariation = UMAA_Common_Measurement_MagneticVariation

UMAA_Common_Measurement_Mass_MIN = 0.0

UMAA.Common.Measurement.Mass_MIN = UMAA_Common_Measurement_Mass_MIN

UMAA_Common_Measurement_Mass_MAX = 100000000.0

UMAA.Common.Measurement.Mass_MAX = UMAA_Common_Measurement_Mass_MAX

UMAA_Common_Measurement_Mass = float

UMAA.Common.Measurement.Mass = UMAA_Common_Measurement_Mass

@idl.alias(
    annotations = [idl.array([16]),]
)
class UMAA_Common_Measurement_NumericGUID:
    value: Sequence[idl.uint8] = field(default_factory = idl.array_factory(idl.uint8, [16]))

UMAA.Common.Measurement.NumericGUID = UMAA_Common_Measurement_NumericGUID

UMAA_Common_Measurement_Percent_MIN = 0.0

UMAA.Common.Measurement.Percent_MIN = UMAA_Common_Measurement_Percent_MIN

UMAA_Common_Measurement_Percent_MAX = 1000.0

UMAA.Common.Measurement.Percent_MAX = UMAA_Common_Measurement_Percent_MAX

UMAA_Common_Measurement_Percent = float

UMAA.Common.Measurement.Percent = UMAA_Common_Measurement_Percent

UMAA_Common_Measurement_PitchHalfAngle_MIN = -1.5707963267948966

UMAA.Common.Measurement.PitchHalfAngle_MIN = UMAA_Common_Measurement_PitchHalfAngle_MIN

UMAA_Common_Measurement_PitchHalfAngle_MAX = 1.5707963267948966

UMAA.Common.Measurement.PitchHalfAngle_MAX = UMAA_Common_Measurement_PitchHalfAngle_MAX

UMAA_Common_Measurement_PitchHalfAngle = float

UMAA.Common.Measurement.PitchHalfAngle = UMAA_Common_Measurement_PitchHalfAngle

UMAA_Common_Measurement_PitchAcceleration_MIN = -10000.0

UMAA.Common.Measurement.PitchAcceleration_MIN = UMAA_Common_Measurement_PitchAcceleration_MIN

UMAA_Common_Measurement_PitchAcceleration_MAX = 10000.0

UMAA.Common.Measurement.PitchAcceleration_MAX = UMAA_Common_Measurement_PitchAcceleration_MAX

UMAA_Common_Measurement_PitchAcceleration = float

UMAA.Common.Measurement.PitchAcceleration = UMAA_Common_Measurement_PitchAcceleration

UMAA_Common_Measurement_PitchRate_MIN = -32.767

UMAA.Common.Measurement.PitchRate_MIN = UMAA_Common_Measurement_PitchRate_MIN

UMAA_Common_Measurement_PitchRate_MAX = 32.767

UMAA.Common.Measurement.PitchRate_MAX = UMAA_Common_Measurement_PitchRate_MAX

UMAA_Common_Measurement_PitchRate = float

UMAA.Common.Measurement.PitchRate = UMAA_Common_Measurement_PitchRate

UMAA_Common_Measurement_PowerBusCurrent_MIN = -100000.0

UMAA.Common.Measurement.PowerBusCurrent_MIN = UMAA_Common_Measurement_PowerBusCurrent_MIN

UMAA_Common_Measurement_PowerBusCurrent_MAX = 100000.0

UMAA.Common.Measurement.PowerBusCurrent_MAX = UMAA_Common_Measurement_PowerBusCurrent_MAX

UMAA_Common_Measurement_PowerBusCurrent = float

UMAA.Common.Measurement.PowerBusCurrent = UMAA_Common_Measurement_PowerBusCurrent

UMAA_Common_Measurement_PowerBusVoltage_MIN = -100000.0

UMAA.Common.Measurement.PowerBusVoltage_MIN = UMAA_Common_Measurement_PowerBusVoltage_MIN

UMAA_Common_Measurement_PowerBusVoltage_MAX = 100000.0

UMAA.Common.Measurement.PowerBusVoltage_MAX = UMAA_Common_Measurement_PowerBusVoltage_MAX

UMAA_Common_Measurement_PowerBusVoltage = float

UMAA.Common.Measurement.PowerBusVoltage = UMAA_Common_Measurement_PowerBusVoltage

UMAA_Common_Measurement_PressureKiloPascals_MIN = 0.0

UMAA.Common.Measurement.PressureKiloPascals_MIN = UMAA_Common_Measurement_PressureKiloPascals_MIN

UMAA_Common_Measurement_PressureKiloPascals_MAX = 51200.0

UMAA.Common.Measurement.PressureKiloPascals_MAX = UMAA_Common_Measurement_PressureKiloPascals_MAX

UMAA_Common_Measurement_PressureKiloPascals = float

UMAA.Common.Measurement.PressureKiloPascals = UMAA_Common_Measurement_PressureKiloPascals

UMAA_Common_Measurement_PressurePascals_MIN = 0.0

UMAA.Common.Measurement.PressurePascals_MIN = UMAA_Common_Measurement_PressurePascals_MIN

UMAA_Common_Measurement_PressurePascals_MAX = 107558000.0

UMAA.Common.Measurement.PressurePascals_MAX = UMAA_Common_Measurement_PressurePascals_MAX

UMAA_Common_Measurement_PressurePascals = float

UMAA.Common.Measurement.PressurePascals = UMAA_Common_Measurement_PressurePascals

UMAA_Common_Measurement_RadioFrequencyHertz_MIN = 0.0

UMAA.Common.Measurement.RadioFrequencyHertz_MIN = UMAA_Common_Measurement_RadioFrequencyHertz_MIN

UMAA_Common_Measurement_RadioFrequencyHertz_MAX = 1e10

UMAA.Common.Measurement.RadioFrequencyHertz_MAX = UMAA_Common_Measurement_RadioFrequencyHertz_MAX

UMAA_Common_Measurement_RadioFrequencyHertz = float

UMAA.Common.Measurement.RadioFrequencyHertz = UMAA_Common_Measurement_RadioFrequencyHertz

UMAA_Common_Measurement_RelativeAngle_MIN = -6.28318530718

UMAA.Common.Measurement.RelativeAngle_MIN = UMAA_Common_Measurement_RelativeAngle_MIN

UMAA_Common_Measurement_RelativeAngle_MAX = 6.28318530718

UMAA.Common.Measurement.RelativeAngle_MAX = UMAA_Common_Measurement_RelativeAngle_MAX

UMAA_Common_Measurement_RelativeAngle = float

UMAA.Common.Measurement.RelativeAngle = UMAA_Common_Measurement_RelativeAngle

UMAA_Common_Measurement_RelativeHumidity_MIN = 0.0

UMAA.Common.Measurement.RelativeHumidity_MIN = UMAA_Common_Measurement_RelativeHumidity_MIN

UMAA_Common_Measurement_RelativeHumidity_MAX = 1000.0

UMAA.Common.Measurement.RelativeHumidity_MAX = UMAA_Common_Measurement_RelativeHumidity_MAX

UMAA_Common_Measurement_RelativeHumidity = float

UMAA.Common.Measurement.RelativeHumidity = UMAA_Common_Measurement_RelativeHumidity

UMAA_Common_Measurement_RollAngle_MIN = -6.28318530718

UMAA.Common.Measurement.RollAngle_MIN = UMAA_Common_Measurement_RollAngle_MIN

UMAA_Common_Measurement_RollAngle_MAX = 6.28318530718

UMAA.Common.Measurement.RollAngle_MAX = UMAA_Common_Measurement_RollAngle_MAX

UMAA_Common_Measurement_RollAngle = float

UMAA.Common.Measurement.RollAngle = UMAA_Common_Measurement_RollAngle

UMAA_Common_Measurement_RollAcceleration_MIN = -10000.0

UMAA.Common.Measurement.RollAcceleration_MIN = UMAA_Common_Measurement_RollAcceleration_MIN

UMAA_Common_Measurement_RollAcceleration_MAX = 10000.0

UMAA.Common.Measurement.RollAcceleration_MAX = UMAA_Common_Measurement_RollAcceleration_MAX

UMAA_Common_Measurement_RollAcceleration = float

UMAA.Common.Measurement.RollAcceleration = UMAA_Common_Measurement_RollAcceleration

UMAA_Common_Measurement_RollRate_MIN = -32.767

UMAA.Common.Measurement.RollRate_MIN = UMAA_Common_Measurement_RollRate_MIN

UMAA_Common_Measurement_RollRate_MAX = 32.767

UMAA.Common.Measurement.RollRate_MAX = UMAA_Common_Measurement_RollRate_MAX

UMAA_Common_Measurement_RollRate = float

UMAA.Common.Measurement.RollRate = UMAA_Common_Measurement_RollRate

UMAA_Common_Measurement_SizeBytes_MIN = 0

UMAA.Common.Measurement.SizeBytes_MIN = UMAA_Common_Measurement_SizeBytes_MIN

UMAA_Common_Measurement_SizeBytes_MAX = 1000000000

UMAA.Common.Measurement.SizeBytes_MAX = UMAA_Common_Measurement_SizeBytes_MAX

UMAA_Common_Measurement_SizeBytes = idl.int32

UMAA.Common.Measurement.SizeBytes = UMAA_Common_Measurement_SizeBytes

UMAA_Common_Measurement_SizeReal = float

UMAA.Common.Measurement.SizeReal = UMAA_Common_Measurement_SizeReal

UMAA_Common_Measurement_Speed_MIN = 0.0

UMAA.Common.Measurement.Speed_MIN = UMAA_Common_Measurement_Speed_MIN

UMAA_Common_Measurement_Speed_MAX = 299792458.0

UMAA.Common.Measurement.Speed_MAX = UMAA_Common_Measurement_Speed_MAX

UMAA_Common_Measurement_Speed = float

UMAA.Common.Measurement.Speed = UMAA_Common_Measurement_Speed

UMAA_Common_Measurement_Temperature_MIN = -273.0

UMAA.Common.Measurement.Temperature_MIN = UMAA_Common_Measurement_Temperature_MIN

UMAA_Common_Measurement_Temperature_MAX = 1000.0

UMAA.Common.Measurement.Temperature_MAX = UMAA_Common_Measurement_Temperature_MAX

UMAA_Common_Measurement_Temperature = float

UMAA.Common.Measurement.Temperature = UMAA_Common_Measurement_Temperature

UMAA_Common_Measurement_TurnRate_MIN = -32.767

UMAA.Common.Measurement.TurnRate_MIN = UMAA_Common_Measurement_TurnRate_MIN

UMAA_Common_Measurement_TurnRate_MAX = 32.767

UMAA.Common.Measurement.TurnRate_MAX = UMAA_Common_Measurement_TurnRate_MAX

UMAA_Common_Measurement_TurnRate = float

UMAA.Common.Measurement.TurnRate = UMAA_Common_Measurement_TurnRate

UMAA_Common_Measurement_YawAcceleration_MIN = -10000.0

UMAA.Common.Measurement.YawAcceleration_MIN = UMAA_Common_Measurement_YawAcceleration_MIN

UMAA_Common_Measurement_YawAcceleration_MAX = 10000.0

UMAA.Common.Measurement.YawAcceleration_MAX = UMAA_Common_Measurement_YawAcceleration_MAX

UMAA_Common_Measurement_YawAcceleration = float

UMAA.Common.Measurement.YawAcceleration = UMAA_Common_Measurement_YawAcceleration

UMAA_Common_Measurement_YawRate_MIN = -32.767

UMAA.Common.Measurement.YawRate_MIN = UMAA_Common_Measurement_YawRate_MIN

UMAA_Common_Measurement_YawRate_MAX = 32.767

UMAA.Common.Measurement.YawRate_MAX = UMAA_Common_Measurement_YawRate_MAX

UMAA_Common_Measurement_YawRate = float

UMAA.Common.Measurement.YawRate = UMAA_Common_Measurement_YawRate
