

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from HealthReportType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef HealthReportType_1229533496_hpp
#define HealthReportType_1229533496_hpp

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
#include "UMAA/Common/MaritimeEnumeration/MaritimeEnumerationSets.hpp"
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
#include "UMAA/Common/PrimitiveConstrained/ConstrainedTypes.hpp"
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif
namespace UMAA {
    namespace SO {
        namespace HealthReport {

            static const std::string HealthReportTypeTopic = "UMAA::SO::HealthReport::HealthReportType";

            class NDDSUSERDllExport HealthReportType {
              public:

                HealthReportType();

                HealthReportType(const ::UMAA::Common::Measurement::DateTime& logTime_,const ::UMAA::Common::MaritimeEnumeration::ErrorConditionEnumModule::ErrorConditionEnumType& severity_,const ::dds::core::optional< std::string >& status_,const ::UMAA::Common::Measurement::DateTime& timeStamp_,const ::UMAA::Common::IdentifierType& source_,const ::UMAA::Common::MaritimeEnumeration::ErrorCodeEnumModule::ErrorCodeEnumType& code_,const ::UMAA::Common::IdentifierType& resourceID_);

                ::UMAA::Common::Measurement::DateTime& logTime() noexcept {
                    return m_logTime_;
                }

                const ::UMAA::Common::Measurement::DateTime& logTime() const noexcept {
                    return m_logTime_;
                }

                void logTime(const ::UMAA::Common::Measurement::DateTime& value) {

                    m_logTime_ = value;
                }

                void logTime(::UMAA::Common::Measurement::DateTime&& value) {
                    m_logTime_ = std::move(value);
                }
                ::UMAA::Common::MaritimeEnumeration::ErrorConditionEnumModule::ErrorConditionEnumType& severity() noexcept {
                    return m_severity_;
                }

                const ::UMAA::Common::MaritimeEnumeration::ErrorConditionEnumModule::ErrorConditionEnumType& severity() const noexcept {
                    return m_severity_;
                }

                void severity(const ::UMAA::Common::MaritimeEnumeration::ErrorConditionEnumModule::ErrorConditionEnumType& value) {

                    m_severity_ = value;
                }

                void severity(::UMAA::Common::MaritimeEnumeration::ErrorConditionEnumModule::ErrorConditionEnumType&& value) {
                    m_severity_ = std::move(value);
                }
                ::dds::core::optional< std::string >& status() noexcept {
                    return m_status_;
                }

                const ::dds::core::optional< std::string >& status() const noexcept {
                    return m_status_;
                }

                void status(const ::dds::core::optional< std::string >& value) {

                    m_status_ = value;
                }

                void status(::dds::core::optional< std::string >&& value) {
                    m_status_ = std::move(value);
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
                ::UMAA::Common::MaritimeEnumeration::ErrorCodeEnumModule::ErrorCodeEnumType& code() noexcept {
                    return m_code_;
                }

                const ::UMAA::Common::MaritimeEnumeration::ErrorCodeEnumModule::ErrorCodeEnumType& code() const noexcept {
                    return m_code_;
                }

                void code(const ::UMAA::Common::MaritimeEnumeration::ErrorCodeEnumModule::ErrorCodeEnumType& value) {

                    m_code_ = value;
                }

                void code(::UMAA::Common::MaritimeEnumeration::ErrorCodeEnumModule::ErrorCodeEnumType&& value) {
                    m_code_ = std::move(value);
                }
                ::UMAA::Common::IdentifierType& resourceID() noexcept {
                    return m_resourceID_;
                }

                const ::UMAA::Common::IdentifierType& resourceID() const noexcept {
                    return m_resourceID_;
                }

                void resourceID(const ::UMAA::Common::IdentifierType& value) {

                    m_resourceID_ = value;
                }

                void resourceID(::UMAA::Common::IdentifierType&& value) {
                    m_resourceID_ = std::move(value);
                }
                bool operator == (const HealthReportType& other_) const;
                bool operator != (const HealthReportType& other_) const;

                void swap(HealthReportType& other_) noexcept ;

              private:

                ::UMAA::Common::Measurement::DateTime m_logTime_;
                ::UMAA::Common::MaritimeEnumeration::ErrorConditionEnumModule::ErrorConditionEnumType m_severity_;
                ::dds::core::optional< std::string > m_status_;
                ::UMAA::Common::Measurement::DateTime m_timeStamp_;
                ::UMAA::Common::IdentifierType m_source_;
                ::UMAA::Common::MaritimeEnumeration::ErrorCodeEnumModule::ErrorCodeEnumType m_code_;
                ::UMAA::Common::IdentifierType m_resourceID_;

            };

            inline void swap(HealthReportType& a, HealthReportType& b)  noexcept 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const HealthReportType& sample);

        } // namespace HealthReport  
    } // namespace SO  
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
        struct topic_type_name< ::UMAA::SO::HealthReport::HealthReportType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::SO::HealthReport::HealthReportType";
            }
        };

        template<>
        struct is_topic_type< ::UMAA::SO::HealthReport::HealthReportType > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< ::UMAA::SO::HealthReport::HealthReportType > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const ::UMAA::SO::HealthReport::HealthReportType& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(::UMAA::SO::HealthReport::HealthReportType& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(::UMAA::SO::HealthReport::HealthReportType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(::UMAA::SO::HealthReport::HealthReportType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };
    }
}

namespace rti { 
    namespace topic {

        template<>
        struct dynamic_type< ::UMAA::SO::HealthReport::HealthReportType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };

        template <>
        struct extensibility< ::UMAA::SO::HealthReport::HealthReportType > {
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

#endif // HealthReportType_1229533496_hpp

