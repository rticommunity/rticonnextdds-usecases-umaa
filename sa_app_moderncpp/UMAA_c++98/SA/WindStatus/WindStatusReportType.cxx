

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from WindStatusReportType.idl 
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

#include "WindStatusReportType.h"

#ifndef NDDS_STANDALONE_TYPE
#include "WindStatusReportTypePlugin.h"
#endif

#include <new>

/* ========================================================================= */
const char *UMAA_SA_WindStatus_WindStatusReportTypeTYPENAME = "UMAA::SA::WindStatus::WindStatusReportType";

#ifndef NDDS_STANDALONE_TYPE
DDS_TypeCode * UMAA_SA_WindStatus_WindStatusReportType_get_typecode(void)
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode_Member UMAA_SA_WindStatus_WindStatusReportType_g_tc_members[20]=
    {

        {
            (char *)"relativeAverageDirection",/* Member name */
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
            RTI_CDR_NONKEY_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }, 
        {
            (char *)"relativeAverageSpeed",/* Member name */
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
            RTI_CDR_NONKEY_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }, 
        {
            (char *)"relativeInstantaneousDirection",/* Member name */
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
            RTI_CDR_NONKEY_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }, 
        {
            (char *)"relativeInstantaneousSpeed",/* Member name */
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
            RTI_CDR_NONKEY_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }, 
        {
            (char *)"relativeMaximumDirection",/* Member name */
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
            RTI_CDR_NONKEY_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }, 
        {
            (char *)"relativeMaximumSpeed",/* Member name */
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
            RTI_CDR_NONKEY_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }, 
        {
            (char *)"relativeMinimumDirection",/* Member name */
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
            RTI_CDR_NONKEY_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }, 
        {
            (char *)"relativeMinimumSpeed",/* Member name */
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
            RTI_CDR_NONKEY_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }, 
        {
            (char *)"straightDeckCrossSpeed",/* Member name */
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
            RTI_CDR_NONKEY_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }, 
        {
            (char *)"straightDeckHeadSpeed",/* Member name */
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
            RTI_CDR_NONKEY_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }, 
        {
            (char *)"trueAverageDirection",/* Member name */
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
            RTI_CDR_NONKEY_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }, 
        {
            (char *)"trueAverageSpeed",/* Member name */
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
            RTI_CDR_NONKEY_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }, 
        {
            (char *)"trueInstantaneousDirection",/* Member name */
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
            RTI_CDR_NONKEY_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }, 
        {
            (char *)"trueInstantaneousSpeed",/* Member name */
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
            RTI_CDR_NONKEY_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }, 
        {
            (char *)"trueMaximumDirection",/* Member name */
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
            RTI_CDR_NONKEY_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }, 
        {
            (char *)"trueMaximumSpeed",/* Member name */
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
            RTI_CDR_NONKEY_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }, 
        {
            (char *)"trueMinimumDirection",/* Member name */
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
            RTI_CDR_NONKEY_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }, 
        {
            (char *)"trueMinimumSpeed",/* Member name */
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
            RTI_CDR_NONKEY_MEMBER, /* Is a key? */
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

    static DDS_TypeCode UMAA_SA_WindStatus_WindStatusReportType_g_tc =
    {{
            DDS_TK_STRUCT, /* Kind */
            DDS_BOOLEAN_FALSE, /* Ignored */
            -1, /*Ignored*/
            (char *)"UMAA::SA::WindStatus::WindStatusReportType", /* Name */
            NULL, /* Ignored */      
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            20, /* Number of members */
            UMAA_SA_WindStatus_WindStatusReportType_g_tc_members, /* Members */
            DDS_VM_NONE, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER,
            DDS_BOOLEAN_TRUE, /* _isCopyable */
            NULL, /* _sampleAccessInfo: assigned later */
            NULL /* _typePlugin: assigned later */
        }}; /* Type code for UMAA_SA_WindStatus_WindStatusReportType*/

    if (is_initialized) {
        return &UMAA_SA_WindStatus_WindStatusReportType_g_tc;
    }

    is_initialized = RTI_TRUE;

    UMAA_SA_WindStatus_WindStatusReportType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

    UMAA_SA_WindStatus_WindStatusReportType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_RelativeAngle_get_typecode();
    UMAA_SA_WindStatus_WindStatusReportType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_Speed_get_typecode();
    UMAA_SA_WindStatus_WindStatusReportType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_RelativeAngle_get_typecode();
    UMAA_SA_WindStatus_WindStatusReportType_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_Speed_get_typecode();
    UMAA_SA_WindStatus_WindStatusReportType_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_RelativeAngle_get_typecode();
    UMAA_SA_WindStatus_WindStatusReportType_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_Speed_get_typecode();
    UMAA_SA_WindStatus_WindStatusReportType_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_RelativeAngle_get_typecode();
    UMAA_SA_WindStatus_WindStatusReportType_g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_Speed_get_typecode();
    UMAA_SA_WindStatus_WindStatusReportType_g_tc_members[8]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_Speed_get_typecode();
    UMAA_SA_WindStatus_WindStatusReportType_g_tc_members[9]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_Speed_get_typecode();
    UMAA_SA_WindStatus_WindStatusReportType_g_tc_members[10]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_Azimuth_TrueNorth_PosAngle_get_typecode();
    UMAA_SA_WindStatus_WindStatusReportType_g_tc_members[11]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_GroundSpeed_get_typecode();
    UMAA_SA_WindStatus_WindStatusReportType_g_tc_members[12]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_Azimuth_TrueNorth_PosAngle_get_typecode();
    UMAA_SA_WindStatus_WindStatusReportType_g_tc_members[13]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_GroundSpeed_get_typecode();
    UMAA_SA_WindStatus_WindStatusReportType_g_tc_members[14]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_Azimuth_TrueNorth_PosAngle_get_typecode();
    UMAA_SA_WindStatus_WindStatusReportType_g_tc_members[15]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_GroundSpeed_get_typecode();
    UMAA_SA_WindStatus_WindStatusReportType_g_tc_members[16]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_Azimuth_TrueNorth_PosAngle_get_typecode();
    UMAA_SA_WindStatus_WindStatusReportType_g_tc_members[17]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_GroundSpeed_get_typecode();
    UMAA_SA_WindStatus_WindStatusReportType_g_tc_members[18]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_NumericGUID_get_typecode();
    UMAA_SA_WindStatus_WindStatusReportType_g_tc_members[19]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_DateTime_get_typecode();

    /* Initialize the values for member annotations. */
    UMAA_SA_WindStatus_WindStatusReportType_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_SA_WindStatus_WindStatusReportType_g_tc_members[0]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
    UMAA_SA_WindStatus_WindStatusReportType_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_SA_WindStatus_WindStatusReportType_g_tc_members[0]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
    UMAA_SA_WindStatus_WindStatusReportType_g_tc_members[1]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_SA_WindStatus_WindStatusReportType_g_tc_members[1]._annotations._minValue._u.double_value = 0ULL;
    UMAA_SA_WindStatus_WindStatusReportType_g_tc_members[1]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_SA_WindStatus_WindStatusReportType_g_tc_members[1]._annotations._maxValue._u.double_value = 299792458ULL;
    UMAA_SA_WindStatus_WindStatusReportType_g_tc_members[2]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_SA_WindStatus_WindStatusReportType_g_tc_members[2]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
    UMAA_SA_WindStatus_WindStatusReportType_g_tc_members[2]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_SA_WindStatus_WindStatusReportType_g_tc_members[2]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
    UMAA_SA_WindStatus_WindStatusReportType_g_tc_members[3]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_SA_WindStatus_WindStatusReportType_g_tc_members[3]._annotations._minValue._u.double_value = 0ULL;
    UMAA_SA_WindStatus_WindStatusReportType_g_tc_members[3]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_SA_WindStatus_WindStatusReportType_g_tc_members[3]._annotations._maxValue._u.double_value = 299792458ULL;
    UMAA_SA_WindStatus_WindStatusReportType_g_tc_members[4]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_SA_WindStatus_WindStatusReportType_g_tc_members[4]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
    UMAA_SA_WindStatus_WindStatusReportType_g_tc_members[4]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_SA_WindStatus_WindStatusReportType_g_tc_members[4]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
    UMAA_SA_WindStatus_WindStatusReportType_g_tc_members[5]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_SA_WindStatus_WindStatusReportType_g_tc_members[5]._annotations._minValue._u.double_value = 0ULL;
    UMAA_SA_WindStatus_WindStatusReportType_g_tc_members[5]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_SA_WindStatus_WindStatusReportType_g_tc_members[5]._annotations._maxValue._u.double_value = 299792458ULL;
    UMAA_SA_WindStatus_WindStatusReportType_g_tc_members[6]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_SA_WindStatus_WindStatusReportType_g_tc_members[6]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
    UMAA_SA_WindStatus_WindStatusReportType_g_tc_members[6]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_SA_WindStatus_WindStatusReportType_g_tc_members[6]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
    UMAA_SA_WindStatus_WindStatusReportType_g_tc_members[7]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_SA_WindStatus_WindStatusReportType_g_tc_members[7]._annotations._minValue._u.double_value = 0ULL;
    UMAA_SA_WindStatus_WindStatusReportType_g_tc_members[7]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_SA_WindStatus_WindStatusReportType_g_tc_members[7]._annotations._maxValue._u.double_value = 299792458ULL;
    UMAA_SA_WindStatus_WindStatusReportType_g_tc_members[8]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_SA_WindStatus_WindStatusReportType_g_tc_members[8]._annotations._minValue._u.double_value = 0ULL;
    UMAA_SA_WindStatus_WindStatusReportType_g_tc_members[8]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_SA_WindStatus_WindStatusReportType_g_tc_members[8]._annotations._maxValue._u.double_value = 299792458ULL;
    UMAA_SA_WindStatus_WindStatusReportType_g_tc_members[9]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_SA_WindStatus_WindStatusReportType_g_tc_members[9]._annotations._minValue._u.double_value = 0ULL;
    UMAA_SA_WindStatus_WindStatusReportType_g_tc_members[9]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_SA_WindStatus_WindStatusReportType_g_tc_members[9]._annotations._maxValue._u.double_value = 299792458ULL;
    UMAA_SA_WindStatus_WindStatusReportType_g_tc_members[10]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_SA_WindStatus_WindStatusReportType_g_tc_members[10]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
    UMAA_SA_WindStatus_WindStatusReportType_g_tc_members[10]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_SA_WindStatus_WindStatusReportType_g_tc_members[10]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
    UMAA_SA_WindStatus_WindStatusReportType_g_tc_members[11]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_SA_WindStatus_WindStatusReportType_g_tc_members[11]._annotations._minValue._u.double_value = 0ULL;
    UMAA_SA_WindStatus_WindStatusReportType_g_tc_members[11]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_SA_WindStatus_WindStatusReportType_g_tc_members[11]._annotations._maxValue._u.double_value = 200ULL;
    UMAA_SA_WindStatus_WindStatusReportType_g_tc_members[12]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_SA_WindStatus_WindStatusReportType_g_tc_members[12]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
    UMAA_SA_WindStatus_WindStatusReportType_g_tc_members[12]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_SA_WindStatus_WindStatusReportType_g_tc_members[12]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
    UMAA_SA_WindStatus_WindStatusReportType_g_tc_members[13]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_SA_WindStatus_WindStatusReportType_g_tc_members[13]._annotations._minValue._u.double_value = 0ULL;
    UMAA_SA_WindStatus_WindStatusReportType_g_tc_members[13]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_SA_WindStatus_WindStatusReportType_g_tc_members[13]._annotations._maxValue._u.double_value = 200ULL;
    UMAA_SA_WindStatus_WindStatusReportType_g_tc_members[14]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_SA_WindStatus_WindStatusReportType_g_tc_members[14]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
    UMAA_SA_WindStatus_WindStatusReportType_g_tc_members[14]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_SA_WindStatus_WindStatusReportType_g_tc_members[14]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
    UMAA_SA_WindStatus_WindStatusReportType_g_tc_members[15]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_SA_WindStatus_WindStatusReportType_g_tc_members[15]._annotations._minValue._u.double_value = 0ULL;
    UMAA_SA_WindStatus_WindStatusReportType_g_tc_members[15]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_SA_WindStatus_WindStatusReportType_g_tc_members[15]._annotations._maxValue._u.double_value = 200ULL;
    UMAA_SA_WindStatus_WindStatusReportType_g_tc_members[16]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_SA_WindStatus_WindStatusReportType_g_tc_members[16]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
    UMAA_SA_WindStatus_WindStatusReportType_g_tc_members[16]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_SA_WindStatus_WindStatusReportType_g_tc_members[16]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
    UMAA_SA_WindStatus_WindStatusReportType_g_tc_members[17]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_SA_WindStatus_WindStatusReportType_g_tc_members[17]._annotations._minValue._u.double_value = 0ULL;
    UMAA_SA_WindStatus_WindStatusReportType_g_tc_members[17]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_SA_WindStatus_WindStatusReportType_g_tc_members[17]._annotations._maxValue._u.double_value = 200ULL;

    UMAA_SA_WindStatus_WindStatusReportType_g_tc._data._sampleAccessInfo =
    UMAA_SA_WindStatus_WindStatusReportType_get_sample_access_info();
    UMAA_SA_WindStatus_WindStatusReportType_g_tc._data._typePlugin =
    UMAA_SA_WindStatus_WindStatusReportType_get_type_plugin_info();    

    return &UMAA_SA_WindStatus_WindStatusReportType_g_tc;
}

#define TSeq UMAA_SA_WindStatus_WindStatusReportTypeSeq
#define T UMAA_SA_WindStatus_WindStatusReportType
#include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
#undef T
#undef TSeq

RTIXCdrSampleAccessInfo *UMAA_SA_WindStatus_WindStatusReportType_get_sample_seq_access_info()
{
    static RTIXCdrSampleAccessInfo UMAA_SA_WindStatus_WindStatusReportType_g_seqSampleAccessInfo = {
        RTI_XCDR_TYPE_BINDING_CPP, \
        {sizeof(UMAA_SA_WindStatus_WindStatusReportTypeSeq),0,0,0}, \
        RTI_XCDR_FALSE, \
        DDS_Sequence_get_member_value_pointer, \
        UMAA_SA_WindStatus_WindStatusReportTypeSeq_set_member_element_count, \
        NULL, \
        NULL, \
        NULL \
    };

    return &UMAA_SA_WindStatus_WindStatusReportType_g_seqSampleAccessInfo;
}

RTIXCdrSampleAccessInfo *UMAA_SA_WindStatus_WindStatusReportType_get_sample_access_info()
{
    static RTIBool is_initialized = RTI_FALSE;

    UMAA_SA_WindStatus_WindStatusReportType *sample;

    static RTIXCdrMemberAccessInfo UMAA_SA_WindStatus_WindStatusReportType_g_memberAccessInfos[20] =
    {RTIXCdrMemberAccessInfo_INITIALIZER};

    static RTIXCdrSampleAccessInfo UMAA_SA_WindStatus_WindStatusReportType_g_sampleAccessInfo = 
    RTIXCdrSampleAccessInfo_INITIALIZER;

    if (is_initialized) {
        return (RTIXCdrSampleAccessInfo*) &UMAA_SA_WindStatus_WindStatusReportType_g_sampleAccessInfo;
    }

    RTIXCdrHeap_allocateStruct(
        &sample, 
        UMAA_SA_WindStatus_WindStatusReportType);
    if (sample == NULL) {
        return NULL;
    }

    UMAA_SA_WindStatus_WindStatusReportType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->relativeAverageDirection - (char *)sample);

    UMAA_SA_WindStatus_WindStatusReportType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->relativeAverageSpeed - (char *)sample);

    UMAA_SA_WindStatus_WindStatusReportType_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->relativeInstantaneousDirection - (char *)sample);

    UMAA_SA_WindStatus_WindStatusReportType_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->relativeInstantaneousSpeed - (char *)sample);

    UMAA_SA_WindStatus_WindStatusReportType_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->relativeMaximumDirection - (char *)sample);

    UMAA_SA_WindStatus_WindStatusReportType_g_memberAccessInfos[5].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->relativeMaximumSpeed - (char *)sample);

    UMAA_SA_WindStatus_WindStatusReportType_g_memberAccessInfos[6].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->relativeMinimumDirection - (char *)sample);

    UMAA_SA_WindStatus_WindStatusReportType_g_memberAccessInfos[7].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->relativeMinimumSpeed - (char *)sample);

    UMAA_SA_WindStatus_WindStatusReportType_g_memberAccessInfos[8].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->straightDeckCrossSpeed - (char *)sample);

    UMAA_SA_WindStatus_WindStatusReportType_g_memberAccessInfos[9].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->straightDeckHeadSpeed - (char *)sample);

    UMAA_SA_WindStatus_WindStatusReportType_g_memberAccessInfos[10].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->trueAverageDirection - (char *)sample);

    UMAA_SA_WindStatus_WindStatusReportType_g_memberAccessInfos[11].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->trueAverageSpeed - (char *)sample);

    UMAA_SA_WindStatus_WindStatusReportType_g_memberAccessInfos[12].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->trueInstantaneousDirection - (char *)sample);

    UMAA_SA_WindStatus_WindStatusReportType_g_memberAccessInfos[13].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->trueInstantaneousSpeed - (char *)sample);

    UMAA_SA_WindStatus_WindStatusReportType_g_memberAccessInfos[14].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->trueMaximumDirection - (char *)sample);

    UMAA_SA_WindStatus_WindStatusReportType_g_memberAccessInfos[15].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->trueMaximumSpeed - (char *)sample);

    UMAA_SA_WindStatus_WindStatusReportType_g_memberAccessInfos[16].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->trueMinimumDirection - (char *)sample);

    UMAA_SA_WindStatus_WindStatusReportType_g_memberAccessInfos[17].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->trueMinimumSpeed - (char *)sample);

    UMAA_SA_WindStatus_WindStatusReportType_g_memberAccessInfos[18].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->source - (char *)sample);

    UMAA_SA_WindStatus_WindStatusReportType_g_memberAccessInfos[19].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->timeStamp - (char *)sample);

    UMAA_SA_WindStatus_WindStatusReportType_g_sampleAccessInfo.memberAccessInfos = 
    UMAA_SA_WindStatus_WindStatusReportType_g_memberAccessInfos;

    {
        size_t candidateTypeSize = sizeof(UMAA_SA_WindStatus_WindStatusReportType);

        if (candidateTypeSize > RTIXCdrLong_MAX) {
            UMAA_SA_WindStatus_WindStatusReportType_g_sampleAccessInfo.typeSize[0] =
            RTIXCdrLong_MAX;
        } else {
            UMAA_SA_WindStatus_WindStatusReportType_g_sampleAccessInfo.typeSize[0] =
            (RTIXCdrUnsignedLong) candidateTypeSize;
        }
    }

    UMAA_SA_WindStatus_WindStatusReportType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
    RTI_XCDR_TRUE;

    UMAA_SA_WindStatus_WindStatusReportType_g_sampleAccessInfo.getMemberValuePointerFcn = 
    UMAA_SA_WindStatus_WindStatusReportType_get_member_value_pointer;

    UMAA_SA_WindStatus_WindStatusReportType_g_sampleAccessInfo.languageBinding = 
    RTI_XCDR_TYPE_BINDING_CPP ;

    RTIXCdrHeap_freeStruct(sample);
    is_initialized = RTI_TRUE;
    return (RTIXCdrSampleAccessInfo*) &UMAA_SA_WindStatus_WindStatusReportType_g_sampleAccessInfo;
}
RTIXCdrTypePlugin *UMAA_SA_WindStatus_WindStatusReportType_get_type_plugin_info()
{
    static RTIXCdrTypePlugin UMAA_SA_WindStatus_WindStatusReportType_g_typePlugin = 
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
        UMAA_SA_WindStatus_WindStatusReportType_initialize_ex,
        NULL,
        (RTIXCdrTypePluginFinalizeSampleFunction)
        UMAA_SA_WindStatus_WindStatusReportType_finalize_w_return,
        NULL,
        NULL
    };

    return &UMAA_SA_WindStatus_WindStatusReportType_g_typePlugin;
}
#endif

RTIBool UMAA_SA_WindStatus_WindStatusReportType_initialize(
    UMAA_SA_WindStatus_WindStatusReportType* sample)
{
    return UMAA_SA_WindStatus_WindStatusReportType_initialize_ex(
        sample, 
        RTI_TRUE, 
        RTI_TRUE);
}
RTIBool UMAA_SA_WindStatus_WindStatusReportType_initialize_w_params(
    UMAA_SA_WindStatus_WindStatusReportType *sample,
    const struct DDS_TypeAllocationParams_t *allocParams)
{

    if (sample == NULL) {
        return RTI_FALSE;
    }
    if (allocParams == NULL) {
        return RTI_FALSE;
    }

    if (!allocParams->allocate_optional_members) {
        sample->relativeAverageDirection=NULL;
    } else {   
        if (allocParams->allocate_memory){
            sample->relativeAverageDirection = new (std::nothrow)   DDS_Double ();
            if (sample->relativeAverageDirection==NULL) {
                return RTI_FALSE;
            }
            if (!RTICdrType_initDouble(sample->relativeAverageDirection)) {
                return RTI_FALSE;
            }

        } else {

            if (sample->relativeAverageDirection != NULL) {
                if (!RTICdrType_initDouble(sample->relativeAverageDirection)) {
                    return RTI_FALSE;
                }
            }

        }

    }
    if (!allocParams->allocate_optional_members) {
        sample->relativeAverageSpeed=NULL;
    } else {   
        if (allocParams->allocate_memory){
            sample->relativeAverageSpeed = new (std::nothrow)   DDS_Double ();
            if (sample->relativeAverageSpeed==NULL) {
                return RTI_FALSE;
            }
            if (!RTICdrType_initDouble(sample->relativeAverageSpeed)) {
                return RTI_FALSE;
            }

        } else {

            if (sample->relativeAverageSpeed != NULL) {
                if (!RTICdrType_initDouble(sample->relativeAverageSpeed)) {
                    return RTI_FALSE;
                }
            }

        }

    }
    if (!allocParams->allocate_optional_members) {
        sample->relativeInstantaneousDirection=NULL;
    } else {   
        if (allocParams->allocate_memory){
            sample->relativeInstantaneousDirection = new (std::nothrow)   DDS_Double ();
            if (sample->relativeInstantaneousDirection==NULL) {
                return RTI_FALSE;
            }
            if (!RTICdrType_initDouble(sample->relativeInstantaneousDirection)) {
                return RTI_FALSE;
            }

        } else {

            if (sample->relativeInstantaneousDirection != NULL) {
                if (!RTICdrType_initDouble(sample->relativeInstantaneousDirection)) {
                    return RTI_FALSE;
                }
            }

        }

    }
    if (!allocParams->allocate_optional_members) {
        sample->relativeInstantaneousSpeed=NULL;
    } else {   
        if (allocParams->allocate_memory){
            sample->relativeInstantaneousSpeed = new (std::nothrow)   DDS_Double ();
            if (sample->relativeInstantaneousSpeed==NULL) {
                return RTI_FALSE;
            }
            if (!RTICdrType_initDouble(sample->relativeInstantaneousSpeed)) {
                return RTI_FALSE;
            }

        } else {

            if (sample->relativeInstantaneousSpeed != NULL) {
                if (!RTICdrType_initDouble(sample->relativeInstantaneousSpeed)) {
                    return RTI_FALSE;
                }
            }

        }

    }
    if (!allocParams->allocate_optional_members) {
        sample->relativeMaximumDirection=NULL;
    } else {   
        if (allocParams->allocate_memory){
            sample->relativeMaximumDirection = new (std::nothrow)   DDS_Double ();
            if (sample->relativeMaximumDirection==NULL) {
                return RTI_FALSE;
            }
            if (!RTICdrType_initDouble(sample->relativeMaximumDirection)) {
                return RTI_FALSE;
            }

        } else {

            if (sample->relativeMaximumDirection != NULL) {
                if (!RTICdrType_initDouble(sample->relativeMaximumDirection)) {
                    return RTI_FALSE;
                }
            }

        }

    }
    if (!allocParams->allocate_optional_members) {
        sample->relativeMaximumSpeed=NULL;
    } else {   
        if (allocParams->allocate_memory){
            sample->relativeMaximumSpeed = new (std::nothrow)   DDS_Double ();
            if (sample->relativeMaximumSpeed==NULL) {
                return RTI_FALSE;
            }
            if (!RTICdrType_initDouble(sample->relativeMaximumSpeed)) {
                return RTI_FALSE;
            }

        } else {

            if (sample->relativeMaximumSpeed != NULL) {
                if (!RTICdrType_initDouble(sample->relativeMaximumSpeed)) {
                    return RTI_FALSE;
                }
            }

        }

    }
    if (!allocParams->allocate_optional_members) {
        sample->relativeMinimumDirection=NULL;
    } else {   
        if (allocParams->allocate_memory){
            sample->relativeMinimumDirection = new (std::nothrow)   DDS_Double ();
            if (sample->relativeMinimumDirection==NULL) {
                return RTI_FALSE;
            }
            if (!RTICdrType_initDouble(sample->relativeMinimumDirection)) {
                return RTI_FALSE;
            }

        } else {

            if (sample->relativeMinimumDirection != NULL) {
                if (!RTICdrType_initDouble(sample->relativeMinimumDirection)) {
                    return RTI_FALSE;
                }
            }

        }

    }
    if (!allocParams->allocate_optional_members) {
        sample->relativeMinimumSpeed=NULL;
    } else {   
        if (allocParams->allocate_memory){
            sample->relativeMinimumSpeed = new (std::nothrow)   DDS_Double ();
            if (sample->relativeMinimumSpeed==NULL) {
                return RTI_FALSE;
            }
            if (!RTICdrType_initDouble(sample->relativeMinimumSpeed)) {
                return RTI_FALSE;
            }

        } else {

            if (sample->relativeMinimumSpeed != NULL) {
                if (!RTICdrType_initDouble(sample->relativeMinimumSpeed)) {
                    return RTI_FALSE;
                }
            }

        }

    }
    if (!allocParams->allocate_optional_members) {
        sample->straightDeckCrossSpeed=NULL;
    } else {   
        if (allocParams->allocate_memory){
            sample->straightDeckCrossSpeed = new (std::nothrow)   DDS_Double ();
            if (sample->straightDeckCrossSpeed==NULL) {
                return RTI_FALSE;
            }
            if (!RTICdrType_initDouble(sample->straightDeckCrossSpeed)) {
                return RTI_FALSE;
            }

        } else {

            if (sample->straightDeckCrossSpeed != NULL) {
                if (!RTICdrType_initDouble(sample->straightDeckCrossSpeed)) {
                    return RTI_FALSE;
                }
            }

        }

    }
    if (!allocParams->allocate_optional_members) {
        sample->straightDeckHeadSpeed=NULL;
    } else {   
        if (allocParams->allocate_memory){
            sample->straightDeckHeadSpeed = new (std::nothrow)   DDS_Double ();
            if (sample->straightDeckHeadSpeed==NULL) {
                return RTI_FALSE;
            }
            if (!RTICdrType_initDouble(sample->straightDeckHeadSpeed)) {
                return RTI_FALSE;
            }

        } else {

            if (sample->straightDeckHeadSpeed != NULL) {
                if (!RTICdrType_initDouble(sample->straightDeckHeadSpeed)) {
                    return RTI_FALSE;
                }
            }

        }

    }
    if (!allocParams->allocate_optional_members) {
        sample->trueAverageDirection=NULL;
    } else {   
        if (allocParams->allocate_memory){
            sample->trueAverageDirection = new (std::nothrow)   DDS_Double ();
            if (sample->trueAverageDirection==NULL) {
                return RTI_FALSE;
            }
            if (!RTICdrType_initDouble(sample->trueAverageDirection)) {
                return RTI_FALSE;
            }

        } else {

            if (sample->trueAverageDirection != NULL) {
                if (!RTICdrType_initDouble(sample->trueAverageDirection)) {
                    return RTI_FALSE;
                }
            }

        }

    }
    if (!allocParams->allocate_optional_members) {
        sample->trueAverageSpeed=NULL;
    } else {   
        if (allocParams->allocate_memory){
            sample->trueAverageSpeed = new (std::nothrow)   DDS_Double ();
            if (sample->trueAverageSpeed==NULL) {
                return RTI_FALSE;
            }
            if (!RTICdrType_initDouble(sample->trueAverageSpeed)) {
                return RTI_FALSE;
            }

        } else {

            if (sample->trueAverageSpeed != NULL) {
                if (!RTICdrType_initDouble(sample->trueAverageSpeed)) {
                    return RTI_FALSE;
                }
            }

        }

    }
    if (!allocParams->allocate_optional_members) {
        sample->trueInstantaneousDirection=NULL;
    } else {   
        if (allocParams->allocate_memory){
            sample->trueInstantaneousDirection = new (std::nothrow)   DDS_Double ();
            if (sample->trueInstantaneousDirection==NULL) {
                return RTI_FALSE;
            }
            if (!RTICdrType_initDouble(sample->trueInstantaneousDirection)) {
                return RTI_FALSE;
            }

        } else {

            if (sample->trueInstantaneousDirection != NULL) {
                if (!RTICdrType_initDouble(sample->trueInstantaneousDirection)) {
                    return RTI_FALSE;
                }
            }

        }

    }
    if (!allocParams->allocate_optional_members) {
        sample->trueInstantaneousSpeed=NULL;
    } else {   
        if (allocParams->allocate_memory){
            sample->trueInstantaneousSpeed = new (std::nothrow)   DDS_Double ();
            if (sample->trueInstantaneousSpeed==NULL) {
                return RTI_FALSE;
            }
            if (!RTICdrType_initDouble(sample->trueInstantaneousSpeed)) {
                return RTI_FALSE;
            }

        } else {

            if (sample->trueInstantaneousSpeed != NULL) {
                if (!RTICdrType_initDouble(sample->trueInstantaneousSpeed)) {
                    return RTI_FALSE;
                }
            }

        }

    }
    if (!allocParams->allocate_optional_members) {
        sample->trueMaximumDirection=NULL;
    } else {   
        if (allocParams->allocate_memory){
            sample->trueMaximumDirection = new (std::nothrow)   DDS_Double ();
            if (sample->trueMaximumDirection==NULL) {
                return RTI_FALSE;
            }
            if (!RTICdrType_initDouble(sample->trueMaximumDirection)) {
                return RTI_FALSE;
            }

        } else {

            if (sample->trueMaximumDirection != NULL) {
                if (!RTICdrType_initDouble(sample->trueMaximumDirection)) {
                    return RTI_FALSE;
                }
            }

        }

    }
    if (!allocParams->allocate_optional_members) {
        sample->trueMaximumSpeed=NULL;
    } else {   
        if (allocParams->allocate_memory){
            sample->trueMaximumSpeed = new (std::nothrow)   DDS_Double ();
            if (sample->trueMaximumSpeed==NULL) {
                return RTI_FALSE;
            }
            if (!RTICdrType_initDouble(sample->trueMaximumSpeed)) {
                return RTI_FALSE;
            }

        } else {

            if (sample->trueMaximumSpeed != NULL) {
                if (!RTICdrType_initDouble(sample->trueMaximumSpeed)) {
                    return RTI_FALSE;
                }
            }

        }

    }
    if (!allocParams->allocate_optional_members) {
        sample->trueMinimumDirection=NULL;
    } else {   
        if (allocParams->allocate_memory){
            sample->trueMinimumDirection = new (std::nothrow)   DDS_Double ();
            if (sample->trueMinimumDirection==NULL) {
                return RTI_FALSE;
            }
            if (!RTICdrType_initDouble(sample->trueMinimumDirection)) {
                return RTI_FALSE;
            }

        } else {

            if (sample->trueMinimumDirection != NULL) {
                if (!RTICdrType_initDouble(sample->trueMinimumDirection)) {
                    return RTI_FALSE;
                }
            }

        }

    }
    if (!allocParams->allocate_optional_members) {
        sample->trueMinimumSpeed=NULL;
    } else {   
        if (allocParams->allocate_memory){
            sample->trueMinimumSpeed = new (std::nothrow)   DDS_Double ();
            if (sample->trueMinimumSpeed==NULL) {
                return RTI_FALSE;
            }
            if (!RTICdrType_initDouble(sample->trueMinimumSpeed)) {
                return RTI_FALSE;
            }

        } else {

            if (sample->trueMinimumSpeed != NULL) {
                if (!RTICdrType_initDouble(sample->trueMinimumSpeed)) {
                    return RTI_FALSE;
                }
            }

        }

    }
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
RTIBool UMAA_SA_WindStatus_WindStatusReportType_initialize_ex(
    UMAA_SA_WindStatus_WindStatusReportType *sample,
    RTIBool allocatePointers, 
    RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return UMAA_SA_WindStatus_WindStatusReportType_initialize_w_params(
        sample,
        &allocParams);
}

RTIBool UMAA_SA_WindStatus_WindStatusReportType_finalize_w_return(
    UMAA_SA_WindStatus_WindStatusReportType* sample)
{
    UMAA_SA_WindStatus_WindStatusReportType_finalize_ex(sample, RTI_TRUE);

    return RTI_TRUE;
}

void UMAA_SA_WindStatus_WindStatusReportType_finalize(
    UMAA_SA_WindStatus_WindStatusReportType* sample)
{  
    UMAA_SA_WindStatus_WindStatusReportType_finalize_ex(
        sample, 
        RTI_TRUE);
}

void UMAA_SA_WindStatus_WindStatusReportType_finalize_ex(
    UMAA_SA_WindStatus_WindStatusReportType *sample,
    RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    UMAA_SA_WindStatus_WindStatusReportType_finalize_w_params(
        sample,
        &deallocParams);
}

void UMAA_SA_WindStatus_WindStatusReportType_finalize_w_params(
    UMAA_SA_WindStatus_WindStatusReportType *sample,
    const struct DDS_TypeDeallocationParams_t *deallocParams)
{
    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

    if (deallocParams->delete_optional_members) {
        if (sample->relativeAverageDirection != NULL) {

            delete  sample->relativeAverageDirection;
            sample->relativeAverageDirection=NULL;
        }
    }
    if (deallocParams->delete_optional_members) {
        if (sample->relativeAverageSpeed != NULL) {

            delete  sample->relativeAverageSpeed;
            sample->relativeAverageSpeed=NULL;
        }
    }
    if (deallocParams->delete_optional_members) {
        if (sample->relativeInstantaneousDirection != NULL) {

            delete  sample->relativeInstantaneousDirection;
            sample->relativeInstantaneousDirection=NULL;
        }
    }
    if (deallocParams->delete_optional_members) {
        if (sample->relativeInstantaneousSpeed != NULL) {

            delete  sample->relativeInstantaneousSpeed;
            sample->relativeInstantaneousSpeed=NULL;
        }
    }
    if (deallocParams->delete_optional_members) {
        if (sample->relativeMaximumDirection != NULL) {

            delete  sample->relativeMaximumDirection;
            sample->relativeMaximumDirection=NULL;
        }
    }
    if (deallocParams->delete_optional_members) {
        if (sample->relativeMaximumSpeed != NULL) {

            delete  sample->relativeMaximumSpeed;
            sample->relativeMaximumSpeed=NULL;
        }
    }
    if (deallocParams->delete_optional_members) {
        if (sample->relativeMinimumDirection != NULL) {

            delete  sample->relativeMinimumDirection;
            sample->relativeMinimumDirection=NULL;
        }
    }
    if (deallocParams->delete_optional_members) {
        if (sample->relativeMinimumSpeed != NULL) {

            delete  sample->relativeMinimumSpeed;
            sample->relativeMinimumSpeed=NULL;
        }
    }
    if (deallocParams->delete_optional_members) {
        if (sample->straightDeckCrossSpeed != NULL) {

            delete  sample->straightDeckCrossSpeed;
            sample->straightDeckCrossSpeed=NULL;
        }
    }
    if (deallocParams->delete_optional_members) {
        if (sample->straightDeckHeadSpeed != NULL) {

            delete  sample->straightDeckHeadSpeed;
            sample->straightDeckHeadSpeed=NULL;
        }
    }
    if (deallocParams->delete_optional_members) {
        if (sample->trueAverageDirection != NULL) {

            delete  sample->trueAverageDirection;
            sample->trueAverageDirection=NULL;
        }
    }
    if (deallocParams->delete_optional_members) {
        if (sample->trueAverageSpeed != NULL) {

            delete  sample->trueAverageSpeed;
            sample->trueAverageSpeed=NULL;
        }
    }
    if (deallocParams->delete_optional_members) {
        if (sample->trueInstantaneousDirection != NULL) {

            delete  sample->trueInstantaneousDirection;
            sample->trueInstantaneousDirection=NULL;
        }
    }
    if (deallocParams->delete_optional_members) {
        if (sample->trueInstantaneousSpeed != NULL) {

            delete  sample->trueInstantaneousSpeed;
            sample->trueInstantaneousSpeed=NULL;
        }
    }
    if (deallocParams->delete_optional_members) {
        if (sample->trueMaximumDirection != NULL) {

            delete  sample->trueMaximumDirection;
            sample->trueMaximumDirection=NULL;
        }
    }
    if (deallocParams->delete_optional_members) {
        if (sample->trueMaximumSpeed != NULL) {

            delete  sample->trueMaximumSpeed;
            sample->trueMaximumSpeed=NULL;
        }
    }
    if (deallocParams->delete_optional_members) {
        if (sample->trueMinimumDirection != NULL) {

            delete  sample->trueMinimumDirection;
            sample->trueMinimumDirection=NULL;
        }
    }
    if (deallocParams->delete_optional_members) {
        if (sample->trueMinimumSpeed != NULL) {

            delete  sample->trueMinimumSpeed;
            sample->trueMinimumSpeed=NULL;
        }
    }
    UMAA_Common_Measurement_NumericGUID_finalize_w_params(
        &sample->source,
        deallocParams);

    UMAA_Common_Measurement_DateTime_finalize_w_params(
        &sample->timeStamp,
        deallocParams);

}

void UMAA_SA_WindStatus_WindStatusReportType_finalize_optional_members(
    UMAA_SA_WindStatus_WindStatusReportType* sample, RTIBool deletePointers)
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

    if (sample->relativeAverageDirection != NULL) {

        delete  sample->relativeAverageDirection;
        sample->relativeAverageDirection=NULL;
    }
    if (sample->relativeAverageSpeed != NULL) {

        delete  sample->relativeAverageSpeed;
        sample->relativeAverageSpeed=NULL;
    }
    if (sample->relativeInstantaneousDirection != NULL) {

        delete  sample->relativeInstantaneousDirection;
        sample->relativeInstantaneousDirection=NULL;
    }
    if (sample->relativeInstantaneousSpeed != NULL) {

        delete  sample->relativeInstantaneousSpeed;
        sample->relativeInstantaneousSpeed=NULL;
    }
    if (sample->relativeMaximumDirection != NULL) {

        delete  sample->relativeMaximumDirection;
        sample->relativeMaximumDirection=NULL;
    }
    if (sample->relativeMaximumSpeed != NULL) {

        delete  sample->relativeMaximumSpeed;
        sample->relativeMaximumSpeed=NULL;
    }
    if (sample->relativeMinimumDirection != NULL) {

        delete  sample->relativeMinimumDirection;
        sample->relativeMinimumDirection=NULL;
    }
    if (sample->relativeMinimumSpeed != NULL) {

        delete  sample->relativeMinimumSpeed;
        sample->relativeMinimumSpeed=NULL;
    }
    if (sample->straightDeckCrossSpeed != NULL) {

        delete  sample->straightDeckCrossSpeed;
        sample->straightDeckCrossSpeed=NULL;
    }
    if (sample->straightDeckHeadSpeed != NULL) {

        delete  sample->straightDeckHeadSpeed;
        sample->straightDeckHeadSpeed=NULL;
    }
    if (sample->trueAverageDirection != NULL) {

        delete  sample->trueAverageDirection;
        sample->trueAverageDirection=NULL;
    }
    if (sample->trueAverageSpeed != NULL) {

        delete  sample->trueAverageSpeed;
        sample->trueAverageSpeed=NULL;
    }
    if (sample->trueInstantaneousDirection != NULL) {

        delete  sample->trueInstantaneousDirection;
        sample->trueInstantaneousDirection=NULL;
    }
    if (sample->trueInstantaneousSpeed != NULL) {

        delete  sample->trueInstantaneousSpeed;
        sample->trueInstantaneousSpeed=NULL;
    }
    if (sample->trueMaximumDirection != NULL) {

        delete  sample->trueMaximumDirection;
        sample->trueMaximumDirection=NULL;
    }
    if (sample->trueMaximumSpeed != NULL) {

        delete  sample->trueMaximumSpeed;
        sample->trueMaximumSpeed=NULL;
    }
    if (sample->trueMinimumDirection != NULL) {

        delete  sample->trueMinimumDirection;
        sample->trueMinimumDirection=NULL;
    }
    if (sample->trueMinimumSpeed != NULL) {

        delete  sample->trueMinimumSpeed;
        sample->trueMinimumSpeed=NULL;
    }
}

RTIBool UMAA_SA_WindStatus_WindStatusReportType_copy(
    UMAA_SA_WindStatus_WindStatusReportType* dst,
    const UMAA_SA_WindStatus_WindStatusReportType* src)
{
    try {

        struct DDS_TypeDeallocationParams_t deallocParamsTmp =
        DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
        struct DDS_TypeDeallocationParams_t * deallocParams =
        &deallocParamsTmp;

        if (deallocParams) {} /* To avoid warnings */

        deallocParamsTmp.delete_pointers = DDS_BOOLEAN_TRUE;
        deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;    

        if (dst == NULL || src == NULL) {
            return RTI_FALSE;
        }

        if (src->relativeAverageDirection!=NULL) {
            if (dst->relativeAverageDirection==NULL) {

                dst->relativeAverageDirection = new (std::nothrow)   DDS_Double ();
                if (dst->relativeAverageDirection==NULL) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initDouble(dst->relativeAverageDirection)) {
                    return RTI_FALSE;
                }
            }
            if (!RTICdrType_copyDouble (
                dst->relativeAverageDirection, 
                src->relativeAverageDirection)) { 
                return RTI_FALSE;
            }
        } else {
            if (dst->relativeAverageDirection != NULL) {
                delete  dst->relativeAverageDirection;
                dst->relativeAverageDirection=NULL;
            }
        }
        if (src->relativeAverageSpeed!=NULL) {
            if (dst->relativeAverageSpeed==NULL) {

                dst->relativeAverageSpeed = new (std::nothrow)   DDS_Double ();
                if (dst->relativeAverageSpeed==NULL) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initDouble(dst->relativeAverageSpeed)) {
                    return RTI_FALSE;
                }
            }
            if (!RTICdrType_copyDouble (
                dst->relativeAverageSpeed, 
                src->relativeAverageSpeed)) { 
                return RTI_FALSE;
            }
        } else {
            if (dst->relativeAverageSpeed != NULL) {
                delete  dst->relativeAverageSpeed;
                dst->relativeAverageSpeed=NULL;
            }
        }
        if (src->relativeInstantaneousDirection!=NULL) {
            if (dst->relativeInstantaneousDirection==NULL) {

                dst->relativeInstantaneousDirection = new (std::nothrow)   DDS_Double ();
                if (dst->relativeInstantaneousDirection==NULL) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initDouble(dst->relativeInstantaneousDirection)) {
                    return RTI_FALSE;
                }
            }
            if (!RTICdrType_copyDouble (
                dst->relativeInstantaneousDirection, 
                src->relativeInstantaneousDirection)) { 
                return RTI_FALSE;
            }
        } else {
            if (dst->relativeInstantaneousDirection != NULL) {
                delete  dst->relativeInstantaneousDirection;
                dst->relativeInstantaneousDirection=NULL;
            }
        }
        if (src->relativeInstantaneousSpeed!=NULL) {
            if (dst->relativeInstantaneousSpeed==NULL) {

                dst->relativeInstantaneousSpeed = new (std::nothrow)   DDS_Double ();
                if (dst->relativeInstantaneousSpeed==NULL) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initDouble(dst->relativeInstantaneousSpeed)) {
                    return RTI_FALSE;
                }
            }
            if (!RTICdrType_copyDouble (
                dst->relativeInstantaneousSpeed, 
                src->relativeInstantaneousSpeed)) { 
                return RTI_FALSE;
            }
        } else {
            if (dst->relativeInstantaneousSpeed != NULL) {
                delete  dst->relativeInstantaneousSpeed;
                dst->relativeInstantaneousSpeed=NULL;
            }
        }
        if (src->relativeMaximumDirection!=NULL) {
            if (dst->relativeMaximumDirection==NULL) {

                dst->relativeMaximumDirection = new (std::nothrow)   DDS_Double ();
                if (dst->relativeMaximumDirection==NULL) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initDouble(dst->relativeMaximumDirection)) {
                    return RTI_FALSE;
                }
            }
            if (!RTICdrType_copyDouble (
                dst->relativeMaximumDirection, 
                src->relativeMaximumDirection)) { 
                return RTI_FALSE;
            }
        } else {
            if (dst->relativeMaximumDirection != NULL) {
                delete  dst->relativeMaximumDirection;
                dst->relativeMaximumDirection=NULL;
            }
        }
        if (src->relativeMaximumSpeed!=NULL) {
            if (dst->relativeMaximumSpeed==NULL) {

                dst->relativeMaximumSpeed = new (std::nothrow)   DDS_Double ();
                if (dst->relativeMaximumSpeed==NULL) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initDouble(dst->relativeMaximumSpeed)) {
                    return RTI_FALSE;
                }
            }
            if (!RTICdrType_copyDouble (
                dst->relativeMaximumSpeed, 
                src->relativeMaximumSpeed)) { 
                return RTI_FALSE;
            }
        } else {
            if (dst->relativeMaximumSpeed != NULL) {
                delete  dst->relativeMaximumSpeed;
                dst->relativeMaximumSpeed=NULL;
            }
        }
        if (src->relativeMinimumDirection!=NULL) {
            if (dst->relativeMinimumDirection==NULL) {

                dst->relativeMinimumDirection = new (std::nothrow)   DDS_Double ();
                if (dst->relativeMinimumDirection==NULL) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initDouble(dst->relativeMinimumDirection)) {
                    return RTI_FALSE;
                }
            }
            if (!RTICdrType_copyDouble (
                dst->relativeMinimumDirection, 
                src->relativeMinimumDirection)) { 
                return RTI_FALSE;
            }
        } else {
            if (dst->relativeMinimumDirection != NULL) {
                delete  dst->relativeMinimumDirection;
                dst->relativeMinimumDirection=NULL;
            }
        }
        if (src->relativeMinimumSpeed!=NULL) {
            if (dst->relativeMinimumSpeed==NULL) {

                dst->relativeMinimumSpeed = new (std::nothrow)   DDS_Double ();
                if (dst->relativeMinimumSpeed==NULL) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initDouble(dst->relativeMinimumSpeed)) {
                    return RTI_FALSE;
                }
            }
            if (!RTICdrType_copyDouble (
                dst->relativeMinimumSpeed, 
                src->relativeMinimumSpeed)) { 
                return RTI_FALSE;
            }
        } else {
            if (dst->relativeMinimumSpeed != NULL) {
                delete  dst->relativeMinimumSpeed;
                dst->relativeMinimumSpeed=NULL;
            }
        }
        if (src->straightDeckCrossSpeed!=NULL) {
            if (dst->straightDeckCrossSpeed==NULL) {

                dst->straightDeckCrossSpeed = new (std::nothrow)   DDS_Double ();
                if (dst->straightDeckCrossSpeed==NULL) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initDouble(dst->straightDeckCrossSpeed)) {
                    return RTI_FALSE;
                }
            }
            if (!RTICdrType_copyDouble (
                dst->straightDeckCrossSpeed, 
                src->straightDeckCrossSpeed)) { 
                return RTI_FALSE;
            }
        } else {
            if (dst->straightDeckCrossSpeed != NULL) {
                delete  dst->straightDeckCrossSpeed;
                dst->straightDeckCrossSpeed=NULL;
            }
        }
        if (src->straightDeckHeadSpeed!=NULL) {
            if (dst->straightDeckHeadSpeed==NULL) {

                dst->straightDeckHeadSpeed = new (std::nothrow)   DDS_Double ();
                if (dst->straightDeckHeadSpeed==NULL) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initDouble(dst->straightDeckHeadSpeed)) {
                    return RTI_FALSE;
                }
            }
            if (!RTICdrType_copyDouble (
                dst->straightDeckHeadSpeed, 
                src->straightDeckHeadSpeed)) { 
                return RTI_FALSE;
            }
        } else {
            if (dst->straightDeckHeadSpeed != NULL) {
                delete  dst->straightDeckHeadSpeed;
                dst->straightDeckHeadSpeed=NULL;
            }
        }
        if (src->trueAverageDirection!=NULL) {
            if (dst->trueAverageDirection==NULL) {

                dst->trueAverageDirection = new (std::nothrow)   DDS_Double ();
                if (dst->trueAverageDirection==NULL) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initDouble(dst->trueAverageDirection)) {
                    return RTI_FALSE;
                }
            }
            if (!RTICdrType_copyDouble (
                dst->trueAverageDirection, 
                src->trueAverageDirection)) { 
                return RTI_FALSE;
            }
        } else {
            if (dst->trueAverageDirection != NULL) {
                delete  dst->trueAverageDirection;
                dst->trueAverageDirection=NULL;
            }
        }
        if (src->trueAverageSpeed!=NULL) {
            if (dst->trueAverageSpeed==NULL) {

                dst->trueAverageSpeed = new (std::nothrow)   DDS_Double ();
                if (dst->trueAverageSpeed==NULL) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initDouble(dst->trueAverageSpeed)) {
                    return RTI_FALSE;
                }
            }
            if (!RTICdrType_copyDouble (
                dst->trueAverageSpeed, 
                src->trueAverageSpeed)) { 
                return RTI_FALSE;
            }
        } else {
            if (dst->trueAverageSpeed != NULL) {
                delete  dst->trueAverageSpeed;
                dst->trueAverageSpeed=NULL;
            }
        }
        if (src->trueInstantaneousDirection!=NULL) {
            if (dst->trueInstantaneousDirection==NULL) {

                dst->trueInstantaneousDirection = new (std::nothrow)   DDS_Double ();
                if (dst->trueInstantaneousDirection==NULL) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initDouble(dst->trueInstantaneousDirection)) {
                    return RTI_FALSE;
                }
            }
            if (!RTICdrType_copyDouble (
                dst->trueInstantaneousDirection, 
                src->trueInstantaneousDirection)) { 
                return RTI_FALSE;
            }
        } else {
            if (dst->trueInstantaneousDirection != NULL) {
                delete  dst->trueInstantaneousDirection;
                dst->trueInstantaneousDirection=NULL;
            }
        }
        if (src->trueInstantaneousSpeed!=NULL) {
            if (dst->trueInstantaneousSpeed==NULL) {

                dst->trueInstantaneousSpeed = new (std::nothrow)   DDS_Double ();
                if (dst->trueInstantaneousSpeed==NULL) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initDouble(dst->trueInstantaneousSpeed)) {
                    return RTI_FALSE;
                }
            }
            if (!RTICdrType_copyDouble (
                dst->trueInstantaneousSpeed, 
                src->trueInstantaneousSpeed)) { 
                return RTI_FALSE;
            }
        } else {
            if (dst->trueInstantaneousSpeed != NULL) {
                delete  dst->trueInstantaneousSpeed;
                dst->trueInstantaneousSpeed=NULL;
            }
        }
        if (src->trueMaximumDirection!=NULL) {
            if (dst->trueMaximumDirection==NULL) {

                dst->trueMaximumDirection = new (std::nothrow)   DDS_Double ();
                if (dst->trueMaximumDirection==NULL) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initDouble(dst->trueMaximumDirection)) {
                    return RTI_FALSE;
                }
            }
            if (!RTICdrType_copyDouble (
                dst->trueMaximumDirection, 
                src->trueMaximumDirection)) { 
                return RTI_FALSE;
            }
        } else {
            if (dst->trueMaximumDirection != NULL) {
                delete  dst->trueMaximumDirection;
                dst->trueMaximumDirection=NULL;
            }
        }
        if (src->trueMaximumSpeed!=NULL) {
            if (dst->trueMaximumSpeed==NULL) {

                dst->trueMaximumSpeed = new (std::nothrow)   DDS_Double ();
                if (dst->trueMaximumSpeed==NULL) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initDouble(dst->trueMaximumSpeed)) {
                    return RTI_FALSE;
                }
            }
            if (!RTICdrType_copyDouble (
                dst->trueMaximumSpeed, 
                src->trueMaximumSpeed)) { 
                return RTI_FALSE;
            }
        } else {
            if (dst->trueMaximumSpeed != NULL) {
                delete  dst->trueMaximumSpeed;
                dst->trueMaximumSpeed=NULL;
            }
        }
        if (src->trueMinimumDirection!=NULL) {
            if (dst->trueMinimumDirection==NULL) {

                dst->trueMinimumDirection = new (std::nothrow)   DDS_Double ();
                if (dst->trueMinimumDirection==NULL) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initDouble(dst->trueMinimumDirection)) {
                    return RTI_FALSE;
                }
            }
            if (!RTICdrType_copyDouble (
                dst->trueMinimumDirection, 
                src->trueMinimumDirection)) { 
                return RTI_FALSE;
            }
        } else {
            if (dst->trueMinimumDirection != NULL) {
                delete  dst->trueMinimumDirection;
                dst->trueMinimumDirection=NULL;
            }
        }
        if (src->trueMinimumSpeed!=NULL) {
            if (dst->trueMinimumSpeed==NULL) {

                dst->trueMinimumSpeed = new (std::nothrow)   DDS_Double ();
                if (dst->trueMinimumSpeed==NULL) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initDouble(dst->trueMinimumSpeed)) {
                    return RTI_FALSE;
                }
            }
            if (!RTICdrType_copyDouble (
                dst->trueMinimumSpeed, 
                src->trueMinimumSpeed)) { 
                return RTI_FALSE;
            }
        } else {
            if (dst->trueMinimumSpeed != NULL) {
                delete  dst->trueMinimumSpeed;
                dst->trueMinimumSpeed=NULL;
            }
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
* Configure and implement 'UMAA_SA_WindStatus_WindStatusReportType' sequence class.
*/
#define T UMAA_SA_WindStatus_WindStatusReportType
#define TSeq UMAA_SA_WindStatus_WindStatusReportTypeSeq

#define T_initialize_w_params UMAA_SA_WindStatus_WindStatusReportType_initialize_w_params

#define T_finalize_w_params   UMAA_SA_WindStatus_WindStatusReportType_finalize_w_params
#define T_copy       UMAA_SA_WindStatus_WindStatusReportType_copy

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
        const RTIXCdrTypeCode * type_code< UMAA_SA_WindStatus_WindStatusReportType>::get() 
        {
            return (const RTIXCdrTypeCode *) UMAA_SA_WindStatus_WindStatusReportType_get_typecode();
        }

    } 
}
#endif
