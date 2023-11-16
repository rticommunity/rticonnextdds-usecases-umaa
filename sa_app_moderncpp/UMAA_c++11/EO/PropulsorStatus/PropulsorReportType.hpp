

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from PropulsorReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef PropulsorReportType_296258062_hpp
#define PropulsorReportType_296258062_hpp

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
        namespace PropulsorStatus {

            RTI_CONSTEXPR_OR_CONST_STRING std::string PropulsorReport_TOPIC = "UMAA::EO::PropulsorStatus::PropulsorReport";

            class NDDSUSERDllExport PropulsorReportType {
              public:

                PropulsorReportType();

                PropulsorReportType(bool motorFault_,double pitch_,double pitchEffort_,const ::dds::core::optional< double >& propulsiveEffort_,const ::dds::core::optional< double >& RPM_,const ::UMAA::Common::MaritimeEnumeration::PowerPlantStateEnumType::PowerPlantStateEnumType& state_,const ::dds::core::optional< double >& yaw_,const ::dds::core::optional< double >& yawEffort_,const ::UMAA::Common::Measurement::NumericGUID& source_,const ::UMAA::Common::Measurement::DateTime& timeStamp_);

                bool& motorFault() noexcept {
                    return m_motorFault_;
                }

                const bool& motorFault() const noexcept {
                    return m_motorFault_;
                }

                void motorFault(bool value) {

                    m_motorFault_ = value;
                }

                double& pitch() noexcept {
                    return m_pitch_;
                }

                const double& pitch() const noexcept {
                    return m_pitch_;
                }

                void pitch(double value) {

                    m_pitch_ = value;
                }

                double& pitchEffort() noexcept {
                    return m_pitchEffort_;
                }

                const double& pitchEffort() const noexcept {
                    return m_pitchEffort_;
                }

                void pitchEffort(double value) {

                    m_pitchEffort_ = value;
                }

                ::dds::core::optional< double >& propulsiveEffort() noexcept {
                    return m_propulsiveEffort_;
                }

                const ::dds::core::optional< double >& propulsiveEffort() const noexcept {
                    return m_propulsiveEffort_;
                }

                void propulsiveEffort(const ::dds::core::optional< double >& value) {

                    m_propulsiveEffort_ = value;
                }

                void propulsiveEffort(::dds::core::optional< double >&& value) {
                    m_propulsiveEffort_ = std::move(value);
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
                ::UMAA::Common::MaritimeEnumeration::PowerPlantStateEnumType::PowerPlantStateEnumType& state() noexcept {
                    return m_state_;
                }

                const ::UMAA::Common::MaritimeEnumeration::PowerPlantStateEnumType::PowerPlantStateEnumType& state() const noexcept {
                    return m_state_;
                }

                void state(const ::UMAA::Common::MaritimeEnumeration::PowerPlantStateEnumType::PowerPlantStateEnumType& value) {

                    m_state_ = value;
                }

                void state(::UMAA::Common::MaritimeEnumeration::PowerPlantStateEnumType::PowerPlantStateEnumType&& value) {
                    m_state_ = std::move(value);
                }
                ::dds::core::optional< double >& yaw() noexcept {
                    return m_yaw_;
                }

                const ::dds::core::optional< double >& yaw() const noexcept {
                    return m_yaw_;
                }

                void yaw(const ::dds::core::optional< double >& value) {

                    m_yaw_ = value;
                }

                void yaw(::dds::core::optional< double >&& value) {
                    m_yaw_ = std::move(value);
                }
                ::dds::core::optional< double >& yawEffort() noexcept {
                    return m_yawEffort_;
                }

                const ::dds::core::optional< double >& yawEffort() const noexcept {
                    return m_yawEffort_;
                }

                void yawEffort(const ::dds::core::optional< double >& value) {

                    m_yawEffort_ = value;
                }

                void yawEffort(::dds::core::optional< double >&& value) {
                    m_yawEffort_ = std::move(value);
                }
                ::UMAA::Common::Measurement::NumericGUID& source() noexcept {
                    return m_source_;
                }

                const ::UMAA::Common::Measurement::NumericGUID& source() const noexcept {
                    return m_source_;
                }

                void source(const ::UMAA::Common::Measurement::NumericGUID& value) {

                    m_source_ = value;
                }

                void source(::UMAA::Common::Measurement::NumericGUID&& value) {
                    m_source_ = std::move(value);
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
                bool operator == (const PropulsorReportType& other_) const;
                bool operator != (const PropulsorReportType& other_) const;

                void swap(PropulsorReportType& other_) noexcept ;

              private:

                bool m_motorFault_;
                double m_pitch_;
                double m_pitchEffort_;
                ::dds::core::optional< double > m_propulsiveEffort_;
                ::dds::core::optional< double > m_RPM_;
                ::UMAA::Common::MaritimeEnumeration::PowerPlantStateEnumType::PowerPlantStateEnumType m_state_;
                ::dds::core::optional< double > m_yaw_;
                ::dds::core::optional< double > m_yawEffort_;
                ::UMAA::Common::Measurement::NumericGUID m_source_ {};
                ::UMAA::Common::Measurement::DateTime m_timeStamp_;

            };

            inline void swap(PropulsorReportType& a, PropulsorReportType& b)  noexcept 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const PropulsorReportType& sample);

        } // namespace PropulsorStatus  
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
        struct topic_type_name< ::UMAA::EO::PropulsorStatus::PropulsorReportType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::EO::PropulsorStatus::PropulsorReportType";
            }
        };

        template<>
        struct is_topic_type< ::UMAA::EO::PropulsorStatus::PropulsorReportType > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< ::UMAA::EO::PropulsorStatus::PropulsorReportType > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const ::UMAA::EO::PropulsorStatus::PropulsorReportType& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(::UMAA::EO::PropulsorStatus::PropulsorReportType& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(::UMAA::EO::PropulsorStatus::PropulsorReportType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(::UMAA::EO::PropulsorStatus::PropulsorReportType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };
    }
}

namespace rti { 
    namespace topic {

        template<>
        struct dynamic_type< ::UMAA::EO::PropulsorStatus::PropulsorReportType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };

        template <>
        struct extensibility< ::UMAA::EO::PropulsorStatus::PropulsorReportType > {
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

#endif // PropulsorReportType_296258062_hpp

