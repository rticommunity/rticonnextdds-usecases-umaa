

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from LocalWaypointExecutionStatusReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef LocalWaypointExecutionStatusReportType_108158836_hpp
#define LocalWaypointExecutionStatusReportType_108158836_hpp

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
#include "UMAA/Common/Measurement/Measurements.hpp"
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif
namespace UMAA {
    namespace MO {
        namespace LocalWaypointControl {

            RTI_CONSTEXPR_OR_CONST_STRING std::string LocalWaypointExecutionStatusReport_TOPIC = "UMAA::MO::LocalWaypointControl::LocalWaypointExecutionStatusReport";

            class NDDSUSERDllExport LocalWaypointExecutionStatusReportType {
              public:

                LocalWaypointExecutionStatusReportType();

                LocalWaypointExecutionStatusReportType(const ::UMAA::Common::Measurement::DateTime& arrivalTime_,double crossTrackError_,double cumulativeDistance_,double distanceRemaining_,double distanceToWaypoint_,bool elevationAchieved_,bool maintainTrack_,bool speedAchieved_,const ::UMAA::Common::Measurement::DateTime& timeToWaypoint_,bool trackLineAchieved_,int32_t waypointsRemaining_,const ::UMAA::Common::Measurement::NumericGUID& source_,const ::UMAA::Common::Measurement::NumericGUID& sessionID_,const ::UMAA::Common::Measurement::NumericGUID& waypointID_);

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
                double& crossTrackError() noexcept {
                    return m_crossTrackError_;
                }

                const double& crossTrackError() const noexcept {
                    return m_crossTrackError_;
                }

                void crossTrackError(double value) {

                    m_crossTrackError_ = value;
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

                bool& maintainTrack() noexcept {
                    return m_maintainTrack_;
                }

                const bool& maintainTrack() const noexcept {
                    return m_maintainTrack_;
                }

                void maintainTrack(bool value) {

                    m_maintainTrack_ = value;
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

                int32_t& waypointsRemaining() noexcept {
                    return m_waypointsRemaining_;
                }

                const int32_t& waypointsRemaining() const noexcept {
                    return m_waypointsRemaining_;
                }

                void waypointsRemaining(int32_t value) {

                    m_waypointsRemaining_ = value;
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
                bool operator == (const LocalWaypointExecutionStatusReportType& other_) const;
                bool operator != (const LocalWaypointExecutionStatusReportType& other_) const;

                void swap(LocalWaypointExecutionStatusReportType& other_) noexcept ;

              private:

                ::UMAA::Common::Measurement::DateTime m_arrivalTime_;
                double m_crossTrackError_;
                double m_cumulativeDistance_;
                double m_distanceRemaining_;
                double m_distanceToWaypoint_;
                bool m_elevationAchieved_;
                bool m_maintainTrack_;
                bool m_speedAchieved_;
                ::UMAA::Common::Measurement::DateTime m_timeToWaypoint_;
                bool m_trackLineAchieved_;
                int32_t m_waypointsRemaining_;
                ::UMAA::Common::Measurement::NumericGUID m_source_ {};
                ::UMAA::Common::Measurement::NumericGUID m_sessionID_ {};
                ::UMAA::Common::Measurement::NumericGUID m_waypointID_ {};

            };

            inline void swap(LocalWaypointExecutionStatusReportType& a, LocalWaypointExecutionStatusReportType& b)  noexcept 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const LocalWaypointExecutionStatusReportType& sample);

        } // namespace LocalWaypointControl  
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
        struct topic_type_name< ::UMAA::MO::LocalWaypointControl::LocalWaypointExecutionStatusReportType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::MO::LocalWaypointControl::LocalWaypointExecutionStatusReportType";
            }
        };

        template<>
        struct is_topic_type< ::UMAA::MO::LocalWaypointControl::LocalWaypointExecutionStatusReportType > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< ::UMAA::MO::LocalWaypointControl::LocalWaypointExecutionStatusReportType > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const ::UMAA::MO::LocalWaypointControl::LocalWaypointExecutionStatusReportType& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(::UMAA::MO::LocalWaypointControl::LocalWaypointExecutionStatusReportType& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(::UMAA::MO::LocalWaypointControl::LocalWaypointExecutionStatusReportType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(::UMAA::MO::LocalWaypointControl::LocalWaypointExecutionStatusReportType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };
    }
}

namespace rti { 
    namespace topic {

        template<>
        struct dynamic_type< ::UMAA::MO::LocalWaypointControl::LocalWaypointExecutionStatusReportType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };

        template <>
        struct extensibility< ::UMAA::MO::LocalWaypointControl::LocalWaypointExecutionStatusReportType > {
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

#endif // LocalWaypointExecutionStatusReportType_108158836_hpp

