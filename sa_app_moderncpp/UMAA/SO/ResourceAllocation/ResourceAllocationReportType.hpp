

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ResourceAllocationReportType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
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

            static const std::string ResourceAllocationReport_TOPIC = "UMAA::SO::ResourceAllocation::ResourceAllocationReport";

            class NDDSUSERDllExport ResourceAllocationReportType {
              public:
                ResourceAllocationReportType();

                ResourceAllocationReportType(const UMAA::Common::Measurement::NumericGUID& source,const UMAA::Common::Measurement::DateTime& timeStamp,const UMAA::Common::Measurement::NumericGUID& controlInfoSetID);

                #ifdef RTI_CXX11_RVALUE_REFERENCES
                #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
                ResourceAllocationReportType (ResourceAllocationReportType&&) = default;
                ResourceAllocationReportType& operator=(ResourceAllocationReportType&&) = default;
                ResourceAllocationReportType& operator=(const ResourceAllocationReportType&) = default;
                ResourceAllocationReportType(const ResourceAllocationReportType&) = default;
                #else
                ResourceAllocationReportType(ResourceAllocationReportType&& other_) OMG_NOEXCEPT;  
                ResourceAllocationReportType& operator=(ResourceAllocationReportType&&  other_) OMG_NOEXCEPT;
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
                UMAA::Common::Measurement::NumericGUID& controlInfoSetID() OMG_NOEXCEPT {
                    return m_controlInfoSetID_;
                }

                const UMAA::Common::Measurement::NumericGUID& controlInfoSetID() const OMG_NOEXCEPT {
                    return m_controlInfoSetID_;
                }

                void controlInfoSetID(const UMAA::Common::Measurement::NumericGUID& value) {
                    m_controlInfoSetID_ = value;
                }

                void controlInfoSetID(UMAA::Common::Measurement::NumericGUID&& value) {
                    m_controlInfoSetID_ = std::move(value);
                }

                bool operator == (const ResourceAllocationReportType& other_) const;
                bool operator != (const ResourceAllocationReportType& other_) const;

                void swap(ResourceAllocationReportType& other_) OMG_NOEXCEPT ;

              private:

                UMAA::Common::Measurement::NumericGUID m_source_;
                UMAA::Common::Measurement::DateTime m_timeStamp_;
                UMAA::Common::Measurement::NumericGUID m_controlInfoSetID_;

            };

            inline void swap(ResourceAllocationReportType& a, ResourceAllocationReportType& b)  OMG_NOEXCEPT 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const ResourceAllocationReportType& sample);

            static const std::string ResourceAllocationReport_ControlinfoSet_TOPIC = "UMAA::SO::ResourceAllocation::ResourceAllocationReport_ControlinfoSet";

            class NDDSUSERDllExport ResourceAllocationReportType_ControlinfoSet
            : public UMAA::SO::ResourceAllocation::ResourceAllocationControlInfo {
              public:
                ResourceAllocationReportType_ControlinfoSet();

                ResourceAllocationReportType_ControlinfoSet(const ::dds::core::optional< UMAA::SO::ResourceAllocation::ResourceAllocationControlSession >& controlSession,const UMAA::Common::Measurement::NumericGUID& resourceId,const UMAA::Common::Measurement::NumericGUID& controlInfoSetID,const UMAA::Common::Measurement::DateTime& controlInfoTimestamp);

                #ifdef RTI_CXX11_RVALUE_REFERENCES
                #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
                ResourceAllocationReportType_ControlinfoSet (ResourceAllocationReportType_ControlinfoSet&&) = default;
                ResourceAllocationReportType_ControlinfoSet& operator=(ResourceAllocationReportType_ControlinfoSet&&) = default;
                ResourceAllocationReportType_ControlinfoSet& operator=(const ResourceAllocationReportType_ControlinfoSet&) = default;
                ResourceAllocationReportType_ControlinfoSet(const ResourceAllocationReportType_ControlinfoSet&) = default;
                #else
                ResourceAllocationReportType_ControlinfoSet(ResourceAllocationReportType_ControlinfoSet&& other_) OMG_NOEXCEPT;  
                ResourceAllocationReportType_ControlinfoSet& operator=(ResourceAllocationReportType_ControlinfoSet&&  other_) OMG_NOEXCEPT;
                #endif
                #endif 

                UMAA::Common::Measurement::NumericGUID& controlInfoSetID() OMG_NOEXCEPT {
                    return m_controlInfoSetID_;
                }

                const UMAA::Common::Measurement::NumericGUID& controlInfoSetID() const OMG_NOEXCEPT {
                    return m_controlInfoSetID_;
                }

                void controlInfoSetID(const UMAA::Common::Measurement::NumericGUID& value) {
                    m_controlInfoSetID_ = value;
                }

                void controlInfoSetID(UMAA::Common::Measurement::NumericGUID&& value) {
                    m_controlInfoSetID_ = std::move(value);
                }
                UMAA::Common::Measurement::DateTime& controlInfoTimestamp() OMG_NOEXCEPT {
                    return m_controlInfoTimestamp_;
                }

                const UMAA::Common::Measurement::DateTime& controlInfoTimestamp() const OMG_NOEXCEPT {
                    return m_controlInfoTimestamp_;
                }

                void controlInfoTimestamp(const UMAA::Common::Measurement::DateTime& value) {
                    m_controlInfoTimestamp_ = value;
                }

                void controlInfoTimestamp(UMAA::Common::Measurement::DateTime&& value) {
                    m_controlInfoTimestamp_ = std::move(value);
                }

                bool operator == (const ResourceAllocationReportType_ControlinfoSet& other_) const;
                bool operator != (const ResourceAllocationReportType_ControlinfoSet& other_) const;

                void swap(ResourceAllocationReportType_ControlinfoSet& other_) OMG_NOEXCEPT ;

              private:

                UMAA::Common::Measurement::NumericGUID m_controlInfoSetID_;
                UMAA::Common::Measurement::DateTime m_controlInfoTimestamp_;

            };

            inline void swap(ResourceAllocationReportType_ControlinfoSet& a, ResourceAllocationReportType_ControlinfoSet& b)  OMG_NOEXCEPT 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const ResourceAllocationReportType_ControlinfoSet& sample);

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
        struct topic_type_name< UMAA::SO::ResourceAllocation::ResourceAllocationReportType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::SO::ResourceAllocation::ResourceAllocationReportType";
            }
        };

        template<>
        struct is_topic_type< UMAA::SO::ResourceAllocation::ResourceAllocationReportType > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< UMAA::SO::ResourceAllocation::ResourceAllocationReportType > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const UMAA::SO::ResourceAllocation::ResourceAllocationReportType& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(UMAA::SO::ResourceAllocation::ResourceAllocationReportType& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(UMAA::SO::ResourceAllocation::ResourceAllocationReportType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(UMAA::SO::ResourceAllocation::ResourceAllocationReportType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

        template<>
        struct topic_type_name< UMAA::SO::ResourceAllocation::ResourceAllocationReportType_ControlinfoSet > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::SO::ResourceAllocation::ResourceAllocationReportType_ControlinfoSet";
            }
        };

        template<>
        struct is_topic_type< UMAA::SO::ResourceAllocation::ResourceAllocationReportType_ControlinfoSet > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< UMAA::SO::ResourceAllocation::ResourceAllocationReportType_ControlinfoSet > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const UMAA::SO::ResourceAllocation::ResourceAllocationReportType_ControlinfoSet& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(UMAA::SO::ResourceAllocation::ResourceAllocationReportType_ControlinfoSet& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(UMAA::SO::ResourceAllocation::ResourceAllocationReportType_ControlinfoSet& sample);

            NDDSUSERDllExport 
            static void allocate_sample(UMAA::SO::ResourceAllocation::ResourceAllocationReportType_ControlinfoSet& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

    }
}

namespace rti { 
    namespace topic {

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< UMAA::SO::ResourceAllocation::ResourceAllocationReportType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< UMAA::SO::ResourceAllocation::ResourceAllocationReportType > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;                
        };

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< UMAA::SO::ResourceAllocation::ResourceAllocationReportType_ControlinfoSet > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< UMAA::SO::ResourceAllocation::ResourceAllocationReportType_ControlinfoSet > {
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

#endif // ResourceAllocationReportType_1351313255_hpp

