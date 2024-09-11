

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ObjectiveDetailedStatusType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef ObjectiveDetailedStatusType_1662263923_hpp
#define ObjectiveDetailedStatusType_1662263923_hpp

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

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            // On Windows, dll-export template instantiations of standard types used by
            // other dll-exported types
            template class NDDSUSERDllExport std::allocator< ::UMAA::Common::Measurement::NumericGUID >;
            template class NDDSUSERDllExport std::vector< ::UMAA::Common::Measurement::NumericGUID >;
            #endif
            class NDDSUSERDllExport ObjectiveDetailedStatusType {
              public:

                ObjectiveDetailedStatusType();

                ObjectiveDetailedStatusType(const ::rti::core::bounded_sequence< ::UMAA::Common::Measurement::NumericGUID, 256L >& childObjectiveIDs_,const std::string& errors_,const std::string& feedback_,bool isCurrentlyMeetingObjective_,const ::UMAA::Common::Measurement::NumericGUID& objectiveID_,const ::UMAA::Common::MaritimeEnumeration::ObjectiveExecutorStateEnumModule::ObjectiveExecutorStateEnumType& objectiveStatus_,const ::UMAA::Common::MaritimeEnumeration::ObjectiveExecutorStateReasonEnumModule::ObjectiveExecutorStateReasonEnumType& objectiveStatusReason_,const ::UMAA::Common::Measurement::DateTime& startTime_,const std::string& warnings_,const ::UMAA::Common::Measurement::NumericGUID& specializationID_,const ::UMAA::Common::Measurement::DateTime& specializationTimestamp_,const std::string& specializationTopic_);

                ::rti::core::bounded_sequence< ::UMAA::Common::Measurement::NumericGUID, 256L >& childObjectiveIDs() noexcept {
                    return m_childObjectiveIDs_;
                }

                const ::rti::core::bounded_sequence< ::UMAA::Common::Measurement::NumericGUID, 256L >& childObjectiveIDs() const noexcept {
                    return m_childObjectiveIDs_;
                }

                void childObjectiveIDs(const ::rti::core::bounded_sequence< ::UMAA::Common::Measurement::NumericGUID, 256L >& value) {

                    m_childObjectiveIDs_ = value;
                }

                void childObjectiveIDs(::rti::core::bounded_sequence< ::UMAA::Common::Measurement::NumericGUID, 256L >&& value) {
                    m_childObjectiveIDs_ = std::move(value);
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
                bool& isCurrentlyMeetingObjective() noexcept {
                    return m_isCurrentlyMeetingObjective_;
                }

                const bool& isCurrentlyMeetingObjective() const noexcept {
                    return m_isCurrentlyMeetingObjective_;
                }

                void isCurrentlyMeetingObjective(bool value) {

                    m_isCurrentlyMeetingObjective_ = value;
                }

                ::UMAA::Common::Measurement::NumericGUID& objectiveID() noexcept {
                    return m_objectiveID_;
                }

                const ::UMAA::Common::Measurement::NumericGUID& objectiveID() const noexcept {
                    return m_objectiveID_;
                }

                void objectiveID(const ::UMAA::Common::Measurement::NumericGUID& value) {

                    m_objectiveID_ = value;
                }

                void objectiveID(::UMAA::Common::Measurement::NumericGUID&& value) {
                    m_objectiveID_ = std::move(value);
                }
                ::UMAA::Common::MaritimeEnumeration::ObjectiveExecutorStateEnumModule::ObjectiveExecutorStateEnumType& objectiveStatus() noexcept {
                    return m_objectiveStatus_;
                }

                const ::UMAA::Common::MaritimeEnumeration::ObjectiveExecutorStateEnumModule::ObjectiveExecutorStateEnumType& objectiveStatus() const noexcept {
                    return m_objectiveStatus_;
                }

                void objectiveStatus(const ::UMAA::Common::MaritimeEnumeration::ObjectiveExecutorStateEnumModule::ObjectiveExecutorStateEnumType& value) {

                    m_objectiveStatus_ = value;
                }

                void objectiveStatus(::UMAA::Common::MaritimeEnumeration::ObjectiveExecutorStateEnumModule::ObjectiveExecutorStateEnumType&& value) {
                    m_objectiveStatus_ = std::move(value);
                }
                ::UMAA::Common::MaritimeEnumeration::ObjectiveExecutorStateReasonEnumModule::ObjectiveExecutorStateReasonEnumType& objectiveStatusReason() noexcept {
                    return m_objectiveStatusReason_;
                }

                const ::UMAA::Common::MaritimeEnumeration::ObjectiveExecutorStateReasonEnumModule::ObjectiveExecutorStateReasonEnumType& objectiveStatusReason() const noexcept {
                    return m_objectiveStatusReason_;
                }

                void objectiveStatusReason(const ::UMAA::Common::MaritimeEnumeration::ObjectiveExecutorStateReasonEnumModule::ObjectiveExecutorStateReasonEnumType& value) {

                    m_objectiveStatusReason_ = value;
                }

                void objectiveStatusReason(::UMAA::Common::MaritimeEnumeration::ObjectiveExecutorStateReasonEnumModule::ObjectiveExecutorStateReasonEnumType&& value) {
                    m_objectiveStatusReason_ = std::move(value);
                }
                ::UMAA::Common::Measurement::DateTime& startTime() noexcept {
                    return m_startTime_;
                }

                const ::UMAA::Common::Measurement::DateTime& startTime() const noexcept {
                    return m_startTime_;
                }

                void startTime(const ::UMAA::Common::Measurement::DateTime& value) {

                    m_startTime_ = value;
                }

                void startTime(::UMAA::Common::Measurement::DateTime&& value) {
                    m_startTime_ = std::move(value);
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
                ::UMAA::Common::Measurement::NumericGUID& specializationID() noexcept {
                    return m_specializationID_;
                }

                const ::UMAA::Common::Measurement::NumericGUID& specializationID() const noexcept {
                    return m_specializationID_;
                }

                void specializationID(const ::UMAA::Common::Measurement::NumericGUID& value) {

                    m_specializationID_ = value;
                }

                void specializationID(::UMAA::Common::Measurement::NumericGUID&& value) {
                    m_specializationID_ = std::move(value);
                }
                ::UMAA::Common::Measurement::DateTime& specializationTimestamp() noexcept {
                    return m_specializationTimestamp_;
                }

                const ::UMAA::Common::Measurement::DateTime& specializationTimestamp() const noexcept {
                    return m_specializationTimestamp_;
                }

                void specializationTimestamp(const ::UMAA::Common::Measurement::DateTime& value) {

                    m_specializationTimestamp_ = value;
                }

                void specializationTimestamp(::UMAA::Common::Measurement::DateTime&& value) {
                    m_specializationTimestamp_ = std::move(value);
                }
                std::string& specializationTopic() noexcept {
                    return m_specializationTopic_;
                }

                const std::string& specializationTopic() const noexcept {
                    return m_specializationTopic_;
                }

                void specializationTopic(const std::string& value) {

                    m_specializationTopic_ = value;
                }

                void specializationTopic(std::string&& value) {
                    m_specializationTopic_ = std::move(value);
                }
                bool operator == (const ObjectiveDetailedStatusType& other_) const;
                bool operator != (const ObjectiveDetailedStatusType& other_) const;

                void swap(ObjectiveDetailedStatusType& other_) noexcept ;

              private:

                ::rti::core::bounded_sequence< ::UMAA::Common::Measurement::NumericGUID, 256L > m_childObjectiveIDs_;
                std::string m_errors_;
                std::string m_feedback_;
                bool m_isCurrentlyMeetingObjective_;
                ::UMAA::Common::Measurement::NumericGUID m_objectiveID_ {};
                ::UMAA::Common::MaritimeEnumeration::ObjectiveExecutorStateEnumModule::ObjectiveExecutorStateEnumType m_objectiveStatus_;
                ::UMAA::Common::MaritimeEnumeration::ObjectiveExecutorStateReasonEnumModule::ObjectiveExecutorStateReasonEnumType m_objectiveStatusReason_;
                ::UMAA::Common::Measurement::DateTime m_startTime_;
                std::string m_warnings_;
                ::UMAA::Common::Measurement::NumericGUID m_specializationID_ {};
                ::UMAA::Common::Measurement::DateTime m_specializationTimestamp_;
                std::string m_specializationTopic_;

            };

            inline void swap(ObjectiveDetailedStatusType& a, ObjectiveDetailedStatusType& b)  noexcept 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const ObjectiveDetailedStatusType& sample);

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
        struct topic_type_name< ::UMAA::MM::BaseType::ObjectiveDetailedStatusType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::MM::BaseType::ObjectiveDetailedStatusType";
            }
        };

        template<>
        struct topic_type_support< ::UMAA::MM::BaseType::ObjectiveDetailedStatusType > {
            NDDSUSERDllExport 
            static void reset_sample(::UMAA::MM::BaseType::ObjectiveDetailedStatusType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(::UMAA::MM::BaseType::ObjectiveDetailedStatusType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };
    }
}

namespace rti { 
    namespace topic {

        template<>
        struct dynamic_type< ::UMAA::MM::BaseType::ObjectiveDetailedStatusType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };

        template <>
        struct extensibility< ::UMAA::MM::BaseType::ObjectiveDetailedStatusType > {
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

#endif // ObjectiveDetailedStatusType_1662263923_hpp

