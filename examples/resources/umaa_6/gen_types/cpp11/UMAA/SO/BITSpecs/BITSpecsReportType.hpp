

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from BITSpecsReportType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef BITSpecsReportType_1810949011_hpp
#define BITSpecsReportType_1810949011_hpp

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
namespace UMAA {
    namespace SO {
        namespace BITSpecs {

            static const std::string BITSpecsReportTypeTopic = "UMAA::SO::BITSpecs::BITSpecsReportType";

            class NDDSUSERDllExport BITSpecsReportType {
              public:

                BITSpecsReportType();

                BITSpecsReportType(const ::dds::core::optional< double >& avgMinTimeBetweenContinuousTests_,bool fullContinuousTestSupported_,bool fullPowerOnTestSupported_,bool initiatedDestructiveTestSupported_,bool initiatedNonDestructiveTestSupported_,bool minTimeBetweenTestsSupported_,bool nonIntrusiveContinuousTestSupported_,bool quickPowerOnTestSupported_,const ::UMAA::Common::Measurement::DateTime& timeStamp_,const ::UMAA::Common::IdentifierType& source_,const ::UMAA::Common::IdentifierType& resourceID_);

                ::dds::core::optional< double >& avgMinTimeBetweenContinuousTests() noexcept {
                    return m_avgMinTimeBetweenContinuousTests_;
                }

                const ::dds::core::optional< double >& avgMinTimeBetweenContinuousTests() const noexcept {
                    return m_avgMinTimeBetweenContinuousTests_;
                }

                void avgMinTimeBetweenContinuousTests(const ::dds::core::optional< double >& value) {

                    m_avgMinTimeBetweenContinuousTests_ = value;
                }

                void avgMinTimeBetweenContinuousTests(::dds::core::optional< double >&& value) {
                    m_avgMinTimeBetweenContinuousTests_ = std::move(value);
                }
                bool& fullContinuousTestSupported() noexcept {
                    return m_fullContinuousTestSupported_;
                }

                const bool& fullContinuousTestSupported() const noexcept {
                    return m_fullContinuousTestSupported_;
                }

                void fullContinuousTestSupported(bool value) {

                    m_fullContinuousTestSupported_ = value;
                }

                bool& fullPowerOnTestSupported() noexcept {
                    return m_fullPowerOnTestSupported_;
                }

                const bool& fullPowerOnTestSupported() const noexcept {
                    return m_fullPowerOnTestSupported_;
                }

                void fullPowerOnTestSupported(bool value) {

                    m_fullPowerOnTestSupported_ = value;
                }

                bool& initiatedDestructiveTestSupported() noexcept {
                    return m_initiatedDestructiveTestSupported_;
                }

                const bool& initiatedDestructiveTestSupported() const noexcept {
                    return m_initiatedDestructiveTestSupported_;
                }

                void initiatedDestructiveTestSupported(bool value) {

                    m_initiatedDestructiveTestSupported_ = value;
                }

                bool& initiatedNonDestructiveTestSupported() noexcept {
                    return m_initiatedNonDestructiveTestSupported_;
                }

                const bool& initiatedNonDestructiveTestSupported() const noexcept {
                    return m_initiatedNonDestructiveTestSupported_;
                }

                void initiatedNonDestructiveTestSupported(bool value) {

                    m_initiatedNonDestructiveTestSupported_ = value;
                }

                bool& minTimeBetweenTestsSupported() noexcept {
                    return m_minTimeBetweenTestsSupported_;
                }

                const bool& minTimeBetweenTestsSupported() const noexcept {
                    return m_minTimeBetweenTestsSupported_;
                }

                void minTimeBetweenTestsSupported(bool value) {

                    m_minTimeBetweenTestsSupported_ = value;
                }

                bool& nonIntrusiveContinuousTestSupported() noexcept {
                    return m_nonIntrusiveContinuousTestSupported_;
                }

                const bool& nonIntrusiveContinuousTestSupported() const noexcept {
                    return m_nonIntrusiveContinuousTestSupported_;
                }

                void nonIntrusiveContinuousTestSupported(bool value) {

                    m_nonIntrusiveContinuousTestSupported_ = value;
                }

                bool& quickPowerOnTestSupported() noexcept {
                    return m_quickPowerOnTestSupported_;
                }

                const bool& quickPowerOnTestSupported() const noexcept {
                    return m_quickPowerOnTestSupported_;
                }

                void quickPowerOnTestSupported(bool value) {

                    m_quickPowerOnTestSupported_ = value;
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
                bool operator == (const BITSpecsReportType& other_) const;
                bool operator != (const BITSpecsReportType& other_) const;

                void swap(BITSpecsReportType& other_) noexcept ;

              private:

                ::dds::core::optional< double > m_avgMinTimeBetweenContinuousTests_;
                bool m_fullContinuousTestSupported_;
                bool m_fullPowerOnTestSupported_;
                bool m_initiatedDestructiveTestSupported_;
                bool m_initiatedNonDestructiveTestSupported_;
                bool m_minTimeBetweenTestsSupported_;
                bool m_nonIntrusiveContinuousTestSupported_;
                bool m_quickPowerOnTestSupported_;
                ::UMAA::Common::Measurement::DateTime m_timeStamp_;
                ::UMAA::Common::IdentifierType m_source_;
                ::UMAA::Common::IdentifierType m_resourceID_;

            };

            inline void swap(BITSpecsReportType& a, BITSpecsReportType& b)  noexcept 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const BITSpecsReportType& sample);

        } // namespace BITSpecs  
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
        struct topic_type_name< ::UMAA::SO::BITSpecs::BITSpecsReportType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::SO::BITSpecs::BITSpecsReportType";
            }
        };

        template<>
        struct is_topic_type< ::UMAA::SO::BITSpecs::BITSpecsReportType > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< ::UMAA::SO::BITSpecs::BITSpecsReportType > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const ::UMAA::SO::BITSpecs::BITSpecsReportType& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(::UMAA::SO::BITSpecs::BITSpecsReportType& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(::UMAA::SO::BITSpecs::BITSpecsReportType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(::UMAA::SO::BITSpecs::BITSpecsReportType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };
    }
}

namespace rti { 
    namespace topic {

        template<>
        struct dynamic_type< ::UMAA::SO::BITSpecs::BITSpecsReportType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };

        template <>
        struct extensibility< ::UMAA::SO::BITSpecs::BITSpecsReportType > {
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

#endif // BITSpecsReportType_1810949011_hpp

