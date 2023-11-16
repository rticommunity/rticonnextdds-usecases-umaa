

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from HealthDetailsStatusType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef HealthDetailsStatusType_1443444291_hpp
#define HealthDetailsStatusType_1443444291_hpp

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
        namespace HealthReporter {

            class NDDSUSERDllExport HealthDetailsStatusType {
              public:
                HealthDetailsStatusType();

                HealthDetailsStatusType(const UMAA::Common::MaritimeEnumeration::ErrorCodeEnumType::ErrorCodeEnumType& code,const std::string& descriptor,const UMAA::Common::Measurement::DateTime& logTime,const std::string& resourceURN,const UMAA::Common::MaritimeEnumeration::ErrorConditionEnumType::ErrorConditionEnumType& severity,const UMAA::Common::Measurement::NumericGUID& source,const UMAA::Common::Measurement::DateTime& timeStamp,const UMAA::Common::Measurement::NumericGUID& detailID);

                #ifdef RTI_CXX11_RVALUE_REFERENCES
                #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
                HealthDetailsStatusType (HealthDetailsStatusType&&) = default;
                HealthDetailsStatusType& operator=(HealthDetailsStatusType&&) = default;
                HealthDetailsStatusType& operator=(const HealthDetailsStatusType&) = default;
                HealthDetailsStatusType(const HealthDetailsStatusType&) = default;
                #else
                HealthDetailsStatusType(HealthDetailsStatusType&& other_) OMG_NOEXCEPT;  
                HealthDetailsStatusType& operator=(HealthDetailsStatusType&&  other_) OMG_NOEXCEPT;
                #endif
                #endif 

                UMAA::Common::MaritimeEnumeration::ErrorCodeEnumType::ErrorCodeEnumType& code() OMG_NOEXCEPT {
                    return m_code_;
                }

                const UMAA::Common::MaritimeEnumeration::ErrorCodeEnumType::ErrorCodeEnumType& code() const OMG_NOEXCEPT {
                    return m_code_;
                }

                void code(const UMAA::Common::MaritimeEnumeration::ErrorCodeEnumType::ErrorCodeEnumType& value) {
                    m_code_ = value;
                }

                void code(UMAA::Common::MaritimeEnumeration::ErrorCodeEnumType::ErrorCodeEnumType&& value) {
                    m_code_ = std::move(value);
                }
                std::string& descriptor() OMG_NOEXCEPT {
                    return m_descriptor_;
                }

                const std::string& descriptor() const OMG_NOEXCEPT {
                    return m_descriptor_;
                }

                void descriptor(const std::string& value) {
                    m_descriptor_ = value;
                }

                void descriptor(std::string&& value) {
                    m_descriptor_ = std::move(value);
                }
                UMAA::Common::Measurement::DateTime& logTime() OMG_NOEXCEPT {
                    return m_logTime_;
                }

                const UMAA::Common::Measurement::DateTime& logTime() const OMG_NOEXCEPT {
                    return m_logTime_;
                }

                void logTime(const UMAA::Common::Measurement::DateTime& value) {
                    m_logTime_ = value;
                }

                void logTime(UMAA::Common::Measurement::DateTime&& value) {
                    m_logTime_ = std::move(value);
                }
                std::string& resourceURN() OMG_NOEXCEPT {
                    return m_resourceURN_;
                }

                const std::string& resourceURN() const OMG_NOEXCEPT {
                    return m_resourceURN_;
                }

                void resourceURN(const std::string& value) {
                    m_resourceURN_ = value;
                }

                void resourceURN(std::string&& value) {
                    m_resourceURN_ = std::move(value);
                }
                UMAA::Common::MaritimeEnumeration::ErrorConditionEnumType::ErrorConditionEnumType& severity() OMG_NOEXCEPT {
                    return m_severity_;
                }

                const UMAA::Common::MaritimeEnumeration::ErrorConditionEnumType::ErrorConditionEnumType& severity() const OMG_NOEXCEPT {
                    return m_severity_;
                }

                void severity(const UMAA::Common::MaritimeEnumeration::ErrorConditionEnumType::ErrorConditionEnumType& value) {
                    m_severity_ = value;
                }

                void severity(UMAA::Common::MaritimeEnumeration::ErrorConditionEnumType::ErrorConditionEnumType&& value) {
                    m_severity_ = std::move(value);
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
                UMAA::Common::Measurement::NumericGUID& detailID() OMG_NOEXCEPT {
                    return m_detailID_;
                }

                const UMAA::Common::Measurement::NumericGUID& detailID() const OMG_NOEXCEPT {
                    return m_detailID_;
                }

                void detailID(const UMAA::Common::Measurement::NumericGUID& value) {
                    m_detailID_ = value;
                }

                void detailID(UMAA::Common::Measurement::NumericGUID&& value) {
                    m_detailID_ = std::move(value);
                }

                bool operator == (const HealthDetailsStatusType& other_) const;
                bool operator != (const HealthDetailsStatusType& other_) const;

                void swap(HealthDetailsStatusType& other_) OMG_NOEXCEPT ;

              private:

                UMAA::Common::MaritimeEnumeration::ErrorCodeEnumType::ErrorCodeEnumType m_code_;
                std::string m_descriptor_;
                UMAA::Common::Measurement::DateTime m_logTime_;
                std::string m_resourceURN_;
                UMAA::Common::MaritimeEnumeration::ErrorConditionEnumType::ErrorConditionEnumType m_severity_;
                UMAA::Common::Measurement::NumericGUID m_source_;
                UMAA::Common::Measurement::DateTime m_timeStamp_;
                UMAA::Common::Measurement::NumericGUID m_detailID_;

            };

            inline void swap(HealthDetailsStatusType& a, HealthDetailsStatusType& b)  OMG_NOEXCEPT 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const HealthDetailsStatusType& sample);

        } // namespace HealthReporter  
    } // namespace SO  
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
        struct topic_type_name< UMAA::SO::HealthReporter::HealthDetailsStatusType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::SO::HealthReporter::HealthDetailsStatusType";
            }
        };

        template<>
        struct is_topic_type< UMAA::SO::HealthReporter::HealthDetailsStatusType > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< UMAA::SO::HealthReporter::HealthDetailsStatusType > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const UMAA::SO::HealthReporter::HealthDetailsStatusType& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(UMAA::SO::HealthReporter::HealthDetailsStatusType& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(UMAA::SO::HealthReporter::HealthDetailsStatusType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(UMAA::SO::HealthReporter::HealthDetailsStatusType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

    }
}

namespace rti { 
    namespace topic {

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< UMAA::SO::HealthReporter::HealthDetailsStatusType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< UMAA::SO::HealthReporter::HealthDetailsStatusType > {
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

#endif // HealthDetailsStatusType_1443444291_hpp

