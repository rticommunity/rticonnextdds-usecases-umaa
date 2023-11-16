

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from EnumerationSets.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef EnumerationSets_1089233216_hpp
#define EnumerationSets_1089233216_hpp

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
#include "BasicTypes/Quaternion.hpp"
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
            namespace AutomationEnumType {
                enum class AutomationEnumType {
                    AUTOMATIC, 
                    MANUAL, 
                    SEMI_AUTOMATIC
                };

                NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const AutomationEnumType& sample);
            } // namespace AutomationEnumType  

            typedef bool BooleanEnumType;
            struct BooleanEnumType_AliasTag_t {};
            namespace BuiltInTestStatusEnumType {
                enum class BuiltInTestStatusEnumType {
                    BIT_SUSPENDED, 
                    BIT_FAILED, 
                    BIT_PASSED, 
                    RUNNING_BIT, 
                    OFF_ABORT
                };

                NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const BuiltInTestStatusEnumType& sample);
            } // namespace BuiltInTestStatusEnumType  
            namespace IRPolarityEnumType {
                enum class IRPolarityEnumType {
                    BLACK_HOT, 
                    WHITE_HOT
                };

                NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const IRPolarityEnumType& sample);
            } // namespace IRPolarityEnumType  
            namespace LineSegmentEnumType {
                enum class LineSegmentEnumType {
                    GREAT_CIRCLE, 
                    RHUMB
                };

                NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const LineSegmentEnumType& sample);
            } // namespace LineSegmentEnumType  
            namespace NetworkProtocolEnumType {
                enum class NetworkProtocolEnumType {
                    TCP_IPV4, 
                    TCP_IPV6, 
                    UDP_IPV4, 
                    UDP_IPV6
                };

                NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const NetworkProtocolEnumType& sample);
            } // namespace NetworkProtocolEnumType  
            namespace OnOffStatusEnumType {
                enum class OnOffStatusEnumType {
                    OFF, 
                    ON
                };

                NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const OnOffStatusEnumType& sample);
            } // namespace OnOffStatusEnumType  
            namespace PlanActionEnumType {
                enum class PlanActionEnumType {
                    ABORT_MISSION_LOAD_PLAN, 
                    ADD_PLAN, 
                    DELETE_PLAN, 
                    DOWNLOAD_PLAN, 
                    RETRIEVE_PLAN, 
                    UPDATE_PLAN, 
                    UPLOAD_PLAN
                };

                NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const PlanActionEnumType& sample);
            } // namespace PlanActionEnumType  
            namespace PowerStatusEnumType {
                enum class PowerStatusEnumType {
                    POWER_OFF, 
                    POWER_ON, 
                    EMERGENCY_POWER, 
                    POWER_STANDBY
                };

                NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const PowerStatusEnumType& sample);
            } // namespace PowerStatusEnumType  
            namespace PrecipitationEnumType {
                enum class PrecipitationEnumType {
                    THUNDERSTORMS, 
                    FOG, 
                    HAZE, 
                    SNOW, 
                    DRIZZLE, 
                    RAIN, 
                    SHOWERS
                };

                NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const PrecipitationEnumType& sample);
            } // namespace PrecipitationEnumType  
            namespace ResourceAllocationStatusEnumType {
                enum class ResourceAllocationStatusEnumType {
                    FORCED_ALLOCATION, 
                    FORCED_ALLOCATION_W_LAUNCH_RECOVERY, 
                    ALLOCATED, 
                    ALLOCATED_W_LAUNCH_RECOVERY, 
                    AVAILABLE, 
                    RELEASED, 
                    TEMPORARILY_UNAVAILABLE, 
                    UNAVAILABLE, 
                    FAULT
                };

                NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const ResourceAllocationStatusEnumType& sample);
            } // namespace ResourceAllocationStatusEnumType  
            namespace SpecificLOIEnumType {
                enum class SpecificLOIEnumType {
                    LOI_1, 
                    LOI_2, 
                    LOI_3, 
                    LOI_4, 
                    LOI_5
                };

                NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const SpecificLOIEnumType& sample);
            } // namespace SpecificLOIEnumType  
        } // namespace Enumeration  
    } // namespace Common  
} // namespace UMAA  

#ifdef NDDS_STANDALONE_TYPE
namespace rti { 
    namespace topic {
        template <>
        struct default_enumerator< ::UMAA::Common::Enumeration::AutomationEnumType::AutomationEnumType>
        {
            static const ::UMAA::Common::Enumeration::AutomationEnumType::AutomationEnumType value;
        };
        template <>
        struct default_enumerator< ::UMAA::Common::Enumeration::BuiltInTestStatusEnumType::BuiltInTestStatusEnumType>
        {
            static const ::UMAA::Common::Enumeration::BuiltInTestStatusEnumType::BuiltInTestStatusEnumType value;
        };
        template <>
        struct default_enumerator< ::UMAA::Common::Enumeration::IRPolarityEnumType::IRPolarityEnumType>
        {
            static const ::UMAA::Common::Enumeration::IRPolarityEnumType::IRPolarityEnumType value;
        };
        template <>
        struct default_enumerator< ::UMAA::Common::Enumeration::LineSegmentEnumType::LineSegmentEnumType>
        {
            static const ::UMAA::Common::Enumeration::LineSegmentEnumType::LineSegmentEnumType value;
        };
        template <>
        struct default_enumerator< ::UMAA::Common::Enumeration::NetworkProtocolEnumType::NetworkProtocolEnumType>
        {
            static const ::UMAA::Common::Enumeration::NetworkProtocolEnumType::NetworkProtocolEnumType value;
        };
        template <>
        struct default_enumerator< ::UMAA::Common::Enumeration::OnOffStatusEnumType::OnOffStatusEnumType>
        {
            static const ::UMAA::Common::Enumeration::OnOffStatusEnumType::OnOffStatusEnumType value;
        };
        template <>
        struct default_enumerator< ::UMAA::Common::Enumeration::PlanActionEnumType::PlanActionEnumType>
        {
            static const ::UMAA::Common::Enumeration::PlanActionEnumType::PlanActionEnumType value;
        };
        template <>
        struct default_enumerator< ::UMAA::Common::Enumeration::PowerStatusEnumType::PowerStatusEnumType>
        {
            static const ::UMAA::Common::Enumeration::PowerStatusEnumType::PowerStatusEnumType value;
        };
        template <>
        struct default_enumerator< ::UMAA::Common::Enumeration::PrecipitationEnumType::PrecipitationEnumType>
        {
            static const ::UMAA::Common::Enumeration::PrecipitationEnumType::PrecipitationEnumType value;
        };
        template <>
        struct default_enumerator< ::UMAA::Common::Enumeration::ResourceAllocationStatusEnumType::ResourceAllocationStatusEnumType>
        {
            static const ::UMAA::Common::Enumeration::ResourceAllocationStatusEnumType::ResourceAllocationStatusEnumType value;
        };
        template <>
        struct default_enumerator< ::UMAA::Common::Enumeration::SpecificLOIEnumType::SpecificLOIEnumType>
        {
            static const ::UMAA::Common::Enumeration::SpecificLOIEnumType::SpecificLOIEnumType value;
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

        template <>
        struct default_enumerator< ::UMAA::Common::Enumeration::AutomationEnumType::AutomationEnumType>
        {
            static const ::UMAA::Common::Enumeration::AutomationEnumType::AutomationEnumType value;
        };
        template<>
        struct dynamic_type< ::UMAA::Common::Enumeration::AutomationEnumType::AutomationEnumType > {
            typedef ::dds::core::xtypes::EnumType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::EnumType& get();
        };

        template <>
        struct extensibility< ::UMAA::Common::Enumeration::AutomationEnumType::AutomationEnumType > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

        template<>
        struct dynamic_type< ::UMAA::Common::Enumeration::BooleanEnumType_AliasTag_t > {
            typedef ::dds::core::xtypes::AliasType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::AliasType& get();
        };

        template <>
        struct default_enumerator< ::UMAA::Common::Enumeration::BuiltInTestStatusEnumType::BuiltInTestStatusEnumType>
        {
            static const ::UMAA::Common::Enumeration::BuiltInTestStatusEnumType::BuiltInTestStatusEnumType value;
        };
        template<>
        struct dynamic_type< ::UMAA::Common::Enumeration::BuiltInTestStatusEnumType::BuiltInTestStatusEnumType > {
            typedef ::dds::core::xtypes::EnumType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::EnumType& get();
        };

        template <>
        struct extensibility< ::UMAA::Common::Enumeration::BuiltInTestStatusEnumType::BuiltInTestStatusEnumType > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

        template <>
        struct default_enumerator< ::UMAA::Common::Enumeration::IRPolarityEnumType::IRPolarityEnumType>
        {
            static const ::UMAA::Common::Enumeration::IRPolarityEnumType::IRPolarityEnumType value;
        };
        template<>
        struct dynamic_type< ::UMAA::Common::Enumeration::IRPolarityEnumType::IRPolarityEnumType > {
            typedef ::dds::core::xtypes::EnumType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::EnumType& get();
        };

        template <>
        struct extensibility< ::UMAA::Common::Enumeration::IRPolarityEnumType::IRPolarityEnumType > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

        template <>
        struct default_enumerator< ::UMAA::Common::Enumeration::LineSegmentEnumType::LineSegmentEnumType>
        {
            static const ::UMAA::Common::Enumeration::LineSegmentEnumType::LineSegmentEnumType value;
        };
        template<>
        struct dynamic_type< ::UMAA::Common::Enumeration::LineSegmentEnumType::LineSegmentEnumType > {
            typedef ::dds::core::xtypes::EnumType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::EnumType& get();
        };

        template <>
        struct extensibility< ::UMAA::Common::Enumeration::LineSegmentEnumType::LineSegmentEnumType > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

        template <>
        struct default_enumerator< ::UMAA::Common::Enumeration::NetworkProtocolEnumType::NetworkProtocolEnumType>
        {
            static const ::UMAA::Common::Enumeration::NetworkProtocolEnumType::NetworkProtocolEnumType value;
        };
        template<>
        struct dynamic_type< ::UMAA::Common::Enumeration::NetworkProtocolEnumType::NetworkProtocolEnumType > {
            typedef ::dds::core::xtypes::EnumType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::EnumType& get();
        };

        template <>
        struct extensibility< ::UMAA::Common::Enumeration::NetworkProtocolEnumType::NetworkProtocolEnumType > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

        template <>
        struct default_enumerator< ::UMAA::Common::Enumeration::OnOffStatusEnumType::OnOffStatusEnumType>
        {
            static const ::UMAA::Common::Enumeration::OnOffStatusEnumType::OnOffStatusEnumType value;
        };
        template<>
        struct dynamic_type< ::UMAA::Common::Enumeration::OnOffStatusEnumType::OnOffStatusEnumType > {
            typedef ::dds::core::xtypes::EnumType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::EnumType& get();
        };

        template <>
        struct extensibility< ::UMAA::Common::Enumeration::OnOffStatusEnumType::OnOffStatusEnumType > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

        template <>
        struct default_enumerator< ::UMAA::Common::Enumeration::PlanActionEnumType::PlanActionEnumType>
        {
            static const ::UMAA::Common::Enumeration::PlanActionEnumType::PlanActionEnumType value;
        };
        template<>
        struct dynamic_type< ::UMAA::Common::Enumeration::PlanActionEnumType::PlanActionEnumType > {
            typedef ::dds::core::xtypes::EnumType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::EnumType& get();
        };

        template <>
        struct extensibility< ::UMAA::Common::Enumeration::PlanActionEnumType::PlanActionEnumType > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

        template <>
        struct default_enumerator< ::UMAA::Common::Enumeration::PowerStatusEnumType::PowerStatusEnumType>
        {
            static const ::UMAA::Common::Enumeration::PowerStatusEnumType::PowerStatusEnumType value;
        };
        template<>
        struct dynamic_type< ::UMAA::Common::Enumeration::PowerStatusEnumType::PowerStatusEnumType > {
            typedef ::dds::core::xtypes::EnumType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::EnumType& get();
        };

        template <>
        struct extensibility< ::UMAA::Common::Enumeration::PowerStatusEnumType::PowerStatusEnumType > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

        template <>
        struct default_enumerator< ::UMAA::Common::Enumeration::PrecipitationEnumType::PrecipitationEnumType>
        {
            static const ::UMAA::Common::Enumeration::PrecipitationEnumType::PrecipitationEnumType value;
        };
        template<>
        struct dynamic_type< ::UMAA::Common::Enumeration::PrecipitationEnumType::PrecipitationEnumType > {
            typedef ::dds::core::xtypes::EnumType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::EnumType& get();
        };

        template <>
        struct extensibility< ::UMAA::Common::Enumeration::PrecipitationEnumType::PrecipitationEnumType > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

        template <>
        struct default_enumerator< ::UMAA::Common::Enumeration::ResourceAllocationStatusEnumType::ResourceAllocationStatusEnumType>
        {
            static const ::UMAA::Common::Enumeration::ResourceAllocationStatusEnumType::ResourceAllocationStatusEnumType value;
        };
        template<>
        struct dynamic_type< ::UMAA::Common::Enumeration::ResourceAllocationStatusEnumType::ResourceAllocationStatusEnumType > {
            typedef ::dds::core::xtypes::EnumType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::EnumType& get();
        };

        template <>
        struct extensibility< ::UMAA::Common::Enumeration::ResourceAllocationStatusEnumType::ResourceAllocationStatusEnumType > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

        template <>
        struct default_enumerator< ::UMAA::Common::Enumeration::SpecificLOIEnumType::SpecificLOIEnumType>
        {
            static const ::UMAA::Common::Enumeration::SpecificLOIEnumType::SpecificLOIEnumType value;
        };
        template<>
        struct dynamic_type< ::UMAA::Common::Enumeration::SpecificLOIEnumType::SpecificLOIEnumType > {
            typedef ::dds::core::xtypes::EnumType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::EnumType& get();
        };

        template <>
        struct extensibility< ::UMAA::Common::Enumeration::SpecificLOIEnumType::SpecificLOIEnumType > {
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

#endif // EnumerationSets_1089233216_hpp

