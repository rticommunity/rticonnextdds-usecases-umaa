

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from AltitudeRateASFRequirementType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef AltitudeRateASFRequirementType_753825578_hpp
#define AltitudeRateASFRequirementType_753825578_hpp

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
#include "UMAA/Common/Measurement/AltitudeRateASFToleranceType.hpp"
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
        namespace Measurement {

            class NDDSUSERDllExport AltitudeRateASFRequirementType {
              public:

                AltitudeRateASFRequirementType();

                AltitudeRateASFRequirementType(double altitudeRate_,const ::dds::core::optional< ::UMAA::Common::Measurement::AltitudeRateASFToleranceType >& altitudeRateTolerance_);

                double& altitudeRate() noexcept {
                    return m_altitudeRate_;
                }

                const double& altitudeRate() const noexcept {
                    return m_altitudeRate_;
                }

                void altitudeRate(double value) {

                    m_altitudeRate_ = value;
                }

                ::dds::core::optional< ::UMAA::Common::Measurement::AltitudeRateASFToleranceType >& altitudeRateTolerance() noexcept {
                    return m_altitudeRateTolerance_;
                }

                const ::dds::core::optional< ::UMAA::Common::Measurement::AltitudeRateASFToleranceType >& altitudeRateTolerance() const noexcept {
                    return m_altitudeRateTolerance_;
                }

                void altitudeRateTolerance(const ::dds::core::optional< ::UMAA::Common::Measurement::AltitudeRateASFToleranceType >& value) {

                    m_altitudeRateTolerance_ = value;
                }

                void altitudeRateTolerance(::dds::core::optional< ::UMAA::Common::Measurement::AltitudeRateASFToleranceType >&& value) {
                    m_altitudeRateTolerance_ = std::move(value);
                }
                bool operator == (const AltitudeRateASFRequirementType& other_) const;
                bool operator != (const AltitudeRateASFRequirementType& other_) const;

                void swap(AltitudeRateASFRequirementType& other_) noexcept ;

              private:

                double m_altitudeRate_;
                ::dds::core::optional< ::UMAA::Common::Measurement::AltitudeRateASFToleranceType > m_altitudeRateTolerance_;

            };

            inline void swap(AltitudeRateASFRequirementType& a, AltitudeRateASFRequirementType& b)  noexcept 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const AltitudeRateASFRequirementType& sample);

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
        struct topic_type_name< ::UMAA::Common::Measurement::AltitudeRateASFRequirementType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::Common::Measurement::AltitudeRateASFRequirementType";
            }
        };

        template<>
        struct topic_type_support< ::UMAA::Common::Measurement::AltitudeRateASFRequirementType > {
            NDDSUSERDllExport 
            static void reset_sample(::UMAA::Common::Measurement::AltitudeRateASFRequirementType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(::UMAA::Common::Measurement::AltitudeRateASFRequirementType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };
    }
}

namespace rti { 
    namespace topic {

        template<>
        struct dynamic_type< ::UMAA::Common::Measurement::AltitudeRateASFRequirementType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };

        template <>
        struct extensibility< ::UMAA::Common::Measurement::AltitudeRateASFRequirementType > {
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

#endif // AltitudeRateASFRequirementType_753825578_hpp

