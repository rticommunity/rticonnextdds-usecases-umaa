

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GlobalWaypointExecutionStatusReportType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef GlobalWaypointExecutionStatusReportType_607922644_hpp
#define GlobalWaypointExecutionStatusReportType_607922644_hpp

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
#include "UMAA/Common/Measurement/Measurements.hpp"
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif
namespace UMAA {
    namespace MO {
        namespace GlobalWaypointControl {

            static const std::string GlobalWaypointExecutionStatusReportTypeTopic = "UMAA::MO::GlobalWaypointControl::GlobalWaypointExecutionStatusReportType";

            class NDDSUSERDllExport GlobalWaypointExecutionStatusReportType {
              public:

                GlobalWaypointExecutionStatusReportType();

                GlobalWaypointExecutionStatusReportType(const ::UMAA::Common::Measurement::DateTime& arrivalTime_,const ::dds::core::optional< bool >& attitudeAchieved_,const ::dds::core::optional< double >& crossTrackError_,double cumulativeDistance_,double distanceRemaining_,double distanceToWaypoint_,bool elevationAchieved_,bool positionAchieved_,bool speedAchieved_,const ::UMAA::Common::Measurement::DateTime& timeToWaypoint_,bool trackLineAchieved_,const ::UMAA::Common::Measurement::NumericGUID& waypointID_,int32_t waypointsRemaining_,const ::UMAA::Common::Measurement::DateTime& timeStamp_,const ::UMAA::Common::IdentifierType& source_,const ::UMAA::Common::Measurement::NumericGUID& sessionID_);

                ::UMAA::Common::Measurement::DateTime& arrivalTime() noexcept {
                    return m_arrivalTime_;
                }

                const ::UMAA::Common::Measurement::DateTime& arrivalTime() const noexcept {
                    return m_arrivalTime_;
                }

                void arrivalTime(const ::UMAA::Common::Measurement::DateTime& value) {

                    m_arrivalTime_ = value;
                }

                void arrivalTime(::UMAA::Common::Measurement::DateTime&& value) {
                    m_arrivalTime_ = std::move(value);
                }
                ::dds::core::optional< bool >& attitudeAchieved() noexcept {
                    return m_attitudeAchieved_;
                }

                const ::dds::core::optional< bool >& attitudeAchieved() const noexcept {
                    return m_attitudeAchieved_;
                }

                void attitudeAchieved(const ::dds::core::optional< bool >& value) {

                    m_attitudeAchieved_ = value;
                }

                void attitudeAchieved(::dds::core::optional< bool >&& value) {
                    m_attitudeAchieved_ = std::move(value);
                }
                ::dds::core::optional< double >& crossTrackError() noexcept {
                    return m_crossTrackError_;
                }

                const ::dds::core::optional< double >& crossTrackError() const noexcept {
                    return m_crossTrackError_;
                }

                void crossTrackError(const ::dds::core::optional< double >& value) {

                    m_crossTrackError_ = value;
                }

                void crossTrackError(::dds::core::optional< double >&& value) {
                    m_crossTrackError_ = std::move(value);
                }
                double& cumulativeDistance() noexcept {
                    return m_cumulativeDistance_;
                }

                const double& cumulativeDistance() const noexcept {
                    return m_cumulativeDistance_;
                }

                void cumulativeDistance(double value) {

                    m_cumulativeDistance_ = value;
                }

                double& distanceRemaining() noexcept {
                    return m_distanceRemaining_;
                }

                const double& distanceRemaining() const noexcept {
                    return m_distanceRemaining_;
                }

                void distanceRemaining(double value) {

                    m_distanceRemaining_ = value;
                }

                double& distanceToWaypoint() noexcept {
                    return m_distanceToWaypoint_;
                }

                const double& distanceToWaypoint() const noexcept {
                    return m_distanceToWaypoint_;
                }

                void distanceToWaypoint(double value) {

                    m_distanceToWaypoint_ = value;
                }

                bool& elevationAchieved() noexcept {
                    return m_elevationAchieved_;
                }

                const bool& elevationAchieved() const noexcept {
                    return m_elevationAchieved_;
                }

                void elevationAchieved(bool value) {

                    m_elevationAchieved_ = value;
                }

                bool& positionAchieved() noexcept {
                    return m_positionAchieved_;
                }

                const bool& positionAchieved() const noexcept {
                    return m_positionAchieved_;
                }

                void positionAchieved(bool value) {

                    m_positionAchieved_ = value;
                }

                bool& speedAchieved() noexcept {
                    return m_speedAchieved_;
                }

                const bool& speedAchieved() const noexcept {
                    return m_speedAchieved_;
                }

                void speedAchieved(bool value) {

                    m_speedAchieved_ = value;
                }

                ::UMAA::Common::Measurement::DateTime& timeToWaypoint() noexcept {
                    return m_timeToWaypoint_;
                }

                const ::UMAA::Common::Measurement::DateTime& timeToWaypoint() const noexcept {
                    return m_timeToWaypoint_;
                }

                void timeToWaypoint(const ::UMAA::Common::Measurement::DateTime& value) {

                    m_timeToWaypoint_ = value;
                }

                void timeToWaypoint(::UMAA::Common::Measurement::DateTime&& value) {
                    m_timeToWaypoint_ = std::move(value);
                }
                bool& trackLineAchieved() noexcept {
                    return m_trackLineAchieved_;
                }

                const bool& trackLineAchieved() const noexcept {
                    return m_trackLineAchieved_;
                }

                void trackLineAchieved(bool value) {

                    m_trackLineAchieved_ = value;
                }

                ::UMAA::Common::Measurement::NumericGUID& waypointID() noexcept {
                    return m_waypointID_;
                }

                const ::UMAA::Common::Measurement::NumericGUID& waypointID() const noexcept {
                    return m_waypointID_;
                }

                void waypointID(const ::UMAA::Common::Measurement::NumericGUID& value) {

                    m_waypointID_ = value;
                }

                void waypointID(::UMAA::Common::Measurement::NumericGUID&& value) {
                    m_waypointID_ = std::move(value);
                }
                int32_t& waypointsRemaining() noexcept {
                    return m_waypointsRemaining_;
                }

                const int32_t& waypointsRemaining() const noexcept {
                    return m_waypointsRemaining_;
                }

                void waypointsRemaining(int32_t value) {

                    m_waypointsRemaining_ = value;
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
                bool operator == (const GlobalWaypointExecutionStatusReportType& other_) const;
                bool operator != (const GlobalWaypointExecutionStatusReportType& other_) const;

                void swap(GlobalWaypointExecutionStatusReportType& other_) noexcept ;

              private:

                ::UMAA::Common::Measurement::DateTime m_arrivalTime_;
                ::dds::core::optional< bool > m_attitudeAchieved_;
                ::dds::core::optional< double > m_crossTrackError_;
                double m_cumulativeDistance_;
                double m_distanceRemaining_;
                double m_distanceToWaypoint_;
                bool m_elevationAchieved_;
                bool m_positionAchieved_;
                bool m_speedAchieved_;
                ::UMAA::Common::Measurement::DateTime m_timeToWaypoint_;
                bool m_trackLineAchieved_;
                ::UMAA::Common::Measurement::NumericGUID m_waypointID_ {};
                int32_t m_waypointsRemaining_;
                ::UMAA::Common::Measurement::DateTime m_timeStamp_;
                ::UMAA::Common::IdentifierType m_source_;
                ::UMAA::Common::Measurement::NumericGUID m_sessionID_ {};

            };

            inline void swap(GlobalWaypointExecutionStatusReportType& a, GlobalWaypointExecutionStatusReportType& b)  noexcept 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const GlobalWaypointExecutionStatusReportType& sample);

        } // namespace GlobalWaypointControl  
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
        struct topic_type_name< ::UMAA::MO::GlobalWaypointControl::GlobalWaypointExecutionStatusReportType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::MO::GlobalWaypointControl::GlobalWaypointExecutionStatusReportType";
            }
        };

        template<>
        struct is_topic_type< ::UMAA::MO::GlobalWaypointControl::GlobalWaypointExecutionStatusReportType > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< ::UMAA::MO::GlobalWaypointControl::GlobalWaypointExecutionStatusReportType > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const ::UMAA::MO::GlobalWaypointControl::GlobalWaypointExecutionStatusReportType& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(::UMAA::MO::GlobalWaypointControl::GlobalWaypointExecutionStatusReportType& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(::UMAA::MO::GlobalWaypointControl::GlobalWaypointExecutionStatusReportType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(::UMAA::MO::GlobalWaypointControl::GlobalWaypointExecutionStatusReportType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };
    }
}

namespace rti { 
    namespace topic {

        template<>
        struct dynamic_type< ::UMAA::MO::GlobalWaypointControl::GlobalWaypointExecutionStatusReportType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };

        template <>
        struct extensibility< ::UMAA::MO::GlobalWaypointControl::GlobalWaypointExecutionStatusReportType > {
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

#endif // GlobalWaypointExecutionStatusReportType_607922644_hpp

