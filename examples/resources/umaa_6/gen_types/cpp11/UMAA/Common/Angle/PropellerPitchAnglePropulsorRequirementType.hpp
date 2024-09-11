

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from PropellerPitchAnglePropulsorRequirementType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef PropellerPitchAnglePropulsorRequirementType_1047684150_hpp
#define PropellerPitchAnglePropulsorRequirementType_1047684150_hpp

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
#include "UMAA/Common/Angle/PropellerPitchAnglePropulsorToleranceType.hpp"
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

            class NDDSUSERDllExport PropellerPitchAnglePropulsorRequirementType {
              public:

                PropellerPitchAnglePropulsorRequirementType();

                PropellerPitchAnglePropulsorRequirementType(double propellerPitchAnglePropulsor_,const ::dds::core::optional< ::UMAA::Common::Angle::PropellerPitchAnglePropulsorToleranceType >& propellerPitchAnglePropulsorTolerance_);

                double& propellerPitchAnglePropulsor() noexcept {
                    return m_propellerPitchAnglePropulsor_;
                }

                const double& propellerPitchAnglePropulsor() const noexcept {
                    return m_propellerPitchAnglePropulsor_;
                }

                void propellerPitchAnglePropulsor(double value) {

                    m_propellerPitchAnglePropulsor_ = value;
                }

                ::dds::core::optional< ::UMAA::Common::Angle::PropellerPitchAnglePropulsorToleranceType >& propellerPitchAnglePropulsorTolerance() noexcept {
                    return m_propellerPitchAnglePropulsorTolerance_;
                }

                const ::dds::core::optional< ::UMAA::Common::Angle::PropellerPitchAnglePropulsorToleranceType >& propellerPitchAnglePropulsorTolerance() const noexcept {
                    return m_propellerPitchAnglePropulsorTolerance_;
                }

                void propellerPitchAnglePropulsorTolerance(const ::dds::core::optional< ::UMAA::Common::Angle::PropellerPitchAnglePropulsorToleranceType >& value) {

                    m_propellerPitchAnglePropulsorTolerance_ = value;
                }

                void propellerPitchAnglePropulsorTolerance(::dds::core::optional< ::UMAA::Common::Angle::PropellerPitchAnglePropulsorToleranceType >&& value) {
                    m_propellerPitchAnglePropulsorTolerance_ = std::move(value);
                }
                bool operator == (const PropellerPitchAnglePropulsorRequirementType& other_) const;
                bool operator != (const PropellerPitchAnglePropulsorRequirementType& other_) const;

                void swap(PropellerPitchAnglePropulsorRequirementType& other_) noexcept ;

              private:

                double m_propellerPitchAnglePropulsor_;
                ::dds::core::optional< ::UMAA::Common::Angle::PropellerPitchAnglePropulsorToleranceType > m_propellerPitchAnglePropulsorTolerance_;

            };

            inline void swap(PropellerPitchAnglePropulsorRequirementType& a, PropellerPitchAnglePropulsorRequirementType& b)  noexcept 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const PropellerPitchAnglePropulsorRequirementType& sample);

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
        struct topic_type_name< ::UMAA::Common::Angle::PropellerPitchAnglePropulsorRequirementType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::Common::Angle::PropellerPitchAnglePropulsorRequirementType";
            }
        };

        template<>
        struct topic_type_support< ::UMAA::Common::Angle::PropellerPitchAnglePropulsorRequirementType > {
            NDDSUSERDllExport 
            static void reset_sample(::UMAA::Common::Angle::PropellerPitchAnglePropulsorRequirementType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(::UMAA::Common::Angle::PropellerPitchAnglePropulsorRequirementType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };
    }
}

namespace rti { 
    namespace topic {

        template<>
        struct dynamic_type< ::UMAA::Common::Angle::PropellerPitchAnglePropulsorRequirementType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };

        template <>
        struct extensibility< ::UMAA::Common::Angle::PropellerPitchAnglePropulsorRequirementType > {
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

#endif // PropellerPitchAnglePropulsorRequirementType_1047684150_hpp

