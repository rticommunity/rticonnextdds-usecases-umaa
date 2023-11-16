

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ContactCOLREGSClassificationStatusReportType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef ContactCOLREGSClassificationStatusReportType_167947414_hpp
#define ContactCOLREGSClassificationStatusReportType_167947414_hpp

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
#include "UMAA/Common/MaritimeEnumeration/EnumerationSets.hpp"
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
        namespace ContactCOLREGSClassificationStatus {

            static const std::string ContactCOLREGSClassificationStatusReport_TOPIC = "UMAA::SA::ContactCOLREGSClassificationStatus::ContactCOLREGSClassificationStatusReport";

            class NDDSUSERDllExport ContactCOLREGSClassificationStatusReportType {
              public:
                ContactCOLREGSClassificationStatusReportType();

                ContactCOLREGSClassificationStatusReportType(double confidence,const UMAA::Common::Measurement::NumericGUID& source,const UMAA::Common::Measurement::DateTime& timeStamp,const UMAA::Common::MaritimeEnumeration::COLREGSClassificationEnumType::COLREGSClassificationEnumType& colregsClassification,const UMAA::Common::Measurement::NumericGUID& contactID);

                #ifdef RTI_CXX11_RVALUE_REFERENCES
                #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
                ContactCOLREGSClassificationStatusReportType (ContactCOLREGSClassificationStatusReportType&&) = default;
                ContactCOLREGSClassificationStatusReportType& operator=(ContactCOLREGSClassificationStatusReportType&&) = default;
                ContactCOLREGSClassificationStatusReportType& operator=(const ContactCOLREGSClassificationStatusReportType&) = default;
                ContactCOLREGSClassificationStatusReportType(const ContactCOLREGSClassificationStatusReportType&) = default;
                #else
                ContactCOLREGSClassificationStatusReportType(ContactCOLREGSClassificationStatusReportType&& other_) OMG_NOEXCEPT;  
                ContactCOLREGSClassificationStatusReportType& operator=(ContactCOLREGSClassificationStatusReportType&&  other_) OMG_NOEXCEPT;
                #endif
                #endif 

                double& confidence() OMG_NOEXCEPT {
                    return m_confidence_;
                }

                const double& confidence() const OMG_NOEXCEPT {
                    return m_confidence_;
                }

                void confidence(double value) {
                    m_confidence_ = value;
                }

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
                UMAA::Common::MaritimeEnumeration::COLREGSClassificationEnumType::COLREGSClassificationEnumType& colregsClassification() OMG_NOEXCEPT {
                    return m_colregsClassification_;
                }

                const UMAA::Common::MaritimeEnumeration::COLREGSClassificationEnumType::COLREGSClassificationEnumType& colregsClassification() const OMG_NOEXCEPT {
                    return m_colregsClassification_;
                }

                void colregsClassification(const UMAA::Common::MaritimeEnumeration::COLREGSClassificationEnumType::COLREGSClassificationEnumType& value) {
                    m_colregsClassification_ = value;
                }

                void colregsClassification(UMAA::Common::MaritimeEnumeration::COLREGSClassificationEnumType::COLREGSClassificationEnumType&& value) {
                    m_colregsClassification_ = std::move(value);
                }
                UMAA::Common::Measurement::NumericGUID& contactID() OMG_NOEXCEPT {
                    return m_contactID_;
                }

                const UMAA::Common::Measurement::NumericGUID& contactID() const OMG_NOEXCEPT {
                    return m_contactID_;
                }

                void contactID(const UMAA::Common::Measurement::NumericGUID& value) {
                    m_contactID_ = value;
                }

                void contactID(UMAA::Common::Measurement::NumericGUID&& value) {
                    m_contactID_ = std::move(value);
                }

                bool operator == (const ContactCOLREGSClassificationStatusReportType& other_) const;
                bool operator != (const ContactCOLREGSClassificationStatusReportType& other_) const;

                void swap(ContactCOLREGSClassificationStatusReportType& other_) OMG_NOEXCEPT ;

              private:

                double m_confidence_;
                UMAA::Common::Measurement::NumericGUID m_source_;
                UMAA::Common::Measurement::DateTime m_timeStamp_;
                UMAA::Common::MaritimeEnumeration::COLREGSClassificationEnumType::COLREGSClassificationEnumType m_colregsClassification_;
                UMAA::Common::Measurement::NumericGUID m_contactID_;

            };

            inline void swap(ContactCOLREGSClassificationStatusReportType& a, ContactCOLREGSClassificationStatusReportType& b)  OMG_NOEXCEPT 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const ContactCOLREGSClassificationStatusReportType& sample);

        } // namespace ContactCOLREGSClassificationStatus  
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
        struct topic_type_name< UMAA::SA::ContactCOLREGSClassificationStatus::ContactCOLREGSClassificationStatusReportType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::SA::ContactCOLREGSClassificationStatus::ContactCOLREGSClassificationStatusReportType";
            }
        };

        template<>
        struct is_topic_type< UMAA::SA::ContactCOLREGSClassificationStatus::ContactCOLREGSClassificationStatusReportType > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< UMAA::SA::ContactCOLREGSClassificationStatus::ContactCOLREGSClassificationStatusReportType > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const UMAA::SA::ContactCOLREGSClassificationStatus::ContactCOLREGSClassificationStatusReportType& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(UMAA::SA::ContactCOLREGSClassificationStatus::ContactCOLREGSClassificationStatusReportType& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(UMAA::SA::ContactCOLREGSClassificationStatus::ContactCOLREGSClassificationStatusReportType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(UMAA::SA::ContactCOLREGSClassificationStatus::ContactCOLREGSClassificationStatusReportType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

    }
}

namespace rti { 
    namespace topic {

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< UMAA::SA::ContactCOLREGSClassificationStatus::ContactCOLREGSClassificationStatusReportType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< UMAA::SA::ContactCOLREGSClassificationStatus::ContactCOLREGSClassificationStatusReportType > {
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

#endif // ContactCOLREGSClassificationStatusReportType_167947414_hpp

