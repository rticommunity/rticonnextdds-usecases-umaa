

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from MissionPlanCatalogCommandType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef MissionPlanCatalogCommandType_308920492_hpp
#define MissionPlanCatalogCommandType_308920492_hpp

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
#include "UMAA/Common/MaritimeEnumeration/EnumerationSets.hpp"
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
        namespace MissionPlanCatalogControl {

            static const std::string MissionPlanCatalogCommand_TOPIC = "UMAA::MM::MissionPlanCatalogControl::MissionPlanCatalogCommand";

            class NDDSUSERDllExport MissionPlanCatalogCommandType {
              public:
                MissionPlanCatalogCommandType();

                MissionPlanCatalogCommandType(const UMAA::Common::Enumeration::PlanActionEnumType::PlanActionEnumType& action,bool allocationStatus,const UMAA::Common::Measurement::NumericGUID& assignedResource,const UMAA::Common::MaritimeEnumeration::DomainEnumType::DomainEnumType& domain,const std::string& format,const std::string& name,const UMAA::Common::Measurement::NumericGUID& source,const UMAA::Common::Measurement::NumericGUID& destination,const UMAA::Common::Measurement::NumericGUID& sessionID,const UMAA::Common::Measurement::DateTime& timeStamp,const UMAA::Common::Measurement::NumericGUID& missionID);

                #ifdef RTI_CXX11_RVALUE_REFERENCES
                #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
                MissionPlanCatalogCommandType (MissionPlanCatalogCommandType&&) = default;
                MissionPlanCatalogCommandType& operator=(MissionPlanCatalogCommandType&&) = default;
                MissionPlanCatalogCommandType& operator=(const MissionPlanCatalogCommandType&) = default;
                MissionPlanCatalogCommandType(const MissionPlanCatalogCommandType&) = default;
                #else
                MissionPlanCatalogCommandType(MissionPlanCatalogCommandType&& other_) OMG_NOEXCEPT;  
                MissionPlanCatalogCommandType& operator=(MissionPlanCatalogCommandType&&  other_) OMG_NOEXCEPT;
                #endif
                #endif 

                UMAA::Common::Enumeration::PlanActionEnumType::PlanActionEnumType& action() OMG_NOEXCEPT {
                    return m_action_;
                }

                const UMAA::Common::Enumeration::PlanActionEnumType::PlanActionEnumType& action() const OMG_NOEXCEPT {
                    return m_action_;
                }

                void action(const UMAA::Common::Enumeration::PlanActionEnumType::PlanActionEnumType& value) {
                    m_action_ = value;
                }

                void action(UMAA::Common::Enumeration::PlanActionEnumType::PlanActionEnumType&& value) {
                    m_action_ = std::move(value);
                }
                bool& allocationStatus() OMG_NOEXCEPT {
                    return m_allocationStatus_;
                }

                const bool& allocationStatus() const OMG_NOEXCEPT {
                    return m_allocationStatus_;
                }

                void allocationStatus(bool value) {
                    m_allocationStatus_ = value;
                }

                UMAA::Common::Measurement::NumericGUID& assignedResource() OMG_NOEXCEPT {
                    return m_assignedResource_;
                }

                const UMAA::Common::Measurement::NumericGUID& assignedResource() const OMG_NOEXCEPT {
                    return m_assignedResource_;
                }

                void assignedResource(const UMAA::Common::Measurement::NumericGUID& value) {
                    m_assignedResource_ = value;
                }

                void assignedResource(UMAA::Common::Measurement::NumericGUID&& value) {
                    m_assignedResource_ = std::move(value);
                }
                UMAA::Common::MaritimeEnumeration::DomainEnumType::DomainEnumType& domain() OMG_NOEXCEPT {
                    return m_domain_;
                }

                const UMAA::Common::MaritimeEnumeration::DomainEnumType::DomainEnumType& domain() const OMG_NOEXCEPT {
                    return m_domain_;
                }

                void domain(const UMAA::Common::MaritimeEnumeration::DomainEnumType::DomainEnumType& value) {
                    m_domain_ = value;
                }

                void domain(UMAA::Common::MaritimeEnumeration::DomainEnumType::DomainEnumType&& value) {
                    m_domain_ = std::move(value);
                }
                std::string& format() OMG_NOEXCEPT {
                    return m_format_;
                }

                const std::string& format() const OMG_NOEXCEPT {
                    return m_format_;
                }

                void format(const std::string& value) {
                    m_format_ = value;
                }

                void format(std::string&& value) {
                    m_format_ = std::move(value);
                }
                std::string& name() OMG_NOEXCEPT {
                    return m_name_;
                }

                const std::string& name() const OMG_NOEXCEPT {
                    return m_name_;
                }

                void name(const std::string& value) {
                    m_name_ = value;
                }

                void name(std::string&& value) {
                    m_name_ = std::move(value);
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
                UMAA::Common::Measurement::NumericGUID& destination() OMG_NOEXCEPT {
                    return m_destination_;
                }

                const UMAA::Common::Measurement::NumericGUID& destination() const OMG_NOEXCEPT {
                    return m_destination_;
                }

                void destination(const UMAA::Common::Measurement::NumericGUID& value) {
                    m_destination_ = value;
                }

                void destination(UMAA::Common::Measurement::NumericGUID&& value) {
                    m_destination_ = std::move(value);
                }
                UMAA::Common::Measurement::NumericGUID& sessionID() OMG_NOEXCEPT {
                    return m_sessionID_;
                }

                const UMAA::Common::Measurement::NumericGUID& sessionID() const OMG_NOEXCEPT {
                    return m_sessionID_;
                }

                void sessionID(const UMAA::Common::Measurement::NumericGUID& value) {
                    m_sessionID_ = value;
                }

                void sessionID(UMAA::Common::Measurement::NumericGUID&& value) {
                    m_sessionID_ = std::move(value);
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

                bool operator == (const MissionPlanCatalogCommandType& other_) const;
                bool operator != (const MissionPlanCatalogCommandType& other_) const;

                void swap(MissionPlanCatalogCommandType& other_) OMG_NOEXCEPT ;

              private:

                UMAA::Common::Enumeration::PlanActionEnumType::PlanActionEnumType m_action_;
                bool m_allocationStatus_;
                UMAA::Common::Measurement::NumericGUID m_assignedResource_;
                UMAA::Common::MaritimeEnumeration::DomainEnumType::DomainEnumType m_domain_;
                std::string m_format_;
                std::string m_name_;
                UMAA::Common::Measurement::NumericGUID m_source_;
                UMAA::Common::Measurement::NumericGUID m_destination_;
                UMAA::Common::Measurement::NumericGUID m_sessionID_;
                UMAA::Common::Measurement::DateTime m_timeStamp_;
                UMAA::Common::Measurement::NumericGUID m_missionID_;

            };

            inline void swap(MissionPlanCatalogCommandType& a, MissionPlanCatalogCommandType& b)  OMG_NOEXCEPT 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const MissionPlanCatalogCommandType& sample);

        } // namespace MissionPlanCatalogControl  
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
        struct topic_type_name< UMAA::MM::MissionPlanCatalogControl::MissionPlanCatalogCommandType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::MM::MissionPlanCatalogControl::MissionPlanCatalogCommandType";
            }
        };

        template<>
        struct is_topic_type< UMAA::MM::MissionPlanCatalogControl::MissionPlanCatalogCommandType > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< UMAA::MM::MissionPlanCatalogControl::MissionPlanCatalogCommandType > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const UMAA::MM::MissionPlanCatalogControl::MissionPlanCatalogCommandType& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(UMAA::MM::MissionPlanCatalogControl::MissionPlanCatalogCommandType& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(UMAA::MM::MissionPlanCatalogControl::MissionPlanCatalogCommandType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(UMAA::MM::MissionPlanCatalogControl::MissionPlanCatalogCommandType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

    }
}

namespace rti { 
    namespace topic {

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< UMAA::MM::MissionPlanCatalogControl::MissionPlanCatalogCommandType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< UMAA::MM::MissionPlanCatalogControl::MissionPlanCatalogCommandType > {
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

#endif // MissionPlanCatalogCommandType_308920492_hpp

