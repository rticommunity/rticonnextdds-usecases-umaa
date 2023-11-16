

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ResourceAllocationPriorityReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef ResourceAllocationPriorityReportType_1546273215_hpp
#define ResourceAllocationPriorityReportType_1546273215_hpp

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
#include "UMAA/SO/ResourceAllocation/ResourceAllocationPriorityInfo.hpp"
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif
namespace UMAA {
    namespace SO {
        namespace ResourceAllocation {

            RTI_CONSTEXPR_OR_CONST_STRING std::string ResourceAllocationPriorityReport_TOPIC = "UMAA::SO::ResourceAllocation::ResourceAllocationPriorityReport";

            class NDDSUSERDllExport ResourceAllocationPriorityReportType {
              public:

                ResourceAllocationPriorityReportType();

                ResourceAllocationPriorityReportType(const ::UMAA::Common::Measurement::NumericGUID& source_,const ::UMAA::Common::Measurement::DateTime& timeStamp_,const ::UMAA::Common::Measurement::NumericGUID& prioritiesSetID_);

                ::UMAA::Common::Measurement::NumericGUID& source() noexcept {
                    return m_source_;
                }

                const ::UMAA::Common::Measurement::NumericGUID& source() const noexcept {
                    return m_source_;
                }

                void source(const ::UMAA::Common::Measurement::NumericGUID& value) {

                    m_source_ = value;
                }

                void source(::UMAA::Common::Measurement::NumericGUID&& value) {
                    m_source_ = std::move(value);
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
                ::UMAA::Common::Measurement::NumericGUID& prioritiesSetID() noexcept {
                    return m_prioritiesSetID_;
                }

                const ::UMAA::Common::Measurement::NumericGUID& prioritiesSetID() const noexcept {
                    return m_prioritiesSetID_;
                }

                void prioritiesSetID(const ::UMAA::Common::Measurement::NumericGUID& value) {

                    m_prioritiesSetID_ = value;
                }

                void prioritiesSetID(::UMAA::Common::Measurement::NumericGUID&& value) {
                    m_prioritiesSetID_ = std::move(value);
                }
                bool operator == (const ResourceAllocationPriorityReportType& other_) const;
                bool operator != (const ResourceAllocationPriorityReportType& other_) const;

                void swap(ResourceAllocationPriorityReportType& other_) noexcept ;

              private:

                ::UMAA::Common::Measurement::NumericGUID m_source_ {};
                ::UMAA::Common::Measurement::DateTime m_timeStamp_;
                ::UMAA::Common::Measurement::NumericGUID m_prioritiesSetID_ {};

            };

            inline void swap(ResourceAllocationPriorityReportType& a, ResourceAllocationPriorityReportType& b)  noexcept 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const ResourceAllocationPriorityReportType& sample);

            RTI_CONSTEXPR_OR_CONST_STRING std::string ResourceAllocationPriorityReport_PrioritiesSet_TOPIC = "UMAA::SO::ResourceAllocation::ResourceAllocationPriorityReport_PrioritiesSet";

            class NDDSUSERDllExport ResourceAllocationPriorityReportType_PrioritiesSet
            : public ::UMAA::SO::ResourceAllocation::ResourceAllocationPriorityInfo {
              public:

                ResourceAllocationPriorityReportType_PrioritiesSet();

                ResourceAllocationPriorityReportType_PrioritiesSet(const ::rti::core::bounded_sequence< ::UMAA::Common::Measurement::NumericGUID, 100L >& priorities_,const ::UMAA::Common::Measurement::NumericGUID& resourceId_,const ::UMAA::Common::Measurement::NumericGUID& prioritiesSetID_,const ::UMAA::Common::Measurement::DateTime& prioritiesTimestamp_);

                ::UMAA::Common::Measurement::NumericGUID& prioritiesSetID() noexcept {
                    return m_prioritiesSetID_;
                }

                const ::UMAA::Common::Measurement::NumericGUID& prioritiesSetID() const noexcept {
                    return m_prioritiesSetID_;
                }

                void prioritiesSetID(const ::UMAA::Common::Measurement::NumericGUID& value) {

                    m_prioritiesSetID_ = value;
                }

                void prioritiesSetID(::UMAA::Common::Measurement::NumericGUID&& value) {
                    m_prioritiesSetID_ = std::move(value);
                }
                ::UMAA::Common::Measurement::DateTime& prioritiesTimestamp() noexcept {
                    return m_prioritiesTimestamp_;
                }

                const ::UMAA::Common::Measurement::DateTime& prioritiesTimestamp() const noexcept {
                    return m_prioritiesTimestamp_;
                }

                void prioritiesTimestamp(const ::UMAA::Common::Measurement::DateTime& value) {

                    m_prioritiesTimestamp_ = value;
                }

                void prioritiesTimestamp(::UMAA::Common::Measurement::DateTime&& value) {
                    m_prioritiesTimestamp_ = std::move(value);
                }
                bool operator == (const ResourceAllocationPriorityReportType_PrioritiesSet& other_) const;
                bool operator != (const ResourceAllocationPriorityReportType_PrioritiesSet& other_) const;

                void swap(ResourceAllocationPriorityReportType_PrioritiesSet& other_) noexcept ;

              private:

                ::UMAA::Common::Measurement::NumericGUID m_prioritiesSetID_ {};
                ::UMAA::Common::Measurement::DateTime m_prioritiesTimestamp_;

            };

            inline void swap(ResourceAllocationPriorityReportType_PrioritiesSet& a, ResourceAllocationPriorityReportType_PrioritiesSet& b)  noexcept 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const ResourceAllocationPriorityReportType_PrioritiesSet& sample);

        } // namespace ResourceAllocation  
    } // namespace SO  
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
        struct topic_type_name< ::UMAA::SO::ResourceAllocation::ResourceAllocationPriorityReportType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::SO::ResourceAllocation::ResourceAllocationPriorityReportType";
            }
        };

        template<>
        struct is_topic_type< ::UMAA::SO::ResourceAllocation::ResourceAllocationPriorityReportType > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< ::UMAA::SO::ResourceAllocation::ResourceAllocationPriorityReportType > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const ::UMAA::SO::ResourceAllocation::ResourceAllocationPriorityReportType& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(::UMAA::SO::ResourceAllocation::ResourceAllocationPriorityReportType& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(::UMAA::SO::ResourceAllocation::ResourceAllocationPriorityReportType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(::UMAA::SO::ResourceAllocation::ResourceAllocationPriorityReportType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };
        template<>
        struct topic_type_name< ::UMAA::SO::ResourceAllocation::ResourceAllocationPriorityReportType_PrioritiesSet > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::SO::ResourceAllocation::ResourceAllocationPriorityReportType_PrioritiesSet";
            }
        };

        template<>
        struct is_topic_type< ::UMAA::SO::ResourceAllocation::ResourceAllocationPriorityReportType_PrioritiesSet > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< ::UMAA::SO::ResourceAllocation::ResourceAllocationPriorityReportType_PrioritiesSet > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const ::UMAA::SO::ResourceAllocation::ResourceAllocationPriorityReportType_PrioritiesSet& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(::UMAA::SO::ResourceAllocation::ResourceAllocationPriorityReportType_PrioritiesSet& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(::UMAA::SO::ResourceAllocation::ResourceAllocationPriorityReportType_PrioritiesSet& sample);

            NDDSUSERDllExport 
            static void allocate_sample(::UMAA::SO::ResourceAllocation::ResourceAllocationPriorityReportType_PrioritiesSet& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };
    }
}

namespace rti { 
    namespace topic {

        template<>
        struct dynamic_type< ::UMAA::SO::ResourceAllocation::ResourceAllocationPriorityReportType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };

        template <>
        struct extensibility< ::UMAA::SO::ResourceAllocation::ResourceAllocationPriorityReportType > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

        template<>
        struct dynamic_type< ::UMAA::SO::ResourceAllocation::ResourceAllocationPriorityReportType_PrioritiesSet > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };

        template <>
        struct extensibility< ::UMAA::SO::ResourceAllocation::ResourceAllocationPriorityReportType_PrioritiesSet > {
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

#endif // ResourceAllocationPriorityReportType_1546273215_hpp

