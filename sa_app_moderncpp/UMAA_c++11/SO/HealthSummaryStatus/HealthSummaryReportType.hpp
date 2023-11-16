

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from HealthSummaryReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef HealthSummaryReportType_1784270557_hpp
#define HealthSummaryReportType_1784270557_hpp

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
#include "UMAA/Common/MaritimeEnumeration/EnumerationSets.hpp"
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
namespace UMAA {
    namespace SO {
        namespace HealthSummaryStatus {

            RTI_CONSTEXPR_OR_CONST_STRING std::string HealthSummaryReport_TOPIC = "UMAA::SO::HealthSummaryStatus::HealthSummaryReport";

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            // On Windows, dll-export template instantiations of standard types used by
            // other dll-exported types
            template class NDDSUSERDllExport std::allocator< ::UMAA::Common::Measurement::NumericGUID >;
            template class NDDSUSERDllExport std::vector< ::UMAA::Common::Measurement::NumericGUID >;
            template class NDDSUSERDllExport std::allocator< ::UMAA::Common::MaritimeEnumeration::ErrorConditionEnumType::ErrorConditionEnumType >;
            template class NDDSUSERDllExport std::vector< ::UMAA::Common::MaritimeEnumeration::ErrorConditionEnumType::ErrorConditionEnumType >;
            #endif
            class NDDSUSERDllExport HealthSummaryReportType {
              public:

                HealthSummaryReportType();

                HealthSummaryReportType(const ::rti::core::bounded_sequence< ::UMAA::Common::Measurement::NumericGUID, 100L >& resourceIDs_,const ::rti::core::bounded_sequence< ::UMAA::Common::MaritimeEnumeration::ErrorConditionEnumType::ErrorConditionEnumType, 100L >& severities_,const ::UMAA::Common::Measurement::NumericGUID& source_,const ::UMAA::Common::Measurement::DateTime& timeStamp_);

                ::rti::core::bounded_sequence< ::UMAA::Common::Measurement::NumericGUID, 100L >& resourceIDs() noexcept {
                    return m_resourceIDs_;
                }

                const ::rti::core::bounded_sequence< ::UMAA::Common::Measurement::NumericGUID, 100L >& resourceIDs() const noexcept {
                    return m_resourceIDs_;
                }

                void resourceIDs(const ::rti::core::bounded_sequence< ::UMAA::Common::Measurement::NumericGUID, 100L >& value) {

                    m_resourceIDs_ = value;
                }

                void resourceIDs(::rti::core::bounded_sequence< ::UMAA::Common::Measurement::NumericGUID, 100L >&& value) {
                    m_resourceIDs_ = std::move(value);
                }
                ::rti::core::bounded_sequence< ::UMAA::Common::MaritimeEnumeration::ErrorConditionEnumType::ErrorConditionEnumType, 100L >& severities() noexcept {
                    return m_severities_;
                }

                const ::rti::core::bounded_sequence< ::UMAA::Common::MaritimeEnumeration::ErrorConditionEnumType::ErrorConditionEnumType, 100L >& severities() const noexcept {
                    return m_severities_;
                }

                void severities(const ::rti::core::bounded_sequence< ::UMAA::Common::MaritimeEnumeration::ErrorConditionEnumType::ErrorConditionEnumType, 100L >& value) {

                    m_severities_ = value;
                }

                void severities(::rti::core::bounded_sequence< ::UMAA::Common::MaritimeEnumeration::ErrorConditionEnumType::ErrorConditionEnumType, 100L >&& value) {
                    m_severities_ = std::move(value);
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
                bool operator == (const HealthSummaryReportType& other_) const;
                bool operator != (const HealthSummaryReportType& other_) const;

                void swap(HealthSummaryReportType& other_) noexcept ;

              private:

                ::rti::core::bounded_sequence< ::UMAA::Common::Measurement::NumericGUID, 100L > m_resourceIDs_;
                ::rti::core::bounded_sequence< ::UMAA::Common::MaritimeEnumeration::ErrorConditionEnumType::ErrorConditionEnumType, 100L > m_severities_;
                ::UMAA::Common::Measurement::NumericGUID m_source_ {};
                ::UMAA::Common::Measurement::DateTime m_timeStamp_;

            };

            inline void swap(HealthSummaryReportType& a, HealthSummaryReportType& b)  noexcept 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const HealthSummaryReportType& sample);

        } // namespace HealthSummaryStatus  
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
        struct topic_type_name< ::UMAA::SO::HealthSummaryStatus::HealthSummaryReportType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::SO::HealthSummaryStatus::HealthSummaryReportType";
            }
        };

        template<>
        struct is_topic_type< ::UMAA::SO::HealthSummaryStatus::HealthSummaryReportType > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< ::UMAA::SO::HealthSummaryStatus::HealthSummaryReportType > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const ::UMAA::SO::HealthSummaryStatus::HealthSummaryReportType& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(::UMAA::SO::HealthSummaryStatus::HealthSummaryReportType& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(::UMAA::SO::HealthSummaryStatus::HealthSummaryReportType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(::UMAA::SO::HealthSummaryStatus::HealthSummaryReportType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };
    }
}

namespace rti { 
    namespace topic {

        template<>
        struct dynamic_type< ::UMAA::SO::HealthSummaryStatus::HealthSummaryReportType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };

        template <>
        struct extensibility< ::UMAA::SO::HealthSummaryStatus::HealthSummaryReportType > {
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

#endif // HealthSummaryReportType_1784270557_hpp

