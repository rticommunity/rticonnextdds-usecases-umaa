

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from AltitudeGeodeticRequirementVariantType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef AltitudeGeodeticRequirementVariantType_1938833076_hpp
#define AltitudeGeodeticRequirementVariantType_1938833076_hpp

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
#include "UMAA/Common/Measurement/AltitudeGeodeticRequirementType.hpp"
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif
namespace UMAA {
    namespace Common {
        namespace Measurement {

            class NDDSUSERDllExport AltitudeGeodeticRequirementVariantType {
              public:

                AltitudeGeodeticRequirementVariantType();

                explicit AltitudeGeodeticRequirementVariantType(const ::UMAA::Common::Measurement::AltitudeGeodeticRequirementType& altitude_);

                ::UMAA::Common::Measurement::AltitudeGeodeticRequirementType& altitude() noexcept {
                    return m_altitude_;
                }

                const ::UMAA::Common::Measurement::AltitudeGeodeticRequirementType& altitude() const noexcept {
                    return m_altitude_;
                }

                void altitude(const ::UMAA::Common::Measurement::AltitudeGeodeticRequirementType& value) {

                    m_altitude_ = value;
                }

                void altitude(::UMAA::Common::Measurement::AltitudeGeodeticRequirementType&& value) {
                    m_altitude_ = std::move(value);
                }
                bool operator == (const AltitudeGeodeticRequirementVariantType& other_) const;
                bool operator != (const AltitudeGeodeticRequirementVariantType& other_) const;

                void swap(AltitudeGeodeticRequirementVariantType& other_) noexcept ;

              private:

                ::UMAA::Common::Measurement::AltitudeGeodeticRequirementType m_altitude_;

            };

            inline void swap(AltitudeGeodeticRequirementVariantType& a, AltitudeGeodeticRequirementVariantType& b)  noexcept 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const AltitudeGeodeticRequirementVariantType& sample);

        } // namespace Measurement  
    } // namespace Common  
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
        struct topic_type_name< ::UMAA::Common::Measurement::AltitudeGeodeticRequirementVariantType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::Common::Measurement::AltitudeGeodeticRequirementVariantType";
            }
        };

        template<>
        struct topic_type_support< ::UMAA::Common::Measurement::AltitudeGeodeticRequirementVariantType > {
            NDDSUSERDllExport 
            static void reset_sample(::UMAA::Common::Measurement::AltitudeGeodeticRequirementVariantType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(::UMAA::Common::Measurement::AltitudeGeodeticRequirementVariantType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };
    }
}

namespace rti { 
    namespace topic {

        template<>
        struct dynamic_type< ::UMAA::Common::Measurement::AltitudeGeodeticRequirementVariantType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };

        template <>
        struct extensibility< ::UMAA::Common::Measurement::AltitudeGeodeticRequirementVariantType > {
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

#endif // AltitudeGeodeticRequirementVariantType_1938833076_hpp
