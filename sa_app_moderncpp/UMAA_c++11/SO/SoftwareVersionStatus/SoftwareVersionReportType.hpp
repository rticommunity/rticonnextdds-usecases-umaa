

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from SoftwareVersionReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef SoftwareVersionReportType_1126667748_hpp
#define SoftwareVersionReportType_1126667748_hpp

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
#include "UMAA/Common/PrimitiveConstrained/ConstrainedTypes.hpp"
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif
namespace UMAA {
    namespace SO {
        namespace SoftwareVersionStatus {

            RTI_CONSTEXPR_OR_CONST_STRING std::string SoftwareVersionReport_TOPIC = "UMAA::SO::SoftwareVersionStatus::SoftwareVersionReport";

            class NDDSUSERDllExport SoftwareVersionReportType {
              public:

                SoftwareVersionReportType();

                SoftwareVersionReportType(const std::string& buildID_,const std::string& copyright_,const ::UMAA::Common::Measurement::NumericGUID& name_,const std::string& softwareDescription_,const std::string& version_,const ::UMAA::Common::Measurement::NumericGUID& source_,const ::UMAA::Common::Measurement::DateTime& timeStamp_,const ::UMAA::Common::Measurement::NumericGUID& softwareID_);

                std::string& buildID() noexcept {
                    return m_buildID_;
                }

                const std::string& buildID() const noexcept {
                    return m_buildID_;
                }

                void buildID(const std::string& value) {

                    m_buildID_ = value;
                }

                void buildID(std::string&& value) {
                    m_buildID_ = std::move(value);
                }
                std::string& copyright() noexcept {
                    return m_copyright_;
                }

                const std::string& copyright() const noexcept {
                    return m_copyright_;
                }

                void copyright(const std::string& value) {

                    m_copyright_ = value;
                }

                void copyright(std::string&& value) {
                    m_copyright_ = std::move(value);
                }
                ::UMAA::Common::Measurement::NumericGUID& name() noexcept {
                    return m_name_;
                }

                const ::UMAA::Common::Measurement::NumericGUID& name() const noexcept {
                    return m_name_;
                }

                void name(const ::UMAA::Common::Measurement::NumericGUID& value) {

                    m_name_ = value;
                }

                void name(::UMAA::Common::Measurement::NumericGUID&& value) {
                    m_name_ = std::move(value);
                }
                std::string& softwareDescription() noexcept {
                    return m_softwareDescription_;
                }

                const std::string& softwareDescription() const noexcept {
                    return m_softwareDescription_;
                }

                void softwareDescription(const std::string& value) {

                    m_softwareDescription_ = value;
                }

                void softwareDescription(std::string&& value) {
                    m_softwareDescription_ = std::move(value);
                }
                std::string& version() noexcept {
                    return m_version_;
                }

                const std::string& version() const noexcept {
                    return m_version_;
                }

                void version(const std::string& value) {

                    m_version_ = value;
                }

                void version(std::string&& value) {
                    m_version_ = std::move(value);
                }
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
                ::UMAA::Common::Measurement::NumericGUID& softwareID() noexcept {
                    return m_softwareID_;
                }

                const ::UMAA::Common::Measurement::NumericGUID& softwareID() const noexcept {
                    return m_softwareID_;
                }

                void softwareID(const ::UMAA::Common::Measurement::NumericGUID& value) {

                    m_softwareID_ = value;
                }

                void softwareID(::UMAA::Common::Measurement::NumericGUID&& value) {
                    m_softwareID_ = std::move(value);
                }
                bool operator == (const SoftwareVersionReportType& other_) const;
                bool operator != (const SoftwareVersionReportType& other_) const;

                void swap(SoftwareVersionReportType& other_) noexcept ;

              private:

                std::string m_buildID_;
                std::string m_copyright_;
                ::UMAA::Common::Measurement::NumericGUID m_name_ {};
                std::string m_softwareDescription_;
                std::string m_version_;
                ::UMAA::Common::Measurement::NumericGUID m_source_ {};
                ::UMAA::Common::Measurement::DateTime m_timeStamp_;
                ::UMAA::Common::Measurement::NumericGUID m_softwareID_ {};

            };

            inline void swap(SoftwareVersionReportType& a, SoftwareVersionReportType& b)  noexcept 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const SoftwareVersionReportType& sample);

        } // namespace SoftwareVersionStatus  
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
        struct topic_type_name< ::UMAA::SO::SoftwareVersionStatus::SoftwareVersionReportType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::SO::SoftwareVersionStatus::SoftwareVersionReportType";
            }
        };

        template<>
        struct is_topic_type< ::UMAA::SO::SoftwareVersionStatus::SoftwareVersionReportType > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< ::UMAA::SO::SoftwareVersionStatus::SoftwareVersionReportType > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const ::UMAA::SO::SoftwareVersionStatus::SoftwareVersionReportType& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(::UMAA::SO::SoftwareVersionStatus::SoftwareVersionReportType& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(::UMAA::SO::SoftwareVersionStatus::SoftwareVersionReportType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(::UMAA::SO::SoftwareVersionStatus::SoftwareVersionReportType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };
    }
}

namespace rti { 
    namespace topic {

        template<>
        struct dynamic_type< ::UMAA::SO::SoftwareVersionStatus::SoftwareVersionReportType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };

        template <>
        struct extensibility< ::UMAA::SO::SoftwareVersionStatus::SoftwareVersionReportType > {
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

#endif // SoftwareVersionReportType_1126667748_hpp

