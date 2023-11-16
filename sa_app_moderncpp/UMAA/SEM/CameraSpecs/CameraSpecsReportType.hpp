

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from CameraSpecsReportType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
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

            static const std::string CameraSpecsReport_TOPIC = "UMAA::SEM::CameraSpecs::CameraSpecsReport";

            class NDDSUSERDllExport CameraSpecsReportType {
              public:
                CameraSpecsReportType();

                CameraSpecsReportType(bool exposureModeAperture,bool exposureModeAuto,bool exposureModeManual,bool exposureModeShutter,bool focusModeAuto,bool focusModeManual,bool imageStabilization,bool imagingModeColor,bool imagingModeGreyscale,bool imagingModeInfrared,bool imagingModeLowlight,bool lightSensitivity_ISO100,bool lightSensitivity_ISO1600,bool lightSensitivity_ISO200,bool lightSensitivity_ISO3200,bool lightSensitivity_ISO400,bool lightSensitivity_ISO800,bool lightSensitivityAuto,double maxAperture,double maxFocalLength,double maxShutterSpeed,bool meteringModeAuto,bool meteringModeCenterWeighted,bool meteringModeSpot,double minAperture,double minFocalLength,double minShutterSpeed,const std::string& name,bool stateActive,bool stateOff,bool stateStandby,bool whiteBalanceAuto,bool whiteBalanceCloudy,bool whiteBalanceDaylight,bool whiteBalanceFlash,bool whiteBalanceFluorescent,bool whiteBalanceShade,bool whiteBalanceTungsten,bool zoomModeAnalog,bool zoomModeDigital,bool zoomModeMixed,bool zoomModeOff,const UMAA::Common::Measurement::NumericGUID& source,const UMAA::Common::Measurement::DateTime& timeStamp);

                #ifdef RTI_CXX11_RVALUE_REFERENCES
                #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
                CameraSpecsReportType (CameraSpecsReportType&&) = default;
                CameraSpecsReportType& operator=(CameraSpecsReportType&&) = default;
                CameraSpecsReportType& operator=(const CameraSpecsReportType&) = default;
                CameraSpecsReportType(const CameraSpecsReportType&) = default;
                #else
                CameraSpecsReportType(CameraSpecsReportType&& other_) OMG_NOEXCEPT;  
                CameraSpecsReportType& operator=(CameraSpecsReportType&&  other_) OMG_NOEXCEPT;
                #endif
                #endif 

                bool& exposureModeAperture() OMG_NOEXCEPT {
                    return m_exposureModeAperture_;
                }

                const bool& exposureModeAperture() const OMG_NOEXCEPT {
                    return m_exposureModeAperture_;
                }

                void exposureModeAperture(bool value) {
                    m_exposureModeAperture_ = value;
                }

                bool& exposureModeAuto() OMG_NOEXCEPT {
                    return m_exposureModeAuto_;
                }

                const bool& exposureModeAuto() const OMG_NOEXCEPT {
                    return m_exposureModeAuto_;
                }

                void exposureModeAuto(bool value) {
                    m_exposureModeAuto_ = value;
                }

                bool& exposureModeManual() OMG_NOEXCEPT {
                    return m_exposureModeManual_;
                }

                const bool& exposureModeManual() const OMG_NOEXCEPT {
                    return m_exposureModeManual_;
                }

                void exposureModeManual(bool value) {
                    m_exposureModeManual_ = value;
                }

                bool& exposureModeShutter() OMG_NOEXCEPT {
                    return m_exposureModeShutter_;
                }

                const bool& exposureModeShutter() const OMG_NOEXCEPT {
                    return m_exposureModeShutter_;
                }

                void exposureModeShutter(bool value) {
                    m_exposureModeShutter_ = value;
                }

                bool& focusModeAuto() OMG_NOEXCEPT {
                    return m_focusModeAuto_;
                }

                const bool& focusModeAuto() const OMG_NOEXCEPT {
                    return m_focusModeAuto_;
                }

                void focusModeAuto(bool value) {
                    m_focusModeAuto_ = value;
                }

                bool& focusModeManual() OMG_NOEXCEPT {
                    return m_focusModeManual_;
                }

                const bool& focusModeManual() const OMG_NOEXCEPT {
                    return m_focusModeManual_;
                }

                void focusModeManual(bool value) {
                    m_focusModeManual_ = value;
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

                bool& imagingModeColor() OMG_NOEXCEPT {
                    return m_imagingModeColor_;
                }

                const bool& imagingModeColor() const OMG_NOEXCEPT {
                    return m_imagingModeColor_;
                }

                void imagingModeColor(bool value) {
                    m_imagingModeColor_ = value;
                }

                bool& imagingModeGreyscale() OMG_NOEXCEPT {
                    return m_imagingModeGreyscale_;
                }

                const bool& imagingModeGreyscale() const OMG_NOEXCEPT {
                    return m_imagingModeGreyscale_;
                }

                void imagingModeGreyscale(bool value) {
                    m_imagingModeGreyscale_ = value;
                }

                bool& imagingModeInfrared() OMG_NOEXCEPT {
                    return m_imagingModeInfrared_;
                }

                const bool& imagingModeInfrared() const OMG_NOEXCEPT {
                    return m_imagingModeInfrared_;
                }

                void imagingModeInfrared(bool value) {
                    m_imagingModeInfrared_ = value;
                }

                bool& imagingModeLowlight() OMG_NOEXCEPT {
                    return m_imagingModeLowlight_;
                }

                const bool& imagingModeLowlight() const OMG_NOEXCEPT {
                    return m_imagingModeLowlight_;
                }

                void imagingModeLowlight(bool value) {
                    m_imagingModeLowlight_ = value;
                }

                bool& lightSensitivity_ISO100() OMG_NOEXCEPT {
                    return m_lightSensitivity_ISO100_;
                }

                const bool& lightSensitivity_ISO100() const OMG_NOEXCEPT {
                    return m_lightSensitivity_ISO100_;
                }

                void lightSensitivity_ISO100(bool value) {
                    m_lightSensitivity_ISO100_ = value;
                }

                bool& lightSensitivity_ISO1600() OMG_NOEXCEPT {
                    return m_lightSensitivity_ISO1600_;
                }

                const bool& lightSensitivity_ISO1600() const OMG_NOEXCEPT {
                    return m_lightSensitivity_ISO1600_;
                }

                void lightSensitivity_ISO1600(bool value) {
                    m_lightSensitivity_ISO1600_ = value;
                }

                bool& lightSensitivity_ISO200() OMG_NOEXCEPT {
                    return m_lightSensitivity_ISO200_;
                }

                const bool& lightSensitivity_ISO200() const OMG_NOEXCEPT {
                    return m_lightSensitivity_ISO200_;
                }

                void lightSensitivity_ISO200(bool value) {
                    m_lightSensitivity_ISO200_ = value;
                }

                bool& lightSensitivity_ISO3200() OMG_NOEXCEPT {
                    return m_lightSensitivity_ISO3200_;
                }

                const bool& lightSensitivity_ISO3200() const OMG_NOEXCEPT {
                    return m_lightSensitivity_ISO3200_;
                }

                void lightSensitivity_ISO3200(bool value) {
                    m_lightSensitivity_ISO3200_ = value;
                }

                bool& lightSensitivity_ISO400() OMG_NOEXCEPT {
                    return m_lightSensitivity_ISO400_;
                }

                const bool& lightSensitivity_ISO400() const OMG_NOEXCEPT {
                    return m_lightSensitivity_ISO400_;
                }

                void lightSensitivity_ISO400(bool value) {
                    m_lightSensitivity_ISO400_ = value;
                }

                bool& lightSensitivity_ISO800() OMG_NOEXCEPT {
                    return m_lightSensitivity_ISO800_;
                }

                const bool& lightSensitivity_ISO800() const OMG_NOEXCEPT {
                    return m_lightSensitivity_ISO800_;
                }

                void lightSensitivity_ISO800(bool value) {
                    m_lightSensitivity_ISO800_ = value;
                }

                bool& lightSensitivityAuto() OMG_NOEXCEPT {
                    return m_lightSensitivityAuto_;
                }

                const bool& lightSensitivityAuto() const OMG_NOEXCEPT {
                    return m_lightSensitivityAuto_;
                }

                void lightSensitivityAuto(bool value) {
                    m_lightSensitivityAuto_ = value;
                }

                double& maxAperture() OMG_NOEXCEPT {
                    return m_maxAperture_;
                }

                const double& maxAperture() const OMG_NOEXCEPT {
                    return m_maxAperture_;
                }

                void maxAperture(double value) {
                    m_maxAperture_ = value;
                }

                double& maxFocalLength() OMG_NOEXCEPT {
                    return m_maxFocalLength_;
                }

                const double& maxFocalLength() const OMG_NOEXCEPT {
                    return m_maxFocalLength_;
                }

                void maxFocalLength(double value) {
                    m_maxFocalLength_ = value;
                }

                double& maxShutterSpeed() OMG_NOEXCEPT {
                    return m_maxShutterSpeed_;
                }

                const double& maxShutterSpeed() const OMG_NOEXCEPT {
                    return m_maxShutterSpeed_;
                }

                void maxShutterSpeed(double value) {
                    m_maxShutterSpeed_ = value;
                }

                bool& meteringModeAuto() OMG_NOEXCEPT {
                    return m_meteringModeAuto_;
                }

                const bool& meteringModeAuto() const OMG_NOEXCEPT {
                    return m_meteringModeAuto_;
                }

                void meteringModeAuto(bool value) {
                    m_meteringModeAuto_ = value;
                }

                bool& meteringModeCenterWeighted() OMG_NOEXCEPT {
                    return m_meteringModeCenterWeighted_;
                }

                const bool& meteringModeCenterWeighted() const OMG_NOEXCEPT {
                    return m_meteringModeCenterWeighted_;
                }

                void meteringModeCenterWeighted(bool value) {
                    m_meteringModeCenterWeighted_ = value;
                }

                bool& meteringModeSpot() OMG_NOEXCEPT {
                    return m_meteringModeSpot_;
                }

                const bool& meteringModeSpot() const OMG_NOEXCEPT {
                    return m_meteringModeSpot_;
                }

                void meteringModeSpot(bool value) {
                    m_meteringModeSpot_ = value;
                }

                double& minAperture() OMG_NOEXCEPT {
                    return m_minAperture_;
                }

                const double& minAperture() const OMG_NOEXCEPT {
                    return m_minAperture_;
                }

                void minAperture(double value) {
                    m_minAperture_ = value;
                }

                double& minFocalLength() OMG_NOEXCEPT {
                    return m_minFocalLength_;
                }

                const double& minFocalLength() const OMG_NOEXCEPT {
                    return m_minFocalLength_;
                }

                void minFocalLength(double value) {
                    m_minFocalLength_ = value;
                }

                double& minShutterSpeed() OMG_NOEXCEPT {
                    return m_minShutterSpeed_;
                }

                const double& minShutterSpeed() const OMG_NOEXCEPT {
                    return m_minShutterSpeed_;
                }

                void minShutterSpeed(double value) {
                    m_minShutterSpeed_ = value;
                }

                std::string& name() OMG_NOEXCEPT {
                    return m_name_;
                }

                const std::string& name() const OMG_NOEXCEPT {
                    return m_name_;
                }

                void name(const std::string& value) {
                    m_name_ = value;
                }

                void name(std::string&& value) {
                    m_name_ = std::move(value);
                }
                bool& stateActive() OMG_NOEXCEPT {
                    return m_stateActive_;
                }

                const bool& stateActive() const OMG_NOEXCEPT {
                    return m_stateActive_;
                }

                void stateActive(bool value) {
                    m_stateActive_ = value;
                }

                bool& stateOff() OMG_NOEXCEPT {
                    return m_stateOff_;
                }

                const bool& stateOff() const OMG_NOEXCEPT {
                    return m_stateOff_;
                }

                void stateOff(bool value) {
                    m_stateOff_ = value;
                }

                bool& stateStandby() OMG_NOEXCEPT {
                    return m_stateStandby_;
                }

                const bool& stateStandby() const OMG_NOEXCEPT {
                    return m_stateStandby_;
                }

                void stateStandby(bool value) {
                    m_stateStandby_ = value;
                }

                bool& whiteBalanceAuto() OMG_NOEXCEPT {
                    return m_whiteBalanceAuto_;
                }

                const bool& whiteBalanceAuto() const OMG_NOEXCEPT {
                    return m_whiteBalanceAuto_;
                }

                void whiteBalanceAuto(bool value) {
                    m_whiteBalanceAuto_ = value;
                }

                bool& whiteBalanceCloudy() OMG_NOEXCEPT {
                    return m_whiteBalanceCloudy_;
                }

                const bool& whiteBalanceCloudy() const OMG_NOEXCEPT {
                    return m_whiteBalanceCloudy_;
                }

                void whiteBalanceCloudy(bool value) {
                    m_whiteBalanceCloudy_ = value;
                }

                bool& whiteBalanceDaylight() OMG_NOEXCEPT {
                    return m_whiteBalanceDaylight_;
                }

                const bool& whiteBalanceDaylight() const OMG_NOEXCEPT {
                    return m_whiteBalanceDaylight_;
                }

                void whiteBalanceDaylight(bool value) {
                    m_whiteBalanceDaylight_ = value;
                }

                bool& whiteBalanceFlash() OMG_NOEXCEPT {
                    return m_whiteBalanceFlash_;
                }

                const bool& whiteBalanceFlash() const OMG_NOEXCEPT {
                    return m_whiteBalanceFlash_;
                }

                void whiteBalanceFlash(bool value) {
                    m_whiteBalanceFlash_ = value;
                }

                bool& whiteBalanceFluorescent() OMG_NOEXCEPT {
                    return m_whiteBalanceFluorescent_;
                }

                const bool& whiteBalanceFluorescent() const OMG_NOEXCEPT {
                    return m_whiteBalanceFluorescent_;
                }

                void whiteBalanceFluorescent(bool value) {
                    m_whiteBalanceFluorescent_ = value;
                }

                bool& whiteBalanceShade() OMG_NOEXCEPT {
                    return m_whiteBalanceShade_;
                }

                const bool& whiteBalanceShade() const OMG_NOEXCEPT {
                    return m_whiteBalanceShade_;
                }

                void whiteBalanceShade(bool value) {
                    m_whiteBalanceShade_ = value;
                }

                bool& whiteBalanceTungsten() OMG_NOEXCEPT {
                    return m_whiteBalanceTungsten_;
                }

                const bool& whiteBalanceTungsten() const OMG_NOEXCEPT {
                    return m_whiteBalanceTungsten_;
                }

                void whiteBalanceTungsten(bool value) {
                    m_whiteBalanceTungsten_ = value;
                }

                bool& zoomModeAnalog() OMG_NOEXCEPT {
                    return m_zoomModeAnalog_;
                }

                const bool& zoomModeAnalog() const OMG_NOEXCEPT {
                    return m_zoomModeAnalog_;
                }

                void zoomModeAnalog(bool value) {
                    m_zoomModeAnalog_ = value;
                }

                bool& zoomModeDigital() OMG_NOEXCEPT {
                    return m_zoomModeDigital_;
                }

                const bool& zoomModeDigital() const OMG_NOEXCEPT {
                    return m_zoomModeDigital_;
                }

                void zoomModeDigital(bool value) {
                    m_zoomModeDigital_ = value;
                }

                bool& zoomModeMixed() OMG_NOEXCEPT {
                    return m_zoomModeMixed_;
                }

                const bool& zoomModeMixed() const OMG_NOEXCEPT {
                    return m_zoomModeMixed_;
                }

                void zoomModeMixed(bool value) {
                    m_zoomModeMixed_ = value;
                }

                bool& zoomModeOff() OMG_NOEXCEPT {
                    return m_zoomModeOff_;
                }

                const bool& zoomModeOff() const OMG_NOEXCEPT {
                    return m_zoomModeOff_;
                }

                void zoomModeOff(bool value) {
                    m_zoomModeOff_ = value;
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

                bool operator == (const CameraSpecsReportType& other_) const;
                bool operator != (const CameraSpecsReportType& other_) const;

                void swap(CameraSpecsReportType& other_) OMG_NOEXCEPT ;

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
                UMAA::Common::Measurement::NumericGUID m_source_;
                UMAA::Common::Measurement::DateTime m_timeStamp_;

            };

            inline void swap(CameraSpecsReportType& a, CameraSpecsReportType& b)  OMG_NOEXCEPT 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const CameraSpecsReportType& sample);

        } // namespace CameraSpecs  
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
        struct topic_type_name< UMAA::SEM::CameraSpecs::CameraSpecsReportType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::SEM::CameraSpecs::CameraSpecsReportType";
            }
        };

        template<>
        struct is_topic_type< UMAA::SEM::CameraSpecs::CameraSpecsReportType > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< UMAA::SEM::CameraSpecs::CameraSpecsReportType > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const UMAA::SEM::CameraSpecs::CameraSpecsReportType& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(UMAA::SEM::CameraSpecs::CameraSpecsReportType& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(UMAA::SEM::CameraSpecs::CameraSpecsReportType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(UMAA::SEM::CameraSpecs::CameraSpecsReportType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

    }
}

namespace rti { 
    namespace topic {

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< UMAA::SEM::CameraSpecs::CameraSpecsReportType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< UMAA::SEM::CameraSpecs::CameraSpecsReportType > {
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

#endif // CameraSpecsReportType_1818787699_hpp

