

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from MissionPlanReportType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef MissionPlanReportType_1757476290_hpp
#define MissionPlanReportType_1757476290_hpp

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
#include "UMAA/Common/Measurement/DateTime_Tolerance.hpp"
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
#include "UMAA/MM/BaseType/TaskPlanType.hpp"
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif
namespace UMAA {
    namespace MM {
        namespace MissionPlanStatus {

            static const std::string MissionPlanReport_TOPIC = "UMAA::MM::MissionPlanStatus::MissionPlanReport";

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            // On Windows, dll-export template instantiations of standard types used by
            // other dll-exported types
            template class NDDSUSERDllExport std::allocator< UMAA::Common::Measurement::NumericGUID >;
            template class NDDSUSERDllExport std::vector< UMAA::Common::Measurement::NumericGUID >;
            template class NDDSUSERDllExport std::allocator< UMAA::MM::BaseType::TaskPlanType >;
            template class NDDSUSERDllExport std::vector< UMAA::MM::BaseType::TaskPlanType >;
            #endif
            class NDDSUSERDllExport MissionPlanReportType {
              public:
                MissionPlanReportType();

                MissionPlanReportType(const ::rti::core::bounded_sequence< UMAA::Common::Measurement::NumericGUID, 100L >& dependentMissionIDs,const UMAA::Common::Measurement::DateTime& endTime,const ::dds::core::optional< UMAA::Common::Measurement::DateTime_Tolerance >& endTimeTolerance,const std::string& missionDescription,const std::string& missionName,const UMAA::Common::Measurement::DateTime& startTime,const ::dds::core::optional< UMAA::Common::Measurement::DateTime_Tolerance >& startTimeTolerance,const ::rti::core::bounded_sequence< UMAA::MM::BaseType::TaskPlanType, 100L >& taskPlans,const UMAA::Common::Measurement::NumericGUID& source,const UMAA::Common::Measurement::DateTime& timeStamp,const UMAA::Common::Measurement::NumericGUID& missionID);

                #ifdef RTI_CXX11_RVALUE_REFERENCES
                #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
                MissionPlanReportType (MissionPlanReportType&&) = default;
                MissionPlanReportType& operator=(MissionPlanReportType&&) = default;
                MissionPlanReportType& operator=(const MissionPlanReportType&) = default;
                MissionPlanReportType(const MissionPlanReportType&) = default;
                #else
                MissionPlanReportType(MissionPlanReportType&& other_) OMG_NOEXCEPT;  
                MissionPlanReportType& operator=(MissionPlanReportType&&  other_) OMG_NOEXCEPT;
                #endif
                #endif 

                ::rti::core::bounded_sequence< UMAA::Common::Measurement::NumericGUID, 100L >& dependentMissionIDs() OMG_NOEXCEPT {
                    return m_dependentMissionIDs_;
                }

                const ::rti::core::bounded_sequence< UMAA::Common::Measurement::NumericGUID, 100L >& dependentMissionIDs() const OMG_NOEXCEPT {
                    return m_dependentMissionIDs_;
                }

                void dependentMissionIDs(const ::rti::core::bounded_sequence< UMAA::Common::Measurement::NumericGUID, 100L >& value) {
                    m_dependentMissionIDs_ = value;
                }

                void dependentMissionIDs(::rti::core::bounded_sequence< UMAA::Common::Measurement::NumericGUID, 100L >&& value) {
                    m_dependentMissionIDs_ = std::move(value);
                }
                UMAA::Common::Measurement::DateTime& endTime() OMG_NOEXCEPT {
                    return m_endTime_;
                }

                const UMAA::Common::Measurement::DateTime& endTime() const OMG_NOEXCEPT {
                    return m_endTime_;
                }

                void endTime(const UMAA::Common::Measurement::DateTime& value) {
                    m_endTime_ = value;
                }

                void endTime(UMAA::Common::Measurement::DateTime&& value) {
                    m_endTime_ = std::move(value);
                }
                ::dds::core::optional< UMAA::Common::Measurement::DateTime_Tolerance >& endTimeTolerance() OMG_NOEXCEPT {
                    return m_endTimeTolerance_;
                }

                const ::dds::core::optional< UMAA::Common::Measurement::DateTime_Tolerance >& endTimeTolerance() const OMG_NOEXCEPT {
                    return m_endTimeTolerance_;
                }

                void endTimeTolerance(const ::dds::core::optional< UMAA::Common::Measurement::DateTime_Tolerance >& value) {
                    m_endTimeTolerance_ = value;
                }

                void endTimeTolerance(::dds::core::optional< UMAA::Common::Measurement::DateTime_Tolerance >&& value) {
                    m_endTimeTolerance_ = std::move(value);
                }
                std::string& missionDescription() OMG_NOEXCEPT {
                    return m_missionDescription_;
                }

                const std::string& missionDescription() const OMG_NOEXCEPT {
                    return m_missionDescription_;
                }

                void missionDescription(const std::string& value) {
                    m_missionDescription_ = value;
                }

                void missionDescription(std::string&& value) {
                    m_missionDescription_ = std::move(value);
                }
                std::string& missionName() OMG_NOEXCEPT {
                    return m_missionName_;
                }

                const std::string& missionName() const OMG_NOEXCEPT {
                    return m_missionName_;
                }

                void missionName(const std::string& value) {
                    m_missionName_ = value;
                }

                void missionName(std::string&& value) {
                    m_missionName_ = std::move(value);
                }
                UMAA::Common::Measurement::DateTime& startTime() OMG_NOEXCEPT {
                    return m_startTime_;
                }

                const UMAA::Common::Measurement::DateTime& startTime() const OMG_NOEXCEPT {
                    return m_startTime_;
                }

                void startTime(const UMAA::Common::Measurement::DateTime& value) {
                    m_startTime_ = value;
                }

                void startTime(UMAA::Common::Measurement::DateTime&& value) {
                    m_startTime_ = std::move(value);
                }
                ::dds::core::optional< UMAA::Common::Measurement::DateTime_Tolerance >& startTimeTolerance() OMG_NOEXCEPT {
                    return m_startTimeTolerance_;
                }

                const ::dds::core::optional< UMAA::Common::Measurement::DateTime_Tolerance >& startTimeTolerance() const OMG_NOEXCEPT {
                    return m_startTimeTolerance_;
                }

                void startTimeTolerance(const ::dds::core::optional< UMAA::Common::Measurement::DateTime_Tolerance >& value) {
                    m_startTimeTolerance_ = value;
                }

                void startTimeTolerance(::dds::core::optional< UMAA::Common::Measurement::DateTime_Tolerance >&& value) {
                    m_startTimeTolerance_ = std::move(value);
                }
                ::rti::core::bounded_sequence< UMAA::MM::BaseType::TaskPlanType, 100L >& taskPlans() OMG_NOEXCEPT {
                    return m_taskPlans_;
                }

                const ::rti::core::bounded_sequence< UMAA::MM::BaseType::TaskPlanType, 100L >& taskPlans() const OMG_NOEXCEPT {
                    return m_taskPlans_;
                }

                void taskPlans(const ::rti::core::bounded_sequence< UMAA::MM::BaseType::TaskPlanType, 100L >& value) {
                    m_taskPlans_ = value;
                }

                void taskPlans(::rti::core::bounded_sequence< UMAA::MM::BaseType::TaskPlanType, 100L >&& value) {
                    m_taskPlans_ = std::move(value);
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
                UMAA::Common::Measurement::NumericGUID& missionID() OMG_NOEXCEPT {
                    return m_missionID_;
                }

                const UMAA::Common::Measurement::NumericGUID& missionID() const OMG_NOEXCEPT {
                    return m_missionID_;
                }

                void missionID(const UMAA::Common::Measurement::NumericGUID& value) {
                    m_missionID_ = value;
                }

                void missionID(UMAA::Common::Measurement::NumericGUID&& value) {
                    m_missionID_ = std::move(value);
                }

                bool operator == (const MissionPlanReportType& other_) const;
                bool operator != (const MissionPlanReportType& other_) const;

                void swap(MissionPlanReportType& other_) OMG_NOEXCEPT ;

              private:

                ::rti::core::bounded_sequence< UMAA::Common::Measurement::NumericGUID, 100L > m_dependentMissionIDs_;
                UMAA::Common::Measurement::DateTime m_endTime_;
                ::dds::core::optional< UMAA::Common::Measurement::DateTime_Tolerance > m_endTimeTolerance_;
                std::string m_missionDescription_;
                std::string m_missionName_;
                UMAA::Common::Measurement::DateTime m_startTime_;
                ::dds::core::optional< UMAA::Common::Measurement::DateTime_Tolerance > m_startTimeTolerance_;
                ::rti::core::bounded_sequence< UMAA::MM::BaseType::TaskPlanType, 100L > m_taskPlans_;
                UMAA::Common::Measurement::NumericGUID m_source_;
                UMAA::Common::Measurement::DateTime m_timeStamp_;
                UMAA::Common::Measurement::NumericGUID m_missionID_;

            };

            inline void swap(MissionPlanReportType& a, MissionPlanReportType& b)  OMG_NOEXCEPT 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const MissionPlanReportType& sample);

        } // namespace MissionPlanStatus  
    } // namespace MM  
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
        struct topic_type_name< UMAA::MM::MissionPlanStatus::MissionPlanReportType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::MM::MissionPlanStatus::MissionPlanReportType";
            }
        };

        template<>
        struct is_topic_type< UMAA::MM::MissionPlanStatus::MissionPlanReportType > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< UMAA::MM::MissionPlanStatus::MissionPlanReportType > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const UMAA::MM::MissionPlanStatus::MissionPlanReportType& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(UMAA::MM::MissionPlanStatus::MissionPlanReportType& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(UMAA::MM::MissionPlanStatus::MissionPlanReportType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(UMAA::MM::MissionPlanStatus::MissionPlanReportType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

    }
}

namespace rti { 
    namespace topic {

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< UMAA::MM::MissionPlanStatus::MissionPlanReportType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< UMAA::MM::MissionPlanStatus::MissionPlanReportType > {
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

#endif // MissionPlanReportType_1757476290_hpp

