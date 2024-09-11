

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ContactFilterConfigCommandType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef ContactFilterConfigCommandType_754076349_hpp
#define ContactFilterConfigCommandType_754076349_hpp

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
    namespace SA {
        namespace ContactFilterConfig {

            static const std::string ContactFilterConfigCommandTypeTopic = "UMAA::SA::ContactFilterConfig::ContactFilterConfigCommandType";

            class NDDSUSERDllExport ContactFilterConfigCommandType {
              public:

                ContactFilterConfigCommandType();

                ContactFilterConfigCommandType(double bearingChangeLimit_,double headingChangeLimit_,const ::UMAA::Common::Measurement::NumericGUID& messageFilterID_,double noChangeTimerUpdate_,double positionChangeLimit_,double rangeChangeLimit_,double speedChangeLimit_,double withinRangeofOwnship_,const ::UMAA::Common::Measurement::DateTime& timeStamp_,const ::UMAA::Common::IdentifierType& source_,const ::UMAA::Common::Measurement::NumericGUID& sessionID_,const ::UMAA::Common::IdentifierType& destination_);

                double& bearingChangeLimit() noexcept {
                    return m_bearingChangeLimit_;
                }

                const double& bearingChangeLimit() const noexcept {
                    return m_bearingChangeLimit_;
                }

                void bearingChangeLimit(double value) {

                    m_bearingChangeLimit_ = value;
                }

                double& headingChangeLimit() noexcept {
                    return m_headingChangeLimit_;
                }

                const double& headingChangeLimit() const noexcept {
                    return m_headingChangeLimit_;
                }

                void headingChangeLimit(double value) {

                    m_headingChangeLimit_ = value;
                }

                ::UMAA::Common::Measurement::NumericGUID& messageFilterID() noexcept {
                    return m_messageFilterID_;
                }

                const ::UMAA::Common::Measurement::NumericGUID& messageFilterID() const noexcept {
                    return m_messageFilterID_;
                }

                void messageFilterID(const ::UMAA::Common::Measurement::NumericGUID& value) {

                    m_messageFilterID_ = value;
                }

                void messageFilterID(::UMAA::Common::Measurement::NumericGUID&& value) {
                    m_messageFilterID_ = std::move(value);
                }
                double& noChangeTimerUpdate() noexcept {
                    return m_noChangeTimerUpdate_;
                }

                const double& noChangeTimerUpdate() const noexcept {
                    return m_noChangeTimerUpdate_;
                }

                void noChangeTimerUpdate(double value) {

                    m_noChangeTimerUpdate_ = value;
                }

                double& positionChangeLimit() noexcept {
                    return m_positionChangeLimit_;
                }

                const double& positionChangeLimit() const noexcept {
                    return m_positionChangeLimit_;
                }

                void positionChangeLimit(double value) {

                    m_positionChangeLimit_ = value;
                }

                double& rangeChangeLimit() noexcept {
                    return m_rangeChangeLimit_;
                }

                const double& rangeChangeLimit() const noexcept {
                    return m_rangeChangeLimit_;
                }

                void rangeChangeLimit(double value) {

                    m_rangeChangeLimit_ = value;
                }

                double& speedChangeLimit() noexcept {
                    return m_speedChangeLimit_;
                }

                const double& speedChangeLimit() const noexcept {
                    return m_speedChangeLimit_;
                }

                void speedChangeLimit(double value) {

                    m_speedChangeLimit_ = value;
                }

                double& withinRangeofOwnship() noexcept {
                    return m_withinRangeofOwnship_;
                }

                const double& withinRangeofOwnship() const noexcept {
                    return m_withinRangeofOwnship_;
                }

                void withinRangeofOwnship(double value) {

                    m_withinRangeofOwnship_ = value;
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
                ::UMAA::Common::IdentifierType& destination() noexcept {
                    return m_destination_;
                }

                const ::UMAA::Common::IdentifierType& destination() const noexcept {
                    return m_destination_;
                }

                void destination(const ::UMAA::Common::IdentifierType& value) {

                    m_destination_ = value;
                }

                void destination(::UMAA::Common::IdentifierType&& value) {
                    m_destination_ = std::move(value);
                }
                bool operator == (const ContactFilterConfigCommandType& other_) const;
                bool operator != (const ContactFilterConfigCommandType& other_) const;

                void swap(ContactFilterConfigCommandType& other_) noexcept ;

              private:

                double m_bearingChangeLimit_;
                double m_headingChangeLimit_;
                ::UMAA::Common::Measurement::NumericGUID m_messageFilterID_ {};
                double m_noChangeTimerUpdate_;
                double m_positionChangeLimit_;
                double m_rangeChangeLimit_;
                double m_speedChangeLimit_;
                double m_withinRangeofOwnship_;
                ::UMAA::Common::Measurement::DateTime m_timeStamp_;
                ::UMAA::Common::IdentifierType m_source_;
                ::UMAA::Common::Measurement::NumericGUID m_sessionID_ {};
                ::UMAA::Common::IdentifierType m_destination_;

            };

            inline void swap(ContactFilterConfigCommandType& a, ContactFilterConfigCommandType& b)  noexcept 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const ContactFilterConfigCommandType& sample);

        } // namespace ContactFilterConfig  
    } // namespace SA  
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
        struct topic_type_name< ::UMAA::SA::ContactFilterConfig::ContactFilterConfigCommandType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::SA::ContactFilterConfig::ContactFilterConfigCommandType";
            }
        };

        template<>
        struct is_topic_type< ::UMAA::SA::ContactFilterConfig::ContactFilterConfigCommandType > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< ::UMAA::SA::ContactFilterConfig::ContactFilterConfigCommandType > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const ::UMAA::SA::ContactFilterConfig::ContactFilterConfigCommandType& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(::UMAA::SA::ContactFilterConfig::ContactFilterConfigCommandType& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(::UMAA::SA::ContactFilterConfig::ContactFilterConfigCommandType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(::UMAA::SA::ContactFilterConfig::ContactFilterConfigCommandType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };
    }
}

namespace rti { 
    namespace topic {

        template<>
        struct dynamic_type< ::UMAA::SA::ContactFilterConfig::ContactFilterConfigCommandType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };

        template <>
        struct extensibility< ::UMAA::SA::ContactFilterConfig::ContactFilterConfigCommandType > {
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

#endif // ContactFilterConfigCommandType_754076349_hpp

