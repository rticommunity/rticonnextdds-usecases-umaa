

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from CommsChannelSenderReportType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef CommsChannelSenderReportType_1814187374_hpp
#define CommsChannelSenderReportType_1814187374_hpp

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
#include "UMAA/Common/LargeListMetadata.hpp"
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
#include "UMAA/CO/CommsChannel/CommsChannelMessageType.hpp"
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
namespace UMAA {
    namespace CO {
        namespace CommsChannelStatus {

            static const std::string CommsChannelSenderReportTypeTopic = "UMAA::CO::CommsChannelStatus::CommsChannelSenderReportType";

            class NDDSUSERDllExport CommsChannelSenderReportType {
              public:

                CommsChannelSenderReportType();

                CommsChannelSenderReportType(double bufferPercentFull_,const ::UMAA::Common::Measurement::DateTime& timeStamp_,const ::UMAA::Common::IdentifierType& source_,const ::UMAA::Common::LargeListMetadata& queuedMessagesListMetadata_);

                double& bufferPercentFull() noexcept {
                    return m_bufferPercentFull_;
                }

                const double& bufferPercentFull() const noexcept {
                    return m_bufferPercentFull_;
                }

                void bufferPercentFull(double value) {

                    m_bufferPercentFull_ = value;
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
                ::UMAA::Common::LargeListMetadata& queuedMessagesListMetadata() noexcept {
                    return m_queuedMessagesListMetadata_;
                }

                const ::UMAA::Common::LargeListMetadata& queuedMessagesListMetadata() const noexcept {
                    return m_queuedMessagesListMetadata_;
                }

                void queuedMessagesListMetadata(const ::UMAA::Common::LargeListMetadata& value) {

                    m_queuedMessagesListMetadata_ = value;
                }

                void queuedMessagesListMetadata(::UMAA::Common::LargeListMetadata&& value) {
                    m_queuedMessagesListMetadata_ = std::move(value);
                }
                bool operator == (const CommsChannelSenderReportType& other_) const;
                bool operator != (const CommsChannelSenderReportType& other_) const;

                void swap(CommsChannelSenderReportType& other_) noexcept ;

              private:

                double m_bufferPercentFull_;
                ::UMAA::Common::Measurement::DateTime m_timeStamp_;
                ::UMAA::Common::IdentifierType m_source_;
                ::UMAA::Common::LargeListMetadata m_queuedMessagesListMetadata_;

            };

            inline void swap(CommsChannelSenderReportType& a, CommsChannelSenderReportType& b)  noexcept 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const CommsChannelSenderReportType& sample);

            static const std::string CommsChannelSenderReportTypeQueuedMessagesListElementTopic = "UMAA::CO::CommsChannelStatus::CommsChannelSenderReportTypeQueuedMessagesListElement";

            class NDDSUSERDllExport CommsChannelSenderReportTypeQueuedMessagesListElement {
              public:

                CommsChannelSenderReportTypeQueuedMessagesListElement();

                CommsChannelSenderReportTypeQueuedMessagesListElement(const ::UMAA::CO::CommsChannel::CommsChannelMessageType& element_,const ::UMAA::Common::Measurement::NumericGUID& listID_,const ::UMAA::Common::Measurement::NumericGUID& elementID_,const ::UMAA::Common::Measurement::DateTime& elementTimestamp_,const ::dds::core::optional< ::UMAA::Common::Measurement::NumericGUID >& nextElementID_);

                ::UMAA::CO::CommsChannel::CommsChannelMessageType& element() noexcept {
                    return m_element_;
                }

                const ::UMAA::CO::CommsChannel::CommsChannelMessageType& element() const noexcept {
                    return m_element_;
                }

                void element(const ::UMAA::CO::CommsChannel::CommsChannelMessageType& value) {

                    m_element_ = value;
                }

                void element(::UMAA::CO::CommsChannel::CommsChannelMessageType&& value) {
                    m_element_ = std::move(value);
                }
                ::UMAA::Common::Measurement::NumericGUID& listID() noexcept {
                    return m_listID_;
                }

                const ::UMAA::Common::Measurement::NumericGUID& listID() const noexcept {
                    return m_listID_;
                }

                void listID(const ::UMAA::Common::Measurement::NumericGUID& value) {

                    m_listID_ = value;
                }

                void listID(::UMAA::Common::Measurement::NumericGUID&& value) {
                    m_listID_ = std::move(value);
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
                ::dds::core::optional< ::UMAA::Common::Measurement::NumericGUID >& nextElementID() noexcept {
                    return m_nextElementID_;
                }

                const ::dds::core::optional< ::UMAA::Common::Measurement::NumericGUID >& nextElementID() const noexcept {
                    return m_nextElementID_;
                }

                void nextElementID(const ::dds::core::optional< ::UMAA::Common::Measurement::NumericGUID >& value) {

                    m_nextElementID_ = value;
                }

                void nextElementID(::dds::core::optional< ::UMAA::Common::Measurement::NumericGUID >&& value) {
                    m_nextElementID_ = std::move(value);
                }
                bool operator == (const CommsChannelSenderReportTypeQueuedMessagesListElement& other_) const;
                bool operator != (const CommsChannelSenderReportTypeQueuedMessagesListElement& other_) const;

                void swap(CommsChannelSenderReportTypeQueuedMessagesListElement& other_) noexcept ;

              private:

                ::UMAA::CO::CommsChannel::CommsChannelMessageType m_element_;
                ::UMAA::Common::Measurement::NumericGUID m_listID_ {};
                ::UMAA::Common::Measurement::NumericGUID m_elementID_ {};
                ::UMAA::Common::Measurement::DateTime m_elementTimestamp_;
                ::dds::core::optional< ::UMAA::Common::Measurement::NumericGUID > m_nextElementID_;

            };

            inline void swap(CommsChannelSenderReportTypeQueuedMessagesListElement& a, CommsChannelSenderReportTypeQueuedMessagesListElement& b)  noexcept 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const CommsChannelSenderReportTypeQueuedMessagesListElement& sample);

        } // namespace CommsChannelStatus  
    } // namespace CO  
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
        struct topic_type_name< ::UMAA::CO::CommsChannelStatus::CommsChannelSenderReportType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::CO::CommsChannelStatus::CommsChannelSenderReportType";
            }
        };

        template<>
        struct is_topic_type< ::UMAA::CO::CommsChannelStatus::CommsChannelSenderReportType > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< ::UMAA::CO::CommsChannelStatus::CommsChannelSenderReportType > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const ::UMAA::CO::CommsChannelStatus::CommsChannelSenderReportType& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(::UMAA::CO::CommsChannelStatus::CommsChannelSenderReportType& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(::UMAA::CO::CommsChannelStatus::CommsChannelSenderReportType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(::UMAA::CO::CommsChannelStatus::CommsChannelSenderReportType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };
        template<>
        struct topic_type_name< ::UMAA::CO::CommsChannelStatus::CommsChannelSenderReportTypeQueuedMessagesListElement > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::CO::CommsChannelStatus::CommsChannelSenderReportTypeQueuedMessagesListElement";
            }
        };

        template<>
        struct is_topic_type< ::UMAA::CO::CommsChannelStatus::CommsChannelSenderReportTypeQueuedMessagesListElement > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< ::UMAA::CO::CommsChannelStatus::CommsChannelSenderReportTypeQueuedMessagesListElement > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const ::UMAA::CO::CommsChannelStatus::CommsChannelSenderReportTypeQueuedMessagesListElement& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(::UMAA::CO::CommsChannelStatus::CommsChannelSenderReportTypeQueuedMessagesListElement& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(::UMAA::CO::CommsChannelStatus::CommsChannelSenderReportTypeQueuedMessagesListElement& sample);

            NDDSUSERDllExport 
            static void allocate_sample(::UMAA::CO::CommsChannelStatus::CommsChannelSenderReportTypeQueuedMessagesListElement& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };
    }
}

namespace rti { 
    namespace topic {

        template<>
        struct dynamic_type< ::UMAA::CO::CommsChannelStatus::CommsChannelSenderReportType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };

        template <>
        struct extensibility< ::UMAA::CO::CommsChannelStatus::CommsChannelSenderReportType > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

        template<>
        struct dynamic_type< ::UMAA::CO::CommsChannelStatus::CommsChannelSenderReportTypeQueuedMessagesListElement > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };

        template <>
        struct extensibility< ::UMAA::CO::CommsChannelStatus::CommsChannelSenderReportTypeQueuedMessagesListElement > {
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

#endif // CommsChannelSenderReportType_1814187374_hpp

