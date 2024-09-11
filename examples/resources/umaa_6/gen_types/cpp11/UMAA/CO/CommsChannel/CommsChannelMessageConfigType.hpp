

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from CommsChannelMessageConfigType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef CommsChannelMessageConfigType_1548369107_hpp
#define CommsChannelMessageConfigType_1548369107_hpp

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
    namespace CO {
        namespace CommsChannel {

            class NDDSUSERDllExport CommsChannelMessageConfigType {
              public:

                CommsChannelMessageConfigType();

                CommsChannelMessageConfigType(const ::UMAA::Common::Measurement::NumericGUID& commsChannelID_,double deadline_,const ::UMAA::Common::IdentifierType& destination_,const ::UMAA::Common::Measurement::NumericGUID& messageFilterIDs_,const std::string& messageType_,int32_t priority_,const ::UMAA::Common::MaritimeEnumeration::BufferPurgeOptionEnumModule::BufferPurgeOptionEnumType& purgeOption_);

                ::UMAA::Common::Measurement::NumericGUID& commsChannelID() noexcept {
                    return m_commsChannelID_;
                }

                const ::UMAA::Common::Measurement::NumericGUID& commsChannelID() const noexcept {
                    return m_commsChannelID_;
                }

                void commsChannelID(const ::UMAA::Common::Measurement::NumericGUID& value) {

                    m_commsChannelID_ = value;
                }

                void commsChannelID(::UMAA::Common::Measurement::NumericGUID&& value) {
                    m_commsChannelID_ = std::move(value);
                }
                double& deadline() noexcept {
                    return m_deadline_;
                }

                const double& deadline() const noexcept {
                    return m_deadline_;
                }

                void deadline(double value) {

                    m_deadline_ = value;
                }

                ::UMAA::Common::IdentifierType& destination() noexcept {
                    return m_destination_;
                }

                const ::UMAA::Common::IdentifierType& destination() const noexcept {
                    return m_destination_;
                }

                void destination(const ::UMAA::Common::IdentifierType& value) {

                    m_destination_ = value;
                }

                void destination(::UMAA::Common::IdentifierType&& value) {
                    m_destination_ = std::move(value);
                }
                ::UMAA::Common::Measurement::NumericGUID& messageFilterIDs() noexcept {
                    return m_messageFilterIDs_;
                }

                const ::UMAA::Common::Measurement::NumericGUID& messageFilterIDs() const noexcept {
                    return m_messageFilterIDs_;
                }

                void messageFilterIDs(const ::UMAA::Common::Measurement::NumericGUID& value) {

                    m_messageFilterIDs_ = value;
                }

                void messageFilterIDs(::UMAA::Common::Measurement::NumericGUID&& value) {
                    m_messageFilterIDs_ = std::move(value);
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
                int32_t& priority() noexcept {
                    return m_priority_;
                }

                const int32_t& priority() const noexcept {
                    return m_priority_;
                }

                void priority(int32_t value) {

                    m_priority_ = value;
                }

                ::UMAA::Common::MaritimeEnumeration::BufferPurgeOptionEnumModule::BufferPurgeOptionEnumType& purgeOption() noexcept {
                    return m_purgeOption_;
                }

                const ::UMAA::Common::MaritimeEnumeration::BufferPurgeOptionEnumModule::BufferPurgeOptionEnumType& purgeOption() const noexcept {
                    return m_purgeOption_;
                }

                void purgeOption(const ::UMAA::Common::MaritimeEnumeration::BufferPurgeOptionEnumModule::BufferPurgeOptionEnumType& value) {

                    m_purgeOption_ = value;
                }

                void purgeOption(::UMAA::Common::MaritimeEnumeration::BufferPurgeOptionEnumModule::BufferPurgeOptionEnumType&& value) {
                    m_purgeOption_ = std::move(value);
                }
                bool operator == (const CommsChannelMessageConfigType& other_) const;
                bool operator != (const CommsChannelMessageConfigType& other_) const;

                void swap(CommsChannelMessageConfigType& other_) noexcept ;

              private:

                ::UMAA::Common::Measurement::NumericGUID m_commsChannelID_ {};
                double m_deadline_;
                ::UMAA::Common::IdentifierType m_destination_;
                ::UMAA::Common::Measurement::NumericGUID m_messageFilterIDs_ {};
                std::string m_messageType_;
                int32_t m_priority_;
                ::UMAA::Common::MaritimeEnumeration::BufferPurgeOptionEnumModule::BufferPurgeOptionEnumType m_purgeOption_;

            };

            inline void swap(CommsChannelMessageConfigType& a, CommsChannelMessageConfigType& b)  noexcept 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const CommsChannelMessageConfigType& sample);

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
        struct topic_type_name< ::UMAA::CO::CommsChannel::CommsChannelMessageConfigType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::CO::CommsChannel::CommsChannelMessageConfigType";
            }
        };

        template<>
        struct topic_type_support< ::UMAA::CO::CommsChannel::CommsChannelMessageConfigType > {
            NDDSUSERDllExport 
            static void reset_sample(::UMAA::CO::CommsChannel::CommsChannelMessageConfigType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(::UMAA::CO::CommsChannel::CommsChannelMessageConfigType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };
    }
}

namespace rti { 
    namespace topic {

        template<>
        struct dynamic_type< ::UMAA::CO::CommsChannel::CommsChannelMessageConfigType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };

        template <>
        struct extensibility< ::UMAA::CO::CommsChannel::CommsChannelMessageConfigType > {
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

#endif // CommsChannelMessageConfigType_1548369107_hpp

