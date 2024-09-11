

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Measurements.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef Measurements_576970989_hpp
#define Measurements_576970989_hpp

#include <iosfwd>

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef RTIUSERDllExport
#define RTIUSERDllExport __declspec(dllexport)
#endif

#include "dds/core/SafeEnumeration.hpp"
#include "dds/core/String.hpp"
#include "dds/core/array.hpp"
#include "dds/core/vector.hpp"
#include "dds/core/External.hpp"
#include "rti/core/LongDouble.hpp"
#include "rti/core/Pointer.hpp"
#include "rti/core/array.hpp"
#include "rti/topic/TopicTraits.hpp"

#include "omg/types/string_view.hpp"

#include "rti/core/BoundedSequence.hpp"
#include "dds/core/Optional.hpp"

#ifndef NDDS_STANDALONE_TYPE
#include "dds/domain/DomainParticipant.hpp"
#include "dds/topic/TopicTraits.hpp"
#include "dds/core/xtypes/DynamicType.hpp"
#include "dds/core/xtypes/StructType.hpp"
#include "dds/core/xtypes/UnionType.hpp"
#include "dds/core/xtypes/EnumType.hpp"
#include "dds/core/xtypes/AliasType.hpp"
#include "rti/util/StreamFlagSaver.hpp"
#include "rti/domain/PluginSupport.hpp"
#endif

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef RTIUSERDllExport
#define RTIUSERDllExport
#endif

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace Common {
        namespace Measurement {

            static const double AmpHours_MIN = 0.0;

            static const double AmpHours_MAX = 500.0;

            typedef double AmpHours;
            struct AmpHours_AliasTag_t {};

            static const double AngleAcceleration_MIN = -10000.0;

            static const double AngleAcceleration_MAX = 10000.0;

            typedef double AngleAcceleration;
            struct AngleAcceleration_AliasTag_t {};

            static const double AzimuthTrueNorthAngle_MIN = -6.28318530718;

            static const double AzimuthTrueNorthAngle_MAX = 6.28318530718;

            typedef double AzimuthTrueNorthAngle;
            struct AzimuthTrueNorthAngle_AliasTag_t {};

            static const double BatteryCurrent_MIN = 0.0;

            static const double BatteryCurrent_MAX = 1000.0;

            typedef double BatteryCurrent;
            struct BatteryCurrent_AliasTag_t {};

            static const double BatteryCurrentDuration_MIN = 0.0;

            static const double BatteryCurrentDuration_MAX = 20.0;

            typedef double BatteryCurrentDuration;
            struct BatteryCurrentDuration_AliasTag_t {};

            static const double BatteryCycles_MIN = 0.0;

            static const double BatteryCycles_MAX = 10000.0;

            typedef double BatteryCycles;
            struct BatteryCycles_AliasTag_t {};

            typedef ::dds::core::array< uint8_t, 256L> BinaryValue;
            struct BinaryValue_AliasTag_t {};

            typedef uint8_t ByteValue;
            struct ByteValue_AliasTag_t {};

            static const double Charge_MIN = 0.0;

            static const double Charge_MAX = 3600000.0;

            typedef double Charge;
            struct Charge_AliasTag_t {};

            typedef char CharValue;
            struct CharValue_AliasTag_t {};

            typedef double Conductivity;
            struct Conductivity_AliasTag_t {};

            static const double DataTransferRate_MIN = 0.0;

            typedef double DataTransferRate;
            struct DataTransferRate_AliasTag_t {};

            static const double DistanceASF_MIN = 0.0;

            static const double DistanceASF_MAX = 401056000.0;

            typedef double DistanceASF;
            struct DistanceASF_AliasTag_t {};

            static const double DistanceBSL_MIN = 0.0;

            static const double DistanceBSL_MAX = 10000.0;

            typedef double DistanceBSL;
            struct DistanceBSL_AliasTag_t {};

            static const double DistanceAGL_MIN = 0.0;

            typedef double DistanceAGL;
            struct DistanceAGL_AliasTag_t {};

            typedef double DoubleValue;
            struct DoubleValue_AliasTag_t {};

            static const double DurationMilliseconds_MIN = 0.0;

            typedef double DurationMilliseconds;
            struct DurationMilliseconds_AliasTag_t {};

            static const double Effort_MIN = -100.0;

            static const double Effort_MAX = 100.0;

            typedef double Effort;
            struct Effort_AliasTag_t {};

            static const double ElectroMagneticFrequencyHertz_MIN = 0.0;

            static const double ElectroMagneticFrequencyHertz_MAX = 1e25;

            typedef double ElectroMagneticFrequencyHertz;
            struct ElectroMagneticFrequencyHertz_AliasTag_t {};

            static const double EnergyPercent_MIN = 0.0;

            static const double EnergyPercent_MAX = 1000.0;

            typedef double EnergyPercent;
            struct EnergyPercent_AliasTag_t {};

            static const int32_t FrequencyRPM_MIN = -100000L;

            static const int32_t FrequencyRPM_MAX = 100000L;

            typedef int32_t FrequencyRPM;
            struct FrequencyRPM_AliasTag_t {};

            static const double GammaAnglePropulsor_MIN = -6.28318530718;

            static const double GammaAnglePropulsor_MAX = 6.28318530718;

            typedef double GammaAnglePropulsor;
            struct GammaAnglePropulsor_AliasTag_t {};

            static const double HeadingCurrentDirection_MIN = -6.28318530718;

            static const double HeadingCurrentDirection_MAX = 6.28318530718;

            typedef double HeadingCurrentDirection;
            struct HeadingCurrentDirection_AliasTag_t {};

            static const double HeadingMagneticNorth_MIN = -6.28318530718;

            static const double HeadingMagneticNorth_MAX = 6.28318530718;

            typedef double HeadingMagneticNorth;
            struct HeadingMagneticNorth_AliasTag_t {};

            static const double HeadingTarget_MIN = -6.28318530718;

            static const double HeadingTarget_MAX = 6.28318530718;

            typedef double HeadingTarget;
            struct HeadingTarget_AliasTag_t {};

            static const double HeadingWindDirection_MIN = -6.28318530718;

            static const double HeadingWindDirection_MAX = 6.28318530718;

            typedef double HeadingWindDirection;
            struct HeadingWindDirection_AliasTag_t {};

            typedef int32_t IntegerValue;
            struct IntegerValue_AliasTag_t {};

            typedef uint64_t LargeCount;
            struct LargeCount_AliasTag_t {};

            static const double MassMetricTon_MIN = 0.0;

            static const double MassMetricTon_MAX = 100000.0;

            typedef double MassMetricTon;
            struct MassMetricTon_AliasTag_t {};

            typedef double MassFlowRate;
            struct MassFlowRate_AliasTag_t {};

            static const double MSLAltitude_MIN = 0.0;

            typedef double MSLAltitude;
            struct MSLAltitude_AliasTag_t {};

            static const double PressurePercent_MIN = 0.0;

            static const double PressurePercent_MAX = 200.0;

            typedef double PressurePercent;
            struct PressurePercent_AliasTag_t {};

            static const int32_t Priority_MIN = 0L;

            static const int32_t Priority_MAX = 255L;

            typedef int32_t Priority;
            struct Priority_AliasTag_t {};

            static const double PropellerPitchAnglePropulsor_MIN = -6.28318530718;

            static const double PropellerPitchAnglePropulsor_MAX = 6.28318530718;

            typedef double PropellerPitchAnglePropulsor;
            struct PropellerPitchAnglePropulsor_AliasTag_t {};

            static const double RhoAnglePropulsor_MIN = -6.28318530718;

            static const double RhoAnglePropulsor_MAX = 6.28318530718;

            typedef double RhoAnglePropulsor;
            struct RhoAnglePropulsor_AliasTag_t {};

            typedef double Salinity;
            struct Salinity_AliasTag_t {};

            static const int32_t SegmentID_MIN = 0L;

            static const int32_t SegmentID_MAX = 100000L;

            typedef int32_t SegmentID;
            struct SegmentID_AliasTag_t {};

            static const int32_t SidesCount_MIN = 3L;

            static const int32_t SidesCount_MAX = 255L;

            typedef int32_t SidesCount;
            struct SidesCount_AliasTag_t {};

            typedef uint64_t SizeLargeBytes;
            struct SizeLargeBytes_AliasTag_t {};

            static const double SpeedASF_MIN = -299792458.0;

            static const double SpeedASF_MAX = 299792458.0;

            typedef double SpeedASF;
            struct SpeedASF_AliasTag_t {};

            static const double SpeedBSL_MIN = -299792458.0;

            static const double SpeedBSL_MAX = 299792458.0;

            typedef double SpeedBSL;
            struct SpeedBSL_AliasTag_t {};

            static const double SpeedLocalWaterMass_MIN = 0.0;

            static const double SpeedLocalWaterMass_MAX = 299792458.0;

            typedef double SpeedLocalWaterMass;
            struct SpeedLocalWaterMass_AliasTag_t {};

            static const int32_t TransmitAttenuation_MIN = 0L;

            static const int32_t TransmitAttenuation_MAX = 18L;

            typedef int32_t TransmitAttenuation;
            struct TransmitAttenuation_AliasTag_t {};

            static const double Turbidity_MIN = 0.0;

            typedef double Turbidity;
            struct Turbidity_AliasTag_t {};

            static const double VolumeCubicMeter_MIN = 0.0;

            static const double VolumeCubicMeter_MAX = 1000.0;

            typedef double VolumeCubicMeter;
            struct VolumeCubicMeter_AliasTag_t {};

            static const double VolumePercent_MIN = 0.0;

            static const double VolumePercent_MAX = 1000.0;

            typedef double VolumePercent;
            struct VolumePercent_AliasTag_t {};

            static const double VolumetricFlowRate_MIN = -100000000.0;

            static const double VolumetricFlowRate_MAX = 100000000.0;

            typedef double VolumetricFlowRate;
            struct VolumetricFlowRate_AliasTag_t {};

            static const double WattHours_MIN = 0.0;

            static const double WattHours_MAX = 900000.0;

            typedef double WattHours;
            struct WattHours_AliasTag_t {};

            static const double YawAngle_MIN = -6.28318530718;

            static const double YawAngle_MAX = 6.28318530718;

            typedef double YawAngle;
            struct YawAngle_AliasTag_t {};
        } // namespace Measurement  
    } // namespace Common  
} // namespace UMAA  
namespace UMAA {
    namespace Common {
        namespace Measurement {

            static const double AccelerationScalar_MIN = -1310.68;

            static const double AccelerationScalar_MAX = 1310.68;

            typedef double AccelerationScalar;
            struct AccelerationScalar_AliasTag_t {};

            static const double Angle_MIN = -3.1415926535897932;

            static const double Angle_MAX = 3.1415926535897932;

            typedef double Angle;
            struct Angle_AliasTag_t {};

            static const double AngleRate_MIN = -62.831;

            static const double AngleRate_MAX = 62.831;

            typedef double AngleRate;
            struct AngleRate_AliasTag_t {};

            static const int32_t Count_MIN = -2147483648L;

            static const int32_t Count_MAX = 2147483647L;

            typedef int32_t Count;
            struct Count_AliasTag_t {};

            static const double CourseTrueNorth_MIN = -6.28318530718;

            static const double CourseTrueNorth_MAX = 6.28318530718;

            typedef double CourseTrueNorth;
            struct CourseTrueNorth_AliasTag_t {};

            static const int64_t DateTimeSeconds_MIN = -9223372036854775807LL;

            static const int64_t DateTimeSeconds_MAX = 9223372036854775807LL;

            typedef int64_t DateTimeSeconds;
            struct DateTimeSeconds_AliasTag_t {};

            static const int32_t DateTimeNanoseconds_MIN = 0L;

            static const int32_t DateTimeNanoseconds_MAX = 999999999L;

            typedef int32_t DateTimeNanoseconds;
            struct DateTimeNanoseconds_AliasTag_t {};

            class NDDSUSERDllExport DateTime {
              public:

                DateTime();

                DateTime(int64_t seconds_,int32_t nanoseconds_);

                int64_t& seconds() noexcept {
                    return m_seconds_;
                }

                const int64_t& seconds() const noexcept {
                    return m_seconds_;
                }

                void seconds(int64_t value) {

                    m_seconds_ = value;
                }

                int32_t& nanoseconds() noexcept {
                    return m_nanoseconds_;
                }

                const int32_t& nanoseconds() const noexcept {
                    return m_nanoseconds_;
                }

                void nanoseconds(int32_t value) {

                    m_nanoseconds_ = value;
                }

                bool operator == (const DateTime& other_) const;
                bool operator != (const DateTime& other_) const;

                void swap(DateTime& other_) noexcept ;

              private:

                int64_t m_seconds_;
                int32_t m_nanoseconds_;

            };

            inline void swap(DateTime& a, DateTime& b)  noexcept 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const DateTime& sample);

            static const double Density_MIN = 0.0;

            static const double Density_MAX = 3e17;

            typedef double Density;
            struct Density_AliasTag_t {};

            static const double Distance_MIN = 0.0;

            static const double Distance_MAX = 401056000.0;

            typedef double Distance;
            struct Distance_AliasTag_t {};

            static const double DurationHours_MIN = 0.0;

            static const double DurationHours_MAX = 10505.0;

            typedef double DurationHours;
            struct DurationHours_AliasTag_t {};

            static const double DurationSeconds_MIN = 0.0;

            static const double DurationSeconds_MAX = 37817280.0;

            typedef double DurationSeconds;
            struct DurationSeconds_AliasTag_t {};

            static const double ElectricalPower_MIN = 0.0;

            static const double ElectricalPower_MAX = 100000000.0;

            typedef double ElectricalPower;
            struct ElectricalPower_AliasTag_t {};

            static const double EngineSpeed_MIN = -100000.0;

            static const double EngineSpeed_MAX = 100000.0;

            typedef double EngineSpeed;
            struct EngineSpeed_AliasTag_t {};

            static const double Force_MIN = 0.0;

            static const double Force_MAX = 100000000.0;

            typedef double Force;
            struct Force_AliasTag_t {};

            static const double FrequencyHertz_MIN = 0.0;

            static const double FrequencyHertz_MAX = 1e10;

            typedef double FrequencyHertz;
            struct FrequencyHertz_AliasTag_t {};

            static const double GroundSpeed_MIN = -299792458.0;

            static const double GroundSpeed_MAX = 299792458.0;

            typedef double GroundSpeed;
            struct GroundSpeed_AliasTag_t {};

            static const double HeadingTrueNorthAngle_MIN = -6.28318530718;

            static const double HeadingTrueNorthAngle_MAX = 6.28318530718;

            typedef double HeadingTrueNorthAngle;
            struct HeadingTrueNorthAngle_AliasTag_t {};

            static const double IndicatedAirspeed_MIN = 0.0;

            static const double IndicatedAirspeed_MAX = 299792458.0;

            typedef double IndicatedAirspeed;
            struct IndicatedAirspeed_AliasTag_t {};

            static const double MagneticVariation_MIN = -6.28318530718;

            static const double MagneticVariation_MAX = 6.28318530718;

            typedef double MagneticVariation;
            struct MagneticVariation_AliasTag_t {};

            static const double Mass_MIN = 0.0;

            static const double Mass_MAX = 100000000.0;

            typedef double Mass;
            struct Mass_AliasTag_t {};

            typedef ::dds::core::array< uint8_t, 16L> NumericGUID;
            struct NumericGUID_AliasTag_t {};

            static const double Percent_MIN = 0.0;

            static const double Percent_MAX = 1000.0;

            typedef double Percent;
            struct Percent_AliasTag_t {};

            static const double PitchHalfAngle_MIN = -1.5707963267948966;

            static const double PitchHalfAngle_MAX = 1.5707963267948966;

            typedef double PitchHalfAngle;
            struct PitchHalfAngle_AliasTag_t {};

            static const double PitchAcceleration_MIN = -10000.0;

            static const double PitchAcceleration_MAX = 10000.0;

            typedef double PitchAcceleration;
            struct PitchAcceleration_AliasTag_t {};

            static const double PitchRate_MIN = -32.767;

            static const double PitchRate_MAX = 32.767;

            typedef double PitchRate;
            struct PitchRate_AliasTag_t {};

            static const double PowerBusCurrent_MIN = -100000.0;

            static const double PowerBusCurrent_MAX = 100000.0;

            typedef double PowerBusCurrent;
            struct PowerBusCurrent_AliasTag_t {};

            static const double PowerBusVoltage_MIN = -100000.0;

            static const double PowerBusVoltage_MAX = 100000.0;

            typedef double PowerBusVoltage;
            struct PowerBusVoltage_AliasTag_t {};

            static const double PressureKiloPascals_MIN = 0.0;

            static const double PressureKiloPascals_MAX = 51200.0;

            typedef double PressureKiloPascals;
            struct PressureKiloPascals_AliasTag_t {};

            static const double PressurePascals_MIN = 0.0;

            static const double PressurePascals_MAX = 107558000.0;

            typedef double PressurePascals;
            struct PressurePascals_AliasTag_t {};

            static const double RadioFrequencyHertz_MIN = 0.0;

            static const double RadioFrequencyHertz_MAX = 1e10;

            typedef double RadioFrequencyHertz;
            struct RadioFrequencyHertz_AliasTag_t {};

            static const double RelativeAngle_MIN = -6.28318530718;

            static const double RelativeAngle_MAX = 6.28318530718;

            typedef double RelativeAngle;
            struct RelativeAngle_AliasTag_t {};

            static const double RelativeHumidity_MIN = 0.0;

            static const double RelativeHumidity_MAX = 1000.0;

            typedef double RelativeHumidity;
            struct RelativeHumidity_AliasTag_t {};

            static const double RollAngle_MIN = -6.28318530718;

            static const double RollAngle_MAX = 6.28318530718;

            typedef double RollAngle;
            struct RollAngle_AliasTag_t {};

            static const double RollAcceleration_MIN = -10000.0;

            static const double RollAcceleration_MAX = 10000.0;

            typedef double RollAcceleration;
            struct RollAcceleration_AliasTag_t {};

            static const double RollRate_MIN = -32.767;

            static const double RollRate_MAX = 32.767;

            typedef double RollRate;
            struct RollRate_AliasTag_t {};

            static const int32_t SizeBytes_MIN = 0L;

            static const int32_t SizeBytes_MAX = 1000000000L;

            typedef int32_t SizeBytes;
            struct SizeBytes_AliasTag_t {};

            typedef double SizeReal;
            struct SizeReal_AliasTag_t {};

            static const double Speed_MIN = 0.0;

            static const double Speed_MAX = 299792458.0;

            typedef double Speed;
            struct Speed_AliasTag_t {};

            static const double Temperature_MIN = -273.0;

            static const double Temperature_MAX = 1000.0;

            typedef double Temperature;
            struct Temperature_AliasTag_t {};

            static const double TurnRate_MIN = -32.767;

            static const double TurnRate_MAX = 32.767;

            typedef double TurnRate;
            struct TurnRate_AliasTag_t {};

            static const double YawAcceleration_MIN = -10000.0;

            static const double YawAcceleration_MAX = 10000.0;

            typedef double YawAcceleration;
            struct YawAcceleration_AliasTag_t {};

            static const double YawRate_MIN = -32.767;

            static const double YawRate_MAX = 32.767;

            typedef double YawRate;
            struct YawRate_AliasTag_t {};
        } // namespace Measurement  
    } // namespace Common  
} // namespace UMAA  

#ifdef NDDS_STANDALONE_TYPE
namespace rti { 
    namespace topic {
    }
}
#else

namespace rti {
    namespace flat {
        namespace topic {
        }
    }
}
namespace dds {
    namespace topic {

        template<>
        struct topic_type_name< ::UMAA::Common::Measurement::DateTime > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::Common::Measurement::DateTime";
            }
        };

        template<>
        struct is_topic_type< ::UMAA::Common::Measurement::DateTime > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< ::UMAA::Common::Measurement::DateTime > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const ::UMAA::Common::Measurement::DateTime& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(::UMAA::Common::Measurement::DateTime& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(::UMAA::Common::Measurement::DateTime& sample);

            NDDSUSERDllExport 
            static void allocate_sample(::UMAA::Common::Measurement::DateTime& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };
    }
}

namespace rti { 
    namespace topic {

        template<>
        struct dynamic_type< ::UMAA::Common::Measurement::AmpHours_AliasTag_t > {
            typedef ::dds::core::xtypes::AliasType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::AliasType& get();
        };

        template<>
        struct dynamic_type< ::UMAA::Common::Measurement::AngleAcceleration_AliasTag_t > {
            typedef ::dds::core::xtypes::AliasType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::AliasType& get();
        };

        template<>
        struct dynamic_type< ::UMAA::Common::Measurement::AzimuthTrueNorthAngle_AliasTag_t > {
            typedef ::dds::core::xtypes::AliasType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::AliasType& get();
        };

        template<>
        struct dynamic_type< ::UMAA::Common::Measurement::BatteryCurrent_AliasTag_t > {
            typedef ::dds::core::xtypes::AliasType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::AliasType& get();
        };

        template<>
        struct dynamic_type< ::UMAA::Common::Measurement::BatteryCurrentDuration_AliasTag_t > {
            typedef ::dds::core::xtypes::AliasType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::AliasType& get();
        };

        template<>
        struct dynamic_type< ::UMAA::Common::Measurement::BatteryCycles_AliasTag_t > {
            typedef ::dds::core::xtypes::AliasType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::AliasType& get();
        };

        template<>
        struct dynamic_type< ::UMAA::Common::Measurement::BinaryValue_AliasTag_t > {
            typedef ::dds::core::xtypes::AliasType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::AliasType& get();
        };

        template<>
        struct dynamic_type< ::UMAA::Common::Measurement::ByteValue_AliasTag_t > {
            typedef ::dds::core::xtypes::AliasType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::AliasType& get();
        };

        template<>
        struct dynamic_type< ::UMAA::Common::Measurement::Charge_AliasTag_t > {
            typedef ::dds::core::xtypes::AliasType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::AliasType& get();
        };

        template<>
        struct dynamic_type< ::UMAA::Common::Measurement::CharValue_AliasTag_t > {
            typedef ::dds::core::xtypes::AliasType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::AliasType& get();
        };

        template<>
        struct dynamic_type< ::UMAA::Common::Measurement::Conductivity_AliasTag_t > {
            typedef ::dds::core::xtypes::AliasType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::AliasType& get();
        };

        template<>
        struct dynamic_type< ::UMAA::Common::Measurement::DataTransferRate_AliasTag_t > {
            typedef ::dds::core::xtypes::AliasType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::AliasType& get();
        };

        template<>
        struct dynamic_type< ::UMAA::Common::Measurement::DistanceASF_AliasTag_t > {
            typedef ::dds::core::xtypes::AliasType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::AliasType& get();
        };

        template<>
        struct dynamic_type< ::UMAA::Common::Measurement::DistanceBSL_AliasTag_t > {
            typedef ::dds::core::xtypes::AliasType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::AliasType& get();
        };

        template<>
        struct dynamic_type< ::UMAA::Common::Measurement::DistanceAGL_AliasTag_t > {
            typedef ::dds::core::xtypes::AliasType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::AliasType& get();
        };

        template<>
        struct dynamic_type< ::UMAA::Common::Measurement::DoubleValue_AliasTag_t > {
            typedef ::dds::core::xtypes::AliasType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::AliasType& get();
        };

        template<>
        struct dynamic_type< ::UMAA::Common::Measurement::DurationMilliseconds_AliasTag_t > {
            typedef ::dds::core::xtypes::AliasType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::AliasType& get();
        };

        template<>
        struct dynamic_type< ::UMAA::Common::Measurement::Effort_AliasTag_t > {
            typedef ::dds::core::xtypes::AliasType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::AliasType& get();
        };

        template<>
        struct dynamic_type< ::UMAA::Common::Measurement::ElectroMagneticFrequencyHertz_AliasTag_t > {
            typedef ::dds::core::xtypes::AliasType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::AliasType& get();
        };

        template<>
        struct dynamic_type< ::UMAA::Common::Measurement::EnergyPercent_AliasTag_t > {
            typedef ::dds::core::xtypes::AliasType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::AliasType& get();
        };

        template<>
        struct dynamic_type< ::UMAA::Common::Measurement::FrequencyRPM_AliasTag_t > {
            typedef ::dds::core::xtypes::AliasType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::AliasType& get();
        };

        template<>
        struct dynamic_type< ::UMAA::Common::Measurement::GammaAnglePropulsor_AliasTag_t > {
            typedef ::dds::core::xtypes::AliasType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::AliasType& get();
        };

        template<>
        struct dynamic_type< ::UMAA::Common::Measurement::HeadingCurrentDirection_AliasTag_t > {
            typedef ::dds::core::xtypes::AliasType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::AliasType& get();
        };

        template<>
        struct dynamic_type< ::UMAA::Common::Measurement::HeadingMagneticNorth_AliasTag_t > {
            typedef ::dds::core::xtypes::AliasType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::AliasType& get();
        };

        template<>
        struct dynamic_type< ::UMAA::Common::Measurement::HeadingTarget_AliasTag_t > {
            typedef ::dds::core::xtypes::AliasType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::AliasType& get();
        };

        template<>
        struct dynamic_type< ::UMAA::Common::Measurement::HeadingWindDirection_AliasTag_t > {
            typedef ::dds::core::xtypes::AliasType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::AliasType& get();
        };

        template<>
        struct dynamic_type< ::UMAA::Common::Measurement::IntegerValue_AliasTag_t > {
            typedef ::dds::core::xtypes::AliasType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::AliasType& get();
        };

        template<>
        struct dynamic_type< ::UMAA::Common::Measurement::LargeCount_AliasTag_t > {
            typedef ::dds::core::xtypes::AliasType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::AliasType& get();
        };

        template<>
        struct dynamic_type< ::UMAA::Common::Measurement::MassMetricTon_AliasTag_t > {
            typedef ::dds::core::xtypes::AliasType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::AliasType& get();
        };

        template<>
        struct dynamic_type< ::UMAA::Common::Measurement::MassFlowRate_AliasTag_t > {
            typedef ::dds::core::xtypes::AliasType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::AliasType& get();
        };

        template<>
        struct dynamic_type< ::UMAA::Common::Measurement::MSLAltitude_AliasTag_t > {
            typedef ::dds::core::xtypes::AliasType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::AliasType& get();
        };

        template<>
        struct dynamic_type< ::UMAA::Common::Measurement::PressurePercent_AliasTag_t > {
            typedef ::dds::core::xtypes::AliasType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::AliasType& get();
        };

        template<>
        struct dynamic_type< ::UMAA::Common::Measurement::Priority_AliasTag_t > {
            typedef ::dds::core::xtypes::AliasType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::AliasType& get();
        };

        template<>
        struct dynamic_type< ::UMAA::Common::Measurement::PropellerPitchAnglePropulsor_AliasTag_t > {
            typedef ::dds::core::xtypes::AliasType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::AliasType& get();
        };

        template<>
        struct dynamic_type< ::UMAA::Common::Measurement::RhoAnglePropulsor_AliasTag_t > {
            typedef ::dds::core::xtypes::AliasType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::AliasType& get();
        };

        template<>
        struct dynamic_type< ::UMAA::Common::Measurement::Salinity_AliasTag_t > {
            typedef ::dds::core::xtypes::AliasType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::AliasType& get();
        };

        template<>
        struct dynamic_type< ::UMAA::Common::Measurement::SegmentID_AliasTag_t > {
            typedef ::dds::core::xtypes::AliasType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::AliasType& get();
        };

        template<>
        struct dynamic_type< ::UMAA::Common::Measurement::SidesCount_AliasTag_t > {
            typedef ::dds::core::xtypes::AliasType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::AliasType& get();
        };

        template<>
        struct dynamic_type< ::UMAA::Common::Measurement::SizeLargeBytes_AliasTag_t > {
            typedef ::dds::core::xtypes::AliasType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::AliasType& get();
        };

        template<>
        struct dynamic_type< ::UMAA::Common::Measurement::SpeedASF_AliasTag_t > {
            typedef ::dds::core::xtypes::AliasType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::AliasType& get();
        };

        template<>
        struct dynamic_type< ::UMAA::Common::Measurement::SpeedBSL_AliasTag_t > {
            typedef ::dds::core::xtypes::AliasType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::AliasType& get();
        };

        template<>
        struct dynamic_type< ::UMAA::Common::Measurement::SpeedLocalWaterMass_AliasTag_t > {
            typedef ::dds::core::xtypes::AliasType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::AliasType& get();
        };

        template<>
        struct dynamic_type< ::UMAA::Common::Measurement::TransmitAttenuation_AliasTag_t > {
            typedef ::dds::core::xtypes::AliasType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::AliasType& get();
        };

        template<>
        struct dynamic_type< ::UMAA::Common::Measurement::Turbidity_AliasTag_t > {
            typedef ::dds::core::xtypes::AliasType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::AliasType& get();
        };

        template<>
        struct dynamic_type< ::UMAA::Common::Measurement::VolumeCubicMeter_AliasTag_t > {
            typedef ::dds::core::xtypes::AliasType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::AliasType& get();
        };

        template<>
        struct dynamic_type< ::UMAA::Common::Measurement::VolumePercent_AliasTag_t > {
            typedef ::dds::core::xtypes::AliasType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::AliasType& get();
        };

        template<>
        struct dynamic_type< ::UMAA::Common::Measurement::VolumetricFlowRate_AliasTag_t > {
            typedef ::dds::core::xtypes::AliasType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::AliasType& get();
        };

        template<>
        struct dynamic_type< ::UMAA::Common::Measurement::WattHours_AliasTag_t > {
            typedef ::dds::core::xtypes::AliasType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::AliasType& get();
        };

        template<>
        struct dynamic_type< ::UMAA::Common::Measurement::YawAngle_AliasTag_t > {
            typedef ::dds::core::xtypes::AliasType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::AliasType& get();
        };

        template<>
        struct dynamic_type< ::UMAA::Common::Measurement::AccelerationScalar_AliasTag_t > {
            typedef ::dds::core::xtypes::AliasType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::AliasType& get();
        };

        template<>
        struct dynamic_type< ::UMAA::Common::Measurement::Angle_AliasTag_t > {
            typedef ::dds::core::xtypes::AliasType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::AliasType& get();
        };

        template<>
        struct dynamic_type< ::UMAA::Common::Measurement::AngleRate_AliasTag_t > {
            typedef ::dds::core::xtypes::AliasType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::AliasType& get();
        };

        template<>
        struct dynamic_type< ::UMAA::Common::Measurement::Count_AliasTag_t > {
            typedef ::dds::core::xtypes::AliasType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::AliasType& get();
        };

        template<>
        struct dynamic_type< ::UMAA::Common::Measurement::CourseTrueNorth_AliasTag_t > {
            typedef ::dds::core::xtypes::AliasType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::AliasType& get();
        };

        template<>
        struct dynamic_type< ::UMAA::Common::Measurement::DateTimeSeconds_AliasTag_t > {
            typedef ::dds::core::xtypes::AliasType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::AliasType& get();
        };

        template<>
        struct dynamic_type< ::UMAA::Common::Measurement::DateTimeNanoseconds_AliasTag_t > {
            typedef ::dds::core::xtypes::AliasType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::AliasType& get();
        };

        template<>
        struct dynamic_type< ::UMAA::Common::Measurement::DateTime > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };

        template <>
        struct extensibility< ::UMAA::Common::Measurement::DateTime > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

        template<>
        struct dynamic_type< ::UMAA::Common::Measurement::Density_AliasTag_t > {
            typedef ::dds::core::xtypes::AliasType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::AliasType& get();
        };

        template<>
        struct dynamic_type< ::UMAA::Common::Measurement::Distance_AliasTag_t > {
            typedef ::dds::core::xtypes::AliasType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::AliasType& get();
        };

        template<>
        struct dynamic_type< ::UMAA::Common::Measurement::DurationHours_AliasTag_t > {
            typedef ::dds::core::xtypes::AliasType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::AliasType& get();
        };

        template<>
        struct dynamic_type< ::UMAA::Common::Measurement::DurationSeconds_AliasTag_t > {
            typedef ::dds::core::xtypes::AliasType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::AliasType& get();
        };

        template<>
        struct dynamic_type< ::UMAA::Common::Measurement::ElectricalPower_AliasTag_t > {
            typedef ::dds::core::xtypes::AliasType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::AliasType& get();
        };

        template<>
        struct dynamic_type< ::UMAA::Common::Measurement::EngineSpeed_AliasTag_t > {
            typedef ::dds::core::xtypes::AliasType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::AliasType& get();
        };

        template<>
        struct dynamic_type< ::UMAA::Common::Measurement::Force_AliasTag_t > {
            typedef ::dds::core::xtypes::AliasType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::AliasType& get();
        };

        template<>
        struct dynamic_type< ::UMAA::Common::Measurement::FrequencyHertz_AliasTag_t > {
            typedef ::dds::core::xtypes::AliasType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::AliasType& get();
        };

        template<>
        struct dynamic_type< ::UMAA::Common::Measurement::GroundSpeed_AliasTag_t > {
            typedef ::dds::core::xtypes::AliasType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::AliasType& get();
        };

        template<>
        struct dynamic_type< ::UMAA::Common::Measurement::HeadingTrueNorthAngle_AliasTag_t > {
            typedef ::dds::core::xtypes::AliasType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::AliasType& get();
        };

        template<>
        struct dynamic_type< ::UMAA::Common::Measurement::IndicatedAirspeed_AliasTag_t > {
            typedef ::dds::core::xtypes::AliasType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::AliasType& get();
        };

        template<>
        struct dynamic_type< ::UMAA::Common::Measurement::MagneticVariation_AliasTag_t > {
            typedef ::dds::core::xtypes::AliasType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::AliasType& get();
        };

        template<>
        struct dynamic_type< ::UMAA::Common::Measurement::Mass_AliasTag_t > {
            typedef ::dds::core::xtypes::AliasType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::AliasType& get();
        };

        template<>
        struct dynamic_type< ::UMAA::Common::Measurement::NumericGUID_AliasTag_t > {
            typedef ::dds::core::xtypes::AliasType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::AliasType& get();
        };

        template<>
        struct dynamic_type< ::UMAA::Common::Measurement::Percent_AliasTag_t > {
            typedef ::dds::core::xtypes::AliasType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::AliasType& get();
        };

        template<>
        struct dynamic_type< ::UMAA::Common::Measurement::PitchHalfAngle_AliasTag_t > {
            typedef ::dds::core::xtypes::AliasType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::AliasType& get();
        };

        template<>
        struct dynamic_type< ::UMAA::Common::Measurement::PitchAcceleration_AliasTag_t > {
            typedef ::dds::core::xtypes::AliasType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::AliasType& get();
        };

        template<>
        struct dynamic_type< ::UMAA::Common::Measurement::PitchRate_AliasTag_t > {
            typedef ::dds::core::xtypes::AliasType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::AliasType& get();
        };

        template<>
        struct dynamic_type< ::UMAA::Common::Measurement::PowerBusCurrent_AliasTag_t > {
            typedef ::dds::core::xtypes::AliasType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::AliasType& get();
        };

        template<>
        struct dynamic_type< ::UMAA::Common::Measurement::PowerBusVoltage_AliasTag_t > {
            typedef ::dds::core::xtypes::AliasType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::AliasType& get();
        };

        template<>
        struct dynamic_type< ::UMAA::Common::Measurement::PressureKiloPascals_AliasTag_t > {
            typedef ::dds::core::xtypes::AliasType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::AliasType& get();
        };

        template<>
        struct dynamic_type< ::UMAA::Common::Measurement::PressurePascals_AliasTag_t > {
            typedef ::dds::core::xtypes::AliasType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::AliasType& get();
        };

        template<>
        struct dynamic_type< ::UMAA::Common::Measurement::RadioFrequencyHertz_AliasTag_t > {
            typedef ::dds::core::xtypes::AliasType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::AliasType& get();
        };

        template<>
        struct dynamic_type< ::UMAA::Common::Measurement::RelativeAngle_AliasTag_t > {
            typedef ::dds::core::xtypes::AliasType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::AliasType& get();
        };

        template<>
        struct dynamic_type< ::UMAA::Common::Measurement::RelativeHumidity_AliasTag_t > {
            typedef ::dds::core::xtypes::AliasType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::AliasType& get();
        };

        template<>
        struct dynamic_type< ::UMAA::Common::Measurement::RollAngle_AliasTag_t > {
            typedef ::dds::core::xtypes::AliasType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::AliasType& get();
        };

        template<>
        struct dynamic_type< ::UMAA::Common::Measurement::RollAcceleration_AliasTag_t > {
            typedef ::dds::core::xtypes::AliasType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::AliasType& get();
        };

        template<>
        struct dynamic_type< ::UMAA::Common::Measurement::RollRate_AliasTag_t > {
            typedef ::dds::core::xtypes::AliasType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::AliasType& get();
        };

        template<>
        struct dynamic_type< ::UMAA::Common::Measurement::SizeBytes_AliasTag_t > {
            typedef ::dds::core::xtypes::AliasType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::AliasType& get();
        };

        template<>
        struct dynamic_type< ::UMAA::Common::Measurement::SizeReal_AliasTag_t > {
            typedef ::dds::core::xtypes::AliasType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::AliasType& get();
        };

        template<>
        struct dynamic_type< ::UMAA::Common::Measurement::Speed_AliasTag_t > {
            typedef ::dds::core::xtypes::AliasType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::AliasType& get();
        };

        template<>
        struct dynamic_type< ::UMAA::Common::Measurement::Temperature_AliasTag_t > {
            typedef ::dds::core::xtypes::AliasType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::AliasType& get();
        };

        template<>
        struct dynamic_type< ::UMAA::Common::Measurement::TurnRate_AliasTag_t > {
            typedef ::dds::core::xtypes::AliasType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::AliasType& get();
        };

        template<>
        struct dynamic_type< ::UMAA::Common::Measurement::YawAcceleration_AliasTag_t > {
            typedef ::dds::core::xtypes::AliasType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::AliasType& get();
        };

        template<>
        struct dynamic_type< ::UMAA::Common::Measurement::YawRate_AliasTag_t > {
            typedef ::dds::core::xtypes::AliasType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::AliasType& get();
        };

    }
}

#endif // NDDS_STANDALONE_TYPE
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif // Measurements_576970989_hpp

