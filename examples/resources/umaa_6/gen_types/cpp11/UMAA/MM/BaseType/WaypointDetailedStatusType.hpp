

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from WaypointDetailedStatusType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef WaypointDetailedStatusType_689242082_hpp
#define WaypointDetailedStatusType_689242082_hpp

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
namespace UMAA {
    namespace MM {
        namespace BaseType {

            class NDDSUSERDllExport WaypointDetailedStatusType {
              public:

                WaypointDetailedStatusType();

                WaypointDetailedStatusType(const ::dds::core::optional< double >& avgCrossTrackError_,const ::dds::core::optional< double >& avgSpeed_,const std::string& errors_,const std::string& feedback_,const ::dds::core::optional< double >& maxCrossTrackError_,const ::dds::core::optional< double >& maxSpeed_,const ::UMAA::Common::MaritimeEnumeration::WaypointStateEnumModule::WaypointStateEnumType& state_,const std::string& warnings_,const ::UMAA::Common::Measurement::NumericGUID& waypointID_);

                ::dds::core::optional< double >& avgCrossTrackError() noexcept {
                    return m_avgCrossTrackError_;
                }

                const ::dds::core::optional< double >& avgCrossTrackError() const noexcept {
                    return m_avgCrossTrackError_;
                }

                void avgCrossTrackError(const ::dds::core::optional< double >& value) {

                    m_avgCrossTrackError_ = value;
                }

                void avgCrossTrackError(::dds::core::optional< double >&& value) {
                    m_avgCrossTrackError_ = std::move(value);
                }
                ::dds::core::optional< double >& avgSpeed() noexcept {
                    return m_avgSpeed_;
                }

                const ::dds::core::optional< double >& avgSpeed() const noexcept {
                    return m_avgSpeed_;
                }

                void avgSpeed(const ::dds::core::optional< double >& value) {

                    m_avgSpeed_ = value;
                }

                void avgSpeed(::dds::core::optional< double >&& value) {
                    m_avgSpeed_ = std::move(value);
                }
                std::string& errors() noexcept {
                    return m_errors_;
                }

                const std::string& errors() const noexcept {
                    return m_errors_;
                }

                void errors(const std::string& value) {

                    m_errors_ = value;
                }

                void errors(std::string&& value) {
                    m_errors_ = std::move(value);
                }
                std::string& feedback() noexcept {
                    return m_feedback_;
                }

                const std::string& feedback() const noexcept {
                    return m_feedback_;
                }

                void feedback(const std::string& value) {

                    m_feedback_ = value;
                }

                void feedback(std::string&& value) {
                    m_feedback_ = std::move(value);
                }
                ::dds::core::optional< double >& maxCrossTrackError() noexcept {
                    return m_maxCrossTrackError_;
                }

                const ::dds::core::optional< double >& maxCrossTrackError() const noexcept {
                    return m_maxCrossTrackError_;
                }

                void maxCrossTrackError(const ::dds::core::optional< double >& value) {

                    m_maxCrossTrackError_ = value;
                }

                void maxCrossTrackError(::dds::core::optional< double >&& value) {
                    m_maxCrossTrackError_ = std::move(value);
                }
                ::dds::core::optional< double >& maxSpeed() noexcept {
                    return m_maxSpeed_;
                }

                const ::dds::core::optional< double >& maxSpeed() const noexcept {
                    return m_maxSpeed_;
                }

                void maxSpeed(const ::dds::core::optional< double >& value) {

                    m_maxSpeed_ = value;
                }

                void maxSpeed(::dds::core::optional< double >&& value) {
                    m_maxSpeed_ = std::move(value);
                }
                ::UMAA::Common::MaritimeEnumeration::WaypointStateEnumModule::WaypointStateEnumType& state() noexcept {
                    return m_state_;
                }

                const ::UMAA::Common::MaritimeEnumeration::WaypointStateEnumModule::WaypointStateEnumType& state() const noexcept {
                    return m_state_;
                }

                void state(const ::UMAA::Common::MaritimeEnumeration::WaypointStateEnumModule::WaypointStateEnumType& value) {

                    m_state_ = value;
                }

                void state(::UMAA::Common::MaritimeEnumeration::WaypointStateEnumModule::WaypointStateEnumType&& value) {
                    m_state_ = std::move(value);
                }
                std::string& warnings() noexcept {
                    return m_warnings_;
                }

                const std::string& warnings() const noexcept {
                    return m_warnings_;
                }

                void warnings(const std::string& value) {

                    m_warnings_ = value;
                }

                void warnings(std::string&& value) {
                    m_warnings_ = std::move(value);
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
                bool operator == (const WaypointDetailedStatusType& other_) const;
                bool operator != (const WaypointDetailedStatusType& other_) const;

                void swap(WaypointDetailedStatusType& other_) noexcept ;

              private:

                ::dds::core::optional< double > m_avgCrossTrackError_;
                ::dds::core::optional< double > m_avgSpeed_;
                std::string m_errors_;
                std::string m_feedback_;
                ::dds::core::optional< double > m_maxCrossTrackError_;
                ::dds::core::optional< double > m_maxSpeed_;
                ::UMAA::Common::MaritimeEnumeration::WaypointStateEnumModule::WaypointStateEnumType m_state_;
                std::string m_warnings_;
                ::UMAA::Common::Measurement::NumericGUID m_waypointID_ {};

            };

            inline void swap(WaypointDetailedStatusType& a, WaypointDetailedStatusType& b)  noexcept 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const WaypointDetailedStatusType& sample);

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
        struct topic_type_name< ::UMAA::MM::BaseType::WaypointDetailedStatusType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::MM::BaseType::WaypointDetailedStatusType";
            }
        };

        template<>
        struct topic_type_support< ::UMAA::MM::BaseType::WaypointDetailedStatusType > {
            NDDSUSERDllExport 
            static void reset_sample(::UMAA::MM::BaseType::WaypointDetailedStatusType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(::UMAA::MM::BaseType::WaypointDetailedStatusType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };
    }
}

namespace rti { 
    namespace topic {

        template<>
        struct dynamic_type< ::UMAA::MM::BaseType::WaypointDetailedStatusType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };

        template <>
        struct extensibility< ::UMAA::MM::BaseType::WaypointDetailedStatusType > {
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

#endif // WaypointDetailedStatusType_689242082_hpp

