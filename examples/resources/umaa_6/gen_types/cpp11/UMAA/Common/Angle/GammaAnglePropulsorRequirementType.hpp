

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GammaAnglePropulsorRequirementType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef GammaAnglePropulsorRequirementType_112461371_hpp
#define GammaAnglePropulsorRequirementType_112461371_hpp

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
#include "UMAA/Common/Angle/GammaAnglePropulsorToleranceType.hpp"
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

            class NDDSUSERDllExport GammaAnglePropulsorRequirementType {
              public:

                GammaAnglePropulsorRequirementType();

                GammaAnglePropulsorRequirementType(double gammaAnglePropulsor_,const ::dds::core::optional< ::UMAA::Common::Angle::GammaAnglePropulsorToleranceType >& gammaAnglePropulsorTolerance_);

                double& gammaAnglePropulsor() noexcept {
                    return m_gammaAnglePropulsor_;
                }

                const double& gammaAnglePropulsor() const noexcept {
                    return m_gammaAnglePropulsor_;
                }

                void gammaAnglePropulsor(double value) {

                    m_gammaAnglePropulsor_ = value;
                }

                ::dds::core::optional< ::UMAA::Common::Angle::GammaAnglePropulsorToleranceType >& gammaAnglePropulsorTolerance() noexcept {
                    return m_gammaAnglePropulsorTolerance_;
                }

                const ::dds::core::optional< ::UMAA::Common::Angle::GammaAnglePropulsorToleranceType >& gammaAnglePropulsorTolerance() const noexcept {
                    return m_gammaAnglePropulsorTolerance_;
                }

                void gammaAnglePropulsorTolerance(const ::dds::core::optional< ::UMAA::Common::Angle::GammaAnglePropulsorToleranceType >& value) {

                    m_gammaAnglePropulsorTolerance_ = value;
                }

                void gammaAnglePropulsorTolerance(::dds::core::optional< ::UMAA::Common::Angle::GammaAnglePropulsorToleranceType >&& value) {
                    m_gammaAnglePropulsorTolerance_ = std::move(value);
                }
                bool operator == (const GammaAnglePropulsorRequirementType& other_) const;
                bool operator != (const GammaAnglePropulsorRequirementType& other_) const;

                void swap(GammaAnglePropulsorRequirementType& other_) noexcept ;

              private:

                double m_gammaAnglePropulsor_;
                ::dds::core::optional< ::UMAA::Common::Angle::GammaAnglePropulsorToleranceType > m_gammaAnglePropulsorTolerance_;

            };

            inline void swap(GammaAnglePropulsorRequirementType& a, GammaAnglePropulsorRequirementType& b)  noexcept 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const GammaAnglePropulsorRequirementType& sample);

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
        struct topic_type_name< ::UMAA::Common::Angle::GammaAnglePropulsorRequirementType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::Common::Angle::GammaAnglePropulsorRequirementType";
            }
        };

        template<>
        struct topic_type_support< ::UMAA::Common::Angle::GammaAnglePropulsorRequirementType > {
            NDDSUSERDllExport 
            static void reset_sample(::UMAA::Common::Angle::GammaAnglePropulsorRequirementType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(::UMAA::Common::Angle::GammaAnglePropulsorRequirementType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };
    }
}

namespace rti { 
    namespace topic {

        template<>
        struct dynamic_type< ::UMAA::Common::Angle::GammaAnglePropulsorRequirementType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };

        template <>
        struct extensibility< ::UMAA::Common::Angle::GammaAnglePropulsorRequirementType > {
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

#endif // GammaAnglePropulsorRequirementType_112461371_hpp

