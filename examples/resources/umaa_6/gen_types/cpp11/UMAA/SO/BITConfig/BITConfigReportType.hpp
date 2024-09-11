

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from BITConfigReportType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef BITConfigReportType_459338120_hpp
#define BITConfigReportType_459338120_hpp

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
    namespace SO {
        namespace BITConfig {

            static const std::string BITConfigReportTypeTopic = "UMAA::SO::BITConfig::BITConfigReportType";

            class NDDSUSERDllExport BITConfigReportType {
              public:

                BITConfigReportType();

                BITConfigReportType(const ::UMAA::Common::MaritimeEnumeration::ContinuousTestEnumModule::ContinuousTestEnumType& continuousTestConfiguration_,const ::dds::core::optional< double >& minTimeBetweenTests_,const ::UMAA::Common::MaritimeEnumeration::PowerOnTestEnumModule::PowerOnTestEnumType& powerOnTestConfiguration_,const ::UMAA::Common::Measurement::DateTime& timeStamp_,const ::UMAA::Common::IdentifierType& source_,const ::UMAA::Common::IdentifierType& resourceID_);

                ::UMAA::Common::MaritimeEnumeration::ContinuousTestEnumModule::ContinuousTestEnumType& continuousTestConfiguration() noexcept {
                    return m_continuousTestConfiguration_;
                }

                const ::UMAA::Common::MaritimeEnumeration::ContinuousTestEnumModule::ContinuousTestEnumType& continuousTestConfiguration() const noexcept {
                    return m_continuousTestConfiguration_;
                }

                void continuousTestConfiguration(const ::UMAA::Common::MaritimeEnumeration::ContinuousTestEnumModule::ContinuousTestEnumType& value) {

                    m_continuousTestConfiguration_ = value;
                }

                void continuousTestConfiguration(::UMAA::Common::MaritimeEnumeration::ContinuousTestEnumModule::ContinuousTestEnumType&& value) {
                    m_continuousTestConfiguration_ = std::move(value);
                }
                ::dds::core::optional< double >& minTimeBetweenTests() noexcept {
                    return m_minTimeBetweenTests_;
                }

                const ::dds::core::optional< double >& minTimeBetweenTests() const noexcept {
                    return m_minTimeBetweenTests_;
                }

                void minTimeBetweenTests(const ::dds::core::optional< double >& value) {

                    m_minTimeBetweenTests_ = value;
                }

                void minTimeBetweenTests(::dds::core::optional< double >&& value) {
                    m_minTimeBetweenTests_ = std::move(value);
                }
                ::UMAA::Common::MaritimeEnumeration::PowerOnTestEnumModule::PowerOnTestEnumType& powerOnTestConfiguration() noexcept {
                    return m_powerOnTestConfiguration_;
                }

                const ::UMAA::Common::MaritimeEnumeration::PowerOnTestEnumModule::PowerOnTestEnumType& powerOnTestConfiguration() const noexcept {
                    return m_powerOnTestConfiguration_;
                }

                void powerOnTestConfiguration(const ::UMAA::Common::MaritimeEnumeration::PowerOnTestEnumModule::PowerOnTestEnumType& value) {

                    m_powerOnTestConfiguration_ = value;
                }

                void powerOnTestConfiguration(::UMAA::Common::MaritimeEnumeration::PowerOnTestEnumModule::PowerOnTestEnumType&& value) {
                    m_powerOnTestConfiguration_ = std::move(value);
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
                ::UMAA::Common::IdentifierType& resourceID() noexcept {
                    return m_resourceID_;
                }

                const ::UMAA::Common::IdentifierType& resourceID() const noexcept {
                    return m_resourceID_;
                }

                void resourceID(const ::UMAA::Common::IdentifierType& value) {

                    m_resourceID_ = value;
                }

                void resourceID(::UMAA::Common::IdentifierType&& value) {
                    m_resourceID_ = std::move(value);
                }
                bool operator == (const BITConfigReportType& other_) const;
                bool operator != (const BITConfigReportType& other_) const;

                void swap(BITConfigReportType& other_) noexcept ;

              private:

                ::UMAA::Common::MaritimeEnumeration::ContinuousTestEnumModule::ContinuousTestEnumType m_continuousTestConfiguration_;
                ::dds::core::optional< double > m_minTimeBetweenTests_;
                ::UMAA::Common::MaritimeEnumeration::PowerOnTestEnumModule::PowerOnTestEnumType m_powerOnTestConfiguration_;
                ::UMAA::Common::Measurement::DateTime m_timeStamp_;
                ::UMAA::Common::IdentifierType m_source_;
                ::UMAA::Common::IdentifierType m_resourceID_;

            };

            inline void swap(BITConfigReportType& a, BITConfigReportType& b)  noexcept 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const BITConfigReportType& sample);

        } // namespace BITConfig  
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
        struct topic_type_name< ::UMAA::SO::BITConfig::BITConfigReportType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::SO::BITConfig::BITConfigReportType";
            }
        };

        template<>
        struct is_topic_type< ::UMAA::SO::BITConfig::BITConfigReportType > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< ::UMAA::SO::BITConfig::BITConfigReportType > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const ::UMAA::SO::BITConfig::BITConfigReportType& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(::UMAA::SO::BITConfig::BITConfigReportType& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(::UMAA::SO::BITConfig::BITConfigReportType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(::UMAA::SO::BITConfig::BITConfigReportType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };
    }
}

namespace rti { 
    namespace topic {

        template<>
        struct dynamic_type< ::UMAA::SO::BITConfig::BITConfigReportType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };

        template <>
        struct extensibility< ::UMAA::SO::BITConfig::BITConfigReportType > {
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

#endif // BITConfigReportType_459338120_hpp

