

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ResourceAllocationConfigReportType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef ResourceAllocationConfigReportType_497199367_hpp
#define ResourceAllocationConfigReportType_497199367_hpp

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
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
#include "UMAA/SO/ResourceAllocation/ResourceAllocationDefinitionType.hpp"
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif
namespace UMAA {
    namespace SO {
        namespace ResourceAllocation {

            static const std::string ResourceAllocationConfigReport_TOPIC = "UMAA::SO::ResourceAllocation::ResourceAllocationConfigReport";

            class NDDSUSERDllExport ResourceAllocationConfigReportType {
              public:
                ResourceAllocationConfigReportType();

                ResourceAllocationConfigReportType(const UMAA::Common::Measurement::NumericGUID& source,const UMAA::Common::Measurement::DateTime& timeStamp,const UMAA::Common::Measurement::NumericGUID& resourcesSetID);

                #ifdef RTI_CXX11_RVALUE_REFERENCES
                #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
                ResourceAllocationConfigReportType (ResourceAllocationConfigReportType&&) = default;
                ResourceAllocationConfigReportType& operator=(ResourceAllocationConfigReportType&&) = default;
                ResourceAllocationConfigReportType& operator=(const ResourceAllocationConfigReportType&) = default;
                ResourceAllocationConfigReportType(const ResourceAllocationConfigReportType&) = default;
                #else
                ResourceAllocationConfigReportType(ResourceAllocationConfigReportType&& other_) OMG_NOEXCEPT;  
                ResourceAllocationConfigReportType& operator=(ResourceAllocationConfigReportType&&  other_) OMG_NOEXCEPT;
                #endif
                #endif 

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
                UMAA::Common::Measurement::NumericGUID& resourcesSetID() OMG_NOEXCEPT {
                    return m_resourcesSetID_;
                }

                const UMAA::Common::Measurement::NumericGUID& resourcesSetID() const OMG_NOEXCEPT {
                    return m_resourcesSetID_;
                }

                void resourcesSetID(const UMAA::Common::Measurement::NumericGUID& value) {
                    m_resourcesSetID_ = value;
                }

                void resourcesSetID(UMAA::Common::Measurement::NumericGUID&& value) {
                    m_resourcesSetID_ = std::move(value);
                }

                bool operator == (const ResourceAllocationConfigReportType& other_) const;
                bool operator != (const ResourceAllocationConfigReportType& other_) const;

                void swap(ResourceAllocationConfigReportType& other_) OMG_NOEXCEPT ;

              private:

                UMAA::Common::Measurement::NumericGUID m_source_;
                UMAA::Common::Measurement::DateTime m_timeStamp_;
                UMAA::Common::Measurement::NumericGUID m_resourcesSetID_;

            };

            inline void swap(ResourceAllocationConfigReportType& a, ResourceAllocationConfigReportType& b)  OMG_NOEXCEPT 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const ResourceAllocationConfigReportType& sample);

            static const std::string ResourceAllocationConfigReport_ResourcesSet_TOPIC = "UMAA::SO::ResourceAllocation::ResourceAllocationConfigReport_ResourcesSet";

            class NDDSUSERDllExport ResourceAllocationConfigReportType_ResourcesSet
            : public UMAA::SO::ResourceAllocation::ResourceAllocationDefinitionType {
              public:
                ResourceAllocationConfigReportType_ResourcesSet();

                ResourceAllocationConfigReportType_ResourcesSet(const ::rti::core::bounded_sequence< UMAA::Common::Measurement::NumericGUID, 100L >& relatedSources,const UMAA::Common::Measurement::NumericGUID& resourceId,const UMAA::Common::Measurement::NumericGUID& resourcesSetID,const UMAA::Common::Measurement::DateTime& resourcesTimestamp);

                #ifdef RTI_CXX11_RVALUE_REFERENCES
                #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
                ResourceAllocationConfigReportType_ResourcesSet (ResourceAllocationConfigReportType_ResourcesSet&&) = default;
                ResourceAllocationConfigReportType_ResourcesSet& operator=(ResourceAllocationConfigReportType_ResourcesSet&&) = default;
                ResourceAllocationConfigReportType_ResourcesSet& operator=(const ResourceAllocationConfigReportType_ResourcesSet&) = default;
                ResourceAllocationConfigReportType_ResourcesSet(const ResourceAllocationConfigReportType_ResourcesSet&) = default;
                #else
                ResourceAllocationConfigReportType_ResourcesSet(ResourceAllocationConfigReportType_ResourcesSet&& other_) OMG_NOEXCEPT;  
                ResourceAllocationConfigReportType_ResourcesSet& operator=(ResourceAllocationConfigReportType_ResourcesSet&&  other_) OMG_NOEXCEPT;
                #endif
                #endif 

                UMAA::Common::Measurement::NumericGUID& resourcesSetID() OMG_NOEXCEPT {
                    return m_resourcesSetID_;
                }

                const UMAA::Common::Measurement::NumericGUID& resourcesSetID() const OMG_NOEXCEPT {
                    return m_resourcesSetID_;
                }

                void resourcesSetID(const UMAA::Common::Measurement::NumericGUID& value) {
                    m_resourcesSetID_ = value;
                }

                void resourcesSetID(UMAA::Common::Measurement::NumericGUID&& value) {
                    m_resourcesSetID_ = std::move(value);
                }
                UMAA::Common::Measurement::DateTime& resourcesTimestamp() OMG_NOEXCEPT {
                    return m_resourcesTimestamp_;
                }

                const UMAA::Common::Measurement::DateTime& resourcesTimestamp() const OMG_NOEXCEPT {
                    return m_resourcesTimestamp_;
                }

                void resourcesTimestamp(const UMAA::Common::Measurement::DateTime& value) {
                    m_resourcesTimestamp_ = value;
                }

                void resourcesTimestamp(UMAA::Common::Measurement::DateTime&& value) {
                    m_resourcesTimestamp_ = std::move(value);
                }

                bool operator == (const ResourceAllocationConfigReportType_ResourcesSet& other_) const;
                bool operator != (const ResourceAllocationConfigReportType_ResourcesSet& other_) const;

                void swap(ResourceAllocationConfigReportType_ResourcesSet& other_) OMG_NOEXCEPT ;

              private:

                UMAA::Common::Measurement::NumericGUID m_resourcesSetID_;
                UMAA::Common::Measurement::DateTime m_resourcesTimestamp_;

            };

            inline void swap(ResourceAllocationConfigReportType_ResourcesSet& a, ResourceAllocationConfigReportType_ResourcesSet& b)  OMG_NOEXCEPT 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const ResourceAllocationConfigReportType_ResourcesSet& sample);

        } // namespace ResourceAllocation  
    } // namespace SO  
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
        struct topic_type_name< UMAA::SO::ResourceAllocation::ResourceAllocationConfigReportType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::SO::ResourceAllocation::ResourceAllocationConfigReportType";
            }
        };

        template<>
        struct is_topic_type< UMAA::SO::ResourceAllocation::ResourceAllocationConfigReportType > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< UMAA::SO::ResourceAllocation::ResourceAllocationConfigReportType > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const UMAA::SO::ResourceAllocation::ResourceAllocationConfigReportType& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(UMAA::SO::ResourceAllocation::ResourceAllocationConfigReportType& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(UMAA::SO::ResourceAllocation::ResourceAllocationConfigReportType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(UMAA::SO::ResourceAllocation::ResourceAllocationConfigReportType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

        template<>
        struct topic_type_name< UMAA::SO::ResourceAllocation::ResourceAllocationConfigReportType_ResourcesSet > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::SO::ResourceAllocation::ResourceAllocationConfigReportType_ResourcesSet";
            }
        };

        template<>
        struct is_topic_type< UMAA::SO::ResourceAllocation::ResourceAllocationConfigReportType_ResourcesSet > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< UMAA::SO::ResourceAllocation::ResourceAllocationConfigReportType_ResourcesSet > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const UMAA::SO::ResourceAllocation::ResourceAllocationConfigReportType_ResourcesSet& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(UMAA::SO::ResourceAllocation::ResourceAllocationConfigReportType_ResourcesSet& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(UMAA::SO::ResourceAllocation::ResourceAllocationConfigReportType_ResourcesSet& sample);

            NDDSUSERDllExport 
            static void allocate_sample(UMAA::SO::ResourceAllocation::ResourceAllocationConfigReportType_ResourcesSet& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

    }
}

namespace rti { 
    namespace topic {

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< UMAA::SO::ResourceAllocation::ResourceAllocationConfigReportType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< UMAA::SO::ResourceAllocation::ResourceAllocationConfigReportType > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;                
        };

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< UMAA::SO::ResourceAllocation::ResourceAllocationConfigReportType_ResourcesSet > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< UMAA::SO::ResourceAllocation::ResourceAllocationConfigReportType_ResourcesSet > {
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

#endif // ResourceAllocationConfigReportType_497199367_hpp

