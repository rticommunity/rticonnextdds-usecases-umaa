

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from RangeConfigReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef RangeConfigReportType_319386127_hpp
#define RangeConfigReportType_319386127_hpp

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

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
#include "UMAA/Common/Enumeration/EnumerationSets.hpp"
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
#include "UMAA/Common/Measurement/Measurements.hpp"
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
#include "UMAA/SEM/SensorManagement/RangeErrorType.hpp"
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif
namespace UMAA {
    namespace SA {
        namespace RangeConfig {

            RTI_CONSTEXPR_OR_CONST_STRING std::string RangeConfigReport_TOPIC = "UMAA::SA::RangeConfig::RangeConfigReport";

            class NDDSUSERDllExport RangeConfigReportType {
              public:

                RangeConfigReportType();

                RangeConfigReportType(double horizontalFOVStartAngle_,double horizontalFOVStopAngle_,double maxRange_,double minRange_,const ::UMAA::SEM::SensorManagement::RangeErrorType& rangeError_,const ::UMAA::Common::Enumeration::PowerStatusEnumType::PowerStatusEnumType& status_,double updateRate_,double verticalFOVStartAngle_,double verticalFOVStopAngle_,const ::UMAA::Common::Measurement::NumericGUID& source_,const ::UMAA::Common::Measurement::DateTime& timeStamp_);

                double& horizontalFOVStartAngle() noexcept {
                    return m_horizontalFOVStartAngle_;
                }

                const double& horizontalFOVStartAngle() const noexcept {
                    return m_horizontalFOVStartAngle_;
                }

                void horizontalFOVStartAngle(double value) {

                    m_horizontalFOVStartAngle_ = value;
                }

                double& horizontalFOVStopAngle() noexcept {
                    return m_horizontalFOVStopAngle_;
                }

                const double& horizontalFOVStopAngle() const noexcept {
                    return m_horizontalFOVStopAngle_;
                }

                void horizontalFOVStopAngle(double value) {

                    m_horizontalFOVStopAngle_ = value;
                }

                double& maxRange() noexcept {
                    return m_maxRange_;
                }

                const double& maxRange() const noexcept {
                    return m_maxRange_;
                }

                void maxRange(double value) {

                    m_maxRange_ = value;
                }

                double& minRange() noexcept {
                    return m_minRange_;
                }

                const double& minRange() const noexcept {
                    return m_minRange_;
                }

                void minRange(double value) {

                    m_minRange_ = value;
                }

                ::UMAA::SEM::SensorManagement::RangeErrorType& rangeError() noexcept {
                    return m_rangeError_;
                }

                const ::UMAA::SEM::SensorManagement::RangeErrorType& rangeError() const noexcept {
                    return m_rangeError_;
                }

                void rangeError(const ::UMAA::SEM::SensorManagement::RangeErrorType& value) {

                    m_rangeError_ = value;
                }

                void rangeError(::UMAA::SEM::SensorManagement::RangeErrorType&& value) {
                    m_rangeError_ = std::move(value);
                }
                ::UMAA::Common::Enumeration::PowerStatusEnumType::PowerStatusEnumType& status() noexcept {
                    return m_status_;
                }

                const ::UMAA::Common::Enumeration::PowerStatusEnumType::PowerStatusEnumType& status() const noexcept {
                    return m_status_;
                }

                void status(const ::UMAA::Common::Enumeration::PowerStatusEnumType::PowerStatusEnumType& value) {

                    m_status_ = value;
                }

                void status(::UMAA::Common::Enumeration::PowerStatusEnumType::PowerStatusEnumType&& value) {
                    m_status_ = std::move(value);
                }
                double& updateRate() noexcept {
                    return m_updateRate_;
                }

                const double& updateRate() const noexcept {
                    return m_updateRate_;
                }

                void updateRate(double value) {

                    m_updateRate_ = value;
                }

                double& verticalFOVStartAngle() noexcept {
                    return m_verticalFOVStartAngle_;
                }

                const double& verticalFOVStartAngle() const noexcept {
                    return m_verticalFOVStartAngle_;
                }

                void verticalFOVStartAngle(double value) {

                    m_verticalFOVStartAngle_ = value;
                }

                double& verticalFOVStopAngle() noexcept {
                    return m_verticalFOVStopAngle_;
                }

                const double& verticalFOVStopAngle() const noexcept {
                    return m_verticalFOVStopAngle_;
                }

                void verticalFOVStopAngle(double value) {

                    m_verticalFOVStopAngle_ = value;
                }

                ::UMAA::Common::Measurement::NumericGUID& source() noexcept {
                    return m_source_;
                }

                const ::UMAA::Common::Measurement::NumericGUID& source() const noexcept {
                    return m_source_;
                }

                void source(const ::UMAA::Common::Measurement::NumericGUID& value) {

                    m_source_ = value;
                }

                void source(::UMAA::Common::Measurement::NumericGUID&& value) {
                    m_source_ = std::move(value);
                }
                ::UMAA::Common::Measurement::DateTime& timeStamp() noexcept {
                    return m_timeStamp_;
                }

                const ::UMAA::Common::Measurement::DateTime& timeStamp() const noexcept {
                    return m_timeStamp_;
                }

                void timeStamp(const ::UMAA::Common::Measurement::DateTime& value) {

                    m_timeStamp_ = value;
                }

                void timeStamp(::UMAA::Common::Measurement::DateTime&& value) {
                    m_timeStamp_ = std::move(value);
                }
                bool operator == (const RangeConfigReportType& other_) const;
                bool operator != (const RangeConfigReportType& other_) const;

                void swap(RangeConfigReportType& other_) noexcept ;

              private:

                double m_horizontalFOVStartAngle_;
                double m_horizontalFOVStopAngle_;
                double m_maxRange_;
                double m_minRange_;
                ::UMAA::SEM::SensorManagement::RangeErrorType m_rangeError_;
                ::UMAA::Common::Enumeration::PowerStatusEnumType::PowerStatusEnumType m_status_;
                double m_updateRate_;
                double m_verticalFOVStartAngle_;
                double m_verticalFOVStopAngle_;
                ::UMAA::Common::Measurement::NumericGUID m_source_ {};
                ::UMAA::Common::Measurement::DateTime m_timeStamp_;

            };

            inline void swap(RangeConfigReportType& a, RangeConfigReportType& b)  noexcept 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const RangeConfigReportType& sample);

        } // namespace RangeConfig  
    } // namespace SA  
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
        struct topic_type_name< ::UMAA::SA::RangeConfig::RangeConfigReportType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::SA::RangeConfig::RangeConfigReportType";
            }
        };

        template<>
        struct is_topic_type< ::UMAA::SA::RangeConfig::RangeConfigReportType > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< ::UMAA::SA::RangeConfig::RangeConfigReportType > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const ::UMAA::SA::RangeConfig::RangeConfigReportType& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(::UMAA::SA::RangeConfig::RangeConfigReportType& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(::UMAA::SA::RangeConfig::RangeConfigReportType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(::UMAA::SA::RangeConfig::RangeConfigReportType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };
    }
}

namespace rti { 
    namespace topic {

        template<>
        struct dynamic_type< ::UMAA::SA::RangeConfig::RangeConfigReportType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };

        template <>
        struct extensibility< ::UMAA::SA::RangeConfig::RangeConfigReportType > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

    }
}

#endif // NDDS_STANDALONE_TYPE
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif // RangeConfigReportType_319386127_hpp

