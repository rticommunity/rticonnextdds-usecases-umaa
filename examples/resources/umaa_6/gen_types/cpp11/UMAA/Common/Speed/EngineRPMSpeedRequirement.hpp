

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from EngineRPMSpeedRequirement.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef EngineRPMSpeedRequirement_1225966072_hpp
#define EngineRPMSpeedRequirement_1225966072_hpp

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
#include "UMAA/Common/Speed/EngineRPMSpeedTolerance.hpp"
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif
namespace UMAA {
    namespace Common {
        namespace Speed {

            class NDDSUSERDllExport EngineRPMSpeedRequirement {
              public:

                EngineRPMSpeedRequirement();

                EngineRPMSpeedRequirement(int32_t speed_,const ::dds::core::optional< ::UMAA::Common::Speed::EngineRPMSpeedTolerance >& speedTolerance_);

                int32_t& speed() noexcept {
                    return m_speed_;
                }

                const int32_t& speed() const noexcept {
                    return m_speed_;
                }

                void speed(int32_t value) {

                    m_speed_ = value;
                }

                ::dds::core::optional< ::UMAA::Common::Speed::EngineRPMSpeedTolerance >& speedTolerance() noexcept {
                    return m_speedTolerance_;
                }

                const ::dds::core::optional< ::UMAA::Common::Speed::EngineRPMSpeedTolerance >& speedTolerance() const noexcept {
                    return m_speedTolerance_;
                }

                void speedTolerance(const ::dds::core::optional< ::UMAA::Common::Speed::EngineRPMSpeedTolerance >& value) {

                    m_speedTolerance_ = value;
                }

                void speedTolerance(::dds::core::optional< ::UMAA::Common::Speed::EngineRPMSpeedTolerance >&& value) {
                    m_speedTolerance_ = std::move(value);
                }
                bool operator == (const EngineRPMSpeedRequirement& other_) const;
                bool operator != (const EngineRPMSpeedRequirement& other_) const;

                void swap(EngineRPMSpeedRequirement& other_) noexcept ;

              private:

                int32_t m_speed_;
                ::dds::core::optional< ::UMAA::Common::Speed::EngineRPMSpeedTolerance > m_speedTolerance_;

            };

            inline void swap(EngineRPMSpeedRequirement& a, EngineRPMSpeedRequirement& b)  noexcept 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const EngineRPMSpeedRequirement& sample);

        } // namespace Speed  
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
        struct topic_type_name< ::UMAA::Common::Speed::EngineRPMSpeedRequirement > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::Common::Speed::EngineRPMSpeedRequirement";
            }
        };

        template<>
        struct topic_type_support< ::UMAA::Common::Speed::EngineRPMSpeedRequirement > {
            NDDSUSERDllExport 
            static void reset_sample(::UMAA::Common::Speed::EngineRPMSpeedRequirement& sample);

            NDDSUSERDllExport 
            static void allocate_sample(::UMAA::Common::Speed::EngineRPMSpeedRequirement& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };
    }
}

namespace rti { 
    namespace topic {

        template<>
        struct dynamic_type< ::UMAA::Common::Speed::EngineRPMSpeedRequirement > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };

        template <>
        struct extensibility< ::UMAA::Common::Speed::EngineRPMSpeedRequirement > {
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

#endif // EngineRPMSpeedRequirement_1225966072_hpp

