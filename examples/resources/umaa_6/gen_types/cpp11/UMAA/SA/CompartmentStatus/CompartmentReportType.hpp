

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from CompartmentReportType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef CompartmentReportType_936047827_hpp
#define CompartmentReportType_936047827_hpp

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
#include "UMAA/Common/Enumeration/EnumerationSets.hpp"
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
#include "UMAA/Common/IdentifierType.hpp"
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
    namespace SA {
        namespace CompartmentStatus {

            static const std::string CompartmentReportTypeTopic = "UMAA::SA::CompartmentStatus::CompartmentReportType";

            class NDDSUSERDllExport CompartmentReportType {
              public:

                CompartmentReportType();

                CompartmentReportType(const ::dds::core::optional< bool >& floodDetected_,const ::dds::core::optional< double >& humidity_,const ::dds::core::optional< bool >& leakDetected_,const ::dds::core::optional< double >& pressure_,const ::dds::core::optional< double >& temperature_,const ::UMAA::Common::Measurement::DateTime& timeStamp_,const ::UMAA::Common::IdentifierType& source_);

                ::dds::core::optional< bool >& floodDetected() noexcept {
                    return m_floodDetected_;
                }

                const ::dds::core::optional< bool >& floodDetected() const noexcept {
                    return m_floodDetected_;
                }

                void floodDetected(const ::dds::core::optional< bool >& value) {

                    m_floodDetected_ = value;
                }

                void floodDetected(::dds::core::optional< bool >&& value) {
                    m_floodDetected_ = std::move(value);
                }
                ::dds::core::optional< double >& humidity() noexcept {
                    return m_humidity_;
                }

                const ::dds::core::optional< double >& humidity() const noexcept {
                    return m_humidity_;
                }

                void humidity(const ::dds::core::optional< double >& value) {

                    m_humidity_ = value;
                }

                void humidity(::dds::core::optional< double >&& value) {
                    m_humidity_ = std::move(value);
                }
                ::dds::core::optional< bool >& leakDetected() noexcept {
                    return m_leakDetected_;
                }

                const ::dds::core::optional< bool >& leakDetected() const noexcept {
                    return m_leakDetected_;
                }

                void leakDetected(const ::dds::core::optional< bool >& value) {

                    m_leakDetected_ = value;
                }

                void leakDetected(::dds::core::optional< bool >&& value) {
                    m_leakDetected_ = std::move(value);
                }
                ::dds::core::optional< double >& pressure() noexcept {
                    return m_pressure_;
                }

                const ::dds::core::optional< double >& pressure() const noexcept {
                    return m_pressure_;
                }

                void pressure(const ::dds::core::optional< double >& value) {

                    m_pressure_ = value;
                }

                void pressure(::dds::core::optional< double >&& value) {
                    m_pressure_ = std::move(value);
                }
                ::dds::core::optional< double >& temperature() noexcept {
                    return m_temperature_;
                }

                const ::dds::core::optional< double >& temperature() const noexcept {
                    return m_temperature_;
                }

                void temperature(const ::dds::core::optional< double >& value) {

                    m_temperature_ = value;
                }

                void temperature(::dds::core::optional< double >&& value) {
                    m_temperature_ = std::move(value);
                }
                ::UMAA::Common::Measurement::DateTime& timeStamp() noexcept {
                    return m_timeStamp_;
                }

                const ::UMAA::Common::Measurement::DateTime& timeStamp() const noexcept {
                    return m_timeStamp_;
                }

                void timeStamp(const ::UMAA::Common::Measurement::DateTime& value) {

                    m_timeStamp_ = value;
                }

                void timeStamp(::UMAA::Common::Measurement::DateTime&& value) {
                    m_timeStamp_ = std::move(value);
                }
                ::UMAA::Common::IdentifierType& source() noexcept {
                    return m_source_;
                }

                const ::UMAA::Common::IdentifierType& source() const noexcept {
                    return m_source_;
                }

                void source(const ::UMAA::Common::IdentifierType& value) {

                    m_source_ = value;
                }

                void source(::UMAA::Common::IdentifierType&& value) {
                    m_source_ = std::move(value);
                }
                bool operator == (const CompartmentReportType& other_) const;
                bool operator != (const CompartmentReportType& other_) const;

                void swap(CompartmentReportType& other_) noexcept ;

              private:

                ::dds::core::optional< bool > m_floodDetected_;
                ::dds::core::optional< double > m_humidity_;
                ::dds::core::optional< bool > m_leakDetected_;
                ::dds::core::optional< double > m_pressure_;
                ::dds::core::optional< double > m_temperature_;
                ::UMAA::Common::Measurement::DateTime m_timeStamp_;
                ::UMAA::Common::IdentifierType m_source_;

            };

            inline void swap(CompartmentReportType& a, CompartmentReportType& b)  noexcept 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const CompartmentReportType& sample);

        } // namespace CompartmentStatus  
    } // namespace SA  
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
        struct topic_type_name< ::UMAA::SA::CompartmentStatus::CompartmentReportType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::SA::CompartmentStatus::CompartmentReportType";
            }
        };

        template<>
        struct is_topic_type< ::UMAA::SA::CompartmentStatus::CompartmentReportType > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< ::UMAA::SA::CompartmentStatus::CompartmentReportType > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const ::UMAA::SA::CompartmentStatus::CompartmentReportType& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(::UMAA::SA::CompartmentStatus::CompartmentReportType& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(::UMAA::SA::CompartmentStatus::CompartmentReportType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(::UMAA::SA::CompartmentStatus::CompartmentReportType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };
    }
}

namespace rti { 
    namespace topic {

        template<>
        struct dynamic_type< ::UMAA::SA::CompartmentStatus::CompartmentReportType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };

        template <>
        struct extensibility< ::UMAA::SA::CompartmentStatus::CompartmentReportType > {
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

#endif // CompartmentReportType_936047827_hpp

