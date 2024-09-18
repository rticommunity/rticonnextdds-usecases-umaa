

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ResourceAllocationControlInfo.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef ResourceAllocationControlInfo_616192510_hpp
#define ResourceAllocationControlInfo_616192510_hpp

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
#include "UMAA/SO/ResourceAllocation/ResourceAllocationControlSession.hpp"
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif
namespace UMAA {
    namespace SO {
        namespace ResourceAllocation {

            class NDDSUSERDllExport ResourceAllocationControlInfo {
              public:

                ResourceAllocationControlInfo();

                ResourceAllocationControlInfo(const ::dds::core::optional< ::UMAA::SO::ResourceAllocation::ResourceAllocationControlSession >& controlSession_,const ::UMAA::Common::IdentifierType& resourceID_);

                ::dds::core::optional< ::UMAA::SO::ResourceAllocation::ResourceAllocationControlSession >& controlSession() noexcept {
                    return m_controlSession_;
                }

                const ::dds::core::optional< ::UMAA::SO::ResourceAllocation::ResourceAllocationControlSession >& controlSession() const noexcept {
                    return m_controlSession_;
                }

                void controlSession(const ::dds::core::optional< ::UMAA::SO::ResourceAllocation::ResourceAllocationControlSession >& value) {

                    m_controlSession_ = value;
                }

                void controlSession(::dds::core::optional< ::UMAA::SO::ResourceAllocation::ResourceAllocationControlSession >&& value) {
                    m_controlSession_ = std::move(value);
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
                bool operator == (const ResourceAllocationControlInfo& other_) const;
                bool operator != (const ResourceAllocationControlInfo& other_) const;

                void swap(ResourceAllocationControlInfo& other_) noexcept ;

              private:

                ::dds::core::optional< ::UMAA::SO::ResourceAllocation::ResourceAllocationControlSession > m_controlSession_;
                ::UMAA::Common::IdentifierType m_resourceID_;

            };

            inline void swap(ResourceAllocationControlInfo& a, ResourceAllocationControlInfo& b)  noexcept 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const ResourceAllocationControlInfo& sample);

        } // namespace ResourceAllocation  
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
        struct topic_type_name< ::UMAA::SO::ResourceAllocation::ResourceAllocationControlInfo > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::SO::ResourceAllocation::ResourceAllocationControlInfo";
            }
        };

        template<>
        struct topic_type_support< ::UMAA::SO::ResourceAllocation::ResourceAllocationControlInfo > {
            NDDSUSERDllExport 
            static void reset_sample(::UMAA::SO::ResourceAllocation::ResourceAllocationControlInfo& sample);

            NDDSUSERDllExport 
            static void allocate_sample(::UMAA::SO::ResourceAllocation::ResourceAllocationControlInfo& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };
    }
}

namespace rti { 
    namespace topic {

        template<>
        struct dynamic_type< ::UMAA::SO::ResourceAllocation::ResourceAllocationControlInfo > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };

        template <>
        struct extensibility< ::UMAA::SO::ResourceAllocation::ResourceAllocationControlInfo > {
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

#endif // ResourceAllocationControlInfo_616192510_hpp
