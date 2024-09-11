

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from CommsChannelSenderStatisticsType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef CommsChannelSenderStatisticsType_929522045_hpp
#define CommsChannelSenderStatisticsType_929522045_hpp

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
namespace UMAA {
    namespace CO {
        namespace CommsChannel {

            class NDDSUSERDllExport CommsChannelSenderStatisticsType {
              public:

                CommsChannelSenderStatisticsType();

                CommsChannelSenderStatisticsType(int32_t countBytes_,double duration_,int32_t numMessages_);

                int32_t& countBytes() noexcept {
                    return m_countBytes_;
                }

                const int32_t& countBytes() const noexcept {
                    return m_countBytes_;
                }

                void countBytes(int32_t value) {

                    m_countBytes_ = value;
                }

                double& duration() noexcept {
                    return m_duration_;
                }

                const double& duration() const noexcept {
                    return m_duration_;
                }

                void duration(double value) {

                    m_duration_ = value;
                }

                int32_t& numMessages() noexcept {
                    return m_numMessages_;
                }

                const int32_t& numMessages() const noexcept {
                    return m_numMessages_;
                }

                void numMessages(int32_t value) {

                    m_numMessages_ = value;
                }

                bool operator == (const CommsChannelSenderStatisticsType& other_) const;
                bool operator != (const CommsChannelSenderStatisticsType& other_) const;

                void swap(CommsChannelSenderStatisticsType& other_) noexcept ;

              private:

                int32_t m_countBytes_;
                double m_duration_;
                int32_t m_numMessages_;

            };

            inline void swap(CommsChannelSenderStatisticsType& a, CommsChannelSenderStatisticsType& b)  noexcept 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const CommsChannelSenderStatisticsType& sample);

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
        struct topic_type_name< ::UMAA::CO::CommsChannel::CommsChannelSenderStatisticsType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::CO::CommsChannel::CommsChannelSenderStatisticsType";
            }
        };

        template<>
        struct topic_type_support< ::UMAA::CO::CommsChannel::CommsChannelSenderStatisticsType > {
            NDDSUSERDllExport 
            static void reset_sample(::UMAA::CO::CommsChannel::CommsChannelSenderStatisticsType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(::UMAA::CO::CommsChannel::CommsChannelSenderStatisticsType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };
    }
}

namespace rti { 
    namespace topic {

        template<>
        struct dynamic_type< ::UMAA::CO::CommsChannel::CommsChannelSenderStatisticsType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };

        template <>
        struct extensibility< ::UMAA::CO::CommsChannel::CommsChannelSenderStatisticsType > {
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

#endif // CommsChannelSenderStatisticsType_929522045_hpp

