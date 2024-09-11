

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from EngineReportType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef EngineReportType_1925253443_hpp
#define EngineReportType_1925253443_hpp

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
namespace UMAA {
    namespace EO {
        namespace EngineStatus {

            static const std::string EngineReportTypeTopic = "UMAA::EO::EngineStatus::EngineReportType";

            class NDDSUSERDllExport EngineReportType {
              public:

                EngineReportType();

                EngineReportType(const ::dds::core::optional< double >& coolantLevel_,const ::dds::core::optional< double >& coolantPressure_,const ::dds::core::optional< double >& coolantTemp_,const ::dds::core::optional< double >& engineTemp_,const ::dds::core::optional< double >& exhaustTemp_,const ::dds::core::optional< bool >& glowPlugIndicator_,const ::dds::core::optional< ::UMAA::Common::Enumeration::OnOffStatusEnumModule::OnOffStatusEnumType >& glowPlugState_,const ::dds::core::optional< double >& glowPlugTemp_,const ::dds::core::optional< double >& glowPlugTimeRemaining_,const ::dds::core::optional< double >& hours_,const ::dds::core::optional< double >& manifoldAirTemp_,const ::dds::core::optional< double >& manifoldPressure_,const ::dds::core::optional< double >& oilLevel_,const ::dds::core::optional< double >& oilPressure_,const ::dds::core::optional< double >& oilTemp_,const ::dds::core::optional< double >& percentOilPressure_,const ::dds::core::optional< double >& RPM_,const ::UMAA::Common::MaritimeEnumeration::IgnitionStateEnumModule::IgnitionStateEnumType& state_,const ::dds::core::optional< double >& throttle_,const ::UMAA::Common::Measurement::DateTime& timeStamp_,const ::UMAA::Common::IdentifierType& source_);

                ::dds::core::optional< double >& coolantLevel() noexcept {
                    return m_coolantLevel_;
                }

                const ::dds::core::optional< double >& coolantLevel() const noexcept {
                    return m_coolantLevel_;
                }

                void coolantLevel(const ::dds::core::optional< double >& value) {

                    m_coolantLevel_ = value;
                }

                void coolantLevel(::dds::core::optional< double >&& value) {
                    m_coolantLevel_ = std::move(value);
                }
                ::dds::core::optional< double >& coolantPressure() noexcept {
                    return m_coolantPressure_;
                }

                const ::dds::core::optional< double >& coolantPressure() const noexcept {
                    return m_coolantPressure_;
                }

                void coolantPressure(const ::dds::core::optional< double >& value) {

                    m_coolantPressure_ = value;
                }

                void coolantPressure(::dds::core::optional< double >&& value) {
                    m_coolantPressure_ = std::move(value);
                }
                ::dds::core::optional< double >& coolantTemp() noexcept {
                    return m_coolantTemp_;
                }

                const ::dds::core::optional< double >& coolantTemp() const noexcept {
                    return m_coolantTemp_;
                }

                void coolantTemp(const ::dds::core::optional< double >& value) {

                    m_coolantTemp_ = value;
                }

                void coolantTemp(::dds::core::optional< double >&& value) {
                    m_coolantTemp_ = std::move(value);
                }
                ::dds::core::optional< double >& engineTemp() noexcept {
                    return m_engineTemp_;
                }

                const ::dds::core::optional< double >& engineTemp() const noexcept {
                    return m_engineTemp_;
                }

                void engineTemp(const ::dds::core::optional< double >& value) {

                    m_engineTemp_ = value;
                }

                void engineTemp(::dds::core::optional< double >&& value) {
                    m_engineTemp_ = std::move(value);
                }
                ::dds::core::optional< double >& exhaustTemp() noexcept {
                    return m_exhaustTemp_;
                }

                const ::dds::core::optional< double >& exhaustTemp() const noexcept {
                    return m_exhaustTemp_;
                }

                void exhaustTemp(const ::dds::core::optional< double >& value) {

                    m_exhaustTemp_ = value;
                }

                void exhaustTemp(::dds::core::optional< double >&& value) {
                    m_exhaustTemp_ = std::move(value);
                }
                ::dds::core::optional< bool >& glowPlugIndicator() noexcept {
                    return m_glowPlugIndicator_;
                }

                const ::dds::core::optional< bool >& glowPlugIndicator() const noexcept {
                    return m_glowPlugIndicator_;
                }

                void glowPlugIndicator(const ::dds::core::optional< bool >& value) {

                    m_glowPlugIndicator_ = value;
                }

                void glowPlugIndicator(::dds::core::optional< bool >&& value) {
                    m_glowPlugIndicator_ = std::move(value);
                }
                ::dds::core::optional< ::UMAA::Common::Enumeration::OnOffStatusEnumModule::OnOffStatusEnumType >& glowPlugState() noexcept {
                    return m_glowPlugState_;
                }

                const ::dds::core::optional< ::UMAA::Common::Enumeration::OnOffStatusEnumModule::OnOffStatusEnumType >& glowPlugState() const noexcept {
                    return m_glowPlugState_;
                }

                void glowPlugState(const ::dds::core::optional< ::UMAA::Common::Enumeration::OnOffStatusEnumModule::OnOffStatusEnumType >& value) {

                    m_glowPlugState_ = value;
                }

                void glowPlugState(::dds::core::optional< ::UMAA::Common::Enumeration::OnOffStatusEnumModule::OnOffStatusEnumType >&& value) {
                    m_glowPlugState_ = std::move(value);
                }
                ::dds::core::optional< double >& glowPlugTemp() noexcept {
                    return m_glowPlugTemp_;
                }

                const ::dds::core::optional< double >& glowPlugTemp() const noexcept {
                    return m_glowPlugTemp_;
                }

                void glowPlugTemp(const ::dds::core::optional< double >& value) {

                    m_glowPlugTemp_ = value;
                }

                void glowPlugTemp(::dds::core::optional< double >&& value) {
                    m_glowPlugTemp_ = std::move(value);
                }
                ::dds::core::optional< double >& glowPlugTimeRemaining() noexcept {
                    return m_glowPlugTimeRemaining_;
                }

                const ::dds::core::optional< double >& glowPlugTimeRemaining() const noexcept {
                    return m_glowPlugTimeRemaining_;
                }

                void glowPlugTimeRemaining(const ::dds::core::optional< double >& value) {

                    m_glowPlugTimeRemaining_ = value;
                }

                void glowPlugTimeRemaining(::dds::core::optional< double >&& value) {
                    m_glowPlugTimeRemaining_ = std::move(value);
                }
                ::dds::core::optional< double >& hours() noexcept {
                    return m_hours_;
                }

                const ::dds::core::optional< double >& hours() const noexcept {
                    return m_hours_;
                }

                void hours(const ::dds::core::optional< double >& value) {

                    m_hours_ = value;
                }

                void hours(::dds::core::optional< double >&& value) {
                    m_hours_ = std::move(value);
                }
                ::dds::core::optional< double >& manifoldAirTemp() noexcept {
                    return m_manifoldAirTemp_;
                }

                const ::dds::core::optional< double >& manifoldAirTemp() const noexcept {
                    return m_manifoldAirTemp_;
                }

                void manifoldAirTemp(const ::dds::core::optional< double >& value) {

                    m_manifoldAirTemp_ = value;
                }

                void manifoldAirTemp(::dds::core::optional< double >&& value) {
                    m_manifoldAirTemp_ = std::move(value);
                }
                ::dds::core::optional< double >& manifoldPressure() noexcept {
                    return m_manifoldPressure_;
                }

                const ::dds::core::optional< double >& manifoldPressure() const noexcept {
                    return m_manifoldPressure_;
                }

                void manifoldPressure(const ::dds::core::optional< double >& value) {

                    m_manifoldPressure_ = value;
                }

                void manifoldPressure(::dds::core::optional< double >&& value) {
                    m_manifoldPressure_ = std::move(value);
                }
                ::dds::core::optional< double >& oilLevel() noexcept {
                    return m_oilLevel_;
                }

                const ::dds::core::optional< double >& oilLevel() const noexcept {
                    return m_oilLevel_;
                }

                void oilLevel(const ::dds::core::optional< double >& value) {

                    m_oilLevel_ = value;
                }

                void oilLevel(::dds::core::optional< double >&& value) {
                    m_oilLevel_ = std::move(value);
                }
                ::dds::core::optional< double >& oilPressure() noexcept {
                    return m_oilPressure_;
                }

                const ::dds::core::optional< double >& oilPressure() const noexcept {
                    return m_oilPressure_;
                }

                void oilPressure(const ::dds::core::optional< double >& value) {

                    m_oilPressure_ = value;
                }

                void oilPressure(::dds::core::optional< double >&& value) {
                    m_oilPressure_ = std::move(value);
                }
                ::dds::core::optional< double >& oilTemp() noexcept {
                    return m_oilTemp_;
                }

                const ::dds::core::optional< double >& oilTemp() const noexcept {
                    return m_oilTemp_;
                }

                void oilTemp(const ::dds::core::optional< double >& value) {

                    m_oilTemp_ = value;
                }

                void oilTemp(::dds::core::optional< double >&& value) {
                    m_oilTemp_ = std::move(value);
                }
                ::dds::core::optional< double >& percentOilPressure() noexcept {
                    return m_percentOilPressure_;
                }

                const ::dds::core::optional< double >& percentOilPressure() const noexcept {
                    return m_percentOilPressure_;
                }

                void percentOilPressure(const ::dds::core::optional< double >& value) {

                    m_percentOilPressure_ = value;
                }

                void percentOilPressure(::dds::core::optional< double >&& value) {
                    m_percentOilPressure_ = std::move(value);
                }
                ::dds::core::optional< double >& RPM() noexcept {
                    return m_RPM_;
                }

                const ::dds::core::optional< double >& RPM() const noexcept {
                    return m_RPM_;
                }

                void RPM(const ::dds::core::optional< double >& value) {

                    m_RPM_ = value;
                }

                void RPM(::dds::core::optional< double >&& value) {
                    m_RPM_ = std::move(value);
                }
                ::UMAA::Common::MaritimeEnumeration::IgnitionStateEnumModule::IgnitionStateEnumType& state() noexcept {
                    return m_state_;
                }

                const ::UMAA::Common::MaritimeEnumeration::IgnitionStateEnumModule::IgnitionStateEnumType& state() const noexcept {
                    return m_state_;
                }

                void state(const ::UMAA::Common::MaritimeEnumeration::IgnitionStateEnumModule::IgnitionStateEnumType& value) {

                    m_state_ = value;
                }

                void state(::UMAA::Common::MaritimeEnumeration::IgnitionStateEnumModule::IgnitionStateEnumType&& value) {
                    m_state_ = std::move(value);
                }
                ::dds::core::optional< double >& throttle() noexcept {
                    return m_throttle_;
                }

                const ::dds::core::optional< double >& throttle() const noexcept {
                    return m_throttle_;
                }

                void throttle(const ::dds::core::optional< double >& value) {

                    m_throttle_ = value;
                }

                void throttle(::dds::core::optional< double >&& value) {
                    m_throttle_ = std::move(value);
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
                bool operator == (const EngineReportType& other_) const;
                bool operator != (const EngineReportType& other_) const;

                void swap(EngineReportType& other_) noexcept ;

              private:

                ::dds::core::optional< double > m_coolantLevel_;
                ::dds::core::optional< double > m_coolantPressure_;
                ::dds::core::optional< double > m_coolantTemp_;
                ::dds::core::optional< double > m_engineTemp_;
                ::dds::core::optional< double > m_exhaustTemp_;
                ::dds::core::optional< bool > m_glowPlugIndicator_;
                ::dds::core::optional< ::UMAA::Common::Enumeration::OnOffStatusEnumModule::OnOffStatusEnumType > m_glowPlugState_;
                ::dds::core::optional< double > m_glowPlugTemp_;
                ::dds::core::optional< double > m_glowPlugTimeRemaining_;
                ::dds::core::optional< double > m_hours_;
                ::dds::core::optional< double > m_manifoldAirTemp_;
                ::dds::core::optional< double > m_manifoldPressure_;
                ::dds::core::optional< double > m_oilLevel_;
                ::dds::core::optional< double > m_oilPressure_;
                ::dds::core::optional< double > m_oilTemp_;
                ::dds::core::optional< double > m_percentOilPressure_;
                ::dds::core::optional< double > m_RPM_;
                ::UMAA::Common::MaritimeEnumeration::IgnitionStateEnumModule::IgnitionStateEnumType m_state_;
                ::dds::core::optional< double > m_throttle_;
                ::UMAA::Common::Measurement::DateTime m_timeStamp_;
                ::UMAA::Common::IdentifierType m_source_;

            };

            inline void swap(EngineReportType& a, EngineReportType& b)  noexcept 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const EngineReportType& sample);

        } // namespace EngineStatus  
    } // namespace EO  
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
        struct topic_type_name< ::UMAA::EO::EngineStatus::EngineReportType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::EO::EngineStatus::EngineReportType";
            }
        };

        template<>
        struct is_topic_type< ::UMAA::EO::EngineStatus::EngineReportType > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< ::UMAA::EO::EngineStatus::EngineReportType > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const ::UMAA::EO::EngineStatus::EngineReportType& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(::UMAA::EO::EngineStatus::EngineReportType& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(::UMAA::EO::EngineStatus::EngineReportType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(::UMAA::EO::EngineStatus::EngineReportType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };
    }
}

namespace rti { 
    namespace topic {

        template<>
        struct dynamic_type< ::UMAA::EO::EngineStatus::EngineReportType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };

        template <>
        struct extensibility< ::UMAA::EO::EngineStatus::EngineReportType > {
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

#endif // EngineReportType_1925253443_hpp

