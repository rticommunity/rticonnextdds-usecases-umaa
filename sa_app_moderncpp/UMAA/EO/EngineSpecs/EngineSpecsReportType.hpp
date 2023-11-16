

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from EngineSpecsReportType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef EngineSpecsReportType_166603692_hpp
#define EngineSpecsReportType_166603692_hpp

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
namespace UMAA {
    namespace EO {
        namespace EngineSpecs {

            static const std::string EngineSpecsReport_TOPIC = "UMAA::EO::EngineSpecs::EngineSpecsReport";

            class NDDSUSERDllExport EngineSpecsReportType {
              public:
                EngineSpecsReportType();

                EngineSpecsReportType(const UMAA::Common::MaritimeEnumeration::EngineKindEnumType::EngineKindEnumType& engineKind,const ::dds::core::optional< double >& glowPlugTime,double maxCoolantLevel,double maxCoolantPressure,double maxCoolantTemp,double maxEngineTemp,const ::dds::core::optional< double >& maxGlowPlugTemp,double maxManifoldAirTemp,double maxManifoldPressure,double maxOilPressure,double maxOilTemp,double minCoolantLevel,double minOilLevel,const std::string& name,double oilCapacity,double reverseRPMLowerLimit,double reverseRPMMaxLimit,double reverseRPMUpperLimit,bool reversible,double RPMLowerLimit,double RPMMaxLimit,double RPMUpperLimit,const UMAA::Common::Measurement::NumericGUID& source,const UMAA::Common::Measurement::DateTime& timeStamp);

                #ifdef RTI_CXX11_RVALUE_REFERENCES
                #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
                EngineSpecsReportType (EngineSpecsReportType&&) = default;
                EngineSpecsReportType& operator=(EngineSpecsReportType&&) = default;
                EngineSpecsReportType& operator=(const EngineSpecsReportType&) = default;
                EngineSpecsReportType(const EngineSpecsReportType&) = default;
                #else
                EngineSpecsReportType(EngineSpecsReportType&& other_) OMG_NOEXCEPT;  
                EngineSpecsReportType& operator=(EngineSpecsReportType&&  other_) OMG_NOEXCEPT;
                #endif
                #endif 

                UMAA::Common::MaritimeEnumeration::EngineKindEnumType::EngineKindEnumType& engineKind() OMG_NOEXCEPT {
                    return m_engineKind_;
                }

                const UMAA::Common::MaritimeEnumeration::EngineKindEnumType::EngineKindEnumType& engineKind() const OMG_NOEXCEPT {
                    return m_engineKind_;
                }

                void engineKind(const UMAA::Common::MaritimeEnumeration::EngineKindEnumType::EngineKindEnumType& value) {
                    m_engineKind_ = value;
                }

                void engineKind(UMAA::Common::MaritimeEnumeration::EngineKindEnumType::EngineKindEnumType&& value) {
                    m_engineKind_ = std::move(value);
                }
                ::dds::core::optional< double >& glowPlugTime() OMG_NOEXCEPT {
                    return m_glowPlugTime_;
                }

                const ::dds::core::optional< double >& glowPlugTime() const OMG_NOEXCEPT {
                    return m_glowPlugTime_;
                }

                void glowPlugTime(const ::dds::core::optional< double >& value) {
                    m_glowPlugTime_ = value;
                }

                void glowPlugTime(::dds::core::optional< double >&& value) {
                    m_glowPlugTime_ = std::move(value);
                }
                double& maxCoolantLevel() OMG_NOEXCEPT {
                    return m_maxCoolantLevel_;
                }

                const double& maxCoolantLevel() const OMG_NOEXCEPT {
                    return m_maxCoolantLevel_;
                }

                void maxCoolantLevel(double value) {
                    m_maxCoolantLevel_ = value;
                }

                double& maxCoolantPressure() OMG_NOEXCEPT {
                    return m_maxCoolantPressure_;
                }

                const double& maxCoolantPressure() const OMG_NOEXCEPT {
                    return m_maxCoolantPressure_;
                }

                void maxCoolantPressure(double value) {
                    m_maxCoolantPressure_ = value;
                }

                double& maxCoolantTemp() OMG_NOEXCEPT {
                    return m_maxCoolantTemp_;
                }

                const double& maxCoolantTemp() const OMG_NOEXCEPT {
                    return m_maxCoolantTemp_;
                }

                void maxCoolantTemp(double value) {
                    m_maxCoolantTemp_ = value;
                }

                double& maxEngineTemp() OMG_NOEXCEPT {
                    return m_maxEngineTemp_;
                }

                const double& maxEngineTemp() const OMG_NOEXCEPT {
                    return m_maxEngineTemp_;
                }

                void maxEngineTemp(double value) {
                    m_maxEngineTemp_ = value;
                }

                ::dds::core::optional< double >& maxGlowPlugTemp() OMG_NOEXCEPT {
                    return m_maxGlowPlugTemp_;
                }

                const ::dds::core::optional< double >& maxGlowPlugTemp() const OMG_NOEXCEPT {
                    return m_maxGlowPlugTemp_;
                }

                void maxGlowPlugTemp(const ::dds::core::optional< double >& value) {
                    m_maxGlowPlugTemp_ = value;
                }

                void maxGlowPlugTemp(::dds::core::optional< double >&& value) {
                    m_maxGlowPlugTemp_ = std::move(value);
                }
                double& maxManifoldAirTemp() OMG_NOEXCEPT {
                    return m_maxManifoldAirTemp_;
                }

                const double& maxManifoldAirTemp() const OMG_NOEXCEPT {
                    return m_maxManifoldAirTemp_;
                }

                void maxManifoldAirTemp(double value) {
                    m_maxManifoldAirTemp_ = value;
                }

                double& maxManifoldPressure() OMG_NOEXCEPT {
                    return m_maxManifoldPressure_;
                }

                const double& maxManifoldPressure() const OMG_NOEXCEPT {
                    return m_maxManifoldPressure_;
                }

                void maxManifoldPressure(double value) {
                    m_maxManifoldPressure_ = value;
                }

                double& maxOilPressure() OMG_NOEXCEPT {
                    return m_maxOilPressure_;
                }

                const double& maxOilPressure() const OMG_NOEXCEPT {
                    return m_maxOilPressure_;
                }

                void maxOilPressure(double value) {
                    m_maxOilPressure_ = value;
                }

                double& maxOilTemp() OMG_NOEXCEPT {
                    return m_maxOilTemp_;
                }

                const double& maxOilTemp() const OMG_NOEXCEPT {
                    return m_maxOilTemp_;
                }

                void maxOilTemp(double value) {
                    m_maxOilTemp_ = value;
                }

                double& minCoolantLevel() OMG_NOEXCEPT {
                    return m_minCoolantLevel_;
                }

                const double& minCoolantLevel() const OMG_NOEXCEPT {
                    return m_minCoolantLevel_;
                }

                void minCoolantLevel(double value) {
                    m_minCoolantLevel_ = value;
                }

                double& minOilLevel() OMG_NOEXCEPT {
                    return m_minOilLevel_;
                }

                const double& minOilLevel() const OMG_NOEXCEPT {
                    return m_minOilLevel_;
                }

                void minOilLevel(double value) {
                    m_minOilLevel_ = value;
                }

                std::string& name() OMG_NOEXCEPT {
                    return m_name_;
                }

                const std::string& name() const OMG_NOEXCEPT {
                    return m_name_;
                }

                void name(const std::string& value) {
                    m_name_ = value;
                }

                void name(std::string&& value) {
                    m_name_ = std::move(value);
                }
                double& oilCapacity() OMG_NOEXCEPT {
                    return m_oilCapacity_;
                }

                const double& oilCapacity() const OMG_NOEXCEPT {
                    return m_oilCapacity_;
                }

                void oilCapacity(double value) {
                    m_oilCapacity_ = value;
                }

                double& reverseRPMLowerLimit() OMG_NOEXCEPT {
                    return m_reverseRPMLowerLimit_;
                }

                const double& reverseRPMLowerLimit() const OMG_NOEXCEPT {
                    return m_reverseRPMLowerLimit_;
                }

                void reverseRPMLowerLimit(double value) {
                    m_reverseRPMLowerLimit_ = value;
                }

                double& reverseRPMMaxLimit() OMG_NOEXCEPT {
                    return m_reverseRPMMaxLimit_;
                }

                const double& reverseRPMMaxLimit() const OMG_NOEXCEPT {
                    return m_reverseRPMMaxLimit_;
                }

                void reverseRPMMaxLimit(double value) {
                    m_reverseRPMMaxLimit_ = value;
                }

                double& reverseRPMUpperLimit() OMG_NOEXCEPT {
                    return m_reverseRPMUpperLimit_;
                }

                const double& reverseRPMUpperLimit() const OMG_NOEXCEPT {
                    return m_reverseRPMUpperLimit_;
                }

                void reverseRPMUpperLimit(double value) {
                    m_reverseRPMUpperLimit_ = value;
                }

                bool& reversible() OMG_NOEXCEPT {
                    return m_reversible_;
                }

                const bool& reversible() const OMG_NOEXCEPT {
                    return m_reversible_;
                }

                void reversible(bool value) {
                    m_reversible_ = value;
                }

                double& RPMLowerLimit() OMG_NOEXCEPT {
                    return m_RPMLowerLimit_;
                }

                const double& RPMLowerLimit() const OMG_NOEXCEPT {
                    return m_RPMLowerLimit_;
                }

                void RPMLowerLimit(double value) {
                    m_RPMLowerLimit_ = value;
                }

                double& RPMMaxLimit() OMG_NOEXCEPT {
                    return m_RPMMaxLimit_;
                }

                const double& RPMMaxLimit() const OMG_NOEXCEPT {
                    return m_RPMMaxLimit_;
                }

                void RPMMaxLimit(double value) {
                    m_RPMMaxLimit_ = value;
                }

                double& RPMUpperLimit() OMG_NOEXCEPT {
                    return m_RPMUpperLimit_;
                }

                const double& RPMUpperLimit() const OMG_NOEXCEPT {
                    return m_RPMUpperLimit_;
                }

                void RPMUpperLimit(double value) {
                    m_RPMUpperLimit_ = value;
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

                bool operator == (const EngineSpecsReportType& other_) const;
                bool operator != (const EngineSpecsReportType& other_) const;

                void swap(EngineSpecsReportType& other_) OMG_NOEXCEPT ;

              private:

                UMAA::Common::MaritimeEnumeration::EngineKindEnumType::EngineKindEnumType m_engineKind_;
                ::dds::core::optional< double > m_glowPlugTime_;
                double m_maxCoolantLevel_;
                double m_maxCoolantPressure_;
                double m_maxCoolantTemp_;
                double m_maxEngineTemp_;
                ::dds::core::optional< double > m_maxGlowPlugTemp_;
                double m_maxManifoldAirTemp_;
                double m_maxManifoldPressure_;
                double m_maxOilPressure_;
                double m_maxOilTemp_;
                double m_minCoolantLevel_;
                double m_minOilLevel_;
                std::string m_name_;
                double m_oilCapacity_;
                double m_reverseRPMLowerLimit_;
                double m_reverseRPMMaxLimit_;
                double m_reverseRPMUpperLimit_;
                bool m_reversible_;
                double m_RPMLowerLimit_;
                double m_RPMMaxLimit_;
                double m_RPMUpperLimit_;
                UMAA::Common::Measurement::NumericGUID m_source_;
                UMAA::Common::Measurement::DateTime m_timeStamp_;

            };

            inline void swap(EngineSpecsReportType& a, EngineSpecsReportType& b)  OMG_NOEXCEPT 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const EngineSpecsReportType& sample);

        } // namespace EngineSpecs  
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
        struct topic_type_name< UMAA::EO::EngineSpecs::EngineSpecsReportType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::EO::EngineSpecs::EngineSpecsReportType";
            }
        };

        template<>
        struct is_topic_type< UMAA::EO::EngineSpecs::EngineSpecsReportType > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< UMAA::EO::EngineSpecs::EngineSpecsReportType > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const UMAA::EO::EngineSpecs::EngineSpecsReportType& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(UMAA::EO::EngineSpecs::EngineSpecsReportType& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(UMAA::EO::EngineSpecs::EngineSpecsReportType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(UMAA::EO::EngineSpecs::EngineSpecsReportType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

    }
}

namespace rti { 
    namespace topic {

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< UMAA::EO::EngineSpecs::EngineSpecsReportType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< UMAA::EO::EngineSpecs::EngineSpecsReportType > {
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

#endif // EngineSpecsReportType_166603692_hpp

