

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from CameraConfigReportType.idl 
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#ifndef dds_c_log_impl_h              
#include "dds_c/dds_c_log_impl.h"                                
#endif 

#ifndef dds_c_log_infrastructure_h
#include "dds_c/dds_c_infrastructure_impl.h"       
#endif 

#ifndef cdr_type_h
#include "cdr/cdr_type.h"
#endif    

#ifndef osapi_heap_h
#include "osapi/osapi_heap.h" 
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "CameraConfigReportType.h"

#ifndef NDDS_STANDALONE_TYPE
#include "CameraConfigReportTypePlugin.h"
#endif

#include <new>

/* ========================================================================= */
const char *UMAA_SEM_CameraControl_CameraConfigReportTypeTYPENAME = "UMAA::SEM::CameraControl::CameraConfigReportType";

#ifndef NDDS_STANDALONE_TYPE
DDS_TypeCode * UMAA_SEM_CameraControl_CameraConfigReportType_get_typecode(void)
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode_Member UMAA_SEM_CameraControl_CameraConfigReportType_g_tc_members[20]=
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

    static DDS_TypeCode UMAA_SEM_CameraControl_CameraConfigReportType_g_tc =
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
            UMAA_SEM_CameraControl_CameraConfigReportType_g_tc_members, /* Members */
            DDS_VM_NONE, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER,
            DDS_BOOLEAN_TRUE, /* _isCopyable */
            NULL, /* _sampleAccessInfo: assigned later */
            NULL /* _typePlugin: assigned later */
        }}; /* Type code for UMAA_SEM_CameraControl_CameraConfigReportType*/

    if (is_initialized) {
        return &UMAA_SEM_CameraControl_CameraConfigReportType_g_tc;
    }

    is_initialized = RTI_TRUE;

    UMAA_SEM_CameraControl_CameraConfigReportType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

    UMAA_SEM_CameraControl_CameraConfigReportType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_Distance_Precise_get_typecode();
    UMAA_SEM_CameraControl_CameraConfigReportType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_MaritimeEnumeration_ExposureModeEnumType_ExposureModeEnumType_get_typecode();
    UMAA_SEM_CameraControl_CameraConfigReportType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_Distance_Precise_get_typecode();
    UMAA_SEM_CameraControl_CameraConfigReportType_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Enumeration_AutomationEnumType_AutomationEnumType_get_typecode();
    UMAA_SEM_CameraControl_CameraConfigReportType_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_FocusValue_get_typecode();
    UMAA_SEM_CameraControl_CameraConfigReportType_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_FieldOfView_LineOfSightFocalPlane_get_typecode();
    UMAA_SEM_CameraControl_CameraConfigReportType_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;
    UMAA_SEM_CameraControl_CameraConfigReportType_g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_MaritimeEnumeration_ImagingModeEnumType_ImagingModeEnumType_get_typecode();
    UMAA_SEM_CameraControl_CameraConfigReportType_g_tc_members[8]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_MaritimeEnumeration_LightSensitivityEnumType_LightSensitivityEnumType_get_typecode();
    UMAA_SEM_CameraControl_CameraConfigReportType_g_tc_members[9]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_ContinuousSize_get_typecode();
    UMAA_SEM_CameraControl_CameraConfigReportType_g_tc_members[10]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_MaritimeEnumeration_MeteringModeEnumType_MeteringModeEnumType_get_typecode();
    UMAA_SEM_CameraControl_CameraConfigReportType_g_tc_members[11]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_ContinuousSize_get_typecode();
    UMAA_SEM_CameraControl_CameraConfigReportType_g_tc_members[12]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_Duration_Seconds_get_typecode();
    UMAA_SEM_CameraControl_CameraConfigReportType_g_tc_members[13]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Enumeration_PowerStatusEnumType_PowerStatusEnumType_get_typecode();
    UMAA_SEM_CameraControl_CameraConfigReportType_g_tc_members[14]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_FieldOfView_LineOfSightFocalPlane_get_typecode();
    UMAA_SEM_CameraControl_CameraConfigReportType_g_tc_members[15]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_MaritimeEnumeration_WhiteBalanceEnumType_WhiteBalanceEnumType_get_typecode();
    UMAA_SEM_CameraControl_CameraConfigReportType_g_tc_members[16]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_ContinuousSize_get_typecode();
    UMAA_SEM_CameraControl_CameraConfigReportType_g_tc_members[17]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_MaritimeEnumeration_ZoomModeEnumType_ZoomModeEnumType_get_typecode();
    UMAA_SEM_CameraControl_CameraConfigReportType_g_tc_members[18]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_NumericGUID_get_typecode();
    UMAA_SEM_CameraControl_CameraConfigReportType_g_tc_members[19]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_DateTime_get_typecode();

    /* Initialize the values for member annotations. */
    UMAA_SEM_CameraControl_CameraConfigReportType_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_SEM_CameraControl_CameraConfigReportType_g_tc_members[0]._annotations._defaultValue._u.double_value = 0.0;
    UMAA_SEM_CameraControl_CameraConfigReportType_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_SEM_CameraControl_CameraConfigReportType_g_tc_members[0]._annotations._minValue._u.double_value = 0ULL;
    UMAA_SEM_CameraControl_CameraConfigReportType_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_SEM_CameraControl_CameraConfigReportType_g_tc_members[0]._annotations._maxValue._u.double_value = 401056000ULL;
    UMAA_SEM_CameraControl_CameraConfigReportType_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
    UMAA_SEM_CameraControl_CameraConfigReportType_g_tc_members[1]._annotations._defaultValue._u.enumerated_value = 0;
    UMAA_SEM_CameraControl_CameraConfigReportType_g_tc_members[2]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_SEM_CameraControl_CameraConfigReportType_g_tc_members[2]._annotations._defaultValue._u.double_value = 0.0;
    UMAA_SEM_CameraControl_CameraConfigReportType_g_tc_members[2]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_SEM_CameraControl_CameraConfigReportType_g_tc_members[2]._annotations._minValue._u.double_value = 0ULL;
    UMAA_SEM_CameraControl_CameraConfigReportType_g_tc_members[2]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_SEM_CameraControl_CameraConfigReportType_g_tc_members[2]._annotations._maxValue._u.double_value = 401056000ULL;
    UMAA_SEM_CameraControl_CameraConfigReportType_g_tc_members[3]._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
    UMAA_SEM_CameraControl_CameraConfigReportType_g_tc_members[3]._annotations._defaultValue._u.enumerated_value = 0;
    UMAA_SEM_CameraControl_CameraConfigReportType_g_tc_members[4]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_SEM_CameraControl_CameraConfigReportType_g_tc_members[4]._annotations._defaultValue._u.double_value = 0.0;
    UMAA_SEM_CameraControl_CameraConfigReportType_g_tc_members[4]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_SEM_CameraControl_CameraConfigReportType_g_tc_members[4]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
    UMAA_SEM_CameraControl_CameraConfigReportType_g_tc_members[4]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_SEM_CameraControl_CameraConfigReportType_g_tc_members[4]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
    UMAA_SEM_CameraControl_CameraConfigReportType_g_tc_members[5]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_SEM_CameraControl_CameraConfigReportType_g_tc_members[5]._annotations._defaultValue._u.double_value = 0.0;
    UMAA_SEM_CameraControl_CameraConfigReportType_g_tc_members[5]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_SEM_CameraControl_CameraConfigReportType_g_tc_members[5]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
    UMAA_SEM_CameraControl_CameraConfigReportType_g_tc_members[5]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_SEM_CameraControl_CameraConfigReportType_g_tc_members[5]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
    UMAA_SEM_CameraControl_CameraConfigReportType_g_tc_members[6]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
    UMAA_SEM_CameraControl_CameraConfigReportType_g_tc_members[6]._annotations._defaultValue._u.boolean_value = 0;
    UMAA_SEM_CameraControl_CameraConfigReportType_g_tc_members[7]._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
    UMAA_SEM_CameraControl_CameraConfigReportType_g_tc_members[7]._annotations._defaultValue._u.enumerated_value = 0;
    UMAA_SEM_CameraControl_CameraConfigReportType_g_tc_members[8]._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
    UMAA_SEM_CameraControl_CameraConfigReportType_g_tc_members[8]._annotations._defaultValue._u.enumerated_value = 0;
    UMAA_SEM_CameraControl_CameraConfigReportType_g_tc_members[9]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_SEM_CameraControl_CameraConfigReportType_g_tc_members[9]._annotations._defaultValue._u.double_value = 0.0;
    UMAA_SEM_CameraControl_CameraConfigReportType_g_tc_members[9]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_SEM_CameraControl_CameraConfigReportType_g_tc_members[9]._annotations._minValue._u.double_value = 0ULL;
    UMAA_SEM_CameraControl_CameraConfigReportType_g_tc_members[9]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_SEM_CameraControl_CameraConfigReportType_g_tc_members[9]._annotations._maxValue._u.double_value = 32767ULL;
    UMAA_SEM_CameraControl_CameraConfigReportType_g_tc_members[10]._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
    UMAA_SEM_CameraControl_CameraConfigReportType_g_tc_members[10]._annotations._defaultValue._u.enumerated_value = 0;
    UMAA_SEM_CameraControl_CameraConfigReportType_g_tc_members[11]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_SEM_CameraControl_CameraConfigReportType_g_tc_members[11]._annotations._defaultValue._u.double_value = 0.0;
    UMAA_SEM_CameraControl_CameraConfigReportType_g_tc_members[11]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_SEM_CameraControl_CameraConfigReportType_g_tc_members[11]._annotations._minValue._u.double_value = 0ULL;
    UMAA_SEM_CameraControl_CameraConfigReportType_g_tc_members[11]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_SEM_CameraControl_CameraConfigReportType_g_tc_members[11]._annotations._maxValue._u.double_value = 32767ULL;
    UMAA_SEM_CameraControl_CameraConfigReportType_g_tc_members[12]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_SEM_CameraControl_CameraConfigReportType_g_tc_members[12]._annotations._defaultValue._u.double_value = 0.0;
    UMAA_SEM_CameraControl_CameraConfigReportType_g_tc_members[12]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_SEM_CameraControl_CameraConfigReportType_g_tc_members[12]._annotations._minValue._u.double_value = 0ULL;
    UMAA_SEM_CameraControl_CameraConfigReportType_g_tc_members[12]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_SEM_CameraControl_CameraConfigReportType_g_tc_members[12]._annotations._maxValue._u.double_value = 37817280ULL;
    UMAA_SEM_CameraControl_CameraConfigReportType_g_tc_members[13]._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
    UMAA_SEM_CameraControl_CameraConfigReportType_g_tc_members[13]._annotations._defaultValue._u.enumerated_value = 0;
    UMAA_SEM_CameraControl_CameraConfigReportType_g_tc_members[14]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_SEM_CameraControl_CameraConfigReportType_g_tc_members[14]._annotations._defaultValue._u.double_value = 0.0;
    UMAA_SEM_CameraControl_CameraConfigReportType_g_tc_members[14]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_SEM_CameraControl_CameraConfigReportType_g_tc_members[14]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
    UMAA_SEM_CameraControl_CameraConfigReportType_g_tc_members[14]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_SEM_CameraControl_CameraConfigReportType_g_tc_members[14]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
    UMAA_SEM_CameraControl_CameraConfigReportType_g_tc_members[15]._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
    UMAA_SEM_CameraControl_CameraConfigReportType_g_tc_members[15]._annotations._defaultValue._u.enumerated_value = 0;
    UMAA_SEM_CameraControl_CameraConfigReportType_g_tc_members[16]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_SEM_CameraControl_CameraConfigReportType_g_tc_members[16]._annotations._defaultValue._u.double_value = 0.0;
    UMAA_SEM_CameraControl_CameraConfigReportType_g_tc_members[16]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_SEM_CameraControl_CameraConfigReportType_g_tc_members[16]._annotations._minValue._u.double_value = 0ULL;
    UMAA_SEM_CameraControl_CameraConfigReportType_g_tc_members[16]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_SEM_CameraControl_CameraConfigReportType_g_tc_members[16]._annotations._maxValue._u.double_value = 32767ULL;
    UMAA_SEM_CameraControl_CameraConfigReportType_g_tc_members[17]._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
    UMAA_SEM_CameraControl_CameraConfigReportType_g_tc_members[17]._annotations._defaultValue._u.enumerated_value = 0;

    UMAA_SEM_CameraControl_CameraConfigReportType_g_tc._data._sampleAccessInfo =
    UMAA_SEM_CameraControl_CameraConfigReportType_get_sample_access_info();
    UMAA_SEM_CameraControl_CameraConfigReportType_g_tc._data._typePlugin =
    UMAA_SEM_CameraControl_CameraConfigReportType_get_type_plugin_info();    

    return &UMAA_SEM_CameraControl_CameraConfigReportType_g_tc;
}

#define TSeq UMAA_SEM_CameraControl_CameraConfigReportTypeSeq
#define T UMAA_SEM_CameraControl_CameraConfigReportType
#include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
#undef T
#undef TSeq

RTIXCdrSampleAccessInfo *UMAA_SEM_CameraControl_CameraConfigReportType_get_sample_seq_access_info()
{
    static RTIXCdrSampleAccessInfo UMAA_SEM_CameraControl_CameraConfigReportType_g_seqSampleAccessInfo = {
        RTI_XCDR_TYPE_BINDING_CPP, \
        {sizeof(UMAA_SEM_CameraControl_CameraConfigReportTypeSeq),0,0,0}, \
        RTI_XCDR_FALSE, \
        DDS_Sequence_get_member_value_pointer, \
        UMAA_SEM_CameraControl_CameraConfigReportTypeSeq_set_member_element_count, \
        NULL, \
        NULL, \
        NULL \
    };

    return &UMAA_SEM_CameraControl_CameraConfigReportType_g_seqSampleAccessInfo;
}

RTIXCdrSampleAccessInfo *UMAA_SEM_CameraControl_CameraConfigReportType_get_sample_access_info()
{
    static RTIBool is_initialized = RTI_FALSE;

    UMAA_SEM_CameraControl_CameraConfigReportType *sample;

    static RTIXCdrMemberAccessInfo UMAA_SEM_CameraControl_CameraConfigReportType_g_memberAccessInfos[20] =
    {RTIXCdrMemberAccessInfo_INITIALIZER};

    static RTIXCdrSampleAccessInfo UMAA_SEM_CameraControl_CameraConfigReportType_g_sampleAccessInfo = 
    RTIXCdrSampleAccessInfo_INITIALIZER;

    if (is_initialized) {
        return (RTIXCdrSampleAccessInfo*) &UMAA_SEM_CameraControl_CameraConfigReportType_g_sampleAccessInfo;
    }

    RTIXCdrHeap_allocateStruct(
        &sample, 
        UMAA_SEM_CameraControl_CameraConfigReportType);
    if (sample == NULL) {
        return NULL;
    }

    UMAA_SEM_CameraControl_CameraConfigReportType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->aperture - (char *)sample);

    UMAA_SEM_CameraControl_CameraConfigReportType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->exposureMode - (char *)sample);

    UMAA_SEM_CameraControl_CameraConfigReportType_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->focalLength - (char *)sample);

    UMAA_SEM_CameraControl_CameraConfigReportType_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->focusMode - (char *)sample);

    UMAA_SEM_CameraControl_CameraConfigReportType_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->focusValue - (char *)sample);

    UMAA_SEM_CameraControl_CameraConfigReportType_g_memberAccessInfos[5].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->horizontalFOV - (char *)sample);

    UMAA_SEM_CameraControl_CameraConfigReportType_g_memberAccessInfos[6].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->imageStabilization - (char *)sample);

    UMAA_SEM_CameraControl_CameraConfigReportType_g_memberAccessInfos[7].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->imagingMode - (char *)sample);

    UMAA_SEM_CameraControl_CameraConfigReportType_g_memberAccessInfos[8].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->lightSensitivity - (char *)sample);

    UMAA_SEM_CameraControl_CameraConfigReportType_g_memberAccessInfos[9].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->maxZoomLevel - (char *)sample);

    UMAA_SEM_CameraControl_CameraConfigReportType_g_memberAccessInfos[10].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->meteringMode - (char *)sample);

    UMAA_SEM_CameraControl_CameraConfigReportType_g_memberAccessInfos[11].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->minZoomLevel - (char *)sample);

    UMAA_SEM_CameraControl_CameraConfigReportType_g_memberAccessInfos[12].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->shutterSpeed - (char *)sample);

    UMAA_SEM_CameraControl_CameraConfigReportType_g_memberAccessInfos[13].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->status - (char *)sample);

    UMAA_SEM_CameraControl_CameraConfigReportType_g_memberAccessInfos[14].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->verticalFOV - (char *)sample);

    UMAA_SEM_CameraControl_CameraConfigReportType_g_memberAccessInfos[15].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->whiteBalance - (char *)sample);

    UMAA_SEM_CameraControl_CameraConfigReportType_g_memberAccessInfos[16].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->zoomLevel - (char *)sample);

    UMAA_SEM_CameraControl_CameraConfigReportType_g_memberAccessInfos[17].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->zoomMode - (char *)sample);

    UMAA_SEM_CameraControl_CameraConfigReportType_g_memberAccessInfos[18].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->source - (char *)sample);

    UMAA_SEM_CameraControl_CameraConfigReportType_g_memberAccessInfos[19].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->timeStamp - (char *)sample);

    UMAA_SEM_CameraControl_CameraConfigReportType_g_sampleAccessInfo.memberAccessInfos = 
    UMAA_SEM_CameraControl_CameraConfigReportType_g_memberAccessInfos;

    {
        size_t candidateTypeSize = sizeof(UMAA_SEM_CameraControl_CameraConfigReportType);

        if (candidateTypeSize > RTIXCdrLong_MAX) {
            UMAA_SEM_CameraControl_CameraConfigReportType_g_sampleAccessInfo.typeSize[0] =
            RTIXCdrLong_MAX;
        } else {
            UMAA_SEM_CameraControl_CameraConfigReportType_g_sampleAccessInfo.typeSize[0] =
            (RTIXCdrUnsignedLong) candidateTypeSize;
        }
    }

    UMAA_SEM_CameraControl_CameraConfigReportType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
    RTI_XCDR_TRUE;

    UMAA_SEM_CameraControl_CameraConfigReportType_g_sampleAccessInfo.getMemberValuePointerFcn = 
    UMAA_SEM_CameraControl_CameraConfigReportType_get_member_value_pointer;

    UMAA_SEM_CameraControl_CameraConfigReportType_g_sampleAccessInfo.languageBinding = 
    RTI_XCDR_TYPE_BINDING_CPP ;

    RTIXCdrHeap_freeStruct(sample);
    is_initialized = RTI_TRUE;
    return (RTIXCdrSampleAccessInfo*) &UMAA_SEM_CameraControl_CameraConfigReportType_g_sampleAccessInfo;
}
RTIXCdrTypePlugin *UMAA_SEM_CameraControl_CameraConfigReportType_get_type_plugin_info()
{
    static RTIXCdrTypePlugin UMAA_SEM_CameraControl_CameraConfigReportType_g_typePlugin = 
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
        (RTIXCdrTypePluginInitializeSampleFunction) 
        UMAA_SEM_CameraControl_CameraConfigReportType_initialize_ex,
        NULL,
        (RTIXCdrTypePluginFinalizeSampleFunction)
        UMAA_SEM_CameraControl_CameraConfigReportType_finalize_w_return,
        NULL,
        NULL
    };

    return &UMAA_SEM_CameraControl_CameraConfigReportType_g_typePlugin;
}
#endif

RTIBool UMAA_SEM_CameraControl_CameraConfigReportType_initialize(
    UMAA_SEM_CameraControl_CameraConfigReportType* sample)
{
    return UMAA_SEM_CameraControl_CameraConfigReportType_initialize_ex(
        sample, 
        RTI_TRUE, 
        RTI_TRUE);
}
RTIBool UMAA_SEM_CameraControl_CameraConfigReportType_initialize_w_params(
    UMAA_SEM_CameraControl_CameraConfigReportType *sample,
    const struct DDS_TypeAllocationParams_t *allocParams)
{

    if (sample == NULL) {
        return RTI_FALSE;
    }
    if (allocParams == NULL) {
        return RTI_FALSE;
    }

    sample->aperture = 0.0;

    sample->exposureMode = UMAA_Common_MaritimeEnumeration_ExposureModeEnumType_ExposureModeEnumType_AUTO_DEFAULT;
    sample->focalLength = 0.0;

    sample->focusMode = UMAA_Common_Enumeration_AutomationEnumType_AutomationEnumType_AUTOMATIC;
    sample->focusValue = 0.0;

    sample->horizontalFOV = 0.0;

    sample->imageStabilization = 0;

    sample->imagingMode = UMAA_Common_MaritimeEnumeration_ImagingModeEnumType_ImagingModeEnumType_COLOR;
    sample->lightSensitivity = UMAA_Common_MaritimeEnumeration_LightSensitivityEnumType_LightSensitivityEnumType_AUTO_DEFAULT;
    sample->maxZoomLevel = 0.0;

    sample->meteringMode = UMAA_Common_MaritimeEnumeration_MeteringModeEnumType_MeteringModeEnumType_AUTO_DEFAULT;
    sample->minZoomLevel = 0.0;

    sample->shutterSpeed = 0.0;

    sample->status = UMAA_Common_Enumeration_PowerStatusEnumType_PowerStatusEnumType_POWER_OFF;
    sample->verticalFOV = 0.0;

    sample->whiteBalance = UMAA_Common_MaritimeEnumeration_WhiteBalanceEnumType_WhiteBalanceEnumType_AUTO_DEFAULT;
    sample->zoomLevel = 0.0;

    sample->zoomMode = UMAA_Common_MaritimeEnumeration_ZoomModeEnumType_ZoomModeEnumType_ANALOG_ONLY;
    if (!UMAA_Common_Measurement_NumericGUID_initialize_w_params(
        &sample->source,
        allocParams)) {
        return RTI_FALSE;
    }
    if (!UMAA_Common_Measurement_DateTime_initialize_w_params(
        &sample->timeStamp,
        allocParams)) {
        return RTI_FALSE;
    }
    return RTI_TRUE;
}
RTIBool UMAA_SEM_CameraControl_CameraConfigReportType_initialize_ex(
    UMAA_SEM_CameraControl_CameraConfigReportType *sample,
    RTIBool allocatePointers, 
    RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return UMAA_SEM_CameraControl_CameraConfigReportType_initialize_w_params(
        sample,
        &allocParams);
}

RTIBool UMAA_SEM_CameraControl_CameraConfigReportType_finalize_w_return(
    UMAA_SEM_CameraControl_CameraConfigReportType* sample)
{
    UMAA_SEM_CameraControl_CameraConfigReportType_finalize_ex(sample, RTI_TRUE);

    return RTI_TRUE;
}

void UMAA_SEM_CameraControl_CameraConfigReportType_finalize(
    UMAA_SEM_CameraControl_CameraConfigReportType* sample)
{  
    UMAA_SEM_CameraControl_CameraConfigReportType_finalize_ex(
        sample, 
        RTI_TRUE);
}

void UMAA_SEM_CameraControl_CameraConfigReportType_finalize_ex(
    UMAA_SEM_CameraControl_CameraConfigReportType *sample,
    RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    UMAA_SEM_CameraControl_CameraConfigReportType_finalize_w_params(
        sample,
        &deallocParams);
}

void UMAA_SEM_CameraControl_CameraConfigReportType_finalize_w_params(
    UMAA_SEM_CameraControl_CameraConfigReportType *sample,
    const struct DDS_TypeDeallocationParams_t *deallocParams)
{
    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

    UMAA_Common_MaritimeEnumeration_ExposureModeEnumType_ExposureModeEnumType_finalize_w_params(
        &sample->exposureMode,
        deallocParams);

    UMAA_Common_Enumeration_AutomationEnumType_AutomationEnumType_finalize_w_params(
        &sample->focusMode,
        deallocParams);

    UMAA_Common_MaritimeEnumeration_ImagingModeEnumType_ImagingModeEnumType_finalize_w_params(
        &sample->imagingMode,
        deallocParams);

    UMAA_Common_MaritimeEnumeration_LightSensitivityEnumType_LightSensitivityEnumType_finalize_w_params(
        &sample->lightSensitivity,
        deallocParams);

    UMAA_Common_MaritimeEnumeration_MeteringModeEnumType_MeteringModeEnumType_finalize_w_params(
        &sample->meteringMode,
        deallocParams);

    UMAA_Common_Enumeration_PowerStatusEnumType_PowerStatusEnumType_finalize_w_params(
        &sample->status,
        deallocParams);

    UMAA_Common_MaritimeEnumeration_WhiteBalanceEnumType_WhiteBalanceEnumType_finalize_w_params(
        &sample->whiteBalance,
        deallocParams);

    UMAA_Common_MaritimeEnumeration_ZoomModeEnumType_ZoomModeEnumType_finalize_w_params(
        &sample->zoomMode,
        deallocParams);

    UMAA_Common_Measurement_NumericGUID_finalize_w_params(
        &sample->source,
        deallocParams);

    UMAA_Common_Measurement_DateTime_finalize_w_params(
        &sample->timeStamp,
        deallocParams);

}

void UMAA_SEM_CameraControl_CameraConfigReportType_finalize_optional_members(
    UMAA_SEM_CameraControl_CameraConfigReportType* sample, RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
    &deallocParamsTmp;

    if (sample==NULL) {
        return;
    } 
    if (deallocParams) {} /* To avoid warnings */

    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;

}

RTIBool UMAA_SEM_CameraControl_CameraConfigReportType_copy(
    UMAA_SEM_CameraControl_CameraConfigReportType* dst,
    const UMAA_SEM_CameraControl_CameraConfigReportType* src)
{
    try {

        if (dst == NULL || src == NULL) {
            return RTI_FALSE;
        }

        if (!RTICdrType_copyDouble (
            &dst->aperture, 
            &src->aperture)) { 
            return RTI_FALSE;
        }
        if (!UMAA_Common_MaritimeEnumeration_ExposureModeEnumType_ExposureModeEnumType_copy(
            &dst->exposureMode,
            (const UMAA_Common_MaritimeEnumeration_ExposureModeEnumType_ExposureModeEnumType*)&src->exposureMode)) {
            return RTI_FALSE;
        } 
        if (!RTICdrType_copyDouble (
            &dst->focalLength, 
            &src->focalLength)) { 
            return RTI_FALSE;
        }
        if (!UMAA_Common_Enumeration_AutomationEnumType_AutomationEnumType_copy(
            &dst->focusMode,
            (const UMAA_Common_Enumeration_AutomationEnumType_AutomationEnumType*)&src->focusMode)) {
            return RTI_FALSE;
        } 
        if (!RTICdrType_copyDouble (
            &dst->focusValue, 
            &src->focusValue)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyDouble (
            &dst->horizontalFOV, 
            &src->horizontalFOV)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyBoolean (
            &dst->imageStabilization, 
            &src->imageStabilization)) { 
            return RTI_FALSE;
        }
        if (!UMAA_Common_MaritimeEnumeration_ImagingModeEnumType_ImagingModeEnumType_copy(
            &dst->imagingMode,
            (const UMAA_Common_MaritimeEnumeration_ImagingModeEnumType_ImagingModeEnumType*)&src->imagingMode)) {
            return RTI_FALSE;
        } 
        if (!UMAA_Common_MaritimeEnumeration_LightSensitivityEnumType_LightSensitivityEnumType_copy(
            &dst->lightSensitivity,
            (const UMAA_Common_MaritimeEnumeration_LightSensitivityEnumType_LightSensitivityEnumType*)&src->lightSensitivity)) {
            return RTI_FALSE;
        } 
        if (!RTICdrType_copyDouble (
            &dst->maxZoomLevel, 
            &src->maxZoomLevel)) { 
            return RTI_FALSE;
        }
        if (!UMAA_Common_MaritimeEnumeration_MeteringModeEnumType_MeteringModeEnumType_copy(
            &dst->meteringMode,
            (const UMAA_Common_MaritimeEnumeration_MeteringModeEnumType_MeteringModeEnumType*)&src->meteringMode)) {
            return RTI_FALSE;
        } 
        if (!RTICdrType_copyDouble (
            &dst->minZoomLevel, 
            &src->minZoomLevel)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyDouble (
            &dst->shutterSpeed, 
            &src->shutterSpeed)) { 
            return RTI_FALSE;
        }
        if (!UMAA_Common_Enumeration_PowerStatusEnumType_PowerStatusEnumType_copy(
            &dst->status,
            (const UMAA_Common_Enumeration_PowerStatusEnumType_PowerStatusEnumType*)&src->status)) {
            return RTI_FALSE;
        } 
        if (!RTICdrType_copyDouble (
            &dst->verticalFOV, 
            &src->verticalFOV)) { 
            return RTI_FALSE;
        }
        if (!UMAA_Common_MaritimeEnumeration_WhiteBalanceEnumType_WhiteBalanceEnumType_copy(
            &dst->whiteBalance,
            (const UMAA_Common_MaritimeEnumeration_WhiteBalanceEnumType_WhiteBalanceEnumType*)&src->whiteBalance)) {
            return RTI_FALSE;
        } 
        if (!RTICdrType_copyDouble (
            &dst->zoomLevel, 
            &src->zoomLevel)) { 
            return RTI_FALSE;
        }
        if (!UMAA_Common_MaritimeEnumeration_ZoomModeEnumType_ZoomModeEnumType_copy(
            &dst->zoomMode,
            (const UMAA_Common_MaritimeEnumeration_ZoomModeEnumType_ZoomModeEnumType*)&src->zoomMode)) {
            return RTI_FALSE;
        } 
        if (!UMAA_Common_Measurement_NumericGUID_copy(
            &dst->source,
            (const UMAA_Common_Measurement_NumericGUID*)&src->source)) {
            return RTI_FALSE;
        } 
        if (!UMAA_Common_Measurement_DateTime_copy(
            &dst->timeStamp,
            (const UMAA_Common_Measurement_DateTime*)&src->timeStamp)) {
            return RTI_FALSE;
        } 

        return RTI_TRUE;
    } catch (const std::bad_alloc&) {
        return RTI_FALSE;
    }
}

/**
* <<IMPLEMENTATION>>
*
* Defines:  TSeq, T
*
* Configure and implement 'UMAA_SEM_CameraControl_CameraConfigReportType' sequence class.
*/
#define T UMAA_SEM_CameraControl_CameraConfigReportType
#define TSeq UMAA_SEM_CameraControl_CameraConfigReportTypeSeq

#define T_initialize_w_params UMAA_SEM_CameraControl_CameraConfigReportType_initialize_w_params

#define T_finalize_w_params   UMAA_SEM_CameraControl_CameraConfigReportType_finalize_w_params
#define T_copy       UMAA_SEM_CameraControl_CameraConfigReportType_copy

#ifndef NDDS_STANDALONE_TYPE
#include "dds_c/generic/dds_c_sequence_TSeq.gen"
#include "dds_cpp/generic/dds_cpp_sequence_TSeq.gen"
#else
#include "dds_c_sequence_TSeq.gen"
#include "dds_cpp_sequence_TSeq.gen"
#endif

#undef T_copy
#undef T_finalize_w_params

#undef T_initialize_w_params

#undef TSeq
#undef T

#ifndef NDDS_STANDALONE_TYPE
namespace rti { 
    namespace xcdr {
        const RTIXCdrTypeCode * type_code< UMAA_SEM_CameraControl_CameraConfigReportType>::get() 
        {
            return (const RTIXCdrTypeCode *) UMAA_SEM_CameraControl_CameraConfigReportType_get_typecode();
        }

    } 
}
#endif
