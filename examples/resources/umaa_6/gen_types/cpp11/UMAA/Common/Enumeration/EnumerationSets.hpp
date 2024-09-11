

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from EnumerationSets.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef EnumerationSets_1089229688_hpp
#define EnumerationSets_1089229688_hpp

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

#undef ERROR
#undef VARIABLE_PITCH
#undef DELETE
#undef PLATFORM
namespace UMAA {
    namespace Common {
        namespace Enumeration {

            typedef bool BooleanEnumType;
            struct BooleanEnumType_AliasTag_t {};
            namespace LineSegmentEnumModule {
                enum class LineSegmentEnumType {
                    GREAT_CIRCLE, 
                    RHUMB
                };

                NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const LineSegmentEnumType& sample);
            } // namespace LineSegmentEnumModule  
            namespace OnOffStatusEnumModule {
                enum class OnOffStatusEnumType {
                    OFF, 
                    ON
                };

                NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const OnOffStatusEnumType& sample);
            } // namespace OnOffStatusEnumModule  
            namespace PrecipitationEnumModule {
                enum class PrecipitationEnumType {
                    DRIZZLE, 
                    FOG, 
                    HAZE, 
                    RAIN, 
                    SHOWERS, 
                    SNOW, 
                    THUNDERSTORMS
                };

                NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const PrecipitationEnumType& sample);
            } // namespace PrecipitationEnumModule  
            namespace ResourceAllocationStatusEnumModule {
                enum class ResourceAllocationStatusEnumType {
                    ALLOCATED, 
                    ALLOCATED_W_LAUNCH_RECOVERY, 
                    AVAILABLE, 
                    FAULT, 
                    FORCED_ALLOCATION, 
                    FORCED_ALLOCATION_W_LAUNCH_RECOVERY, 
                    RELEASED, 
                    TEMPORARILY_UNAVAILABLE, 
                    UNAVAILABLE
                };

                NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const ResourceAllocationStatusEnumType& sample);
            } // namespace ResourceAllocationStatusEnumModule  
            namespace SpecificLOIEnumModule {
                enum class SpecificLOIEnumType {
                    LOI_1, 
                    LOI_2, 
                    LOI_3, 
                    LOI_4, 
                    LOI_5
                };

                NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const SpecificLOIEnumType& sample);
            } // namespace SpecificLOIEnumModule  
        } // namespace Enumeration  
    } // namespace Common  
} // namespace UMAA  

#ifdef NDDS_STANDALONE_TYPE
namespace rti { 
    namespace topic {
        template <>
        struct default_enumerator< ::UMAA::Common::Enumeration::LineSegmentEnumModule::LineSegmentEnumType>
        {
            static const ::UMAA::Common::Enumeration::LineSegmentEnumModule::LineSegmentEnumType value;
        };
        template <>
        struct default_enumerator< ::UMAA::Common::Enumeration::OnOffStatusEnumModule::OnOffStatusEnumType>
        {
            static const ::UMAA::Common::Enumeration::OnOffStatusEnumModule::OnOffStatusEnumType value;
        };
        template <>
        struct default_enumerator< ::UMAA::Common::Enumeration::PrecipitationEnumModule::PrecipitationEnumType>
        {
            static const ::UMAA::Common::Enumeration::PrecipitationEnumModule::PrecipitationEnumType value;
        };
        template <>
        struct default_enumerator< ::UMAA::Common::Enumeration::ResourceAllocationStatusEnumModule::ResourceAllocationStatusEnumType>
        {
            static const ::UMAA::Common::Enumeration::ResourceAllocationStatusEnumModule::ResourceAllocationStatusEnumType value;
        };
        template <>
        struct default_enumerator< ::UMAA::Common::Enumeration::SpecificLOIEnumModule::SpecificLOIEnumType>
        {
            static const ::UMAA::Common::Enumeration::SpecificLOIEnumModule::SpecificLOIEnumType value;
        };
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

    }
}

namespace rti { 
    namespace topic {

        template<>
        struct dynamic_type< ::UMAA::Common::Enumeration::BooleanEnumType_AliasTag_t > {
            typedef ::dds::core::xtypes::AliasType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::AliasType& get();
        };

        template <>
        struct default_enumerator< ::UMAA::Common::Enumeration::LineSegmentEnumModule::LineSegmentEnumType>
        {
            static const ::UMAA::Common::Enumeration::LineSegmentEnumModule::LineSegmentEnumType value;
        };
        template<>
        struct dynamic_type< ::UMAA::Common::Enumeration::LineSegmentEnumModule::LineSegmentEnumType > {
            typedef ::dds::core::xtypes::EnumType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::EnumType& get();
        };

        template <>
        struct extensibility< ::UMAA::Common::Enumeration::LineSegmentEnumModule::LineSegmentEnumType > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

        template <>
        struct default_enumerator< ::UMAA::Common::Enumeration::OnOffStatusEnumModule::OnOffStatusEnumType>
        {
            static const ::UMAA::Common::Enumeration::OnOffStatusEnumModule::OnOffStatusEnumType value;
        };
        template<>
        struct dynamic_type< ::UMAA::Common::Enumeration::OnOffStatusEnumModule::OnOffStatusEnumType > {
            typedef ::dds::core::xtypes::EnumType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::EnumType& get();
        };

        template <>
        struct extensibility< ::UMAA::Common::Enumeration::OnOffStatusEnumModule::OnOffStatusEnumType > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

        template <>
        struct default_enumerator< ::UMAA::Common::Enumeration::PrecipitationEnumModule::PrecipitationEnumType>
        {
            static const ::UMAA::Common::Enumeration::PrecipitationEnumModule::PrecipitationEnumType value;
        };
        template<>
        struct dynamic_type< ::UMAA::Common::Enumeration::PrecipitationEnumModule::PrecipitationEnumType > {
            typedef ::dds::core::xtypes::EnumType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::EnumType& get();
        };

        template <>
        struct extensibility< ::UMAA::Common::Enumeration::PrecipitationEnumModule::PrecipitationEnumType > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

        template <>
        struct default_enumerator< ::UMAA::Common::Enumeration::ResourceAllocationStatusEnumModule::ResourceAllocationStatusEnumType>
        {
            static const ::UMAA::Common::Enumeration::ResourceAllocationStatusEnumModule::ResourceAllocationStatusEnumType value;
        };
        template<>
        struct dynamic_type< ::UMAA::Common::Enumeration::ResourceAllocationStatusEnumModule::ResourceAllocationStatusEnumType > {
            typedef ::dds::core::xtypes::EnumType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::EnumType& get();
        };

        template <>
        struct extensibility< ::UMAA::Common::Enumeration::ResourceAllocationStatusEnumModule::ResourceAllocationStatusEnumType > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

        template <>
        struct default_enumerator< ::UMAA::Common::Enumeration::SpecificLOIEnumModule::SpecificLOIEnumType>
        {
            static const ::UMAA::Common::Enumeration::SpecificLOIEnumModule::SpecificLOIEnumType value;
        };
        template<>
        struct dynamic_type< ::UMAA::Common::Enumeration::SpecificLOIEnumModule::SpecificLOIEnumType > {
            typedef ::dds::core::xtypes::EnumType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::EnumType& get();
        };

        template <>
        struct extensibility< ::UMAA::Common::Enumeration::SpecificLOIEnumModule::SpecificLOIEnumType > {
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

#endif // EnumerationSets_1089229688_hpp

