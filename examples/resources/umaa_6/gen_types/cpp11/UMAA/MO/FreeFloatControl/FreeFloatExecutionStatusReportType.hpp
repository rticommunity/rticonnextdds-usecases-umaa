

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from FreeFloatExecutionStatusReportType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef FreeFloatExecutionStatusReportType_47362739_hpp
#define FreeFloatExecutionStatusReportType_47362739_hpp

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
    namespace MO {
        namespace FreeFloatControl {

            static const std::string FreeFloatExecutionStatusReportTypeTopic = "UMAA::MO::FreeFloatControl::FreeFloatExecutionStatusReportType";

            class NDDSUSERDllExport FreeFloatExecutionStatusReportType {
              public:

                FreeFloatExecutionStatusReportType();

                FreeFloatExecutionStatusReportType(const ::UMAA::Common::Measurement::DateTime& timeFreeFloatAchieved_,const ::dds::core::optional< ::UMAA::Common::Measurement::DateTime >& timeFreeFloatCompleted_,const ::UMAA::Common::Measurement::DateTime& timeStamp_,const ::UMAA::Common::IdentifierType& source_,const ::UMAA::Common::Measurement::NumericGUID& sessionID_);

                ::UMAA::Common::Measurement::DateTime& timeFreeFloatAchieved() noexcept {
                    return m_timeFreeFloatAchieved_;
                }

                const ::UMAA::Common::Measurement::DateTime& timeFreeFloatAchieved() const noexcept {
                    return m_timeFreeFloatAchieved_;
                }

                void timeFreeFloatAchieved(const ::UMAA::Common::Measurement::DateTime& value) {

                    m_timeFreeFloatAchieved_ = value;
                }

                void timeFreeFloatAchieved(::UMAA::Common::Measurement::DateTime&& value) {
                    m_timeFreeFloatAchieved_ = std::move(value);
                }
                ::dds::core::optional< ::UMAA::Common::Measurement::DateTime >& timeFreeFloatCompleted() noexcept {
                    return m_timeFreeFloatCompleted_;
                }

                const ::dds::core::optional< ::UMAA::Common::Measurement::DateTime >& timeFreeFloatCompleted() const noexcept {
                    return m_timeFreeFloatCompleted_;
                }

                void timeFreeFloatCompleted(const ::dds::core::optional< ::UMAA::Common::Measurement::DateTime >& value) {

                    m_timeFreeFloatCompleted_ = value;
                }

                void timeFreeFloatCompleted(::dds::core::optional< ::UMAA::Common::Measurement::DateTime >&& value) {
                    m_timeFreeFloatCompleted_ = std::move(value);
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
                ::UMAA::Common::Measurement::NumericGUID& sessionID() noexcept {
                    return m_sessionID_;
                }

                const ::UMAA::Common::Measurement::NumericGUID& sessionID() const noexcept {
                    return m_sessionID_;
                }

                void sessionID(const ::UMAA::Common::Measurement::NumericGUID& value) {

                    m_sessionID_ = value;
                }

                void sessionID(::UMAA::Common::Measurement::NumericGUID&& value) {
                    m_sessionID_ = std::move(value);
                }
                bool operator == (const FreeFloatExecutionStatusReportType& other_) const;
                bool operator != (const FreeFloatExecutionStatusReportType& other_) const;

                void swap(FreeFloatExecutionStatusReportType& other_) noexcept ;

              private:

                ::UMAA::Common::Measurement::DateTime m_timeFreeFloatAchieved_;
                ::dds::core::optional< ::UMAA::Common::Measurement::DateTime > m_timeFreeFloatCompleted_;
                ::UMAA::Common::Measurement::DateTime m_timeStamp_;
                ::UMAA::Common::IdentifierType m_source_;
                ::UMAA::Common::Measurement::NumericGUID m_sessionID_ {};

            };

            inline void swap(FreeFloatExecutionStatusReportType& a, FreeFloatExecutionStatusReportType& b)  noexcept 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const FreeFloatExecutionStatusReportType& sample);

        } // namespace FreeFloatControl  
    } // namespace MO  
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
        struct topic_type_name< ::UMAA::MO::FreeFloatControl::FreeFloatExecutionStatusReportType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::MO::FreeFloatControl::FreeFloatExecutionStatusReportType";
            }
        };

        template<>
        struct is_topic_type< ::UMAA::MO::FreeFloatControl::FreeFloatExecutionStatusReportType > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< ::UMAA::MO::FreeFloatControl::FreeFloatExecutionStatusReportType > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const ::UMAA::MO::FreeFloatControl::FreeFloatExecutionStatusReportType& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(::UMAA::MO::FreeFloatControl::FreeFloatExecutionStatusReportType& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(::UMAA::MO::FreeFloatControl::FreeFloatExecutionStatusReportType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(::UMAA::MO::FreeFloatControl::FreeFloatExecutionStatusReportType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };
    }
}

namespace rti { 
    namespace topic {

        template<>
        struct dynamic_type< ::UMAA::MO::FreeFloatControl::FreeFloatExecutionStatusReportType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };

        template <>
        struct extensibility< ::UMAA::MO::FreeFloatControl::FreeFloatExecutionStatusReportType > {
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

#endif // FreeFloatExecutionStatusReportType_47362739_hpp

