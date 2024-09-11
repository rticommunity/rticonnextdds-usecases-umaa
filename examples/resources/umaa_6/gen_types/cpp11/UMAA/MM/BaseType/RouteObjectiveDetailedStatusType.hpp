

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from RouteObjectiveDetailedStatusType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef RouteObjectiveDetailedStatusType_561395317_hpp
#define RouteObjectiveDetailedStatusType_561395317_hpp

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
#include "UMAA/Common/LargeSetMetadata.hpp"
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
#include "UMAA/Common/PrimitiveConstrained/ConstrainedTypes.hpp"
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
#include "UMAA/Common/Speed/SpeedVariantType.hpp"
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
#include "UMAA/MM/BaseType/WaypointDetailedStatusType.hpp"
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif
namespace UMAA {
    namespace MM {
        namespace BaseType {

            static const std::string RouteObjectiveDetailedStatusTypeTopic = "UMAA::MM::BaseType::RouteObjectiveDetailedStatusType";

            class NDDSUSERDllExport RouteObjectiveDetailedStatusType {
              public:

                RouteObjectiveDetailedStatusType();

                RouteObjectiveDetailedStatusType(const ::dds::core::optional< double >& crossTrackError_,const ::UMAA::Common::Measurement::NumericGUID& currentWaypointID_,double distanceRemaining_,double distanceToWaypoint_,const ::dds::core::optional< bool >& isCrossTrackLimitAchieved_,const ::UMAA::Common::Speed::SpeedVariantType& speedToWaypoint_,const ::UMAA::Common::Measurement::DateTime& specializationReferenceTimestamp_,const ::UMAA::Common::Measurement::NumericGUID& specializationReferenceID_,const ::UMAA::Common::LargeSetMetadata& waypointDetailedStatusSetMetadata_);

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
                ::UMAA::Common::Measurement::NumericGUID& currentWaypointID() noexcept {
                    return m_currentWaypointID_;
                }

                const ::UMAA::Common::Measurement::NumericGUID& currentWaypointID() const noexcept {
                    return m_currentWaypointID_;
                }

                void currentWaypointID(const ::UMAA::Common::Measurement::NumericGUID& value) {

                    m_currentWaypointID_ = value;
                }

                void currentWaypointID(::UMAA::Common::Measurement::NumericGUID&& value) {
                    m_currentWaypointID_ = std::move(value);
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

                ::dds::core::optional< bool >& isCrossTrackLimitAchieved() noexcept {
                    return m_isCrossTrackLimitAchieved_;
                }

                const ::dds::core::optional< bool >& isCrossTrackLimitAchieved() const noexcept {
                    return m_isCrossTrackLimitAchieved_;
                }

                void isCrossTrackLimitAchieved(const ::dds::core::optional< bool >& value) {

                    m_isCrossTrackLimitAchieved_ = value;
                }

                void isCrossTrackLimitAchieved(::dds::core::optional< bool >&& value) {
                    m_isCrossTrackLimitAchieved_ = std::move(value);
                }
                ::UMAA::Common::Speed::SpeedVariantType& speedToWaypoint() noexcept {
                    return m_speedToWaypoint_;
                }

                const ::UMAA::Common::Speed::SpeedVariantType& speedToWaypoint() const noexcept {
                    return m_speedToWaypoint_;
                }

                void speedToWaypoint(const ::UMAA::Common::Speed::SpeedVariantType& value) {

                    m_speedToWaypoint_ = value;
                }

                void speedToWaypoint(::UMAA::Common::Speed::SpeedVariantType&& value) {
                    m_speedToWaypoint_ = std::move(value);
                }
                ::UMAA::Common::Measurement::DateTime& specializationReferenceTimestamp() noexcept {
                    return m_specializationReferenceTimestamp_;
                }

                const ::UMAA::Common::Measurement::DateTime& specializationReferenceTimestamp() const noexcept {
                    return m_specializationReferenceTimestamp_;
                }

                void specializationReferenceTimestamp(const ::UMAA::Common::Measurement::DateTime& value) {

                    m_specializationReferenceTimestamp_ = value;
                }

                void specializationReferenceTimestamp(::UMAA::Common::Measurement::DateTime&& value) {
                    m_specializationReferenceTimestamp_ = std::move(value);
                }
                ::UMAA::Common::Measurement::NumericGUID& specializationReferenceID() noexcept {
                    return m_specializationReferenceID_;
                }

                const ::UMAA::Common::Measurement::NumericGUID& specializationReferenceID() const noexcept {
                    return m_specializationReferenceID_;
                }

                void specializationReferenceID(const ::UMAA::Common::Measurement::NumericGUID& value) {

                    m_specializationReferenceID_ = value;
                }

                void specializationReferenceID(::UMAA::Common::Measurement::NumericGUID&& value) {
                    m_specializationReferenceID_ = std::move(value);
                }
                ::UMAA::Common::LargeSetMetadata& waypointDetailedStatusSetMetadata() noexcept {
                    return m_waypointDetailedStatusSetMetadata_;
                }

                const ::UMAA::Common::LargeSetMetadata& waypointDetailedStatusSetMetadata() const noexcept {
                    return m_waypointDetailedStatusSetMetadata_;
                }

                void waypointDetailedStatusSetMetadata(const ::UMAA::Common::LargeSetMetadata& value) {

                    m_waypointDetailedStatusSetMetadata_ = value;
                }

                void waypointDetailedStatusSetMetadata(::UMAA::Common::LargeSetMetadata&& value) {
                    m_waypointDetailedStatusSetMetadata_ = std::move(value);
                }
                bool operator == (const RouteObjectiveDetailedStatusType& other_) const;
                bool operator != (const RouteObjectiveDetailedStatusType& other_) const;

                void swap(RouteObjectiveDetailedStatusType& other_) noexcept ;

              private:

                ::dds::core::optional< double > m_crossTrackError_;
                ::UMAA::Common::Measurement::NumericGUID m_currentWaypointID_ {};
                double m_distanceRemaining_;
                double m_distanceToWaypoint_;
                ::dds::core::optional< bool > m_isCrossTrackLimitAchieved_;
                ::UMAA::Common::Speed::SpeedVariantType m_speedToWaypoint_;
                ::UMAA::Common::Measurement::DateTime m_specializationReferenceTimestamp_;
                ::UMAA::Common::Measurement::NumericGUID m_specializationReferenceID_ {};
                ::UMAA::Common::LargeSetMetadata m_waypointDetailedStatusSetMetadata_;

            };

            inline void swap(RouteObjectiveDetailedStatusType& a, RouteObjectiveDetailedStatusType& b)  noexcept 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const RouteObjectiveDetailedStatusType& sample);

            static const std::string RouteObjectiveDetailedStatusTypeWaypointDetailedStatusSetElementTopic = "UMAA::MM::BaseType::RouteObjectiveDetailedStatusTypeWaypointDetailedStatusSetElement";

            class NDDSUSERDllExport RouteObjectiveDetailedStatusTypeWaypointDetailedStatusSetElement {
              public:

                RouteObjectiveDetailedStatusTypeWaypointDetailedStatusSetElement();

                RouteObjectiveDetailedStatusTypeWaypointDetailedStatusSetElement(const ::UMAA::MM::BaseType::WaypointDetailedStatusType& element_,const ::UMAA::Common::Measurement::NumericGUID& setID_,const ::UMAA::Common::Measurement::NumericGUID& elementID_,const ::UMAA::Common::Measurement::DateTime& elementTimestamp_);

                ::UMAA::MM::BaseType::WaypointDetailedStatusType& element() noexcept {
                    return m_element_;
                }

                const ::UMAA::MM::BaseType::WaypointDetailedStatusType& element() const noexcept {
                    return m_element_;
                }

                void element(const ::UMAA::MM::BaseType::WaypointDetailedStatusType& value) {

                    m_element_ = value;
                }

                void element(::UMAA::MM::BaseType::WaypointDetailedStatusType&& value) {
                    m_element_ = std::move(value);
                }
                ::UMAA::Common::Measurement::NumericGUID& setID() noexcept {
                    return m_setID_;
                }

                const ::UMAA::Common::Measurement::NumericGUID& setID() const noexcept {
                    return m_setID_;
                }

                void setID(const ::UMAA::Common::Measurement::NumericGUID& value) {

                    m_setID_ = value;
                }

                void setID(::UMAA::Common::Measurement::NumericGUID&& value) {
                    m_setID_ = std::move(value);
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
                bool operator == (const RouteObjectiveDetailedStatusTypeWaypointDetailedStatusSetElement& other_) const;
                bool operator != (const RouteObjectiveDetailedStatusTypeWaypointDetailedStatusSetElement& other_) const;

                void swap(RouteObjectiveDetailedStatusTypeWaypointDetailedStatusSetElement& other_) noexcept ;

              private:

                ::UMAA::MM::BaseType::WaypointDetailedStatusType m_element_;
                ::UMAA::Common::Measurement::NumericGUID m_setID_ {};
                ::UMAA::Common::Measurement::NumericGUID m_elementID_ {};
                ::UMAA::Common::Measurement::DateTime m_elementTimestamp_;

            };

            inline void swap(RouteObjectiveDetailedStatusTypeWaypointDetailedStatusSetElement& a, RouteObjectiveDetailedStatusTypeWaypointDetailedStatusSetElement& b)  noexcept 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const RouteObjectiveDetailedStatusTypeWaypointDetailedStatusSetElement& sample);

        } // namespace BaseType  
    } // namespace MM  
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
        struct topic_type_name< ::UMAA::MM::BaseType::RouteObjectiveDetailedStatusType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::MM::BaseType::RouteObjectiveDetailedStatusType";
            }
        };

        template<>
        struct is_topic_type< ::UMAA::MM::BaseType::RouteObjectiveDetailedStatusType > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< ::UMAA::MM::BaseType::RouteObjectiveDetailedStatusType > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const ::UMAA::MM::BaseType::RouteObjectiveDetailedStatusType& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(::UMAA::MM::BaseType::RouteObjectiveDetailedStatusType& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(::UMAA::MM::BaseType::RouteObjectiveDetailedStatusType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(::UMAA::MM::BaseType::RouteObjectiveDetailedStatusType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };
        template<>
        struct topic_type_name< ::UMAA::MM::BaseType::RouteObjectiveDetailedStatusTypeWaypointDetailedStatusSetElement > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::MM::BaseType::RouteObjectiveDetailedStatusTypeWaypointDetailedStatusSetElement";
            }
        };

        template<>
        struct is_topic_type< ::UMAA::MM::BaseType::RouteObjectiveDetailedStatusTypeWaypointDetailedStatusSetElement > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< ::UMAA::MM::BaseType::RouteObjectiveDetailedStatusTypeWaypointDetailedStatusSetElement > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const ::UMAA::MM::BaseType::RouteObjectiveDetailedStatusTypeWaypointDetailedStatusSetElement& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(::UMAA::MM::BaseType::RouteObjectiveDetailedStatusTypeWaypointDetailedStatusSetElement& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(::UMAA::MM::BaseType::RouteObjectiveDetailedStatusTypeWaypointDetailedStatusSetElement& sample);

            NDDSUSERDllExport 
            static void allocate_sample(::UMAA::MM::BaseType::RouteObjectiveDetailedStatusTypeWaypointDetailedStatusSetElement& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };
    }
}

namespace rti { 
    namespace topic {

        template<>
        struct dynamic_type< ::UMAA::MM::BaseType::RouteObjectiveDetailedStatusType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };

        template <>
        struct extensibility< ::UMAA::MM::BaseType::RouteObjectiveDetailedStatusType > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

        template<>
        struct dynamic_type< ::UMAA::MM::BaseType::RouteObjectiveDetailedStatusTypeWaypointDetailedStatusSetElement > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };

        template <>
        struct extensibility< ::UMAA::MM::BaseType::RouteObjectiveDetailedStatusTypeWaypointDetailedStatusSetElement > {
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

#endif // RouteObjectiveDetailedStatusType_561395317_hpp

