

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from CameraSpecsReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <iosfwd>
#include <iomanip>
#include <cmath>
#include <limits>

#ifndef NDDS_STANDALONE_TYPE
#include "rti/topic/cdr/Serialization.hpp"
#include "CameraSpecsReportTypePlugin.hpp"
#else
#include "rti/topic/cdr/SerializationHelpers.hpp"
#endif

#include "CameraSpecsReportType.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace SEM {

        namespace CameraSpecs {

            // ---- CameraSpecsReportType: 

            CameraSpecsReportType::CameraSpecsReportType() :
                m_exposureModeAperture_ (0) ,
                m_exposureModeAuto_ (0) ,
                m_exposureModeManual_ (0) ,
                m_exposureModeShutter_ (0) ,
                m_focusModeAuto_ (0) ,
                m_focusModeManual_ (0) ,
                m_imageStabilization_ (0) ,
                m_imagingModeColor_ (0) ,
                m_imagingModeGreyscale_ (0) ,
                m_imagingModeInfrared_ (0) ,
                m_imagingModeLowlight_ (0) ,
                m_lightSensitivity_ISO100_ (0) ,
                m_lightSensitivity_ISO1600_ (0) ,
                m_lightSensitivity_ISO200_ (0) ,
                m_lightSensitivity_ISO3200_ (0) ,
                m_lightSensitivity_ISO400_ (0) ,
                m_lightSensitivity_ISO800_ (0) ,
                m_lightSensitivityAuto_ (0) ,
                m_maxAperture_ (0.0) ,
                m_maxFocalLength_ (0.0) ,
                m_maxShutterSpeed_ (0.0) ,
                m_meteringModeAuto_ (0) ,
                m_meteringModeCenterWeighted_ (0) ,
                m_meteringModeSpot_ (0) ,
                m_minAperture_ (0.0) ,
                m_minFocalLength_ (0.0) ,
                m_minShutterSpeed_ (0.0) ,
                m_name_ ("") ,
                m_stateActive_ (0) ,
                m_stateOff_ (0) ,
                m_stateStandby_ (0) ,
                m_whiteBalanceAuto_ (0) ,
                m_whiteBalanceCloudy_ (0) ,
                m_whiteBalanceDaylight_ (0) ,
                m_whiteBalanceFlash_ (0) ,
                m_whiteBalanceFluorescent_ (0) ,
                m_whiteBalanceShade_ (0) ,
                m_whiteBalanceTungsten_ (0) ,
                m_zoomModeAnalog_ (0) ,
                m_zoomModeDigital_ (0) ,
                m_zoomModeMixed_ (0) ,
                m_zoomModeOff_ (0)  {

            }   

            CameraSpecsReportType::CameraSpecsReportType (bool exposureModeAperture_,bool exposureModeAuto_,bool exposureModeManual_,bool exposureModeShutter_,bool focusModeAuto_,bool focusModeManual_,bool imageStabilization_,bool imagingModeColor_,bool imagingModeGreyscale_,bool imagingModeInfrared_,bool imagingModeLowlight_,bool lightSensitivity_ISO100_,bool lightSensitivity_ISO1600_,bool lightSensitivity_ISO200_,bool lightSensitivity_ISO3200_,bool lightSensitivity_ISO400_,bool lightSensitivity_ISO800_,bool lightSensitivityAuto_,double maxAperture_,double maxFocalLength_,double maxShutterSpeed_,bool meteringModeAuto_,bool meteringModeCenterWeighted_,bool meteringModeSpot_,double minAperture_,double minFocalLength_,double minShutterSpeed_,const std::string& name_,bool stateActive_,bool stateOff_,bool stateStandby_,bool whiteBalanceAuto_,bool whiteBalanceCloudy_,bool whiteBalanceDaylight_,bool whiteBalanceFlash_,bool whiteBalanceFluorescent_,bool whiteBalanceShade_,bool whiteBalanceTungsten_,bool zoomModeAnalog_,bool zoomModeDigital_,bool zoomModeMixed_,bool zoomModeOff_,const ::UMAA::Common::Measurement::NumericGUID& source_,const ::UMAA::Common::Measurement::DateTime& timeStamp_):
                m_exposureModeAperture_(exposureModeAperture_), 
                m_exposureModeAuto_(exposureModeAuto_), 
                m_exposureModeManual_(exposureModeManual_), 
                m_exposureModeShutter_(exposureModeShutter_), 
                m_focusModeAuto_(focusModeAuto_), 
                m_focusModeManual_(focusModeManual_), 
                m_imageStabilization_(imageStabilization_), 
                m_imagingModeColor_(imagingModeColor_), 
                m_imagingModeGreyscale_(imagingModeGreyscale_), 
                m_imagingModeInfrared_(imagingModeInfrared_), 
                m_imagingModeLowlight_(imagingModeLowlight_), 
                m_lightSensitivity_ISO100_(lightSensitivity_ISO100_), 
                m_lightSensitivity_ISO1600_(lightSensitivity_ISO1600_), 
                m_lightSensitivity_ISO200_(lightSensitivity_ISO200_), 
                m_lightSensitivity_ISO3200_(lightSensitivity_ISO3200_), 
                m_lightSensitivity_ISO400_(lightSensitivity_ISO400_), 
                m_lightSensitivity_ISO800_(lightSensitivity_ISO800_), 
                m_lightSensitivityAuto_(lightSensitivityAuto_), 
                m_maxAperture_(maxAperture_), 
                m_maxFocalLength_(maxFocalLength_), 
                m_maxShutterSpeed_(maxShutterSpeed_), 
                m_meteringModeAuto_(meteringModeAuto_), 
                m_meteringModeCenterWeighted_(meteringModeCenterWeighted_), 
                m_meteringModeSpot_(meteringModeSpot_), 
                m_minAperture_(minAperture_), 
                m_minFocalLength_(minFocalLength_), 
                m_minShutterSpeed_(minShutterSpeed_), 
                m_name_(name_), 
                m_stateActive_(stateActive_), 
                m_stateOff_(stateOff_), 
                m_stateStandby_(stateStandby_), 
                m_whiteBalanceAuto_(whiteBalanceAuto_), 
                m_whiteBalanceCloudy_(whiteBalanceCloudy_), 
                m_whiteBalanceDaylight_(whiteBalanceDaylight_), 
                m_whiteBalanceFlash_(whiteBalanceFlash_), 
                m_whiteBalanceFluorescent_(whiteBalanceFluorescent_), 
                m_whiteBalanceShade_(whiteBalanceShade_), 
                m_whiteBalanceTungsten_(whiteBalanceTungsten_), 
                m_zoomModeAnalog_(zoomModeAnalog_), 
                m_zoomModeDigital_(zoomModeDigital_), 
                m_zoomModeMixed_(zoomModeMixed_), 
                m_zoomModeOff_(zoomModeOff_), 
                m_source_(source_), 
                m_timeStamp_(timeStamp_) {
            }

            void CameraSpecsReportType::swap(CameraSpecsReportType& other_)  noexcept 
            {
                using std::swap;
                swap(m_exposureModeAperture_, other_.m_exposureModeAperture_);
                swap(m_exposureModeAuto_, other_.m_exposureModeAuto_);
                swap(m_exposureModeManual_, other_.m_exposureModeManual_);
                swap(m_exposureModeShutter_, other_.m_exposureModeShutter_);
                swap(m_focusModeAuto_, other_.m_focusModeAuto_);
                swap(m_focusModeManual_, other_.m_focusModeManual_);
                swap(m_imageStabilization_, other_.m_imageStabilization_);
                swap(m_imagingModeColor_, other_.m_imagingModeColor_);
                swap(m_imagingModeGreyscale_, other_.m_imagingModeGreyscale_);
                swap(m_imagingModeInfrared_, other_.m_imagingModeInfrared_);
                swap(m_imagingModeLowlight_, other_.m_imagingModeLowlight_);
                swap(m_lightSensitivity_ISO100_, other_.m_lightSensitivity_ISO100_);
                swap(m_lightSensitivity_ISO1600_, other_.m_lightSensitivity_ISO1600_);
                swap(m_lightSensitivity_ISO200_, other_.m_lightSensitivity_ISO200_);
                swap(m_lightSensitivity_ISO3200_, other_.m_lightSensitivity_ISO3200_);
                swap(m_lightSensitivity_ISO400_, other_.m_lightSensitivity_ISO400_);
                swap(m_lightSensitivity_ISO800_, other_.m_lightSensitivity_ISO800_);
                swap(m_lightSensitivityAuto_, other_.m_lightSensitivityAuto_);
                swap(m_maxAperture_, other_.m_maxAperture_);
                swap(m_maxFocalLength_, other_.m_maxFocalLength_);
                swap(m_maxShutterSpeed_, other_.m_maxShutterSpeed_);
                swap(m_meteringModeAuto_, other_.m_meteringModeAuto_);
                swap(m_meteringModeCenterWeighted_, other_.m_meteringModeCenterWeighted_);
                swap(m_meteringModeSpot_, other_.m_meteringModeSpot_);
                swap(m_minAperture_, other_.m_minAperture_);
                swap(m_minFocalLength_, other_.m_minFocalLength_);
                swap(m_minShutterSpeed_, other_.m_minShutterSpeed_);
                swap(m_name_, other_.m_name_);
                swap(m_stateActive_, other_.m_stateActive_);
                swap(m_stateOff_, other_.m_stateOff_);
                swap(m_stateStandby_, other_.m_stateStandby_);
                swap(m_whiteBalanceAuto_, other_.m_whiteBalanceAuto_);
                swap(m_whiteBalanceCloudy_, other_.m_whiteBalanceCloudy_);
                swap(m_whiteBalanceDaylight_, other_.m_whiteBalanceDaylight_);
                swap(m_whiteBalanceFlash_, other_.m_whiteBalanceFlash_);
                swap(m_whiteBalanceFluorescent_, other_.m_whiteBalanceFluorescent_);
                swap(m_whiteBalanceShade_, other_.m_whiteBalanceShade_);
                swap(m_whiteBalanceTungsten_, other_.m_whiteBalanceTungsten_);
                swap(m_zoomModeAnalog_, other_.m_zoomModeAnalog_);
                swap(m_zoomModeDigital_, other_.m_zoomModeDigital_);
                swap(m_zoomModeMixed_, other_.m_zoomModeMixed_);
                swap(m_zoomModeOff_, other_.m_zoomModeOff_);
                swap(m_source_, other_.m_source_);
                swap(m_timeStamp_, other_.m_timeStamp_);
            }  

            bool CameraSpecsReportType::operator == (const CameraSpecsReportType& other_) const {
                if (m_exposureModeAperture_ != other_.m_exposureModeAperture_) {
                    return false;
                }
                if (m_exposureModeAuto_ != other_.m_exposureModeAuto_) {
                    return false;
                }
                if (m_exposureModeManual_ != other_.m_exposureModeManual_) {
                    return false;
                }
                if (m_exposureModeShutter_ != other_.m_exposureModeShutter_) {
                    return false;
                }
                if (m_focusModeAuto_ != other_.m_focusModeAuto_) {
                    return false;
                }
                if (m_focusModeManual_ != other_.m_focusModeManual_) {
                    return false;
                }
                if (m_imageStabilization_ != other_.m_imageStabilization_) {
                    return false;
                }
                if (m_imagingModeColor_ != other_.m_imagingModeColor_) {
                    return false;
                }
                if (m_imagingModeGreyscale_ != other_.m_imagingModeGreyscale_) {
                    return false;
                }
                if (m_imagingModeInfrared_ != other_.m_imagingModeInfrared_) {
                    return false;
                }
                if (m_imagingModeLowlight_ != other_.m_imagingModeLowlight_) {
                    return false;
                }
                if (m_lightSensitivity_ISO100_ != other_.m_lightSensitivity_ISO100_) {
                    return false;
                }
                if (m_lightSensitivity_ISO1600_ != other_.m_lightSensitivity_ISO1600_) {
                    return false;
                }
                if (m_lightSensitivity_ISO200_ != other_.m_lightSensitivity_ISO200_) {
                    return false;
                }
                if (m_lightSensitivity_ISO3200_ != other_.m_lightSensitivity_ISO3200_) {
                    return false;
                }
                if (m_lightSensitivity_ISO400_ != other_.m_lightSensitivity_ISO400_) {
                    return false;
                }
                if (m_lightSensitivity_ISO800_ != other_.m_lightSensitivity_ISO800_) {
                    return false;
                }
                if (m_lightSensitivityAuto_ != other_.m_lightSensitivityAuto_) {
                    return false;
                }
                if (std::fabs(m_maxAperture_ - other_.m_maxAperture_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_maxAperture_ - other_.m_maxAperture_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                if (std::fabs(m_maxFocalLength_ - other_.m_maxFocalLength_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_maxFocalLength_ - other_.m_maxFocalLength_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                if (std::fabs(m_maxShutterSpeed_ - other_.m_maxShutterSpeed_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_maxShutterSpeed_ - other_.m_maxShutterSpeed_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                if (m_meteringModeAuto_ != other_.m_meteringModeAuto_) {
                    return false;
                }
                if (m_meteringModeCenterWeighted_ != other_.m_meteringModeCenterWeighted_) {
                    return false;
                }
                if (m_meteringModeSpot_ != other_.m_meteringModeSpot_) {
                    return false;
                }
                if (std::fabs(m_minAperture_ - other_.m_minAperture_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_minAperture_ - other_.m_minAperture_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                if (std::fabs(m_minFocalLength_ - other_.m_minFocalLength_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_minFocalLength_ - other_.m_minFocalLength_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                if (std::fabs(m_minShutterSpeed_ - other_.m_minShutterSpeed_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_minShutterSpeed_ - other_.m_minShutterSpeed_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                if (m_name_ != other_.m_name_) {
                    return false;
                }
                if (m_stateActive_ != other_.m_stateActive_) {
                    return false;
                }
                if (m_stateOff_ != other_.m_stateOff_) {
                    return false;
                }
                if (m_stateStandby_ != other_.m_stateStandby_) {
                    return false;
                }
                if (m_whiteBalanceAuto_ != other_.m_whiteBalanceAuto_) {
                    return false;
                }
                if (m_whiteBalanceCloudy_ != other_.m_whiteBalanceCloudy_) {
                    return false;
                }
                if (m_whiteBalanceDaylight_ != other_.m_whiteBalanceDaylight_) {
                    return false;
                }
                if (m_whiteBalanceFlash_ != other_.m_whiteBalanceFlash_) {
                    return false;
                }
                if (m_whiteBalanceFluorescent_ != other_.m_whiteBalanceFluorescent_) {
                    return false;
                }
                if (m_whiteBalanceShade_ != other_.m_whiteBalanceShade_) {
                    return false;
                }
                if (m_whiteBalanceTungsten_ != other_.m_whiteBalanceTungsten_) {
                    return false;
                }
                if (m_zoomModeAnalog_ != other_.m_zoomModeAnalog_) {
                    return false;
                }
                if (m_zoomModeDigital_ != other_.m_zoomModeDigital_) {
                    return false;
                }
                if (m_zoomModeMixed_ != other_.m_zoomModeMixed_) {
                    return false;
                }
                if (m_zoomModeOff_ != other_.m_zoomModeOff_) {
                    return false;
                }
                if (m_source_ != other_.m_source_) {
                    return false;
                }
                if (m_timeStamp_ != other_.m_timeStamp_) {
                    return false;
                }
                return true;
            }

            bool CameraSpecsReportType::operator != (const CameraSpecsReportType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const CameraSpecsReportType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "exposureModeAperture: " << sample.exposureModeAperture ()<<", ";
                o << "exposureModeAuto: " << sample.exposureModeAuto ()<<", ";
                o << "exposureModeManual: " << sample.exposureModeManual ()<<", ";
                o << "exposureModeShutter: " << sample.exposureModeShutter ()<<", ";
                o << "focusModeAuto: " << sample.focusModeAuto ()<<", ";
                o << "focusModeManual: " << sample.focusModeManual ()<<", ";
                o << "imageStabilization: " << sample.imageStabilization ()<<", ";
                o << "imagingModeColor: " << sample.imagingModeColor ()<<", ";
                o << "imagingModeGreyscale: " << sample.imagingModeGreyscale ()<<", ";
                o << "imagingModeInfrared: " << sample.imagingModeInfrared ()<<", ";
                o << "imagingModeLowlight: " << sample.imagingModeLowlight ()<<", ";
                o << "lightSensitivity_ISO100: " << sample.lightSensitivity_ISO100 ()<<", ";
                o << "lightSensitivity_ISO1600: " << sample.lightSensitivity_ISO1600 ()<<", ";
                o << "lightSensitivity_ISO200: " << sample.lightSensitivity_ISO200 ()<<", ";
                o << "lightSensitivity_ISO3200: " << sample.lightSensitivity_ISO3200 ()<<", ";
                o << "lightSensitivity_ISO400: " << sample.lightSensitivity_ISO400 ()<<", ";
                o << "lightSensitivity_ISO800: " << sample.lightSensitivity_ISO800 ()<<", ";
                o << "lightSensitivityAuto: " << sample.lightSensitivityAuto ()<<", ";
                o << "maxAperture: " << std::setprecision(15) << sample.maxAperture ()<<", ";
                o << "maxFocalLength: " << std::setprecision(15) << sample.maxFocalLength ()<<", ";
                o << "maxShutterSpeed: " << std::setprecision(15) << sample.maxShutterSpeed ()<<", ";
                o << "meteringModeAuto: " << sample.meteringModeAuto ()<<", ";
                o << "meteringModeCenterWeighted: " << sample.meteringModeCenterWeighted ()<<", ";
                o << "meteringModeSpot: " << sample.meteringModeSpot ()<<", ";
                o << "minAperture: " << std::setprecision(15) << sample.minAperture ()<<", ";
                o << "minFocalLength: " << std::setprecision(15) << sample.minFocalLength ()<<", ";
                o << "minShutterSpeed: " << std::setprecision(15) << sample.minShutterSpeed ()<<", ";
                o << "name: " << sample.name ()<<", ";
                o << "stateActive: " << sample.stateActive ()<<", ";
                o << "stateOff: " << sample.stateOff ()<<", ";
                o << "stateStandby: " << sample.stateStandby ()<<", ";
                o << "whiteBalanceAuto: " << sample.whiteBalanceAuto ()<<", ";
                o << "whiteBalanceCloudy: " << sample.whiteBalanceCloudy ()<<", ";
                o << "whiteBalanceDaylight: " << sample.whiteBalanceDaylight ()<<", ";
                o << "whiteBalanceFlash: " << sample.whiteBalanceFlash ()<<", ";
                o << "whiteBalanceFluorescent: " << sample.whiteBalanceFluorescent ()<<", ";
                o << "whiteBalanceShade: " << sample.whiteBalanceShade ()<<", ";
                o << "whiteBalanceTungsten: " << sample.whiteBalanceTungsten ()<<", ";
                o << "zoomModeAnalog: " << sample.zoomModeAnalog ()<<", ";
                o << "zoomModeDigital: " << sample.zoomModeDigital ()<<", ";
                o << "zoomModeMixed: " << sample.zoomModeMixed ()<<", ";
                o << "zoomModeOff: " << sample.zoomModeOff ()<<", ";
                o << "source: " << sample.source ()<<", ";
                o << "timeStamp: " << sample.timeStamp ();
                o <<"]";
                return o;
            }

        } // namespace CameraSpecs  

    } // namespace SEM  

} // namespace UMAA  

#ifdef NDDS_STANDALONE_TYPE
namespace rti {
    namespace topic {
    }
}

#else
// --- Type traits: -------------------------------------------------

namespace rti { 
    namespace topic {

        template<>
        struct native_type_code< ::UMAA::SEM::CameraSpecs::CameraSpecsReportType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member CameraSpecsReportType_g_tc_members[44]=
                {

                    {
                        (char *)"exposureModeAperture",/* Member name */
                        {
                            0,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"exposureModeAuto",/* Member name */
                        {
                            1,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"exposureModeManual",/* Member name */
                        {
                            2,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"exposureModeShutter",/* Member name */
                        {
                            3,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"focusModeAuto",/* Member name */
                        {
                            4,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"focusModeManual",/* Member name */
                        {
                            5,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"imageStabilization",/* Member name */
                        {
                            6,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"imagingModeColor",/* Member name */
                        {
                            7,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"imagingModeGreyscale",/* Member name */
                        {
                            8,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"imagingModeInfrared",/* Member name */
                        {
                            9,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"imagingModeLowlight",/* Member name */
                        {
                            10,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"lightSensitivity_ISO100",/* Member name */
                        {
                            11,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"lightSensitivity_ISO1600",/* Member name */
                        {
                            12,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"lightSensitivity_ISO200",/* Member name */
                        {
                            13,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"lightSensitivity_ISO3200",/* Member name */
                        {
                            14,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"lightSensitivity_ISO400",/* Member name */
                        {
                            15,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"lightSensitivity_ISO800",/* Member name */
                        {
                            16,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"lightSensitivityAuto",/* Member name */
                        {
                            17,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"maxAperture",/* Member name */
                        {
                            18,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"maxFocalLength",/* Member name */
                        {
                            19,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"maxShutterSpeed",/* Member name */
                        {
                            20,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"meteringModeAuto",/* Member name */
                        {
                            21,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"meteringModeCenterWeighted",/* Member name */
                        {
                            22,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"meteringModeSpot",/* Member name */
                        {
                            23,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"minAperture",/* Member name */
                        {
                            24,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"minFocalLength",/* Member name */
                        {
                            25,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"minShutterSpeed",/* Member name */
                        {
                            26,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"name",/* Member name */
                        {
                            27,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"stateActive",/* Member name */
                        {
                            28,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"stateOff",/* Member name */
                        {
                            29,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"stateStandby",/* Member name */
                        {
                            30,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"whiteBalanceAuto",/* Member name */
                        {
                            31,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"whiteBalanceCloudy",/* Member name */
                        {
                            32,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"whiteBalanceDaylight",/* Member name */
                        {
                            33,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"whiteBalanceFlash",/* Member name */
                        {
                            34,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"whiteBalanceFluorescent",/* Member name */
                        {
                            35,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"whiteBalanceShade",/* Member name */
                        {
                            36,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"whiteBalanceTungsten",/* Member name */
                        {
                            37,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"zoomModeAnalog",/* Member name */
                        {
                            38,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"zoomModeDigital",/* Member name */
                        {
                            39,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"zoomModeMixed",/* Member name */
                        {
                            40,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"zoomModeOff",/* Member name */
                        {
                            41,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"source",/* Member name */
                        {
                            42,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_KEY_MEMBER , /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"timeStamp",/* Member name */
                        {
                            43,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }
                };

                static DDS_TypeCode CameraSpecsReportType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::SEM::CameraSpecs::CameraSpecsReportType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        44, /* Number of members */
                        CameraSpecsReportType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for CameraSpecsReportType*/

                if (is_initialized) {
                    return &CameraSpecsReportType_g_tc;
                }

                is_initialized = RTI_TRUE;

                CameraSpecsReportType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                CameraSpecsReportType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                CameraSpecsReportType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                CameraSpecsReportType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                CameraSpecsReportType_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                CameraSpecsReportType_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                CameraSpecsReportType_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                CameraSpecsReportType_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                CameraSpecsReportType_g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                CameraSpecsReportType_g_tc_members[8]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                CameraSpecsReportType_g_tc_members[9]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                CameraSpecsReportType_g_tc_members[10]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                CameraSpecsReportType_g_tc_members[11]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                CameraSpecsReportType_g_tc_members[12]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                CameraSpecsReportType_g_tc_members[13]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                CameraSpecsReportType_g_tc_members[14]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                CameraSpecsReportType_g_tc_members[15]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                CameraSpecsReportType_g_tc_members[16]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                CameraSpecsReportType_g_tc_members[17]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                CameraSpecsReportType_g_tc_members[18]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::Distance_Precise_AliasTag_t>::get().native();
                CameraSpecsReportType_g_tc_members[19]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::Distance_Precise_AliasTag_t>::get().native();
                CameraSpecsReportType_g_tc_members[20]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::Duration_Seconds_AliasTag_t>::get().native();
                CameraSpecsReportType_g_tc_members[21]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                CameraSpecsReportType_g_tc_members[22]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                CameraSpecsReportType_g_tc_members[23]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                CameraSpecsReportType_g_tc_members[24]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::Distance_Precise_AliasTag_t>::get().native();
                CameraSpecsReportType_g_tc_members[25]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::Distance_Precise_AliasTag_t>::get().native();
                CameraSpecsReportType_g_tc_members[26]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::Duration_Seconds_AliasTag_t>::get().native();
                CameraSpecsReportType_g_tc_members[27]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::PrimitiveConstrained::StringShortDescription_AliasTag_t>::get().native();
                CameraSpecsReportType_g_tc_members[28]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                CameraSpecsReportType_g_tc_members[29]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                CameraSpecsReportType_g_tc_members[30]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                CameraSpecsReportType_g_tc_members[31]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                CameraSpecsReportType_g_tc_members[32]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                CameraSpecsReportType_g_tc_members[33]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                CameraSpecsReportType_g_tc_members[34]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                CameraSpecsReportType_g_tc_members[35]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                CameraSpecsReportType_g_tc_members[36]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                CameraSpecsReportType_g_tc_members[37]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                CameraSpecsReportType_g_tc_members[38]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                CameraSpecsReportType_g_tc_members[39]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                CameraSpecsReportType_g_tc_members[40]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                CameraSpecsReportType_g_tc_members[41]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                CameraSpecsReportType_g_tc_members[42]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::NumericGUID_AliasTag_t>::get().native();
                CameraSpecsReportType_g_tc_members[43]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::DateTime>::get().native();

                /* Initialize the values for member annotations. */
                CameraSpecsReportType_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                CameraSpecsReportType_g_tc_members[0]._annotations._defaultValue._u.boolean_value = 0;
                CameraSpecsReportType_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                CameraSpecsReportType_g_tc_members[1]._annotations._defaultValue._u.boolean_value = 0;
                CameraSpecsReportType_g_tc_members[2]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                CameraSpecsReportType_g_tc_members[2]._annotations._defaultValue._u.boolean_value = 0;
                CameraSpecsReportType_g_tc_members[3]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                CameraSpecsReportType_g_tc_members[3]._annotations._defaultValue._u.boolean_value = 0;
                CameraSpecsReportType_g_tc_members[4]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                CameraSpecsReportType_g_tc_members[4]._annotations._defaultValue._u.boolean_value = 0;
                CameraSpecsReportType_g_tc_members[5]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                CameraSpecsReportType_g_tc_members[5]._annotations._defaultValue._u.boolean_value = 0;
                CameraSpecsReportType_g_tc_members[6]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                CameraSpecsReportType_g_tc_members[6]._annotations._defaultValue._u.boolean_value = 0;
                CameraSpecsReportType_g_tc_members[7]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                CameraSpecsReportType_g_tc_members[7]._annotations._defaultValue._u.boolean_value = 0;
                CameraSpecsReportType_g_tc_members[8]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                CameraSpecsReportType_g_tc_members[8]._annotations._defaultValue._u.boolean_value = 0;
                CameraSpecsReportType_g_tc_members[9]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                CameraSpecsReportType_g_tc_members[9]._annotations._defaultValue._u.boolean_value = 0;
                CameraSpecsReportType_g_tc_members[10]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                CameraSpecsReportType_g_tc_members[10]._annotations._defaultValue._u.boolean_value = 0;
                CameraSpecsReportType_g_tc_members[11]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                CameraSpecsReportType_g_tc_members[11]._annotations._defaultValue._u.boolean_value = 0;
                CameraSpecsReportType_g_tc_members[12]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                CameraSpecsReportType_g_tc_members[12]._annotations._defaultValue._u.boolean_value = 0;
                CameraSpecsReportType_g_tc_members[13]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                CameraSpecsReportType_g_tc_members[13]._annotations._defaultValue._u.boolean_value = 0;
                CameraSpecsReportType_g_tc_members[14]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                CameraSpecsReportType_g_tc_members[14]._annotations._defaultValue._u.boolean_value = 0;
                CameraSpecsReportType_g_tc_members[15]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                CameraSpecsReportType_g_tc_members[15]._annotations._defaultValue._u.boolean_value = 0;
                CameraSpecsReportType_g_tc_members[16]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                CameraSpecsReportType_g_tc_members[16]._annotations._defaultValue._u.boolean_value = 0;
                CameraSpecsReportType_g_tc_members[17]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                CameraSpecsReportType_g_tc_members[17]._annotations._defaultValue._u.boolean_value = 0;
                CameraSpecsReportType_g_tc_members[18]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                CameraSpecsReportType_g_tc_members[18]._annotations._defaultValue._u.double_value = 0.0;
                CameraSpecsReportType_g_tc_members[18]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                CameraSpecsReportType_g_tc_members[18]._annotations._minValue._u.double_value = 0ULL;
                CameraSpecsReportType_g_tc_members[18]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                CameraSpecsReportType_g_tc_members[18]._annotations._maxValue._u.double_value = 401056000ULL;
                CameraSpecsReportType_g_tc_members[19]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                CameraSpecsReportType_g_tc_members[19]._annotations._defaultValue._u.double_value = 0.0;
                CameraSpecsReportType_g_tc_members[19]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                CameraSpecsReportType_g_tc_members[19]._annotations._minValue._u.double_value = 0ULL;
                CameraSpecsReportType_g_tc_members[19]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                CameraSpecsReportType_g_tc_members[19]._annotations._maxValue._u.double_value = 401056000ULL;
                CameraSpecsReportType_g_tc_members[20]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                CameraSpecsReportType_g_tc_members[20]._annotations._defaultValue._u.double_value = 0.0;
                CameraSpecsReportType_g_tc_members[20]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                CameraSpecsReportType_g_tc_members[20]._annotations._minValue._u.double_value = 0ULL;
                CameraSpecsReportType_g_tc_members[20]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                CameraSpecsReportType_g_tc_members[20]._annotations._maxValue._u.double_value = 37817280ULL;
                CameraSpecsReportType_g_tc_members[21]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                CameraSpecsReportType_g_tc_members[21]._annotations._defaultValue._u.boolean_value = 0;
                CameraSpecsReportType_g_tc_members[22]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                CameraSpecsReportType_g_tc_members[22]._annotations._defaultValue._u.boolean_value = 0;
                CameraSpecsReportType_g_tc_members[23]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                CameraSpecsReportType_g_tc_members[23]._annotations._defaultValue._u.boolean_value = 0;
                CameraSpecsReportType_g_tc_members[24]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                CameraSpecsReportType_g_tc_members[24]._annotations._defaultValue._u.double_value = 0.0;
                CameraSpecsReportType_g_tc_members[24]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                CameraSpecsReportType_g_tc_members[24]._annotations._minValue._u.double_value = 0ULL;
                CameraSpecsReportType_g_tc_members[24]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                CameraSpecsReportType_g_tc_members[24]._annotations._maxValue._u.double_value = 401056000ULL;
                CameraSpecsReportType_g_tc_members[25]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                CameraSpecsReportType_g_tc_members[25]._annotations._defaultValue._u.double_value = 0.0;
                CameraSpecsReportType_g_tc_members[25]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                CameraSpecsReportType_g_tc_members[25]._annotations._minValue._u.double_value = 0ULL;
                CameraSpecsReportType_g_tc_members[25]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                CameraSpecsReportType_g_tc_members[25]._annotations._maxValue._u.double_value = 401056000ULL;
                CameraSpecsReportType_g_tc_members[26]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                CameraSpecsReportType_g_tc_members[26]._annotations._defaultValue._u.double_value = 0.0;
                CameraSpecsReportType_g_tc_members[26]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                CameraSpecsReportType_g_tc_members[26]._annotations._minValue._u.double_value = 0ULL;
                CameraSpecsReportType_g_tc_members[26]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                CameraSpecsReportType_g_tc_members[26]._annotations._maxValue._u.double_value = 37817280ULL;
                CameraSpecsReportType_g_tc_members[27]._annotations._defaultValue._d = RTI_XCDR_TK_STRING;
                CameraSpecsReportType_g_tc_members[27]._annotations._defaultValue._u.string_value = (DDS_Char *) "";
                CameraSpecsReportType_g_tc_members[28]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                CameraSpecsReportType_g_tc_members[28]._annotations._defaultValue._u.boolean_value = 0;
                CameraSpecsReportType_g_tc_members[29]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                CameraSpecsReportType_g_tc_members[29]._annotations._defaultValue._u.boolean_value = 0;
                CameraSpecsReportType_g_tc_members[30]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                CameraSpecsReportType_g_tc_members[30]._annotations._defaultValue._u.boolean_value = 0;
                CameraSpecsReportType_g_tc_members[31]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                CameraSpecsReportType_g_tc_members[31]._annotations._defaultValue._u.boolean_value = 0;
                CameraSpecsReportType_g_tc_members[32]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                CameraSpecsReportType_g_tc_members[32]._annotations._defaultValue._u.boolean_value = 0;
                CameraSpecsReportType_g_tc_members[33]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                CameraSpecsReportType_g_tc_members[33]._annotations._defaultValue._u.boolean_value = 0;
                CameraSpecsReportType_g_tc_members[34]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                CameraSpecsReportType_g_tc_members[34]._annotations._defaultValue._u.boolean_value = 0;
                CameraSpecsReportType_g_tc_members[35]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                CameraSpecsReportType_g_tc_members[35]._annotations._defaultValue._u.boolean_value = 0;
                CameraSpecsReportType_g_tc_members[36]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                CameraSpecsReportType_g_tc_members[36]._annotations._defaultValue._u.boolean_value = 0;
                CameraSpecsReportType_g_tc_members[37]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                CameraSpecsReportType_g_tc_members[37]._annotations._defaultValue._u.boolean_value = 0;
                CameraSpecsReportType_g_tc_members[38]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                CameraSpecsReportType_g_tc_members[38]._annotations._defaultValue._u.boolean_value = 0;
                CameraSpecsReportType_g_tc_members[39]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                CameraSpecsReportType_g_tc_members[39]._annotations._defaultValue._u.boolean_value = 0;
                CameraSpecsReportType_g_tc_members[40]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                CameraSpecsReportType_g_tc_members[40]._annotations._defaultValue._u.boolean_value = 0;
                CameraSpecsReportType_g_tc_members[41]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                CameraSpecsReportType_g_tc_members[41]._annotations._defaultValue._u.boolean_value = 0;

                CameraSpecsReportType_g_tc._data._sampleAccessInfo = sample_access_info();
                CameraSpecsReportType_g_tc._data._typePlugin = type_plugin_info();    

                return &CameraSpecsReportType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::SEM::CameraSpecs::CameraSpecsReportType *sample;

                static RTIXCdrMemberAccessInfo CameraSpecsReportType_g_memberAccessInfos[44] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo CameraSpecsReportType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &CameraSpecsReportType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::SEM::CameraSpecs::CameraSpecsReportType);
                if (sample == NULL) {
                    return NULL;
                }

                CameraSpecsReportType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->exposureModeAperture() - (char *)sample);

                CameraSpecsReportType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->exposureModeAuto() - (char *)sample);

                CameraSpecsReportType_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->exposureModeManual() - (char *)sample);

                CameraSpecsReportType_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->exposureModeShutter() - (char *)sample);

                CameraSpecsReportType_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->focusModeAuto() - (char *)sample);

                CameraSpecsReportType_g_memberAccessInfos[5].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->focusModeManual() - (char *)sample);

                CameraSpecsReportType_g_memberAccessInfos[6].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->imageStabilization() - (char *)sample);

                CameraSpecsReportType_g_memberAccessInfos[7].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->imagingModeColor() - (char *)sample);

                CameraSpecsReportType_g_memberAccessInfos[8].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->imagingModeGreyscale() - (char *)sample);

                CameraSpecsReportType_g_memberAccessInfos[9].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->imagingModeInfrared() - (char *)sample);

                CameraSpecsReportType_g_memberAccessInfos[10].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->imagingModeLowlight() - (char *)sample);

                CameraSpecsReportType_g_memberAccessInfos[11].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->lightSensitivity_ISO100() - (char *)sample);

                CameraSpecsReportType_g_memberAccessInfos[12].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->lightSensitivity_ISO1600() - (char *)sample);

                CameraSpecsReportType_g_memberAccessInfos[13].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->lightSensitivity_ISO200() - (char *)sample);

                CameraSpecsReportType_g_memberAccessInfos[14].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->lightSensitivity_ISO3200() - (char *)sample);

                CameraSpecsReportType_g_memberAccessInfos[15].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->lightSensitivity_ISO400() - (char *)sample);

                CameraSpecsReportType_g_memberAccessInfos[16].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->lightSensitivity_ISO800() - (char *)sample);

                CameraSpecsReportType_g_memberAccessInfos[17].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->lightSensitivityAuto() - (char *)sample);

                CameraSpecsReportType_g_memberAccessInfos[18].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->maxAperture() - (char *)sample);

                CameraSpecsReportType_g_memberAccessInfos[19].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->maxFocalLength() - (char *)sample);

                CameraSpecsReportType_g_memberAccessInfos[20].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->maxShutterSpeed() - (char *)sample);

                CameraSpecsReportType_g_memberAccessInfos[21].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->meteringModeAuto() - (char *)sample);

                CameraSpecsReportType_g_memberAccessInfos[22].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->meteringModeCenterWeighted() - (char *)sample);

                CameraSpecsReportType_g_memberAccessInfos[23].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->meteringModeSpot() - (char *)sample);

                CameraSpecsReportType_g_memberAccessInfos[24].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->minAperture() - (char *)sample);

                CameraSpecsReportType_g_memberAccessInfos[25].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->minFocalLength() - (char *)sample);

                CameraSpecsReportType_g_memberAccessInfos[26].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->minShutterSpeed() - (char *)sample);

                CameraSpecsReportType_g_memberAccessInfos[27].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->name() - (char *)sample);

                CameraSpecsReportType_g_memberAccessInfos[28].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->stateActive() - (char *)sample);

                CameraSpecsReportType_g_memberAccessInfos[29].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->stateOff() - (char *)sample);

                CameraSpecsReportType_g_memberAccessInfos[30].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->stateStandby() - (char *)sample);

                CameraSpecsReportType_g_memberAccessInfos[31].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->whiteBalanceAuto() - (char *)sample);

                CameraSpecsReportType_g_memberAccessInfos[32].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->whiteBalanceCloudy() - (char *)sample);

                CameraSpecsReportType_g_memberAccessInfos[33].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->whiteBalanceDaylight() - (char *)sample);

                CameraSpecsReportType_g_memberAccessInfos[34].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->whiteBalanceFlash() - (char *)sample);

                CameraSpecsReportType_g_memberAccessInfos[35].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->whiteBalanceFluorescent() - (char *)sample);

                CameraSpecsReportType_g_memberAccessInfos[36].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->whiteBalanceShade() - (char *)sample);

                CameraSpecsReportType_g_memberAccessInfos[37].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->whiteBalanceTungsten() - (char *)sample);

                CameraSpecsReportType_g_memberAccessInfos[38].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->zoomModeAnalog() - (char *)sample);

                CameraSpecsReportType_g_memberAccessInfos[39].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->zoomModeDigital() - (char *)sample);

                CameraSpecsReportType_g_memberAccessInfos[40].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->zoomModeMixed() - (char *)sample);

                CameraSpecsReportType_g_memberAccessInfos[41].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->zoomModeOff() - (char *)sample);

                CameraSpecsReportType_g_memberAccessInfos[42].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->source() - (char *)sample);

                CameraSpecsReportType_g_memberAccessInfos[43].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->timeStamp() - (char *)sample);

                CameraSpecsReportType_g_sampleAccessInfo.memberAccessInfos = 
                CameraSpecsReportType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::SEM::CameraSpecs::CameraSpecsReportType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        CameraSpecsReportType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        CameraSpecsReportType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                CameraSpecsReportType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                CameraSpecsReportType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::SEM::CameraSpecs::CameraSpecsReportType >;

                CameraSpecsReportType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &CameraSpecsReportType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin CameraSpecsReportType_g_typePlugin = 
                {
                    NULL, /* serialize */
                    NULL, /* serialize_key */
                    NULL, /* deserialize_sample */
                    NULL, /* deserialize_key_sample */
                    NULL, /* skip */
                    NULL, /* get_serialized_sample_size */
                    NULL, /* get_serialized_sample_max_size_ex */
                    NULL, /* get_serialized_key_max_size_ex */
                    NULL, /* get_serialized_sample_min_size */
                    NULL, /* serialized_sample_to_key */
                    NULL,
                    NULL,
                    NULL,
                    NULL,
                    NULL
                };

                return &CameraSpecsReportType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::UMAA::SEM::CameraSpecs::CameraSpecsReportType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::SEM::CameraSpecs::CameraSpecsReportType >::get())));
        }
    }
}

namespace dds { 
    namespace topic {
        void topic_type_support< ::UMAA::SEM::CameraSpecs::CameraSpecsReportType >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                ::UMAA::SEM::CameraSpecs::CameraSpecsReportTypePlugin_new,
                ::UMAA::SEM::CameraSpecs::CameraSpecsReportTypePlugin_delete);
        }

        std::vector<char>& topic_type_support< ::UMAA::SEM::CameraSpecs::CameraSpecsReportType >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const ::UMAA::SEM::CameraSpecs::CameraSpecsReportType& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = CameraSpecsReportTypePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = CameraSpecsReportTypePlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< ::UMAA::SEM::CameraSpecs::CameraSpecsReportType >::from_cdr_buffer(::UMAA::SEM::CameraSpecs::CameraSpecsReportType& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = CameraSpecsReportTypePlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create ::UMAA::SEM::CameraSpecs::CameraSpecsReportType from cdr buffer");
        }

        void topic_type_support< ::UMAA::SEM::CameraSpecs::CameraSpecsReportType >::reset_sample(::UMAA::SEM::CameraSpecs::CameraSpecsReportType& sample) 
        {
            sample.exposureModeAperture(0);
            sample.exposureModeAuto(0);
            sample.exposureModeManual(0);
            sample.exposureModeShutter(0);
            sample.focusModeAuto(0);
            sample.focusModeManual(0);
            sample.imageStabilization(0);
            sample.imagingModeColor(0);
            sample.imagingModeGreyscale(0);
            sample.imagingModeInfrared(0);
            sample.imagingModeLowlight(0);
            sample.lightSensitivity_ISO100(0);
            sample.lightSensitivity_ISO1600(0);
            sample.lightSensitivity_ISO200(0);
            sample.lightSensitivity_ISO3200(0);
            sample.lightSensitivity_ISO400(0);
            sample.lightSensitivity_ISO800(0);
            sample.lightSensitivityAuto(0);
            sample.maxAperture(0.0);
            sample.maxFocalLength(0.0);
            sample.maxShutterSpeed(0.0);
            sample.meteringModeAuto(0);
            sample.meteringModeCenterWeighted(0);
            sample.meteringModeSpot(0);
            sample.minAperture(0.0);
            sample.minFocalLength(0.0);
            sample.minShutterSpeed(0.0);
            sample.name("");
            sample.stateActive(0);
            sample.stateOff(0);
            sample.stateStandby(0);
            sample.whiteBalanceAuto(0);
            sample.whiteBalanceCloudy(0);
            sample.whiteBalanceDaylight(0);
            sample.whiteBalanceFlash(0);
            sample.whiteBalanceFluorescent(0);
            sample.whiteBalanceShade(0);
            sample.whiteBalanceTungsten(0);
            sample.zoomModeAnalog(0);
            sample.zoomModeDigital(0);
            sample.zoomModeMixed(0);
            sample.zoomModeOff(0);
            ::rti::topic::reset_sample(sample.source());
            ::rti::topic::reset_sample(sample.timeStamp());
        }

        void topic_type_support< ::UMAA::SEM::CameraSpecs::CameraSpecsReportType >::allocate_sample(::UMAA::SEM::CameraSpecs::CameraSpecsReportType& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.name(),  -1, 1023L);
            ::rti::topic::allocate_sample(sample.source(),  -1, -1);
            ::rti::topic::allocate_sample(sample.timeStamp(),  -1, -1);
        }
    }
}  

#endif // NDDS_STANDALONE_TYPE
