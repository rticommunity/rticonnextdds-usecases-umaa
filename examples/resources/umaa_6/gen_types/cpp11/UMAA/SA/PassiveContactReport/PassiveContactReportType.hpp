

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from PassiveContactReportType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef PassiveContactReportType_1272703042_hpp
#define PassiveContactReportType_1272703042_hpp

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
#include "UMAA/Common/Environment/PoseType.hpp"
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
#include "UMAA/SA/PassiveContactReport/PassiveContactType.hpp"
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif
namespace UMAA {
    namespace SA {
        namespace PassiveContactReport {

            static const std::string PassiveContactReportTypeTopic = "UMAA::SA::PassiveContactReport::PassiveContactReportType";

            class NDDSUSERDllExport PassiveContactReportType {
              public:

                PassiveContactReportType();

                PassiveContactReportType(const ::UMAA::Common::Environment::PoseType& platformPose_,const ::UMAA::Common::Measurement::DateTime& timeStamp_,const ::UMAA::Common::IdentifierType& source_,const ::UMAA::Common::LargeSetMetadata& contactsSetMetadata_);

                ::UMAA::Common::Environment::PoseType& platformPose() noexcept {
                    return m_platformPose_;
                }

                const ::UMAA::Common::Environment::PoseType& platformPose() const noexcept {
                    return m_platformPose_;
                }

                void platformPose(const ::UMAA::Common::Environment::PoseType& value) {

                    m_platformPose_ = value;
                }

                void platformPose(::UMAA::Common::Environment::PoseType&& value) {
                    m_platformPose_ = std::move(value);
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
                ::UMAA::Common::LargeSetMetadata& contactsSetMetadata() noexcept {
                    return m_contactsSetMetadata_;
                }

                const ::UMAA::Common::LargeSetMetadata& contactsSetMetadata() const noexcept {
                    return m_contactsSetMetadata_;
                }

                void contactsSetMetadata(const ::UMAA::Common::LargeSetMetadata& value) {

                    m_contactsSetMetadata_ = value;
                }

                void contactsSetMetadata(::UMAA::Common::LargeSetMetadata&& value) {
                    m_contactsSetMetadata_ = std::move(value);
                }
                bool operator == (const PassiveContactReportType& other_) const;
                bool operator != (const PassiveContactReportType& other_) const;

                void swap(PassiveContactReportType& other_) noexcept ;

              private:

                ::UMAA::Common::Environment::PoseType m_platformPose_;
                ::UMAA::Common::Measurement::DateTime m_timeStamp_;
                ::UMAA::Common::IdentifierType m_source_;
                ::UMAA::Common::LargeSetMetadata m_contactsSetMetadata_;

            };

            inline void swap(PassiveContactReportType& a, PassiveContactReportType& b)  noexcept 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const PassiveContactReportType& sample);

            static const std::string PassiveContactReportTypeContactsSetElementTopic = "UMAA::SA::PassiveContactReport::PassiveContactReportTypeContactsSetElement";

            class NDDSUSERDllExport PassiveContactReportTypeContactsSetElement {
              public:

                PassiveContactReportTypeContactsSetElement();

                PassiveContactReportTypeContactsSetElement(const ::UMAA::SA::PassiveContactReport::PassiveContactType& element_,const ::UMAA::Common::Measurement::NumericGUID& setID_,const ::UMAA::Common::Measurement::NumericGUID& elementID_,const ::UMAA::Common::Measurement::DateTime& elementTimestamp_);

                ::UMAA::SA::PassiveContactReport::PassiveContactType& element() noexcept {
                    return m_element_;
                }

                const ::UMAA::SA::PassiveContactReport::PassiveContactType& element() const noexcept {
                    return m_element_;
                }

                void element(const ::UMAA::SA::PassiveContactReport::PassiveContactType& value) {

                    m_element_ = value;
                }

                void element(::UMAA::SA::PassiveContactReport::PassiveContactType&& value) {
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
                bool operator == (const PassiveContactReportTypeContactsSetElement& other_) const;
                bool operator != (const PassiveContactReportTypeContactsSetElement& other_) const;

                void swap(PassiveContactReportTypeContactsSetElement& other_) noexcept ;

              private:

                ::UMAA::SA::PassiveContactReport::PassiveContactType m_element_;
                ::UMAA::Common::Measurement::NumericGUID m_setID_ {};
                ::UMAA::Common::Measurement::NumericGUID m_elementID_ {};
                ::UMAA::Common::Measurement::DateTime m_elementTimestamp_;

            };

            inline void swap(PassiveContactReportTypeContactsSetElement& a, PassiveContactReportTypeContactsSetElement& b)  noexcept 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const PassiveContactReportTypeContactsSetElement& sample);

        } // namespace PassiveContactReport  
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
        struct topic_type_name< ::UMAA::SA::PassiveContactReport::PassiveContactReportType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::SA::PassiveContactReport::PassiveContactReportType";
            }
        };

        template<>
        struct is_topic_type< ::UMAA::SA::PassiveContactReport::PassiveContactReportType > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< ::UMAA::SA::PassiveContactReport::PassiveContactReportType > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const ::UMAA::SA::PassiveContactReport::PassiveContactReportType& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(::UMAA::SA::PassiveContactReport::PassiveContactReportType& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(::UMAA::SA::PassiveContactReport::PassiveContactReportType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(::UMAA::SA::PassiveContactReport::PassiveContactReportType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };
        template<>
        struct topic_type_name< ::UMAA::SA::PassiveContactReport::PassiveContactReportTypeContactsSetElement > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::SA::PassiveContactReport::PassiveContactReportTypeContactsSetElement";
            }
        };

        template<>
        struct is_topic_type< ::UMAA::SA::PassiveContactReport::PassiveContactReportTypeContactsSetElement > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< ::UMAA::SA::PassiveContactReport::PassiveContactReportTypeContactsSetElement > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const ::UMAA::SA::PassiveContactReport::PassiveContactReportTypeContactsSetElement& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(::UMAA::SA::PassiveContactReport::PassiveContactReportTypeContactsSetElement& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(::UMAA::SA::PassiveContactReport::PassiveContactReportTypeContactsSetElement& sample);

            NDDSUSERDllExport 
            static void allocate_sample(::UMAA::SA::PassiveContactReport::PassiveContactReportTypeContactsSetElement& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };
    }
}

namespace rti { 
    namespace topic {

        template<>
        struct dynamic_type< ::UMAA::SA::PassiveContactReport::PassiveContactReportType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };

        template <>
        struct extensibility< ::UMAA::SA::PassiveContactReport::PassiveContactReportType > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

        template<>
        struct dynamic_type< ::UMAA::SA::PassiveContactReport::PassiveContactReportTypeContactsSetElement > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };

        template <>
        struct extensibility< ::UMAA::SA::PassiveContactReport::PassiveContactReportTypeContactsSetElement > {
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

#endif // PassiveContactReportType_1272703042_hpp

