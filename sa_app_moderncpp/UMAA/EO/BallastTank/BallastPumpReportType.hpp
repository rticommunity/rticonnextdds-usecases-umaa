

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from BallastPumpReportType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef BallastPumpReportType_2086669321_hpp
#define BallastPumpReportType_2086669321_hpp

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
        namespace BallastTank {

            static const std::string BallastPumpReport_TOPIC = "UMAA::EO::BallastTank::BallastPumpReport";

            class NDDSUSERDllExport BallastPumpReportType {
              public:
                BallastPumpReportType();

                BallastPumpReportType(const ::dds::core::optional< double >& massFillRate,const UMAA::Common::MaritimeEnumeration::PumpStateEnumType::PumpStateEnumType& state,const ::dds::core::optional< double >& volumeFlowRate,const UMAA::Common::Measurement::NumericGUID& source,const UMAA::Common::Measurement::DateTime& timeStamp);

                #ifdef RTI_CXX11_RVALUE_REFERENCES
                #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
                BallastPumpReportType (BallastPumpReportType&&) = default;
                BallastPumpReportType& operator=(BallastPumpReportType&&) = default;
                BallastPumpReportType& operator=(const BallastPumpReportType&) = default;
                BallastPumpReportType(const BallastPumpReportType&) = default;
                #else
                BallastPumpReportType(BallastPumpReportType&& other_) OMG_NOEXCEPT;  
                BallastPumpReportType& operator=(BallastPumpReportType&&  other_) OMG_NOEXCEPT;
                #endif
                #endif 

                ::dds::core::optional< double >& massFillRate() OMG_NOEXCEPT {
                    return m_massFillRate_;
                }

                const ::dds::core::optional< double >& massFillRate() const OMG_NOEXCEPT {
                    return m_massFillRate_;
                }

                void massFillRate(const ::dds::core::optional< double >& value) {
                    m_massFillRate_ = value;
                }

                void massFillRate(::dds::core::optional< double >&& value) {
                    m_massFillRate_ = std::move(value);
                }
                UMAA::Common::MaritimeEnumeration::PumpStateEnumType::PumpStateEnumType& state() OMG_NOEXCEPT {
                    return m_state_;
                }

                const UMAA::Common::MaritimeEnumeration::PumpStateEnumType::PumpStateEnumType& state() const OMG_NOEXCEPT {
                    return m_state_;
                }

                void state(const UMAA::Common::MaritimeEnumeration::PumpStateEnumType::PumpStateEnumType& value) {
                    m_state_ = value;
                }

                void state(UMAA::Common::MaritimeEnumeration::PumpStateEnumType::PumpStateEnumType&& value) {
                    m_state_ = std::move(value);
                }
                ::dds::core::optional< double >& volumeFlowRate() OMG_NOEXCEPT {
                    return m_volumeFlowRate_;
                }

                const ::dds::core::optional< double >& volumeFlowRate() const OMG_NOEXCEPT {
                    return m_volumeFlowRate_;
                }

                void volumeFlowRate(const ::dds::core::optional< double >& value) {
                    m_volumeFlowRate_ = value;
                }

                void volumeFlowRate(::dds::core::optional< double >&& value) {
                    m_volumeFlowRate_ = std::move(value);
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

                bool operator == (const BallastPumpReportType& other_) const;
                bool operator != (const BallastPumpReportType& other_) const;

                void swap(BallastPumpReportType& other_) OMG_NOEXCEPT ;

              private:

                ::dds::core::optional< double > m_massFillRate_;
                UMAA::Common::MaritimeEnumeration::PumpStateEnumType::PumpStateEnumType m_state_;
                ::dds::core::optional< double > m_volumeFlowRate_;
                UMAA::Common::Measurement::NumericGUID m_source_;
                UMAA::Common::Measurement::DateTime m_timeStamp_;

            };

            inline void swap(BallastPumpReportType& a, BallastPumpReportType& b)  OMG_NOEXCEPT 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const BallastPumpReportType& sample);

        } // namespace BallastTank  
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
        struct topic_type_name< UMAA::EO::BallastTank::BallastPumpReportType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::EO::BallastTank::BallastPumpReportType";
            }
        };

        template<>
        struct is_topic_type< UMAA::EO::BallastTank::BallastPumpReportType > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< UMAA::EO::BallastTank::BallastPumpReportType > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const UMAA::EO::BallastTank::BallastPumpReportType& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(UMAA::EO::BallastTank::BallastPumpReportType& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(UMAA::EO::BallastTank::BallastPumpReportType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(UMAA::EO::BallastTank::BallastPumpReportType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

    }
}

namespace rti { 
    namespace topic {

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< UMAA::EO::BallastTank::BallastPumpReportType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< UMAA::EO::BallastTank::BallastPumpReportType > {
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

#endif // BallastPumpReportType_2086669321_hpp

