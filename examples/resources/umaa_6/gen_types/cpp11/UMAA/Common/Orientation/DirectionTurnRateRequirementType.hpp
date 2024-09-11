

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from DirectionTurnRateRequirementType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef DirectionTurnRateRequirementType_257162247_hpp
#define DirectionTurnRateRequirementType_257162247_hpp

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
#include "UMAA/Common/Orientation/DirectionTurnRateToleranceType.hpp"
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif
namespace UMAA {
    namespace Common {
        namespace Orientation {

            class NDDSUSERDllExport DirectionTurnRateRequirementType {
              public:

                DirectionTurnRateRequirementType();

                DirectionTurnRateRequirementType(double directionRate_,const ::dds::core::optional< ::UMAA::Common::Orientation::DirectionTurnRateToleranceType >& directionRateTolerance_);

                double& directionRate() noexcept {
                    return m_directionRate_;
                }

                const double& directionRate() const noexcept {
                    return m_directionRate_;
                }

                void directionRate(double value) {

                    m_directionRate_ = value;
                }

                ::dds::core::optional< ::UMAA::Common::Orientation::DirectionTurnRateToleranceType >& directionRateTolerance() noexcept {
                    return m_directionRateTolerance_;
                }

                const ::dds::core::optional< ::UMAA::Common::Orientation::DirectionTurnRateToleranceType >& directionRateTolerance() const noexcept {
                    return m_directionRateTolerance_;
                }

                void directionRateTolerance(const ::dds::core::optional< ::UMAA::Common::Orientation::DirectionTurnRateToleranceType >& value) {

                    m_directionRateTolerance_ = value;
                }

                void directionRateTolerance(::dds::core::optional< ::UMAA::Common::Orientation::DirectionTurnRateToleranceType >&& value) {
                    m_directionRateTolerance_ = std::move(value);
                }
                bool operator == (const DirectionTurnRateRequirementType& other_) const;
                bool operator != (const DirectionTurnRateRequirementType& other_) const;

                void swap(DirectionTurnRateRequirementType& other_) noexcept ;

              private:

                double m_directionRate_;
                ::dds::core::optional< ::UMAA::Common::Orientation::DirectionTurnRateToleranceType > m_directionRateTolerance_;

            };

            inline void swap(DirectionTurnRateRequirementType& a, DirectionTurnRateRequirementType& b)  noexcept 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const DirectionTurnRateRequirementType& sample);

        } // namespace Orientation  
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
        struct topic_type_name< ::UMAA::Common::Orientation::DirectionTurnRateRequirementType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::Common::Orientation::DirectionTurnRateRequirementType";
            }
        };

        template<>
        struct topic_type_support< ::UMAA::Common::Orientation::DirectionTurnRateRequirementType > {
            NDDSUSERDllExport 
            static void reset_sample(::UMAA::Common::Orientation::DirectionTurnRateRequirementType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(::UMAA::Common::Orientation::DirectionTurnRateRequirementType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };
    }
}

namespace rti { 
    namespace topic {

        template<>
        struct dynamic_type< ::UMAA::Common::Orientation::DirectionTurnRateRequirementType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };

        template <>
        struct extensibility< ::UMAA::Common::Orientation::DirectionTurnRateRequirementType > {
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

#endif // DirectionTurnRateRequirementType_257162247_hpp

