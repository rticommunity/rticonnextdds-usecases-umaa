

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ConstrainedTypes.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef ConstrainedTypes_846152741_hpp
#define ConstrainedTypes_846152741_hpp

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
        namespace PrimitiveConstrained {

            static const double AccelerationLocalWaterMass_MIN = -299792458.0;

            static const double AccelerationLocalWaterMass_MAX = 299792458.0;

            typedef double AccelerationLocalWaterMass;
            struct AccelerationLocalWaterMass_AliasTag_t {};

            static const double AirTemperature_MIN = -100.0;

            static const double AirTemperature_MAX = 100.0;

            typedef double AirTemperature;
            struct AirTemperature_AliasTag_t {};

            static const double AngleAcceleration_MIN = -10000.0;

            static const double AngleAcceleration_MAX = 10000.0;

            typedef double AngleAcceleration;
            struct AngleAcceleration_AliasTag_t {};

            static const double BearingAngle_MIN = -6.28318530718;

            static const double BearingAngle_MAX = 6.28318530718;

            typedef double BearingAngle;
            struct BearingAngle_AliasTag_t {};

            static const double CarrierToNoiseDensityRatio_MIN = 0.0;

            static const double CarrierToNoiseDensityRatio_MAX = 1000000.0;

            typedef double CarrierToNoiseDensityRatio;
            struct CarrierToNoiseDensityRatio_AliasTag_t {};

            static const int32_t ColorComponent_MIN = 0L;

            static const int32_t ColorComponent_MAX = 255L;

            typedef int32_t ColorComponent;
            struct ColorComponent_AliasTag_t {};

            typedef double ContactUncertainty;
            struct ContactUncertainty_AliasTag_t {};

            static const double CovarAccelPlatformXYZ_MIN = -10000.0;

            static const double CovarAccelPlatformXYZ_MAX = 10000.0;

            typedef double CovarAccelPlatformXYZ;
            struct CovarAccelPlatformXYZ_AliasTag_t {};

            static const double CovarOrientationAccelPlatformXYZ_MIN = -100.0;

            static const double CovarOrientationAccelPlatformXYZ_MAX = 100.0;

            typedef double CovarOrientationAccelPlatformXYZ;
            struct CovarOrientationAccelPlatformXYZ_AliasTag_t {};

            static const double CovarOrientationNED_MIN = -10000.0;

            static const double CovarOrientationNED_MAX = 10000.0;

            typedef double CovarOrientationNED;
            struct CovarOrientationNED_AliasTag_t {};

            static const double CovarOrientationVelNED_MIN = -10000.0;

            static const double CovarOrientationVelNED_MAX = 10000.0;

            typedef double CovarOrientationVelNED;
            struct CovarOrientationVelNED_AliasTag_t {};

            static const double CovarPosECEF_MIN = -10000.0;

            static const double CovarPosECEF_MAX = 10000.0;

            typedef double CovarPosECEF;
            struct CovarPosECEF_AliasTag_t {};

            static const double CovarPosNED_MIN = -10000.0;

            static const double CovarPosNED_MAX = 10000.0;

            typedef double CovarPosNED;
            struct CovarPosNED_AliasTag_t {};

            static const double CovarPosVelNED_MIN = -10000.0;

            static const double CovarPosVelNED_MAX = 10000.0;

            typedef double CovarPosVelNED;
            struct CovarPosVelNED_AliasTag_t {};

            static const double CovarVelNED_MIN = -10000.0;

            static const double CovarVelNED_MAX = 10000.0;

            typedef double CovarVelNED;
            struct CovarVelNED_AliasTag_t {};

            static const double DewPointTemperature_MIN = -100.0;

            static const double DewPointTemperature_MAX = 100.0;

            typedef double DewPointTemperature;
            struct DewPointTemperature_AliasTag_t {};

            static const double GeodeticAltitude_MIN = -10000.0;

            static const double GeodeticAltitude_MAX = 700000.0;

            typedef double GeodeticAltitude;
            struct GeodeticAltitude_AliasTag_t {};

            static const double IlluminatorBeamWidth_MIN = 0.0;

            static const double IlluminatorBeamWidth_MAX = 6.28318530718;

            typedef double IlluminatorBeamWidth;
            struct IlluminatorBeamWidth_AliasTag_t {};

            static const double IlluminatorIntensityLevel_MIN = 0.0;

            static const double IlluminatorIntensityLevel_MAX = 100.0;

            typedef double IlluminatorIntensityLevel;
            struct IlluminatorIntensityLevel_AliasTag_t {};

            static const double Left_MIN = -20000000.0;

            static const double Left_MAX = 20000000.0;

            typedef double Left;
            struct Left_AliasTag_t {};

            static const double MaxEngineOilPressure_MIN = 0.0;

            static const double MaxEngineOilPressure_MAX = 512.0;

            typedef double MaxEngineOilPressure;
            struct MaxEngineOilPressure_AliasTag_t {};

            typedef std::string MMSI;
            struct MMSI_AliasTag_t {};

            static const int64_t NanosecondsCount_MIN = -9223372036854775807LL;

            static const int64_t NanosecondsCount_MAX = 9223372036854775807LL;

            typedef int64_t NanosecondsCount;
            struct NanosecondsCount_AliasTag_t {};

            static const int32_t NanosecondsDrift_MIN = -2147483648L;

            static const int32_t NanosecondsDrift_MAX = 2147483647L;

            typedef int32_t NanosecondsDrift;
            struct NanosecondsDrift_AliasTag_t {};

            static const double NaturalNumberCount_MIN = 0.0;

            static const double NaturalNumberCount_MAX = 9223372036854775807.0;

            typedef double NaturalNumberCount;
            struct NaturalNumberCount_AliasTag_t {};

            static const double PeakSoundPressureLevel_MIN = -400.0;

            static const double PeakSoundPressureLevel_MAX = 400.0;

            typedef double PeakSoundPressureLevel;
            struct PeakSoundPressureLevel_AliasTag_t {};

            typedef double Ratio;
            struct Ratio_AliasTag_t {};

            static const double SignalToNoiseRatio_MIN = 0.0;

            static const double SignalToNoiseRatio_MAX = 100.0;

            typedef double SignalToNoiseRatio;
            struct SignalToNoiseRatio_AliasTag_t {};

            static const double SpeedBSLAcceleration_MIN = -299792458.0;

            static const double SpeedBSLAcceleration_MAX = 299792458.0;

            typedef double SpeedBSLAcceleration;
            struct SpeedBSLAcceleration_AliasTag_t {};

            typedef std::string StringLongDescription;
            struct StringLongDescription_AliasTag_t {};

            typedef std::string StringName;
            struct StringName_AliasTag_t {};

            typedef std::string StringShortDescription;
            struct StringShortDescription_AliasTag_t {};

            typedef std::string StringValue;
            struct StringValue_AliasTag_t {};

            typedef std::string UniformResourceIdentifier;
            struct UniformResourceIdentifier_AliasTag_t {};

            static const double WaterTemperature_MIN = -22.0;

            static const double WaterTemperature_MAX = 100.0;

            typedef double WaterTemperature;
            struct WaterTemperature_AliasTag_t {};

            static const double WeatherBarometricPressure_MIN = 600.0;

            static const double WeatherBarometricPressure_MAX = 1200.0;

            typedef double WeatherBarometricPressure;
            struct WeatherBarometricPressure_AliasTag_t {};

            typedef double XPosition;
            struct XPosition_AliasTag_t {};

            typedef double YPosition;
            struct YPosition_AliasTag_t {};

            static const double ZPosition_MIN = -100000.0;

            static const double ZPosition_MAX = 100000.0;

            typedef double ZPosition;
            struct ZPosition_AliasTag_t {};
        } // namespace PrimitiveConstrained  
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

    }
}

namespace rti { 
    namespace topic {

        template<>
        struct dynamic_type< ::UMAA::Common::PrimitiveConstrained::AccelerationLocalWaterMass_AliasTag_t > {
            typedef ::dds::core::xtypes::AliasType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::AliasType& get();
        };

        template<>
        struct dynamic_type< ::UMAA::Common::PrimitiveConstrained::AirTemperature_AliasTag_t > {
            typedef ::dds::core::xtypes::AliasType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::AliasType& get();
        };

        template<>
        struct dynamic_type< ::UMAA::Common::PrimitiveConstrained::AngleAcceleration_AliasTag_t > {
            typedef ::dds::core::xtypes::AliasType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::AliasType& get();
        };

        template<>
        struct dynamic_type< ::UMAA::Common::PrimitiveConstrained::BearingAngle_AliasTag_t > {
            typedef ::dds::core::xtypes::AliasType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::AliasType& get();
        };

        template<>
        struct dynamic_type< ::UMAA::Common::PrimitiveConstrained::CarrierToNoiseDensityRatio_AliasTag_t > {
            typedef ::dds::core::xtypes::AliasType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::AliasType& get();
        };

        template<>
        struct dynamic_type< ::UMAA::Common::PrimitiveConstrained::ColorComponent_AliasTag_t > {
            typedef ::dds::core::xtypes::AliasType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::AliasType& get();
        };

        template<>
        struct dynamic_type< ::UMAA::Common::PrimitiveConstrained::ContactUncertainty_AliasTag_t > {
            typedef ::dds::core::xtypes::AliasType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::AliasType& get();
        };

        template<>
        struct dynamic_type< ::UMAA::Common::PrimitiveConstrained::CovarAccelPlatformXYZ_AliasTag_t > {
            typedef ::dds::core::xtypes::AliasType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::AliasType& get();
        };

        template<>
        struct dynamic_type< ::UMAA::Common::PrimitiveConstrained::CovarOrientationAccelPlatformXYZ_AliasTag_t > {
            typedef ::dds::core::xtypes::AliasType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::AliasType& get();
        };

        template<>
        struct dynamic_type< ::UMAA::Common::PrimitiveConstrained::CovarOrientationNED_AliasTag_t > {
            typedef ::dds::core::xtypes::AliasType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::AliasType& get();
        };

        template<>
        struct dynamic_type< ::UMAA::Common::PrimitiveConstrained::CovarOrientationVelNED_AliasTag_t > {
            typedef ::dds::core::xtypes::AliasType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::AliasType& get();
        };

        template<>
        struct dynamic_type< ::UMAA::Common::PrimitiveConstrained::CovarPosECEF_AliasTag_t > {
            typedef ::dds::core::xtypes::AliasType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::AliasType& get();
        };

        template<>
        struct dynamic_type< ::UMAA::Common::PrimitiveConstrained::CovarPosNED_AliasTag_t > {
            typedef ::dds::core::xtypes::AliasType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::AliasType& get();
        };

        template<>
        struct dynamic_type< ::UMAA::Common::PrimitiveConstrained::CovarPosVelNED_AliasTag_t > {
            typedef ::dds::core::xtypes::AliasType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::AliasType& get();
        };

        template<>
        struct dynamic_type< ::UMAA::Common::PrimitiveConstrained::CovarVelNED_AliasTag_t > {
            typedef ::dds::core::xtypes::AliasType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::AliasType& get();
        };

        template<>
        struct dynamic_type< ::UMAA::Common::PrimitiveConstrained::DewPointTemperature_AliasTag_t > {
            typedef ::dds::core::xtypes::AliasType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::AliasType& get();
        };

        template<>
        struct dynamic_type< ::UMAA::Common::PrimitiveConstrained::GeodeticAltitude_AliasTag_t > {
            typedef ::dds::core::xtypes::AliasType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::AliasType& get();
        };

        template<>
        struct dynamic_type< ::UMAA::Common::PrimitiveConstrained::IlluminatorBeamWidth_AliasTag_t > {
            typedef ::dds::core::xtypes::AliasType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::AliasType& get();
        };

        template<>
        struct dynamic_type< ::UMAA::Common::PrimitiveConstrained::IlluminatorIntensityLevel_AliasTag_t > {
            typedef ::dds::core::xtypes::AliasType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::AliasType& get();
        };

        template<>
        struct dynamic_type< ::UMAA::Common::PrimitiveConstrained::Left_AliasTag_t > {
            typedef ::dds::core::xtypes::AliasType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::AliasType& get();
        };

        template<>
        struct dynamic_type< ::UMAA::Common::PrimitiveConstrained::MaxEngineOilPressure_AliasTag_t > {
            typedef ::dds::core::xtypes::AliasType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::AliasType& get();
        };

        template<>
        struct dynamic_type< ::UMAA::Common::PrimitiveConstrained::MMSI_AliasTag_t > {
            typedef ::dds::core::xtypes::AliasType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::AliasType& get();
        };

        template<>
        struct dynamic_type< ::UMAA::Common::PrimitiveConstrained::NanosecondsCount_AliasTag_t > {
            typedef ::dds::core::xtypes::AliasType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::AliasType& get();
        };

        template<>
        struct dynamic_type< ::UMAA::Common::PrimitiveConstrained::NanosecondsDrift_AliasTag_t > {
            typedef ::dds::core::xtypes::AliasType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::AliasType& get();
        };

        template<>
        struct dynamic_type< ::UMAA::Common::PrimitiveConstrained::NaturalNumberCount_AliasTag_t > {
            typedef ::dds::core::xtypes::AliasType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::AliasType& get();
        };

        template<>
        struct dynamic_type< ::UMAA::Common::PrimitiveConstrained::PeakSoundPressureLevel_AliasTag_t > {
            typedef ::dds::core::xtypes::AliasType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::AliasType& get();
        };

        template<>
        struct dynamic_type< ::UMAA::Common::PrimitiveConstrained::Ratio_AliasTag_t > {
            typedef ::dds::core::xtypes::AliasType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::AliasType& get();
        };

        template<>
        struct dynamic_type< ::UMAA::Common::PrimitiveConstrained::SignalToNoiseRatio_AliasTag_t > {
            typedef ::dds::core::xtypes::AliasType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::AliasType& get();
        };

        template<>
        struct dynamic_type< ::UMAA::Common::PrimitiveConstrained::SpeedBSLAcceleration_AliasTag_t > {
            typedef ::dds::core::xtypes::AliasType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::AliasType& get();
        };

        template<>
        struct dynamic_type< ::UMAA::Common::PrimitiveConstrained::StringLongDescription_AliasTag_t > {
            typedef ::dds::core::xtypes::AliasType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::AliasType& get();
        };

        template<>
        struct dynamic_type< ::UMAA::Common::PrimitiveConstrained::StringName_AliasTag_t > {
            typedef ::dds::core::xtypes::AliasType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::AliasType& get();
        };

        template<>
        struct dynamic_type< ::UMAA::Common::PrimitiveConstrained::StringShortDescription_AliasTag_t > {
            typedef ::dds::core::xtypes::AliasType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::AliasType& get();
        };

        template<>
        struct dynamic_type< ::UMAA::Common::PrimitiveConstrained::StringValue_AliasTag_t > {
            typedef ::dds::core::xtypes::AliasType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::AliasType& get();
        };

        template<>
        struct dynamic_type< ::UMAA::Common::PrimitiveConstrained::UniformResourceIdentifier_AliasTag_t > {
            typedef ::dds::core::xtypes::AliasType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::AliasType& get();
        };

        template<>
        struct dynamic_type< ::UMAA::Common::PrimitiveConstrained::WaterTemperature_AliasTag_t > {
            typedef ::dds::core::xtypes::AliasType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::AliasType& get();
        };

        template<>
        struct dynamic_type< ::UMAA::Common::PrimitiveConstrained::WeatherBarometricPressure_AliasTag_t > {
            typedef ::dds::core::xtypes::AliasType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::AliasType& get();
        };

        template<>
        struct dynamic_type< ::UMAA::Common::PrimitiveConstrained::XPosition_AliasTag_t > {
            typedef ::dds::core::xtypes::AliasType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::AliasType& get();
        };

        template<>
        struct dynamic_type< ::UMAA::Common::PrimitiveConstrained::YPosition_AliasTag_t > {
            typedef ::dds::core::xtypes::AliasType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::AliasType& get();
        };

        template<>
        struct dynamic_type< ::UMAA::Common::PrimitiveConstrained::ZPosition_AliasTag_t > {
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

#endif // ConstrainedTypes_846152741_hpp

