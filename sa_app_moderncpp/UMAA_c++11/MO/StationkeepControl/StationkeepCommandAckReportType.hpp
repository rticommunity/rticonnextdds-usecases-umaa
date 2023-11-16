

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from StationkeepCommandAckReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef StationkeepCommandAckReportType_179902339_hpp
#define StationkeepCommandAckReportType_179902339_hpp

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
#include "UMAA/Common/VariableSpeedControl/VariableSpeedControlType.hpp"
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif
namespace UMAA {
    namespace MO {
        namespace StationkeepControl {

            RTI_CONSTEXPR_OR_CONST_STRING std::string StationkeepCommandAckReport_TOPIC = "UMAA::MO::StationkeepControl::StationkeepCommandAckReport";

            class NDDSUSERDllExport StationkeepCommandAckReportType {
              public:

                StationkeepCommandAckReportType();

                StationkeepCommandAckReportType(const ::UMAA::Common::MaritimeEnumeration::BearingAngleEnumType::BearingAngleEnumType& angleType_,double bearing_,double bearingTolerance_,double closingSpeed_,const ::UMAA::Common::Measurement::NumericGUID& contactTrackID_,const ::dds::core::optional< ::UMAA::Common::Measurement::DateTime >& endTime_,double range_,double rangeTolerance_,const ::UMAA::Common::VariableSpeedControl::VariableSpeedControlType& transitSpeed_,double transitSpeedTolerance_,const ::UMAA::Common::Measurement::NumericGUID& source_,const ::UMAA::Common::Measurement::NumericGUID& sessionID_);

                ::UMAA::Common::MaritimeEnumeration::BearingAngleEnumType::BearingAngleEnumType& angleType() noexcept {
                    return m_angleType_;
                }

                const ::UMAA::Common::MaritimeEnumeration::BearingAngleEnumType::BearingAngleEnumType& angleType() const noexcept {
                    return m_angleType_;
                }

                void angleType(const ::UMAA::Common::MaritimeEnumeration::BearingAngleEnumType::BearingAngleEnumType& value) {

                    m_angleType_ = value;
                }

                void angleType(::UMAA::Common::MaritimeEnumeration::BearingAngleEnumType::BearingAngleEnumType&& value) {
                    m_angleType_ = std::move(value);
                }
                double& bearing() noexcept {
                    return m_bearing_;
                }

                const double& bearing() const noexcept {
                    return m_bearing_;
                }

                void bearing(double value) {

                    m_bearing_ = value;
                }

                double& bearingTolerance() noexcept {
                    return m_bearingTolerance_;
                }

                const double& bearingTolerance() const noexcept {
                    return m_bearingTolerance_;
                }

                void bearingTolerance(double value) {

                    m_bearingTolerance_ = value;
                }

                double& closingSpeed() noexcept {
                    return m_closingSpeed_;
                }

                const double& closingSpeed() const noexcept {
                    return m_closingSpeed_;
                }

                void closingSpeed(double value) {

                    m_closingSpeed_ = value;
                }

                ::UMAA::Common::Measurement::NumericGUID& contactTrackID() noexcept {
                    return m_contactTrackID_;
                }

                const ::UMAA::Common::Measurement::NumericGUID& contactTrackID() const noexcept {
                    return m_contactTrackID_;
                }

                void contactTrackID(const ::UMAA::Common::Measurement::NumericGUID& value) {

                    m_contactTrackID_ = value;
                }

                void contactTrackID(::UMAA::Common::Measurement::NumericGUID&& value) {
                    m_contactTrackID_ = std::move(value);
                }
                ::dds::core::optional< ::UMAA::Common::Measurement::DateTime >& endTime() noexcept {
                    return m_endTime_;
                }

                const ::dds::core::optional< ::UMAA::Common::Measurement::DateTime >& endTime() const noexcept {
                    return m_endTime_;
                }

                void endTime(const ::dds::core::optional< ::UMAA::Common::Measurement::DateTime >& value) {

                    m_endTime_ = value;
                }

                void endTime(::dds::core::optional< ::UMAA::Common::Measurement::DateTime >&& value) {
                    m_endTime_ = std::move(value);
                }
                double& range() noexcept {
                    return m_range_;
                }

                const double& range() const noexcept {
                    return m_range_;
                }

                void range(double value) {

                    m_range_ = value;
                }

                double& rangeTolerance() noexcept {
                    return m_rangeTolerance_;
                }

                const double& rangeTolerance() const noexcept {
                    return m_rangeTolerance_;
                }

                void rangeTolerance(double value) {

                    m_rangeTolerance_ = value;
                }

                ::UMAA::Common::VariableSpeedControl::VariableSpeedControlType& transitSpeed() noexcept {
                    return m_transitSpeed_;
                }

                const ::UMAA::Common::VariableSpeedControl::VariableSpeedControlType& transitSpeed() const noexcept {
                    return m_transitSpeed_;
                }

                void transitSpeed(const ::UMAA::Common::VariableSpeedControl::VariableSpeedControlType& value) {

                    m_transitSpeed_ = value;
                }

                void transitSpeed(::UMAA::Common::VariableSpeedControl::VariableSpeedControlType&& value) {
                    m_transitSpeed_ = std::move(value);
                }
                double& transitSpeedTolerance() noexcept {
                    return m_transitSpeedTolerance_;
                }

                const double& transitSpeedTolerance() const noexcept {
                    return m_transitSpeedTolerance_;
                }

                void transitSpeedTolerance(double value) {

                    m_transitSpeedTolerance_ = value;
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
                ::UMAA::Common::Measurement::NumericGUID& sessionID() noexcept {
                    return m_sessionID_;
                }

                const ::UMAA::Common::Measurement::NumericGUID& sessionID() const noexcept {
                    return m_sessionID_;
                }

                void sessionID(const ::UMAA::Common::Measurement::NumericGUID& value) {

                    m_sessionID_ = value;
                }

                void sessionID(::UMAA::Common::Measurement::NumericGUID&& value) {
                    m_sessionID_ = std::move(value);
                }
                bool operator == (const StationkeepCommandAckReportType& other_) const;
                bool operator != (const StationkeepCommandAckReportType& other_) const;

                void swap(StationkeepCommandAckReportType& other_) noexcept ;

              private:

                ::UMAA::Common::MaritimeEnumeration::BearingAngleEnumType::BearingAngleEnumType m_angleType_;
                double m_bearing_;
                double m_bearingTolerance_;
                double m_closingSpeed_;
                ::UMAA::Common::Measurement::NumericGUID m_contactTrackID_ {};
                ::dds::core::optional< ::UMAA::Common::Measurement::DateTime > m_endTime_;
                double m_range_;
                double m_rangeTolerance_;
                ::UMAA::Common::VariableSpeedControl::VariableSpeedControlType m_transitSpeed_;
                double m_transitSpeedTolerance_;
                ::UMAA::Common::Measurement::NumericGUID m_source_ {};
                ::UMAA::Common::Measurement::NumericGUID m_sessionID_ {};

            };

            inline void swap(StationkeepCommandAckReportType& a, StationkeepCommandAckReportType& b)  noexcept 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const StationkeepCommandAckReportType& sample);

        } // namespace StationkeepControl  
    } // namespace MO  
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
        struct topic_type_name< ::UMAA::MO::StationkeepControl::StationkeepCommandAckReportType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::MO::StationkeepControl::StationkeepCommandAckReportType";
            }
        };

        template<>
        struct is_topic_type< ::UMAA::MO::StationkeepControl::StationkeepCommandAckReportType > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< ::UMAA::MO::StationkeepControl::StationkeepCommandAckReportType > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const ::UMAA::MO::StationkeepControl::StationkeepCommandAckReportType& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(::UMAA::MO::StationkeepControl::StationkeepCommandAckReportType& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(::UMAA::MO::StationkeepControl::StationkeepCommandAckReportType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(::UMAA::MO::StationkeepControl::StationkeepCommandAckReportType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };
    }
}

namespace rti { 
    namespace topic {

        template<>
        struct dynamic_type< ::UMAA::MO::StationkeepControl::StationkeepCommandAckReportType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };

        template <>
        struct extensibility< ::UMAA::MO::StationkeepControl::StationkeepCommandAckReportType > {
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

#endif // StationkeepCommandAckReportType_179902339_hpp

