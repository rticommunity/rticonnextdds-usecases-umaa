

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from CTDReportType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef CTDReportType_828906307_hpp
#define CTDReportType_828906307_hpp

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
#include "UMAA/Common/Measurement/Measurements.hpp"
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif
namespace UMAA {
    namespace SA {
        namespace CTDStatus {

            static const std::string CTDReport_TOPIC = "UMAA::SA::CTDStatus::CTDReport";

            class NDDSUSERDllExport CTDReportType {
              public:
                CTDReportType();

                CTDReportType(double conductivity,const ::dds::core::optional< double >& density,double depth,const ::dds::core::optional< double >& salinity,const ::dds::core::optional< double >& soundVelocity,double temperature,const UMAA::Common::Measurement::NumericGUID& source,const UMAA::Common::Measurement::DateTime& timeStamp);

                #ifdef RTI_CXX11_RVALUE_REFERENCES
                #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
                CTDReportType (CTDReportType&&) = default;
                CTDReportType& operator=(CTDReportType&&) = default;
                CTDReportType& operator=(const CTDReportType&) = default;
                CTDReportType(const CTDReportType&) = default;
                #else
                CTDReportType(CTDReportType&& other_) OMG_NOEXCEPT;  
                CTDReportType& operator=(CTDReportType&&  other_) OMG_NOEXCEPT;
                #endif
                #endif 

                double& conductivity() OMG_NOEXCEPT {
                    return m_conductivity_;
                }

                const double& conductivity() const OMG_NOEXCEPT {
                    return m_conductivity_;
                }

                void conductivity(double value) {
                    m_conductivity_ = value;
                }

                ::dds::core::optional< double >& density() OMG_NOEXCEPT {
                    return m_density_;
                }

                const ::dds::core::optional< double >& density() const OMG_NOEXCEPT {
                    return m_density_;
                }

                void density(const ::dds::core::optional< double >& value) {
                    m_density_ = value;
                }

                void density(::dds::core::optional< double >&& value) {
                    m_density_ = std::move(value);
                }
                double& depth() OMG_NOEXCEPT {
                    return m_depth_;
                }

                const double& depth() const OMG_NOEXCEPT {
                    return m_depth_;
                }

                void depth(double value) {
                    m_depth_ = value;
                }

                ::dds::core::optional< double >& salinity() OMG_NOEXCEPT {
                    return m_salinity_;
                }

                const ::dds::core::optional< double >& salinity() const OMG_NOEXCEPT {
                    return m_salinity_;
                }

                void salinity(const ::dds::core::optional< double >& value) {
                    m_salinity_ = value;
                }

                void salinity(::dds::core::optional< double >&& value) {
                    m_salinity_ = std::move(value);
                }
                ::dds::core::optional< double >& soundVelocity() OMG_NOEXCEPT {
                    return m_soundVelocity_;
                }

                const ::dds::core::optional< double >& soundVelocity() const OMG_NOEXCEPT {
                    return m_soundVelocity_;
                }

                void soundVelocity(const ::dds::core::optional< double >& value) {
                    m_soundVelocity_ = value;
                }

                void soundVelocity(::dds::core::optional< double >&& value) {
                    m_soundVelocity_ = std::move(value);
                }
                double& temperature() OMG_NOEXCEPT {
                    return m_temperature_;
                }

                const double& temperature() const OMG_NOEXCEPT {
                    return m_temperature_;
                }

                void temperature(double value) {
                    m_temperature_ = value;
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

                bool operator == (const CTDReportType& other_) const;
                bool operator != (const CTDReportType& other_) const;

                void swap(CTDReportType& other_) OMG_NOEXCEPT ;

              private:

                double m_conductivity_;
                ::dds::core::optional< double > m_density_;
                double m_depth_;
                ::dds::core::optional< double > m_salinity_;
                ::dds::core::optional< double > m_soundVelocity_;
                double m_temperature_;
                UMAA::Common::Measurement::NumericGUID m_source_;
                UMAA::Common::Measurement::DateTime m_timeStamp_;

            };

            inline void swap(CTDReportType& a, CTDReportType& b)  OMG_NOEXCEPT 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const CTDReportType& sample);

        } // namespace CTDStatus  
    } // namespace SA  
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
        struct topic_type_name< UMAA::SA::CTDStatus::CTDReportType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::SA::CTDStatus::CTDReportType";
            }
        };

        template<>
        struct is_topic_type< UMAA::SA::CTDStatus::CTDReportType > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< UMAA::SA::CTDStatus::CTDReportType > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const UMAA::SA::CTDStatus::CTDReportType& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(UMAA::SA::CTDStatus::CTDReportType& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(UMAA::SA::CTDStatus::CTDReportType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(UMAA::SA::CTDStatus::CTDReportType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

    }
}

namespace rti { 
    namespace topic {

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< UMAA::SA::CTDStatus::CTDReportType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< UMAA::SA::CTDStatus::CTDReportType > {
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

#endif // CTDReportType_828906307_hpp

