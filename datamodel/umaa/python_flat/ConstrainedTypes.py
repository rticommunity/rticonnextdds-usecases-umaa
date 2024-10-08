
# WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

# This file was generated from ConstrainedTypes.idl
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

UMAA_Common_PrimitiveConstrained = idl.get_module("UMAA_Common_PrimitiveConstrained")

UMAA.Common.PrimitiveConstrained = UMAA_Common_PrimitiveConstrained

UMAA_Common_PrimitiveConstrained_AccelerationLocalWaterMass_MIN = -299792458.0

UMAA.Common.PrimitiveConstrained.AccelerationLocalWaterMass_MIN = UMAA_Common_PrimitiveConstrained_AccelerationLocalWaterMass_MIN

UMAA_Common_PrimitiveConstrained_AccelerationLocalWaterMass_MAX = 299792458.0

UMAA.Common.PrimitiveConstrained.AccelerationLocalWaterMass_MAX = UMAA_Common_PrimitiveConstrained_AccelerationLocalWaterMass_MAX

UMAA_Common_PrimitiveConstrained_AccelerationLocalWaterMass = float

UMAA.Common.PrimitiveConstrained.AccelerationLocalWaterMass = UMAA_Common_PrimitiveConstrained_AccelerationLocalWaterMass

UMAA_Common_PrimitiveConstrained_AirTemperature_MIN = -100.0

UMAA.Common.PrimitiveConstrained.AirTemperature_MIN = UMAA_Common_PrimitiveConstrained_AirTemperature_MIN

UMAA_Common_PrimitiveConstrained_AirTemperature_MAX = 100.0

UMAA.Common.PrimitiveConstrained.AirTemperature_MAX = UMAA_Common_PrimitiveConstrained_AirTemperature_MAX

UMAA_Common_PrimitiveConstrained_AirTemperature = float

UMAA.Common.PrimitiveConstrained.AirTemperature = UMAA_Common_PrimitiveConstrained_AirTemperature

UMAA_Common_PrimitiveConstrained_AngleAcceleration_MIN = -10000.0

UMAA.Common.PrimitiveConstrained.AngleAcceleration_MIN = UMAA_Common_PrimitiveConstrained_AngleAcceleration_MIN

UMAA_Common_PrimitiveConstrained_AngleAcceleration_MAX = 10000.0

UMAA.Common.PrimitiveConstrained.AngleAcceleration_MAX = UMAA_Common_PrimitiveConstrained_AngleAcceleration_MAX

UMAA_Common_PrimitiveConstrained_AngleAcceleration = float

UMAA.Common.PrimitiveConstrained.AngleAcceleration = UMAA_Common_PrimitiveConstrained_AngleAcceleration

UMAA_Common_PrimitiveConstrained_BearingAngle_MIN = -6.28318530718

UMAA.Common.PrimitiveConstrained.BearingAngle_MIN = UMAA_Common_PrimitiveConstrained_BearingAngle_MIN

UMAA_Common_PrimitiveConstrained_BearingAngle_MAX = 6.28318530718

UMAA.Common.PrimitiveConstrained.BearingAngle_MAX = UMAA_Common_PrimitiveConstrained_BearingAngle_MAX

UMAA_Common_PrimitiveConstrained_BearingAngle = float

UMAA.Common.PrimitiveConstrained.BearingAngle = UMAA_Common_PrimitiveConstrained_BearingAngle

UMAA_Common_PrimitiveConstrained_CarrierToNoiseDensityRatio_MIN = 0.0

UMAA.Common.PrimitiveConstrained.CarrierToNoiseDensityRatio_MIN = UMAA_Common_PrimitiveConstrained_CarrierToNoiseDensityRatio_MIN

UMAA_Common_PrimitiveConstrained_CarrierToNoiseDensityRatio_MAX = 1000000.0

UMAA.Common.PrimitiveConstrained.CarrierToNoiseDensityRatio_MAX = UMAA_Common_PrimitiveConstrained_CarrierToNoiseDensityRatio_MAX

UMAA_Common_PrimitiveConstrained_CarrierToNoiseDensityRatio = float

UMAA.Common.PrimitiveConstrained.CarrierToNoiseDensityRatio = UMAA_Common_PrimitiveConstrained_CarrierToNoiseDensityRatio

UMAA_Common_PrimitiveConstrained_ColorComponent_MIN = 0

UMAA.Common.PrimitiveConstrained.ColorComponent_MIN = UMAA_Common_PrimitiveConstrained_ColorComponent_MIN

UMAA_Common_PrimitiveConstrained_ColorComponent_MAX = 255

UMAA.Common.PrimitiveConstrained.ColorComponent_MAX = UMAA_Common_PrimitiveConstrained_ColorComponent_MAX

UMAA_Common_PrimitiveConstrained_ColorComponent = idl.int32

UMAA.Common.PrimitiveConstrained.ColorComponent = UMAA_Common_PrimitiveConstrained_ColorComponent

UMAA_Common_PrimitiveConstrained_ContactUncertainty = float

UMAA.Common.PrimitiveConstrained.ContactUncertainty = UMAA_Common_PrimitiveConstrained_ContactUncertainty

UMAA_Common_PrimitiveConstrained_CovarAccelPlatformXYZ_MIN = -10000.0

UMAA.Common.PrimitiveConstrained.CovarAccelPlatformXYZ_MIN = UMAA_Common_PrimitiveConstrained_CovarAccelPlatformXYZ_MIN

UMAA_Common_PrimitiveConstrained_CovarAccelPlatformXYZ_MAX = 10000.0

UMAA.Common.PrimitiveConstrained.CovarAccelPlatformXYZ_MAX = UMAA_Common_PrimitiveConstrained_CovarAccelPlatformXYZ_MAX

UMAA_Common_PrimitiveConstrained_CovarAccelPlatformXYZ = float

UMAA.Common.PrimitiveConstrained.CovarAccelPlatformXYZ = UMAA_Common_PrimitiveConstrained_CovarAccelPlatformXYZ

UMAA_Common_PrimitiveConstrained_CovarOrientationAccelPlatformXYZ_MIN = -100.0

UMAA.Common.PrimitiveConstrained.CovarOrientationAccelPlatformXYZ_MIN = UMAA_Common_PrimitiveConstrained_CovarOrientationAccelPlatformXYZ_MIN

UMAA_Common_PrimitiveConstrained_CovarOrientationAccelPlatformXYZ_MAX = 100.0

UMAA.Common.PrimitiveConstrained.CovarOrientationAccelPlatformXYZ_MAX = UMAA_Common_PrimitiveConstrained_CovarOrientationAccelPlatformXYZ_MAX

UMAA_Common_PrimitiveConstrained_CovarOrientationAccelPlatformXYZ = float

UMAA.Common.PrimitiveConstrained.CovarOrientationAccelPlatformXYZ = UMAA_Common_PrimitiveConstrained_CovarOrientationAccelPlatformXYZ

UMAA_Common_PrimitiveConstrained_CovarOrientationNED_MIN = -10000.0

UMAA.Common.PrimitiveConstrained.CovarOrientationNED_MIN = UMAA_Common_PrimitiveConstrained_CovarOrientationNED_MIN

UMAA_Common_PrimitiveConstrained_CovarOrientationNED_MAX = 10000.0

UMAA.Common.PrimitiveConstrained.CovarOrientationNED_MAX = UMAA_Common_PrimitiveConstrained_CovarOrientationNED_MAX

UMAA_Common_PrimitiveConstrained_CovarOrientationNED = float

UMAA.Common.PrimitiveConstrained.CovarOrientationNED = UMAA_Common_PrimitiveConstrained_CovarOrientationNED

UMAA_Common_PrimitiveConstrained_CovarOrientationVelNED_MIN = -10000.0

UMAA.Common.PrimitiveConstrained.CovarOrientationVelNED_MIN = UMAA_Common_PrimitiveConstrained_CovarOrientationVelNED_MIN

UMAA_Common_PrimitiveConstrained_CovarOrientationVelNED_MAX = 10000.0

UMAA.Common.PrimitiveConstrained.CovarOrientationVelNED_MAX = UMAA_Common_PrimitiveConstrained_CovarOrientationVelNED_MAX

UMAA_Common_PrimitiveConstrained_CovarOrientationVelNED = float

UMAA.Common.PrimitiveConstrained.CovarOrientationVelNED = UMAA_Common_PrimitiveConstrained_CovarOrientationVelNED

UMAA_Common_PrimitiveConstrained_CovarPosECEF_MIN = -10000.0

UMAA.Common.PrimitiveConstrained.CovarPosECEF_MIN = UMAA_Common_PrimitiveConstrained_CovarPosECEF_MIN

UMAA_Common_PrimitiveConstrained_CovarPosECEF_MAX = 10000.0

UMAA.Common.PrimitiveConstrained.CovarPosECEF_MAX = UMAA_Common_PrimitiveConstrained_CovarPosECEF_MAX

UMAA_Common_PrimitiveConstrained_CovarPosECEF = float

UMAA.Common.PrimitiveConstrained.CovarPosECEF = UMAA_Common_PrimitiveConstrained_CovarPosECEF

UMAA_Common_PrimitiveConstrained_CovarPosNED_MIN = -10000.0

UMAA.Common.PrimitiveConstrained.CovarPosNED_MIN = UMAA_Common_PrimitiveConstrained_CovarPosNED_MIN

UMAA_Common_PrimitiveConstrained_CovarPosNED_MAX = 10000.0

UMAA.Common.PrimitiveConstrained.CovarPosNED_MAX = UMAA_Common_PrimitiveConstrained_CovarPosNED_MAX

UMAA_Common_PrimitiveConstrained_CovarPosNED = float

UMAA.Common.PrimitiveConstrained.CovarPosNED = UMAA_Common_PrimitiveConstrained_CovarPosNED

UMAA_Common_PrimitiveConstrained_CovarPosVelNED_MIN = -10000.0

UMAA.Common.PrimitiveConstrained.CovarPosVelNED_MIN = UMAA_Common_PrimitiveConstrained_CovarPosVelNED_MIN

UMAA_Common_PrimitiveConstrained_CovarPosVelNED_MAX = 10000.0

UMAA.Common.PrimitiveConstrained.CovarPosVelNED_MAX = UMAA_Common_PrimitiveConstrained_CovarPosVelNED_MAX

UMAA_Common_PrimitiveConstrained_CovarPosVelNED = float

UMAA.Common.PrimitiveConstrained.CovarPosVelNED = UMAA_Common_PrimitiveConstrained_CovarPosVelNED

UMAA_Common_PrimitiveConstrained_CovarVelNED_MIN = -10000.0

UMAA.Common.PrimitiveConstrained.CovarVelNED_MIN = UMAA_Common_PrimitiveConstrained_CovarVelNED_MIN

UMAA_Common_PrimitiveConstrained_CovarVelNED_MAX = 10000.0

UMAA.Common.PrimitiveConstrained.CovarVelNED_MAX = UMAA_Common_PrimitiveConstrained_CovarVelNED_MAX

UMAA_Common_PrimitiveConstrained_CovarVelNED = float

UMAA.Common.PrimitiveConstrained.CovarVelNED = UMAA_Common_PrimitiveConstrained_CovarVelNED

UMAA_Common_PrimitiveConstrained_DewPointTemperature_MIN = -100.0

UMAA.Common.PrimitiveConstrained.DewPointTemperature_MIN = UMAA_Common_PrimitiveConstrained_DewPointTemperature_MIN

UMAA_Common_PrimitiveConstrained_DewPointTemperature_MAX = 100.0

UMAA.Common.PrimitiveConstrained.DewPointTemperature_MAX = UMAA_Common_PrimitiveConstrained_DewPointTemperature_MAX

UMAA_Common_PrimitiveConstrained_DewPointTemperature = float

UMAA.Common.PrimitiveConstrained.DewPointTemperature = UMAA_Common_PrimitiveConstrained_DewPointTemperature

UMAA_Common_PrimitiveConstrained_GeodeticAltitude_MIN = -10000.0

UMAA.Common.PrimitiveConstrained.GeodeticAltitude_MIN = UMAA_Common_PrimitiveConstrained_GeodeticAltitude_MIN

UMAA_Common_PrimitiveConstrained_GeodeticAltitude_MAX = 700000.0

UMAA.Common.PrimitiveConstrained.GeodeticAltitude_MAX = UMAA_Common_PrimitiveConstrained_GeodeticAltitude_MAX

UMAA_Common_PrimitiveConstrained_GeodeticAltitude = float

UMAA.Common.PrimitiveConstrained.GeodeticAltitude = UMAA_Common_PrimitiveConstrained_GeodeticAltitude

UMAA_Common_PrimitiveConstrained_IlluminatorBeamWidth_MIN = 0.0

UMAA.Common.PrimitiveConstrained.IlluminatorBeamWidth_MIN = UMAA_Common_PrimitiveConstrained_IlluminatorBeamWidth_MIN

UMAA_Common_PrimitiveConstrained_IlluminatorBeamWidth_MAX = 6.28318530718

UMAA.Common.PrimitiveConstrained.IlluminatorBeamWidth_MAX = UMAA_Common_PrimitiveConstrained_IlluminatorBeamWidth_MAX

UMAA_Common_PrimitiveConstrained_IlluminatorBeamWidth = float

UMAA.Common.PrimitiveConstrained.IlluminatorBeamWidth = UMAA_Common_PrimitiveConstrained_IlluminatorBeamWidth

UMAA_Common_PrimitiveConstrained_IlluminatorIntensityLevel_MIN = 0.0

UMAA.Common.PrimitiveConstrained.IlluminatorIntensityLevel_MIN = UMAA_Common_PrimitiveConstrained_IlluminatorIntensityLevel_MIN

UMAA_Common_PrimitiveConstrained_IlluminatorIntensityLevel_MAX = 100.0

UMAA.Common.PrimitiveConstrained.IlluminatorIntensityLevel_MAX = UMAA_Common_PrimitiveConstrained_IlluminatorIntensityLevel_MAX

UMAA_Common_PrimitiveConstrained_IlluminatorIntensityLevel = float

UMAA.Common.PrimitiveConstrained.IlluminatorIntensityLevel = UMAA_Common_PrimitiveConstrained_IlluminatorIntensityLevel

UMAA_Common_PrimitiveConstrained_Left_MIN = -20000000.0

UMAA.Common.PrimitiveConstrained.Left_MIN = UMAA_Common_PrimitiveConstrained_Left_MIN

UMAA_Common_PrimitiveConstrained_Left_MAX = 20000000.0

UMAA.Common.PrimitiveConstrained.Left_MAX = UMAA_Common_PrimitiveConstrained_Left_MAX

UMAA_Common_PrimitiveConstrained_Left = float

UMAA.Common.PrimitiveConstrained.Left = UMAA_Common_PrimitiveConstrained_Left

UMAA_Common_PrimitiveConstrained_MaxEngineOilPressure_MIN = 0.0

UMAA.Common.PrimitiveConstrained.MaxEngineOilPressure_MIN = UMAA_Common_PrimitiveConstrained_MaxEngineOilPressure_MIN

UMAA_Common_PrimitiveConstrained_MaxEngineOilPressure_MAX = 512.0

UMAA.Common.PrimitiveConstrained.MaxEngineOilPressure_MAX = UMAA_Common_PrimitiveConstrained_MaxEngineOilPressure_MAX

UMAA_Common_PrimitiveConstrained_MaxEngineOilPressure = float

UMAA.Common.PrimitiveConstrained.MaxEngineOilPressure = UMAA_Common_PrimitiveConstrained_MaxEngineOilPressure

UMAA_Common_PrimitiveConstrained_MMSI = str

UMAA.Common.PrimitiveConstrained.MMSI = UMAA_Common_PrimitiveConstrained_MMSI

UMAA_Common_PrimitiveConstrained_NanosecondsCount_MIN = -9223372036854775807

UMAA.Common.PrimitiveConstrained.NanosecondsCount_MIN = UMAA_Common_PrimitiveConstrained_NanosecondsCount_MIN

UMAA_Common_PrimitiveConstrained_NanosecondsCount_MAX = 9223372036854775807

UMAA.Common.PrimitiveConstrained.NanosecondsCount_MAX = UMAA_Common_PrimitiveConstrained_NanosecondsCount_MAX

UMAA_Common_PrimitiveConstrained_NanosecondsCount = int

UMAA.Common.PrimitiveConstrained.NanosecondsCount = UMAA_Common_PrimitiveConstrained_NanosecondsCount

UMAA_Common_PrimitiveConstrained_NanosecondsDrift_MIN = -2147483648

UMAA.Common.PrimitiveConstrained.NanosecondsDrift_MIN = UMAA_Common_PrimitiveConstrained_NanosecondsDrift_MIN

UMAA_Common_PrimitiveConstrained_NanosecondsDrift_MAX = 2147483647

UMAA.Common.PrimitiveConstrained.NanosecondsDrift_MAX = UMAA_Common_PrimitiveConstrained_NanosecondsDrift_MAX

UMAA_Common_PrimitiveConstrained_NanosecondsDrift = idl.int32

UMAA.Common.PrimitiveConstrained.NanosecondsDrift = UMAA_Common_PrimitiveConstrained_NanosecondsDrift

UMAA_Common_PrimitiveConstrained_NaturalNumberCount_MIN = 0.0

UMAA.Common.PrimitiveConstrained.NaturalNumberCount_MIN = UMAA_Common_PrimitiveConstrained_NaturalNumberCount_MIN

UMAA_Common_PrimitiveConstrained_NaturalNumberCount_MAX = 9223372036854775807.0

UMAA.Common.PrimitiveConstrained.NaturalNumberCount_MAX = UMAA_Common_PrimitiveConstrained_NaturalNumberCount_MAX

UMAA_Common_PrimitiveConstrained_NaturalNumberCount = float

UMAA.Common.PrimitiveConstrained.NaturalNumberCount = UMAA_Common_PrimitiveConstrained_NaturalNumberCount

UMAA_Common_PrimitiveConstrained_PeakSoundPressureLevel_MIN = -400.0

UMAA.Common.PrimitiveConstrained.PeakSoundPressureLevel_MIN = UMAA_Common_PrimitiveConstrained_PeakSoundPressureLevel_MIN

UMAA_Common_PrimitiveConstrained_PeakSoundPressureLevel_MAX = 400.0

UMAA.Common.PrimitiveConstrained.PeakSoundPressureLevel_MAX = UMAA_Common_PrimitiveConstrained_PeakSoundPressureLevel_MAX

UMAA_Common_PrimitiveConstrained_PeakSoundPressureLevel = float

UMAA.Common.PrimitiveConstrained.PeakSoundPressureLevel = UMAA_Common_PrimitiveConstrained_PeakSoundPressureLevel

UMAA_Common_PrimitiveConstrained_Ratio = float

UMAA.Common.PrimitiveConstrained.Ratio = UMAA_Common_PrimitiveConstrained_Ratio

UMAA_Common_PrimitiveConstrained_SignalToNoiseRatio_MIN = 0.0

UMAA.Common.PrimitiveConstrained.SignalToNoiseRatio_MIN = UMAA_Common_PrimitiveConstrained_SignalToNoiseRatio_MIN

UMAA_Common_PrimitiveConstrained_SignalToNoiseRatio_MAX = 100.0

UMAA.Common.PrimitiveConstrained.SignalToNoiseRatio_MAX = UMAA_Common_PrimitiveConstrained_SignalToNoiseRatio_MAX

UMAA_Common_PrimitiveConstrained_SignalToNoiseRatio = float

UMAA.Common.PrimitiveConstrained.SignalToNoiseRatio = UMAA_Common_PrimitiveConstrained_SignalToNoiseRatio

UMAA_Common_PrimitiveConstrained_SpeedBSLAcceleration_MIN = -299792458.0

UMAA.Common.PrimitiveConstrained.SpeedBSLAcceleration_MIN = UMAA_Common_PrimitiveConstrained_SpeedBSLAcceleration_MIN

UMAA_Common_PrimitiveConstrained_SpeedBSLAcceleration_MAX = 299792458.0

UMAA.Common.PrimitiveConstrained.SpeedBSLAcceleration_MAX = UMAA_Common_PrimitiveConstrained_SpeedBSLAcceleration_MAX

UMAA_Common_PrimitiveConstrained_SpeedBSLAcceleration = float

UMAA.Common.PrimitiveConstrained.SpeedBSLAcceleration = UMAA_Common_PrimitiveConstrained_SpeedBSLAcceleration

UMAA_Common_PrimitiveConstrained_StringLongDescription = str

UMAA.Common.PrimitiveConstrained.StringLongDescription = UMAA_Common_PrimitiveConstrained_StringLongDescription

UMAA_Common_PrimitiveConstrained_StringName = str

UMAA.Common.PrimitiveConstrained.StringName = UMAA_Common_PrimitiveConstrained_StringName

UMAA_Common_PrimitiveConstrained_StringShortDescription = str

UMAA.Common.PrimitiveConstrained.StringShortDescription = UMAA_Common_PrimitiveConstrained_StringShortDescription

UMAA_Common_PrimitiveConstrained_StringValue = str

UMAA.Common.PrimitiveConstrained.StringValue = UMAA_Common_PrimitiveConstrained_StringValue

UMAA_Common_PrimitiveConstrained_UniformResourceIdentifier = str

UMAA.Common.PrimitiveConstrained.UniformResourceIdentifier = UMAA_Common_PrimitiveConstrained_UniformResourceIdentifier

UMAA_Common_PrimitiveConstrained_WaterTemperature_MIN = -22.0

UMAA.Common.PrimitiveConstrained.WaterTemperature_MIN = UMAA_Common_PrimitiveConstrained_WaterTemperature_MIN

UMAA_Common_PrimitiveConstrained_WaterTemperature_MAX = 100.0

UMAA.Common.PrimitiveConstrained.WaterTemperature_MAX = UMAA_Common_PrimitiveConstrained_WaterTemperature_MAX

UMAA_Common_PrimitiveConstrained_WaterTemperature = float

UMAA.Common.PrimitiveConstrained.WaterTemperature = UMAA_Common_PrimitiveConstrained_WaterTemperature

UMAA_Common_PrimitiveConstrained_WeatherBarometricPressure_MIN = 600.0

UMAA.Common.PrimitiveConstrained.WeatherBarometricPressure_MIN = UMAA_Common_PrimitiveConstrained_WeatherBarometricPressure_MIN

UMAA_Common_PrimitiveConstrained_WeatherBarometricPressure_MAX = 1200.0

UMAA.Common.PrimitiveConstrained.WeatherBarometricPressure_MAX = UMAA_Common_PrimitiveConstrained_WeatherBarometricPressure_MAX

UMAA_Common_PrimitiveConstrained_WeatherBarometricPressure = float

UMAA.Common.PrimitiveConstrained.WeatherBarometricPressure = UMAA_Common_PrimitiveConstrained_WeatherBarometricPressure

UMAA_Common_PrimitiveConstrained_XPosition = float

UMAA.Common.PrimitiveConstrained.XPosition = UMAA_Common_PrimitiveConstrained_XPosition

UMAA_Common_PrimitiveConstrained_YPosition = float

UMAA.Common.PrimitiveConstrained.YPosition = UMAA_Common_PrimitiveConstrained_YPosition

UMAA_Common_PrimitiveConstrained_ZPosition_MIN = -100000.0

UMAA.Common.PrimitiveConstrained.ZPosition_MIN = UMAA_Common_PrimitiveConstrained_ZPosition_MIN

UMAA_Common_PrimitiveConstrained_ZPosition_MAX = 100000.0

UMAA.Common.PrimitiveConstrained.ZPosition_MAX = UMAA_Common_PrimitiveConstrained_ZPosition_MAX

UMAA_Common_PrimitiveConstrained_ZPosition = float

UMAA.Common.PrimitiveConstrained.ZPosition = UMAA_Common_PrimitiveConstrained_ZPosition
