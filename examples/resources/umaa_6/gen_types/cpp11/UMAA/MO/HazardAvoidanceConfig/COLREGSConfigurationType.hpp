

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from COLREGSConfigurationType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef COLREGSConfigurationType_215724618_hpp
#define COLREGSConfigurationType_215724618_hpp

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
    namespace MO {
        namespace HazardAvoidanceConfig {

            class NDDSUSERDllExport COLREGSConfigurationType {
              public:

                COLREGSConfigurationType();

                COLREGSConfigurationType(double dangerRange_,double doubtRange_,double influenceRange_);

                double& dangerRange() noexcept {
                    return m_dangerRange_;
                }

                const double& dangerRange() const noexcept {
                    return m_dangerRange_;
                }

                void dangerRange(double value) {

                    m_dangerRange_ = value;
                }

                double& doubtRange() noexcept {
                    return m_doubtRange_;
                }

                const double& doubtRange() const noexcept {
                    return m_doubtRange_;
                }

                void doubtRange(double value) {

                    m_doubtRange_ = value;
                }

                double& influenceRange() noexcept {
                    return m_influenceRange_;
                }

                const double& influenceRange() const noexcept {
                    return m_influenceRange_;
                }

                void influenceRange(double value) {

                    m_influenceRange_ = value;
                }

                bool operator == (const COLREGSConfigurationType& other_) const;
                bool operator != (const COLREGSConfigurationType& other_) const;

                void swap(COLREGSConfigurationType& other_) noexcept ;

              private:

                double m_dangerRange_;
                double m_doubtRange_;
                double m_influenceRange_;

            };

            inline void swap(COLREGSConfigurationType& a, COLREGSConfigurationType& b)  noexcept 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const COLREGSConfigurationType& sample);

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
        struct topic_type_name< ::UMAA::MO::HazardAvoidanceConfig::COLREGSConfigurationType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::MO::HazardAvoidanceConfig::COLREGSConfigurationType";
            }
        };

        template<>
        struct topic_type_support< ::UMAA::MO::HazardAvoidanceConfig::COLREGSConfigurationType > {
            NDDSUSERDllExport 
            static void reset_sample(::UMAA::MO::HazardAvoidanceConfig::COLREGSConfigurationType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(::UMAA::MO::HazardAvoidanceConfig::COLREGSConfigurationType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };
    }
}

namespace rti { 
    namespace topic {

        template<>
        struct dynamic_type< ::UMAA::MO::HazardAvoidanceConfig::COLREGSConfigurationType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };

        template <>
        struct extensibility< ::UMAA::MO::HazardAvoidanceConfig::COLREGSConfigurationType > {
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

#endif // COLREGSConfigurationType_215724618_hpp

