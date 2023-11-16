

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from OrderedEnumerationSets.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef OrderedEnumerationSets_1072805935_hpp
#define OrderedEnumerationSets_1072805935_hpp

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
        namespace OrderedEnumeration {
            namespace CloudCoverEnumType {
                enum class CloudCoverEnumType {
                    OVERCAST, 
                    BROKEN, 
                    FEW, 
                    SCATTERED, 
                    CLEAR
                };

                NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const CloudCoverEnumType& sample);
            } // namespace CloudCoverEnumType  
            namespace SeaStateEnumType {
                enum class SeaStateEnumType {
                    CALM_GLOSSY, 
                    CALM_RIPPLED, 
                    HIGH, 
                    MODERATE, 
                    PHENOMENAL, 
                    ROUGH, 
                    SLIGHT, 
                    SMOOTH, 
                    VERY_HIGH, 
                    VERY_ROUGH
                };

                NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const SeaStateEnumType& sample);
            } // namespace SeaStateEnumType  
            namespace WeatherSeverityEnumType {
                enum class WeatherSeverityEnumType {
                    EXTREME, 
                    LIGHT, 
                    MODERATE, 
                    SEVERE, 
                    NONE
                };

                NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const WeatherSeverityEnumType& sample);
            } // namespace WeatherSeverityEnumType  
        } // namespace OrderedEnumeration  
    } // namespace Common  
} // namespace UMAA  

#ifdef NDDS_STANDALONE_TYPE
namespace rti { 
    namespace topic {
        template <>
        struct default_enumerator< ::UMAA::Common::OrderedEnumeration::CloudCoverEnumType::CloudCoverEnumType>
        {
            static const ::UMAA::Common::OrderedEnumeration::CloudCoverEnumType::CloudCoverEnumType value;
        };
        template <>
        struct default_enumerator< ::UMAA::Common::OrderedEnumeration::SeaStateEnumType::SeaStateEnumType>
        {
            static const ::UMAA::Common::OrderedEnumeration::SeaStateEnumType::SeaStateEnumType value;
        };
        template <>
        struct default_enumerator< ::UMAA::Common::OrderedEnumeration::WeatherSeverityEnumType::WeatherSeverityEnumType>
        {
            static const ::UMAA::Common::OrderedEnumeration::WeatherSeverityEnumType::WeatherSeverityEnumType value;
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
        struct default_enumerator< ::UMAA::Common::OrderedEnumeration::CloudCoverEnumType::CloudCoverEnumType>
        {
            static const ::UMAA::Common::OrderedEnumeration::CloudCoverEnumType::CloudCoverEnumType value;
        };
        template<>
        struct dynamic_type< ::UMAA::Common::OrderedEnumeration::CloudCoverEnumType::CloudCoverEnumType > {
            typedef ::dds::core::xtypes::EnumType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::EnumType& get();
        };

        template <>
        struct extensibility< ::UMAA::Common::OrderedEnumeration::CloudCoverEnumType::CloudCoverEnumType > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

        template <>
        struct default_enumerator< ::UMAA::Common::OrderedEnumeration::SeaStateEnumType::SeaStateEnumType>
        {
            static const ::UMAA::Common::OrderedEnumeration::SeaStateEnumType::SeaStateEnumType value;
        };
        template<>
        struct dynamic_type< ::UMAA::Common::OrderedEnumeration::SeaStateEnumType::SeaStateEnumType > {
            typedef ::dds::core::xtypes::EnumType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::EnumType& get();
        };

        template <>
        struct extensibility< ::UMAA::Common::OrderedEnumeration::SeaStateEnumType::SeaStateEnumType > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

        template <>
        struct default_enumerator< ::UMAA::Common::OrderedEnumeration::WeatherSeverityEnumType::WeatherSeverityEnumType>
        {
            static const ::UMAA::Common::OrderedEnumeration::WeatherSeverityEnumType::WeatherSeverityEnumType value;
        };
        template<>
        struct dynamic_type< ::UMAA::Common::OrderedEnumeration::WeatherSeverityEnumType::WeatherSeverityEnumType > {
            typedef ::dds::core::xtypes::EnumType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::EnumType& get();
        };

        template <>
        struct extensibility< ::UMAA::Common::OrderedEnumeration::WeatherSeverityEnumType::WeatherSeverityEnumType > {
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

#endif // OrderedEnumerationSets_1072805935_hpp

