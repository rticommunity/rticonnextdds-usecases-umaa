

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ObjectiveType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef ObjectiveType_1323829768_hpp
#define ObjectiveType_1323829768_hpp

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
#include "UMAA/Common/Time/DateTimeRequirementType.hpp"
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
#include "UMAA/MM/BaseType/StateTriggerType.hpp"
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
            template class NDDSUSERDllExport std::allocator< ::UMAA::Common::IdentifierType >;
            template class NDDSUSERDllExport std::vector< ::UMAA::Common::IdentifierType >;
            template class NDDSUSERDllExport std::allocator< ::UMAA::MM::BaseType::StateTriggerType >;
            template class NDDSUSERDllExport std::vector< ::UMAA::MM::BaseType::StateTriggerType >;
            #endif
            class NDDSUSERDllExport ObjectiveType {
              public:

                ObjectiveType();

                ObjectiveType(bool approvalRequired_,const ::dds::core::optional< ::UMAA::Common::Measurement::NumericGUID >& duringConditionID_,const std::string& name_,const std::string& objectiveDescription_,const ::UMAA::Common::Measurement::NumericGUID& objectiveID_,int32_t objectivePriority_,const ::dds::core::optional< ::UMAA::Common::Measurement::NumericGUID >& preconditionID_,const ::rti::core::bounded_sequence< ::UMAA::Common::IdentifierType, 16L >& preferredResourceID_,const ::rti::core::bounded_sequence< ::UMAA::MM::BaseType::StateTriggerType, 16L >& stateTrigger_,const ::UMAA::Common::Measurement::NumericGUID& specializationID_,const ::UMAA::Common::Measurement::DateTime& specializationTimestamp_,const std::string& specializationTopic_);

                bool& approvalRequired() noexcept {
                    return m_approvalRequired_;
                }

                const bool& approvalRequired() const noexcept {
                    return m_approvalRequired_;
                }

                void approvalRequired(bool value) {

                    m_approvalRequired_ = value;
                }

                ::dds::core::optional< ::UMAA::Common::Measurement::NumericGUID >& duringConditionID() noexcept {
                    return m_duringConditionID_;
                }

                const ::dds::core::optional< ::UMAA::Common::Measurement::NumericGUID >& duringConditionID() const noexcept {
                    return m_duringConditionID_;
                }

                void duringConditionID(const ::dds::core::optional< ::UMAA::Common::Measurement::NumericGUID >& value) {

                    m_duringConditionID_ = value;
                }

                void duringConditionID(::dds::core::optional< ::UMAA::Common::Measurement::NumericGUID >&& value) {
                    m_duringConditionID_ = std::move(value);
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
                std::string& objectiveDescription() noexcept {
                    return m_objectiveDescription_;
                }

                const std::string& objectiveDescription() const noexcept {
                    return m_objectiveDescription_;
                }

                void objectiveDescription(const std::string& value) {

                    m_objectiveDescription_ = value;
                }

                void objectiveDescription(std::string&& value) {
                    m_objectiveDescription_ = std::move(value);
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
                int32_t& objectivePriority() noexcept {
                    return m_objectivePriority_;
                }

                const int32_t& objectivePriority() const noexcept {
                    return m_objectivePriority_;
                }

                void objectivePriority(int32_t value) {

                    m_objectivePriority_ = value;
                }

                ::dds::core::optional< ::UMAA::Common::Measurement::NumericGUID >& preconditionID() noexcept {
                    return m_preconditionID_;
                }

                const ::dds::core::optional< ::UMAA::Common::Measurement::NumericGUID >& preconditionID() const noexcept {
                    return m_preconditionID_;
                }

                void preconditionID(const ::dds::core::optional< ::UMAA::Common::Measurement::NumericGUID >& value) {

                    m_preconditionID_ = value;
                }

                void preconditionID(::dds::core::optional< ::UMAA::Common::Measurement::NumericGUID >&& value) {
                    m_preconditionID_ = std::move(value);
                }
                ::rti::core::bounded_sequence< ::UMAA::Common::IdentifierType, 16L >& preferredResourceID() noexcept {
                    return m_preferredResourceID_;
                }

                const ::rti::core::bounded_sequence< ::UMAA::Common::IdentifierType, 16L >& preferredResourceID() const noexcept {
                    return m_preferredResourceID_;
                }

                void preferredResourceID(const ::rti::core::bounded_sequence< ::UMAA::Common::IdentifierType, 16L >& value) {

                    m_preferredResourceID_ = value;
                }

                void preferredResourceID(::rti::core::bounded_sequence< ::UMAA::Common::IdentifierType, 16L >&& value) {
                    m_preferredResourceID_ = std::move(value);
                }
                ::rti::core::bounded_sequence< ::UMAA::MM::BaseType::StateTriggerType, 16L >& stateTrigger() noexcept {
                    return m_stateTrigger_;
                }

                const ::rti::core::bounded_sequence< ::UMAA::MM::BaseType::StateTriggerType, 16L >& stateTrigger() const noexcept {
                    return m_stateTrigger_;
                }

                void stateTrigger(const ::rti::core::bounded_sequence< ::UMAA::MM::BaseType::StateTriggerType, 16L >& value) {

                    m_stateTrigger_ = value;
                }

                void stateTrigger(::rti::core::bounded_sequence< ::UMAA::MM::BaseType::StateTriggerType, 16L >&& value) {
                    m_stateTrigger_ = std::move(value);
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
                bool operator == (const ObjectiveType& other_) const;
                bool operator != (const ObjectiveType& other_) const;

                void swap(ObjectiveType& other_) noexcept ;

              private:

                bool m_approvalRequired_;
                ::dds::core::optional< ::UMAA::Common::Measurement::NumericGUID > m_duringConditionID_;
                std::string m_name_;
                std::string m_objectiveDescription_;
                ::UMAA::Common::Measurement::NumericGUID m_objectiveID_ {};
                int32_t m_objectivePriority_;
                ::dds::core::optional< ::UMAA::Common::Measurement::NumericGUID > m_preconditionID_;
                ::rti::core::bounded_sequence< ::UMAA::Common::IdentifierType, 16L > m_preferredResourceID_;
                ::rti::core::bounded_sequence< ::UMAA::MM::BaseType::StateTriggerType, 16L > m_stateTrigger_;
                ::UMAA::Common::Measurement::NumericGUID m_specializationID_ {};
                ::UMAA::Common::Measurement::DateTime m_specializationTimestamp_;
                std::string m_specializationTopic_;

            };

            inline void swap(ObjectiveType& a, ObjectiveType& b)  noexcept 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const ObjectiveType& sample);

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
        struct topic_type_name< ::UMAA::MM::BaseType::ObjectiveType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::MM::BaseType::ObjectiveType";
            }
        };

        template<>
        struct topic_type_support< ::UMAA::MM::BaseType::ObjectiveType > {
            NDDSUSERDllExport 
            static void reset_sample(::UMAA::MM::BaseType::ObjectiveType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(::UMAA::MM::BaseType::ObjectiveType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };
    }
}

namespace rti { 
    namespace topic {

        template<>
        struct dynamic_type< ::UMAA::MM::BaseType::ObjectiveType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };

        template <>
        struct extensibility< ::UMAA::MM::BaseType::ObjectiveType > {
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

#endif // ObjectiveType_1323829768_hpp

