"""Auto-generated field range table from UMAA IDL files.

DO NOT EDIT — regenerate with: python -m tools.generate_field_ranges
"""

from __future__ import annotations

from typing import Dict, Tuple, Union

NumericRange = Tuple[Union[int, float], Union[int, float]]

# (struct_fqn, member_name) -> (min_value, max_value)
FIELD_RANGES: Dict[Tuple[str, str], NumericRange] = {
    # UMAA::CO::CommsChannel::CommsChannelMessageConfigType
    ("UMAA::CO::CommsChannel::CommsChannelMessageConfigType", "deadline"): (0.0, 37817280.0),
    ("UMAA::CO::CommsChannel::CommsChannelMessageConfigType", "priority"): (0, 255),

    # UMAA::CO::CommsChannel::CommsChannelMessageType
    ("UMAA::CO::CommsChannel::CommsChannelMessageType", "messageSize"): (0, 1000000000),

    # UMAA::CO::CommsChannel::CommsChannelReceiverStatisticsType
    ("UMAA::CO::CommsChannel::CommsChannelReceiverStatisticsType", "countBytes"): (0, 1000000000),
    ("UMAA::CO::CommsChannel::CommsChannelReceiverStatisticsType", "duration"): (0.0, 37817280.0),
    ("UMAA::CO::CommsChannel::CommsChannelReceiverStatisticsType", "numMessages"): (-2147483648, 2147483647),

    # UMAA::CO::CommsChannel::CommsChannelSenderStatisticsType
    ("UMAA::CO::CommsChannel::CommsChannelSenderStatisticsType", "countBytes"): (0, 1000000000),
    ("UMAA::CO::CommsChannel::CommsChannelSenderStatisticsType", "duration"): (0.0, 37817280.0),
    ("UMAA::CO::CommsChannel::CommsChannelSenderStatisticsType", "numMessages"): (-2147483648, 2147483647),

    # UMAA::CO::CommsChannelDataEncodingReport::CommsChannelDataEncodingReportType
    ("UMAA::CO::CommsChannelDataEncodingReport::CommsChannelDataEncodingReportType", "throughput"): (0.0, float('inf')),

    # UMAA::CO::CommsChannelEnvironmentReport::CommsChannelEnvironmentReportType
    ("UMAA::CO::CommsChannelEnvironmentReport::CommsChannelEnvironmentReportType", "mostRecentSNR"): (0.0, 100.0),

    # UMAA::CO::CommsChannelPowerConfig::CommsChannelPowerConfigCommandType
    ("UMAA::CO::CommsChannelPowerConfig::CommsChannelPowerConfigCommandType", "maxTransmitPowerUsage"): (0.0, 100000000.0),

    # UMAA::CO::CommsChannelPowerConfig::CommsChannelPowerConfigReportType
    ("UMAA::CO::CommsChannelPowerConfig::CommsChannelPowerConfigReportType", "maxTransmitPowerUsage"): (0.0, 100000000.0),

    # UMAA::CO::CommsChannelPowerReport::CommsChannelPowerReportType
    ("UMAA::CO::CommsChannelPowerReport::CommsChannelPowerReportType", "mostRecentPowerUsage"): (0.0, 100000000.0),

    # UMAA::CO::CommsChannelSpecs::CommsChannelSpecsReportType
    ("UMAA::CO::CommsChannelSpecs::CommsChannelSpecsReportType", "bufferSize"): (0, 1000000000),
    ("UMAA::CO::CommsChannelSpecs::CommsChannelSpecsReportType", "maxTransmitPower"): (0.0, 100000000.0),
    ("UMAA::CO::CommsChannelSpecs::CommsChannelSpecsReportType", "minimumSNR"): (0.0, 100.0),

    # UMAA::CO::CommsChannelSpecs::FrequencyRangeType
    ("UMAA::CO::CommsChannelSpecs::FrequencyRangeType", "maximum"): (0.0, 10000000000.0),
    ("UMAA::CO::CommsChannelSpecs::FrequencyRangeType", "minimum"): (0.0, 10000000000.0),

    # UMAA::CO::CommsChannelStatus::CommsChannelReceiverReportType
    ("UMAA::CO::CommsChannelStatus::CommsChannelReceiverReportType", "messageSNR"): (0.0, 100.0),
    ("UMAA::CO::CommsChannelStatus::CommsChannelReceiverReportType", "messageSize"): (0, 1000000000),

    # UMAA::CO::CommsChannelStatus::CommsChannelReportType
    ("UMAA::CO::CommsChannelStatus::CommsChannelReportType", "downTime"): (0.0, 37817280.0),

    # UMAA::CO::CommsChannelStatus::CommsChannelSenderReportType
    ("UMAA::CO::CommsChannelStatus::CommsChannelSenderReportType", "bufferPercentFull"): (0.0, 1000.0),

    # UMAA::CO::Filter::DecimateStructureFilterType
    ("UMAA::CO::Filter::DecimateStructureFilterType", "waitTime"): (0.0, 37817280.0),

    # UMAA::Common::Angle::GammaAnglePropulsorRequirementType
    ("UMAA::Common::Angle::GammaAnglePropulsorRequirementType", "gammaAnglePropulsor"): (-6.28318530718, 6.28318530718),

    # UMAA::Common::Angle::GammaAnglePropulsorToleranceType
    ("UMAA::Common::Angle::GammaAnglePropulsorToleranceType", "failureDelay"): (0.0, 37817280.0),
    ("UMAA::Common::Angle::GammaAnglePropulsorToleranceType", "lowerlimit"): (-6.28318530718, 6.28318530718),
    ("UMAA::Common::Angle::GammaAnglePropulsorToleranceType", "upperlimit"): (-6.28318530718, 6.28318530718),

    # UMAA::Common::Angle::PropellerPitchAnglePropulsorRequirementType
    ("UMAA::Common::Angle::PropellerPitchAnglePropulsorRequirementType", "propellerPitchAnglePropulsor"): (-6.28318530718, 6.28318530718),

    # UMAA::Common::Angle::PropellerPitchAnglePropulsorToleranceType
    ("UMAA::Common::Angle::PropellerPitchAnglePropulsorToleranceType", "failureDelay"): (0.0, 37817280.0),
    ("UMAA::Common::Angle::PropellerPitchAnglePropulsorToleranceType", "lowerlimit"): (-6.28318530718, 6.28318530718),
    ("UMAA::Common::Angle::PropellerPitchAnglePropulsorToleranceType", "upperlimit"): (-6.28318530718, 6.28318530718),

    # UMAA::Common::Angle::RhoAnglePropulsorRequirementType
    ("UMAA::Common::Angle::RhoAnglePropulsorRequirementType", "rhoAnglePropulsor"): (-6.28318530718, 6.28318530718),

    # UMAA::Common::Angle::RhoAnglePropulsorToleranceType
    ("UMAA::Common::Angle::RhoAnglePropulsorToleranceType", "failureDelay"): (0.0, 37817280.0),
    ("UMAA::Common::Angle::RhoAnglePropulsorToleranceType", "lowerlimit"): (-6.28318530718, 6.28318530718),
    ("UMAA::Common::Angle::RhoAnglePropulsorToleranceType", "upperlimit"): (-6.28318530718, 6.28318530718),

    # UMAA::Common::Distance::DistanceRequirementType
    ("UMAA::Common::Distance::DistanceRequirementType", "distance"): (0.0, 401056000.0),

    # UMAA::Common::Distance::DistanceToleranceType
    ("UMAA::Common::Distance::DistanceToleranceType", "failureDelay"): (0.0, 37817280.0),
    ("UMAA::Common::Distance::DistanceToleranceType", "limit"): (0.0, 401056000.0),

    # UMAA::Common::Environment::DepthSpeedPairType
    ("UMAA::Common::Environment::DepthSpeedPairType", "depth"): (0.0, 10000.0),
    ("UMAA::Common::Environment::DepthSpeedPairType", "soundSpeed"): (0.0, 299792458.0),

    # UMAA::Common::Environment::PoseType
    ("UMAA::Common::Environment::PoseType", "altitude"): (0.0, float('inf')),
    ("UMAA::Common::Environment::PoseType", "altitudeAGL"): (0.0, float('inf')),
    ("UMAA::Common::Environment::PoseType", "altitudeASF"): (0.0, 401056000.0),
    ("UMAA::Common::Environment::PoseType", "altitudeGeodetic"): (-10000.0, 700000.0),
    ("UMAA::Common::Environment::PoseType", "course"): (-6.28318530718, 6.28318530718),
    ("UMAA::Common::Environment::PoseType", "depth"): (0.0, 10000.0),

    # UMAA::Common::Environment::WorldTransformType
    ("UMAA::Common::Environment::WorldTransformType", "pixelSizex"): (0.0, 401056000.0),
    ("UMAA::Common::Environment::WorldTransformType", "pixelSizey"): (0.0, 401056000.0),
    ("UMAA::Common::Environment::WorldTransformType", "rotationx"): (-3.141592653589793, 3.141592653589793),
    ("UMAA::Common::Environment::WorldTransformType", "rotationy"): (-3.141592653589793, 3.141592653589793),
    ("UMAA::Common::Environment::WorldTransformType", "upperLeftCoordinatex"): (0.0, 401056000.0),
    ("UMAA::Common::Environment::WorldTransformType", "upperLeftCoordinatey"): (0.0, 401056000.0),

    # UMAA::Common::Measurement::Acceleration3DPlatformXYZ
    ("UMAA::Common::Measurement::Acceleration3DPlatformXYZ", "xAccel"): (-1310.68, 1310.68),
    ("UMAA::Common::Measurement::Acceleration3DPlatformXYZ", "yAccel"): (-1310.68, 1310.68),
    ("UMAA::Common::Measurement::Acceleration3DPlatformXYZ", "zAccel"): (-1310.68, 1310.68),

    # UMAA::Common::Measurement::AltitudeAGLRequirementType
    ("UMAA::Common::Measurement::AltitudeAGLRequirementType", "altitude"): (0.0, float('inf')),

    # UMAA::Common::Measurement::AltitudeAGLToleranceType
    ("UMAA::Common::Measurement::AltitudeAGLToleranceType", "failureDelay"): (0.0, 37817280.0),
    ("UMAA::Common::Measurement::AltitudeAGLToleranceType", "lowerLimit"): (0.0, float('inf')),
    ("UMAA::Common::Measurement::AltitudeAGLToleranceType", "upperlimit"): (0.0, float('inf')),

    # UMAA::Common::Measurement::AltitudeAGLVariantType
    ("UMAA::Common::Measurement::AltitudeAGLVariantType", "altitude"): (0.0, float('inf')),

    # UMAA::Common::Measurement::AltitudeASFRequirementType
    ("UMAA::Common::Measurement::AltitudeASFRequirementType", "altitude"): (0.0, 401056000.0),

    # UMAA::Common::Measurement::AltitudeASFToleranceType
    ("UMAA::Common::Measurement::AltitudeASFToleranceType", "failureDelay"): (0.0, 37817280.0),
    ("UMAA::Common::Measurement::AltitudeASFToleranceType", "lowerLimit"): (0.0, 401056000.0),
    ("UMAA::Common::Measurement::AltitudeASFToleranceType", "upperlimit"): (0.0, 401056000.0),

    # UMAA::Common::Measurement::AltitudeASFVariantType
    ("UMAA::Common::Measurement::AltitudeASFVariantType", "altitude"): (0.0, 401056000.0),

    # UMAA::Common::Measurement::AltitudeGeodeticRequirementType
    ("UMAA::Common::Measurement::AltitudeGeodeticRequirementType", "altitude"): (-10000.0, 700000.0),

    # UMAA::Common::Measurement::AltitudeGeodeticToleranceType
    ("UMAA::Common::Measurement::AltitudeGeodeticToleranceType", "failureDelay"): (0.0, 37817280.0),
    ("UMAA::Common::Measurement::AltitudeGeodeticToleranceType", "lowerLimit"): (-10000.0, 700000.0),
    ("UMAA::Common::Measurement::AltitudeGeodeticToleranceType", "upperlimit"): (-10000.0, 700000.0),

    # UMAA::Common::Measurement::AltitudeGeodeticVariantType
    ("UMAA::Common::Measurement::AltitudeGeodeticVariantType", "altitude"): (-10000.0, 700000.0),

    # UMAA::Common::Measurement::AltitudeMSLRequirementType
    ("UMAA::Common::Measurement::AltitudeMSLRequirementType", "altitude"): (0.0, float('inf')),

    # UMAA::Common::Measurement::AltitudeMSLToleranceType
    ("UMAA::Common::Measurement::AltitudeMSLToleranceType", "failureDelay"): (0.0, 37817280.0),
    ("UMAA::Common::Measurement::AltitudeMSLToleranceType", "lowerLimit"): (0.0, float('inf')),
    ("UMAA::Common::Measurement::AltitudeMSLToleranceType", "upperlimit"): (0.0, float('inf')),

    # UMAA::Common::Measurement::AltitudeMSLVariantType
    ("UMAA::Common::Measurement::AltitudeMSLVariantType", "altitude"): (0.0, float('inf')),

    # UMAA::Common::Measurement::AltitudeRateASFRequirementType
    ("UMAA::Common::Measurement::AltitudeRateASFRequirementType", "altitudeRate"): (-299792458.0, 299792458.0),

    # UMAA::Common::Measurement::AltitudeRateASFToleranceType
    ("UMAA::Common::Measurement::AltitudeRateASFToleranceType", "failureDelay"): (0.0, 37817280.0),
    ("UMAA::Common::Measurement::AltitudeRateASFToleranceType", "lowerLimit"): (-299792458.0, 299792458.0),
    ("UMAA::Common::Measurement::AltitudeRateASFToleranceType", "upperlimit"): (-299792458.0, 299792458.0),

    # UMAA::Common::Measurement::BallastMassType
    ("UMAA::Common::Measurement::BallastMassType", "mass"): (0.0, 100000000.0),

    # UMAA::Common::Measurement::CovarianceAccelerationPlatformXYZType
    ("UMAA::Common::Measurement::CovarianceAccelerationPlatformXYZType", "axAx"): (-10000.0, 10000.0),
    ("UMAA::Common::Measurement::CovarianceAccelerationPlatformXYZType", "axAy"): (-10000.0, 10000.0),
    ("UMAA::Common::Measurement::CovarianceAccelerationPlatformXYZType", "axAz"): (-10000.0, 10000.0),
    ("UMAA::Common::Measurement::CovarianceAccelerationPlatformXYZType", "ayAy"): (-10000.0, 10000.0),
    ("UMAA::Common::Measurement::CovarianceAccelerationPlatformXYZType", "ayAz"): (-10000.0, 10000.0),
    ("UMAA::Common::Measurement::CovarianceAccelerationPlatformXYZType", "azAz"): (-10000.0, 10000.0),

    # UMAA::Common::Measurement::CovarianceOrientationAccelerationPlatformXYZType
    ("UMAA::Common::Measurement::CovarianceOrientationAccelerationPlatformXYZType", "rxRx"): (-100.0, 100.0),
    ("UMAA::Common::Measurement::CovarianceOrientationAccelerationPlatformXYZType", "rxRy"): (-100.0, 100.0),
    ("UMAA::Common::Measurement::CovarianceOrientationAccelerationPlatformXYZType", "rxRz"): (-100.0, 100.0),
    ("UMAA::Common::Measurement::CovarianceOrientationAccelerationPlatformXYZType", "ryRy"): (-100.0, 100.0),
    ("UMAA::Common::Measurement::CovarianceOrientationAccelerationPlatformXYZType", "ryRz"): (-100.0, 100.0),
    ("UMAA::Common::Measurement::CovarianceOrientationAccelerationPlatformXYZType", "rzRz"): (-100.0, 100.0),

    # UMAA::Common::Measurement::CovarianceOrientationNEDType
    ("UMAA::Common::Measurement::CovarianceOrientationNEDType", "rpRp"): (-10000.0, 10000.0),
    ("UMAA::Common::Measurement::CovarianceOrientationNEDType", "rpRy"): (-10000.0, 10000.0),
    ("UMAA::Common::Measurement::CovarianceOrientationNEDType", "rrRp"): (-10000.0, 10000.0),
    ("UMAA::Common::Measurement::CovarianceOrientationNEDType", "rrRr"): (-10000.0, 10000.0),
    ("UMAA::Common::Measurement::CovarianceOrientationNEDType", "rrRy"): (-10000.0, 10000.0),
    ("UMAA::Common::Measurement::CovarianceOrientationNEDType", "ryRy"): (-10000.0, 10000.0),

    # UMAA::Common::Measurement::CovarianceOrientationVelocityNEDType
    ("UMAA::Common::Measurement::CovarianceOrientationVelocityNEDType", "rpRp"): (-10000.0, 10000.0),
    ("UMAA::Common::Measurement::CovarianceOrientationVelocityNEDType", "rpRy"): (-10000.0, 10000.0),
    ("UMAA::Common::Measurement::CovarianceOrientationVelocityNEDType", "rrRp"): (-10000.0, 10000.0),
    ("UMAA::Common::Measurement::CovarianceOrientationVelocityNEDType", "rrRr"): (-10000.0, 10000.0),
    ("UMAA::Common::Measurement::CovarianceOrientationVelocityNEDType", "rrRy"): (-10000.0, 10000.0),
    ("UMAA::Common::Measurement::CovarianceOrientationVelocityNEDType", "ryRy"): (-10000.0, 10000.0),

    # UMAA::Common::Measurement::CovariancePositionECEFType
    ("UMAA::Common::Measurement::CovariancePositionECEFType", "pxPx"): (-10000.0, 10000.0),
    ("UMAA::Common::Measurement::CovariancePositionECEFType", "pxPy"): (-10000.0, 10000.0),
    ("UMAA::Common::Measurement::CovariancePositionECEFType", "pxPz"): (-10000.0, 10000.0),
    ("UMAA::Common::Measurement::CovariancePositionECEFType", "pyPy"): (-10000.0, 10000.0),
    ("UMAA::Common::Measurement::CovariancePositionECEFType", "pyPz"): (-10000.0, 10000.0),
    ("UMAA::Common::Measurement::CovariancePositionECEFType", "pzPz"): (-10000.0, 10000.0),

    # UMAA::Common::Measurement::CovariancePositionNEDType
    ("UMAA::Common::Measurement::CovariancePositionNEDType", "pdPd"): (-10000.0, 10000.0),
    ("UMAA::Common::Measurement::CovariancePositionNEDType", "pePd"): (-10000.0, 10000.0),
    ("UMAA::Common::Measurement::CovariancePositionNEDType", "pePe"): (-10000.0, 10000.0),
    ("UMAA::Common::Measurement::CovariancePositionNEDType", "pnPd"): (-10000.0, 10000.0),
    ("UMAA::Common::Measurement::CovariancePositionNEDType", "pnPe"): (-10000.0, 10000.0),
    ("UMAA::Common::Measurement::CovariancePositionNEDType", "pnPn"): (-10000.0, 10000.0),

    # UMAA::Common::Measurement::CovariancePositionVelocityNEDType
    ("UMAA::Common::Measurement::CovariancePositionVelocityNEDType", "pdVd"): (-10000.0, 10000.0),
    ("UMAA::Common::Measurement::CovariancePositionVelocityNEDType", "pdVe"): (-10000.0, 10000.0),
    ("UMAA::Common::Measurement::CovariancePositionVelocityNEDType", "pdVn"): (-10000.0, 10000.0),
    ("UMAA::Common::Measurement::CovariancePositionVelocityNEDType", "peVd"): (-10000.0, 10000.0),
    ("UMAA::Common::Measurement::CovariancePositionVelocityNEDType", "peVe"): (-10000.0, 10000.0),
    ("UMAA::Common::Measurement::CovariancePositionVelocityNEDType", "peVn"): (-10000.0, 10000.0),
    ("UMAA::Common::Measurement::CovariancePositionVelocityNEDType", "pnVd"): (-10000.0, 10000.0),
    ("UMAA::Common::Measurement::CovariancePositionVelocityNEDType", "pnVe"): (-10000.0, 10000.0),
    ("UMAA::Common::Measurement::CovariancePositionVelocityNEDType", "pnVn"): (-10000.0, 10000.0),

    # UMAA::Common::Measurement::CovarianceVelocityNEDType
    ("UMAA::Common::Measurement::CovarianceVelocityNEDType", "vdVd"): (-10000.0, 10000.0),
    ("UMAA::Common::Measurement::CovarianceVelocityNEDType", "veVd"): (-10000.0, 10000.0),
    ("UMAA::Common::Measurement::CovarianceVelocityNEDType", "veVe"): (-10000.0, 10000.0),
    ("UMAA::Common::Measurement::CovarianceVelocityNEDType", "vnVd"): (-10000.0, 10000.0),
    ("UMAA::Common::Measurement::CovarianceVelocityNEDType", "vnVe"): (-10000.0, 10000.0),
    ("UMAA::Common::Measurement::CovarianceVelocityNEDType", "vnVn"): (-10000.0, 10000.0),

    # UMAA::Common::Measurement::DateTime
    ("UMAA::Common::Measurement::DateTime", "nanoseconds"): (0, 999999999),
    ("UMAA::Common::Measurement::DateTime", "seconds"): (-9223372036854775807, 9223372036854775807),

    # UMAA::Common::Measurement::DepthRateRequirementType
    ("UMAA::Common::Measurement::DepthRateRequirementType", "depthRate"): (-299792458.0, 299792458.0),

    # UMAA::Common::Measurement::DepthRateToleranceType
    ("UMAA::Common::Measurement::DepthRateToleranceType", "failureDelay"): (0.0, 37817280.0),
    ("UMAA::Common::Measurement::DepthRateToleranceType", "lowerLimit"): (-299792458.0, 299792458.0),
    ("UMAA::Common::Measurement::DepthRateToleranceType", "upperlimit"): (-299792458.0, 299792458.0),

    # UMAA::Common::Measurement::DepthRequirementType
    ("UMAA::Common::Measurement::DepthRequirementType", "depth"): (0.0, 10000.0),

    # UMAA::Common::Measurement::DepthToleranceType
    ("UMAA::Common::Measurement::DepthToleranceType", "failureDelay"): (0.0, 37817280.0),
    ("UMAA::Common::Measurement::DepthToleranceType", "lowerLimit"): (0.0, 10000.0),
    ("UMAA::Common::Measurement::DepthToleranceType", "upperlimit"): (0.0, 10000.0),

    # UMAA::Common::Measurement::DepthVariantType
    ("UMAA::Common::Measurement::DepthVariantType", "depth"): (0.0, 10000.0),

    # UMAA::Common::Measurement::GeoPosition2D
    ("UMAA::Common::Measurement::GeoPosition2D", "geodeticLatitude"): (-90.0, 90.0),
    ("UMAA::Common::Measurement::GeoPosition2D", "geodeticLongitude"): (-180.0, 180.0),

    # UMAA::Common::Measurement::GeoPosition3DWGS84
    ("UMAA::Common::Measurement::GeoPosition3DWGS84", "geodeticAltitude"): (-10000.0, 700000.0),

    # UMAA::Common::Measurement::LevelType
    ("UMAA::Common::Measurement::LevelType", "level"): (0.0, 1000.0),

    # UMAA::Common::Measurement::LinearEffort
    ("UMAA::Common::Measurement::LinearEffort", "xAxis"): (-100.0, 100.0),
    ("UMAA::Common::Measurement::LinearEffort", "yAxis"): (-100.0, 100.0),
    ("UMAA::Common::Measurement::LinearEffort", "zAxis"): (-100.0, 100.0),

    # UMAA::Common::Measurement::OrientationAcceleration3D
    ("UMAA::Common::Measurement::OrientationAcceleration3D", "pitchAccelY"): (-10000.0, 10000.0),
    ("UMAA::Common::Measurement::OrientationAcceleration3D", "rollAccelX"): (-10000.0, 10000.0),
    ("UMAA::Common::Measurement::OrientationAcceleration3D", "yawAccelZ"): (-10000.0, 10000.0),

    # UMAA::Common::Measurement::OrientationVel3D
    ("UMAA::Common::Measurement::OrientationVel3D", "pitchRate"): (-32.767, 32.767),
    ("UMAA::Common::Measurement::OrientationVel3D", "rollRate"): (-32.767, 32.767),
    ("UMAA::Common::Measurement::OrientationVel3D", "yawRate"): (-32.767, 32.767),

    # UMAA::Common::Measurement::Position3DBodyXYZ
    ("UMAA::Common::Measurement::Position3DBodyXYZ", "zAxis"): (-100000.0, 100000.0),

    # UMAA::Common::Measurement::RotationalEffort
    ("UMAA::Common::Measurement::RotationalEffort", "pitchEffort"): (-100.0, 100.0),
    ("UMAA::Common::Measurement::RotationalEffort", "rollEffort"): (-100.0, 100.0),
    ("UMAA::Common::Measurement::RotationalEffort", "yawEffort"): (-100.0, 100.0),

    # UMAA::Common::Measurement::Velocity3DPlatformNEDType
    ("UMAA::Common::Measurement::Velocity3DPlatformNEDType", "downSpeed"): (-299792458.0, 299792458.0),
    ("UMAA::Common::Measurement::Velocity3DPlatformNEDType", "eastSpeed"): (-299792458.0, 299792458.0),
    ("UMAA::Common::Measurement::Velocity3DPlatformNEDType", "northSpeed"): (-299792458.0, 299792458.0),

    # UMAA::Common::Orientation::AlphaXPlatformType
    ("UMAA::Common::Orientation::AlphaXPlatformType", "alpha"): (-6.28318530718, 6.28318530718),

    # UMAA::Common::Orientation::BearingSectorGuideCourseVariantType
    ("UMAA::Common::Orientation::BearingSectorGuideCourseVariantType", "endBearing"): (-6.28318530718, 6.28318530718),
    ("UMAA::Common::Orientation::BearingSectorGuideCourseVariantType", "startBearing"): (-6.28318530718, 6.28318530718),

    # UMAA::Common::Orientation::BearingSectorMagneticNorthVariantType
    ("UMAA::Common::Orientation::BearingSectorMagneticNorthVariantType", "endBearing"): (-6.28318530718, 6.28318530718),
    ("UMAA::Common::Orientation::BearingSectorMagneticNorthVariantType", "startBearing"): (-6.28318530718, 6.28318530718),

    # UMAA::Common::Orientation::BearingSectorTrueNorthVariantType
    ("UMAA::Common::Orientation::BearingSectorTrueNorthVariantType", "endBearing"): (-6.28318530718, 6.28318530718),
    ("UMAA::Common::Orientation::BearingSectorTrueNorthVariantType", "startBearing"): (-6.28318530718, 6.28318530718),

    # UMAA::Common::Orientation::BetaYPlatformType
    ("UMAA::Common::Orientation::BetaYPlatformType", "beta"): (-1.5707963267948966, 1.5707963267948966),

    # UMAA::Common::Orientation::DirectionCurrentRequirement
    ("UMAA::Common::Orientation::DirectionCurrentRequirement", "direction"): (-6.28318530718, 6.28318530718),

    # UMAA::Common::Orientation::DirectionCurrentVariantType
    ("UMAA::Common::Orientation::DirectionCurrentVariantType", "direction"): (-6.28318530718, 6.28318530718),

    # UMAA::Common::Orientation::DirectionMagneticNorthRequirement
    ("UMAA::Common::Orientation::DirectionMagneticNorthRequirement", "direction"): (-6.28318530718, 6.28318530718),

    # UMAA::Common::Orientation::DirectionMagneticNorthVariantType
    ("UMAA::Common::Orientation::DirectionMagneticNorthVariantType", "direction"): (-6.28318530718, 6.28318530718),

    # UMAA::Common::Orientation::DirectionToleranceType
    ("UMAA::Common::Orientation::DirectionToleranceType", "failureDelay"): (0.0, 37817280.0),
    ("UMAA::Common::Orientation::DirectionToleranceType", "lowerlimit"): (-3.141592653589793, 3.141592653589793),
    ("UMAA::Common::Orientation::DirectionToleranceType", "upperlimit"): (-3.141592653589793, 3.141592653589793),

    # UMAA::Common::Orientation::DirectionTrueNorthRequirement
    ("UMAA::Common::Orientation::DirectionTrueNorthRequirement", "direction"): (-6.28318530718, 6.28318530718),

    # UMAA::Common::Orientation::DirectionTrueNorthVariantType
    ("UMAA::Common::Orientation::DirectionTrueNorthVariantType", "direction"): (-6.28318530718, 6.28318530718),

    # UMAA::Common::Orientation::DirectionTurnRateRequirementType
    ("UMAA::Common::Orientation::DirectionTurnRateRequirementType", "directionRate"): (-32.767, 32.767),

    # UMAA::Common::Orientation::DirectionTurnRateToleranceType
    ("UMAA::Common::Orientation::DirectionTurnRateToleranceType", "failureDelay"): (0.0, 37817280.0),
    ("UMAA::Common::Orientation::DirectionTurnRateToleranceType", "lowerlimit"): (-32.767, 32.767),
    ("UMAA::Common::Orientation::DirectionTurnRateToleranceType", "upperlimit"): (-32.767, 32.767),

    # UMAA::Common::Orientation::DirectionWindRequirement
    ("UMAA::Common::Orientation::DirectionWindRequirement", "direction"): (-6.28318530718, 6.28318530718),

    # UMAA::Common::Orientation::DirectionWindVariantType
    ("UMAA::Common::Orientation::DirectionWindVariantType", "direction"): (-6.28318530718, 6.28318530718),

    # UMAA::Common::Orientation::GammaZPlatformType
    ("UMAA::Common::Orientation::GammaZPlatformType", "gamma"): (-6.28318530718, 6.28318530718),

    # UMAA::Common::Orientation::MagneticDeviationType
    ("UMAA::Common::Orientation::MagneticDeviationType", "heading"): (-6.28318530718, 6.28318530718),
    ("UMAA::Common::Orientation::MagneticDeviationType", "magneticDeviation"): (-6.28318530718, 6.28318530718),

    # UMAA::Common::Orientation::OrientationAcceleration3DPlatformXYZ
    ("UMAA::Common::Orientation::OrientationAcceleration3DPlatformXYZ", "xAccel"): (-10000.0, 10000.0),
    ("UMAA::Common::Orientation::OrientationAcceleration3DPlatformXYZ", "yAccel"): (-10000.0, 10000.0),
    ("UMAA::Common::Orientation::OrientationAcceleration3DPlatformXYZ", "zAccel"): (-10000.0, 10000.0),

    # UMAA::Common::Orientation::PitchYNEDTolerance
    ("UMAA::Common::Orientation::PitchYNEDTolerance", "failureDelay"): (0.0, 37817280.0),

    # UMAA::Common::Orientation::PitchYNEDType
    ("UMAA::Common::Orientation::PitchYNEDType", "pitch"): (-1.5707963267948966, 1.5707963267948966),

    # UMAA::Common::Orientation::RollXNEDTolerance
    ("UMAA::Common::Orientation::RollXNEDTolerance", "failureDelay"): (0.0, 37817280.0),

    # UMAA::Common::Orientation::RollXNEDType
    ("UMAA::Common::Orientation::RollXNEDType", "roll"): (-6.28318530718, 6.28318530718),

    # UMAA::Common::Orientation::YawZNEDTolerance
    ("UMAA::Common::Orientation::YawZNEDTolerance", "failureDelay"): (0.0, 37817280.0),

    # UMAA::Common::Orientation::YawZNEDType
    ("UMAA::Common::Orientation::YawZNEDType", "yaw"): (-6.28318530718, 6.28318530718),

    # UMAA::Common::Position::GeoPosition2DTolerance
    ("UMAA::Common::Position::GeoPosition2DTolerance", "failureDelay"): (0.0, 37817280.0),
    ("UMAA::Common::Position::GeoPosition2DTolerance", "limit"): (0.0, 401056000.0),

    # UMAA::Common::Propulsion::PropulsiveEffortType
    ("UMAA::Common::Propulsion::PropulsiveEffortType", "propulsiveEffort"): (-100.0, 100.0),

    # UMAA::Common::Propulsion::PropulsiveRPMType
    ("UMAA::Common::Propulsion::PropulsiveRPMType", "RPM"): (-100000, 100000),

    # UMAA::Common::Speed::AirSpeedRequirement
    ("UMAA::Common::Speed::AirSpeedRequirement", "speed"): (0.0, 299792458.0),

    # UMAA::Common::Speed::AirSpeedTolerance
    ("UMAA::Common::Speed::AirSpeedTolerance", "failureDelay"): (0.0, 37817280.0),
    ("UMAA::Common::Speed::AirSpeedTolerance", "lowerlimit"): (0.0, 299792458.0),
    ("UMAA::Common::Speed::AirSpeedTolerance", "upperlimit"): (0.0, 299792458.0),

    # UMAA::Common::Speed::AirSpeedVariantType
    ("UMAA::Common::Speed::AirSpeedVariantType", "speed"): (0.0, 299792458.0),

    # UMAA::Common::Speed::EngineRPMSpeedRequirement
    ("UMAA::Common::Speed::EngineRPMSpeedRequirement", "speed"): (-100000, 100000),

    # UMAA::Common::Speed::EngineRPMSpeedTolerance
    ("UMAA::Common::Speed::EngineRPMSpeedTolerance", "failureDelay"): (0.0, 37817280.0),
    ("UMAA::Common::Speed::EngineRPMSpeedTolerance", "lowerlimit"): (-100000, 100000),
    ("UMAA::Common::Speed::EngineRPMSpeedTolerance", "upperlimit"): (-100000, 100000),

    # UMAA::Common::Speed::EngineRPMSpeedVariantType
    ("UMAA::Common::Speed::EngineRPMSpeedVariantType", "rpm"): (-100000, 100000),

    # UMAA::Common::Speed::GroundSpeedRequirement
    ("UMAA::Common::Speed::GroundSpeedRequirement", "speed"): (-299792458.0, 299792458.0),

    # UMAA::Common::Speed::GroundSpeedTolerance
    ("UMAA::Common::Speed::GroundSpeedTolerance", "failureDelay"): (0.0, 37817280.0),
    ("UMAA::Common::Speed::GroundSpeedTolerance", "lowerlimit"): (-299792458.0, 299792458.0),
    ("UMAA::Common::Speed::GroundSpeedTolerance", "upperlimit"): (-299792458.0, 299792458.0),

    # UMAA::Common::Speed::GroundSpeedVariantType
    ("UMAA::Common::Speed::GroundSpeedVariantType", "speed"): (-299792458.0, 299792458.0),

    # UMAA::Common::Speed::WaterSpeedRequirement
    ("UMAA::Common::Speed::WaterSpeedRequirement", "speed"): (0.0, 299792458.0),

    # UMAA::Common::Speed::WaterSpeedTolerance
    ("UMAA::Common::Speed::WaterSpeedTolerance", "failureDelay"): (0.0, 37817280.0),
    ("UMAA::Common::Speed::WaterSpeedTolerance", "lowerlimit"): (0.0, 299792458.0),
    ("UMAA::Common::Speed::WaterSpeedTolerance", "upperlimit"): (0.0, 299792458.0),

    # UMAA::Common::Speed::WaterSpeedVariantType
    ("UMAA::Common::Speed::WaterSpeedVariantType", "speed"): (0.0, 299792458.0),

    # UMAA::Common::Time::DateTimeToleranceType
    ("UMAA::Common::Time::DateTimeToleranceType", "failureDelay"): (0.0, 37817280.0),

    # UMAA::EO::AnchorSpecs::AnchorSpecsReportType
    ("UMAA::EO::AnchorSpecs::AnchorSpecsReportType", "anchorHoldingPower"): (0.0, 100000000.0),
    ("UMAA::EO::AnchorSpecs::AnchorSpecsReportType", "anchorSize"): (0.0, 100000000.0),
    ("UMAA::EO::AnchorSpecs::AnchorSpecsReportType", "rodeLength"): (0.0, 401056000.0),
    ("UMAA::EO::AnchorSpecs::AnchorSpecsReportType", "rodeSize"): (0.0, 401056000.0),
    ("UMAA::EO::AnchorSpecs::AnchorSpecsReportType", "rodeWorkingLoadLimit"): (0.0, 100000000.0),

    # UMAA::EO::AnchorStatus::AnchorReportType
    ("UMAA::EO::AnchorStatus::AnchorReportType", "rodeLengthPaidOut"): (0.0, 401056000.0),

    # UMAA::EO::BallastTank::BallastPumpReportType
    ("UMAA::EO::BallastTank::BallastPumpReportType", "volumeFlowRate"): (-100000000.0, 100000000.0),

    # UMAA::EO::BallastTank::BallastPumpSpecsReportType
    ("UMAA::EO::BallastTank::BallastPumpSpecsReportType", "maxVolumeEmptyRate"): (-100000000.0, 100000000.0),
    ("UMAA::EO::BallastTank::BallastPumpSpecsReportType", "maxVolumeFillRate"): (-100000000.0, 100000000.0),
    ("UMAA::EO::BallastTank::BallastPumpSpecsReportType", "minVolumeEmptyRate"): (-100000000.0, 100000000.0),
    ("UMAA::EO::BallastTank::BallastPumpSpecsReportType", "minVolumeFillRate"): (-100000000.0, 100000000.0),

    # UMAA::EO::BallastTank::BallastTankReportType
    ("UMAA::EO::BallastTank::BallastTankReportType", "level"): (0.0, 1000.0),
    ("UMAA::EO::BallastTank::BallastTankReportType", "lowPressureLimit"): (0.0, 51200.0),
    ("UMAA::EO::BallastTank::BallastTankReportType", "mass"): (0.0, 100000000.0),
    ("UMAA::EO::BallastTank::BallastTankReportType", "pressure"): (0.0, 51200.0),
    ("UMAA::EO::BallastTank::BallastTankReportType", "pressureLimit"): (0.0, 51200.0),

    # UMAA::EO::BallastTank::BallastTankSpecsReportType
    ("UMAA::EO::BallastTank::BallastTankSpecsReportType", "massCapacity"): (0.0, 100000000.0),
    ("UMAA::EO::BallastTank::BallastTankSpecsReportType", "volumeCapacity"): (0.0, 1000.0),

    # UMAA::EO::BallastTank::VolumeBallastFlowRateType
    ("UMAA::EO::BallastTank::VolumeBallastFlowRateType", "volumeBallastFlowRate"): (-100000000.0, 100000000.0),

    # UMAA::EO::BatterySpecs::BatterySpecsReportType
    ("UMAA::EO::BatterySpecs::BatterySpecsReportType", "cellMinimumVoltage"): (-100000.0, 100000.0),
    ("UMAA::EO::BatterySpecs::BatterySpecsReportType", "maxCapacity"): (0.0, 3600000.0),
    ("UMAA::EO::BatterySpecs::BatterySpecsReportType", "maxChargingCurrent"): (-100000.0, 100000.0),
    ("UMAA::EO::BatterySpecs::BatterySpecsReportType", "maxChargingTemp"): (-273.0, 1000.0),
    ("UMAA::EO::BatterySpecs::BatterySpecsReportType", "maxOutputCurrent"): (-100000.0, 100000.0),
    ("UMAA::EO::BatterySpecs::BatterySpecsReportType", "maxPulsedChargeCurrent"): (0.0, 1000.0),
    ("UMAA::EO::BatterySpecs::BatterySpecsReportType", "maxPulsedChargeCurrentDuration"): (0.0, 20.0),
    ("UMAA::EO::BatterySpecs::BatterySpecsReportType", "maxStorageTemp"): (-273.0, 1000.0),
    ("UMAA::EO::BatterySpecs::BatterySpecsReportType", "maxTemperature"): (-273.0, 1000.0),
    ("UMAA::EO::BatterySpecs::BatterySpecsReportType", "maxVoltage"): (-100000.0, 100000.0),
    ("UMAA::EO::BatterySpecs::BatterySpecsReportType", "minChargeCycles"): (0.0, 10000.0),
    ("UMAA::EO::BatterySpecs::BatterySpecsReportType", "minChargingTemp"): (-273.0, 1000.0),
    ("UMAA::EO::BatterySpecs::BatterySpecsReportType", "minStorageTemp"): (-273.0, 1000.0),
    ("UMAA::EO::BatterySpecs::BatterySpecsReportType", "minTemperature"): (-273.0, 1000.0),
    ("UMAA::EO::BatterySpecs::BatterySpecsReportType", "minVoltage"): (-100000.0, 100000.0),
    ("UMAA::EO::BatterySpecs::BatterySpecsReportType", "nominalCapacity"): (0.0, 500.0),
    ("UMAA::EO::BatterySpecs::BatterySpecsReportType", "nominalEnergy"): (0.0, 900000.0),
    ("UMAA::EO::BatterySpecs::BatterySpecsReportType", "nominalVoltage"): (-100000.0, 100000.0),
    ("UMAA::EO::BatterySpecs::BatterySpecsReportType", "peakDischargeCurrent"): (-100000.0, 100000.0),

    # UMAA::EO::BatteryStatus::BatteryCellDataType
    ("UMAA::EO::BatteryStatus::BatteryCellDataType", "current"): (-100000.0, 100000.0),
    ("UMAA::EO::BatteryStatus::BatteryCellDataType", "temperature"): (-273.0, 1000.0),
    ("UMAA::EO::BatteryStatus::BatteryCellDataType", "voltage"): (-100000.0, 100000.0),

    # UMAA::EO::BatteryStatus::BatteryReportType
    ("UMAA::EO::BatteryStatus::BatteryReportType", "chargeRemaining"): (0.0, 1000.0),
    ("UMAA::EO::BatteryStatus::BatteryReportType", "current"): (-100000.0, 100000.0),
    ("UMAA::EO::BatteryStatus::BatteryReportType", "energyUsageRate"): (0.0, 100000000.0),
    ("UMAA::EO::BatteryStatus::BatteryReportType", "hours"): (0.0, 10505.0),
    ("UMAA::EO::BatteryStatus::BatteryReportType", "temp"): (-273.0, 1000.0),
    ("UMAA::EO::BatteryStatus::BatteryReportType", "voltage"): (-100000.0, 100000.0),

    # UMAA::EO::EngineSpecs::EngineSpecsReportType
    ("UMAA::EO::EngineSpecs::EngineSpecsReportType", "RPMLowerLimit"): (-100000.0, 100000.0),
    ("UMAA::EO::EngineSpecs::EngineSpecsReportType", "RPMMaxLimit"): (-100000.0, 100000.0),
    ("UMAA::EO::EngineSpecs::EngineSpecsReportType", "RPMUpperLimit"): (-100000.0, 100000.0),
    ("UMAA::EO::EngineSpecs::EngineSpecsReportType", "glowPlugTime"): (0.0, 37817280.0),
    ("UMAA::EO::EngineSpecs::EngineSpecsReportType", "maxCoolantLevel"): (0.0, 1000.0),
    ("UMAA::EO::EngineSpecs::EngineSpecsReportType", "maxCoolantPressure"): (0.0, 51200.0),
    ("UMAA::EO::EngineSpecs::EngineSpecsReportType", "maxCoolantTemp"): (-273.0, 1000.0),
    ("UMAA::EO::EngineSpecs::EngineSpecsReportType", "maxEngineTemp"): (-273.0, 1000.0),
    ("UMAA::EO::EngineSpecs::EngineSpecsReportType", "maxGlowPlugTemp"): (-273.0, 1000.0),
    ("UMAA::EO::EngineSpecs::EngineSpecsReportType", "maxManifoldAirTemp"): (-273.0, 1000.0),
    ("UMAA::EO::EngineSpecs::EngineSpecsReportType", "maxManifoldPressure"): (0.0, 51200.0),
    ("UMAA::EO::EngineSpecs::EngineSpecsReportType", "maxOilPressure"): (0.0, 512.0),
    ("UMAA::EO::EngineSpecs::EngineSpecsReportType", "maxOilTemp"): (-273.0, 1000.0),
    ("UMAA::EO::EngineSpecs::EngineSpecsReportType", "minCoolantLevel"): (0.0, 1000.0),
    ("UMAA::EO::EngineSpecs::EngineSpecsReportType", "minOilLevel"): (0.0, 1000.0),
    ("UMAA::EO::EngineSpecs::EngineSpecsReportType", "oilCapacity"): (0.0, 1000.0),
    ("UMAA::EO::EngineSpecs::EngineSpecsReportType", "reverseRPMLowerLimit"): (-100000.0, 100000.0),
    ("UMAA::EO::EngineSpecs::EngineSpecsReportType", "reverseRPMMaxLimit"): (-100000.0, 100000.0),
    ("UMAA::EO::EngineSpecs::EngineSpecsReportType", "reverseRPMUpperLimit"): (-100000.0, 100000.0),

    # UMAA::EO::EngineStatus::EngineReportType
    ("UMAA::EO::EngineStatus::EngineReportType", "RPM"): (-100000.0, 100000.0),
    ("UMAA::EO::EngineStatus::EngineReportType", "coolantLevel"): (0.0, 1000.0),
    ("UMAA::EO::EngineStatus::EngineReportType", "coolantPressure"): (0.0, 51200.0),
    ("UMAA::EO::EngineStatus::EngineReportType", "coolantTemp"): (-273.0, 1000.0),
    ("UMAA::EO::EngineStatus::EngineReportType", "engineTemp"): (-273.0, 1000.0),
    ("UMAA::EO::EngineStatus::EngineReportType", "exhaustTemp"): (-273.0, 1000.0),
    ("UMAA::EO::EngineStatus::EngineReportType", "glowPlugTemp"): (-273.0, 1000.0),
    ("UMAA::EO::EngineStatus::EngineReportType", "glowPlugTimeRemaining"): (0.0, 37817280.0),
    ("UMAA::EO::EngineStatus::EngineReportType", "hours"): (0.0, 10505.0),
    ("UMAA::EO::EngineStatus::EngineReportType", "manifoldAirTemp"): (-273.0, 1000.0),
    ("UMAA::EO::EngineStatus::EngineReportType", "manifoldPressure"): (0.0, 51200.0),
    ("UMAA::EO::EngineStatus::EngineReportType", "oilLevel"): (0.0, 1000.0),
    ("UMAA::EO::EngineStatus::EngineReportType", "oilPressure"): (0.0, 51200.0),
    ("UMAA::EO::EngineStatus::EngineReportType", "oilTemp"): (-273.0, 1000.0),
    ("UMAA::EO::EngineStatus::EngineReportType", "percentOilPressure"): (0.0, 200.0),
    ("UMAA::EO::EngineStatus::EngineReportType", "throttle"): (-100.0, 100.0),

    # UMAA::EO::FinsControl::FinCommandType
    ("UMAA::EO::FinsControl::FinCommandType", "deflection"): (-3.141592653589793, 3.141592653589793),
    ("UMAA::EO::FinsControl::FinCommandType", "deflectionRate"): (-62.831, 62.831),

    # UMAA::EO::FinsSpecs::FinSpecsType
    ("UMAA::EO::FinsSpecs::FinSpecsType", "maxDeflectionRate"): (-62.831, 62.831),
    ("UMAA::EO::FinsSpecs::FinSpecsType", "maxNegativeDeflection"): (-3.141592653589793, 3.141592653589793),
    ("UMAA::EO::FinsSpecs::FinSpecsType", "maxPositiveDeflection"): (-3.141592653589793, 3.141592653589793),
    ("UMAA::EO::FinsSpecs::FinSpecsType", "minDeflectionRate"): (-62.831, 62.831),
    ("UMAA::EO::FinsSpecs::FinSpecsType", "nominalDeflectionRate"): (-62.831, 62.831),

    # UMAA::EO::FinsStatus::FinStatusType
    ("UMAA::EO::FinsStatus::FinStatusType", "deflection"): (-3.141592653589793, 3.141592653589793),
    ("UMAA::EO::FinsStatus::FinStatusType", "deflectionRate"): (-62.831, 62.831),

    # UMAA::EO::FuelTankSpecs::FuelTankSpecsReportType
    ("UMAA::EO::FuelTankSpecs::FuelTankSpecsReportType", "capacity"): (0.0, 1000.0),

    # UMAA::EO::FuelTankStatus::FuelTankReportType
    ("UMAA::EO::FuelTankStatus::FuelTankReportType", "fuelLevel"): (0.0, 1000.0),

    # UMAA::EO::GeneratorSpecs::GeneratorSpecsReportType
    ("UMAA::EO::GeneratorSpecs::GeneratorSpecsReportType", "maxCurrent"): (-100000.0, 100000.0),
    ("UMAA::EO::GeneratorSpecs::GeneratorSpecsReportType", "maxPower"): (0.0, 100000000.0),
    ("UMAA::EO::GeneratorSpecs::GeneratorSpecsReportType", "ratedPower"): (0.0, 100000000.0),
    ("UMAA::EO::GeneratorSpecs::GeneratorSpecsReportType", "ratedVoltage"): (-100000.0, 100000.0),

    # UMAA::EO::GeneratorStatus::GeneratorReportType
    ("UMAA::EO::GeneratorStatus::GeneratorReportType", "current"): (-100000.0, 100000.0),
    ("UMAA::EO::GeneratorStatus::GeneratorReportType", "voltage"): (-100000.0, 100000.0),

    # UMAA::EO::PropulsorsSpecs::PropulsorSpecsType
    ("UMAA::EO::PropulsorsSpecs::PropulsorSpecsType", "propulsionLowerLimit"): (-100000, 100000),
    ("UMAA::EO::PropulsorsSpecs::PropulsorSpecsType", "propulsionUpperLimit"): (-100000, 100000),

    # UMAA::EO::PropulsorsStatus::PropulsorStatusType
    ("UMAA::EO::PropulsorsStatus::PropulsorStatusType", "gamma"): (-6.28318530718, 6.28318530718),
    ("UMAA::EO::PropulsorsStatus::PropulsorStatusType", "propellerPitch"): (-6.28318530718, 6.28318530718),
    ("UMAA::EO::PropulsorsStatus::PropulsorStatusType", "propulsion"): (-100000, 100000),
    ("UMAA::EO::PropulsorsStatus::PropulsorStatusType", "rho"): (-6.28318530718, 6.28318530718),

    # UMAA::EO::UVPlatformSpecs::SurfaceCapabilityLimitsType
    ("UMAA::EO::UVPlatformSpecs::SurfaceCapabilityLimitsType", "cruisingSpeed"): (0.0, 299792458.0),
    ("UMAA::EO::UVPlatformSpecs::SurfaceCapabilityLimitsType", "maxAcceleration"): (-299792458.0, 299792458.0),
    ("UMAA::EO::UVPlatformSpecs::SurfaceCapabilityLimitsType", "maxDeceleration"): (-299792458.0, 299792458.0),
    ("UMAA::EO::UVPlatformSpecs::SurfaceCapabilityLimitsType", "maxForwardSpeed"): (0.0, 299792458.0),
    ("UMAA::EO::UVPlatformSpecs::SurfaceCapabilityLimitsType", "maxReverseSpeed"): (0.0, 299792458.0),
    ("UMAA::EO::UVPlatformSpecs::SurfaceCapabilityLimitsType", "maxTowingSpeed"): (0.0, 299792458.0),
    ("UMAA::EO::UVPlatformSpecs::SurfaceCapabilityLimitsType", "maxTowingTurnAcceleration"): (-10000.0, 10000.0),
    ("UMAA::EO::UVPlatformSpecs::SurfaceCapabilityLimitsType", "maxTowingTurnRate"): (-32.767, 32.767),
    ("UMAA::EO::UVPlatformSpecs::SurfaceCapabilityLimitsType", "maxTurnAcceleration"): (-10000.0, 10000.0),
    ("UMAA::EO::UVPlatformSpecs::SurfaceCapabilityLimitsType", "maxTurnRate"): (-32.767, 32.767),
    ("UMAA::EO::UVPlatformSpecs::SurfaceCapabilityLimitsType", "minSpeedInMedium"): (0.0, 299792458.0),
    ("UMAA::EO::UVPlatformSpecs::SurfaceCapabilityLimitsType", "minTowingSpeed"): (0.0, 299792458.0),

    # UMAA::EO::UVPlatformSpecs::UVPlatformCapabilitiesReportType
    ("UMAA::EO::UVPlatformSpecs::UVPlatformCapabilitiesReportType", "minWaterDepth"): (0.0, 10000.0),
    ("UMAA::EO::UVPlatformSpecs::UVPlatformCapabilitiesReportType", "towingCapacity"): (0.0, 100000.0),

    # UMAA::EO::UVPlatformSpecs::UVPlatformSpecsReportType
    ("UMAA::EO::UVPlatformSpecs::UVPlatformSpecsReportType", "aftDistance"): (0.0, 401056000.0),
    ("UMAA::EO::UVPlatformSpecs::UVPlatformSpecsReportType", "beamAtWaterline"): (0.0, 401056000.0),
    ("UMAA::EO::UVPlatformSpecs::UVPlatformSpecsReportType", "bottomDistance"): (0.0, 401056000.0),
    ("UMAA::EO::UVPlatformSpecs::UVPlatformSpecsReportType", "diameter"): (0.0, 401056000.0),
    ("UMAA::EO::UVPlatformSpecs::UVPlatformSpecsReportType", "displacement"): (0.0, 100000.0),
    ("UMAA::EO::UVPlatformSpecs::UVPlatformSpecsReportType", "draft"): (0.0, 401056000.0),
    ("UMAA::EO::UVPlatformSpecs::UVPlatformSpecsReportType", "forwardDistance"): (0.0, 401056000.0),
    ("UMAA::EO::UVPlatformSpecs::UVPlatformSpecsReportType", "lengthAtWaterline"): (0.0, 401056000.0),
    ("UMAA::EO::UVPlatformSpecs::UVPlatformSpecsReportType", "portDistance"): (0.0, 401056000.0),
    ("UMAA::EO::UVPlatformSpecs::UVPlatformSpecsReportType", "starboardDistance"): (0.0, 401056000.0),
    ("UMAA::EO::UVPlatformSpecs::UVPlatformSpecsReportType", "topDistance"): (0.0, 401056000.0),
    ("UMAA::EO::UVPlatformSpecs::UVPlatformSpecsReportType", "weightInWater"): (0.0, 100000.0),
    ("UMAA::EO::UVPlatformSpecs::UVPlatformSpecsReportType", "weightLight"): (0.0, 100000.0),
    ("UMAA::EO::UVPlatformSpecs::UVPlatformSpecsReportType", "weightLoaded"): (0.0, 100000.0),

    # UMAA::EO::UVPlatformSpecs::UnderwaterCapabilityLimitsType
    ("UMAA::EO::UVPlatformSpecs::UnderwaterCapabilityLimitsType", "cruisingSpeed"): (0.0, 299792458.0),
    ("UMAA::EO::UVPlatformSpecs::UnderwaterCapabilityLimitsType", "maxAcceleration"): (-299792458.0, 299792458.0),
    ("UMAA::EO::UVPlatformSpecs::UnderwaterCapabilityLimitsType", "maxDeceleration"): (-299792458.0, 299792458.0),
    ("UMAA::EO::UVPlatformSpecs::UnderwaterCapabilityLimitsType", "maxDepthAcceleration"): (-299792458.0, 299792458.0),
    ("UMAA::EO::UVPlatformSpecs::UnderwaterCapabilityLimitsType", "maxDepthChangeRate"): (-299792458.0, 299792458.0),
    ("UMAA::EO::UVPlatformSpecs::UnderwaterCapabilityLimitsType", "maxForwardSpeed"): (0.0, 299792458.0),
    ("UMAA::EO::UVPlatformSpecs::UnderwaterCapabilityLimitsType", "maxPitchRate"): (-32.767, 32.767),
    ("UMAA::EO::UVPlatformSpecs::UnderwaterCapabilityLimitsType", "maxReverseSpeed"): (0.0, 299792458.0),
    ("UMAA::EO::UVPlatformSpecs::UnderwaterCapabilityLimitsType", "maxTowingSpeed"): (0.0, 299792458.0),
    ("UMAA::EO::UVPlatformSpecs::UnderwaterCapabilityLimitsType", "maxTowingTurnAcceleration"): (-10000.0, 10000.0),
    ("UMAA::EO::UVPlatformSpecs::UnderwaterCapabilityLimitsType", "maxTowingTurnRate"): (-32.767, 32.767),
    ("UMAA::EO::UVPlatformSpecs::UnderwaterCapabilityLimitsType", "maxTurnAcceleration"): (-10000.0, 10000.0),
    ("UMAA::EO::UVPlatformSpecs::UnderwaterCapabilityLimitsType", "maxTurnRate"): (-32.767, 32.767),
    ("UMAA::EO::UVPlatformSpecs::UnderwaterCapabilityLimitsType", "maxVehicleDepth"): (0.0, 10000.0),
    ("UMAA::EO::UVPlatformSpecs::UnderwaterCapabilityLimitsType", "minSpeedInMedium"): (0.0, 299792458.0),
    ("UMAA::EO::UVPlatformSpecs::UnderwaterCapabilityLimitsType", "minTowingSpeed"): (0.0, 299792458.0),

    # UMAA::MM::BaseType::AnnulusSectorRequirementType
    ("UMAA::MM::BaseType::AnnulusSectorRequirementType", "maxRange"): (0.0, 401056000.0),
    ("UMAA::MM::BaseType::AnnulusSectorRequirementType", "minRange"): (0.0, 401056000.0),

    # UMAA::MM::BaseType::AnnulusSectorToleranceType
    ("UMAA::MM::BaseType::AnnulusSectorToleranceType", "failureDelay"): (0.0, 37817280.0),
    ("UMAA::MM::BaseType::AnnulusSectorToleranceType", "limit"): (0.0, 401056000.0),

    # UMAA::MM::BaseType::AreaRandomWalkObjectiveType
    ("UMAA::MM::BaseType::AreaRandomWalkObjectiveType", "duration"): (0.0, 37817280.0),
    ("UMAA::MM::BaseType::AreaRandomWalkObjectiveType", "maxTimeOnCourse"): (0.0, 37817280.0),
    ("UMAA::MM::BaseType::AreaRandomWalkObjectiveType", "minTimeOnCourse"): (0.0, 37817280.0),

    # UMAA::MM::BaseType::CircleObjectiveType
    ("UMAA::MM::BaseType::CircleObjectiveType", "duration"): (0.0, 37817280.0),
    ("UMAA::MM::BaseType::CircleObjectiveType", "radius"): (0.0, 401056000.0),

    # UMAA::MM::BaseType::DriftObjectiveDetailedStatusType
    ("UMAA::MM::BaseType::DriftObjectiveDetailedStatusType", "distanceFromReference"): (0.0, 401056000.0),

    # UMAA::MM::BaseType::DriftObjectiveType
    ("UMAA::MM::BaseType::DriftObjectiveType", "duration"): (0.0, 37817280.0),

    # UMAA::MM::BaseType::EllipseVariantType
    ("UMAA::MM::BaseType::EllipseVariantType", "direction"): (-6.28318530718, 6.28318530718),
    ("UMAA::MM::BaseType::EllipseVariantType", "semiMajorRadius"): (0.0, 401056000.0),
    ("UMAA::MM::BaseType::EllipseVariantType", "semiMinorRadius"): (0.0, 401056000.0),

    # UMAA::MM::BaseType::Figure8ObjectiveType
    ("UMAA::MM::BaseType::Figure8ObjectiveType", "duration"): (0.0, 37817280.0),
    ("UMAA::MM::BaseType::Figure8ObjectiveType", "length"): (0.0, 401056000.0),
    ("UMAA::MM::BaseType::Figure8ObjectiveType", "radius"): (0.0, 401056000.0),

    # UMAA::MM::BaseType::FreeFloatObjectiveType
    ("UMAA::MM::BaseType::FreeFloatObjectiveType", "duration"): (0.0, 37817280.0),

    # UMAA::MM::BaseType::HoverObjectiveType
    ("UMAA::MM::BaseType::HoverObjectiveType", "duration"): (0.0, 37817280.0),

    # UMAA::MM::BaseType::MissionPlanType
    ("UMAA::MM::BaseType::MissionPlanType", "missionPriority"): (0, 255),

    # UMAA::MM::BaseType::ObjectiveType
    ("UMAA::MM::BaseType::ObjectiveType", "objectivePriority"): (0, 255),

    # UMAA::MM::BaseType::PolygonAreaToleranceType
    ("UMAA::MM::BaseType::PolygonAreaToleranceType", "failureDelay"): (0.0, 37817280.0),
    ("UMAA::MM::BaseType::PolygonAreaToleranceType", "limit"): (0.0, 401056000.0),

    # UMAA::MM::BaseType::RacetrackObjectiveType
    ("UMAA::MM::BaseType::RacetrackObjectiveType", "duration"): (0.0, 37817280.0),
    ("UMAA::MM::BaseType::RacetrackObjectiveType", "length"): (0.0, 401056000.0),
    ("UMAA::MM::BaseType::RacetrackObjectiveType", "radius"): (0.0, 401056000.0),

    # UMAA::MM::BaseType::RegularPolygonObjectiveType
    ("UMAA::MM::BaseType::RegularPolygonObjectiveType", "diameter"): (0.0, 401056000.0),
    ("UMAA::MM::BaseType::RegularPolygonObjectiveType", "duration"): (0.0, 37817280.0),
    ("UMAA::MM::BaseType::RegularPolygonObjectiveType", "numberSides"): (3, 255),

    # UMAA::MM::BaseType::RouteObjectiveDetailedStatusType
    ("UMAA::MM::BaseType::RouteObjectiveDetailedStatusType", "crossTrackError"): (0.0, 401056000.0),
    ("UMAA::MM::BaseType::RouteObjectiveDetailedStatusType", "distanceRemaining"): (0.0, 401056000.0),
    ("UMAA::MM::BaseType::RouteObjectiveDetailedStatusType", "distanceToWaypoint"): (0.0, 401056000.0),

    # UMAA::MM::BaseType::ScreenRandomWalkObjectiveType
    ("UMAA::MM::BaseType::ScreenRandomWalkObjectiveType", "duration"): (0.0, 37817280.0),
    ("UMAA::MM::BaseType::ScreenRandomWalkObjectiveType", "maxTimeOnCourse"): (0.0, 37817280.0),
    ("UMAA::MM::BaseType::ScreenRandomWalkObjectiveType", "minTimeOnCourse"): (0.0, 37817280.0),

    # UMAA::MM::BaseType::StateTriggerType
    ("UMAA::MM::BaseType::StateTriggerType", "count"): (-2147483648, 2147483647),

    # UMAA::MM::BaseType::StationkeepObjectiveDetailedStatusType
    ("UMAA::MM::BaseType::StationkeepObjectiveDetailedStatusType", "bearingGuide"): (-6.28318530718, 6.28318530718),
    ("UMAA::MM::BaseType::StationkeepObjectiveDetailedStatusType", "bearingMagneticNorth"): (-6.28318530718, 6.28318530718),
    ("UMAA::MM::BaseType::StationkeepObjectiveDetailedStatusType", "bearingTrueNorth"): (-6.28318530718, 6.28318530718),
    ("UMAA::MM::BaseType::StationkeepObjectiveDetailedStatusType", "closingSpeed"): (-299792458.0, 299792458.0),
    ("UMAA::MM::BaseType::StationkeepObjectiveDetailedStatusType", "distanceFromTrack"): (0.0, 401056000.0),

    # UMAA::MM::BaseType::StationkeepObjectiveType
    ("UMAA::MM::BaseType::StationkeepObjectiveType", "duration"): (0.0, 37817280.0),
    ("UMAA::MM::BaseType::StationkeepObjectiveType", "guideLostFailureDelay"): (0.0, 37817280.0),

    # UMAA::MM::BaseType::TaskPlanType
    ("UMAA::MM::BaseType::TaskPlanType", "taskPriority"): (0, 255),

    # UMAA::MM::BaseType::VectorObjectiveType
    ("UMAA::MM::BaseType::VectorObjectiveType", "duration"): (0.0, 37817280.0),

    # UMAA::MM::BaseType::WaypointDetailedStatusType
    ("UMAA::MM::BaseType::WaypointDetailedStatusType", "avgCrossTrackError"): (0.0, 401056000.0),
    ("UMAA::MM::BaseType::WaypointDetailedStatusType", "avgSpeed"): (-299792458.0, 299792458.0),
    ("UMAA::MM::BaseType::WaypointDetailedStatusType", "maxCrossTrackError"): (0.0, 401056000.0),
    ("UMAA::MM::BaseType::WaypointDetailedStatusType", "maxSpeed"): (-299792458.0, 299792458.0),

    # UMAA::MM::Conditional::ConstraintViolatedConditionalType
    ("UMAA::MM::Conditional::ConstraintViolatedConditionalType", "duration"): (0.0, 37817280.0),

    # UMAA::MM::Conditional::DepthConditionalType
    ("UMAA::MM::Conditional::DepthConditionalType", "depth"): (0.0, 10000.0),

    # UMAA::MM::Conditional::DepthRateConditionalType
    ("UMAA::MM::Conditional::DepthRateConditionalType", "depthRate"): (-299792458.0, 299792458.0),

    # UMAA::MM::Conditional::HeadingSectorType
    ("UMAA::MM::Conditional::HeadingSectorType", "endHeading"): (-6.28318530718, 6.28318530718),
    ("UMAA::MM::Conditional::HeadingSectorType", "startHeading"): (-6.28318530718, 6.28318530718),

    # UMAA::MM::Conditional::PitchRateConditionalType
    ("UMAA::MM::Conditional::PitchRateConditionalType", "pitchRate"): (-32.767, 32.767),

    # UMAA::MM::Conditional::RelativeSpeedConditionalType
    ("UMAA::MM::Conditional::RelativeSpeedConditionalType", "speed"): (0.0, 299792458.0),

    # UMAA::MM::Conditional::RollRateConditionalType
    ("UMAA::MM::Conditional::RollRateConditionalType", "rollRate"): (-32.767, 32.767),

    # UMAA::MM::Conditional::SpeedConditionalType
    ("UMAA::MM::Conditional::SpeedConditionalType", "speed"): (-299792458.0, 299792458.0),

    # UMAA::MM::Conditional::YawRateConditionalType
    ("UMAA::MM::Conditional::YawRateConditionalType", "yawRate"): (-32.767, 32.767),

    # UMAA::MM::ControlTransfer::ClientControlReportType
    ("UMAA::MM::ControlTransfer::ClientControlReportType", "authorityLevel"): (-2147483648, 2147483647),

    # UMAA::MM::ControlTransfer::ClientControlTransferReportType
    ("UMAA::MM::ControlTransfer::ClientControlTransferReportType", "authorityLevel"): (-2147483648, 2147483647),

    # UMAA::MM::ControlTransfer::ControlSystemControlReportType
    ("UMAA::MM::ControlTransfer::ControlSystemControlReportType", "authorityLevel"): (-2147483648, 2147483647),

    # UMAA::MM::ControlTransfer::ControlSystemTransferReportType
    ("UMAA::MM::ControlTransfer::ControlSystemTransferReportType", "authorityLevel"): (-2147483648, 2147483647),

    # UMAA::MO::GlobalDriftControl::GlobalDriftExecutionStatusReportType
    ("UMAA::MO::GlobalDriftControl::GlobalDriftExecutionStatusReportType", "distanceFromReference"): (0.0, 401056000.0),

    # UMAA::MO::GlobalWaypointControl::GlobalWaypointExecutionStatusReportType
    ("UMAA::MO::GlobalWaypointControl::GlobalWaypointExecutionStatusReportType", "crossTrackError"): (0.0, 401056000.0),
    ("UMAA::MO::GlobalWaypointControl::GlobalWaypointExecutionStatusReportType", "cumulativeDistance"): (0.0, 401056000.0),
    ("UMAA::MO::GlobalWaypointControl::GlobalWaypointExecutionStatusReportType", "distanceRemaining"): (0.0, 401056000.0),
    ("UMAA::MO::GlobalWaypointControl::GlobalWaypointExecutionStatusReportType", "distanceToWaypoint"): (0.0, 401056000.0),
    ("UMAA::MO::GlobalWaypointControl::GlobalWaypointExecutionStatusReportType", "waypointsRemaining"): (-2147483648, 2147483647),

    # UMAA::MO::HazardAvoidanceConfig::COLREGSConfigurationType
    ("UMAA::MO::HazardAvoidanceConfig::COLREGSConfigurationType", "dangerRange"): (0.0, 401056000.0),
    ("UMAA::MO::HazardAvoidanceConfig::COLREGSConfigurationType", "doubtRange"): (0.0, 401056000.0),
    ("UMAA::MO::HazardAvoidanceConfig::COLREGSConfigurationType", "influenceRange"): (0.0, 401056000.0),

    # UMAA::MO::HazardAvoidanceConfig::ContactHazardAvoidanceType
    ("UMAA::MO::HazardAvoidanceConfig::ContactHazardAvoidanceType", "minimumStandoff"): (0.0, 401056000.0),

    # UMAA::SA::CompartmentStatus::CompartmentReportType
    ("UMAA::SA::CompartmentStatus::CompartmentReportType", "humidity"): (0.0, 1000.0),
    ("UMAA::SA::CompartmentStatus::CompartmentReportType", "pressure"): (0.0, 51200.0),
    ("UMAA::SA::CompartmentStatus::CompartmentReportType", "temperature"): (-273.0, 1000.0),

    # UMAA::SA::ContactCOLREGSClassificationStatus::ContactCOLREGSClassificationReportType
    ("UMAA::SA::ContactCOLREGSClassificationStatus::ContactCOLREGSClassificationReportType", "confidence"): (0.0, 1000.0),

    # UMAA::SA::ContactCategoryReport::ContactCategoryReportType
    ("UMAA::SA::ContactCategoryReport::ContactCategoryReportType", "confidence"): (0.0, 1000.0),

    # UMAA::SA::ContactFilterConfig::ContactFilterConfigCommandType
    ("UMAA::SA::ContactFilterConfig::ContactFilterConfigCommandType", "bearingChangeLimit"): (-3.141592653589793, 3.141592653589793),
    ("UMAA::SA::ContactFilterConfig::ContactFilterConfigCommandType", "headingChangeLimit"): (-3.141592653589793, 3.141592653589793),
    ("UMAA::SA::ContactFilterConfig::ContactFilterConfigCommandType", "noChangeTimerUpdate"): (0.0, 37817280.0),
    ("UMAA::SA::ContactFilterConfig::ContactFilterConfigCommandType", "positionChangeLimit"): (0.0, 401056000.0),
    ("UMAA::SA::ContactFilterConfig::ContactFilterConfigCommandType", "rangeChangeLimit"): (0.0, 401056000.0),
    ("UMAA::SA::ContactFilterConfig::ContactFilterConfigCommandType", "speedChangeLimit"): (-299792458.0, 299792458.0),
    ("UMAA::SA::ContactFilterConfig::ContactFilterConfigCommandType", "withinRangeofOwnship"): (0.0, 401056000.0),

    # UMAA::SA::ContactIdentityReport::ContactIdentityReportType
    ("UMAA::SA::ContactIdentityReport::ContactIdentityReportType", "confidence"): (0.0, 1000.0),

    # UMAA::SA::ContactReport::ContactType
    ("UMAA::SA::ContactReport::ContactType", "altitudeAGL"): (0.0, float('inf')),
    ("UMAA::SA::ContactReport::ContactType", "altitudeASF"): (0.0, 401056000.0),
    ("UMAA::SA::ContactReport::ContactType", "altitudeGeodetic"): (-10000.0, 700000.0),
    ("UMAA::SA::ContactReport::ContactType", "altitudeMSL"): (0.0, float('inf')),
    ("UMAA::SA::ContactReport::ContactType", "confidence"): (0.0, 1000.0),
    ("UMAA::SA::ContactReport::ContactType", "course"): (-6.28318530718, 6.28318530718),
    ("UMAA::SA::ContactReport::ContactType", "depth"): (0.0, 10000.0),
    ("UMAA::SA::ContactReport::ContactType", "heading"): (-6.28318530718, 6.28318530718),
    ("UMAA::SA::ContactReport::ContactType", "height"): (0.0, 401056000.0),
    ("UMAA::SA::ContactReport::ContactType", "length"): (0.0, 401056000.0),
    ("UMAA::SA::ContactReport::ContactType", "quality"): (0.0, 1000.0),
    ("UMAA::SA::ContactReport::ContactType", "speedOverGround"): (-299792458.0, 299792458.0),
    ("UMAA::SA::ContactReport::ContactType", "width"): (0.0, 401056000.0),

    # UMAA::SA::ContactVisualClassificationStatus::ContactVisualClassificationReportType
    ("UMAA::SA::ContactVisualClassificationStatus::ContactVisualClassificationReportType", "confidence"): (0.0, 1000.0),

    # UMAA::SA::ECEFPoseStatus::ECEFPoseReportType
    ("UMAA::SA::ECEFPoseStatus::ECEFPoseReportType", "xPosition"): (0.0, 401056000.0),
    ("UMAA::SA::ECEFPoseStatus::ECEFPoseReportType", "yPosition"): (0.0, 401056000.0),
    ("UMAA::SA::ECEFPoseStatus::ECEFPoseReportType", "zPosition"): (0.0, 401056000.0),

    # UMAA::SA::GlobalPoseStatus::GlobalPoseReportType
    ("UMAA::SA::GlobalPoseStatus::GlobalPoseReportType", "altitude"): (0.0, float('inf')),
    ("UMAA::SA::GlobalPoseStatus::GlobalPoseReportType", "altitudeAGL"): (0.0, float('inf')),
    ("UMAA::SA::GlobalPoseStatus::GlobalPoseReportType", "altitudeASF"): (0.0, 401056000.0),
    ("UMAA::SA::GlobalPoseStatus::GlobalPoseReportType", "altitudeGeodetic"): (-10000.0, 700000.0),
    ("UMAA::SA::GlobalPoseStatus::GlobalPoseReportType", "course"): (-6.28318530718, 6.28318530718),
    ("UMAA::SA::GlobalPoseStatus::GlobalPoseReportType", "depth"): (0.0, 10000.0),

    # UMAA::SA::LandmarkReport::LandmarkReportType
    ("UMAA::SA::LandmarkReport::LandmarkReportType", "depth"): (0.0, 10000.0),

    # UMAA::SA::MagneticVariationStatus::MagneticVariationReportType
    ("UMAA::SA::MagneticVariationStatus::MagneticVariationReportType", "magneticDeclination"): (-6.28318530718, 6.28318530718),

    # UMAA::SA::PassiveContactReport::PassiveContactType
    ("UMAA::SA::PassiveContactReport::PassiveContactType", "bearing"): (-6.28318530718, 6.28318530718),
    ("UMAA::SA::PassiveContactReport::PassiveContactType", "bearingRate"): (-62.831, 62.831),
    ("UMAA::SA::PassiveContactReport::PassiveContactType", "contactLevel"): (-400.0, 400.0),
    ("UMAA::SA::PassiveContactReport::PassiveContactType", "course"): (-6.28318530718, 6.28318530718),
    ("UMAA::SA::PassiveContactReport::PassiveContactType", "declination"): (-1.5707963267948966, 1.5707963267948966),
    ("UMAA::SA::PassiveContactReport::PassiveContactType", "narrowbandContactFrequency"): (0.0, 10000000000.0),
    ("UMAA::SA::PassiveContactReport::PassiveContactType", "range"): (0.0, 401056000.0),

    # UMAA::SA::PathReporterSpecs::PathReporterType
    ("UMAA::SA::PathReporterSpecs::PathReporterType", "maxDistance"): (0.0, 401056000.0),
    ("UMAA::SA::PathReporterSpecs::PathReporterType", "maxPoints"): (-2147483648, 2147483647),
    ("UMAA::SA::PathReporterSpecs::PathReporterType", "maxTgtResolution"): (0.0, 401056000.0),
    ("UMAA::SA::PathReporterSpecs::PathReporterType", "maxTime"): (0.0, 37817280.0),
    ("UMAA::SA::PathReporterSpecs::PathReporterType", "minTgtResolution"): (0.0, 401056000.0),

    # UMAA::SA::RelativeContactReport::RelativeContactReportType
    ("UMAA::SA::RelativeContactReport::RelativeContactReportType", "bearing"): (-3.141592653589793, 3.141592653589793),

    # UMAA::SA::SpeedStatus::SpeedReportType
    ("UMAA::SA::SpeedStatus::SpeedReportType", "speedOverGround"): (-299792458.0, 299792458.0),
    ("UMAA::SA::SpeedStatus::SpeedReportType", "speedThroughAir"): (0.0, 299792458.0),
    ("UMAA::SA::SpeedStatus::SpeedReportType", "speedThroughWater"): (0.0, 299792458.0),

    # UMAA::SA::StillImageStatus::StillImageReportType
    ("UMAA::SA::StillImageStatus::StillImageReportType", "altitudeAGL"): (0.0, float('inf')),
    ("UMAA::SA::StillImageStatus::StillImageReportType", "altitudeASF"): (0.0, 401056000.0),
    ("UMAA::SA::StillImageStatus::StillImageReportType", "altitudeGeodetic"): (-10000.0, 700000.0),
    ("UMAA::SA::StillImageStatus::StillImageReportType", "altitudeMSL"): (0.0, float('inf')),
    ("UMAA::SA::StillImageStatus::StillImageReportType", "depth"): (0.0, 10000.0),

    # UMAA::SA::TranslationalShipMotionStatus::TranslationalShipMotionReportType
    ("UMAA::SA::TranslationalShipMotionStatus::TranslationalShipMotionReportType", "heave"): (-50000.0, 50000.0),
    ("UMAA::SA::TranslationalShipMotionStatus::TranslationalShipMotionReportType", "surge"): (-20000000.0, 20000000.0),
    ("UMAA::SA::TranslationalShipMotionStatus::TranslationalShipMotionReportType", "sway"): (-20000000.0, 20000000.0),

    # UMAA::SA::WaterCharacteristicsStatus::WaterCharacteristicsReportType
    ("UMAA::SA::WaterCharacteristicsStatus::WaterCharacteristicsReportType", "density"): (0.0, 3e+17),
    ("UMAA::SA::WaterCharacteristicsStatus::WaterCharacteristicsReportType", "depth"): (0.0, 10000.0),
    ("UMAA::SA::WaterCharacteristicsStatus::WaterCharacteristicsReportType", "pressure"): (0.0, 107558000.0),
    ("UMAA::SA::WaterCharacteristicsStatus::WaterCharacteristicsReportType", "soundVelocity"): (0.0, 299792458.0),
    ("UMAA::SA::WaterCharacteristicsStatus::WaterCharacteristicsReportType", "temperature"): (-273.0, 1000.0),
    ("UMAA::SA::WaterCharacteristicsStatus::WaterCharacteristicsReportType", "turbidity"): (0.0, float('inf')),

    # UMAA::SA::WaterCurrentStatus::WaterCurrentReportType
    ("UMAA::SA::WaterCurrentStatus::WaterCurrentReportType", "currentDirection"): (-6.28318530718, 6.28318530718),
    ("UMAA::SA::WaterCurrentStatus::WaterCurrentReportType", "currentSpeed"): (0.0, 299792458.0),

    # UMAA::SA::WeatherStatus::WeatherReportType
    ("UMAA::SA::WeatherStatus::WeatherReportType", "airTemperature"): (-100.0, 100.0),
    ("UMAA::SA::WeatherStatus::WeatherReportType", "barometricPressure"): (600.0, 1200.0),
    ("UMAA::SA::WeatherStatus::WeatherReportType", "dewPoint"): (-100.0, 100.0),
    ("UMAA::SA::WeatherStatus::WeatherReportType", "relativeHumidity"): (0.0, 1000.0),
    ("UMAA::SA::WeatherStatus::WeatherReportType", "thunderstormPotential"): (0.0, 1000.0),
    ("UMAA::SA::WeatherStatus::WeatherReportType", "visibility"): (0.0, 401056000.0),
    ("UMAA::SA::WeatherStatus::WeatherReportType", "waterTemperature"): (-22.0, 100.0),

    # UMAA::SA::WindStatus::WindReportType
    ("UMAA::SA::WindStatus::WindReportType", "relativeAverageDirection"): (-6.28318530718, 6.28318530718),
    ("UMAA::SA::WindStatus::WindReportType", "relativeAverageSpeed"): (0.0, 299792458.0),
    ("UMAA::SA::WindStatus::WindReportType", "relativeInstantaneousDirection"): (-6.28318530718, 6.28318530718),
    ("UMAA::SA::WindStatus::WindReportType", "relativeInstantaneousSpeed"): (0.0, 299792458.0),
    ("UMAA::SA::WindStatus::WindReportType", "relativeMaximumDirection"): (-6.28318530718, 6.28318530718),
    ("UMAA::SA::WindStatus::WindReportType", "relativeMaximumSpeed"): (0.0, 299792458.0),
    ("UMAA::SA::WindStatus::WindReportType", "relativeMinimumDirection"): (-6.28318530718, 6.28318530718),
    ("UMAA::SA::WindStatus::WindReportType", "relativeMinimumSpeed"): (0.0, 299792458.0),
    ("UMAA::SA::WindStatus::WindReportType", "straightDeckCrossSpeed"): (0.0, 299792458.0),
    ("UMAA::SA::WindStatus::WindReportType", "straightDeckHeadSpeed"): (0.0, 299792458.0),
    ("UMAA::SA::WindStatus::WindReportType", "trueAverageDirection"): (-6.28318530718, 6.28318530718),
    ("UMAA::SA::WindStatus::WindReportType", "trueAverageSpeed"): (-299792458.0, 299792458.0),
    ("UMAA::SA::WindStatus::WindReportType", "trueInstantaneousDirection"): (-6.28318530718, 6.28318530718),
    ("UMAA::SA::WindStatus::WindReportType", "trueInstantaneousSpeed"): (-299792458.0, 299792458.0),
    ("UMAA::SA::WindStatus::WindReportType", "trueMaximumDirection"): (-6.28318530718, 6.28318530718),
    ("UMAA::SA::WindStatus::WindReportType", "trueMaximumSpeed"): (-299792458.0, 299792458.0),
    ("UMAA::SA::WindStatus::WindReportType", "trueMinimumDirection"): (-6.28318530718, 6.28318530718),
    ("UMAA::SA::WindStatus::WindReportType", "trueMinimumSpeed"): (-299792458.0, 299792458.0),

    # UMAA::SEM::AcousticInterferenceStatus::AcousticSelfNoiseInterferenceStatusType
    ("UMAA::SEM::AcousticInterferenceStatus::AcousticSelfNoiseInterferenceStatusType", "bandwidth"): (0.0, 10000000000.0),
    ("UMAA::SEM::AcousticInterferenceStatus::AcousticSelfNoiseInterferenceStatusType", "centerFrequency"): (0.0, 10000000000.0),
    ("UMAA::SEM::AcousticInterferenceStatus::AcousticSelfNoiseInterferenceStatusType", "duration"): (0.0, 37817280.0),

    # UMAA::SEM::BaseType::FLSConfigSearchBottomType
    ("UMAA::SEM::BaseType::FLSConfigSearchBottomType", "goalVehicleAltitude"): (0.0, 401056000.0),
    ("UMAA::SEM::BaseType::FLSConfigSearchBottomType", "goalVehicleDepth"): (0.0, 10000.0),
    ("UMAA::SEM::BaseType::FLSConfigSearchBottomType", "maxRange"): (0.0, 401056000.0),
    ("UMAA::SEM::BaseType::FLSConfigSearchBottomType", "minRange"): (0.0, 401056000.0),

    # UMAA::SEM::BaseType::FLSConfigSearchVolumeType
    ("UMAA::SEM::BaseType::FLSConfigSearchVolumeType", "goalVehicleAltitude"): (0.0, 401056000.0),
    ("UMAA::SEM::BaseType::FLSConfigSearchVolumeType", "goalVehicleDepth"): (0.0, 10000.0),
    ("UMAA::SEM::BaseType::FLSConfigSearchVolumeType", "maxDepth"): (0.0, 10000.0),
    ("UMAA::SEM::BaseType::FLSConfigSearchVolumeType", "maxRange"): (0.0, 401056000.0),
    ("UMAA::SEM::BaseType::FLSConfigSearchVolumeType", "minDepth"): (0.0, 10000.0),
    ("UMAA::SEM::BaseType::FLSConfigSearchVolumeType", "minRange"): (0.0, 401056000.0),

    # UMAA::SEM::BaseType::FLSConfigTestType
    ("UMAA::SEM::BaseType::FLSConfigTestType", "activeBandwidth"): (0.0, 10000000000.0),
    ("UMAA::SEM::BaseType::FLSConfigTestType", "activeCenterFrequency"): (0.0, 10000000000.0),
    ("UMAA::SEM::BaseType::FLSConfigTestType", "attenuation"): (0, 18),
    ("UMAA::SEM::BaseType::FLSConfigTestType", "passiveBandwidth"): (0.0, 10000000000.0),
    ("UMAA::SEM::BaseType::FLSConfigTestType", "passiveCenterFrequency"): (0.0, 10000000000.0),
    ("UMAA::SEM::BaseType::FLSConfigTestType", "range"): (0.0, 401056000.0),
    ("UMAA::SEM::BaseType::FLSConfigTestType", "steering"): (-1.5707963267948966, 1.5707963267948966),

    # UMAA::SEM::BaseType::RGBType
    ("UMAA::SEM::BaseType::RGBType", "blue"): (0, 255),
    ("UMAA::SEM::BaseType::RGBType", "green"): (0, 255),
    ("UMAA::SEM::BaseType::RGBType", "red"): (0, 255),

    # UMAA::SEM::GPSStatus::GPSClockType
    ("UMAA::SEM::GPSStatus::GPSClockType", "bias"): (-9223372036854775807, 9223372036854775807),
    ("UMAA::SEM::GPSStatus::GPSClockType", "biasUncertainty"): (-9223372036854775807, 9223372036854775807),
    ("UMAA::SEM::GPSStatus::GPSClockType", "drift"): (-2147483648, 2147483647),
    ("UMAA::SEM::GPSStatus::GPSClockType", "driftUncertainty"): (-2147483648, 2147483647),
    ("UMAA::SEM::GPSStatus::GPSClockType", "elapsedRealtime"): (-9223372036854775807, 9223372036854775807),
    ("UMAA::SEM::GPSStatus::GPSClockType", "elapsedRealtimeUncertainty"): (-9223372036854775807, 9223372036854775807),
    ("UMAA::SEM::GPSStatus::GPSClockType", "fullBias"): (-9223372036854775807, 9223372036854775807),
    ("UMAA::SEM::GPSStatus::GPSClockType", "hardwareClockDiscontinuityCount"): (-9223372036854775807, 9223372036854775807),
    ("UMAA::SEM::GPSStatus::GPSClockType", "leapSecond"): (-2147483648, 2147483647),
    ("UMAA::SEM::GPSStatus::GPSClockType", "referenceCarrierFrequency"): (0.0, 10000000000.0),
    ("UMAA::SEM::GPSStatus::GPSClockType", "time"): (-2147483648, 2147483647),

    # UMAA::SEM::GPSStatus::GPSReportType
    ("UMAA::SEM::GPSStatus::GPSReportType", "numberSatellitesInView"): (-2147483648, 2147483647),

    # UMAA::SEM::GPSStatus::GPSSatelliteType
    ("UMAA::SEM::GPSStatus::GPSSatelliteType", "antennaCarrierNoiseDensity"): (0.0, 1000000.0),
    ("UMAA::SEM::GPSStatus::GPSSatelliteType", "azimuth"): (-3.141592653589793, 3.141592653589793),
    ("UMAA::SEM::GPSStatus::GPSSatelliteType", "basebandCarrierNoiseDensity"): (0.0, 1000000.0),
    ("UMAA::SEM::GPSStatus::GPSSatelliteType", "carrierFrequency"): (0.0, 10000000000.0),
    ("UMAA::SEM::GPSStatus::GPSSatelliteType", "elevation"): (-3.141592653589793, 3.141592653589793),
    ("UMAA::SEM::GPSStatus::GPSSatelliteType", "satelliteID"): (0.0, 9.223372036854776e+18),

    # UMAA::SEM::IlluminatorControl::IlluminatorCommandType
    ("UMAA::SEM::IlluminatorControl::IlluminatorCommandType", "beamWidth"): (0.0, 6.28318530718),
    ("UMAA::SEM::IlluminatorControl::IlluminatorCommandType", "intensity"): (0.0, 100.0),

    # UMAA::SEM::IlluminatorSpecs::BeamWidthSpecsType
    ("UMAA::SEM::IlluminatorSpecs::BeamWidthSpecsType", "maxBeamWidth"): (0.0, 6.28318530718),
    ("UMAA::SEM::IlluminatorSpecs::BeamWidthSpecsType", "minBeamWidth"): (0.0, 6.28318530718),

    # UMAA::SEM::IlluminatorStatus::IlluminatorReportType
    ("UMAA::SEM::IlluminatorStatus::IlluminatorReportType", "beamWidth"): (0.0, 6.28318530718),
    ("UMAA::SEM::IlluminatorStatus::IlluminatorReportType", "intensity"): (0.0, 100.0),

    # UMAA::SEM::MapSegmentControl::MapSegmentCommandType
    ("UMAA::SEM::MapSegmentControl::MapSegmentCommandType", "segment"): (0, 100000),

    # UMAA::SO::BITConfig::BITConfigCommandType
    ("UMAA::SO::BITConfig::BITConfigCommandType", "minTimeBetweenTests"): (0.0, float('inf')),

    # UMAA::SO::BITConfig::BITConfigReportType
    ("UMAA::SO::BITConfig::BITConfigReportType", "minTimeBetweenTests"): (0.0, float('inf')),

    # UMAA::SO::BITSpecs::BITSpecsReportType
    ("UMAA::SO::BITSpecs::BITSpecsReportType", "avgMinTimeBetweenContinuousTests"): (0.0, float('inf')),

    # UMAA::SO::FileSystemStatus::FileSystemReportType
    ("UMAA::SO::FileSystemStatus::FileSystemReportType", "maxFilenameLength"): (-2147483648, 2147483647),

    # UMAA::SO::HeartbeatPulseStatus::HeartbeatPulseReportType
    ("UMAA::SO::HeartbeatPulseStatus::HeartbeatPulseReportType", "heartBeat"): (-2147483648, 2147483647),

    # UMAA::SO::ProcessingUnitStatus::ProcessingUnitReportType
    ("UMAA::SO::ProcessingUnitStatus::ProcessingUnitReportType", "load15MinuteAverage"): (0.0, 1000.0),
    ("UMAA::SO::ProcessingUnitStatus::ProcessingUnitReportType", "load1MinuteAverage"): (0.0, 1000.0),
    ("UMAA::SO::ProcessingUnitStatus::ProcessingUnitReportType", "load5MinuteAverage"): (0.0, 1000.0),
    ("UMAA::SO::ProcessingUnitStatus::ProcessingUnitReportType", "numberOfBlockedProcesses"): (-2147483648, 2147483647),
    ("UMAA::SO::ProcessingUnitStatus::ProcessingUnitReportType", "numberOfProcesses"): (-2147483648, 2147483647),
    ("UMAA::SO::ProcessingUnitStatus::ProcessingUnitReportType", "numberOfRunningProcesses"): (-2147483648, 2147483647),
    ("UMAA::SO::ProcessingUnitStatus::ProcessingUnitReportType", "processorTemperature"): (-273.0, 1000.0),
    ("UMAA::SO::ProcessingUnitStatus::ProcessingUnitReportType", "uptime"): (0.0, 37817280.0),

    # UMAA::SO::RecordingSpecs::RecordingSpecsReportType
    ("UMAA::SO::RecordingSpecs::RecordingSpecsReportType", "availableRecordingSpace"): (0, 1000000000),

    # UMAA::SO::RecordingStatus::RecordingStatusReportType
    ("UMAA::SO::RecordingStatus::RecordingStatusReportType", "receiveErrors"): (-2147483648, 2147483647),
    ("UMAA::SO::RecordingStatus::RecordingStatusReportType", "received"): (-2147483648, 2147483647),
    ("UMAA::SO::RecordingStatus::RecordingStatusReportType", "spaceUsed"): (0.0, 1000.0),
    ("UMAA::SO::RecordingStatus::RecordingStatusReportType", "writeErrors"): (-2147483648, 2147483647),

    # UMAA::SO::ResourceAllocation::ResourceAllocationCommandType
    ("UMAA::SO::ResourceAllocation::ResourceAllocationCommandType", "duration"): (0.0, 37817280.0),
}
