

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from StillImageReportType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef StillImageReportType_658395784_hpp
#define StillImageReportType_658395784_hpp

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
#include "UMAA/Common/Environment/WorldTransformType.hpp"
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
#include "UMAA/Common/IdentifierType.hpp"
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
#include "UMAA/Common/MaritimeEnumeration/MaritimeEnumerationSets.hpp"
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
#include "UMAA/Common/Measurement/GeoPosition3DWGS84.hpp"
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
namespace UMAA {
    namespace SA {
        namespace StillImageStatus {

            static const std::string StillImageReportTypeTopic = "UMAA::SA::StillImageStatus::StillImageReportType";

            class NDDSUSERDllExport StillImageReportType {
              public:

                StillImageReportType();

                StillImageReportType(const ::dds::core::optional< double >& altitudeAGL_,const ::dds::core::optional< double >& altitudeASF_,const ::dds::core::optional< double >& altitudeGeodetic_,const ::dds::core::optional< double >& altitudeMSL_,const ::dds::core::optional< double >& depth_,const ::UMAA::Common::MaritimeEnumeration::ImageFormatEnumModule::ImageFormatEnumType& imageFormat_,const ::dds::core::optional< std::string >& imageName_,const std::string& imageURI_,const ::dds::core::optional< ::UMAA::Common::Measurement::GeoPosition3DWGS84 >& position_,const ::dds::core::optional< ::UMAA::Common::Environment::WorldTransformType >& transform_,const ::UMAA::Common::Measurement::DateTime& timeStamp_,const ::UMAA::Common::IdentifierType& source_,const ::UMAA::Common::Measurement::NumericGUID& contactID_,const ::UMAA::Common::Measurement::NumericGUID& imageID_);

                ::dds::core::optional< double >& altitudeAGL() noexcept {
                    return m_altitudeAGL_;
                }

                const ::dds::core::optional< double >& altitudeAGL() const noexcept {
                    return m_altitudeAGL_;
                }

                void altitudeAGL(const ::dds::core::optional< double >& value) {

                    m_altitudeAGL_ = value;
                }

                void altitudeAGL(::dds::core::optional< double >&& value) {
                    m_altitudeAGL_ = std::move(value);
                }
                ::dds::core::optional< double >& altitudeASF() noexcept {
                    return m_altitudeASF_;
                }

                const ::dds::core::optional< double >& altitudeASF() const noexcept {
                    return m_altitudeASF_;
                }

                void altitudeASF(const ::dds::core::optional< double >& value) {

                    m_altitudeASF_ = value;
                }

                void altitudeASF(::dds::core::optional< double >&& value) {
                    m_altitudeASF_ = std::move(value);
                }
                ::dds::core::optional< double >& altitudeGeodetic() noexcept {
                    return m_altitudeGeodetic_;
                }

                const ::dds::core::optional< double >& altitudeGeodetic() const noexcept {
                    return m_altitudeGeodetic_;
                }

                void altitudeGeodetic(const ::dds::core::optional< double >& value) {

                    m_altitudeGeodetic_ = value;
                }

                void altitudeGeodetic(::dds::core::optional< double >&& value) {
                    m_altitudeGeodetic_ = std::move(value);
                }
                ::dds::core::optional< double >& altitudeMSL() noexcept {
                    return m_altitudeMSL_;
                }

                const ::dds::core::optional< double >& altitudeMSL() const noexcept {
                    return m_altitudeMSL_;
                }

                void altitudeMSL(const ::dds::core::optional< double >& value) {

                    m_altitudeMSL_ = value;
                }

                void altitudeMSL(::dds::core::optional< double >&& value) {
                    m_altitudeMSL_ = std::move(value);
                }
                ::dds::core::optional< double >& depth() noexcept {
                    return m_depth_;
                }

                const ::dds::core::optional< double >& depth() const noexcept {
                    return m_depth_;
                }

                void depth(const ::dds::core::optional< double >& value) {

                    m_depth_ = value;
                }

                void depth(::dds::core::optional< double >&& value) {
                    m_depth_ = std::move(value);
                }
                ::UMAA::Common::MaritimeEnumeration::ImageFormatEnumModule::ImageFormatEnumType& imageFormat() noexcept {
                    return m_imageFormat_;
                }

                const ::UMAA::Common::MaritimeEnumeration::ImageFormatEnumModule::ImageFormatEnumType& imageFormat() const noexcept {
                    return m_imageFormat_;
                }

                void imageFormat(const ::UMAA::Common::MaritimeEnumeration::ImageFormatEnumModule::ImageFormatEnumType& value) {

                    m_imageFormat_ = value;
                }

                void imageFormat(::UMAA::Common::MaritimeEnumeration::ImageFormatEnumModule::ImageFormatEnumType&& value) {
                    m_imageFormat_ = std::move(value);
                }
                ::dds::core::optional< std::string >& imageName() noexcept {
                    return m_imageName_;
                }

                const ::dds::core::optional< std::string >& imageName() const noexcept {
                    return m_imageName_;
                }

                void imageName(const ::dds::core::optional< std::string >& value) {

                    m_imageName_ = value;
                }

                void imageName(::dds::core::optional< std::string >&& value) {
                    m_imageName_ = std::move(value);
                }
                std::string& imageURI() noexcept {
                    return m_imageURI_;
                }

                const std::string& imageURI() const noexcept {
                    return m_imageURI_;
                }

                void imageURI(const std::string& value) {

                    m_imageURI_ = value;
                }

                void imageURI(std::string&& value) {
                    m_imageURI_ = std::move(value);
                }
                ::dds::core::optional< ::UMAA::Common::Measurement::GeoPosition3DWGS84 >& position() noexcept {
                    return m_position_;
                }

                const ::dds::core::optional< ::UMAA::Common::Measurement::GeoPosition3DWGS84 >& position() const noexcept {
                    return m_position_;
                }

                void position(const ::dds::core::optional< ::UMAA::Common::Measurement::GeoPosition3DWGS84 >& value) {

                    m_position_ = value;
                }

                void position(::dds::core::optional< ::UMAA::Common::Measurement::GeoPosition3DWGS84 >&& value) {
                    m_position_ = std::move(value);
                }
                ::dds::core::optional< ::UMAA::Common::Environment::WorldTransformType >& transform() noexcept {
                    return m_transform_;
                }

                const ::dds::core::optional< ::UMAA::Common::Environment::WorldTransformType >& transform() const noexcept {
                    return m_transform_;
                }

                void transform(const ::dds::core::optional< ::UMAA::Common::Environment::WorldTransformType >& value) {

                    m_transform_ = value;
                }

                void transform(::dds::core::optional< ::UMAA::Common::Environment::WorldTransformType >&& value) {
                    m_transform_ = std::move(value);
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
                ::UMAA::Common::IdentifierType& source() noexcept {
                    return m_source_;
                }

                const ::UMAA::Common::IdentifierType& source() const noexcept {
                    return m_source_;
                }

                void source(const ::UMAA::Common::IdentifierType& value) {

                    m_source_ = value;
                }

                void source(::UMAA::Common::IdentifierType&& value) {
                    m_source_ = std::move(value);
                }
                ::UMAA::Common::Measurement::NumericGUID& contactID() noexcept {
                    return m_contactID_;
                }

                const ::UMAA::Common::Measurement::NumericGUID& contactID() const noexcept {
                    return m_contactID_;
                }

                void contactID(const ::UMAA::Common::Measurement::NumericGUID& value) {

                    m_contactID_ = value;
                }

                void contactID(::UMAA::Common::Measurement::NumericGUID&& value) {
                    m_contactID_ = std::move(value);
                }
                ::UMAA::Common::Measurement::NumericGUID& imageID() noexcept {
                    return m_imageID_;
                }

                const ::UMAA::Common::Measurement::NumericGUID& imageID() const noexcept {
                    return m_imageID_;
                }

                void imageID(const ::UMAA::Common::Measurement::NumericGUID& value) {

                    m_imageID_ = value;
                }

                void imageID(::UMAA::Common::Measurement::NumericGUID&& value) {
                    m_imageID_ = std::move(value);
                }
                bool operator == (const StillImageReportType& other_) const;
                bool operator != (const StillImageReportType& other_) const;

                void swap(StillImageReportType& other_) noexcept ;

              private:

                ::dds::core::optional< double > m_altitudeAGL_;
                ::dds::core::optional< double > m_altitudeASF_;
                ::dds::core::optional< double > m_altitudeGeodetic_;
                ::dds::core::optional< double > m_altitudeMSL_;
                ::dds::core::optional< double > m_depth_;
                ::UMAA::Common::MaritimeEnumeration::ImageFormatEnumModule::ImageFormatEnumType m_imageFormat_;
                ::dds::core::optional< std::string > m_imageName_;
                std::string m_imageURI_;
                ::dds::core::optional< ::UMAA::Common::Measurement::GeoPosition3DWGS84 > m_position_;
                ::dds::core::optional< ::UMAA::Common::Environment::WorldTransformType > m_transform_;
                ::UMAA::Common::Measurement::DateTime m_timeStamp_;
                ::UMAA::Common::IdentifierType m_source_;
                ::UMAA::Common::Measurement::NumericGUID m_contactID_ {};
                ::UMAA::Common::Measurement::NumericGUID m_imageID_ {};

            };

            inline void swap(StillImageReportType& a, StillImageReportType& b)  noexcept 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const StillImageReportType& sample);

        } // namespace StillImageStatus  
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
        struct topic_type_name< ::UMAA::SA::StillImageStatus::StillImageReportType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::SA::StillImageStatus::StillImageReportType";
            }
        };

        template<>
        struct is_topic_type< ::UMAA::SA::StillImageStatus::StillImageReportType > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< ::UMAA::SA::StillImageStatus::StillImageReportType > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const ::UMAA::SA::StillImageStatus::StillImageReportType& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(::UMAA::SA::StillImageStatus::StillImageReportType& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(::UMAA::SA::StillImageStatus::StillImageReportType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(::UMAA::SA::StillImageStatus::StillImageReportType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };
    }
}

namespace rti { 
    namespace topic {

        template<>
        struct dynamic_type< ::UMAA::SA::StillImageStatus::StillImageReportType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };

        template <>
        struct extensibility< ::UMAA::SA::StillImageStatus::StillImageReportType > {
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

#endif // StillImageReportType_658395784_hpp

