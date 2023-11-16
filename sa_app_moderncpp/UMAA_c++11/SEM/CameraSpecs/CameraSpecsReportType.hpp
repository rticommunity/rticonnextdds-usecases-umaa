

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from CameraSpecsReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef CameraSpecsReportType_1818787699_hpp
#define CameraSpecsReportType_1818787699_hpp

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
    namespace SEM {
        namespace CameraSpecs {

            RTI_CONSTEXPR_OR_CONST_STRING std::string CameraSpecsReport_TOPIC = "UMAA::SEM::CameraSpecs::CameraSpecsReport";

            class NDDSUSERDllExport CameraSpecsReportType {
              public:

                CameraSpecsReportType();

                CameraSpecsReportType(bool exposureModeAperture_,bool exposureModeAuto_,bool exposureModeManual_,bool exposureModeShutter_,bool focusModeAuto_,bool focusModeManual_,bool imageStabilization_,bool imagingModeColor_,bool imagingModeGreyscale_,bool imagingModeInfrared_,bool imagingModeLowlight_,bool lightSensitivity_ISO100_,bool lightSensitivity_ISO1600_,bool lightSensitivity_ISO200_,bool lightSensitivity_ISO3200_,bool lightSensitivity_ISO400_,bool lightSensitivity_ISO800_,bool lightSensitivityAuto_,double maxAperture_,double maxFocalLength_,double maxShutterSpeed_,bool meteringModeAuto_,bool meteringModeCenterWeighted_,bool meteringModeSpot_,double minAperture_,double minFocalLength_,double minShutterSpeed_,const std::string& name_,bool stateActive_,bool stateOff_,bool stateStandby_,bool whiteBalanceAuto_,bool whiteBalanceCloudy_,bool whiteBalanceDaylight_,bool whiteBalanceFlash_,bool whiteBalanceFluorescent_,bool whiteBalanceShade_,bool whiteBalanceTungsten_,bool zoomModeAnalog_,bool zoomModeDigital_,bool zoomModeMixed_,bool zoomModeOff_,const ::UMAA::Common::Measurement::NumericGUID& source_,const ::UMAA::Common::Measurement::DateTime& timeStamp_);

                bool& exposureModeAperture() noexcept {
                    return m_exposureModeAperture_;
                }

                const bool& exposureModeAperture() const noexcept {
                    return m_exposureModeAperture_;
                }

                void exposureModeAperture(bool value) {

                    m_exposureModeAperture_ = value;
                }

                bool& exposureModeAuto() noexcept {
                    return m_exposureModeAuto_;
                }

                const bool& exposureModeAuto() const noexcept {
                    return m_exposureModeAuto_;
                }

                void exposureModeAuto(bool value) {

                    m_exposureModeAuto_ = value;
                }

                bool& exposureModeManual() noexcept {
                    return m_exposureModeManual_;
                }

                const bool& exposureModeManual() const noexcept {
                    return m_exposureModeManual_;
                }

                void exposureModeManual(bool value) {

                    m_exposureModeManual_ = value;
                }

                bool& exposureModeShutter() noexcept {
                    return m_exposureModeShutter_;
                }

                const bool& exposureModeShutter() const noexcept {
                    return m_exposureModeShutter_;
                }

                void exposureModeShutter(bool value) {

                    m_exposureModeShutter_ = value;
                }

                bool& focusModeAuto() noexcept {
                    return m_focusModeAuto_;
                }

                const bool& focusModeAuto() const noexcept {
                    return m_focusModeAuto_;
                }

                void focusModeAuto(bool value) {

                    m_focusModeAuto_ = value;
                }

                bool& focusModeManual() noexcept {
                    return m_focusModeManual_;
                }

                const bool& focusModeManual() const noexcept {
                    return m_focusModeManual_;
                }

                void focusModeManual(bool value) {

                    m_focusModeManual_ = value;
                }

                bool& imageStabilization() noexcept {
                    return m_imageStabilization_;
                }

                const bool& imageStabilization() const noexcept {
                    return m_imageStabilization_;
                }

                void imageStabilization(bool value) {

                    m_imageStabilization_ = value;
                }

                bool& imagingModeColor() noexcept {
                    return m_imagingModeColor_;
                }

                const bool& imagingModeColor() const noexcept {
                    return m_imagingModeColor_;
                }

                void imagingModeColor(bool value) {

                    m_imagingModeColor_ = value;
                }

                bool& imagingModeGreyscale() noexcept {
                    return m_imagingModeGreyscale_;
                }

                const bool& imagingModeGreyscale() const noexcept {
                    return m_imagingModeGreyscale_;
                }

                void imagingModeGreyscale(bool value) {

                    m_imagingModeGreyscale_ = value;
                }

                bool& imagingModeInfrared() noexcept {
                    return m_imagingModeInfrared_;
                }

                const bool& imagingModeInfrared() const noexcept {
                    return m_imagingModeInfrared_;
                }

                void imagingModeInfrared(bool value) {

                    m_imagingModeInfrared_ = value;
                }

                bool& imagingModeLowlight() noexcept {
                    return m_imagingModeLowlight_;
                }

                const bool& imagingModeLowlight() const noexcept {
                    return m_imagingModeLowlight_;
                }

                void imagingModeLowlight(bool value) {

                    m_imagingModeLowlight_ = value;
                }

                bool& lightSensitivity_ISO100() noexcept {
                    return m_lightSensitivity_ISO100_;
                }

                const bool& lightSensitivity_ISO100() const noexcept {
                    return m_lightSensitivity_ISO100_;
                }

                void lightSensitivity_ISO100(bool value) {

                    m_lightSensitivity_ISO100_ = value;
                }

                bool& lightSensitivity_ISO1600() noexcept {
                    return m_lightSensitivity_ISO1600_;
                }

                const bool& lightSensitivity_ISO1600() const noexcept {
                    return m_lightSensitivity_ISO1600_;
                }

                void lightSensitivity_ISO1600(bool value) {

                    m_lightSensitivity_ISO1600_ = value;
                }

                bool& lightSensitivity_ISO200() noexcept {
                    return m_lightSensitivity_ISO200_;
                }

                const bool& lightSensitivity_ISO200() const noexcept {
                    return m_lightSensitivity_ISO200_;
                }

                void lightSensitivity_ISO200(bool value) {

                    m_lightSensitivity_ISO200_ = value;
                }

                bool& lightSensitivity_ISO3200() noexcept {
                    return m_lightSensitivity_ISO3200_;
                }

                const bool& lightSensitivity_ISO3200() const noexcept {
                    return m_lightSensitivity_ISO3200_;
                }

                void lightSensitivity_ISO3200(bool value) {

                    m_lightSensitivity_ISO3200_ = value;
                }

                bool& lightSensitivity_ISO400() noexcept {
                    return m_lightSensitivity_ISO400_;
                }

                const bool& lightSensitivity_ISO400() const noexcept {
                    return m_lightSensitivity_ISO400_;
                }

                void lightSensitivity_ISO400(bool value) {

                    m_lightSensitivity_ISO400_ = value;
                }

                bool& lightSensitivity_ISO800() noexcept {
                    return m_lightSensitivity_ISO800_;
                }

                const bool& lightSensitivity_ISO800() const noexcept {
                    return m_lightSensitivity_ISO800_;
                }

                void lightSensitivity_ISO800(bool value) {

                    m_lightSensitivity_ISO800_ = value;
                }

                bool& lightSensitivityAuto() noexcept {
                    return m_lightSensitivityAuto_;
                }

                const bool& lightSensitivityAuto() const noexcept {
                    return m_lightSensitivityAuto_;
                }

                void lightSensitivityAuto(bool value) {

                    m_lightSensitivityAuto_ = value;
                }

                double& maxAperture() noexcept {
                    return m_maxAperture_;
                }

                const double& maxAperture() const noexcept {
                    return m_maxAperture_;
                }

                void maxAperture(double value) {

                    m_maxAperture_ = value;
                }

                double& maxFocalLength() noexcept {
                    return m_maxFocalLength_;
                }

                const double& maxFocalLength() const noexcept {
                    return m_maxFocalLength_;
                }

                void maxFocalLength(double value) {

                    m_maxFocalLength_ = value;
                }

                double& maxShutterSpeed() noexcept {
                    return m_maxShutterSpeed_;
                }

                const double& maxShutterSpeed() const noexcept {
                    return m_maxShutterSpeed_;
                }

                void maxShutterSpeed(double value) {

                    m_maxShutterSpeed_ = value;
                }

                bool& meteringModeAuto() noexcept {
                    return m_meteringModeAuto_;
                }

                const bool& meteringModeAuto() const noexcept {
                    return m_meteringModeAuto_;
                }

                void meteringModeAuto(bool value) {

                    m_meteringModeAuto_ = value;
                }

                bool& meteringModeCenterWeighted() noexcept {
                    return m_meteringModeCenterWeighted_;
                }

                const bool& meteringModeCenterWeighted() const noexcept {
                    return m_meteringModeCenterWeighted_;
                }

                void meteringModeCenterWeighted(bool value) {

                    m_meteringModeCenterWeighted_ = value;
                }

                bool& meteringModeSpot() noexcept {
                    return m_meteringModeSpot_;
                }

                const bool& meteringModeSpot() const noexcept {
                    return m_meteringModeSpot_;
                }

                void meteringModeSpot(bool value) {

                    m_meteringModeSpot_ = value;
                }

                double& minAperture() noexcept {
                    return m_minAperture_;
                }

                const double& minAperture() const noexcept {
                    return m_minAperture_;
                }

                void minAperture(double value) {

                    m_minAperture_ = value;
                }

                double& minFocalLength() noexcept {
                    return m_minFocalLength_;
                }

                const double& minFocalLength() const noexcept {
                    return m_minFocalLength_;
                }

                void minFocalLength(double value) {

                    m_minFocalLength_ = value;
                }

                double& minShutterSpeed() noexcept {
                    return m_minShutterSpeed_;
                }

                const double& minShutterSpeed() const noexcept {
                    return m_minShutterSpeed_;
                }

                void minShutterSpeed(double value) {

                    m_minShutterSpeed_ = value;
                }

                std::string& name() noexcept {
                    return m_name_;
                }

                const std::string& name() const noexcept {
                    return m_name_;
                }

                void name(const std::string& value) {

                    m_name_ = value;
                }

                void name(std::string&& value) {
                    m_name_ = std::move(value);
                }
                bool& stateActive() noexcept {
                    return m_stateActive_;
                }

                const bool& stateActive() const noexcept {
                    return m_stateActive_;
                }

                void stateActive(bool value) {

                    m_stateActive_ = value;
                }

                bool& stateOff() noexcept {
                    return m_stateOff_;
                }

                const bool& stateOff() const noexcept {
                    return m_stateOff_;
                }

                void stateOff(bool value) {

                    m_stateOff_ = value;
                }

                bool& stateStandby() noexcept {
                    return m_stateStandby_;
                }

                const bool& stateStandby() const noexcept {
                    return m_stateStandby_;
                }

                void stateStandby(bool value) {

                    m_stateStandby_ = value;
                }

                bool& whiteBalanceAuto() noexcept {
                    return m_whiteBalanceAuto_;
                }

                const bool& whiteBalanceAuto() const noexcept {
                    return m_whiteBalanceAuto_;
                }

                void whiteBalanceAuto(bool value) {

                    m_whiteBalanceAuto_ = value;
                }

                bool& whiteBalanceCloudy() noexcept {
                    return m_whiteBalanceCloudy_;
                }

                const bool& whiteBalanceCloudy() const noexcept {
                    return m_whiteBalanceCloudy_;
                }

                void whiteBalanceCloudy(bool value) {

                    m_whiteBalanceCloudy_ = value;
                }

                bool& whiteBalanceDaylight() noexcept {
                    return m_whiteBalanceDaylight_;
                }

                const bool& whiteBalanceDaylight() const noexcept {
                    return m_whiteBalanceDaylight_;
                }

                void whiteBalanceDaylight(bool value) {

                    m_whiteBalanceDaylight_ = value;
                }

                bool& whiteBalanceFlash() noexcept {
                    return m_whiteBalanceFlash_;
                }

                const bool& whiteBalanceFlash() const noexcept {
                    return m_whiteBalanceFlash_;
                }

                void whiteBalanceFlash(bool value) {

                    m_whiteBalanceFlash_ = value;
                }

                bool& whiteBalanceFluorescent() noexcept {
                    return m_whiteBalanceFluorescent_;
                }

                const bool& whiteBalanceFluorescent() const noexcept {
                    return m_whiteBalanceFluorescent_;
                }

                void whiteBalanceFluorescent(bool value) {

                    m_whiteBalanceFluorescent_ = value;
                }

                bool& whiteBalanceShade() noexcept {
                    return m_whiteBalanceShade_;
                }

                const bool& whiteBalanceShade() const noexcept {
                    return m_whiteBalanceShade_;
                }

                void whiteBalanceShade(bool value) {

                    m_whiteBalanceShade_ = value;
                }

                bool& whiteBalanceTungsten() noexcept {
                    return m_whiteBalanceTungsten_;
                }

                const bool& whiteBalanceTungsten() const noexcept {
                    return m_whiteBalanceTungsten_;
                }

                void whiteBalanceTungsten(bool value) {

                    m_whiteBalanceTungsten_ = value;
                }

                bool& zoomModeAnalog() noexcept {
                    return m_zoomModeAnalog_;
                }

                const bool& zoomModeAnalog() const noexcept {
                    return m_zoomModeAnalog_;
                }

                void zoomModeAnalog(bool value) {

                    m_zoomModeAnalog_ = value;
                }

                bool& zoomModeDigital() noexcept {
                    return m_zoomModeDigital_;
                }

                const bool& zoomModeDigital() const noexcept {
                    return m_zoomModeDigital_;
                }

                void zoomModeDigital(bool value) {

                    m_zoomModeDigital_ = value;
                }

                bool& zoomModeMixed() noexcept {
                    return m_zoomModeMixed_;
                }

                const bool& zoomModeMixed() const noexcept {
                    return m_zoomModeMixed_;
                }

                void zoomModeMixed(bool value) {

                    m_zoomModeMixed_ = value;
                }

                bool& zoomModeOff() noexcept {
                    return m_zoomModeOff_;
                }

                const bool& zoomModeOff() const noexcept {
                    return m_zoomModeOff_;
                }

                void zoomModeOff(bool value) {

                    m_zoomModeOff_ = value;
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
                bool operator == (const CameraSpecsReportType& other_) const;
                bool operator != (const CameraSpecsReportType& other_) const;

                void swap(CameraSpecsReportType& other_) noexcept ;

              private:

                bool m_exposureModeAperture_;
                bool m_exposureModeAuto_;
                bool m_exposureModeManual_;
                bool m_exposureModeShutter_;
                bool m_focusModeAuto_;
                bool m_focusModeManual_;
                bool m_imageStabilization_;
                bool m_imagingModeColor_;
                bool m_imagingModeGreyscale_;
                bool m_imagingModeInfrared_;
                bool m_imagingModeLowlight_;
                bool m_lightSensitivity_ISO100_;
                bool m_lightSensitivity_ISO1600_;
                bool m_lightSensitivity_ISO200_;
                bool m_lightSensitivity_ISO3200_;
                bool m_lightSensitivity_ISO400_;
                bool m_lightSensitivity_ISO800_;
                bool m_lightSensitivityAuto_;
                double m_maxAperture_;
                double m_maxFocalLength_;
                double m_maxShutterSpeed_;
                bool m_meteringModeAuto_;
                bool m_meteringModeCenterWeighted_;
                bool m_meteringModeSpot_;
                double m_minAperture_;
                double m_minFocalLength_;
                double m_minShutterSpeed_;
                std::string m_name_;
                bool m_stateActive_;
                bool m_stateOff_;
                bool m_stateStandby_;
                bool m_whiteBalanceAuto_;
                bool m_whiteBalanceCloudy_;
                bool m_whiteBalanceDaylight_;
                bool m_whiteBalanceFlash_;
                bool m_whiteBalanceFluorescent_;
                bool m_whiteBalanceShade_;
                bool m_whiteBalanceTungsten_;
                bool m_zoomModeAnalog_;
                bool m_zoomModeDigital_;
                bool m_zoomModeMixed_;
                bool m_zoomModeOff_;
                ::UMAA::Common::Measurement::NumericGUID m_source_ {};
                ::UMAA::Common::Measurement::DateTime m_timeStamp_;

            };

            inline void swap(CameraSpecsReportType& a, CameraSpecsReportType& b)  noexcept 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const CameraSpecsReportType& sample);

        } // namespace CameraSpecs  
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
        struct topic_type_name< ::UMAA::SEM::CameraSpecs::CameraSpecsReportType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::SEM::CameraSpecs::CameraSpecsReportType";
            }
        };

        template<>
        struct is_topic_type< ::UMAA::SEM::CameraSpecs::CameraSpecsReportType > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< ::UMAA::SEM::CameraSpecs::CameraSpecsReportType > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const ::UMAA::SEM::CameraSpecs::CameraSpecsReportType& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(::UMAA::SEM::CameraSpecs::CameraSpecsReportType& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(::UMAA::SEM::CameraSpecs::CameraSpecsReportType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(::UMAA::SEM::CameraSpecs::CameraSpecsReportType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };
    }
}

namespace rti { 
    namespace topic {

        template<>
        struct dynamic_type< ::UMAA::SEM::CameraSpecs::CameraSpecsReportType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };

        template <>
        struct extensibility< ::UMAA::SEM::CameraSpecs::CameraSpecsReportType > {
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

#endif // CameraSpecsReportType_1818787699_hpp

