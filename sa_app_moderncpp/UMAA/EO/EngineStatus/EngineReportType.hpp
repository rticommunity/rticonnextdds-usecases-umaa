

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from EngineReportType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef EngineReportType_1925252964_hpp
#define EngineReportType_1925252964_hpp

#include <iosfwd>

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef RTIUSERDllExport
#define RTIUSERDllExport __declspec(dllexport)
#endif

#include "dds/domain/DomainParticipant.hpp"
#include "dds/topic/TopicTraits.hpp"
#include "dds/core/SafeEnumeration.hpp"
#include "dds/core/String.hpp"
#include "dds/core/array.hpp"
#include "dds/core/vector.hpp"
#include "dds/core/Optional.hpp"
#include "dds/core/xtypes/DynamicType.hpp"
#include "dds/core/xtypes/StructType.hpp"
#include "dds/core/xtypes/UnionType.hpp"
#include "dds/core/xtypes/EnumType.hpp"
#include "dds/core/xtypes/AliasType.hpp"
#include "rti/core/array.hpp"
#include "rti/core/BoundedSequence.hpp"
#include "rti/util/StreamFlagSaver.hpp"
#include "rti/domain/PluginSupport.hpp"
#include "rti/core/LongDouble.hpp"
#include "dds/core/External.hpp"
#include "rti/core/Pointer.hpp"
#include "rti/topic/TopicTraits.hpp"

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
#include "UMAA/Common/MaritimeEnumeration/EnumerationSets.hpp"
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

            static const std::string EngineReport_TOPIC = "UMAA::EO::EngineStatus::EngineReport";

            class NDDSUSERDllExport EngineReportType {
              public:
                EngineReportType();

                EngineReportType(double coolantLevel,double coolantPressure,double coolantTemp,double engineTemp,double exhaustTemp,const ::dds::core::optional< bool >& glowPlugIndicator,const ::dds::core::optional< UMAA::Common::Enumeration::OnOffStatusEnumType::OnOffStatusEnumType >& glowPlugState,const ::dds::core::optional< double >& glowPlugTemp,const ::dds::core::optional< double >& glowPlugTimeRemaining,double hours,double manifoldAirTemp,double manifoldPressure,double oilLevel,double oilPressure,double oilTemp,double percentOilPressure,double RPM,const UMAA::Common::MaritimeEnumeration::IgnitionStateEnumType::IgnitionStateEnumType& state,double throttle,const UMAA::Common::Measurement::NumericGUID& source,const UMAA::Common::Measurement::DateTime& timeStamp);

                #ifdef RTI_CXX11_RVALUE_REFERENCES
                #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
                EngineReportType (EngineReportType&&) = default;
                EngineReportType& operator=(EngineReportType&&) = default;
                EngineReportType& operator=(const EngineReportType&) = default;
                EngineReportType(const EngineReportType&) = default;
                #else
                EngineReportType(EngineReportType&& other_) OMG_NOEXCEPT;  
                EngineReportType& operator=(EngineReportType&&  other_) OMG_NOEXCEPT;
                #endif
                #endif 

                double& coolantLevel() OMG_NOEXCEPT {
                    return m_coolantLevel_;
                }

                const double& coolantLevel() const OMG_NOEXCEPT {
                    return m_coolantLevel_;
                }

                void coolantLevel(double value) {
                    m_coolantLevel_ = value;
                }

                double& coolantPressure() OMG_NOEXCEPT {
                    return m_coolantPressure_;
                }

                const double& coolantPressure() const OMG_NOEXCEPT {
                    return m_coolantPressure_;
                }

                void coolantPressure(double value) {
                    m_coolantPressure_ = value;
                }

                double& coolantTemp() OMG_NOEXCEPT {
                    return m_coolantTemp_;
                }

                const double& coolantTemp() const OMG_NOEXCEPT {
                    return m_coolantTemp_;
                }

                void coolantTemp(double value) {
                    m_coolantTemp_ = value;
                }

                double& engineTemp() OMG_NOEXCEPT {
                    return m_engineTemp_;
                }

                const double& engineTemp() const OMG_NOEXCEPT {
                    return m_engineTemp_;
                }

                void engineTemp(double value) {
                    m_engineTemp_ = value;
                }

                double& exhaustTemp() OMG_NOEXCEPT {
                    return m_exhaustTemp_;
                }

                const double& exhaustTemp() const OMG_NOEXCEPT {
                    return m_exhaustTemp_;
                }

                void exhaustTemp(double value) {
                    m_exhaustTemp_ = value;
                }

                ::dds::core::optional< bool >& glowPlugIndicator() OMG_NOEXCEPT {
                    return m_glowPlugIndicator_;
                }

                const ::dds::core::optional< bool >& glowPlugIndicator() const OMG_NOEXCEPT {
                    return m_glowPlugIndicator_;
                }

                void glowPlugIndicator(const ::dds::core::optional< bool >& value) {
                    m_glowPlugIndicator_ = value;
                }

                void glowPlugIndicator(::dds::core::optional< bool >&& value) {
                    m_glowPlugIndicator_ = std::move(value);
                }
                ::dds::core::optional< UMAA::Common::Enumeration::OnOffStatusEnumType::OnOffStatusEnumType >& glowPlugState() OMG_NOEXCEPT {
                    return m_glowPlugState_;
                }

                const ::dds::core::optional< UMAA::Common::Enumeration::OnOffStatusEnumType::OnOffStatusEnumType >& glowPlugState() const OMG_NOEXCEPT {
                    return m_glowPlugState_;
                }

                void glowPlugState(const ::dds::core::optional< UMAA::Common::Enumeration::OnOffStatusEnumType::OnOffStatusEnumType >& value) {
                    m_glowPlugState_ = value;
                }

                void glowPlugState(::dds::core::optional< UMAA::Common::Enumeration::OnOffStatusEnumType::OnOffStatusEnumType >&& value) {
                    m_glowPlugState_ = std::move(value);
                }
                ::dds::core::optional< double >& glowPlugTemp() OMG_NOEXCEPT {
                    return m_glowPlugTemp_;
                }

                const ::dds::core::optional< double >& glowPlugTemp() const OMG_NOEXCEPT {
                    return m_glowPlugTemp_;
                }

                void glowPlugTemp(const ::dds::core::optional< double >& value) {
                    m_glowPlugTemp_ = value;
                }

                void glowPlugTemp(::dds::core::optional< double >&& value) {
                    m_glowPlugTemp_ = std::move(value);
                }
                ::dds::core::optional< double >& glowPlugTimeRemaining() OMG_NOEXCEPT {
                    return m_glowPlugTimeRemaining_;
                }

                const ::dds::core::optional< double >& glowPlugTimeRemaining() const OMG_NOEXCEPT {
                    return m_glowPlugTimeRemaining_;
                }

                void glowPlugTimeRemaining(const ::dds::core::optional< double >& value) {
                    m_glowPlugTimeRemaining_ = value;
                }

                void glowPlugTimeRemaining(::dds::core::optional< double >&& value) {
                    m_glowPlugTimeRemaining_ = std::move(value);
                }
                double& hours() OMG_NOEXCEPT {
                    return m_hours_;
                }

                const double& hours() const OMG_NOEXCEPT {
                    return m_hours_;
                }

                void hours(double value) {
                    m_hours_ = value;
                }

                double& manifoldAirTemp() OMG_NOEXCEPT {
                    return m_manifoldAirTemp_;
                }

                const double& manifoldAirTemp() const OMG_NOEXCEPT {
                    return m_manifoldAirTemp_;
                }

                void manifoldAirTemp(double value) {
                    m_manifoldAirTemp_ = value;
                }

                double& manifoldPressure() OMG_NOEXCEPT {
                    return m_manifoldPressure_;
                }

                const double& manifoldPressure() const OMG_NOEXCEPT {
                    return m_manifoldPressure_;
                }

                void manifoldPressure(double value) {
                    m_manifoldPressure_ = value;
                }

                double& oilLevel() OMG_NOEXCEPT {
                    return m_oilLevel_;
                }

                const double& oilLevel() const OMG_NOEXCEPT {
                    return m_oilLevel_;
                }

                void oilLevel(double value) {
                    m_oilLevel_ = value;
                }

                double& oilPressure() OMG_NOEXCEPT {
                    return m_oilPressure_;
                }

                const double& oilPressure() const OMG_NOEXCEPT {
                    return m_oilPressure_;
                }

                void oilPressure(double value) {
                    m_oilPressure_ = value;
                }

                double& oilTemp() OMG_NOEXCEPT {
                    return m_oilTemp_;
                }

                const double& oilTemp() const OMG_NOEXCEPT {
                    return m_oilTemp_;
                }

                void oilTemp(double value) {
                    m_oilTemp_ = value;
                }

                double& percentOilPressure() OMG_NOEXCEPT {
                    return m_percentOilPressure_;
                }

                const double& percentOilPressure() const OMG_NOEXCEPT {
                    return m_percentOilPressure_;
                }

                void percentOilPressure(double value) {
                    m_percentOilPressure_ = value;
                }

                double& RPM() OMG_NOEXCEPT {
                    return m_RPM_;
                }

                const double& RPM() const OMG_NOEXCEPT {
                    return m_RPM_;
                }

                void RPM(double value) {
                    m_RPM_ = value;
                }

                UMAA::Common::MaritimeEnumeration::IgnitionStateEnumType::IgnitionStateEnumType& state() OMG_NOEXCEPT {
                    return m_state_;
                }

                const UMAA::Common::MaritimeEnumeration::IgnitionStateEnumType::IgnitionStateEnumType& state() const OMG_NOEXCEPT {
                    return m_state_;
                }

                void state(const UMAA::Common::MaritimeEnumeration::IgnitionStateEnumType::IgnitionStateEnumType& value) {
                    m_state_ = value;
                }

                void state(UMAA::Common::MaritimeEnumeration::IgnitionStateEnumType::IgnitionStateEnumType&& value) {
                    m_state_ = std::move(value);
                }
                double& throttle() OMG_NOEXCEPT {
                    return m_throttle_;
                }

                const double& throttle() const OMG_NOEXCEPT {
                    return m_throttle_;
                }

                void throttle(double value) {
                    m_throttle_ = value;
                }

                UMAA::Common::Measurement::NumericGUID& source() OMG_NOEXCEPT {
                    return m_source_;
                }

                const UMAA::Common::Measurement::NumericGUID& source() const OMG_NOEXCEPT {
                    return m_source_;
                }

                void source(const UMAA::Common::Measurement::NumericGUID& value) {
                    m_source_ = value;
                }

                void source(UMAA::Common::Measurement::NumericGUID&& value) {
                    m_source_ = std::move(value);
                }
                UMAA::Common::Measurement::DateTime& timeStamp() OMG_NOEXCEPT {
                    return m_timeStamp_;
                }

                const UMAA::Common::Measurement::DateTime& timeStamp() const OMG_NOEXCEPT {
                    return m_timeStamp_;
                }

                void timeStamp(const UMAA::Common::Measurement::DateTime& value) {
                    m_timeStamp_ = value;
                }

                void timeStamp(UMAA::Common::Measurement::DateTime&& value) {
                    m_timeStamp_ = std::move(value);
                }

                bool operator == (const EngineReportType& other_) const;
                bool operator != (const EngineReportType& other_) const;

                void swap(EngineReportType& other_) OMG_NOEXCEPT ;

              private:

                double m_coolantLevel_;
                double m_coolantPressure_;
                double m_coolantTemp_;
                double m_engineTemp_;
                double m_exhaustTemp_;
                ::dds::core::optional< bool > m_glowPlugIndicator_;
                ::dds::core::optional< UMAA::Common::Enumeration::OnOffStatusEnumType::OnOffStatusEnumType > m_glowPlugState_;
                ::dds::core::optional< double > m_glowPlugTemp_;
                ::dds::core::optional< double > m_glowPlugTimeRemaining_;
                double m_hours_;
                double m_manifoldAirTemp_;
                double m_manifoldPressure_;
                double m_oilLevel_;
                double m_oilPressure_;
                double m_oilTemp_;
                double m_percentOilPressure_;
                double m_RPM_;
                UMAA::Common::MaritimeEnumeration::IgnitionStateEnumType::IgnitionStateEnumType m_state_;
                double m_throttle_;
                UMAA::Common::Measurement::NumericGUID m_source_;
                UMAA::Common::Measurement::DateTime m_timeStamp_;

            };

            inline void swap(EngineReportType& a, EngineReportType& b)  OMG_NOEXCEPT 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const EngineReportType& sample);

        } // namespace EngineStatus  
    } // namespace EO  
} // namespace UMAA  

namespace rti {
    namespace flat {
        namespace topic {
        }
    }
}
namespace dds {
    namespace topic {

        template<>
        struct topic_type_name< UMAA::EO::EngineStatus::EngineReportType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::EO::EngineStatus::EngineReportType";
            }
        };

        template<>
        struct is_topic_type< UMAA::EO::EngineStatus::EngineReportType > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< UMAA::EO::EngineStatus::EngineReportType > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const UMAA::EO::EngineStatus::EngineReportType& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(UMAA::EO::EngineStatus::EngineReportType& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(UMAA::EO::EngineStatus::EngineReportType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(UMAA::EO::EngineStatus::EngineReportType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

    }
}

namespace rti { 
    namespace topic {

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< UMAA::EO::EngineStatus::EngineReportType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< UMAA::EO::EngineStatus::EngineReportType > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;                
        };

    }
}

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif // EngineReportType_1925252964_hpp

