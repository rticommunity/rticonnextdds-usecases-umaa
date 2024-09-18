

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from IlluminatorReportType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef IlluminatorReportType_1791862712_hpp
#define IlluminatorReportType_1791862712_hpp

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
#include "UMAA/Common/MaritimeEnumeration/MaritimeEnumerationSets.hpp"
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
#include "UMAA/Common/PrimitiveConstrained/ConstrainedTypes.hpp"
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
#include "UMAA/SEM/BaseType/RGBType.hpp"
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif
namespace UMAA {
    namespace SEM {
        namespace IlluminatorStatus {

            static const std::string IlluminatorReportTypeTopic = "UMAA::SEM::IlluminatorStatus::IlluminatorReportType";

            class NDDSUSERDllExport IlluminatorReportType {
              public:

                IlluminatorReportType();

                IlluminatorReportType(const ::dds::core::optional< double >& beamWidth_,const ::dds::core::optional< ::UMAA::SEM::BaseType::RGBType >& color_,const ::dds::core::optional< double >& intensity_,const ::UMAA::Common::MaritimeEnumeration::IlluminatorStateEnumModule::IlluminatorStateEnumType& state_,const ::UMAA::Common::Measurement::DateTime& timeStamp_,const ::UMAA::Common::IdentifierType& source_);

                ::dds::core::optional< double >& beamWidth() noexcept {
                    return m_beamWidth_;
                }

                const ::dds::core::optional< double >& beamWidth() const noexcept {
                    return m_beamWidth_;
                }

                void beamWidth(const ::dds::core::optional< double >& value) {

                    m_beamWidth_ = value;
                }

                void beamWidth(::dds::core::optional< double >&& value) {
                    m_beamWidth_ = std::move(value);
                }
                ::dds::core::optional< ::UMAA::SEM::BaseType::RGBType >& color() noexcept {
                    return m_color_;
                }

                const ::dds::core::optional< ::UMAA::SEM::BaseType::RGBType >& color() const noexcept {
                    return m_color_;
                }

                void color(const ::dds::core::optional< ::UMAA::SEM::BaseType::RGBType >& value) {

                    m_color_ = value;
                }

                void color(::dds::core::optional< ::UMAA::SEM::BaseType::RGBType >&& value) {
                    m_color_ = std::move(value);
                }
                ::dds::core::optional< double >& intensity() noexcept {
                    return m_intensity_;
                }

                const ::dds::core::optional< double >& intensity() const noexcept {
                    return m_intensity_;
                }

                void intensity(const ::dds::core::optional< double >& value) {

                    m_intensity_ = value;
                }

                void intensity(::dds::core::optional< double >&& value) {
                    m_intensity_ = std::move(value);
                }
                ::UMAA::Common::MaritimeEnumeration::IlluminatorStateEnumModule::IlluminatorStateEnumType& state() noexcept {
                    return m_state_;
                }

                const ::UMAA::Common::MaritimeEnumeration::IlluminatorStateEnumModule::IlluminatorStateEnumType& state() const noexcept {
                    return m_state_;
                }

                void state(const ::UMAA::Common::MaritimeEnumeration::IlluminatorStateEnumModule::IlluminatorStateEnumType& value) {

                    m_state_ = value;
                }

                void state(::UMAA::Common::MaritimeEnumeration::IlluminatorStateEnumModule::IlluminatorStateEnumType&& value) {
                    m_state_ = std::move(value);
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
                bool operator == (const IlluminatorReportType& other_) const;
                bool operator != (const IlluminatorReportType& other_) const;

                void swap(IlluminatorReportType& other_) noexcept ;

              private:

                ::dds::core::optional< double > m_beamWidth_;
                ::dds::core::optional< ::UMAA::SEM::BaseType::RGBType > m_color_;
                ::dds::core::optional< double > m_intensity_;
                ::UMAA::Common::MaritimeEnumeration::IlluminatorStateEnumModule::IlluminatorStateEnumType m_state_;
                ::UMAA::Common::Measurement::DateTime m_timeStamp_;
                ::UMAA::Common::IdentifierType m_source_;

            };

            inline void swap(IlluminatorReportType& a, IlluminatorReportType& b)  noexcept 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const IlluminatorReportType& sample);

        } // namespace IlluminatorStatus  
    } // namespace SEM  
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
        struct topic_type_name< ::UMAA::SEM::IlluminatorStatus::IlluminatorReportType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::SEM::IlluminatorStatus::IlluminatorReportType";
            }
        };

        template<>
        struct is_topic_type< ::UMAA::SEM::IlluminatorStatus::IlluminatorReportType > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< ::UMAA::SEM::IlluminatorStatus::IlluminatorReportType > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const ::UMAA::SEM::IlluminatorStatus::IlluminatorReportType& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(::UMAA::SEM::IlluminatorStatus::IlluminatorReportType& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(::UMAA::SEM::IlluminatorStatus::IlluminatorReportType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(::UMAA::SEM::IlluminatorStatus::IlluminatorReportType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };
    }
}

namespace rti { 
    namespace topic {

        template<>
        struct dynamic_type< ::UMAA::SEM::IlluminatorStatus::IlluminatorReportType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };

        template <>
        struct extensibility< ::UMAA::SEM::IlluminatorStatus::IlluminatorReportType > {
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

#endif // IlluminatorReportType_1791862712_hpp
