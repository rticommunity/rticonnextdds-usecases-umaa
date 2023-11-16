

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from WeatherStatusReportType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef WeatherStatusReportType_1246220673_hpp
#define WeatherStatusReportType_1246220673_hpp

#include <iosfwd>

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef RTIUSERDllExport
#define RTIUSERDllExport __declspec(dllexport)
#endif

#include "dds/domain/DomainParticipant.hpp"
#include "dds/topic/TopicTraits.hpp"
#include "dds/core/SafeEnumeration.hpp"
#include "dds/core/String.hpp"
#include "dds/core/array.hpp"
#include "dds/core/vector.hpp"
#include "dds/core/Optional.hpp"
#include "dds/core/xtypes/DynamicType.hpp"
#include "dds/core/xtypes/StructType.hpp"
#include "dds/core/xtypes/UnionType.hpp"
#include "dds/core/xtypes/EnumType.hpp"
#include "dds/core/xtypes/AliasType.hpp"
#include "rti/core/array.hpp"
#include "rti/core/BoundedSequence.hpp"
#include "rti/util/StreamFlagSaver.hpp"
#include "rti/domain/PluginSupport.hpp"
#include "rti/core/LongDouble.hpp"
#include "dds/core/External.hpp"
#include "rti/core/Pointer.hpp"
#include "rti/topic/TopicTraits.hpp"

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
#include "UMAA/Common/Measurement/CloudCoverType_All.hpp"
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
#include "UMAA/Common/Measurement/PrecipitationType_All.hpp"
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
#include "UMAA/Common/Measurement/WeatherSeverityType_All.hpp"
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
#include "UMAA/Common/MeasurementConstrained/ConstrainedTypes.hpp"
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif
namespace UMAA {
    namespace SA {
        namespace WeatherStatus {

            static const std::string WeatherStatusReport_TOPIC = "UMAA::SA::WeatherStatus::WeatherStatusReport";

            class NDDSUSERDllExport WeatherStatusReportType {
              public:
                WeatherStatusReportType();

                WeatherStatusReportType(const ::dds::core::optional< double >& airTemperature,const ::dds::core::optional< double >& barometricPressure,const ::dds::core::optional< UMAA::Common::Measurement::CloudCoverType_All >& cloudiness,const ::dds::core::optional< double >& dewPoint,const ::dds::core::optional< UMAA::Common::Measurement::WeatherSeverityType_All >& icingSeverity,const ::dds::core::optional< UMAA::Common::Measurement::PrecipitationType_All >& precipitation,const ::dds::core::optional< double >& relativeHumidity,const ::dds::core::optional< double >& thunderstormPotential,const ::dds::core::optional< double >& visibility,const ::dds::core::optional< double >& waterTemperature,const UMAA::Common::Measurement::NumericGUID& source,const UMAA::Common::Measurement::DateTime& timeStamp);

                #ifdef RTI_CXX11_RVALUE_REFERENCES
                #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
                WeatherStatusReportType (WeatherStatusReportType&&) = default;
                WeatherStatusReportType& operator=(WeatherStatusReportType&&) = default;
                WeatherStatusReportType& operator=(const WeatherStatusReportType&) = default;
                WeatherStatusReportType(const WeatherStatusReportType&) = default;
                #else
                WeatherStatusReportType(WeatherStatusReportType&& other_) OMG_NOEXCEPT;  
                WeatherStatusReportType& operator=(WeatherStatusReportType&&  other_) OMG_NOEXCEPT;
                #endif
                #endif 

                ::dds::core::optional< double >& airTemperature() OMG_NOEXCEPT {
                    return m_airTemperature_;
                }

                const ::dds::core::optional< double >& airTemperature() const OMG_NOEXCEPT {
                    return m_airTemperature_;
                }

                void airTemperature(const ::dds::core::optional< double >& value) {
                    m_airTemperature_ = value;
                }

                void airTemperature(::dds::core::optional< double >&& value) {
                    m_airTemperature_ = std::move(value);
                }
                ::dds::core::optional< double >& barometricPressure() OMG_NOEXCEPT {
                    return m_barometricPressure_;
                }

                const ::dds::core::optional< double >& barometricPressure() const OMG_NOEXCEPT {
                    return m_barometricPressure_;
                }

                void barometricPressure(const ::dds::core::optional< double >& value) {
                    m_barometricPressure_ = value;
                }

                void barometricPressure(::dds::core::optional< double >&& value) {
                    m_barometricPressure_ = std::move(value);
                }
                ::dds::core::optional< UMAA::Common::Measurement::CloudCoverType_All >& cloudiness() OMG_NOEXCEPT {
                    return m_cloudiness_;
                }

                const ::dds::core::optional< UMAA::Common::Measurement::CloudCoverType_All >& cloudiness() const OMG_NOEXCEPT {
                    return m_cloudiness_;
                }

                void cloudiness(const ::dds::core::optional< UMAA::Common::Measurement::CloudCoverType_All >& value) {
                    m_cloudiness_ = value;
                }

                void cloudiness(::dds::core::optional< UMAA::Common::Measurement::CloudCoverType_All >&& value) {
                    m_cloudiness_ = std::move(value);
                }
                ::dds::core::optional< double >& dewPoint() OMG_NOEXCEPT {
                    return m_dewPoint_;
                }

                const ::dds::core::optional< double >& dewPoint() const OMG_NOEXCEPT {
                    return m_dewPoint_;
                }

                void dewPoint(const ::dds::core::optional< double >& value) {
                    m_dewPoint_ = value;
                }

                void dewPoint(::dds::core::optional< double >&& value) {
                    m_dewPoint_ = std::move(value);
                }
                ::dds::core::optional< UMAA::Common::Measurement::WeatherSeverityType_All >& icingSeverity() OMG_NOEXCEPT {
                    return m_icingSeverity_;
                }

                const ::dds::core::optional< UMAA::Common::Measurement::WeatherSeverityType_All >& icingSeverity() const OMG_NOEXCEPT {
                    return m_icingSeverity_;
                }

                void icingSeverity(const ::dds::core::optional< UMAA::Common::Measurement::WeatherSeverityType_All >& value) {
                    m_icingSeverity_ = value;
                }

                void icingSeverity(::dds::core::optional< UMAA::Common::Measurement::WeatherSeverityType_All >&& value) {
                    m_icingSeverity_ = std::move(value);
                }
                ::dds::core::optional< UMAA::Common::Measurement::PrecipitationType_All >& precipitation() OMG_NOEXCEPT {
                    return m_precipitation_;
                }

                const ::dds::core::optional< UMAA::Common::Measurement::PrecipitationType_All >& precipitation() const OMG_NOEXCEPT {
                    return m_precipitation_;
                }

                void precipitation(const ::dds::core::optional< UMAA::Common::Measurement::PrecipitationType_All >& value) {
                    m_precipitation_ = value;
                }

                void precipitation(::dds::core::optional< UMAA::Common::Measurement::PrecipitationType_All >&& value) {
                    m_precipitation_ = std::move(value);
                }
                ::dds::core::optional< double >& relativeHumidity() OMG_NOEXCEPT {
                    return m_relativeHumidity_;
                }

                const ::dds::core::optional< double >& relativeHumidity() const OMG_NOEXCEPT {
                    return m_relativeHumidity_;
                }

                void relativeHumidity(const ::dds::core::optional< double >& value) {
                    m_relativeHumidity_ = value;
                }

                void relativeHumidity(::dds::core::optional< double >&& value) {
                    m_relativeHumidity_ = std::move(value);
                }
                ::dds::core::optional< double >& thunderstormPotential() OMG_NOEXCEPT {
                    return m_thunderstormPotential_;
                }

                const ::dds::core::optional< double >& thunderstormPotential() const OMG_NOEXCEPT {
                    return m_thunderstormPotential_;
                }

                void thunderstormPotential(const ::dds::core::optional< double >& value) {
                    m_thunderstormPotential_ = value;
                }

                void thunderstormPotential(::dds::core::optional< double >&& value) {
                    m_thunderstormPotential_ = std::move(value);
                }
                ::dds::core::optional< double >& visibility() OMG_NOEXCEPT {
                    return m_visibility_;
                }

                const ::dds::core::optional< double >& visibility() const OMG_NOEXCEPT {
                    return m_visibility_;
                }

                void visibility(const ::dds::core::optional< double >& value) {
                    m_visibility_ = value;
                }

                void visibility(::dds::core::optional< double >&& value) {
                    m_visibility_ = std::move(value);
                }
                ::dds::core::optional< double >& waterTemperature() OMG_NOEXCEPT {
                    return m_waterTemperature_;
                }

                const ::dds::core::optional< double >& waterTemperature() const OMG_NOEXCEPT {
                    return m_waterTemperature_;
                }

                void waterTemperature(const ::dds::core::optional< double >& value) {
                    m_waterTemperature_ = value;
                }

                void waterTemperature(::dds::core::optional< double >&& value) {
                    m_waterTemperature_ = std::move(value);
                }
                UMAA::Common::Measurement::NumericGUID& source() OMG_NOEXCEPT {
                    return m_source_;
                }

                const UMAA::Common::Measurement::NumericGUID& source() const OMG_NOEXCEPT {
                    return m_source_;
                }

                void source(const UMAA::Common::Measurement::NumericGUID& value) {
                    m_source_ = value;
                }

                void source(UMAA::Common::Measurement::NumericGUID&& value) {
                    m_source_ = std::move(value);
                }
                UMAA::Common::Measurement::DateTime& timeStamp() OMG_NOEXCEPT {
                    return m_timeStamp_;
                }

                const UMAA::Common::Measurement::DateTime& timeStamp() const OMG_NOEXCEPT {
                    return m_timeStamp_;
                }

                void timeStamp(const UMAA::Common::Measurement::DateTime& value) {
                    m_timeStamp_ = value;
                }

                void timeStamp(UMAA::Common::Measurement::DateTime&& value) {
                    m_timeStamp_ = std::move(value);
                }

                bool operator == (const WeatherStatusReportType& other_) const;
                bool operator != (const WeatherStatusReportType& other_) const;

                void swap(WeatherStatusReportType& other_) OMG_NOEXCEPT ;

              private:

                ::dds::core::optional< double > m_airTemperature_;
                ::dds::core::optional< double > m_barometricPressure_;
                ::dds::core::optional< UMAA::Common::Measurement::CloudCoverType_All > m_cloudiness_;
                ::dds::core::optional< double > m_dewPoint_;
                ::dds::core::optional< UMAA::Common::Measurement::WeatherSeverityType_All > m_icingSeverity_;
                ::dds::core::optional< UMAA::Common::Measurement::PrecipitationType_All > m_precipitation_;
                ::dds::core::optional< double > m_relativeHumidity_;
                ::dds::core::optional< double > m_thunderstormPotential_;
                ::dds::core::optional< double > m_visibility_;
                ::dds::core::optional< double > m_waterTemperature_;
                UMAA::Common::Measurement::NumericGUID m_source_;
                UMAA::Common::Measurement::DateTime m_timeStamp_;

            };

            inline void swap(WeatherStatusReportType& a, WeatherStatusReportType& b)  OMG_NOEXCEPT 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const WeatherStatusReportType& sample);

        } // namespace WeatherStatus  
    } // namespace SA  
} // namespace UMAA  

namespace rti {
    namespace flat {
        namespace topic {
        }
    }
}
namespace dds {
    namespace topic {

        template<>
        struct topic_type_name< UMAA::SA::WeatherStatus::WeatherStatusReportType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::SA::WeatherStatus::WeatherStatusReportType";
            }
        };

        template<>
        struct is_topic_type< UMAA::SA::WeatherStatus::WeatherStatusReportType > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< UMAA::SA::WeatherStatus::WeatherStatusReportType > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const UMAA::SA::WeatherStatus::WeatherStatusReportType& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(UMAA::SA::WeatherStatus::WeatherStatusReportType& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(UMAA::SA::WeatherStatus::WeatherStatusReportType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(UMAA::SA::WeatherStatus::WeatherStatusReportType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

    }
}

namespace rti { 
    namespace topic {

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< UMAA::SA::WeatherStatus::WeatherStatusReportType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< UMAA::SA::WeatherStatus::WeatherStatusReportType > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;                
        };

    }
}

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif // WeatherStatusReportType_1246220673_hpp

