

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from TaskPlanType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef TaskPlanType_1877395682_hpp
#define TaskPlanType_1877395682_hpp

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
#include "UMAA/MM/BaseType/ObjectiveType.hpp"
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
            template class NDDSUSERDllExport std::allocator< ::UMAA::MM::BaseType::StateTriggerType >;
            template class NDDSUSERDllExport std::vector< ::UMAA::MM::BaseType::StateTriggerType >;
            #endif
            class NDDSUSERDllExport TaskPlanType {
              public:

                TaskPlanType();

                TaskPlanType(bool approvalRequired_,const std::string& name_,const ::rti::core::bounded_sequence< ::UMAA::MM::BaseType::StateTriggerType, 16L >& stateTrigger_,const std::string& taskDescription_,const ::UMAA::Common::Measurement::NumericGUID& taskID_,int32_t taskPriority_,const ::UMAA::Common::LargeSetMetadata& objectivesSetMetadata_);

                bool& approvalRequired() noexcept {
                    return m_approvalRequired_;
                }

                const bool& approvalRequired() const noexcept {
                    return m_approvalRequired_;
                }

                void approvalRequired(bool value) {

                    m_approvalRequired_ = value;
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
                std::string& taskDescription() noexcept {
                    return m_taskDescription_;
                }

                const std::string& taskDescription() const noexcept {
                    return m_taskDescription_;
                }

                void taskDescription(const std::string& value) {

                    m_taskDescription_ = value;
                }

                void taskDescription(std::string&& value) {
                    m_taskDescription_ = std::move(value);
                }
                ::UMAA::Common::Measurement::NumericGUID& taskID() noexcept {
                    return m_taskID_;
                }

                const ::UMAA::Common::Measurement::NumericGUID& taskID() const noexcept {
                    return m_taskID_;
                }

                void taskID(const ::UMAA::Common::Measurement::NumericGUID& value) {

                    m_taskID_ = value;
                }

                void taskID(::UMAA::Common::Measurement::NumericGUID&& value) {
                    m_taskID_ = std::move(value);
                }
                int32_t& taskPriority() noexcept {
                    return m_taskPriority_;
                }

                const int32_t& taskPriority() const noexcept {
                    return m_taskPriority_;
                }

                void taskPriority(int32_t value) {

                    m_taskPriority_ = value;
                }

                ::UMAA::Common::LargeSetMetadata& objectivesSetMetadata() noexcept {
                    return m_objectivesSetMetadata_;
                }

                const ::UMAA::Common::LargeSetMetadata& objectivesSetMetadata() const noexcept {
                    return m_objectivesSetMetadata_;
                }

                void objectivesSetMetadata(const ::UMAA::Common::LargeSetMetadata& value) {

                    m_objectivesSetMetadata_ = value;
                }

                void objectivesSetMetadata(::UMAA::Common::LargeSetMetadata&& value) {
                    m_objectivesSetMetadata_ = std::move(value);
                }
                bool operator == (const TaskPlanType& other_) const;
                bool operator != (const TaskPlanType& other_) const;

                void swap(TaskPlanType& other_) noexcept ;

              private:

                bool m_approvalRequired_;
                std::string m_name_;
                ::rti::core::bounded_sequence< ::UMAA::MM::BaseType::StateTriggerType, 16L > m_stateTrigger_;
                std::string m_taskDescription_;
                ::UMAA::Common::Measurement::NumericGUID m_taskID_ {};
                int32_t m_taskPriority_;
                ::UMAA::Common::LargeSetMetadata m_objectivesSetMetadata_;

            };

            inline void swap(TaskPlanType& a, TaskPlanType& b)  noexcept 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const TaskPlanType& sample);

            static const std::string TaskPlanTypeObjectivesSetElementTopic = "UMAA::MM::BaseType::TaskPlanTypeObjectivesSetElement";

            class NDDSUSERDllExport TaskPlanTypeObjectivesSetElement {
              public:

                TaskPlanTypeObjectivesSetElement();

                TaskPlanTypeObjectivesSetElement(const ::UMAA::MM::BaseType::ObjectiveType& element_,const ::UMAA::Common::Measurement::NumericGUID& setID_,const ::UMAA::Common::Measurement::NumericGUID& elementID_,const ::UMAA::Common::Measurement::DateTime& elementTimestamp_);

                ::UMAA::MM::BaseType::ObjectiveType& element() noexcept {
                    return m_element_;
                }

                const ::UMAA::MM::BaseType::ObjectiveType& element() const noexcept {
                    return m_element_;
                }

                void element(const ::UMAA::MM::BaseType::ObjectiveType& value) {

                    m_element_ = value;
                }

                void element(::UMAA::MM::BaseType::ObjectiveType&& value) {
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
                bool operator == (const TaskPlanTypeObjectivesSetElement& other_) const;
                bool operator != (const TaskPlanTypeObjectivesSetElement& other_) const;

                void swap(TaskPlanTypeObjectivesSetElement& other_) noexcept ;

              private:

                ::UMAA::MM::BaseType::ObjectiveType m_element_;
                ::UMAA::Common::Measurement::NumericGUID m_setID_ {};
                ::UMAA::Common::Measurement::NumericGUID m_elementID_ {};
                ::UMAA::Common::Measurement::DateTime m_elementTimestamp_;

            };

            inline void swap(TaskPlanTypeObjectivesSetElement& a, TaskPlanTypeObjectivesSetElement& b)  noexcept 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const TaskPlanTypeObjectivesSetElement& sample);

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
        struct topic_type_name< ::UMAA::MM::BaseType::TaskPlanType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::MM::BaseType::TaskPlanType";
            }
        };

        template<>
        struct topic_type_support< ::UMAA::MM::BaseType::TaskPlanType > {
            NDDSUSERDllExport 
            static void reset_sample(::UMAA::MM::BaseType::TaskPlanType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(::UMAA::MM::BaseType::TaskPlanType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };
        template<>
        struct topic_type_name< ::UMAA::MM::BaseType::TaskPlanTypeObjectivesSetElement > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::MM::BaseType::TaskPlanTypeObjectivesSetElement";
            }
        };

        template<>
        struct is_topic_type< ::UMAA::MM::BaseType::TaskPlanTypeObjectivesSetElement > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< ::UMAA::MM::BaseType::TaskPlanTypeObjectivesSetElement > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const ::UMAA::MM::BaseType::TaskPlanTypeObjectivesSetElement& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(::UMAA::MM::BaseType::TaskPlanTypeObjectivesSetElement& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(::UMAA::MM::BaseType::TaskPlanTypeObjectivesSetElement& sample);

            NDDSUSERDllExport 
            static void allocate_sample(::UMAA::MM::BaseType::TaskPlanTypeObjectivesSetElement& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };
    }
}

namespace rti { 
    namespace topic {

        template<>
        struct dynamic_type< ::UMAA::MM::BaseType::TaskPlanType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };

        template <>
        struct extensibility< ::UMAA::MM::BaseType::TaskPlanType > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

        template<>
        struct dynamic_type< ::UMAA::MM::BaseType::TaskPlanTypeObjectivesSetElement > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };

        template <>
        struct extensibility< ::UMAA::MM::BaseType::TaskPlanTypeObjectivesSetElement > {
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

#endif // TaskPlanType_1877395682_hpp

