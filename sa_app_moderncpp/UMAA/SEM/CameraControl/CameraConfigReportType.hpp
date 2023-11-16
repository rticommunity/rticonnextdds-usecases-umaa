

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from CameraConfigReportType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef CameraConfigReportType_393099409_hpp
#define CameraConfigReportType_393099409_hpp

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
        namespace CameraControl {

            static const std::string CameraConfigReport_TOPIC = "UMAA::SEM::CameraControl::CameraConfigReport";

            class NDDSUSERDllExport CameraConfigReportType {
              public:
                CameraConfigReportType();

                CameraConfigReportType(double aperture,const UMAA::Common::MaritimeEnumeration::ExposureModeEnumType::ExposureModeEnumType& exposureMode,double focalLength,const UMAA::Common::Enumeration::AutomationEnumType::AutomationEnumType& focusMode,double focusValue,double horizontalFOV,bool imageStabilization,const UMAA::Common::MaritimeEnumeration::ImagingModeEnumType::ImagingModeEnumType& imagingMode,const UMAA::Common::MaritimeEnumeration::LightSensitivityEnumType::LightSensitivityEnumType& lightSensitivity,double maxZoomLevel,const UMAA::Common::MaritimeEnumeration::MeteringModeEnumType::MeteringModeEnumType& meteringMode,double minZoomLevel,double shutterSpeed,const UMAA::Common::Enumeration::PowerStatusEnumType::PowerStatusEnumType& status,double verticalFOV,const UMAA::Common::MaritimeEnumeration::WhiteBalanceEnumType::WhiteBalanceEnumType& whiteBalance,double zoomLevel,const UMAA::Common::MaritimeEnumeration::ZoomModeEnumType::ZoomModeEnumType& zoomMode,const UMAA::Common::Measurement::NumericGUID& source,const UMAA::Common::Measurement::DateTime& timeStamp);

                #ifdef RTI_CXX11_RVALUE_REFERENCES
                #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
                CameraConfigReportType (CameraConfigReportType&&) = default;
                CameraConfigReportType& operator=(CameraConfigReportType&&) = default;
                CameraConfigReportType& operator=(const CameraConfigReportType&) = default;
                CameraConfigReportType(const CameraConfigReportType&) = default;
                #else
                CameraConfigReportType(CameraConfigReportType&& other_) OMG_NOEXCEPT;  
                CameraConfigReportType& operator=(CameraConfigReportType&&  other_) OMG_NOEXCEPT;
                #endif
                #endif 

                double& aperture() OMG_NOEXCEPT {
                    return m_aperture_;
                }

                const double& aperture() const OMG_NOEXCEPT {
                    return m_aperture_;
                }

                void aperture(double value) {
                    m_aperture_ = value;
                }

                UMAA::Common::MaritimeEnumeration::ExposureModeEnumType::ExposureModeEnumType& exposureMode() OMG_NOEXCEPT {
                    return m_exposureMode_;
                }

                const UMAA::Common::MaritimeEnumeration::ExposureModeEnumType::ExposureModeEnumType& exposureMode() const OMG_NOEXCEPT {
                    return m_exposureMode_;
                }

                void exposureMode(const UMAA::Common::MaritimeEnumeration::ExposureModeEnumType::ExposureModeEnumType& value) {
                    m_exposureMode_ = value;
                }

                void exposureMode(UMAA::Common::MaritimeEnumeration::ExposureModeEnumType::ExposureModeEnumType&& value) {
                    m_exposureMode_ = std::move(value);
                }
                double& focalLength() OMG_NOEXCEPT {
                    return m_focalLength_;
                }

                const double& focalLength() const OMG_NOEXCEPT {
                    return m_focalLength_;
                }

                void focalLength(double value) {
                    m_focalLength_ = value;
                }

                UMAA::Common::Enumeration::AutomationEnumType::AutomationEnumType& focusMode() OMG_NOEXCEPT {
                    return m_focusMode_;
                }

                const UMAA::Common::Enumeration::AutomationEnumType::AutomationEnumType& focusMode() const OMG_NOEXCEPT {
                    return m_focusMode_;
                }

                void focusMode(const UMAA::Common::Enumeration::AutomationEnumType::AutomationEnumType& value) {
                    m_focusMode_ = value;
                }

                void focusMode(UMAA::Common::Enumeration::AutomationEnumType::AutomationEnumType&& value) {
                    m_focusMode_ = std::move(value);
                }
                double& focusValue() OMG_NOEXCEPT {
                    return m_focusValue_;
                }

                const double& focusValue() const OMG_NOEXCEPT {
                    return m_focusValue_;
                }

                void focusValue(double value) {
                    m_focusValue_ = value;
                }

                double& horizontalFOV() OMG_NOEXCEPT {
                    return m_horizontalFOV_;
                }

                const double& horizontalFOV() const OMG_NOEXCEPT {
                    return m_horizontalFOV_;
                }

                void horizontalFOV(double value) {
                    m_horizontalFOV_ = value;
                }

                bool& imageStabilization() OMG_NOEXCEPT {
                    return m_imageStabilization_;
                }

                const bool& imageStabilization() const OMG_NOEXCEPT {
                    return m_imageStabilization_;
                }

                void imageStabilization(bool value) {
                    m_imageStabilization_ = value;
                }

                UMAA::Common::MaritimeEnumeration::ImagingModeEnumType::ImagingModeEnumType& imagingMode() OMG_NOEXCEPT {
                    return m_imagingMode_;
                }

                const UMAA::Common::MaritimeEnumeration::ImagingModeEnumType::ImagingModeEnumType& imagingMode() const OMG_NOEXCEPT {
                    return m_imagingMode_;
                }

                void imagingMode(const UMAA::Common::MaritimeEnumeration::ImagingModeEnumType::ImagingModeEnumType& value) {
                    m_imagingMode_ = value;
                }

                void imagingMode(UMAA::Common::MaritimeEnumeration::ImagingModeEnumType::ImagingModeEnumType&& value) {
                    m_imagingMode_ = std::move(value);
                }
                UMAA::Common::MaritimeEnumeration::LightSensitivityEnumType::LightSensitivityEnumType& lightSensitivity() OMG_NOEXCEPT {
                    return m_lightSensitivity_;
                }

                const UMAA::Common::MaritimeEnumeration::LightSensitivityEnumType::LightSensitivityEnumType& lightSensitivity() const OMG_NOEXCEPT {
                    return m_lightSensitivity_;
                }

                void lightSensitivity(const UMAA::Common::MaritimeEnumeration::LightSensitivityEnumType::LightSensitivityEnumType& value) {
                    m_lightSensitivity_ = value;
                }

                void lightSensitivity(UMAA::Common::MaritimeEnumeration::LightSensitivityEnumType::LightSensitivityEnumType&& value) {
                    m_lightSensitivity_ = std::move(value);
                }
                double& maxZoomLevel() OMG_NOEXCEPT {
                    return m_maxZoomLevel_;
                }

                const double& maxZoomLevel() const OMG_NOEXCEPT {
                    return m_maxZoomLevel_;
                }

                void maxZoomLevel(double value) {
                    m_maxZoomLevel_ = value;
                }

                UMAA::Common::MaritimeEnumeration::MeteringModeEnumType::MeteringModeEnumType& meteringMode() OMG_NOEXCEPT {
                    return m_meteringMode_;
                }

                const UMAA::Common::MaritimeEnumeration::MeteringModeEnumType::MeteringModeEnumType& meteringMode() const OMG_NOEXCEPT {
                    return m_meteringMode_;
                }

                void meteringMode(const UMAA::Common::MaritimeEnumeration::MeteringModeEnumType::MeteringModeEnumType& value) {
                    m_meteringMode_ = value;
                }

                void meteringMode(UMAA::Common::MaritimeEnumeration::MeteringModeEnumType::MeteringModeEnumType&& value) {
                    m_meteringMode_ = std::move(value);
                }
                double& minZoomLevel() OMG_NOEXCEPT {
                    return m_minZoomLevel_;
                }

                const double& minZoomLevel() const OMG_NOEXCEPT {
                    return m_minZoomLevel_;
                }

                void minZoomLevel(double value) {
                    m_minZoomLevel_ = value;
                }

                double& shutterSpeed() OMG_NOEXCEPT {
                    return m_shutterSpeed_;
                }

                const double& shutterSpeed() const OMG_NOEXCEPT {
                    return m_shutterSpeed_;
                }

                void shutterSpeed(double value) {
                    m_shutterSpeed_ = value;
                }

                UMAA::Common::Enumeration::PowerStatusEnumType::PowerStatusEnumType& status() OMG_NOEXCEPT {
                    return m_status_;
                }

                const UMAA::Common::Enumeration::PowerStatusEnumType::PowerStatusEnumType& status() const OMG_NOEXCEPT {
                    return m_status_;
                }

                void status(const UMAA::Common::Enumeration::PowerStatusEnumType::PowerStatusEnumType& value) {
                    m_status_ = value;
                }

                void status(UMAA::Common::Enumeration::PowerStatusEnumType::PowerStatusEnumType&& value) {
                    m_status_ = std::move(value);
                }
                double& verticalFOV() OMG_NOEXCEPT {
                    return m_verticalFOV_;
                }

                const double& verticalFOV() const OMG_NOEXCEPT {
                    return m_verticalFOV_;
                }

                void verticalFOV(double value) {
                    m_verticalFOV_ = value;
                }

                UMAA::Common::MaritimeEnumeration::WhiteBalanceEnumType::WhiteBalanceEnumType& whiteBalance() OMG_NOEXCEPT {
                    return m_whiteBalance_;
                }

                const UMAA::Common::MaritimeEnumeration::WhiteBalanceEnumType::WhiteBalanceEnumType& whiteBalance() const OMG_NOEXCEPT {
                    return m_whiteBalance_;
                }

                void whiteBalance(const UMAA::Common::MaritimeEnumeration::WhiteBalanceEnumType::WhiteBalanceEnumType& value) {
                    m_whiteBalance_ = value;
                }

                void whiteBalance(UMAA::Common::MaritimeEnumeration::WhiteBalanceEnumType::WhiteBalanceEnumType&& value) {
                    m_whiteBalance_ = std::move(value);
                }
                double& zoomLevel() OMG_NOEXCEPT {
                    return m_zoomLevel_;
                }

                const double& zoomLevel() const OMG_NOEXCEPT {
                    return m_zoomLevel_;
                }

                void zoomLevel(double value) {
                    m_zoomLevel_ = value;
                }

                UMAA::Common::MaritimeEnumeration::ZoomModeEnumType::ZoomModeEnumType& zoomMode() OMG_NOEXCEPT {
                    return m_zoomMode_;
                }

                const UMAA::Common::MaritimeEnumeration::ZoomModeEnumType::ZoomModeEnumType& zoomMode() const OMG_NOEXCEPT {
                    return m_zoomMode_;
                }

                void zoomMode(const UMAA::Common::MaritimeEnumeration::ZoomModeEnumType::ZoomModeEnumType& value) {
                    m_zoomMode_ = value;
                }

                void zoomMode(UMAA::Common::MaritimeEnumeration::ZoomModeEnumType::ZoomModeEnumType&& value) {
                    m_zoomMode_ = std::move(value);
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

                bool operator == (const CameraConfigReportType& other_) const;
                bool operator != (const CameraConfigReportType& other_) const;

                void swap(CameraConfigReportType& other_) OMG_NOEXCEPT ;

              private:

                double m_aperture_;
                UMAA::Common::MaritimeEnumeration::ExposureModeEnumType::ExposureModeEnumType m_exposureMode_;
                double m_focalLength_;
                UMAA::Common::Enumeration::AutomationEnumType::AutomationEnumType m_focusMode_;
                double m_focusValue_;
                double m_horizontalFOV_;
                bool m_imageStabilization_;
                UMAA::Common::MaritimeEnumeration::ImagingModeEnumType::ImagingModeEnumType m_imagingMode_;
                UMAA::Common::MaritimeEnumeration::LightSensitivityEnumType::LightSensitivityEnumType m_lightSensitivity_;
                double m_maxZoomLevel_;
                UMAA::Common::MaritimeEnumeration::MeteringModeEnumType::MeteringModeEnumType m_meteringMode_;
                double m_minZoomLevel_;
                double m_shutterSpeed_;
                UMAA::Common::Enumeration::PowerStatusEnumType::PowerStatusEnumType m_status_;
                double m_verticalFOV_;
                UMAA::Common::MaritimeEnumeration::WhiteBalanceEnumType::WhiteBalanceEnumType m_whiteBalance_;
                double m_zoomLevel_;
                UMAA::Common::MaritimeEnumeration::ZoomModeEnumType::ZoomModeEnumType m_zoomMode_;
                UMAA::Common::Measurement::NumericGUID m_source_;
                UMAA::Common::Measurement::DateTime m_timeStamp_;

            };

            inline void swap(CameraConfigReportType& a, CameraConfigReportType& b)  OMG_NOEXCEPT 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const CameraConfigReportType& sample);

        } // namespace CameraControl  
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
        struct topic_type_name< UMAA::SEM::CameraControl::CameraConfigReportType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::SEM::CameraControl::CameraConfigReportType";
            }
        };

        template<>
        struct is_topic_type< UMAA::SEM::CameraControl::CameraConfigReportType > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< UMAA::SEM::CameraControl::CameraConfigReportType > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const UMAA::SEM::CameraControl::CameraConfigReportType& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(UMAA::SEM::CameraControl::CameraConfigReportType& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(UMAA::SEM::CameraControl::CameraConfigReportType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(UMAA::SEM::CameraControl::CameraConfigReportType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

    }
}

namespace rti { 
    namespace topic {

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< UMAA::SEM::CameraControl::CameraConfigReportType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< UMAA::SEM::CameraControl::CameraConfigReportType > {
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

#endif // CameraConfigReportType_393099409_hpp

