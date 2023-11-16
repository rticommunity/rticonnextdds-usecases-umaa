

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ContactVisualClassificationStatusReportType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef ContactVisualClassificationStatusReportType_675891174_hpp
#define ContactVisualClassificationStatusReportType_675891174_hpp

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
        namespace ContactVisualClassificationStatus {

            static const std::string ContactVisualClassificationStatusReport_TOPIC = "UMAA::SA::ContactVisualClassificationStatus::ContactVisualClassificationStatusReport";

            class NDDSUSERDllExport ContactVisualClassificationStatusReportType {
              public:
                ContactVisualClassificationStatusReportType();

                ContactVisualClassificationStatusReportType(double confidence,const UMAA::Common::Measurement::NumericGUID& source,const UMAA::Common::Measurement::DateTime& timeStamp,const UMAA::Common::Measurement::NumericGUID& contactID,const UMAA::Common::MaritimeEnumeration::VisualClassificationEnumType::VisualClassificationEnumType& visualClassification);

                #ifdef RTI_CXX11_RVALUE_REFERENCES
                #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
                ContactVisualClassificationStatusReportType (ContactVisualClassificationStatusReportType&&) = default;
                ContactVisualClassificationStatusReportType& operator=(ContactVisualClassificationStatusReportType&&) = default;
                ContactVisualClassificationStatusReportType& operator=(const ContactVisualClassificationStatusReportType&) = default;
                ContactVisualClassificationStatusReportType(const ContactVisualClassificationStatusReportType&) = default;
                #else
                ContactVisualClassificationStatusReportType(ContactVisualClassificationStatusReportType&& other_) OMG_NOEXCEPT;  
                ContactVisualClassificationStatusReportType& operator=(ContactVisualClassificationStatusReportType&&  other_) OMG_NOEXCEPT;
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
                UMAA::Common::MaritimeEnumeration::VisualClassificationEnumType::VisualClassificationEnumType& visualClassification() OMG_NOEXCEPT {
                    return m_visualClassification_;
                }

                const UMAA::Common::MaritimeEnumeration::VisualClassificationEnumType::VisualClassificationEnumType& visualClassification() const OMG_NOEXCEPT {
                    return m_visualClassification_;
                }

                void visualClassification(const UMAA::Common::MaritimeEnumeration::VisualClassificationEnumType::VisualClassificationEnumType& value) {
                    m_visualClassification_ = value;
                }

                void visualClassification(UMAA::Common::MaritimeEnumeration::VisualClassificationEnumType::VisualClassificationEnumType&& value) {
                    m_visualClassification_ = std::move(value);
                }

                bool operator == (const ContactVisualClassificationStatusReportType& other_) const;
                bool operator != (const ContactVisualClassificationStatusReportType& other_) const;

                void swap(ContactVisualClassificationStatusReportType& other_) OMG_NOEXCEPT ;

              private:

                double m_confidence_;
                UMAA::Common::Measurement::NumericGUID m_source_;
                UMAA::Common::Measurement::DateTime m_timeStamp_;
                UMAA::Common::Measurement::NumericGUID m_contactID_;
                UMAA::Common::MaritimeEnumeration::VisualClassificationEnumType::VisualClassificationEnumType m_visualClassification_;

            };

            inline void swap(ContactVisualClassificationStatusReportType& a, ContactVisualClassificationStatusReportType& b)  OMG_NOEXCEPT 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const ContactVisualClassificationStatusReportType& sample);

        } // namespace ContactVisualClassificationStatus  
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
        struct topic_type_name< UMAA::SA::ContactVisualClassificationStatus::ContactVisualClassificationStatusReportType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::SA::ContactVisualClassificationStatus::ContactVisualClassificationStatusReportType";
            }
        };

        template<>
        struct is_topic_type< UMAA::SA::ContactVisualClassificationStatus::ContactVisualClassificationStatusReportType > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< UMAA::SA::ContactVisualClassificationStatus::ContactVisualClassificationStatusReportType > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const UMAA::SA::ContactVisualClassificationStatus::ContactVisualClassificationStatusReportType& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(UMAA::SA::ContactVisualClassificationStatus::ContactVisualClassificationStatusReportType& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(UMAA::SA::ContactVisualClassificationStatus::ContactVisualClassificationStatusReportType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(UMAA::SA::ContactVisualClassificationStatus::ContactVisualClassificationStatusReportType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

    }
}

namespace rti { 
    namespace topic {

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< UMAA::SA::ContactVisualClassificationStatus::ContactVisualClassificationStatusReportType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< UMAA::SA::ContactVisualClassificationStatus::ContactVisualClassificationStatusReportType > {
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

#endif // ContactVisualClassificationStatusReportType_675891174_hpp

