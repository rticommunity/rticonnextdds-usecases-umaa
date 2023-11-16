

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ContactReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef ContactReportType_494622691_hpp
#define ContactReportType_494622691_hpp

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
#include "UMAA/SA/ContactStatus/ContactType.hpp"
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif
namespace UMAA {
    namespace SA {
        namespace ContactStatus {

            RTI_CONSTEXPR_OR_CONST_STRING std::string ContactReport_TOPIC = "UMAA::SA::ContactStatus::ContactReport";

            class NDDSUSERDllExport ContactReportType {
              public:

                ContactReportType();

                ContactReportType(const ::UMAA::Common::Measurement::NumericGUID& source_,const ::UMAA::Common::Measurement::DateTime& timeStamp_,const ::UMAA::Common::Measurement::NumericGUID& contactsSetID_);

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
                ::UMAA::Common::Measurement::NumericGUID& contactsSetID() noexcept {
                    return m_contactsSetID_;
                }

                const ::UMAA::Common::Measurement::NumericGUID& contactsSetID() const noexcept {
                    return m_contactsSetID_;
                }

                void contactsSetID(const ::UMAA::Common::Measurement::NumericGUID& value) {

                    m_contactsSetID_ = value;
                }

                void contactsSetID(::UMAA::Common::Measurement::NumericGUID&& value) {
                    m_contactsSetID_ = std::move(value);
                }
                bool operator == (const ContactReportType& other_) const;
                bool operator != (const ContactReportType& other_) const;

                void swap(ContactReportType& other_) noexcept ;

              private:

                ::UMAA::Common::Measurement::NumericGUID m_source_ {};
                ::UMAA::Common::Measurement::DateTime m_timeStamp_;
                ::UMAA::Common::Measurement::NumericGUID m_contactsSetID_ {};

            };

            inline void swap(ContactReportType& a, ContactReportType& b)  noexcept 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const ContactReportType& sample);

            RTI_CONSTEXPR_OR_CONST_STRING std::string ContactReport_ContactsSet_TOPIC = "UMAA::SA::ContactStatus::ContactReport_ContactsSet";

            class NDDSUSERDllExport ContactReportType_ContactsSet
            : public ::UMAA::SA::ContactStatus::ContactType {
              public:

                ContactReportType_ContactsSet();

                ContactReportType_ContactsSet(const ::UMAA::Common::Measurement::Polygon& area_,const ::dds::core::optional< ::UMAA::Common::PrimitiveConstrained::StringShortDescription >& callSign_,const ::UMAA::Common::PrimitiveConstrained::StringShortDescription& contactName_,const ::UMAA::Common::Measurement::Course_TrueNorth& course_,const ::dds::core::optional< ::UMAA::Common::Measurement::Position2D >& CPA_,const ::dds::core::optional< ::UMAA::Common::Measurement::DateTime >& CPATime_,const ::UMAA::Common::Measurement::Distance& diameter_,const ::UMAA::Common::Measurement::Altitude_MSL& elevation_,const ::UMAA::Common::Measurement::RMSDistanceErrorType& elevationError_,const ::UMAA::Common::Measurement::Heading_TrueNorth_Angle& heading_,const ::dds::core::optional< ::UMAA::Common::Measurement::Distance >& height_,const ::UMAA::Common::MaritimeEnumeration::FeatureKindEnumType::FeatureKindEnumType& kind_,const ::dds::core::optional< ::UMAA::Common::Measurement::Distance >& length_,const ::dds::core::optional< ::UMAA::Common::PrimitiveConstrained::MMSI >& MMSINumber_,const ::UMAA::Common::PrimitiveConstrained::StringShortDescription& originator_,const ::UMAA::Common::Measurement::Position2D& position_,const ::UMAA::Common::Measurement::CovariancePositionPositionType& positionCovariance_,const ::UMAA::Common::PrimitiveConstrained::StringShortDescription& SIDC_,const ::rti::core::bounded_sequence< ::UMAA::Common::Measurement::NumericGUID, 100L >& source_,const ::UMAA::Common::MaritimeEnumeration::SourceIndicatorEnumType::SourceIndicatorEnumType& sourceIndicator_,const ::UMAA::Common::Measurement::GroundSpeed& speedOverGround_,const ::UMAA::Common::Measurement::DateTime& timeFirstAcquired_,const ::dds::core::optional< ::UMAA::Common::Measurement::DateTime >& timeLost_,const ::dds::core::optional< ::UMAA::Common::Measurement::Distance >& width_,const ::UMAA::Common::Measurement::NumericGUID& featureID_,const ::UMAA::Common::Measurement::NumericGUID& contactsSetID_,const ::UMAA::Common::Measurement::DateTime& contactsTimestamp_);

                ::UMAA::Common::Measurement::NumericGUID& contactsSetID() noexcept {
                    return m_contactsSetID_;
                }

                const ::UMAA::Common::Measurement::NumericGUID& contactsSetID() const noexcept {
                    return m_contactsSetID_;
                }

                void contactsSetID(const ::UMAA::Common::Measurement::NumericGUID& value) {

                    m_contactsSetID_ = value;
                }

                void contactsSetID(::UMAA::Common::Measurement::NumericGUID&& value) {
                    m_contactsSetID_ = std::move(value);
                }
                ::UMAA::Common::Measurement::DateTime& contactsTimestamp() noexcept {
                    return m_contactsTimestamp_;
                }

                const ::UMAA::Common::Measurement::DateTime& contactsTimestamp() const noexcept {
                    return m_contactsTimestamp_;
                }

                void contactsTimestamp(const ::UMAA::Common::Measurement::DateTime& value) {

                    m_contactsTimestamp_ = value;
                }

                void contactsTimestamp(::UMAA::Common::Measurement::DateTime&& value) {
                    m_contactsTimestamp_ = std::move(value);
                }
                bool operator == (const ContactReportType_ContactsSet& other_) const;
                bool operator != (const ContactReportType_ContactsSet& other_) const;

                void swap(ContactReportType_ContactsSet& other_) noexcept ;

              private:

                ::UMAA::Common::Measurement::NumericGUID m_contactsSetID_ {};
                ::UMAA::Common::Measurement::DateTime m_contactsTimestamp_;

            };

            inline void swap(ContactReportType_ContactsSet& a, ContactReportType_ContactsSet& b)  noexcept 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const ContactReportType_ContactsSet& sample);

        } // namespace ContactStatus  
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
        struct topic_type_name< ::UMAA::SA::ContactStatus::ContactReportType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::SA::ContactStatus::ContactReportType";
            }
        };

        template<>
        struct is_topic_type< ::UMAA::SA::ContactStatus::ContactReportType > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< ::UMAA::SA::ContactStatus::ContactReportType > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const ::UMAA::SA::ContactStatus::ContactReportType& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(::UMAA::SA::ContactStatus::ContactReportType& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(::UMAA::SA::ContactStatus::ContactReportType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(::UMAA::SA::ContactStatus::ContactReportType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };
        template<>
        struct topic_type_name< ::UMAA::SA::ContactStatus::ContactReportType_ContactsSet > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::SA::ContactStatus::ContactReportType_ContactsSet";
            }
        };

        template<>
        struct is_topic_type< ::UMAA::SA::ContactStatus::ContactReportType_ContactsSet > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< ::UMAA::SA::ContactStatus::ContactReportType_ContactsSet > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const ::UMAA::SA::ContactStatus::ContactReportType_ContactsSet& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(::UMAA::SA::ContactStatus::ContactReportType_ContactsSet& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(::UMAA::SA::ContactStatus::ContactReportType_ContactsSet& sample);

            NDDSUSERDllExport 
            static void allocate_sample(::UMAA::SA::ContactStatus::ContactReportType_ContactsSet& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };
    }
}

namespace rti { 
    namespace topic {

        template<>
        struct dynamic_type< ::UMAA::SA::ContactStatus::ContactReportType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };

        template <>
        struct extensibility< ::UMAA::SA::ContactStatus::ContactReportType > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

        template<>
        struct dynamic_type< ::UMAA::SA::ContactStatus::ContactReportType_ContactsSet > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };

        template <>
        struct extensibility< ::UMAA::SA::ContactStatus::ContactReportType_ContactsSet > {
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

#endif // ContactReportType_494622691_hpp

