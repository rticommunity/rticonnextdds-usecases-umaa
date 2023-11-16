

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ResourceAllocationReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef ResourceAllocationReportType_1351313255_hpp
#define ResourceAllocationReportType_1351313255_hpp

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
#include "UMAA/SO/ResourceAllocation/ResourceAllocationControlInfo.hpp"
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif
namespace UMAA {
    namespace SO {
        namespace ResourceAllocation {

            RTI_CONSTEXPR_OR_CONST_STRING std::string ResourceAllocationReport_TOPIC = "UMAA::SO::ResourceAllocation::ResourceAllocationReport";

            class NDDSUSERDllExport ResourceAllocationReportType {
              public:

                ResourceAllocationReportType();

                ResourceAllocationReportType(const ::UMAA::Common::Measurement::NumericGUID& source_,const ::UMAA::Common::Measurement::DateTime& timeStamp_,const ::UMAA::Common::Measurement::NumericGUID& controlInfoSetID_);

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
                ::UMAA::Common::Measurement::NumericGUID& controlInfoSetID() noexcept {
                    return m_controlInfoSetID_;
                }

                const ::UMAA::Common::Measurement::NumericGUID& controlInfoSetID() const noexcept {
                    return m_controlInfoSetID_;
                }

                void controlInfoSetID(const ::UMAA::Common::Measurement::NumericGUID& value) {

                    m_controlInfoSetID_ = value;
                }

                void controlInfoSetID(::UMAA::Common::Measurement::NumericGUID&& value) {
                    m_controlInfoSetID_ = std::move(value);
                }
                bool operator == (const ResourceAllocationReportType& other_) const;
                bool operator != (const ResourceAllocationReportType& other_) const;

                void swap(ResourceAllocationReportType& other_) noexcept ;

              private:

                ::UMAA::Common::Measurement::NumericGUID m_source_ {};
                ::UMAA::Common::Measurement::DateTime m_timeStamp_;
                ::UMAA::Common::Measurement::NumericGUID m_controlInfoSetID_ {};

            };

            inline void swap(ResourceAllocationReportType& a, ResourceAllocationReportType& b)  noexcept 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const ResourceAllocationReportType& sample);

            RTI_CONSTEXPR_OR_CONST_STRING std::string ResourceAllocationReport_ControlinfoSet_TOPIC = "UMAA::SO::ResourceAllocation::ResourceAllocationReport_ControlinfoSet";

            class NDDSUSERDllExport ResourceAllocationReportType_ControlinfoSet
            : public ::UMAA::SO::ResourceAllocation::ResourceAllocationControlInfo {
              public:

                ResourceAllocationReportType_ControlinfoSet();

                ResourceAllocationReportType_ControlinfoSet(const ::dds::core::optional< ::UMAA::SO::ResourceAllocation::ResourceAllocationControlSession >& controlSession_,const ::UMAA::Common::Measurement::NumericGUID& resourceId_,const ::UMAA::Common::Measurement::NumericGUID& controlInfoSetID_,const ::UMAA::Common::Measurement::DateTime& controlInfoTimestamp_);

                ::UMAA::Common::Measurement::NumericGUID& controlInfoSetID() noexcept {
                    return m_controlInfoSetID_;
                }

                const ::UMAA::Common::Measurement::NumericGUID& controlInfoSetID() const noexcept {
                    return m_controlInfoSetID_;
                }

                void controlInfoSetID(const ::UMAA::Common::Measurement::NumericGUID& value) {

                    m_controlInfoSetID_ = value;
                }

                void controlInfoSetID(::UMAA::Common::Measurement::NumericGUID&& value) {
                    m_controlInfoSetID_ = std::move(value);
                }
                ::UMAA::Common::Measurement::DateTime& controlInfoTimestamp() noexcept {
                    return m_controlInfoTimestamp_;
                }

                const ::UMAA::Common::Measurement::DateTime& controlInfoTimestamp() const noexcept {
                    return m_controlInfoTimestamp_;
                }

                void controlInfoTimestamp(const ::UMAA::Common::Measurement::DateTime& value) {

                    m_controlInfoTimestamp_ = value;
                }

                void controlInfoTimestamp(::UMAA::Common::Measurement::DateTime&& value) {
                    m_controlInfoTimestamp_ = std::move(value);
                }
                bool operator == (const ResourceAllocationReportType_ControlinfoSet& other_) const;
                bool operator != (const ResourceAllocationReportType_ControlinfoSet& other_) const;

                void swap(ResourceAllocationReportType_ControlinfoSet& other_) noexcept ;

              private:

                ::UMAA::Common::Measurement::NumericGUID m_controlInfoSetID_ {};
                ::UMAA::Common::Measurement::DateTime m_controlInfoTimestamp_;

            };

            inline void swap(ResourceAllocationReportType_ControlinfoSet& a, ResourceAllocationReportType_ControlinfoSet& b)  noexcept 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const ResourceAllocationReportType_ControlinfoSet& sample);

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
        struct topic_type_name< ::UMAA::SO::ResourceAllocation::ResourceAllocationReportType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::SO::ResourceAllocation::ResourceAllocationReportType";
            }
        };

        template<>
        struct is_topic_type< ::UMAA::SO::ResourceAllocation::ResourceAllocationReportType > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< ::UMAA::SO::ResourceAllocation::ResourceAllocationReportType > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const ::UMAA::SO::ResourceAllocation::ResourceAllocationReportType& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(::UMAA::SO::ResourceAllocation::ResourceAllocationReportType& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(::UMAA::SO::ResourceAllocation::ResourceAllocationReportType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(::UMAA::SO::ResourceAllocation::ResourceAllocationReportType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };
        template<>
        struct topic_type_name< ::UMAA::SO::ResourceAllocation::ResourceAllocationReportType_ControlinfoSet > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::SO::ResourceAllocation::ResourceAllocationReportType_ControlinfoSet";
            }
        };

        template<>
        struct is_topic_type< ::UMAA::SO::ResourceAllocation::ResourceAllocationReportType_ControlinfoSet > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< ::UMAA::SO::ResourceAllocation::ResourceAllocationReportType_ControlinfoSet > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const ::UMAA::SO::ResourceAllocation::ResourceAllocationReportType_ControlinfoSet& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(::UMAA::SO::ResourceAllocation::ResourceAllocationReportType_ControlinfoSet& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(::UMAA::SO::ResourceAllocation::ResourceAllocationReportType_ControlinfoSet& sample);

            NDDSUSERDllExport 
            static void allocate_sample(::UMAA::SO::ResourceAllocation::ResourceAllocationReportType_ControlinfoSet& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };
    }
}

namespace rti { 
    namespace topic {

        template<>
        struct dynamic_type< ::UMAA::SO::ResourceAllocation::ResourceAllocationReportType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };

        template <>
        struct extensibility< ::UMAA::SO::ResourceAllocation::ResourceAllocationReportType > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

        template<>
        struct dynamic_type< ::UMAA::SO::ResourceAllocation::ResourceAllocationReportType_ControlinfoSet > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };

        template <>
        struct extensibility< ::UMAA::SO::ResourceAllocation::ResourceAllocationReportType_ControlinfoSet > {
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

#endif // ResourceAllocationReportType_1351313255_hpp

