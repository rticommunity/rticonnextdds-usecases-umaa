

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from FileSystemReportType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef FileSystemReportType_1395584072_hpp
#define FileSystemReportType_1395584072_hpp

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
namespace UMAA {
    namespace SO {
        namespace FileSystemStatus {

            static const std::string FileSystemReportTypeTopic = "UMAA::SO::FileSystemStatus::FileSystemReportType";

            class NDDSUSERDllExport FileSystemReportType {
              public:

                FileSystemReportType();

                FileSystemReportType(const ::dds::core::optional< uint64_t >& availableInodes_,const ::dds::core::optional< uint64_t >& availableSpace_,const ::dds::core::optional< uint64_t >& freeInodes_,const ::dds::core::optional< uint64_t >& freeSpace_,const ::dds::core::optional< uint64_t >& inodes_,const ::dds::core::optional< int32_t >& maxFilenameLength_,const std::string& path_,bool reachable_,const ::dds::core::optional< bool >& _readOnly_,const ::dds::core::optional< uint64_t >& totalSpace_,const ::UMAA::Common::Measurement::DateTime& timeStamp_,const ::UMAA::Common::IdentifierType& source_);

                ::dds::core::optional< uint64_t >& availableInodes() noexcept {
                    return m_availableInodes_;
                }

                const ::dds::core::optional< uint64_t >& availableInodes() const noexcept {
                    return m_availableInodes_;
                }

                void availableInodes(const ::dds::core::optional< uint64_t >& value) {

                    m_availableInodes_ = value;
                }

                void availableInodes(::dds::core::optional< uint64_t >&& value) {
                    m_availableInodes_ = std::move(value);
                }
                ::dds::core::optional< uint64_t >& availableSpace() noexcept {
                    return m_availableSpace_;
                }

                const ::dds::core::optional< uint64_t >& availableSpace() const noexcept {
                    return m_availableSpace_;
                }

                void availableSpace(const ::dds::core::optional< uint64_t >& value) {

                    m_availableSpace_ = value;
                }

                void availableSpace(::dds::core::optional< uint64_t >&& value) {
                    m_availableSpace_ = std::move(value);
                }
                ::dds::core::optional< uint64_t >& freeInodes() noexcept {
                    return m_freeInodes_;
                }

                const ::dds::core::optional< uint64_t >& freeInodes() const noexcept {
                    return m_freeInodes_;
                }

                void freeInodes(const ::dds::core::optional< uint64_t >& value) {

                    m_freeInodes_ = value;
                }

                void freeInodes(::dds::core::optional< uint64_t >&& value) {
                    m_freeInodes_ = std::move(value);
                }
                ::dds::core::optional< uint64_t >& freeSpace() noexcept {
                    return m_freeSpace_;
                }

                const ::dds::core::optional< uint64_t >& freeSpace() const noexcept {
                    return m_freeSpace_;
                }

                void freeSpace(const ::dds::core::optional< uint64_t >& value) {

                    m_freeSpace_ = value;
                }

                void freeSpace(::dds::core::optional< uint64_t >&& value) {
                    m_freeSpace_ = std::move(value);
                }
                ::dds::core::optional< uint64_t >& inodes() noexcept {
                    return m_inodes_;
                }

                const ::dds::core::optional< uint64_t >& inodes() const noexcept {
                    return m_inodes_;
                }

                void inodes(const ::dds::core::optional< uint64_t >& value) {

                    m_inodes_ = value;
                }

                void inodes(::dds::core::optional< uint64_t >&& value) {
                    m_inodes_ = std::move(value);
                }
                ::dds::core::optional< int32_t >& maxFilenameLength() noexcept {
                    return m_maxFilenameLength_;
                }

                const ::dds::core::optional< int32_t >& maxFilenameLength() const noexcept {
                    return m_maxFilenameLength_;
                }

                void maxFilenameLength(const ::dds::core::optional< int32_t >& value) {

                    m_maxFilenameLength_ = value;
                }

                void maxFilenameLength(::dds::core::optional< int32_t >&& value) {
                    m_maxFilenameLength_ = std::move(value);
                }
                std::string& path() noexcept {
                    return m_path_;
                }

                const std::string& path() const noexcept {
                    return m_path_;
                }

                void path(const std::string& value) {

                    m_path_ = value;
                }

                void path(std::string&& value) {
                    m_path_ = std::move(value);
                }
                bool& reachable() noexcept {
                    return m_reachable_;
                }

                const bool& reachable() const noexcept {
                    return m_reachable_;
                }

                void reachable(bool value) {

                    m_reachable_ = value;
                }

                ::dds::core::optional< bool >& _readOnly() noexcept {
                    return m__readOnly_;
                }

                const ::dds::core::optional< bool >& _readOnly() const noexcept {
                    return m__readOnly_;
                }

                void _readOnly(const ::dds::core::optional< bool >& value) {

                    m__readOnly_ = value;
                }

                void _readOnly(::dds::core::optional< bool >&& value) {
                    m__readOnly_ = std::move(value);
                }
                ::dds::core::optional< uint64_t >& totalSpace() noexcept {
                    return m_totalSpace_;
                }

                const ::dds::core::optional< uint64_t >& totalSpace() const noexcept {
                    return m_totalSpace_;
                }

                void totalSpace(const ::dds::core::optional< uint64_t >& value) {

                    m_totalSpace_ = value;
                }

                void totalSpace(::dds::core::optional< uint64_t >&& value) {
                    m_totalSpace_ = std::move(value);
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
                bool operator == (const FileSystemReportType& other_) const;
                bool operator != (const FileSystemReportType& other_) const;

                void swap(FileSystemReportType& other_) noexcept ;

              private:

                ::dds::core::optional< uint64_t > m_availableInodes_;
                ::dds::core::optional< uint64_t > m_availableSpace_;
                ::dds::core::optional< uint64_t > m_freeInodes_;
                ::dds::core::optional< uint64_t > m_freeSpace_;
                ::dds::core::optional< uint64_t > m_inodes_;
                ::dds::core::optional< int32_t > m_maxFilenameLength_;
                std::string m_path_;
                bool m_reachable_;
                ::dds::core::optional< bool > m__readOnly_;
                ::dds::core::optional< uint64_t > m_totalSpace_;
                ::UMAA::Common::Measurement::DateTime m_timeStamp_;
                ::UMAA::Common::IdentifierType m_source_;

            };

            inline void swap(FileSystemReportType& a, FileSystemReportType& b)  noexcept 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const FileSystemReportType& sample);

        } // namespace FileSystemStatus  
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
        struct topic_type_name< ::UMAA::SO::FileSystemStatus::FileSystemReportType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::SO::FileSystemStatus::FileSystemReportType";
            }
        };

        template<>
        struct is_topic_type< ::UMAA::SO::FileSystemStatus::FileSystemReportType > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< ::UMAA::SO::FileSystemStatus::FileSystemReportType > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const ::UMAA::SO::FileSystemStatus::FileSystemReportType& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(::UMAA::SO::FileSystemStatus::FileSystemReportType& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(::UMAA::SO::FileSystemStatus::FileSystemReportType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(::UMAA::SO::FileSystemStatus::FileSystemReportType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };
    }
}

namespace rti { 
    namespace topic {

        template<>
        struct dynamic_type< ::UMAA::SO::FileSystemStatus::FileSystemReportType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };

        template <>
        struct extensibility< ::UMAA::SO::FileSystemStatus::FileSystemReportType > {
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

#endif // FileSystemReportType_1395584072_hpp

