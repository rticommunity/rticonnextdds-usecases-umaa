

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ObjectivePlanAssignmentReportType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef ObjectivePlanAssignmentReportType_1700869516_hpp
#define ObjectivePlanAssignmentReportType_1700869516_hpp

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
#include "UMAA/Common/Measurement/Measurements.hpp"
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif
namespace UMAA {
    namespace MM {
        namespace ObjectivePlanAssignmentStatus {

            static const std::string ObjectivePlanAssignmentReport_TOPIC = "UMAA::MM::ObjectivePlanAssignmentStatus::ObjectivePlanAssignmentReport";

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            // On Windows, dll-export template instantiations of standard types used by
            // other dll-exported types
            template class NDDSUSERDllExport std::allocator< UMAA::Common::Measurement::NumericGUID >;
            template class NDDSUSERDllExport std::vector< UMAA::Common::Measurement::NumericGUID >;
            #endif
            class NDDSUSERDllExport ObjectivePlanAssignmentReportType {
              public:
                ObjectivePlanAssignmentReportType();

                ObjectivePlanAssignmentReportType(const ::rti::core::bounded_sequence< UMAA::Common::Measurement::NumericGUID, 100L >& resourceIDs,const UMAA::Common::Measurement::NumericGUID& source,const UMAA::Common::Measurement::DateTime& timeStamp,const UMAA::Common::Measurement::NumericGUID& objectiveID,const UMAA::Common::Measurement::NumericGUID& taskID);

                #ifdef RTI_CXX11_RVALUE_REFERENCES
                #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
                ObjectivePlanAssignmentReportType (ObjectivePlanAssignmentReportType&&) = default;
                ObjectivePlanAssignmentReportType& operator=(ObjectivePlanAssignmentReportType&&) = default;
                ObjectivePlanAssignmentReportType& operator=(const ObjectivePlanAssignmentReportType&) = default;
                ObjectivePlanAssignmentReportType(const ObjectivePlanAssignmentReportType&) = default;
                #else
                ObjectivePlanAssignmentReportType(ObjectivePlanAssignmentReportType&& other_) OMG_NOEXCEPT;  
                ObjectivePlanAssignmentReportType& operator=(ObjectivePlanAssignmentReportType&&  other_) OMG_NOEXCEPT;
                #endif
                #endif 

                ::rti::core::bounded_sequence< UMAA::Common::Measurement::NumericGUID, 100L >& resourceIDs() OMG_NOEXCEPT {
                    return m_resourceIDs_;
                }

                const ::rti::core::bounded_sequence< UMAA::Common::Measurement::NumericGUID, 100L >& resourceIDs() const OMG_NOEXCEPT {
                    return m_resourceIDs_;
                }

                void resourceIDs(const ::rti::core::bounded_sequence< UMAA::Common::Measurement::NumericGUID, 100L >& value) {
                    m_resourceIDs_ = value;
                }

                void resourceIDs(::rti::core::bounded_sequence< UMAA::Common::Measurement::NumericGUID, 100L >&& value) {
                    m_resourceIDs_ = std::move(value);
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
                UMAA::Common::Measurement::NumericGUID& objectiveID() OMG_NOEXCEPT {
                    return m_objectiveID_;
                }

                const UMAA::Common::Measurement::NumericGUID& objectiveID() const OMG_NOEXCEPT {
                    return m_objectiveID_;
                }

                void objectiveID(const UMAA::Common::Measurement::NumericGUID& value) {
                    m_objectiveID_ = value;
                }

                void objectiveID(UMAA::Common::Measurement::NumericGUID&& value) {
                    m_objectiveID_ = std::move(value);
                }
                UMAA::Common::Measurement::NumericGUID& taskID() OMG_NOEXCEPT {
                    return m_taskID_;
                }

                const UMAA::Common::Measurement::NumericGUID& taskID() const OMG_NOEXCEPT {
                    return m_taskID_;
                }

                void taskID(const UMAA::Common::Measurement::NumericGUID& value) {
                    m_taskID_ = value;
                }

                void taskID(UMAA::Common::Measurement::NumericGUID&& value) {
                    m_taskID_ = std::move(value);
                }

                bool operator == (const ObjectivePlanAssignmentReportType& other_) const;
                bool operator != (const ObjectivePlanAssignmentReportType& other_) const;

                void swap(ObjectivePlanAssignmentReportType& other_) OMG_NOEXCEPT ;

              private:

                ::rti::core::bounded_sequence< UMAA::Common::Measurement::NumericGUID, 100L > m_resourceIDs_;
                UMAA::Common::Measurement::NumericGUID m_source_;
                UMAA::Common::Measurement::DateTime m_timeStamp_;
                UMAA::Common::Measurement::NumericGUID m_objectiveID_;
                UMAA::Common::Measurement::NumericGUID m_taskID_;

            };

            inline void swap(ObjectivePlanAssignmentReportType& a, ObjectivePlanAssignmentReportType& b)  OMG_NOEXCEPT 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const ObjectivePlanAssignmentReportType& sample);

        } // namespace ObjectivePlanAssignmentStatus  
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
        struct topic_type_name< UMAA::MM::ObjectivePlanAssignmentStatus::ObjectivePlanAssignmentReportType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::MM::ObjectivePlanAssignmentStatus::ObjectivePlanAssignmentReportType";
            }
        };

        template<>
        struct is_topic_type< UMAA::MM::ObjectivePlanAssignmentStatus::ObjectivePlanAssignmentReportType > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< UMAA::MM::ObjectivePlanAssignmentStatus::ObjectivePlanAssignmentReportType > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const UMAA::MM::ObjectivePlanAssignmentStatus::ObjectivePlanAssignmentReportType& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(UMAA::MM::ObjectivePlanAssignmentStatus::ObjectivePlanAssignmentReportType& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(UMAA::MM::ObjectivePlanAssignmentStatus::ObjectivePlanAssignmentReportType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(UMAA::MM::ObjectivePlanAssignmentStatus::ObjectivePlanAssignmentReportType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

    }
}

namespace rti { 
    namespace topic {

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< UMAA::MM::ObjectivePlanAssignmentStatus::ObjectivePlanAssignmentReportType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< UMAA::MM::ObjectivePlanAssignmentStatus::ObjectivePlanAssignmentReportType > {
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

#endif // ObjectivePlanAssignmentReportType_1700869516_hpp

