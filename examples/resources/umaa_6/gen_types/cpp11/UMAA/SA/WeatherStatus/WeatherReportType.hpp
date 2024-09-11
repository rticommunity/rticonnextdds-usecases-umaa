

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from WeatherReportType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef WeatherReportType_1534037106_hpp
#define WeatherReportType_1534037106_hpp

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
#include "UMAA/Common/IdentifierType.hpp"
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
#include "UMAA/Common/OrderedEnumeration/OrderedEnumerationSets.hpp"
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
#include "UMAA/Common/PrimitiveConstrained/ConstrainedTypes.hpp"
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif
namespace UMAA {
    namespace SA {
        namespace WeatherStatus {

            static const std::string WeatherReportTypeTopic = "UMAA::SA::WeatherStatus::WeatherReportType";

            class NDDSUSERDllExport WeatherReportType {
              public:

                WeatherReportType();

                WeatherReportType(const ::dds::core::optional< double >& airTemperature_,const ::dds::core::optional< double >& barometricPressure_,const ::dds::core::optional< ::UMAA::Common::OrderedEnumeration::CloudCoverEnumModule::CloudCoverEnumType >& cloudiness_,const ::dds::core::optional< double >& dewPoint_,const ::dds::core::optional< ::UMAA::Common::OrderedEnumeration::WeatherSeverityEnumModule::WeatherSeverityEnumType >& icingSeverity_,const ::dds::core::optional< ::UMAA::Common::Enumeration::PrecipitationEnumModule::PrecipitationEnumType >& precipitation_,const ::dds::core::optional< double >& relativeHumidity_,const ::dds::core::optional< double >& thunderstormPotential_,const ::dds::core::optional< double >& visibility_,const ::dds::core::optional< double >& waterTemperature_,const ::UMAA::Common::Measurement::DateTime& timeStamp_,const ::UMAA::Common::IdentifierType& source_);

                ::dds::core::optional< double >& airTemperature() noexcept {
                    return m_airTemperature_;
                }

                const ::dds::core::optional< double >& airTemperature() const noexcept {
                    return m_airTemperature_;
                }

                void airTemperature(const ::dds::core::optional< double >& value) {

                    m_airTemperature_ = value;
                }

                void airTemperature(::dds::core::optional< double >&& value) {
                    m_airTemperature_ = std::move(value);
                }
                ::dds::core::optional< double >& barometricPressure() noexcept {
                    return m_barometricPressure_;
                }

                const ::dds::core::optional< double >& barometricPressure() const noexcept {
                    return m_barometricPressure_;
                }

                void barometricPressure(const ::dds::core::optional< double >& value) {

                    m_barometricPressure_ = value;
                }

                void barometricPressure(::dds::core::optional< double >&& value) {
                    m_barometricPressure_ = std::move(value);
                }
                ::dds::core::optional< ::UMAA::Common::OrderedEnumeration::CloudCoverEnumModule::CloudCoverEnumType >& cloudiness() noexcept {
                    return m_cloudiness_;
                }

                const ::dds::core::optional< ::UMAA::Common::OrderedEnumeration::CloudCoverEnumModule::CloudCoverEnumType >& cloudiness() const noexcept {
                    return m_cloudiness_;
                }

                void cloudiness(const ::dds::core::optional< ::UMAA::Common::OrderedEnumeration::CloudCoverEnumModule::CloudCoverEnumType >& value) {

                    m_cloudiness_ = value;
                }

                void cloudiness(::dds::core::optional< ::UMAA::Common::OrderedEnumeration::CloudCoverEnumModule::CloudCoverEnumType >&& value) {
                    m_cloudiness_ = std::move(value);
                }
                ::dds::core::optional< double >& dewPoint() noexcept {
                    return m_dewPoint_;
                }

                const ::dds::core::optional< double >& dewPoint() const noexcept {
                    return m_dewPoint_;
                }

                void dewPoint(const ::dds::core::optional< double >& value) {

                    m_dewPoint_ = value;
                }

                void dewPoint(::dds::core::optional< double >&& value) {
                    m_dewPoint_ = std::move(value);
                }
                ::dds::core::optional< ::UMAA::Common::OrderedEnumeration::WeatherSeverityEnumModule::WeatherSeverityEnumType >& icingSeverity() noexcept {
                    return m_icingSeverity_;
                }

                const ::dds::core::optional< ::UMAA::Common::OrderedEnumeration::WeatherSeverityEnumModule::WeatherSeverityEnumType >& icingSeverity() const noexcept {
                    return m_icingSeverity_;
                }

                void icingSeverity(const ::dds::core::optional< ::UMAA::Common::OrderedEnumeration::WeatherSeverityEnumModule::WeatherSeverityEnumType >& value) {

                    m_icingSeverity_ = value;
                }

                void icingSeverity(::dds::core::optional< ::UMAA::Common::OrderedEnumeration::WeatherSeverityEnumModule::WeatherSeverityEnumType >&& value) {
                    m_icingSeverity_ = std::move(value);
                }
                ::dds::core::optional< ::UMAA::Common::Enumeration::PrecipitationEnumModule::PrecipitationEnumType >& precipitation() noexcept {
                    return m_precipitation_;
                }

                const ::dds::core::optional< ::UMAA::Common::Enumeration::PrecipitationEnumModule::PrecipitationEnumType >& precipitation() const noexcept {
                    return m_precipitation_;
                }

                void precipitation(const ::dds::core::optional< ::UMAA::Common::Enumeration::PrecipitationEnumModule::PrecipitationEnumType >& value) {

                    m_precipitation_ = value;
                }

                void precipitation(::dds::core::optional< ::UMAA::Common::Enumeration::PrecipitationEnumModule::PrecipitationEnumType >&& value) {
                    m_precipitation_ = std::move(value);
                }
                ::dds::core::optional< double >& relativeHumidity() noexcept {
                    return m_relativeHumidity_;
                }

                const ::dds::core::optional< double >& relativeHumidity() const noexcept {
                    return m_relativeHumidity_;
                }

                void relativeHumidity(const ::dds::core::optional< double >& value) {

                    m_relativeHumidity_ = value;
                }

                void relativeHumidity(::dds::core::optional< double >&& value) {
                    m_relativeHumidity_ = std::move(value);
                }
                ::dds::core::optional< double >& thunderstormPotential() noexcept {
                    return m_thunderstormPotential_;
                }

                const ::dds::core::optional< double >& thunderstormPotential() const noexcept {
                    return m_thunderstormPotential_;
                }

                void thunderstormPotential(const ::dds::core::optional< double >& value) {

                    m_thunderstormPotential_ = value;
                }

                void thunderstormPotential(::dds::core::optional< double >&& value) {
                    m_thunderstormPotential_ = std::move(value);
                }
                ::dds::core::optional< double >& visibility() noexcept {
                    return m_visibility_;
                }

                const ::dds::core::optional< double >& visibility() const noexcept {
                    return m_visibility_;
                }

                void visibility(const ::dds::core::optional< double >& value) {

                    m_visibility_ = value;
                }

                void visibility(::dds::core::optional< double >&& value) {
                    m_visibility_ = std::move(value);
                }
                ::dds::core::optional< double >& waterTemperature() noexcept {
                    return m_waterTemperature_;
                }

                const ::dds::core::optional< double >& waterTemperature() const noexcept {
                    return m_waterTemperature_;
                }

                void waterTemperature(const ::dds::core::optional< double >& value) {

                    m_waterTemperature_ = value;
                }

                void waterTemperature(::dds::core::optional< double >&& value) {
                    m_waterTemperature_ = std::move(value);
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
                ::UMAA::Common::IdentifierType& source() noexcept {
                    return m_source_;
                }

                const ::UMAA::Common::IdentifierType& source() const noexcept {
                    return m_source_;
                }

                void source(const ::UMAA::Common::IdentifierType& value) {

                    m_source_ = value;
                }

                void source(::UMAA::Common::IdentifierType&& value) {
                    m_source_ = std::move(value);
                }
                bool operator == (const WeatherReportType& other_) const;
                bool operator != (const WeatherReportType& other_) const;

                void swap(WeatherReportType& other_) noexcept ;

              private:

                ::dds::core::optional< double > m_airTemperature_;
                ::dds::core::optional< double > m_barometricPressure_;
                ::dds::core::optional< ::UMAA::Common::OrderedEnumeration::CloudCoverEnumModule::CloudCoverEnumType > m_cloudiness_;
                ::dds::core::optional< double > m_dewPoint_;
                ::dds::core::optional< ::UMAA::Common::OrderedEnumeration::WeatherSeverityEnumModule::WeatherSeverityEnumType > m_icingSeverity_;
                ::dds::core::optional< ::UMAA::Common::Enumeration::PrecipitationEnumModule::PrecipitationEnumType > m_precipitation_;
                ::dds::core::optional< double > m_relativeHumidity_;
                ::dds::core::optional< double > m_thunderstormPotential_;
                ::dds::core::optional< double > m_visibility_;
                ::dds::core::optional< double > m_waterTemperature_;
                ::UMAA::Common::Measurement::DateTime m_timeStamp_;
                ::UMAA::Common::IdentifierType m_source_;

            };

            inline void swap(WeatherReportType& a, WeatherReportType& b)  noexcept 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const WeatherReportType& sample);

        } // namespace WeatherStatus  
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
        struct topic_type_name< ::UMAA::SA::WeatherStatus::WeatherReportType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::SA::WeatherStatus::WeatherReportType";
            }
        };

        template<>
        struct is_topic_type< ::UMAA::SA::WeatherStatus::WeatherReportType > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< ::UMAA::SA::WeatherStatus::WeatherReportType > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const ::UMAA::SA::WeatherStatus::WeatherReportType& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(::UMAA::SA::WeatherStatus::WeatherReportType& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(::UMAA::SA::WeatherStatus::WeatherReportType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(::UMAA::SA::WeatherStatus::WeatherReportType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };
    }
}

namespace rti { 
    namespace topic {

        template<>
        struct dynamic_type< ::UMAA::SA::WeatherStatus::WeatherReportType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };

        template <>
        struct extensibility< ::UMAA::SA::WeatherStatus::WeatherReportType > {
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

#endif // WeatherReportType_1534037106_hpp

