

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from MissionPlanExecutionReportType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef MissionPlanExecutionReportType_1434205615_hpp
#define MissionPlanExecutionReportType_1434205615_hpp

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
#include "UMAA/Common/PrimitiveConstrained/ConstrainedTypes.hpp"
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif
namespace UMAA {
    namespace MM {
        namespace MissionPlanExecutionStatus {

            static const std::string MissionPlanExecutionReportTypeTopic = "UMAA::MM::MissionPlanExecutionStatus::MissionPlanExecutionReportType";

            class NDDSUSERDllExport MissionPlanExecutionReportType {
              public:

                MissionPlanExecutionReportType();

                MissionPlanExecutionReportType(const ::dds::core::optional< ::UMAA::Common::Measurement::DateTime >& endTime_,const std::string& feedback_,const std::string& missionPlanDescription_,const std::string& name_,const ::dds::core::optional< ::UMAA::Common::Measurement::DateTime >& startTime_,const ::UMAA::Common::MaritimeEnumeration::TaskStateEnumModule::TaskStateEnumType& state_,const ::UMAA::Common::Measurement::DateTime& timeStamp_,const ::UMAA::Common::IdentifierType& source_,const ::UMAA::Common::Measurement::NumericGUID& missionID_);

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
                std::string& missionPlanDescription() noexcept {
                    return m_missionPlanDescription_;
                }

                const std::string& missionPlanDescription() const noexcept {
                    return m_missionPlanDescription_;
                }

                void missionPlanDescription(const std::string& value) {

                    m_missionPlanDescription_ = value;
                }

                void missionPlanDescription(std::string&& value) {
                    m_missionPlanDescription_ = std::move(value);
                }
                std::string& name() noexcept {
                    return m_name_;
                }

                const std::string& name() const noexcept {
                    return m_name_;
                }

                void name(const std::string& value) {

                    m_name_ = value;
                }

                void name(std::string&& value) {
                    m_name_ = std::move(value);
                }
                ::dds::core::optional< ::UMAA::Common::Measurement::DateTime >& startTime() noexcept {
                    return m_startTime_;
                }

                const ::dds::core::optional< ::UMAA::Common::Measurement::DateTime >& startTime() const noexcept {
                    return m_startTime_;
                }

                void startTime(const ::dds::core::optional< ::UMAA::Common::Measurement::DateTime >& value) {

                    m_startTime_ = value;
                }

                void startTime(::dds::core::optional< ::UMAA::Common::Measurement::DateTime >&& value) {
                    m_startTime_ = std::move(value);
                }
                ::UMAA::Common::MaritimeEnumeration::TaskStateEnumModule::TaskStateEnumType& state() noexcept {
                    return m_state_;
                }

                const ::UMAA::Common::MaritimeEnumeration::TaskStateEnumModule::TaskStateEnumType& state() const noexcept {
                    return m_state_;
                }

                void state(const ::UMAA::Common::MaritimeEnumeration::TaskStateEnumModule::TaskStateEnumType& value) {

                    m_state_ = value;
                }

                void state(::UMAA::Common::MaritimeEnumeration::TaskStateEnumModule::TaskStateEnumType&& value) {
                    m_state_ = std::move(value);
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
                ::UMAA::Common::Measurement::NumericGUID& missionID() noexcept {
                    return m_missionID_;
                }

                const ::UMAA::Common::Measurement::NumericGUID& missionID() const noexcept {
                    return m_missionID_;
                }

                void missionID(const ::UMAA::Common::Measurement::NumericGUID& value) {

                    m_missionID_ = value;
                }

                void missionID(::UMAA::Common::Measurement::NumericGUID&& value) {
                    m_missionID_ = std::move(value);
                }
                bool operator == (const MissionPlanExecutionReportType& other_) const;
                bool operator != (const MissionPlanExecutionReportType& other_) const;

                void swap(MissionPlanExecutionReportType& other_) noexcept ;

              private:

                ::dds::core::optional< ::UMAA::Common::Measurement::DateTime > m_endTime_;
                std::string m_feedback_;
                std::string m_missionPlanDescription_;
                std::string m_name_;
                ::dds::core::optional< ::UMAA::Common::Measurement::DateTime > m_startTime_;
                ::UMAA::Common::MaritimeEnumeration::TaskStateEnumModule::TaskStateEnumType m_state_;
                ::UMAA::Common::Measurement::DateTime m_timeStamp_;
                ::UMAA::Common::IdentifierType m_source_;
                ::UMAA::Common::Measurement::NumericGUID m_missionID_ {};

            };

            inline void swap(MissionPlanExecutionReportType& a, MissionPlanExecutionReportType& b)  noexcept 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const MissionPlanExecutionReportType& sample);

        } // namespace MissionPlanExecutionStatus  
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
        struct topic_type_name< ::UMAA::MM::MissionPlanExecutionStatus::MissionPlanExecutionReportType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::MM::MissionPlanExecutionStatus::MissionPlanExecutionReportType";
            }
        };

        template<>
        struct is_topic_type< ::UMAA::MM::MissionPlanExecutionStatus::MissionPlanExecutionReportType > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< ::UMAA::MM::MissionPlanExecutionStatus::MissionPlanExecutionReportType > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const ::UMAA::MM::MissionPlanExecutionStatus::MissionPlanExecutionReportType& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(::UMAA::MM::MissionPlanExecutionStatus::MissionPlanExecutionReportType& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(::UMAA::MM::MissionPlanExecutionStatus::MissionPlanExecutionReportType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(::UMAA::MM::MissionPlanExecutionStatus::MissionPlanExecutionReportType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };
    }
}

namespace rti { 
    namespace topic {

        template<>
        struct dynamic_type< ::UMAA::MM::MissionPlanExecutionStatus::MissionPlanExecutionReportType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };

        template <>
        struct extensibility< ::UMAA::MM::MissionPlanExecutionStatus::MissionPlanExecutionReportType > {
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

#endif // MissionPlanExecutionReportType_1434205615_hpp
