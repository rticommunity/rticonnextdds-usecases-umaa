

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ConditionalReportType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef ConditionalReportType_1035213321_hpp
#define ConditionalReportType_1035213321_hpp

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
#include "UMAA/Common/LargeSetMetadata.hpp"
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
#include "UMAA/MM/Conditional/ConditionalType.hpp"
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif
namespace UMAA {
    namespace MM {
        namespace ConditionalReport {

            static const std::string ConditionalReportTypeTopic = "UMAA::MM::ConditionalReport::ConditionalReportType";

            class NDDSUSERDllExport ConditionalReportType {
              public:

                ConditionalReportType();

                ConditionalReportType(const ::UMAA::Common::Measurement::DateTime& timeStamp_,const ::UMAA::Common::IdentifierType& source_,const ::UMAA::Common::LargeSetMetadata& conditionalsSetMetadata_);

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
                ::UMAA::Common::LargeSetMetadata& conditionalsSetMetadata() noexcept {
                    return m_conditionalsSetMetadata_;
                }

                const ::UMAA::Common::LargeSetMetadata& conditionalsSetMetadata() const noexcept {
                    return m_conditionalsSetMetadata_;
                }

                void conditionalsSetMetadata(const ::UMAA::Common::LargeSetMetadata& value) {

                    m_conditionalsSetMetadata_ = value;
                }

                void conditionalsSetMetadata(::UMAA::Common::LargeSetMetadata&& value) {
                    m_conditionalsSetMetadata_ = std::move(value);
                }
                bool operator == (const ConditionalReportType& other_) const;
                bool operator != (const ConditionalReportType& other_) const;

                void swap(ConditionalReportType& other_) noexcept ;

              private:

                ::UMAA::Common::Measurement::DateTime m_timeStamp_;
                ::UMAA::Common::IdentifierType m_source_;
                ::UMAA::Common::LargeSetMetadata m_conditionalsSetMetadata_;

            };

            inline void swap(ConditionalReportType& a, ConditionalReportType& b)  noexcept 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const ConditionalReportType& sample);

            static const std::string ConditionalReportTypeConditionalsSetElementTopic = "UMAA::MM::ConditionalReport::ConditionalReportTypeConditionalsSetElement";

            class NDDSUSERDllExport ConditionalReportTypeConditionalsSetElement {
              public:

                ConditionalReportTypeConditionalsSetElement();

                ConditionalReportTypeConditionalsSetElement(const ::UMAA::MM::Conditional::ConditionalType& element_,const ::UMAA::Common::Measurement::NumericGUID& setID_,const ::UMAA::Common::Measurement::NumericGUID& elementID_,const ::UMAA::Common::Measurement::DateTime& elementTimestamp_);

                ::UMAA::MM::Conditional::ConditionalType& element() noexcept {
                    return m_element_;
                }

                const ::UMAA::MM::Conditional::ConditionalType& element() const noexcept {
                    return m_element_;
                }

                void element(const ::UMAA::MM::Conditional::ConditionalType& value) {

                    m_element_ = value;
                }

                void element(::UMAA::MM::Conditional::ConditionalType&& value) {
                    m_element_ = std::move(value);
                }
                ::UMAA::Common::Measurement::NumericGUID& setID() noexcept {
                    return m_setID_;
                }

                const ::UMAA::Common::Measurement::NumericGUID& setID() const noexcept {
                    return m_setID_;
                }

                void setID(const ::UMAA::Common::Measurement::NumericGUID& value) {

                    m_setID_ = value;
                }

                void setID(::UMAA::Common::Measurement::NumericGUID&& value) {
                    m_setID_ = std::move(value);
                }
                ::UMAA::Common::Measurement::NumericGUID& elementID() noexcept {
                    return m_elementID_;
                }

                const ::UMAA::Common::Measurement::NumericGUID& elementID() const noexcept {
                    return m_elementID_;
                }

                void elementID(const ::UMAA::Common::Measurement::NumericGUID& value) {

                    m_elementID_ = value;
                }

                void elementID(::UMAA::Common::Measurement::NumericGUID&& value) {
                    m_elementID_ = std::move(value);
                }
                ::UMAA::Common::Measurement::DateTime& elementTimestamp() noexcept {
                    return m_elementTimestamp_;
                }

                const ::UMAA::Common::Measurement::DateTime& elementTimestamp() const noexcept {
                    return m_elementTimestamp_;
                }

                void elementTimestamp(const ::UMAA::Common::Measurement::DateTime& value) {

                    m_elementTimestamp_ = value;
                }

                void elementTimestamp(::UMAA::Common::Measurement::DateTime&& value) {
                    m_elementTimestamp_ = std::move(value);
                }
                bool operator == (const ConditionalReportTypeConditionalsSetElement& other_) const;
                bool operator != (const ConditionalReportTypeConditionalsSetElement& other_) const;

                void swap(ConditionalReportTypeConditionalsSetElement& other_) noexcept ;

              private:

                ::UMAA::MM::Conditional::ConditionalType m_element_;
                ::UMAA::Common::Measurement::NumericGUID m_setID_ {};
                ::UMAA::Common::Measurement::NumericGUID m_elementID_ {};
                ::UMAA::Common::Measurement::DateTime m_elementTimestamp_;

            };

            inline void swap(ConditionalReportTypeConditionalsSetElement& a, ConditionalReportTypeConditionalsSetElement& b)  noexcept 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const ConditionalReportTypeConditionalsSetElement& sample);

        } // namespace ConditionalReport  
    } // namespace MM  
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
        struct topic_type_name< ::UMAA::MM::ConditionalReport::ConditionalReportType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::MM::ConditionalReport::ConditionalReportType";
            }
        };

        template<>
        struct is_topic_type< ::UMAA::MM::ConditionalReport::ConditionalReportType > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< ::UMAA::MM::ConditionalReport::ConditionalReportType > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const ::UMAA::MM::ConditionalReport::ConditionalReportType& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(::UMAA::MM::ConditionalReport::ConditionalReportType& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(::UMAA::MM::ConditionalReport::ConditionalReportType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(::UMAA::MM::ConditionalReport::ConditionalReportType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };
        template<>
        struct topic_type_name< ::UMAA::MM::ConditionalReport::ConditionalReportTypeConditionalsSetElement > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::MM::ConditionalReport::ConditionalReportTypeConditionalsSetElement";
            }
        };

        template<>
        struct is_topic_type< ::UMAA::MM::ConditionalReport::ConditionalReportTypeConditionalsSetElement > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< ::UMAA::MM::ConditionalReport::ConditionalReportTypeConditionalsSetElement > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const ::UMAA::MM::ConditionalReport::ConditionalReportTypeConditionalsSetElement& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(::UMAA::MM::ConditionalReport::ConditionalReportTypeConditionalsSetElement& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(::UMAA::MM::ConditionalReport::ConditionalReportTypeConditionalsSetElement& sample);

            NDDSUSERDllExport 
            static void allocate_sample(::UMAA::MM::ConditionalReport::ConditionalReportTypeConditionalsSetElement& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };
    }
}

namespace rti { 
    namespace topic {

        template<>
        struct dynamic_type< ::UMAA::MM::ConditionalReport::ConditionalReportType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };

        template <>
        struct extensibility< ::UMAA::MM::ConditionalReport::ConditionalReportType > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

        template<>
        struct dynamic_type< ::UMAA::MM::ConditionalReport::ConditionalReportTypeConditionalsSetElement > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };

        template <>
        struct extensibility< ::UMAA::MM::ConditionalReport::ConditionalReportTypeConditionalsSetElement > {
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

#endif // ConditionalReportType_1035213321_hpp

