

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from DateTimeRequirementType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef DateTimeRequirementType_899555466_hpp
#define DateTimeRequirementType_899555466_hpp

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
#include "UMAA/Common/Time/DateTimeToleranceType.hpp"
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif
namespace UMAA {
    namespace Common {
        namespace Time {

            class NDDSUSERDllExport DateTimeRequirementType {
              public:

                DateTimeRequirementType();

                DateTimeRequirementType(const ::UMAA::Common::Measurement::DateTime& time_,const ::dds::core::optional< ::UMAA::Common::Time::DateTimeToleranceType >& timeTolerance_);

                ::UMAA::Common::Measurement::DateTime& time() noexcept {
                    return m_time_;
                }

                const ::UMAA::Common::Measurement::DateTime& time() const noexcept {
                    return m_time_;
                }

                void time(const ::UMAA::Common::Measurement::DateTime& value) {

                    m_time_ = value;
                }

                void time(::UMAA::Common::Measurement::DateTime&& value) {
                    m_time_ = std::move(value);
                }
                ::dds::core::optional< ::UMAA::Common::Time::DateTimeToleranceType >& timeTolerance() noexcept {
                    return m_timeTolerance_;
                }

                const ::dds::core::optional< ::UMAA::Common::Time::DateTimeToleranceType >& timeTolerance() const noexcept {
                    return m_timeTolerance_;
                }

                void timeTolerance(const ::dds::core::optional< ::UMAA::Common::Time::DateTimeToleranceType >& value) {

                    m_timeTolerance_ = value;
                }

                void timeTolerance(::dds::core::optional< ::UMAA::Common::Time::DateTimeToleranceType >&& value) {
                    m_timeTolerance_ = std::move(value);
                }
                bool operator == (const DateTimeRequirementType& other_) const;
                bool operator != (const DateTimeRequirementType& other_) const;

                void swap(DateTimeRequirementType& other_) noexcept ;

              private:

                ::UMAA::Common::Measurement::DateTime m_time_;
                ::dds::core::optional< ::UMAA::Common::Time::DateTimeToleranceType > m_timeTolerance_;

            };

            inline void swap(DateTimeRequirementType& a, DateTimeRequirementType& b)  noexcept 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const DateTimeRequirementType& sample);

        } // namespace Time  
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
        struct topic_type_name< ::UMAA::Common::Time::DateTimeRequirementType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::Common::Time::DateTimeRequirementType";
            }
        };

        template<>
        struct topic_type_support< ::UMAA::Common::Time::DateTimeRequirementType > {
            NDDSUSERDllExport 
            static void reset_sample(::UMAA::Common::Time::DateTimeRequirementType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(::UMAA::Common::Time::DateTimeRequirementType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };
    }
}

namespace rti { 
    namespace topic {

        template<>
        struct dynamic_type< ::UMAA::Common::Time::DateTimeRequirementType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };

        template <>
        struct extensibility< ::UMAA::Common::Time::DateTimeRequirementType > {
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

#endif // DateTimeRequirementType_899555466_hpp

