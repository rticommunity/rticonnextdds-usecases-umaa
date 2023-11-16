

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from H264VideoEncodingConfigReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef H264VideoEncodingConfigReportType_1733188362_hpp
#define H264VideoEncodingConfigReportType_1733188362_hpp

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
namespace UMAA {
    namespace SEM {
        namespace H264VideoEncodingConfig {

            RTI_CONSTEXPR_OR_CONST_STRING std::string H264VideoEncodingConfigReport_TOPIC = "UMAA::SEM::H264VideoEncodingConfig::H264VideoEncodingConfigReport";

            class NDDSUSERDllExport H264VideoEncodingConfigReportType {
              public:

                H264VideoEncodingConfigReportType();

                H264VideoEncodingConfigReportType(bool gradualDecoderRefresh_,int32_t groupOfPictures_,const ::UMAA::Common::MaritimeEnumeration::H264PresetEnumType::H264PresetEnumType& preset_,const ::UMAA::Common::MaritimeEnumeration::H264EncodingEnumType::H264EncodingEnumType& profile_,bool regionOfInterest_,int32_t ROI_height_,double ROI_highBitRate_,double ROI_lowBitRate_,int32_t ROI_width_,int32_t ROI_x_,int32_t ROI_y_,const ::UMAA::Common::Measurement::NumericGUID& source_,const ::UMAA::Common::Measurement::DateTime& timeStamp_);

                bool& gradualDecoderRefresh() noexcept {
                    return m_gradualDecoderRefresh_;
                }

                const bool& gradualDecoderRefresh() const noexcept {
                    return m_gradualDecoderRefresh_;
                }

                void gradualDecoderRefresh(bool value) {

                    m_gradualDecoderRefresh_ = value;
                }

                int32_t& groupOfPictures() noexcept {
                    return m_groupOfPictures_;
                }

                const int32_t& groupOfPictures() const noexcept {
                    return m_groupOfPictures_;
                }

                void groupOfPictures(int32_t value) {

                    m_groupOfPictures_ = value;
                }

                ::UMAA::Common::MaritimeEnumeration::H264PresetEnumType::H264PresetEnumType& preset() noexcept {
                    return m_preset_;
                }

                const ::UMAA::Common::MaritimeEnumeration::H264PresetEnumType::H264PresetEnumType& preset() const noexcept {
                    return m_preset_;
                }

                void preset(const ::UMAA::Common::MaritimeEnumeration::H264PresetEnumType::H264PresetEnumType& value) {

                    m_preset_ = value;
                }

                void preset(::UMAA::Common::MaritimeEnumeration::H264PresetEnumType::H264PresetEnumType&& value) {
                    m_preset_ = std::move(value);
                }
                ::UMAA::Common::MaritimeEnumeration::H264EncodingEnumType::H264EncodingEnumType& profile() noexcept {
                    return m_profile_;
                }

                const ::UMAA::Common::MaritimeEnumeration::H264EncodingEnumType::H264EncodingEnumType& profile() const noexcept {
                    return m_profile_;
                }

                void profile(const ::UMAA::Common::MaritimeEnumeration::H264EncodingEnumType::H264EncodingEnumType& value) {

                    m_profile_ = value;
                }

                void profile(::UMAA::Common::MaritimeEnumeration::H264EncodingEnumType::H264EncodingEnumType&& value) {
                    m_profile_ = std::move(value);
                }
                bool& regionOfInterest() noexcept {
                    return m_regionOfInterest_;
                }

                const bool& regionOfInterest() const noexcept {
                    return m_regionOfInterest_;
                }

                void regionOfInterest(bool value) {

                    m_regionOfInterest_ = value;
                }

                int32_t& ROI_height() noexcept {
                    return m_ROI_height_;
                }

                const int32_t& ROI_height() const noexcept {
                    return m_ROI_height_;
                }

                void ROI_height(int32_t value) {

                    m_ROI_height_ = value;
                }

                double& ROI_highBitRate() noexcept {
                    return m_ROI_highBitRate_;
                }

                const double& ROI_highBitRate() const noexcept {
                    return m_ROI_highBitRate_;
                }

                void ROI_highBitRate(double value) {

                    m_ROI_highBitRate_ = value;
                }

                double& ROI_lowBitRate() noexcept {
                    return m_ROI_lowBitRate_;
                }

                const double& ROI_lowBitRate() const noexcept {
                    return m_ROI_lowBitRate_;
                }

                void ROI_lowBitRate(double value) {

                    m_ROI_lowBitRate_ = value;
                }

                int32_t& ROI_width() noexcept {
                    return m_ROI_width_;
                }

                const int32_t& ROI_width() const noexcept {
                    return m_ROI_width_;
                }

                void ROI_width(int32_t value) {

                    m_ROI_width_ = value;
                }

                int32_t& ROI_x() noexcept {
                    return m_ROI_x_;
                }

                const int32_t& ROI_x() const noexcept {
                    return m_ROI_x_;
                }

                void ROI_x(int32_t value) {

                    m_ROI_x_ = value;
                }

                int32_t& ROI_y() noexcept {
                    return m_ROI_y_;
                }

                const int32_t& ROI_y() const noexcept {
                    return m_ROI_y_;
                }

                void ROI_y(int32_t value) {

                    m_ROI_y_ = value;
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
                bool operator == (const H264VideoEncodingConfigReportType& other_) const;
                bool operator != (const H264VideoEncodingConfigReportType& other_) const;

                void swap(H264VideoEncodingConfigReportType& other_) noexcept ;

              private:

                bool m_gradualDecoderRefresh_;
                int32_t m_groupOfPictures_;
                ::UMAA::Common::MaritimeEnumeration::H264PresetEnumType::H264PresetEnumType m_preset_;
                ::UMAA::Common::MaritimeEnumeration::H264EncodingEnumType::H264EncodingEnumType m_profile_;
                bool m_regionOfInterest_;
                int32_t m_ROI_height_;
                double m_ROI_highBitRate_;
                double m_ROI_lowBitRate_;
                int32_t m_ROI_width_;
                int32_t m_ROI_x_;
                int32_t m_ROI_y_;
                ::UMAA::Common::Measurement::NumericGUID m_source_ {};
                ::UMAA::Common::Measurement::DateTime m_timeStamp_;

            };

            inline void swap(H264VideoEncodingConfigReportType& a, H264VideoEncodingConfigReportType& b)  noexcept 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const H264VideoEncodingConfigReportType& sample);

        } // namespace H264VideoEncodingConfig  
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
        struct topic_type_name< ::UMAA::SEM::H264VideoEncodingConfig::H264VideoEncodingConfigReportType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::SEM::H264VideoEncodingConfig::H264VideoEncodingConfigReportType";
            }
        };

        template<>
        struct is_topic_type< ::UMAA::SEM::H264VideoEncodingConfig::H264VideoEncodingConfigReportType > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< ::UMAA::SEM::H264VideoEncodingConfig::H264VideoEncodingConfigReportType > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const ::UMAA::SEM::H264VideoEncodingConfig::H264VideoEncodingConfigReportType& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(::UMAA::SEM::H264VideoEncodingConfig::H264VideoEncodingConfigReportType& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(::UMAA::SEM::H264VideoEncodingConfig::H264VideoEncodingConfigReportType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(::UMAA::SEM::H264VideoEncodingConfig::H264VideoEncodingConfigReportType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };
    }
}

namespace rti { 
    namespace topic {

        template<>
        struct dynamic_type< ::UMAA::SEM::H264VideoEncodingConfig::H264VideoEncodingConfigReportType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };

        template <>
        struct extensibility< ::UMAA::SEM::H264VideoEncodingConfig::H264VideoEncodingConfigReportType > {
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

#endif // H264VideoEncodingConfigReportType_1733188362_hpp

