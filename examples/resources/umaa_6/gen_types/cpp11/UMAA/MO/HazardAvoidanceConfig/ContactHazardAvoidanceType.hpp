

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ContactHazardAvoidanceType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef ContactHazardAvoidanceType_2011818696_hpp
#define ContactHazardAvoidanceType_2011818696_hpp

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
#include "UMAA/MO/HazardAvoidanceConfig/COLREGSConfigurationType.hpp"
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif
namespace UMAA {
    namespace MO {
        namespace HazardAvoidanceConfig {

            class NDDSUSERDllExport ContactHazardAvoidanceType {
              public:

                ContactHazardAvoidanceType();

                ContactHazardAvoidanceType(const ::dds::core::optional< ::UMAA::MO::HazardAvoidanceConfig::COLREGSConfigurationType >& colregsConfig_,double minimumStandoff_);

                ::dds::core::optional< ::UMAA::MO::HazardAvoidanceConfig::COLREGSConfigurationType >& colregsConfig() noexcept {
                    return m_colregsConfig_;
                }

                const ::dds::core::optional< ::UMAA::MO::HazardAvoidanceConfig::COLREGSConfigurationType >& colregsConfig() const noexcept {
                    return m_colregsConfig_;
                }

                void colregsConfig(const ::dds::core::optional< ::UMAA::MO::HazardAvoidanceConfig::COLREGSConfigurationType >& value) {

                    m_colregsConfig_ = value;
                }

                void colregsConfig(::dds::core::optional< ::UMAA::MO::HazardAvoidanceConfig::COLREGSConfigurationType >&& value) {
                    m_colregsConfig_ = std::move(value);
                }
                double& minimumStandoff() noexcept {
                    return m_minimumStandoff_;
                }

                const double& minimumStandoff() const noexcept {
                    return m_minimumStandoff_;
                }

                void minimumStandoff(double value) {

                    m_minimumStandoff_ = value;
                }

                bool operator == (const ContactHazardAvoidanceType& other_) const;
                bool operator != (const ContactHazardAvoidanceType& other_) const;

                void swap(ContactHazardAvoidanceType& other_) noexcept ;

              private:

                ::dds::core::optional< ::UMAA::MO::HazardAvoidanceConfig::COLREGSConfigurationType > m_colregsConfig_;
                double m_minimumStandoff_;

            };

            inline void swap(ContactHazardAvoidanceType& a, ContactHazardAvoidanceType& b)  noexcept 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const ContactHazardAvoidanceType& sample);

        } // namespace HazardAvoidanceConfig  
    } // namespace MO  
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
        struct topic_type_name< ::UMAA::MO::HazardAvoidanceConfig::ContactHazardAvoidanceType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::MO::HazardAvoidanceConfig::ContactHazardAvoidanceType";
            }
        };

        template<>
        struct topic_type_support< ::UMAA::MO::HazardAvoidanceConfig::ContactHazardAvoidanceType > {
            NDDSUSERDllExport 
            static void reset_sample(::UMAA::MO::HazardAvoidanceConfig::ContactHazardAvoidanceType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(::UMAA::MO::HazardAvoidanceConfig::ContactHazardAvoidanceType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };
    }
}

namespace rti { 
    namespace topic {

        template<>
        struct dynamic_type< ::UMAA::MO::HazardAvoidanceConfig::ContactHazardAvoidanceType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };

        template <>
        struct extensibility< ::UMAA::MO::HazardAvoidanceConfig::ContactHazardAvoidanceType > {
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

#endif // ContactHazardAvoidanceType_2011818696_hpp

