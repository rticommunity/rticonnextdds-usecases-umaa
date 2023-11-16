

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from DateTime_Tolerance.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef DateTime_Tolerance_391452469_hpp
#define DateTime_Tolerance_391452469_hpp

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
    namespace Common {
        namespace Measurement {

            class NDDSUSERDllExport DateTime_Tolerance {
              public:

                DateTime_Tolerance();

                DateTime_Tolerance(const ::UMAA::Common::Measurement::DateTime& lowerLimit_,const ::UMAA::Common::Measurement::DateTime& stepSize_,const ::UMAA::Common::Measurement::DateTime& upperLimit_);

                ::UMAA::Common::Measurement::DateTime& lowerLimit() noexcept {
                    return m_lowerLimit_;
                }

                const ::UMAA::Common::Measurement::DateTime& lowerLimit() const noexcept {
                    return m_lowerLimit_;
                }

                void lowerLimit(const ::UMAA::Common::Measurement::DateTime& value) {

                    m_lowerLimit_ = value;
                }

                void lowerLimit(::UMAA::Common::Measurement::DateTime&& value) {
                    m_lowerLimit_ = std::move(value);
                }
                ::UMAA::Common::Measurement::DateTime& stepSize() noexcept {
                    return m_stepSize_;
                }

                const ::UMAA::Common::Measurement::DateTime& stepSize() const noexcept {
                    return m_stepSize_;
                }

                void stepSize(const ::UMAA::Common::Measurement::DateTime& value) {

                    m_stepSize_ = value;
                }

                void stepSize(::UMAA::Common::Measurement::DateTime&& value) {
                    m_stepSize_ = std::move(value);
                }
                ::UMAA::Common::Measurement::DateTime& upperLimit() noexcept {
                    return m_upperLimit_;
                }

                const ::UMAA::Common::Measurement::DateTime& upperLimit() const noexcept {
                    return m_upperLimit_;
                }

                void upperLimit(const ::UMAA::Common::Measurement::DateTime& value) {

                    m_upperLimit_ = value;
                }

                void upperLimit(::UMAA::Common::Measurement::DateTime&& value) {
                    m_upperLimit_ = std::move(value);
                }
                bool operator == (const DateTime_Tolerance& other_) const;
                bool operator != (const DateTime_Tolerance& other_) const;

                void swap(DateTime_Tolerance& other_) noexcept ;

              private:

                ::UMAA::Common::Measurement::DateTime m_lowerLimit_;
                ::UMAA::Common::Measurement::DateTime m_stepSize_;
                ::UMAA::Common::Measurement::DateTime m_upperLimit_;

            };

            inline void swap(DateTime_Tolerance& a, DateTime_Tolerance& b)  noexcept 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const DateTime_Tolerance& sample);

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
        struct topic_type_name< ::UMAA::Common::Measurement::DateTime_Tolerance > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::Common::Measurement::DateTime_Tolerance";
            }
        };

        template<>
        struct is_topic_type< ::UMAA::Common::Measurement::DateTime_Tolerance > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< ::UMAA::Common::Measurement::DateTime_Tolerance > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const ::UMAA::Common::Measurement::DateTime_Tolerance& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(::UMAA::Common::Measurement::DateTime_Tolerance& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(::UMAA::Common::Measurement::DateTime_Tolerance& sample);

            NDDSUSERDllExport 
            static void allocate_sample(::UMAA::Common::Measurement::DateTime_Tolerance& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };
    }
}

namespace rti { 
    namespace topic {

        template<>
        struct dynamic_type< ::UMAA::Common::Measurement::DateTime_Tolerance > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };

        template <>
        struct extensibility< ::UMAA::Common::Measurement::DateTime_Tolerance > {
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

#endif // DateTime_Tolerance_391452469_hpp

