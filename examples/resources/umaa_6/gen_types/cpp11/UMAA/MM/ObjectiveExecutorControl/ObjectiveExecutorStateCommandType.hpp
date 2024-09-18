

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ObjectiveExecutorStateCommandType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef ObjectiveExecutorStateCommandType_249953649_hpp
#define ObjectiveExecutorStateCommandType_249953649_hpp

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
namespace UMAA {
    namespace MM {
        namespace ObjectiveExecutorControl {

            static const std::string ObjectiveExecutorStateCommandTypeTopic = "UMAA::MM::ObjectiveExecutorControl::ObjectiveExecutorStateCommandType";

            class NDDSUSERDllExport ObjectiveExecutorStateCommandType {
              public:

                ObjectiveExecutorStateCommandType();

                ObjectiveExecutorStateCommandType(const ::UMAA::Common::Measurement::NumericGUID& missionID_,const ::UMAA::Common::Measurement::NumericGUID& objectiveID_,const ::UMAA::Common::MaritimeEnumeration::ObjectiveExecutorControlEnumModule::ObjectiveExecutorControlEnumType& objectiveState_,const ::UMAA::Common::Measurement::NumericGUID& taskID_,const ::UMAA::Common::Measurement::DateTime& timeStamp_,const ::UMAA::Common::IdentifierType& source_,const ::UMAA::Common::Measurement::NumericGUID& sessionID_,const ::UMAA::Common::IdentifierType& destination_);

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
                ::UMAA::Common::MaritimeEnumeration::ObjectiveExecutorControlEnumModule::ObjectiveExecutorControlEnumType& objectiveState() noexcept {
                    return m_objectiveState_;
                }

                const ::UMAA::Common::MaritimeEnumeration::ObjectiveExecutorControlEnumModule::ObjectiveExecutorControlEnumType& objectiveState() const noexcept {
                    return m_objectiveState_;
                }

                void objectiveState(const ::UMAA::Common::MaritimeEnumeration::ObjectiveExecutorControlEnumModule::ObjectiveExecutorControlEnumType& value) {

                    m_objectiveState_ = value;
                }

                void objectiveState(::UMAA::Common::MaritimeEnumeration::ObjectiveExecutorControlEnumModule::ObjectiveExecutorControlEnumType&& value) {
                    m_objectiveState_ = std::move(value);
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
                ::UMAA::Common::IdentifierType& destination() noexcept {
                    return m_destination_;
                }

                const ::UMAA::Common::IdentifierType& destination() const noexcept {
                    return m_destination_;
                }

                void destination(const ::UMAA::Common::IdentifierType& value) {

                    m_destination_ = value;
                }

                void destination(::UMAA::Common::IdentifierType&& value) {
                    m_destination_ = std::move(value);
                }
                bool operator == (const ObjectiveExecutorStateCommandType& other_) const;
                bool operator != (const ObjectiveExecutorStateCommandType& other_) const;

                void swap(ObjectiveExecutorStateCommandType& other_) noexcept ;

              private:

                ::UMAA::Common::Measurement::NumericGUID m_missionID_ {};
                ::UMAA::Common::Measurement::NumericGUID m_objectiveID_ {};
                ::UMAA::Common::MaritimeEnumeration::ObjectiveExecutorControlEnumModule::ObjectiveExecutorControlEnumType m_objectiveState_;
                ::UMAA::Common::Measurement::NumericGUID m_taskID_ {};
                ::UMAA::Common::Measurement::DateTime m_timeStamp_;
                ::UMAA::Common::IdentifierType m_source_;
                ::UMAA::Common::Measurement::NumericGUID m_sessionID_ {};
                ::UMAA::Common::IdentifierType m_destination_;

            };

            inline void swap(ObjectiveExecutorStateCommandType& a, ObjectiveExecutorStateCommandType& b)  noexcept 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const ObjectiveExecutorStateCommandType& sample);

        } // namespace ObjectiveExecutorControl  
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
        struct topic_type_name< ::UMAA::MM::ObjectiveExecutorControl::ObjectiveExecutorStateCommandType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::MM::ObjectiveExecutorControl::ObjectiveExecutorStateCommandType";
            }
        };

        template<>
        struct is_topic_type< ::UMAA::MM::ObjectiveExecutorControl::ObjectiveExecutorStateCommandType > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< ::UMAA::MM::ObjectiveExecutorControl::ObjectiveExecutorStateCommandType > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const ::UMAA::MM::ObjectiveExecutorControl::ObjectiveExecutorStateCommandType& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(::UMAA::MM::ObjectiveExecutorControl::ObjectiveExecutorStateCommandType& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(::UMAA::MM::ObjectiveExecutorControl::ObjectiveExecutorStateCommandType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(::UMAA::MM::ObjectiveExecutorControl::ObjectiveExecutorStateCommandType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };
    }
}

namespace rti { 
    namespace topic {

        template<>
        struct dynamic_type< ::UMAA::MM::ObjectiveExecutorControl::ObjectiveExecutorStateCommandType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };

        template <>
        struct extensibility< ::UMAA::MM::ObjectiveExecutorControl::ObjectiveExecutorStateCommandType > {
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

#endif // ObjectiveExecutorStateCommandType_249953649_hpp
