

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from H264VideoEncodingCommandType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef H264VideoEncodingCommandType_1701855170_hpp
#define H264VideoEncodingCommandType_1701855170_hpp

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
        namespace H264VideoEncodingControl {

            static const std::string H264VideoEncodingCommand_TOPIC = "UMAA::SEM::H264VideoEncodingControl::H264VideoEncodingCommand";

            class NDDSUSERDllExport H264VideoEncodingCommandType {
              public:
                H264VideoEncodingCommandType();

                H264VideoEncodingCommandType(bool gradualDecoderRefresh,int32_t groupOfPictures,const UMAA::Common::MaritimeEnumeration::H264PresetEnumType::H264PresetEnumType& preset,const UMAA::Common::MaritimeEnumeration::H264EncodingEnumType::H264EncodingEnumType& profile,bool regionOfInterest,int32_t ROI_height,double ROI_highBitRate,double ROI_lowBitRate,int32_t ROI_width,int32_t ROI_x,int32_t ROI_y,const UMAA::Common::Measurement::NumericGUID& source,const UMAA::Common::Measurement::NumericGUID& destination,const UMAA::Common::Measurement::NumericGUID& sessionID,const UMAA::Common::Measurement::DateTime& timeStamp);

                #ifdef RTI_CXX11_RVALUE_REFERENCES
                #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
                H264VideoEncodingCommandType (H264VideoEncodingCommandType&&) = default;
                H264VideoEncodingCommandType& operator=(H264VideoEncodingCommandType&&) = default;
                H264VideoEncodingCommandType& operator=(const H264VideoEncodingCommandType&) = default;
                H264VideoEncodingCommandType(const H264VideoEncodingCommandType&) = default;
                #else
                H264VideoEncodingCommandType(H264VideoEncodingCommandType&& other_) OMG_NOEXCEPT;  
                H264VideoEncodingCommandType& operator=(H264VideoEncodingCommandType&&  other_) OMG_NOEXCEPT;
                #endif
                #endif 

                bool& gradualDecoderRefresh() OMG_NOEXCEPT {
                    return m_gradualDecoderRefresh_;
                }

                const bool& gradualDecoderRefresh() const OMG_NOEXCEPT {
                    return m_gradualDecoderRefresh_;
                }

                void gradualDecoderRefresh(bool value) {
                    m_gradualDecoderRefresh_ = value;
                }

                int32_t& groupOfPictures() OMG_NOEXCEPT {
                    return m_groupOfPictures_;
                }

                const int32_t& groupOfPictures() const OMG_NOEXCEPT {
                    return m_groupOfPictures_;
                }

                void groupOfPictures(int32_t value) {
                    m_groupOfPictures_ = value;
                }

                UMAA::Common::MaritimeEnumeration::H264PresetEnumType::H264PresetEnumType& preset() OMG_NOEXCEPT {
                    return m_preset_;
                }

                const UMAA::Common::MaritimeEnumeration::H264PresetEnumType::H264PresetEnumType& preset() const OMG_NOEXCEPT {
                    return m_preset_;
                }

                void preset(const UMAA::Common::MaritimeEnumeration::H264PresetEnumType::H264PresetEnumType& value) {
                    m_preset_ = value;
                }

                void preset(UMAA::Common::MaritimeEnumeration::H264PresetEnumType::H264PresetEnumType&& value) {
                    m_preset_ = std::move(value);
                }
                UMAA::Common::MaritimeEnumeration::H264EncodingEnumType::H264EncodingEnumType& profile() OMG_NOEXCEPT {
                    return m_profile_;
                }

                const UMAA::Common::MaritimeEnumeration::H264EncodingEnumType::H264EncodingEnumType& profile() const OMG_NOEXCEPT {
                    return m_profile_;
                }

                void profile(const UMAA::Common::MaritimeEnumeration::H264EncodingEnumType::H264EncodingEnumType& value) {
                    m_profile_ = value;
                }

                void profile(UMAA::Common::MaritimeEnumeration::H264EncodingEnumType::H264EncodingEnumType&& value) {
                    m_profile_ = std::move(value);
                }
                bool& regionOfInterest() OMG_NOEXCEPT {
                    return m_regionOfInterest_;
                }

                const bool& regionOfInterest() const OMG_NOEXCEPT {
                    return m_regionOfInterest_;
                }

                void regionOfInterest(bool value) {
                    m_regionOfInterest_ = value;
                }

                int32_t& ROI_height() OMG_NOEXCEPT {
                    return m_ROI_height_;
                }

                const int32_t& ROI_height() const OMG_NOEXCEPT {
                    return m_ROI_height_;
                }

                void ROI_height(int32_t value) {
                    m_ROI_height_ = value;
                }

                double& ROI_highBitRate() OMG_NOEXCEPT {
                    return m_ROI_highBitRate_;
                }

                const double& ROI_highBitRate() const OMG_NOEXCEPT {
                    return m_ROI_highBitRate_;
                }

                void ROI_highBitRate(double value) {
                    m_ROI_highBitRate_ = value;
                }

                double& ROI_lowBitRate() OMG_NOEXCEPT {
                    return m_ROI_lowBitRate_;
                }

                const double& ROI_lowBitRate() const OMG_NOEXCEPT {
                    return m_ROI_lowBitRate_;
                }

                void ROI_lowBitRate(double value) {
                    m_ROI_lowBitRate_ = value;
                }

                int32_t& ROI_width() OMG_NOEXCEPT {
                    return m_ROI_width_;
                }

                const int32_t& ROI_width() const OMG_NOEXCEPT {
                    return m_ROI_width_;
                }

                void ROI_width(int32_t value) {
                    m_ROI_width_ = value;
                }

                int32_t& ROI_x() OMG_NOEXCEPT {
                    return m_ROI_x_;
                }

                const int32_t& ROI_x() const OMG_NOEXCEPT {
                    return m_ROI_x_;
                }

                void ROI_x(int32_t value) {
                    m_ROI_x_ = value;
                }

                int32_t& ROI_y() OMG_NOEXCEPT {
                    return m_ROI_y_;
                }

                const int32_t& ROI_y() const OMG_NOEXCEPT {
                    return m_ROI_y_;
                }

                void ROI_y(int32_t value) {
                    m_ROI_y_ = value;
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
                UMAA::Common::Measurement::NumericGUID& destination() OMG_NOEXCEPT {
                    return m_destination_;
                }

                const UMAA::Common::Measurement::NumericGUID& destination() const OMG_NOEXCEPT {
                    return m_destination_;
                }

                void destination(const UMAA::Common::Measurement::NumericGUID& value) {
                    m_destination_ = value;
                }

                void destination(UMAA::Common::Measurement::NumericGUID&& value) {
                    m_destination_ = std::move(value);
                }
                UMAA::Common::Measurement::NumericGUID& sessionID() OMG_NOEXCEPT {
                    return m_sessionID_;
                }

                const UMAA::Common::Measurement::NumericGUID& sessionID() const OMG_NOEXCEPT {
                    return m_sessionID_;
                }

                void sessionID(const UMAA::Common::Measurement::NumericGUID& value) {
                    m_sessionID_ = value;
                }

                void sessionID(UMAA::Common::Measurement::NumericGUID&& value) {
                    m_sessionID_ = std::move(value);
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

                bool operator == (const H264VideoEncodingCommandType& other_) const;
                bool operator != (const H264VideoEncodingCommandType& other_) const;

                void swap(H264VideoEncodingCommandType& other_) OMG_NOEXCEPT ;

              private:

                bool m_gradualDecoderRefresh_;
                int32_t m_groupOfPictures_;
                UMAA::Common::MaritimeEnumeration::H264PresetEnumType::H264PresetEnumType m_preset_;
                UMAA::Common::MaritimeEnumeration::H264EncodingEnumType::H264EncodingEnumType m_profile_;
                bool m_regionOfInterest_;
                int32_t m_ROI_height_;
                double m_ROI_highBitRate_;
                double m_ROI_lowBitRate_;
                int32_t m_ROI_width_;
                int32_t m_ROI_x_;
                int32_t m_ROI_y_;
                UMAA::Common::Measurement::NumericGUID m_source_;
                UMAA::Common::Measurement::NumericGUID m_destination_;
                UMAA::Common::Measurement::NumericGUID m_sessionID_;
                UMAA::Common::Measurement::DateTime m_timeStamp_;

            };

            inline void swap(H264VideoEncodingCommandType& a, H264VideoEncodingCommandType& b)  OMG_NOEXCEPT 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const H264VideoEncodingCommandType& sample);

        } // namespace H264VideoEncodingControl  
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
        struct topic_type_name< UMAA::SEM::H264VideoEncodingControl::H264VideoEncodingCommandType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::SEM::H264VideoEncodingControl::H264VideoEncodingCommandType";
            }
        };

        template<>
        struct is_topic_type< UMAA::SEM::H264VideoEncodingControl::H264VideoEncodingCommandType > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< UMAA::SEM::H264VideoEncodingControl::H264VideoEncodingCommandType > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const UMAA::SEM::H264VideoEncodingControl::H264VideoEncodingCommandType& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(UMAA::SEM::H264VideoEncodingControl::H264VideoEncodingCommandType& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(UMAA::SEM::H264VideoEncodingControl::H264VideoEncodingCommandType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(UMAA::SEM::H264VideoEncodingControl::H264VideoEncodingCommandType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

    }
}

namespace rti { 
    namespace topic {

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< UMAA::SEM::H264VideoEncodingControl::H264VideoEncodingCommandType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< UMAA::SEM::H264VideoEncodingControl::H264VideoEncodingCommandType > {
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

#endif // H264VideoEncodingCommandType_1701855170_hpp

