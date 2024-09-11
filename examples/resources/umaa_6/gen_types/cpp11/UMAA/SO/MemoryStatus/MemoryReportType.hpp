

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from MemoryReportType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef MemoryReportType_1709013464_hpp
#define MemoryReportType_1709013464_hpp

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
#include "UMAA/Common/Measurement/Measurements.hpp"
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif
namespace UMAA {
    namespace SO {
        namespace MemoryStatus {

            static const std::string MemoryReportTypeTopic = "UMAA::SO::MemoryStatus::MemoryReportType";

            class NDDSUSERDllExport MemoryReportType {
              public:

                MemoryReportType();

                MemoryReportType(const ::dds::core::optional< uint64_t >& bufferedRam_,uint64_t freeMemory_,const ::dds::core::optional< uint64_t >& freeSwap_,const ::dds::core::optional< uint64_t >& sharedMemory_,uint64_t totalMemory_,const ::dds::core::optional< uint64_t >& totalSwap_,const ::UMAA::Common::Measurement::DateTime& timeStamp_,const ::UMAA::Common::IdentifierType& source_);

                ::dds::core::optional< uint64_t >& bufferedRam() noexcept {
                    return m_bufferedRam_;
                }

                const ::dds::core::optional< uint64_t >& bufferedRam() const noexcept {
                    return m_bufferedRam_;
                }

                void bufferedRam(const ::dds::core::optional< uint64_t >& value) {

                    m_bufferedRam_ = value;
                }

                void bufferedRam(::dds::core::optional< uint64_t >&& value) {
                    m_bufferedRam_ = std::move(value);
                }
                uint64_t& freeMemory() noexcept {
                    return m_freeMemory_;
                }

                const uint64_t& freeMemory() const noexcept {
                    return m_freeMemory_;
                }

                void freeMemory(uint64_t value) {

                    m_freeMemory_ = value;
                }

                ::dds::core::optional< uint64_t >& freeSwap() noexcept {
                    return m_freeSwap_;
                }

                const ::dds::core::optional< uint64_t >& freeSwap() const noexcept {
                    return m_freeSwap_;
                }

                void freeSwap(const ::dds::core::optional< uint64_t >& value) {

                    m_freeSwap_ = value;
                }

                void freeSwap(::dds::core::optional< uint64_t >&& value) {
                    m_freeSwap_ = std::move(value);
                }
                ::dds::core::optional< uint64_t >& sharedMemory() noexcept {
                    return m_sharedMemory_;
                }

                const ::dds::core::optional< uint64_t >& sharedMemory() const noexcept {
                    return m_sharedMemory_;
                }

                void sharedMemory(const ::dds::core::optional< uint64_t >& value) {

                    m_sharedMemory_ = value;
                }

                void sharedMemory(::dds::core::optional< uint64_t >&& value) {
                    m_sharedMemory_ = std::move(value);
                }
                uint64_t& totalMemory() noexcept {
                    return m_totalMemory_;
                }

                const uint64_t& totalMemory() const noexcept {
                    return m_totalMemory_;
                }

                void totalMemory(uint64_t value) {

                    m_totalMemory_ = value;
                }

                ::dds::core::optional< uint64_t >& totalSwap() noexcept {
                    return m_totalSwap_;
                }

                const ::dds::core::optional< uint64_t >& totalSwap() const noexcept {
                    return m_totalSwap_;
                }

                void totalSwap(const ::dds::core::optional< uint64_t >& value) {

                    m_totalSwap_ = value;
                }

                void totalSwap(::dds::core::optional< uint64_t >&& value) {
                    m_totalSwap_ = std::move(value);
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
                bool operator == (const MemoryReportType& other_) const;
                bool operator != (const MemoryReportType& other_) const;

                void swap(MemoryReportType& other_) noexcept ;

              private:

                ::dds::core::optional< uint64_t > m_bufferedRam_;
                uint64_t m_freeMemory_;
                ::dds::core::optional< uint64_t > m_freeSwap_;
                ::dds::core::optional< uint64_t > m_sharedMemory_;
                uint64_t m_totalMemory_;
                ::dds::core::optional< uint64_t > m_totalSwap_;
                ::UMAA::Common::Measurement::DateTime m_timeStamp_;
                ::UMAA::Common::IdentifierType m_source_;

            };

            inline void swap(MemoryReportType& a, MemoryReportType& b)  noexcept 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const MemoryReportType& sample);

        } // namespace MemoryStatus  
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
        struct topic_type_name< ::UMAA::SO::MemoryStatus::MemoryReportType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::SO::MemoryStatus::MemoryReportType";
            }
        };

        template<>
        struct is_topic_type< ::UMAA::SO::MemoryStatus::MemoryReportType > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< ::UMAA::SO::MemoryStatus::MemoryReportType > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const ::UMAA::SO::MemoryStatus::MemoryReportType& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(::UMAA::SO::MemoryStatus::MemoryReportType& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(::UMAA::SO::MemoryStatus::MemoryReportType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(::UMAA::SO::MemoryStatus::MemoryReportType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };
    }
}

namespace rti { 
    namespace topic {

        template<>
        struct dynamic_type< ::UMAA::SO::MemoryStatus::MemoryReportType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };

        template <>
        struct extensibility< ::UMAA::SO::MemoryStatus::MemoryReportType > {
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

#endif // MemoryReportType_1709013464_hpp

