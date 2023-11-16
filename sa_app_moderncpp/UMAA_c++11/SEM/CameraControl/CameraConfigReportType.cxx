

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from CameraConfigReportType.idl
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
#include "CameraConfigReportTypePlugin.hpp"
#else
#include "rti/topic/cdr/SerializationHelpers.hpp"
#endif

#include "CameraConfigReportType.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace SEM {

        namespace CameraControl {

            // ---- CameraConfigReportType: 

            CameraConfigReportType::CameraConfigReportType() :
                m_aperture_ (0.0) ,
                m_exposureMode_(UMAA::Common::MaritimeEnumeration::ExposureModeEnumType::ExposureModeEnumType::AUTO_DEFAULT) ,
                m_focalLength_ (0.0) ,
                m_focusMode_(UMAA::Common::Enumeration::AutomationEnumType::AutomationEnumType::AUTOMATIC) ,
                m_focusValue_ (0.0) ,
                m_horizontalFOV_ (0.0) ,
                m_imageStabilization_ (0) ,
                m_imagingMode_(UMAA::Common::MaritimeEnumeration::ImagingModeEnumType::ImagingModeEnumType::COLOR) ,
                m_lightSensitivity_(UMAA::Common::MaritimeEnumeration::LightSensitivityEnumType::LightSensitivityEnumType::AUTO_DEFAULT) ,
                m_maxZoomLevel_ (0.0) ,
                m_meteringMode_(UMAA::Common::MaritimeEnumeration::MeteringModeEnumType::MeteringModeEnumType::AUTO_DEFAULT) ,
                m_minZoomLevel_ (0.0) ,
                m_shutterSpeed_ (0.0) ,
                m_status_(UMAA::Common::Enumeration::PowerStatusEnumType::PowerStatusEnumType::POWER_OFF) ,
                m_verticalFOV_ (0.0) ,
                m_whiteBalance_(UMAA::Common::MaritimeEnumeration::WhiteBalanceEnumType::WhiteBalanceEnumType::AUTO_DEFAULT) ,
                m_zoomLevel_ (0.0) ,
                m_zoomMode_(UMAA::Common::MaritimeEnumeration::ZoomModeEnumType::ZoomModeEnumType::ANALOG_ONLY)  {

            }   

            CameraConfigReportType::CameraConfigReportType (double aperture_,const ::UMAA::Common::MaritimeEnumeration::ExposureModeEnumType::ExposureModeEnumType& exposureMode_,double focalLength_,const ::UMAA::Common::Enumeration::AutomationEnumType::AutomationEnumType& focusMode_,double focusValue_,double horizontalFOV_,bool imageStabilization_,const ::UMAA::Common::MaritimeEnumeration::ImagingModeEnumType::ImagingModeEnumType& imagingMode_,const ::UMAA::Common::MaritimeEnumeration::LightSensitivityEnumType::LightSensitivityEnumType& lightSensitivity_,double maxZoomLevel_,const ::UMAA::Common::MaritimeEnumeration::MeteringModeEnumType::MeteringModeEnumType& meteringMode_,double minZoomLevel_,double shutterSpeed_,const ::UMAA::Common::Enumeration::PowerStatusEnumType::PowerStatusEnumType& status_,double verticalFOV_,const ::UMAA::Common::MaritimeEnumeration::WhiteBalanceEnumType::WhiteBalanceEnumType& whiteBalance_,double zoomLevel_,const ::UMAA::Common::MaritimeEnumeration::ZoomModeEnumType::ZoomModeEnumType& zoomMode_,const ::UMAA::Common::Measurement::NumericGUID& source_,const ::UMAA::Common::Measurement::DateTime& timeStamp_):
                m_aperture_(aperture_), 
                m_exposureMode_(exposureMode_), 
                m_focalLength_(focalLength_), 
                m_focusMode_(focusMode_), 
                m_focusValue_(focusValue_), 
                m_horizontalFOV_(horizontalFOV_), 
                m_imageStabilization_(imageStabilization_), 
                m_imagingMode_(imagingMode_), 
                m_lightSensitivity_(lightSensitivity_), 
                m_maxZoomLevel_(maxZoomLevel_), 
                m_meteringMode_(meteringMode_), 
                m_minZoomLevel_(minZoomLevel_), 
                m_shutterSpeed_(shutterSpeed_), 
                m_status_(status_), 
                m_verticalFOV_(verticalFOV_), 
                m_whiteBalance_(whiteBalance_), 
                m_zoomLevel_(zoomLevel_), 
                m_zoomMode_(zoomMode_), 
                m_source_(source_), 
                m_timeStamp_(timeStamp_) {
            }

            void CameraConfigReportType::swap(CameraConfigReportType& other_)  noexcept 
            {
                using std::swap;
                swap(m_aperture_, other_.m_aperture_);
                swap(m_exposureMode_, other_.m_exposureMode_);
                swap(m_focalLength_, other_.m_focalLength_);
                swap(m_focusMode_, other_.m_focusMode_);
                swap(m_focusValue_, other_.m_focusValue_);
                swap(m_horizontalFOV_, other_.m_horizontalFOV_);
                swap(m_imageStabilization_, other_.m_imageStabilization_);
                swap(m_imagingMode_, other_.m_imagingMode_);
                swap(m_lightSensitivity_, other_.m_lightSensitivity_);
                swap(m_maxZoomLevel_, other_.m_maxZoomLevel_);
                swap(m_meteringMode_, other_.m_meteringMode_);
                swap(m_minZoomLevel_, other_.m_minZoomLevel_);
                swap(m_shutterSpeed_, other_.m_shutterSpeed_);
                swap(m_status_, other_.m_status_);
                swap(m_verticalFOV_, other_.m_verticalFOV_);
                swap(m_whiteBalance_, other_.m_whiteBalance_);
                swap(m_zoomLevel_, other_.m_zoomLevel_);
                swap(m_zoomMode_, other_.m_zoomMode_);
                swap(m_source_, other_.m_source_);
                swap(m_timeStamp_, other_.m_timeStamp_);
            }  

            bool CameraConfigReportType::operator == (const CameraConfigReportType& other_) const {
                if (std::fabs(m_aperture_ - other_.m_aperture_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_aperture_ - other_.m_aperture_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                if (m_exposureMode_ != other_.m_exposureMode_) {
                    return false;
                }
                if (std::fabs(m_focalLength_ - other_.m_focalLength_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_focalLength_ - other_.m_focalLength_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                if (m_focusMode_ != other_.m_focusMode_) {
                    return false;
                }
                if (std::fabs(m_focusValue_ - other_.m_focusValue_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_focusValue_ - other_.m_focusValue_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                if (std::fabs(m_horizontalFOV_ - other_.m_horizontalFOV_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_horizontalFOV_ - other_.m_horizontalFOV_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                if (m_imageStabilization_ != other_.m_imageStabilization_) {
                    return false;
                }
                if (m_imagingMode_ != other_.m_imagingMode_) {
                    return false;
                }
                if (m_lightSensitivity_ != other_.m_lightSensitivity_) {
                    return false;
                }
                if (std::fabs(m_maxZoomLevel_ - other_.m_maxZoomLevel_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_maxZoomLevel_ - other_.m_maxZoomLevel_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                if (m_meteringMode_ != other_.m_meteringMode_) {
                    return false;
                }
                if (std::fabs(m_minZoomLevel_ - other_.m_minZoomLevel_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_minZoomLevel_ - other_.m_minZoomLevel_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                if (std::fabs(m_shutterSpeed_ - other_.m_shutterSpeed_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_shutterSpeed_ - other_.m_shutterSpeed_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                if (m_status_ != other_.m_status_) {
                    return false;
                }
                if (std::fabs(m_verticalFOV_ - other_.m_verticalFOV_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_verticalFOV_ - other_.m_verticalFOV_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                if (m_whiteBalance_ != other_.m_whiteBalance_) {
                    return false;
                }
                if (std::fabs(m_zoomLevel_ - other_.m_zoomLevel_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_zoomLevel_ - other_.m_zoomLevel_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                if (m_zoomMode_ != other_.m_zoomMode_) {
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

            bool CameraConfigReportType::operator != (const CameraConfigReportType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const CameraConfigReportType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "aperture: " << std::setprecision(15) << sample.aperture ()<<", ";
                o << "exposureMode: " << sample.exposureMode ()<<", ";
                o << "focalLength: " << std::setprecision(15) << sample.focalLength ()<<", ";
                o << "focusMode: " << sample.focusMode ()<<", ";
                o << "focusValue: " << std::setprecision(15) << sample.focusValue ()<<", ";
                o << "horizontalFOV: " << std::setprecision(15) << sample.horizontalFOV ()<<", ";
                o << "imageStabilization: " << sample.imageStabilization ()<<", ";
                o << "imagingMode: " << sample.imagingMode ()<<", ";
                o << "lightSensitivity: " << sample.lightSensitivity ()<<", ";
                o << "maxZoomLevel: " << std::setprecision(15) << sample.maxZoomLevel ()<<", ";
                o << "meteringMode: " << sample.meteringMode ()<<", ";
                o << "minZoomLevel: " << std::setprecision(15) << sample.minZoomLevel ()<<", ";
                o << "shutterSpeed: " << std::setprecision(15) << sample.shutterSpeed ()<<", ";
                o << "status: " << sample.status ()<<", ";
                o << "verticalFOV: " << std::setprecision(15) << sample.verticalFOV ()<<", ";
                o << "whiteBalance: " << sample.whiteBalance ()<<", ";
                o << "zoomLevel: " << std::setprecision(15) << sample.zoomLevel ()<<", ";
                o << "zoomMode: " << sample.zoomMode ()<<", ";
                o << "source: " << sample.source ()<<", ";
                o << "timeStamp: " << sample.timeStamp ();
                o <<"]";
                return o;
            }

        } // namespace CameraControl  

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
        struct native_type_code< ::UMAA::SEM::CameraControl::CameraConfigReportType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member CameraConfigReportType_g_tc_members[20]=
                {

                    {
                        (char *)"aperture",/* Member name */
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
                        (char *)"exposureMode",/* Member name */
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
                        (char *)"focalLength",/* Member name */
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
                        (char *)"focusMode",/* Member name */
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
                        (char *)"focusValue",/* Member name */
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
                        (char *)"horizontalFOV",/* Member name */
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
                        (char *)"imagingMode",/* Member name */
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
                        (char *)"lightSensitivity",/* Member name */
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
                        (char *)"maxZoomLevel",/* Member name */
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
                        (char *)"meteringMode",/* Member name */
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
                        (char *)"minZoomLevel",/* Member name */
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
                        (char *)"shutterSpeed",/* Member name */
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
                        (char *)"status",/* Member name */
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
                        (char *)"verticalFOV",/* Member name */
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
                        (char *)"whiteBalance",/* Member name */
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
                        (char *)"zoomLevel",/* Member name */
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
                        (char *)"zoomMode",/* Member name */
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
                        (char *)"source",/* Member name */
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
                        RTI_CDR_KEY_MEMBER , /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"timeStamp",/* Member name */
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
                    }
                };

                static DDS_TypeCode CameraConfigReportType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::SEM::CameraControl::CameraConfigReportType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        20, /* Number of members */
                        CameraConfigReportType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for CameraConfigReportType*/

                if (is_initialized) {
                    return &CameraConfigReportType_g_tc;
                }

                is_initialized = RTI_TRUE;

                CameraConfigReportType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                CameraConfigReportType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::Distance_Precise_AliasTag_t>::get().native();
                CameraConfigReportType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::MaritimeEnumeration::ExposureModeEnumType::ExposureModeEnumType>::get().native();
                CameraConfigReportType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::Distance_Precise_AliasTag_t>::get().native();
                CameraConfigReportType_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Enumeration::AutomationEnumType::AutomationEnumType>::get().native();
                CameraConfigReportType_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::FocusValue_AliasTag_t>::get().native();
                CameraConfigReportType_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::FieldOfView_LineOfSightFocalPlane_AliasTag_t>::get().native();
                CameraConfigReportType_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                CameraConfigReportType_g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::MaritimeEnumeration::ImagingModeEnumType::ImagingModeEnumType>::get().native();
                CameraConfigReportType_g_tc_members[8]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::MaritimeEnumeration::LightSensitivityEnumType::LightSensitivityEnumType>::get().native();
                CameraConfigReportType_g_tc_members[9]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::ContinuousSize_AliasTag_t>::get().native();
                CameraConfigReportType_g_tc_members[10]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::MaritimeEnumeration::MeteringModeEnumType::MeteringModeEnumType>::get().native();
                CameraConfigReportType_g_tc_members[11]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::ContinuousSize_AliasTag_t>::get().native();
                CameraConfigReportType_g_tc_members[12]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::Duration_Seconds_AliasTag_t>::get().native();
                CameraConfigReportType_g_tc_members[13]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Enumeration::PowerStatusEnumType::PowerStatusEnumType>::get().native();
                CameraConfigReportType_g_tc_members[14]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::FieldOfView_LineOfSightFocalPlane_AliasTag_t>::get().native();
                CameraConfigReportType_g_tc_members[15]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::MaritimeEnumeration::WhiteBalanceEnumType::WhiteBalanceEnumType>::get().native();
                CameraConfigReportType_g_tc_members[16]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::ContinuousSize_AliasTag_t>::get().native();
                CameraConfigReportType_g_tc_members[17]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::MaritimeEnumeration::ZoomModeEnumType::ZoomModeEnumType>::get().native();
                CameraConfigReportType_g_tc_members[18]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::NumericGUID_AliasTag_t>::get().native();
                CameraConfigReportType_g_tc_members[19]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::DateTime>::get().native();

                /* Initialize the values for member annotations. */
                CameraConfigReportType_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                CameraConfigReportType_g_tc_members[0]._annotations._defaultValue._u.double_value = 0.0;
                CameraConfigReportType_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                CameraConfigReportType_g_tc_members[0]._annotations._minValue._u.double_value = 0ULL;
                CameraConfigReportType_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                CameraConfigReportType_g_tc_members[0]._annotations._maxValue._u.double_value = 401056000ULL;
                CameraConfigReportType_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                CameraConfigReportType_g_tc_members[1]._annotations._defaultValue._u.enumerated_value = 0;
                CameraConfigReportType_g_tc_members[2]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                CameraConfigReportType_g_tc_members[2]._annotations._defaultValue._u.double_value = 0.0;
                CameraConfigReportType_g_tc_members[2]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                CameraConfigReportType_g_tc_members[2]._annotations._minValue._u.double_value = 0ULL;
                CameraConfigReportType_g_tc_members[2]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                CameraConfigReportType_g_tc_members[2]._annotations._maxValue._u.double_value = 401056000ULL;
                CameraConfigReportType_g_tc_members[3]._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                CameraConfigReportType_g_tc_members[3]._annotations._defaultValue._u.enumerated_value = 0;
                CameraConfigReportType_g_tc_members[4]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                CameraConfigReportType_g_tc_members[4]._annotations._defaultValue._u.double_value = 0.0;
                CameraConfigReportType_g_tc_members[4]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                CameraConfigReportType_g_tc_members[4]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                CameraConfigReportType_g_tc_members[4]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                CameraConfigReportType_g_tc_members[4]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                CameraConfigReportType_g_tc_members[5]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                CameraConfigReportType_g_tc_members[5]._annotations._defaultValue._u.double_value = 0.0;
                CameraConfigReportType_g_tc_members[5]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                CameraConfigReportType_g_tc_members[5]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                CameraConfigReportType_g_tc_members[5]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                CameraConfigReportType_g_tc_members[5]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                CameraConfigReportType_g_tc_members[6]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                CameraConfigReportType_g_tc_members[6]._annotations._defaultValue._u.boolean_value = 0;
                CameraConfigReportType_g_tc_members[7]._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                CameraConfigReportType_g_tc_members[7]._annotations._defaultValue._u.enumerated_value = 0;
                CameraConfigReportType_g_tc_members[8]._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                CameraConfigReportType_g_tc_members[8]._annotations._defaultValue._u.enumerated_value = 0;
                CameraConfigReportType_g_tc_members[9]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                CameraConfigReportType_g_tc_members[9]._annotations._defaultValue._u.double_value = 0.0;
                CameraConfigReportType_g_tc_members[9]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                CameraConfigReportType_g_tc_members[9]._annotations._minValue._u.double_value = 0ULL;
                CameraConfigReportType_g_tc_members[9]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                CameraConfigReportType_g_tc_members[9]._annotations._maxValue._u.double_value = 32767ULL;
                CameraConfigReportType_g_tc_members[10]._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                CameraConfigReportType_g_tc_members[10]._annotations._defaultValue._u.enumerated_value = 0;
                CameraConfigReportType_g_tc_members[11]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                CameraConfigReportType_g_tc_members[11]._annotations._defaultValue._u.double_value = 0.0;
                CameraConfigReportType_g_tc_members[11]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                CameraConfigReportType_g_tc_members[11]._annotations._minValue._u.double_value = 0ULL;
                CameraConfigReportType_g_tc_members[11]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                CameraConfigReportType_g_tc_members[11]._annotations._maxValue._u.double_value = 32767ULL;
                CameraConfigReportType_g_tc_members[12]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                CameraConfigReportType_g_tc_members[12]._annotations._defaultValue._u.double_value = 0.0;
                CameraConfigReportType_g_tc_members[12]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                CameraConfigReportType_g_tc_members[12]._annotations._minValue._u.double_value = 0ULL;
                CameraConfigReportType_g_tc_members[12]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                CameraConfigReportType_g_tc_members[12]._annotations._maxValue._u.double_value = 37817280ULL;
                CameraConfigReportType_g_tc_members[13]._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                CameraConfigReportType_g_tc_members[13]._annotations._defaultValue._u.enumerated_value = 0;
                CameraConfigReportType_g_tc_members[14]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                CameraConfigReportType_g_tc_members[14]._annotations._defaultValue._u.double_value = 0.0;
                CameraConfigReportType_g_tc_members[14]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                CameraConfigReportType_g_tc_members[14]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                CameraConfigReportType_g_tc_members[14]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                CameraConfigReportType_g_tc_members[14]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                CameraConfigReportType_g_tc_members[15]._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                CameraConfigReportType_g_tc_members[15]._annotations._defaultValue._u.enumerated_value = 0;
                CameraConfigReportType_g_tc_members[16]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                CameraConfigReportType_g_tc_members[16]._annotations._defaultValue._u.double_value = 0.0;
                CameraConfigReportType_g_tc_members[16]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                CameraConfigReportType_g_tc_members[16]._annotations._minValue._u.double_value = 0ULL;
                CameraConfigReportType_g_tc_members[16]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                CameraConfigReportType_g_tc_members[16]._annotations._maxValue._u.double_value = 32767ULL;
                CameraConfigReportType_g_tc_members[17]._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                CameraConfigReportType_g_tc_members[17]._annotations._defaultValue._u.enumerated_value = 0;

                CameraConfigReportType_g_tc._data._sampleAccessInfo = sample_access_info();
                CameraConfigReportType_g_tc._data._typePlugin = type_plugin_info();    

                return &CameraConfigReportType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::SEM::CameraControl::CameraConfigReportType *sample;

                static RTIXCdrMemberAccessInfo CameraConfigReportType_g_memberAccessInfos[20] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo CameraConfigReportType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &CameraConfigReportType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::SEM::CameraControl::CameraConfigReportType);
                if (sample == NULL) {
                    return NULL;
                }

                CameraConfigReportType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->aperture() - (char *)sample);

                CameraConfigReportType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->exposureMode() - (char *)sample);

                CameraConfigReportType_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->focalLength() - (char *)sample);

                CameraConfigReportType_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->focusMode() - (char *)sample);

                CameraConfigReportType_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->focusValue() - (char *)sample);

                CameraConfigReportType_g_memberAccessInfos[5].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->horizontalFOV() - (char *)sample);

                CameraConfigReportType_g_memberAccessInfos[6].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->imageStabilization() - (char *)sample);

                CameraConfigReportType_g_memberAccessInfos[7].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->imagingMode() - (char *)sample);

                CameraConfigReportType_g_memberAccessInfos[8].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->lightSensitivity() - (char *)sample);

                CameraConfigReportType_g_memberAccessInfos[9].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->maxZoomLevel() - (char *)sample);

                CameraConfigReportType_g_memberAccessInfos[10].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->meteringMode() - (char *)sample);

                CameraConfigReportType_g_memberAccessInfos[11].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->minZoomLevel() - (char *)sample);

                CameraConfigReportType_g_memberAccessInfos[12].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->shutterSpeed() - (char *)sample);

                CameraConfigReportType_g_memberAccessInfos[13].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->status() - (char *)sample);

                CameraConfigReportType_g_memberAccessInfos[14].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->verticalFOV() - (char *)sample);

                CameraConfigReportType_g_memberAccessInfos[15].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->whiteBalance() - (char *)sample);

                CameraConfigReportType_g_memberAccessInfos[16].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->zoomLevel() - (char *)sample);

                CameraConfigReportType_g_memberAccessInfos[17].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->zoomMode() - (char *)sample);

                CameraConfigReportType_g_memberAccessInfos[18].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->source() - (char *)sample);

                CameraConfigReportType_g_memberAccessInfos[19].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->timeStamp() - (char *)sample);

                CameraConfigReportType_g_sampleAccessInfo.memberAccessInfos = 
                CameraConfigReportType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::SEM::CameraControl::CameraConfigReportType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        CameraConfigReportType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        CameraConfigReportType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                CameraConfigReportType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                CameraConfigReportType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::SEM::CameraControl::CameraConfigReportType >;

                CameraConfigReportType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &CameraConfigReportType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin CameraConfigReportType_g_typePlugin = 
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

                return &CameraConfigReportType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::UMAA::SEM::CameraControl::CameraConfigReportType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::SEM::CameraControl::CameraConfigReportType >::get())));
        }
    }
}

namespace dds { 
    namespace topic {
        void topic_type_support< ::UMAA::SEM::CameraControl::CameraConfigReportType >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                ::UMAA::SEM::CameraControl::CameraConfigReportTypePlugin_new,
                ::UMAA::SEM::CameraControl::CameraConfigReportTypePlugin_delete);
        }

        std::vector<char>& topic_type_support< ::UMAA::SEM::CameraControl::CameraConfigReportType >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const ::UMAA::SEM::CameraControl::CameraConfigReportType& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = CameraConfigReportTypePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = CameraConfigReportTypePlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< ::UMAA::SEM::CameraControl::CameraConfigReportType >::from_cdr_buffer(::UMAA::SEM::CameraControl::CameraConfigReportType& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = CameraConfigReportTypePlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create ::UMAA::SEM::CameraControl::CameraConfigReportType from cdr buffer");
        }

        void topic_type_support< ::UMAA::SEM::CameraControl::CameraConfigReportType >::reset_sample(::UMAA::SEM::CameraControl::CameraConfigReportType& sample) 
        {
            sample.aperture(0.0);
            sample.exposureMode(UMAA::Common::MaritimeEnumeration::ExposureModeEnumType::ExposureModeEnumType::AUTO_DEFAULT);
            sample.focalLength(0.0);
            sample.focusMode(UMAA::Common::Enumeration::AutomationEnumType::AutomationEnumType::AUTOMATIC);
            sample.focusValue(0.0);
            sample.horizontalFOV(0.0);
            sample.imageStabilization(0);
            sample.imagingMode(UMAA::Common::MaritimeEnumeration::ImagingModeEnumType::ImagingModeEnumType::COLOR);
            sample.lightSensitivity(UMAA::Common::MaritimeEnumeration::LightSensitivityEnumType::LightSensitivityEnumType::AUTO_DEFAULT);
            sample.maxZoomLevel(0.0);
            sample.meteringMode(UMAA::Common::MaritimeEnumeration::MeteringModeEnumType::MeteringModeEnumType::AUTO_DEFAULT);
            sample.minZoomLevel(0.0);
            sample.shutterSpeed(0.0);
            sample.status(UMAA::Common::Enumeration::PowerStatusEnumType::PowerStatusEnumType::POWER_OFF);
            sample.verticalFOV(0.0);
            sample.whiteBalance(UMAA::Common::MaritimeEnumeration::WhiteBalanceEnumType::WhiteBalanceEnumType::AUTO_DEFAULT);
            sample.zoomLevel(0.0);
            sample.zoomMode(UMAA::Common::MaritimeEnumeration::ZoomModeEnumType::ZoomModeEnumType::ANALOG_ONLY);
            ::rti::topic::reset_sample(sample.source());
            ::rti::topic::reset_sample(sample.timeStamp());
        }

        void topic_type_support< ::UMAA::SEM::CameraControl::CameraConfigReportType >::allocate_sample(::UMAA::SEM::CameraControl::CameraConfigReportType& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.exposureMode(),  -1, -1);
            ::rti::topic::allocate_sample(sample.focusMode(),  -1, -1);
            ::rti::topic::allocate_sample(sample.imagingMode(),  -1, -1);
            ::rti::topic::allocate_sample(sample.lightSensitivity(),  -1, -1);
            ::rti::topic::allocate_sample(sample.meteringMode(),  -1, -1);
            ::rti::topic::allocate_sample(sample.status(),  -1, -1);
            ::rti::topic::allocate_sample(sample.whiteBalance(),  -1, -1);
            ::rti::topic::allocate_sample(sample.zoomMode(),  -1, -1);
            ::rti::topic::allocate_sample(sample.source(),  -1, -1);
            ::rti::topic::allocate_sample(sample.timeStamp(),  -1, -1);
        }
    }
}  

#endif // NDDS_STANDALONE_TYPE
