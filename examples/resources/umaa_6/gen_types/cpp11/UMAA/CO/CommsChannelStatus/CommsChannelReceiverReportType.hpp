

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from CommsChannelReceiverReportType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef CommsChannelReceiverReportType_964387736_hpp
#define CommsChannelReceiverReportType_964387736_hpp

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
    namespace CO {
        namespace CommsChannelStatus {

            static const std::string CommsChannelReceiverReportTypeTopic = "UMAA::CO::CommsChannelStatus::CommsChannelReceiverReportType";

            class NDDSUSERDllExport CommsChannelReceiverReportType {
              public:

                CommsChannelReceiverReportType();

                CommsChannelReceiverReportType(int32_t messageSize_,double messageSNR_,const ::UMAA::Common::Measurement::DateTime& messageTime_,const std::string& messageType_,const ::UMAA::Common::Measurement::DateTime& timeStamp_,const ::UMAA::Common::IdentifierType& source_,const ::UMAA::Common::Measurement::NumericGUID& messageID_);

                int32_t& messageSize() noexcept {
                    return m_messageSize_;
                }

                const int32_t& messageSize() const noexcept {
                    return m_messageSize_;
                }

                void messageSize(int32_t value) {

                    m_messageSize_ = value;
                }

                double& messageSNR() noexcept {
                    return m_messageSNR_;
                }

                const double& messageSNR() const noexcept {
                    return m_messageSNR_;
                }

                void messageSNR(double value) {

                    m_messageSNR_ = value;
                }

                ::UMAA::Common::Measurement::DateTime& messageTime() noexcept {
                    return m_messageTime_;
                }

                const ::UMAA::Common::Measurement::DateTime& messageTime() const noexcept {
                    return m_messageTime_;
                }

                void messageTime(const ::UMAA::Common::Measurement::DateTime& value) {

                    m_messageTime_ = value;
                }

                void messageTime(::UMAA::Common::Measurement::DateTime&& value) {
                    m_messageTime_ = std::move(value);
                }
                std::string& messageType() noexcept {
                    return m_messageType_;
                }

                const std::string& messageType() const noexcept {
                    return m_messageType_;
                }

                void messageType(const std::string& value) {

                    m_messageType_ = value;
                }

                void messageType(std::string&& value) {
                    m_messageType_ = std::move(value);
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
                ::UMAA::Common::Measurement::NumericGUID& messageID() noexcept {
                    return m_messageID_;
                }

                const ::UMAA::Common::Measurement::NumericGUID& messageID() const noexcept {
                    return m_messageID_;
                }

                void messageID(const ::UMAA::Common::Measurement::NumericGUID& value) {

                    m_messageID_ = value;
                }

                void messageID(::UMAA::Common::Measurement::NumericGUID&& value) {
                    m_messageID_ = std::move(value);
                }
                bool operator == (const CommsChannelReceiverReportType& other_) const;
                bool operator != (const CommsChannelReceiverReportType& other_) const;

                void swap(CommsChannelReceiverReportType& other_) noexcept ;

              private:

                int32_t m_messageSize_;
                double m_messageSNR_;
                ::UMAA::Common::Measurement::DateTime m_messageTime_;
                std::string m_messageType_;
                ::UMAA::Common::Measurement::DateTime m_timeStamp_;
                ::UMAA::Common::IdentifierType m_source_;
                ::UMAA::Common::Measurement::NumericGUID m_messageID_ {};

            };

            inline void swap(CommsChannelReceiverReportType& a, CommsChannelReceiverReportType& b)  noexcept 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const CommsChannelReceiverReportType& sample);

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
        struct topic_type_name< ::UMAA::CO::CommsChannelStatus::CommsChannelReceiverReportType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::CO::CommsChannelStatus::CommsChannelReceiverReportType";
            }
        };

        template<>
        struct is_topic_type< ::UMAA::CO::CommsChannelStatus::CommsChannelReceiverReportType > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< ::UMAA::CO::CommsChannelStatus::CommsChannelReceiverReportType > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const ::UMAA::CO::CommsChannelStatus::CommsChannelReceiverReportType& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(::UMAA::CO::CommsChannelStatus::CommsChannelReceiverReportType& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(::UMAA::CO::CommsChannelStatus::CommsChannelReceiverReportType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(::UMAA::CO::CommsChannelStatus::CommsChannelReceiverReportType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };
    }
}

namespace rti { 
    namespace topic {

        template<>
        struct dynamic_type< ::UMAA::CO::CommsChannelStatus::CommsChannelReceiverReportType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };

        template <>
        struct extensibility< ::UMAA::CO::CommsChannelStatus::CommsChannelReceiverReportType > {
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

#endif // CommsChannelReceiverReportType_964387736_hpp

