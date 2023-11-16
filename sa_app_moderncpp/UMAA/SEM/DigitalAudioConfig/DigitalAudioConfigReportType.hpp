

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from DigitalAudioConfigReportType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef DigitalAudioConfigReportType_917450404_hpp
#define DigitalAudioConfigReportType_917450404_hpp

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
    namespace SEM {
        namespace DigitalAudioConfig {

            static const std::string DigitalAudioConfigReport_TOPIC = "UMAA::SEM::DigitalAudioConfig::DigitalAudioConfigReport";

            class NDDSUSERDllExport DigitalAudioConfigReportType {
              public:
                DigitalAudioConfigReportType();

                DigitalAudioConfigReportType(const UMAA::Common::MaritimeEnumeration::BitDepthEnumType::BitDepthEnumType& bitDepth,const UMAA::Common::MaritimeEnumeration::DigitalAudioFormatEnumType::DigitalAudioFormatEnumType& digitalFormat,const UMAA::Common::MaritimeEnumeration::AudioEncodingQualityEnumType::AudioEncodingQualityEnumType& encodingQuality,int32_t maxBitRate,int32_t minBitRate,int32_t numberOfChannels,int32_t sampleRate,int32_t sensitivity,const UMAA::Common::Measurement::NumericGUID& source,const UMAA::Common::Measurement::DateTime& timeStamp);

                #ifdef RTI_CXX11_RVALUE_REFERENCES
                #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
                DigitalAudioConfigReportType (DigitalAudioConfigReportType&&) = default;
                DigitalAudioConfigReportType& operator=(DigitalAudioConfigReportType&&) = default;
                DigitalAudioConfigReportType& operator=(const DigitalAudioConfigReportType&) = default;
                DigitalAudioConfigReportType(const DigitalAudioConfigReportType&) = default;
                #else
                DigitalAudioConfigReportType(DigitalAudioConfigReportType&& other_) OMG_NOEXCEPT;  
                DigitalAudioConfigReportType& operator=(DigitalAudioConfigReportType&&  other_) OMG_NOEXCEPT;
                #endif
                #endif 

                UMAA::Common::MaritimeEnumeration::BitDepthEnumType::BitDepthEnumType& bitDepth() OMG_NOEXCEPT {
                    return m_bitDepth_;
                }

                const UMAA::Common::MaritimeEnumeration::BitDepthEnumType::BitDepthEnumType& bitDepth() const OMG_NOEXCEPT {
                    return m_bitDepth_;
                }

                void bitDepth(const UMAA::Common::MaritimeEnumeration::BitDepthEnumType::BitDepthEnumType& value) {
                    m_bitDepth_ = value;
                }

                void bitDepth(UMAA::Common::MaritimeEnumeration::BitDepthEnumType::BitDepthEnumType&& value) {
                    m_bitDepth_ = std::move(value);
                }
                UMAA::Common::MaritimeEnumeration::DigitalAudioFormatEnumType::DigitalAudioFormatEnumType& digitalFormat() OMG_NOEXCEPT {
                    return m_digitalFormat_;
                }

                const UMAA::Common::MaritimeEnumeration::DigitalAudioFormatEnumType::DigitalAudioFormatEnumType& digitalFormat() const OMG_NOEXCEPT {
                    return m_digitalFormat_;
                }

                void digitalFormat(const UMAA::Common::MaritimeEnumeration::DigitalAudioFormatEnumType::DigitalAudioFormatEnumType& value) {
                    m_digitalFormat_ = value;
                }

                void digitalFormat(UMAA::Common::MaritimeEnumeration::DigitalAudioFormatEnumType::DigitalAudioFormatEnumType&& value) {
                    m_digitalFormat_ = std::move(value);
                }
                UMAA::Common::MaritimeEnumeration::AudioEncodingQualityEnumType::AudioEncodingQualityEnumType& encodingQuality() OMG_NOEXCEPT {
                    return m_encodingQuality_;
                }

                const UMAA::Common::MaritimeEnumeration::AudioEncodingQualityEnumType::AudioEncodingQualityEnumType& encodingQuality() const OMG_NOEXCEPT {
                    return m_encodingQuality_;
                }

                void encodingQuality(const UMAA::Common::MaritimeEnumeration::AudioEncodingQualityEnumType::AudioEncodingQualityEnumType& value) {
                    m_encodingQuality_ = value;
                }

                void encodingQuality(UMAA::Common::MaritimeEnumeration::AudioEncodingQualityEnumType::AudioEncodingQualityEnumType&& value) {
                    m_encodingQuality_ = std::move(value);
                }
                int32_t& maxBitRate() OMG_NOEXCEPT {
                    return m_maxBitRate_;
                }

                const int32_t& maxBitRate() const OMG_NOEXCEPT {
                    return m_maxBitRate_;
                }

                void maxBitRate(int32_t value) {
                    m_maxBitRate_ = value;
                }

                int32_t& minBitRate() OMG_NOEXCEPT {
                    return m_minBitRate_;
                }

                const int32_t& minBitRate() const OMG_NOEXCEPT {
                    return m_minBitRate_;
                }

                void minBitRate(int32_t value) {
                    m_minBitRate_ = value;
                }

                int32_t& numberOfChannels() OMG_NOEXCEPT {
                    return m_numberOfChannels_;
                }

                const int32_t& numberOfChannels() const OMG_NOEXCEPT {
                    return m_numberOfChannels_;
                }

                void numberOfChannels(int32_t value) {
                    m_numberOfChannels_ = value;
                }

                int32_t& sampleRate() OMG_NOEXCEPT {
                    return m_sampleRate_;
                }

                const int32_t& sampleRate() const OMG_NOEXCEPT {
                    return m_sampleRate_;
                }

                void sampleRate(int32_t value) {
                    m_sampleRate_ = value;
                }

                int32_t& sensitivity() OMG_NOEXCEPT {
                    return m_sensitivity_;
                }

                const int32_t& sensitivity() const OMG_NOEXCEPT {
                    return m_sensitivity_;
                }

                void sensitivity(int32_t value) {
                    m_sensitivity_ = value;
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

                bool operator == (const DigitalAudioConfigReportType& other_) const;
                bool operator != (const DigitalAudioConfigReportType& other_) const;

                void swap(DigitalAudioConfigReportType& other_) OMG_NOEXCEPT ;

              private:

                UMAA::Common::MaritimeEnumeration::BitDepthEnumType::BitDepthEnumType m_bitDepth_;
                UMAA::Common::MaritimeEnumeration::DigitalAudioFormatEnumType::DigitalAudioFormatEnumType m_digitalFormat_;
                UMAA::Common::MaritimeEnumeration::AudioEncodingQualityEnumType::AudioEncodingQualityEnumType m_encodingQuality_;
                int32_t m_maxBitRate_;
                int32_t m_minBitRate_;
                int32_t m_numberOfChannels_;
                int32_t m_sampleRate_;
                int32_t m_sensitivity_;
                UMAA::Common::Measurement::NumericGUID m_source_;
                UMAA::Common::Measurement::DateTime m_timeStamp_;

            };

            inline void swap(DigitalAudioConfigReportType& a, DigitalAudioConfigReportType& b)  OMG_NOEXCEPT 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const DigitalAudioConfigReportType& sample);

        } // namespace DigitalAudioConfig  
    } // namespace SEM  
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
        struct topic_type_name< UMAA::SEM::DigitalAudioConfig::DigitalAudioConfigReportType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::SEM::DigitalAudioConfig::DigitalAudioConfigReportType";
            }
        };

        template<>
        struct is_topic_type< UMAA::SEM::DigitalAudioConfig::DigitalAudioConfigReportType > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< UMAA::SEM::DigitalAudioConfig::DigitalAudioConfigReportType > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const UMAA::SEM::DigitalAudioConfig::DigitalAudioConfigReportType& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(UMAA::SEM::DigitalAudioConfig::DigitalAudioConfigReportType& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(UMAA::SEM::DigitalAudioConfig::DigitalAudioConfigReportType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(UMAA::SEM::DigitalAudioConfig::DigitalAudioConfigReportType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

    }
}

namespace rti { 
    namespace topic {

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< UMAA::SEM::DigitalAudioConfig::DigitalAudioConfigReportType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< UMAA::SEM::DigitalAudioConfig::DigitalAudioConfigReportType > {
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

#endif // DigitalAudioConfigReportType_917450404_hpp

