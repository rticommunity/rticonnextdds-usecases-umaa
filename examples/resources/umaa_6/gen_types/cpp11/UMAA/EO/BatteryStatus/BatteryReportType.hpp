

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from BatteryReportType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef BatteryReportType_948757988_hpp
#define BatteryReportType_948757988_hpp

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
#include "UMAA/Common/LargeListMetadata.hpp"
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

            static const std::string BatteryReportTypeTopic = "UMAA::EO::BatteryStatus::BatteryReportType";

            class NDDSUSERDllExport BatteryReportType {
              public:

                BatteryReportType();

                BatteryReportType(const ::dds::core::optional< double >& chargeRemaining_,const ::dds::core::optional< double >& current_,const ::dds::core::optional< double >& energyUsageRate_,const ::dds::core::optional< double >& hours_,const ::UMAA::Common::MaritimeEnumeration::PowerPlantStateEnumModule::PowerPlantStateEnumType& state_,const ::dds::core::optional< double >& temp_,const ::dds::core::optional< double >& voltage_,const ::UMAA::Common::Measurement::DateTime& timeStamp_,const ::UMAA::Common::IdentifierType& source_,const ::UMAA::Common::LargeListMetadata& cellsListMetadata_);

                ::dds::core::optional< double >& chargeRemaining() noexcept {
                    return m_chargeRemaining_;
                }

                const ::dds::core::optional< double >& chargeRemaining() const noexcept {
                    return m_chargeRemaining_;
                }

                void chargeRemaining(const ::dds::core::optional< double >& value) {

                    m_chargeRemaining_ = value;
                }

                void chargeRemaining(::dds::core::optional< double >&& value) {
                    m_chargeRemaining_ = std::move(value);
                }
                ::dds::core::optional< double >& current() noexcept {
                    return m_current_;
                }

                const ::dds::core::optional< double >& current() const noexcept {
                    return m_current_;
                }

                void current(const ::dds::core::optional< double >& value) {

                    m_current_ = value;
                }

                void current(::dds::core::optional< double >&& value) {
                    m_current_ = std::move(value);
                }
                ::dds::core::optional< double >& energyUsageRate() noexcept {
                    return m_energyUsageRate_;
                }

                const ::dds::core::optional< double >& energyUsageRate() const noexcept {
                    return m_energyUsageRate_;
                }

                void energyUsageRate(const ::dds::core::optional< double >& value) {

                    m_energyUsageRate_ = value;
                }

                void energyUsageRate(::dds::core::optional< double >&& value) {
                    m_energyUsageRate_ = std::move(value);
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
                ::UMAA::Common::MaritimeEnumeration::PowerPlantStateEnumModule::PowerPlantStateEnumType& state() noexcept {
                    return m_state_;
                }

                const ::UMAA::Common::MaritimeEnumeration::PowerPlantStateEnumModule::PowerPlantStateEnumType& state() const noexcept {
                    return m_state_;
                }

                void state(const ::UMAA::Common::MaritimeEnumeration::PowerPlantStateEnumModule::PowerPlantStateEnumType& value) {

                    m_state_ = value;
                }

                void state(::UMAA::Common::MaritimeEnumeration::PowerPlantStateEnumModule::PowerPlantStateEnumType&& value) {
                    m_state_ = std::move(value);
                }
                ::dds::core::optional< double >& temp() noexcept {
                    return m_temp_;
                }

                const ::dds::core::optional< double >& temp() const noexcept {
                    return m_temp_;
                }

                void temp(const ::dds::core::optional< double >& value) {

                    m_temp_ = value;
                }

                void temp(::dds::core::optional< double >&& value) {
                    m_temp_ = std::move(value);
                }
                ::dds::core::optional< double >& voltage() noexcept {
                    return m_voltage_;
                }

                const ::dds::core::optional< double >& voltage() const noexcept {
                    return m_voltage_;
                }

                void voltage(const ::dds::core::optional< double >& value) {

                    m_voltage_ = value;
                }

                void voltage(::dds::core::optional< double >&& value) {
                    m_voltage_ = std::move(value);
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
                ::UMAA::Common::LargeListMetadata& cellsListMetadata() noexcept {
                    return m_cellsListMetadata_;
                }

                const ::UMAA::Common::LargeListMetadata& cellsListMetadata() const noexcept {
                    return m_cellsListMetadata_;
                }

                void cellsListMetadata(const ::UMAA::Common::LargeListMetadata& value) {

                    m_cellsListMetadata_ = value;
                }

                void cellsListMetadata(::UMAA::Common::LargeListMetadata&& value) {
                    m_cellsListMetadata_ = std::move(value);
                }
                bool operator == (const BatteryReportType& other_) const;
                bool operator != (const BatteryReportType& other_) const;

                void swap(BatteryReportType& other_) noexcept ;

              private:

                ::dds::core::optional< double > m_chargeRemaining_;
                ::dds::core::optional< double > m_current_;
                ::dds::core::optional< double > m_energyUsageRate_;
                ::dds::core::optional< double > m_hours_;
                ::UMAA::Common::MaritimeEnumeration::PowerPlantStateEnumModule::PowerPlantStateEnumType m_state_;
                ::dds::core::optional< double > m_temp_;
                ::dds::core::optional< double > m_voltage_;
                ::UMAA::Common::Measurement::DateTime m_timeStamp_;
                ::UMAA::Common::IdentifierType m_source_;
                ::UMAA::Common::LargeListMetadata m_cellsListMetadata_;

            };

            inline void swap(BatteryReportType& a, BatteryReportType& b)  noexcept 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const BatteryReportType& sample);

            static const std::string BatteryReportTypeCellsListElementTopic = "UMAA::EO::BatteryStatus::BatteryReportTypeCellsListElement";

            class NDDSUSERDllExport BatteryReportTypeCellsListElement {
              public:

                BatteryReportTypeCellsListElement();

                BatteryReportTypeCellsListElement(const ::UMAA::EO::BatteryStatus::BatteryCellDataType& element_,const ::UMAA::Common::Measurement::NumericGUID& listID_,const ::UMAA::Common::Measurement::NumericGUID& elementID_,const ::UMAA::Common::Measurement::DateTime& elementTimestamp_,const ::dds::core::optional< ::UMAA::Common::Measurement::NumericGUID >& nextElementID_);

                ::UMAA::EO::BatteryStatus::BatteryCellDataType& element() noexcept {
                    return m_element_;
                }

                const ::UMAA::EO::BatteryStatus::BatteryCellDataType& element() const noexcept {
                    return m_element_;
                }

                void element(const ::UMAA::EO::BatteryStatus::BatteryCellDataType& value) {

                    m_element_ = value;
                }

                void element(::UMAA::EO::BatteryStatus::BatteryCellDataType&& value) {
                    m_element_ = std::move(value);
                }
                ::UMAA::Common::Measurement::NumericGUID& listID() noexcept {
                    return m_listID_;
                }

                const ::UMAA::Common::Measurement::NumericGUID& listID() const noexcept {
                    return m_listID_;
                }

                void listID(const ::UMAA::Common::Measurement::NumericGUID& value) {

                    m_listID_ = value;
                }

                void listID(::UMAA::Common::Measurement::NumericGUID&& value) {
                    m_listID_ = std::move(value);
                }
                ::UMAA::Common::Measurement::NumericGUID& elementID() noexcept {
                    return m_elementID_;
                }

                const ::UMAA::Common::Measurement::NumericGUID& elementID() const noexcept {
                    return m_elementID_;
                }

                void elementID(const ::UMAA::Common::Measurement::NumericGUID& value) {

                    m_elementID_ = value;
                }

                void elementID(::UMAA::Common::Measurement::NumericGUID&& value) {
                    m_elementID_ = std::move(value);
                }
                ::UMAA::Common::Measurement::DateTime& elementTimestamp() noexcept {
                    return m_elementTimestamp_;
                }

                const ::UMAA::Common::Measurement::DateTime& elementTimestamp() const noexcept {
                    return m_elementTimestamp_;
                }

                void elementTimestamp(const ::UMAA::Common::Measurement::DateTime& value) {

                    m_elementTimestamp_ = value;
                }

                void elementTimestamp(::UMAA::Common::Measurement::DateTime&& value) {
                    m_elementTimestamp_ = std::move(value);
                }
                ::dds::core::optional< ::UMAA::Common::Measurement::NumericGUID >& nextElementID() noexcept {
                    return m_nextElementID_;
                }

                const ::dds::core::optional< ::UMAA::Common::Measurement::NumericGUID >& nextElementID() const noexcept {
                    return m_nextElementID_;
                }

                void nextElementID(const ::dds::core::optional< ::UMAA::Common::Measurement::NumericGUID >& value) {

                    m_nextElementID_ = value;
                }

                void nextElementID(::dds::core::optional< ::UMAA::Common::Measurement::NumericGUID >&& value) {
                    m_nextElementID_ = std::move(value);
                }
                bool operator == (const BatteryReportTypeCellsListElement& other_) const;
                bool operator != (const BatteryReportTypeCellsListElement& other_) const;

                void swap(BatteryReportTypeCellsListElement& other_) noexcept ;

              private:

                ::UMAA::EO::BatteryStatus::BatteryCellDataType m_element_;
                ::UMAA::Common::Measurement::NumericGUID m_listID_ {};
                ::UMAA::Common::Measurement::NumericGUID m_elementID_ {};
                ::UMAA::Common::Measurement::DateTime m_elementTimestamp_;
                ::dds::core::optional< ::UMAA::Common::Measurement::NumericGUID > m_nextElementID_;

            };

            inline void swap(BatteryReportTypeCellsListElement& a, BatteryReportTypeCellsListElement& b)  noexcept 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const BatteryReportTypeCellsListElement& sample);

        } // namespace BatteryStatus  
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
        struct topic_type_name< ::UMAA::EO::BatteryStatus::BatteryReportType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::EO::BatteryStatus::BatteryReportType";
            }
        };

        template<>
        struct is_topic_type< ::UMAA::EO::BatteryStatus::BatteryReportType > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< ::UMAA::EO::BatteryStatus::BatteryReportType > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const ::UMAA::EO::BatteryStatus::BatteryReportType& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(::UMAA::EO::BatteryStatus::BatteryReportType& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(::UMAA::EO::BatteryStatus::BatteryReportType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(::UMAA::EO::BatteryStatus::BatteryReportType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };
        template<>
        struct topic_type_name< ::UMAA::EO::BatteryStatus::BatteryReportTypeCellsListElement > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::EO::BatteryStatus::BatteryReportTypeCellsListElement";
            }
        };

        template<>
        struct is_topic_type< ::UMAA::EO::BatteryStatus::BatteryReportTypeCellsListElement > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< ::UMAA::EO::BatteryStatus::BatteryReportTypeCellsListElement > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const ::UMAA::EO::BatteryStatus::BatteryReportTypeCellsListElement& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(::UMAA::EO::BatteryStatus::BatteryReportTypeCellsListElement& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(::UMAA::EO::BatteryStatus::BatteryReportTypeCellsListElement& sample);

            NDDSUSERDllExport 
            static void allocate_sample(::UMAA::EO::BatteryStatus::BatteryReportTypeCellsListElement& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };
    }
}

namespace rti { 
    namespace topic {

        template<>
        struct dynamic_type< ::UMAA::EO::BatteryStatus::BatteryReportType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };

        template <>
        struct extensibility< ::UMAA::EO::BatteryStatus::BatteryReportType > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

        template<>
        struct dynamic_type< ::UMAA::EO::BatteryStatus::BatteryReportTypeCellsListElement > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };

        template <>
        struct extensibility< ::UMAA::EO::BatteryStatus::BatteryReportTypeCellsListElement > {
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

#endif // BatteryReportType_948757988_hpp

