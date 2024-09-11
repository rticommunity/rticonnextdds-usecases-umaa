

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from CommsChannelMessageType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef CommsChannelMessageType_1823742315_hpp
#define CommsChannelMessageType_1823742315_hpp

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
        namespace CommsChannel {

            class NDDSUSERDllExport CommsChannelMessageType {
              public:

                CommsChannelMessageType();

                CommsChannelMessageType(const ::UMAA::Common::Measurement::NumericGUID& messageID_,int32_t messageSize_,const ::UMAA::Common::Measurement::DateTime& messageTimeStamp_,const std::string& messageType_);

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
                int32_t& messageSize() noexcept {
                    return m_messageSize_;
                }

                const int32_t& messageSize() const noexcept {
                    return m_messageSize_;
                }

                void messageSize(int32_t value) {

                    m_messageSize_ = value;
                }

                ::UMAA::Common::Measurement::DateTime& messageTimeStamp() noexcept {
                    return m_messageTimeStamp_;
                }

                const ::UMAA::Common::Measurement::DateTime& messageTimeStamp() const noexcept {
                    return m_messageTimeStamp_;
                }

                void messageTimeStamp(const ::UMAA::Common::Measurement::DateTime& value) {

                    m_messageTimeStamp_ = value;
                }

                void messageTimeStamp(::UMAA::Common::Measurement::DateTime&& value) {
                    m_messageTimeStamp_ = std::move(value);
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
                bool operator == (const CommsChannelMessageType& other_) const;
                bool operator != (const CommsChannelMessageType& other_) const;

                void swap(CommsChannelMessageType& other_) noexcept ;

              private:

                ::UMAA::Common::Measurement::NumericGUID m_messageID_ {};
                int32_t m_messageSize_;
                ::UMAA::Common::Measurement::DateTime m_messageTimeStamp_;
                std::string m_messageType_;

            };

            inline void swap(CommsChannelMessageType& a, CommsChannelMessageType& b)  noexcept 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const CommsChannelMessageType& sample);

        } // namespace CommsChannel  
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
        struct topic_type_name< ::UMAA::CO::CommsChannel::CommsChannelMessageType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::CO::CommsChannel::CommsChannelMessageType";
            }
        };

        template<>
        struct topic_type_support< ::UMAA::CO::CommsChannel::CommsChannelMessageType > {
            NDDSUSERDllExport 
            static void reset_sample(::UMAA::CO::CommsChannel::CommsChannelMessageType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(::UMAA::CO::CommsChannel::CommsChannelMessageType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };
    }
}

namespace rti { 
    namespace topic {

        template<>
        struct dynamic_type< ::UMAA::CO::CommsChannel::CommsChannelMessageType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };

        template <>
        struct extensibility< ::UMAA::CO::CommsChannel::CommsChannelMessageType > {
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

#endif // CommsChannelMessageType_1823742315_hpp

