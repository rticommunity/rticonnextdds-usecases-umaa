

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from RangeReportType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef RangeReportType_1827048721_hpp
#define RangeReportType_1827048721_hpp

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
#include "UMAA/SA/RangeStatus/RangeDataPointType.hpp"
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif
namespace UMAA {
    namespace SA {
        namespace RangeStatus {

            static const std::string RangeReport_TOPIC = "UMAA::SA::RangeStatus::RangeReport";

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            // On Windows, dll-export template instantiations of standard types used by
            // other dll-exported types
            template class NDDSUSERDllExport std::allocator< UMAA::SA::RangeStatus::RangeDataPointType >;
            template class NDDSUSERDllExport std::vector< UMAA::SA::RangeStatus::RangeDataPointType >;
            #endif
            class NDDSUSERDllExport RangeReportType {
              public:
                RangeReportType();

                RangeReportType(const UMAA::Common::MaritimeEnumeration::CoordinateSystemEnumType::CoordinateSystemEnumType& coordinateSystem,const ::rti::core::bounded_sequence< UMAA::SA::RangeStatus::RangeDataPointType, 100L >& dataPoints,const std::string& errorMessage,const UMAA::Common::MaritimeEnumeration::RangeErrorCodeEnumType::RangeErrorCodeEnumType& rangeErrorCode,const UMAA::Common::Measurement::NumericGUID& source,const UMAA::Common::Measurement::DateTime& timeStamp);

                #ifdef RTI_CXX11_RVALUE_REFERENCES
                #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
                RangeReportType (RangeReportType&&) = default;
                RangeReportType& operator=(RangeReportType&&) = default;
                RangeReportType& operator=(const RangeReportType&) = default;
                RangeReportType(const RangeReportType&) = default;
                #else
                RangeReportType(RangeReportType&& other_) OMG_NOEXCEPT;  
                RangeReportType& operator=(RangeReportType&&  other_) OMG_NOEXCEPT;
                #endif
                #endif 

                UMAA::Common::MaritimeEnumeration::CoordinateSystemEnumType::CoordinateSystemEnumType& coordinateSystem() OMG_NOEXCEPT {
                    return m_coordinateSystem_;
                }

                const UMAA::Common::MaritimeEnumeration::CoordinateSystemEnumType::CoordinateSystemEnumType& coordinateSystem() const OMG_NOEXCEPT {
                    return m_coordinateSystem_;
                }

                void coordinateSystem(const UMAA::Common::MaritimeEnumeration::CoordinateSystemEnumType::CoordinateSystemEnumType& value) {
                    m_coordinateSystem_ = value;
                }

                void coordinateSystem(UMAA::Common::MaritimeEnumeration::CoordinateSystemEnumType::CoordinateSystemEnumType&& value) {
                    m_coordinateSystem_ = std::move(value);
                }
                ::rti::core::bounded_sequence< UMAA::SA::RangeStatus::RangeDataPointType, 100L >& dataPoints() OMG_NOEXCEPT {
                    return m_dataPoints_;
                }

                const ::rti::core::bounded_sequence< UMAA::SA::RangeStatus::RangeDataPointType, 100L >& dataPoints() const OMG_NOEXCEPT {
                    return m_dataPoints_;
                }

                void dataPoints(const ::rti::core::bounded_sequence< UMAA::SA::RangeStatus::RangeDataPointType, 100L >& value) {
                    m_dataPoints_ = value;
                }

                void dataPoints(::rti::core::bounded_sequence< UMAA::SA::RangeStatus::RangeDataPointType, 100L >&& value) {
                    m_dataPoints_ = std::move(value);
                }
                std::string& errorMessage() OMG_NOEXCEPT {
                    return m_errorMessage_;
                }

                const std::string& errorMessage() const OMG_NOEXCEPT {
                    return m_errorMessage_;
                }

                void errorMessage(const std::string& value) {
                    m_errorMessage_ = value;
                }

                void errorMessage(std::string&& value) {
                    m_errorMessage_ = std::move(value);
                }
                UMAA::Common::MaritimeEnumeration::RangeErrorCodeEnumType::RangeErrorCodeEnumType& rangeErrorCode() OMG_NOEXCEPT {
                    return m_rangeErrorCode_;
                }

                const UMAA::Common::MaritimeEnumeration::RangeErrorCodeEnumType::RangeErrorCodeEnumType& rangeErrorCode() const OMG_NOEXCEPT {
                    return m_rangeErrorCode_;
                }

                void rangeErrorCode(const UMAA::Common::MaritimeEnumeration::RangeErrorCodeEnumType::RangeErrorCodeEnumType& value) {
                    m_rangeErrorCode_ = value;
                }

                void rangeErrorCode(UMAA::Common::MaritimeEnumeration::RangeErrorCodeEnumType::RangeErrorCodeEnumType&& value) {
                    m_rangeErrorCode_ = std::move(value);
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

                bool operator == (const RangeReportType& other_) const;
                bool operator != (const RangeReportType& other_) const;

                void swap(RangeReportType& other_) OMG_NOEXCEPT ;

              private:

                UMAA::Common::MaritimeEnumeration::CoordinateSystemEnumType::CoordinateSystemEnumType m_coordinateSystem_;
                ::rti::core::bounded_sequence< UMAA::SA::RangeStatus::RangeDataPointType, 100L > m_dataPoints_;
                std::string m_errorMessage_;
                UMAA::Common::MaritimeEnumeration::RangeErrorCodeEnumType::RangeErrorCodeEnumType m_rangeErrorCode_;
                UMAA::Common::Measurement::NumericGUID m_source_;
                UMAA::Common::Measurement::DateTime m_timeStamp_;

            };

            inline void swap(RangeReportType& a, RangeReportType& b)  OMG_NOEXCEPT 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const RangeReportType& sample);

        } // namespace RangeStatus  
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
        struct topic_type_name< UMAA::SA::RangeStatus::RangeReportType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::SA::RangeStatus::RangeReportType";
            }
        };

        template<>
        struct is_topic_type< UMAA::SA::RangeStatus::RangeReportType > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< UMAA::SA::RangeStatus::RangeReportType > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const UMAA::SA::RangeStatus::RangeReportType& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(UMAA::SA::RangeStatus::RangeReportType& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(UMAA::SA::RangeStatus::RangeReportType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(UMAA::SA::RangeStatus::RangeReportType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

    }
}

namespace rti { 
    namespace topic {

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< UMAA::SA::RangeStatus::RangeReportType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< UMAA::SA::RangeStatus::RangeReportType > {
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

#endif // RangeReportType_1827048721_hpp

