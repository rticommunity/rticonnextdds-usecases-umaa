

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from BatteryReportType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef BatteryReportType_948756410_hpp
#define BatteryReportType_948756410_hpp

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
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
#include "UMAA/EO/BatteryStatus/BatteryCellDataType.hpp"
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif
namespace UMAA {
    namespace EO {
        namespace BatteryStatus {

            static const std::string BatteryReport_TOPIC = "UMAA::EO::BatteryStatus::BatteryReport";

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            // On Windows, dll-export template instantiations of standard types used by
            // other dll-exported types
            template class NDDSUSERDllExport std::allocator< UMAA::EO::BatteryStatus::BatteryCellDataType >;
            template class NDDSUSERDllExport std::vector< UMAA::EO::BatteryStatus::BatteryCellDataType >;
            #endif
            class NDDSUSERDllExport BatteryReportType {
              public:
                BatteryReportType();

                BatteryReportType(const ::rti::core::bounded_sequence< UMAA::EO::BatteryStatus::BatteryCellDataType, 100L >& cells,double chargeRemaining,double current,double energyUsageRate,double hours,const UMAA::Common::MaritimeEnumeration::PowerPlantStateEnumType::PowerPlantStateEnumType& state,double temp,double voltage,const UMAA::Common::Measurement::NumericGUID& source,const UMAA::Common::Measurement::DateTime& timeStamp);

                #ifdef RTI_CXX11_RVALUE_REFERENCES
                #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
                BatteryReportType (BatteryReportType&&) = default;
                BatteryReportType& operator=(BatteryReportType&&) = default;
                BatteryReportType& operator=(const BatteryReportType&) = default;
                BatteryReportType(const BatteryReportType&) = default;
                #else
                BatteryReportType(BatteryReportType&& other_) OMG_NOEXCEPT;  
                BatteryReportType& operator=(BatteryReportType&&  other_) OMG_NOEXCEPT;
                #endif
                #endif 

                ::rti::core::bounded_sequence< UMAA::EO::BatteryStatus::BatteryCellDataType, 100L >& cells() OMG_NOEXCEPT {
                    return m_cells_;
                }

                const ::rti::core::bounded_sequence< UMAA::EO::BatteryStatus::BatteryCellDataType, 100L >& cells() const OMG_NOEXCEPT {
                    return m_cells_;
                }

                void cells(const ::rti::core::bounded_sequence< UMAA::EO::BatteryStatus::BatteryCellDataType, 100L >& value) {
                    m_cells_ = value;
                }

                void cells(::rti::core::bounded_sequence< UMAA::EO::BatteryStatus::BatteryCellDataType, 100L >&& value) {
                    m_cells_ = std::move(value);
                }
                double& chargeRemaining() OMG_NOEXCEPT {
                    return m_chargeRemaining_;
                }

                const double& chargeRemaining() const OMG_NOEXCEPT {
                    return m_chargeRemaining_;
                }

                void chargeRemaining(double value) {
                    m_chargeRemaining_ = value;
                }

                double& current() OMG_NOEXCEPT {
                    return m_current_;
                }

                const double& current() const OMG_NOEXCEPT {
                    return m_current_;
                }

                void current(double value) {
                    m_current_ = value;
                }

                double& energyUsageRate() OMG_NOEXCEPT {
                    return m_energyUsageRate_;
                }

                const double& energyUsageRate() const OMG_NOEXCEPT {
                    return m_energyUsageRate_;
                }

                void energyUsageRate(double value) {
                    m_energyUsageRate_ = value;
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

                UMAA::Common::MaritimeEnumeration::PowerPlantStateEnumType::PowerPlantStateEnumType& state() OMG_NOEXCEPT {
                    return m_state_;
                }

                const UMAA::Common::MaritimeEnumeration::PowerPlantStateEnumType::PowerPlantStateEnumType& state() const OMG_NOEXCEPT {
                    return m_state_;
                }

                void state(const UMAA::Common::MaritimeEnumeration::PowerPlantStateEnumType::PowerPlantStateEnumType& value) {
                    m_state_ = value;
                }

                void state(UMAA::Common::MaritimeEnumeration::PowerPlantStateEnumType::PowerPlantStateEnumType&& value) {
                    m_state_ = std::move(value);
                }
                double& temp() OMG_NOEXCEPT {
                    return m_temp_;
                }

                const double& temp() const OMG_NOEXCEPT {
                    return m_temp_;
                }

                void temp(double value) {
                    m_temp_ = value;
                }

                double& voltage() OMG_NOEXCEPT {
                    return m_voltage_;
                }

                const double& voltage() const OMG_NOEXCEPT {
                    return m_voltage_;
                }

                void voltage(double value) {
                    m_voltage_ = value;
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

                bool operator == (const BatteryReportType& other_) const;
                bool operator != (const BatteryReportType& other_) const;

                void swap(BatteryReportType& other_) OMG_NOEXCEPT ;

              private:

                ::rti::core::bounded_sequence< UMAA::EO::BatteryStatus::BatteryCellDataType, 100L > m_cells_;
                double m_chargeRemaining_;
                double m_current_;
                double m_energyUsageRate_;
                double m_hours_;
                UMAA::Common::MaritimeEnumeration::PowerPlantStateEnumType::PowerPlantStateEnumType m_state_;
                double m_temp_;
                double m_voltage_;
                UMAA::Common::Measurement::NumericGUID m_source_;
                UMAA::Common::Measurement::DateTime m_timeStamp_;

            };

            inline void swap(BatteryReportType& a, BatteryReportType& b)  OMG_NOEXCEPT 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const BatteryReportType& sample);

        } // namespace BatteryStatus  
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
        struct topic_type_name< UMAA::EO::BatteryStatus::BatteryReportType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::EO::BatteryStatus::BatteryReportType";
            }
        };

        template<>
        struct is_topic_type< UMAA::EO::BatteryStatus::BatteryReportType > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< UMAA::EO::BatteryStatus::BatteryReportType > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const UMAA::EO::BatteryStatus::BatteryReportType& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(UMAA::EO::BatteryStatus::BatteryReportType& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(UMAA::EO::BatteryStatus::BatteryReportType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(UMAA::EO::BatteryStatus::BatteryReportType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

    }
}

namespace rti { 
    namespace topic {

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< UMAA::EO::BatteryStatus::BatteryReportType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< UMAA::EO::BatteryStatus::BatteryReportType > {
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

#endif // BatteryReportType_948756410_hpp

