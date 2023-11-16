

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from DigitalVideoConfigReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef DigitalVideoConfigReportType_612099485_hpp
#define DigitalVideoConfigReportType_612099485_hpp

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
#include "UMAA/SEM/SensorManagement/DigitalSensorErrorType.hpp"
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif
namespace UMAA {
    namespace SEM {
        namespace DigitalVideoConfig {

            RTI_CONSTEXPR_OR_CONST_STRING std::string DigitalVideoConfigReport_TOPIC = "UMAA::SEM::DigitalVideoConfig::DigitalVideoConfigReport";

            class NDDSUSERDllExport DigitalVideoConfigReportType {
              public:

                DigitalVideoConfigReportType();

                DigitalVideoConfigReportType(const ::UMAA::Common::Enumeration::NetworkProtocolEnumType::NetworkProtocolEnumType& commsProtocol_,double commsRate_,const ::UMAA::SEM::SensorManagement::DigitalSensorErrorType& digitalVideoError_,const ::UMAA::Common::MaritimeEnumeration::DataEncodingEnumType::DataEncodingEnumType& format_,double frameRate_,const ::UMAA::Common::MaritimeEnumeration::FrameSizeEnumType::FrameSizeEnumType& frameSize_,const std::string& IPaddress_,int32_t IPPort_,double maxBitRate_,double minBitRate_,const ::UMAA::Common::MaritimeEnumeration::TransportEncodingEnumType::TransportEncodingEnumType& transportEncoding_,const std::string& URI_,const ::UMAA::Common::Measurement::NumericGUID& source_,const ::UMAA::Common::Measurement::DateTime& timeStamp_);

                ::UMAA::Common::Enumeration::NetworkProtocolEnumType::NetworkProtocolEnumType& commsProtocol() noexcept {
                    return m_commsProtocol_;
                }

                const ::UMAA::Common::Enumeration::NetworkProtocolEnumType::NetworkProtocolEnumType& commsProtocol() const noexcept {
                    return m_commsProtocol_;
                }

                void commsProtocol(const ::UMAA::Common::Enumeration::NetworkProtocolEnumType::NetworkProtocolEnumType& value) {

                    m_commsProtocol_ = value;
                }

                void commsProtocol(::UMAA::Common::Enumeration::NetworkProtocolEnumType::NetworkProtocolEnumType&& value) {
                    m_commsProtocol_ = std::move(value);
                }
                double& commsRate() noexcept {
                    return m_commsRate_;
                }

                const double& commsRate() const noexcept {
                    return m_commsRate_;
                }

                void commsRate(double value) {

                    m_commsRate_ = value;
                }

                ::UMAA::SEM::SensorManagement::DigitalSensorErrorType& digitalVideoError() noexcept {
                    return m_digitalVideoError_;
                }

                const ::UMAA::SEM::SensorManagement::DigitalSensorErrorType& digitalVideoError() const noexcept {
                    return m_digitalVideoError_;
                }

                void digitalVideoError(const ::UMAA::SEM::SensorManagement::DigitalSensorErrorType& value) {

                    m_digitalVideoError_ = value;
                }

                void digitalVideoError(::UMAA::SEM::SensorManagement::DigitalSensorErrorType&& value) {
                    m_digitalVideoError_ = std::move(value);
                }
                ::UMAA::Common::MaritimeEnumeration::DataEncodingEnumType::DataEncodingEnumType& format() noexcept {
                    return m_format_;
                }

                const ::UMAA::Common::MaritimeEnumeration::DataEncodingEnumType::DataEncodingEnumType& format() const noexcept {
                    return m_format_;
                }

                void format(const ::UMAA::Common::MaritimeEnumeration::DataEncodingEnumType::DataEncodingEnumType& value) {

                    m_format_ = value;
                }

                void format(::UMAA::Common::MaritimeEnumeration::DataEncodingEnumType::DataEncodingEnumType&& value) {
                    m_format_ = std::move(value);
                }
                double& frameRate() noexcept {
                    return m_frameRate_;
                }

                const double& frameRate() const noexcept {
                    return m_frameRate_;
                }

                void frameRate(double value) {

                    m_frameRate_ = value;
                }

                ::UMAA::Common::MaritimeEnumeration::FrameSizeEnumType::FrameSizeEnumType& frameSize() noexcept {
                    return m_frameSize_;
                }

                const ::UMAA::Common::MaritimeEnumeration::FrameSizeEnumType::FrameSizeEnumType& frameSize() const noexcept {
                    return m_frameSize_;
                }

                void frameSize(const ::UMAA::Common::MaritimeEnumeration::FrameSizeEnumType::FrameSizeEnumType& value) {

                    m_frameSize_ = value;
                }

                void frameSize(::UMAA::Common::MaritimeEnumeration::FrameSizeEnumType::FrameSizeEnumType&& value) {
                    m_frameSize_ = std::move(value);
                }
                std::string& IPaddress() noexcept {
                    return m_IPaddress_;
                }

                const std::string& IPaddress() const noexcept {
                    return m_IPaddress_;
                }

                void IPaddress(const std::string& value) {

                    m_IPaddress_ = value;
                }

                void IPaddress(std::string&& value) {
                    m_IPaddress_ = std::move(value);
                }
                int32_t& IPPort() noexcept {
                    return m_IPPort_;
                }

                const int32_t& IPPort() const noexcept {
                    return m_IPPort_;
                }

                void IPPort(int32_t value) {

                    m_IPPort_ = value;
                }

                double& maxBitRate() noexcept {
                    return m_maxBitRate_;
                }

                const double& maxBitRate() const noexcept {
                    return m_maxBitRate_;
                }

                void maxBitRate(double value) {

                    m_maxBitRate_ = value;
                }

                double& minBitRate() noexcept {
                    return m_minBitRate_;
                }

                const double& minBitRate() const noexcept {
                    return m_minBitRate_;
                }

                void minBitRate(double value) {

                    m_minBitRate_ = value;
                }

                ::UMAA::Common::MaritimeEnumeration::TransportEncodingEnumType::TransportEncodingEnumType& transportEncoding() noexcept {
                    return m_transportEncoding_;
                }

                const ::UMAA::Common::MaritimeEnumeration::TransportEncodingEnumType::TransportEncodingEnumType& transportEncoding() const noexcept {
                    return m_transportEncoding_;
                }

                void transportEncoding(const ::UMAA::Common::MaritimeEnumeration::TransportEncodingEnumType::TransportEncodingEnumType& value) {

                    m_transportEncoding_ = value;
                }

                void transportEncoding(::UMAA::Common::MaritimeEnumeration::TransportEncodingEnumType::TransportEncodingEnumType&& value) {
                    m_transportEncoding_ = std::move(value);
                }
                std::string& URI() noexcept {
                    return m_URI_;
                }

                const std::string& URI() const noexcept {
                    return m_URI_;
                }

                void URI(const std::string& value) {

                    m_URI_ = value;
                }

                void URI(std::string&& value) {
                    m_URI_ = std::move(value);
                }
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
                bool operator == (const DigitalVideoConfigReportType& other_) const;
                bool operator != (const DigitalVideoConfigReportType& other_) const;

                void swap(DigitalVideoConfigReportType& other_) noexcept ;

              private:

                ::UMAA::Common::Enumeration::NetworkProtocolEnumType::NetworkProtocolEnumType m_commsProtocol_;
                double m_commsRate_;
                ::UMAA::SEM::SensorManagement::DigitalSensorErrorType m_digitalVideoError_;
                ::UMAA::Common::MaritimeEnumeration::DataEncodingEnumType::DataEncodingEnumType m_format_;
                double m_frameRate_;
                ::UMAA::Common::MaritimeEnumeration::FrameSizeEnumType::FrameSizeEnumType m_frameSize_;
                std::string m_IPaddress_;
                int32_t m_IPPort_;
                double m_maxBitRate_;
                double m_minBitRate_;
                ::UMAA::Common::MaritimeEnumeration::TransportEncodingEnumType::TransportEncodingEnumType m_transportEncoding_;
                std::string m_URI_;
                ::UMAA::Common::Measurement::NumericGUID m_source_ {};
                ::UMAA::Common::Measurement::DateTime m_timeStamp_;

            };

            inline void swap(DigitalVideoConfigReportType& a, DigitalVideoConfigReportType& b)  noexcept 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const DigitalVideoConfigReportType& sample);

        } // namespace DigitalVideoConfig  
    } // namespace SEM  
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
        struct topic_type_name< ::UMAA::SEM::DigitalVideoConfig::DigitalVideoConfigReportType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::SEM::DigitalVideoConfig::DigitalVideoConfigReportType";
            }
        };

        template<>
        struct is_topic_type< ::UMAA::SEM::DigitalVideoConfig::DigitalVideoConfigReportType > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< ::UMAA::SEM::DigitalVideoConfig::DigitalVideoConfigReportType > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const ::UMAA::SEM::DigitalVideoConfig::DigitalVideoConfigReportType& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(::UMAA::SEM::DigitalVideoConfig::DigitalVideoConfigReportType& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(::UMAA::SEM::DigitalVideoConfig::DigitalVideoConfigReportType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(::UMAA::SEM::DigitalVideoConfig::DigitalVideoConfigReportType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };
    }
}

namespace rti { 
    namespace topic {

        template<>
        struct dynamic_type< ::UMAA::SEM::DigitalVideoConfig::DigitalVideoConfigReportType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };

        template <>
        struct extensibility< ::UMAA::SEM::DigitalVideoConfig::DigitalVideoConfigReportType > {
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

#endif // DigitalVideoConfigReportType_612099485_hpp

