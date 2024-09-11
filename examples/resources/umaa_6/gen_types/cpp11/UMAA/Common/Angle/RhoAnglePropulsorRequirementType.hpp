

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from RhoAnglePropulsorRequirementType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef RhoAnglePropulsorRequirementType_1683919157_hpp
#define RhoAnglePropulsorRequirementType_1683919157_hpp

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
#include "UMAA/Common/Angle/RhoAnglePropulsorToleranceType.hpp"
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
    namespace Common {
        namespace Angle {

            class NDDSUSERDllExport RhoAnglePropulsorRequirementType {
              public:

                RhoAnglePropulsorRequirementType();

                RhoAnglePropulsorRequirementType(double rhoAnglePropulsor_,const ::dds::core::optional< ::UMAA::Common::Angle::RhoAnglePropulsorToleranceType >& rhoAnglePropulsorTolerance_);

                double& rhoAnglePropulsor() noexcept {
                    return m_rhoAnglePropulsor_;
                }

                const double& rhoAnglePropulsor() const noexcept {
                    return m_rhoAnglePropulsor_;
                }

                void rhoAnglePropulsor(double value) {

                    m_rhoAnglePropulsor_ = value;
                }

                ::dds::core::optional< ::UMAA::Common::Angle::RhoAnglePropulsorToleranceType >& rhoAnglePropulsorTolerance() noexcept {
                    return m_rhoAnglePropulsorTolerance_;
                }

                const ::dds::core::optional< ::UMAA::Common::Angle::RhoAnglePropulsorToleranceType >& rhoAnglePropulsorTolerance() const noexcept {
                    return m_rhoAnglePropulsorTolerance_;
                }

                void rhoAnglePropulsorTolerance(const ::dds::core::optional< ::UMAA::Common::Angle::RhoAnglePropulsorToleranceType >& value) {

                    m_rhoAnglePropulsorTolerance_ = value;
                }

                void rhoAnglePropulsorTolerance(::dds::core::optional< ::UMAA::Common::Angle::RhoAnglePropulsorToleranceType >&& value) {
                    m_rhoAnglePropulsorTolerance_ = std::move(value);
                }
                bool operator == (const RhoAnglePropulsorRequirementType& other_) const;
                bool operator != (const RhoAnglePropulsorRequirementType& other_) const;

                void swap(RhoAnglePropulsorRequirementType& other_) noexcept ;

              private:

                double m_rhoAnglePropulsor_;
                ::dds::core::optional< ::UMAA::Common::Angle::RhoAnglePropulsorToleranceType > m_rhoAnglePropulsorTolerance_;

            };

            inline void swap(RhoAnglePropulsorRequirementType& a, RhoAnglePropulsorRequirementType& b)  noexcept 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const RhoAnglePropulsorRequirementType& sample);

        } // namespace Angle  
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
        struct topic_type_name< ::UMAA::Common::Angle::RhoAnglePropulsorRequirementType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::Common::Angle::RhoAnglePropulsorRequirementType";
            }
        };

        template<>
        struct topic_type_support< ::UMAA::Common::Angle::RhoAnglePropulsorRequirementType > {
            NDDSUSERDllExport 
            static void reset_sample(::UMAA::Common::Angle::RhoAnglePropulsorRequirementType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(::UMAA::Common::Angle::RhoAnglePropulsorRequirementType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };
    }
}

namespace rti { 
    namespace topic {

        template<>
        struct dynamic_type< ::UMAA::Common::Angle::RhoAnglePropulsorRequirementType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };

        template <>
        struct extensibility< ::UMAA::Common::Angle::RhoAnglePropulsorRequirementType > {
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

#endif // RhoAnglePropulsorRequirementType_1683919157_hpp

