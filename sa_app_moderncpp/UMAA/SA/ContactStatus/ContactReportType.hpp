

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ContactReportType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
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

            static const std::string ContactReport_TOPIC = "UMAA::SA::ContactStatus::ContactReport";

            class NDDSUSERDllExport ContactReportType {
              public:
                ContactReportType();

                ContactReportType(const UMAA::Common::Measurement::NumericGUID& source,const UMAA::Common::Measurement::DateTime& timeStamp,const UMAA::Common::Measurement::NumericGUID& contactsSetID);

                #ifdef RTI_CXX11_RVALUE_REFERENCES
                #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
                ContactReportType (ContactReportType&&) = default;
                ContactReportType& operator=(ContactReportType&&) = default;
                ContactReportType& operator=(const ContactReportType&) = default;
                ContactReportType(const ContactReportType&) = default;
                #else
                ContactReportType(ContactReportType&& other_) OMG_NOEXCEPT;  
                ContactReportType& operator=(ContactReportType&&  other_) OMG_NOEXCEPT;
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
                UMAA::Common::Measurement::NumericGUID& contactsSetID() OMG_NOEXCEPT {
                    return m_contactsSetID_;
                }

                const UMAA::Common::Measurement::NumericGUID& contactsSetID() const OMG_NOEXCEPT {
                    return m_contactsSetID_;
                }

                void contactsSetID(const UMAA::Common::Measurement::NumericGUID& value) {
                    m_contactsSetID_ = value;
                }

                void contactsSetID(UMAA::Common::Measurement::NumericGUID&& value) {
                    m_contactsSetID_ = std::move(value);
                }

                bool operator == (const ContactReportType& other_) const;
                bool operator != (const ContactReportType& other_) const;

                void swap(ContactReportType& other_) OMG_NOEXCEPT ;

              private:

                UMAA::Common::Measurement::NumericGUID m_source_;
                UMAA::Common::Measurement::DateTime m_timeStamp_;
                UMAA::Common::Measurement::NumericGUID m_contactsSetID_;

            };

            inline void swap(ContactReportType& a, ContactReportType& b)  OMG_NOEXCEPT 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const ContactReportType& sample);

            static const std::string ContactReport_ContactsSet_TOPIC = "UMAA::SA::ContactStatus::ContactReport_ContactsSet";

            class NDDSUSERDllExport ContactReportType_ContactsSet
            : public UMAA::SA::ContactStatus::ContactType {
              public:
                ContactReportType_ContactsSet();

                ContactReportType_ContactsSet(const UMAA::Common::Measurement::Polygon& area,const ::dds::core::optional< UMAA::Common::PrimitiveConstrained::StringShortDescription >& callSign,const UMAA::Common::PrimitiveConstrained::StringShortDescription& contactName,const UMAA::Common::Measurement::Course_TrueNorth& course,const ::dds::core::optional< UMAA::Common::Measurement::Position2D >& CPA,const ::dds::core::optional< UMAA::Common::Measurement::DateTime >& CPATime,const UMAA::Common::Measurement::Distance& diameter,const UMAA::Common::Measurement::Altitude_MSL& elevation,const UMAA::Common::Measurement::RMSDistanceErrorType& elevationError,const UMAA::Common::Measurement::Heading_TrueNorth_Angle& heading,const ::dds::core::optional< UMAA::Common::Measurement::Distance >& height,const UMAA::Common::MaritimeEnumeration::FeatureKindEnumType::FeatureKindEnumType& kind,const ::dds::core::optional< UMAA::Common::Measurement::Distance >& length,const ::dds::core::optional< UMAA::Common::PrimitiveConstrained::MMSI >& MMSINumber,const UMAA::Common::PrimitiveConstrained::StringShortDescription& originator,const UMAA::Common::Measurement::Position2D& position,const UMAA::Common::Measurement::CovariancePositionPositionType& positionCovariance,const UMAA::Common::PrimitiveConstrained::StringShortDescription& SIDC,const ::rti::core::bounded_sequence< UMAA::Common::Measurement::NumericGUID, 100L >& source,const UMAA::Common::MaritimeEnumeration::SourceIndicatorEnumType::SourceIndicatorEnumType& sourceIndicator,const UMAA::Common::Measurement::GroundSpeed& speedOverGround,const UMAA::Common::Measurement::DateTime& timeFirstAcquired,const ::dds::core::optional< UMAA::Common::Measurement::DateTime >& timeLost,const ::dds::core::optional< UMAA::Common::Measurement::Distance >& width,const UMAA::Common::Measurement::NumericGUID& featureID,const UMAA::Common::Measurement::NumericGUID& contactsSetID,const UMAA::Common::Measurement::DateTime& contactsTimestamp);

                #ifdef RTI_CXX11_RVALUE_REFERENCES
                #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
                ContactReportType_ContactsSet (ContactReportType_ContactsSet&&) = default;
                ContactReportType_ContactsSet& operator=(ContactReportType_ContactsSet&&) = default;
                ContactReportType_ContactsSet& operator=(const ContactReportType_ContactsSet&) = default;
                ContactReportType_ContactsSet(const ContactReportType_ContactsSet&) = default;
                #else
                ContactReportType_ContactsSet(ContactReportType_ContactsSet&& other_) OMG_NOEXCEPT;  
                ContactReportType_ContactsSet& operator=(ContactReportType_ContactsSet&&  other_) OMG_NOEXCEPT;
                #endif
                #endif 

                UMAA::Common::Measurement::NumericGUID& contactsSetID() OMG_NOEXCEPT {
                    return m_contactsSetID_;
                }

                const UMAA::Common::Measurement::NumericGUID& contactsSetID() const OMG_NOEXCEPT {
                    return m_contactsSetID_;
                }

                void contactsSetID(const UMAA::Common::Measurement::NumericGUID& value) {
                    m_contactsSetID_ = value;
                }

                void contactsSetID(UMAA::Common::Measurement::NumericGUID&& value) {
                    m_contactsSetID_ = std::move(value);
                }
                UMAA::Common::Measurement::DateTime& contactsTimestamp() OMG_NOEXCEPT {
                    return m_contactsTimestamp_;
                }

                const UMAA::Common::Measurement::DateTime& contactsTimestamp() const OMG_NOEXCEPT {
                    return m_contactsTimestamp_;
                }

                void contactsTimestamp(const UMAA::Common::Measurement::DateTime& value) {
                    m_contactsTimestamp_ = value;
                }

                void contactsTimestamp(UMAA::Common::Measurement::DateTime&& value) {
                    m_contactsTimestamp_ = std::move(value);
                }

                bool operator == (const ContactReportType_ContactsSet& other_) const;
                bool operator != (const ContactReportType_ContactsSet& other_) const;

                void swap(ContactReportType_ContactsSet& other_) OMG_NOEXCEPT ;

              private:

                UMAA::Common::Measurement::NumericGUID m_contactsSetID_;
                UMAA::Common::Measurement::DateTime m_contactsTimestamp_;

            };

            inline void swap(ContactReportType_ContactsSet& a, ContactReportType_ContactsSet& b)  OMG_NOEXCEPT 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const ContactReportType_ContactsSet& sample);

        } // namespace ContactStatus  
    } // namespace SA  
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
        struct topic_type_name< UMAA::SA::ContactStatus::ContactReportType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::SA::ContactStatus::ContactReportType";
            }
        };

        template<>
        struct is_topic_type< UMAA::SA::ContactStatus::ContactReportType > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< UMAA::SA::ContactStatus::ContactReportType > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const UMAA::SA::ContactStatus::ContactReportType& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(UMAA::SA::ContactStatus::ContactReportType& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(UMAA::SA::ContactStatus::ContactReportType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(UMAA::SA::ContactStatus::ContactReportType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

        template<>
        struct topic_type_name< UMAA::SA::ContactStatus::ContactReportType_ContactsSet > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::SA::ContactStatus::ContactReportType_ContactsSet";
            }
        };

        template<>
        struct is_topic_type< UMAA::SA::ContactStatus::ContactReportType_ContactsSet > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< UMAA::SA::ContactStatus::ContactReportType_ContactsSet > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const UMAA::SA::ContactStatus::ContactReportType_ContactsSet& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(UMAA::SA::ContactStatus::ContactReportType_ContactsSet& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(UMAA::SA::ContactStatus::ContactReportType_ContactsSet& sample);

            NDDSUSERDllExport 
            static void allocate_sample(UMAA::SA::ContactStatus::ContactReportType_ContactsSet& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

    }
}

namespace rti { 
    namespace topic {

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< UMAA::SA::ContactStatus::ContactReportType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< UMAA::SA::ContactStatus::ContactReportType > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;                
        };

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< UMAA::SA::ContactStatus::ContactReportType_ContactsSet > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< UMAA::SA::ContactStatus::ContactReportType_ContactsSet > {
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

#endif // ContactReportType_494622691_hpp

