

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from TimeWithSpeedVariantType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef TimeWithSpeedVariantType_1103087829_hpp
#define TimeWithSpeedVariantType_1103087829_hpp

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
#include "UMAA/Common/Speed/SpeedVariantType.hpp"
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif
namespace UMAA {
    namespace Common {
        namespace Speed {

            class NDDSUSERDllExport TimeWithSpeedVariantType {
              public:

                TimeWithSpeedVariantType();

                TimeWithSpeedVariantType(const ::UMAA::Common::Measurement::DateTime& arrivalTime_,const ::dds::core::optional< ::UMAA::Common::Speed::SpeedVariantType >& speed_);

                ::UMAA::Common::Measurement::DateTime& arrivalTime() noexcept {
                    return m_arrivalTime_;
                }

                const ::UMAA::Common::Measurement::DateTime& arrivalTime() const noexcept {
                    return m_arrivalTime_;
                }

                void arrivalTime(const ::UMAA::Common::Measurement::DateTime& value) {

                    m_arrivalTime_ = value;
                }

                void arrivalTime(::UMAA::Common::Measurement::DateTime&& value) {
                    m_arrivalTime_ = std::move(value);
                }
                ::dds::core::optional< ::UMAA::Common::Speed::SpeedVariantType >& speed() noexcept {
                    return m_speed_;
                }

                const ::dds::core::optional< ::UMAA::Common::Speed::SpeedVariantType >& speed() const noexcept {
                    return m_speed_;
                }

                void speed(const ::dds::core::optional< ::UMAA::Common::Speed::SpeedVariantType >& value) {

                    m_speed_ = value;
                }

                void speed(::dds::core::optional< ::UMAA::Common::Speed::SpeedVariantType >&& value) {
                    m_speed_ = std::move(value);
                }
                bool operator == (const TimeWithSpeedVariantType& other_) const;
                bool operator != (const TimeWithSpeedVariantType& other_) const;

                void swap(TimeWithSpeedVariantType& other_) noexcept ;

              private:

                ::UMAA::Common::Measurement::DateTime m_arrivalTime_;
                ::dds::core::optional< ::UMAA::Common::Speed::SpeedVariantType > m_speed_;

            };

            inline void swap(TimeWithSpeedVariantType& a, TimeWithSpeedVariantType& b)  noexcept 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const TimeWithSpeedVariantType& sample);

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
        struct topic_type_name< ::UMAA::Common::Speed::TimeWithSpeedVariantType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::Common::Speed::TimeWithSpeedVariantType";
            }
        };

        template<>
        struct topic_type_support< ::UMAA::Common::Speed::TimeWithSpeedVariantType > {
            NDDSUSERDllExport 
            static void reset_sample(::UMAA::Common::Speed::TimeWithSpeedVariantType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(::UMAA::Common::Speed::TimeWithSpeedVariantType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };
    }
}

namespace rti { 
    namespace topic {

        template<>
        struct dynamic_type< ::UMAA::Common::Speed::TimeWithSpeedVariantType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };

        template <>
        struct extensibility< ::UMAA::Common::Speed::TimeWithSpeedVariantType > {
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

#endif // TimeWithSpeedVariantType_1103087829_hpp
