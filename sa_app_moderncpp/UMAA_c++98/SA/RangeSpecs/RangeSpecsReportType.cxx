

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from RangeSpecsReportType.idl 
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

#include "RangeSpecsReportType.h"

#ifndef NDDS_STANDALONE_TYPE
#include "RangeSpecsReportTypePlugin.h"
#endif

#include <new>

/* ========================================================================= */
const char *UMAA_SA_RangeSpecs_RangeSpecsReportTypeTYPENAME = "UMAA::SA::RangeSpecs::RangeSpecsReportType";

#ifndef NDDS_STANDALONE_TYPE
DDS_TypeCode * UMAA_SA_RangeSpecs_RangeSpecsReportType_get_typecode(void)
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode_Member UMAA_SA_RangeSpecs_RangeSpecsReportType_g_tc_members[19]=
    {

        {
            (char *)"coordinateTransformation",/* Member name */
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
            (char *)"maxHorizontalFOVStopAngle",/* Member name */
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
            (char *)"maxRange",/* Member name */
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
            (char *)"maxUpdateRate",/* Member name */
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
            (char *)"maxVerticalFOVStopAngle",/* Member name */
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
            (char *)"minHorizontalFOVStartAngle",/* Member name */
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
            (char *)"minRange",/* Member name */
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
            (char *)"minUpdateRate",/* Member name */
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
            (char *)"minVerticalFOVStartAngle",/* Member name */
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
            (char *)"name",/* Member name */
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
            (char *)"stateActive",/* Member name */
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
            (char *)"stateOff",/* Member name */
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
            (char *)"stateStandby",/* Member name */
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
            (char *)"supportedBzip2",/* Member name */
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
            (char *)"supportedDeflated",/* Member name */
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
            (char *)"supportedLZMA",/* Member name */
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
            (char *)"supportedNoCompression",/* Member name */
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
            (char *)"source",/* Member name */
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
            RTI_CDR_KEY_MEMBER , /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }, 
        {
            (char *)"timeStamp",/* Member name */
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
        }
    };

    static DDS_TypeCode UMAA_SA_RangeSpecs_RangeSpecsReportType_g_tc =
    {{
            DDS_TK_STRUCT, /* Kind */
            DDS_BOOLEAN_FALSE, /* Ignored */
            -1, /*Ignored*/
            (char *)"UMAA::SA::RangeSpecs::RangeSpecsReportType", /* Name */
            NULL, /* Ignored */      
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            19, /* Number of members */
            UMAA_SA_RangeSpecs_RangeSpecsReportType_g_tc_members, /* Members */
            DDS_VM_NONE, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER,
            DDS_BOOLEAN_TRUE, /* _isCopyable */
            NULL, /* _sampleAccessInfo: assigned later */
            NULL /* _typePlugin: assigned later */
        }}; /* Type code for UMAA_SA_RangeSpecs_RangeSpecsReportType*/

    if (is_initialized) {
        return &UMAA_SA_RangeSpecs_RangeSpecsReportType_g_tc;
    }

    is_initialized = RTI_TRUE;

    UMAA_SA_RangeSpecs_RangeSpecsReportType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

    UMAA_SA_RangeSpecs_RangeSpecsReportType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;
    UMAA_SA_RangeSpecs_RangeSpecsReportType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_RelativeAngle_get_typecode();
    UMAA_SA_RangeSpecs_RangeSpecsReportType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_Distance_get_typecode();
    UMAA_SA_RangeSpecs_RangeSpecsReportType_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_Frequency_Hertz_get_typecode();
    UMAA_SA_RangeSpecs_RangeSpecsReportType_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_RelativeAngle_get_typecode();
    UMAA_SA_RangeSpecs_RangeSpecsReportType_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_RelativeAngle_get_typecode();
    UMAA_SA_RangeSpecs_RangeSpecsReportType_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_Distance_get_typecode();
    UMAA_SA_RangeSpecs_RangeSpecsReportType_g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_Frequency_Hertz_get_typecode();
    UMAA_SA_RangeSpecs_RangeSpecsReportType_g_tc_members[8]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_RelativeAngle_get_typecode();
    UMAA_SA_RangeSpecs_RangeSpecsReportType_g_tc_members[9]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_PrimitiveConstrained_StringShortDescription_get_typecode();
    UMAA_SA_RangeSpecs_RangeSpecsReportType_g_tc_members[10]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;
    UMAA_SA_RangeSpecs_RangeSpecsReportType_g_tc_members[11]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;
    UMAA_SA_RangeSpecs_RangeSpecsReportType_g_tc_members[12]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;
    UMAA_SA_RangeSpecs_RangeSpecsReportType_g_tc_members[13]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;
    UMAA_SA_RangeSpecs_RangeSpecsReportType_g_tc_members[14]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;
    UMAA_SA_RangeSpecs_RangeSpecsReportType_g_tc_members[15]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;
    UMAA_SA_RangeSpecs_RangeSpecsReportType_g_tc_members[16]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;
    UMAA_SA_RangeSpecs_RangeSpecsReportType_g_tc_members[17]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_NumericGUID_get_typecode();
    UMAA_SA_RangeSpecs_RangeSpecsReportType_g_tc_members[18]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_DateTime_get_typecode();

    /* Initialize the values for member annotations. */
    UMAA_SA_RangeSpecs_RangeSpecsReportType_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
    UMAA_SA_RangeSpecs_RangeSpecsReportType_g_tc_members[0]._annotations._defaultValue._u.boolean_value = 0;
    UMAA_SA_RangeSpecs_RangeSpecsReportType_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_SA_RangeSpecs_RangeSpecsReportType_g_tc_members[1]._annotations._defaultValue._u.double_value = 0.0;
    UMAA_SA_RangeSpecs_RangeSpecsReportType_g_tc_members[1]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_SA_RangeSpecs_RangeSpecsReportType_g_tc_members[1]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
    UMAA_SA_RangeSpecs_RangeSpecsReportType_g_tc_members[1]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_SA_RangeSpecs_RangeSpecsReportType_g_tc_members[1]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
    UMAA_SA_RangeSpecs_RangeSpecsReportType_g_tc_members[2]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_SA_RangeSpecs_RangeSpecsReportType_g_tc_members[2]._annotations._defaultValue._u.double_value = 0.0;
    UMAA_SA_RangeSpecs_RangeSpecsReportType_g_tc_members[2]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_SA_RangeSpecs_RangeSpecsReportType_g_tc_members[2]._annotations._minValue._u.double_value = 0ULL;
    UMAA_SA_RangeSpecs_RangeSpecsReportType_g_tc_members[2]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_SA_RangeSpecs_RangeSpecsReportType_g_tc_members[2]._annotations._maxValue._u.double_value = 401056000ULL;
    UMAA_SA_RangeSpecs_RangeSpecsReportType_g_tc_members[3]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_SA_RangeSpecs_RangeSpecsReportType_g_tc_members[3]._annotations._defaultValue._u.double_value = 0.0;
    UMAA_SA_RangeSpecs_RangeSpecsReportType_g_tc_members[3]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_SA_RangeSpecs_RangeSpecsReportType_g_tc_members[3]._annotations._minValue._u.double_value = 0.0;
    UMAA_SA_RangeSpecs_RangeSpecsReportType_g_tc_members[3]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_SA_RangeSpecs_RangeSpecsReportType_g_tc_members[3]._annotations._maxValue._u.double_value = 10000000000ULL;
    UMAA_SA_RangeSpecs_RangeSpecsReportType_g_tc_members[4]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_SA_RangeSpecs_RangeSpecsReportType_g_tc_members[4]._annotations._defaultValue._u.double_value = 0.0;
    UMAA_SA_RangeSpecs_RangeSpecsReportType_g_tc_members[4]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_SA_RangeSpecs_RangeSpecsReportType_g_tc_members[4]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
    UMAA_SA_RangeSpecs_RangeSpecsReportType_g_tc_members[4]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_SA_RangeSpecs_RangeSpecsReportType_g_tc_members[4]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
    UMAA_SA_RangeSpecs_RangeSpecsReportType_g_tc_members[5]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_SA_RangeSpecs_RangeSpecsReportType_g_tc_members[5]._annotations._defaultValue._u.double_value = 0.0;
    UMAA_SA_RangeSpecs_RangeSpecsReportType_g_tc_members[5]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_SA_RangeSpecs_RangeSpecsReportType_g_tc_members[5]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
    UMAA_SA_RangeSpecs_RangeSpecsReportType_g_tc_members[5]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_SA_RangeSpecs_RangeSpecsReportType_g_tc_members[5]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
    UMAA_SA_RangeSpecs_RangeSpecsReportType_g_tc_members[6]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_SA_RangeSpecs_RangeSpecsReportType_g_tc_members[6]._annotations._defaultValue._u.double_value = 0.0;
    UMAA_SA_RangeSpecs_RangeSpecsReportType_g_tc_members[6]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_SA_RangeSpecs_RangeSpecsReportType_g_tc_members[6]._annotations._minValue._u.double_value = 0ULL;
    UMAA_SA_RangeSpecs_RangeSpecsReportType_g_tc_members[6]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_SA_RangeSpecs_RangeSpecsReportType_g_tc_members[6]._annotations._maxValue._u.double_value = 401056000ULL;
    UMAA_SA_RangeSpecs_RangeSpecsReportType_g_tc_members[7]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_SA_RangeSpecs_RangeSpecsReportType_g_tc_members[7]._annotations._defaultValue._u.double_value = 0.0;
    UMAA_SA_RangeSpecs_RangeSpecsReportType_g_tc_members[7]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_SA_RangeSpecs_RangeSpecsReportType_g_tc_members[7]._annotations._minValue._u.double_value = 0.0;
    UMAA_SA_RangeSpecs_RangeSpecsReportType_g_tc_members[7]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_SA_RangeSpecs_RangeSpecsReportType_g_tc_members[7]._annotations._maxValue._u.double_value = 10000000000ULL;
    UMAA_SA_RangeSpecs_RangeSpecsReportType_g_tc_members[8]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_SA_RangeSpecs_RangeSpecsReportType_g_tc_members[8]._annotations._defaultValue._u.double_value = 0.0;
    UMAA_SA_RangeSpecs_RangeSpecsReportType_g_tc_members[8]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_SA_RangeSpecs_RangeSpecsReportType_g_tc_members[8]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
    UMAA_SA_RangeSpecs_RangeSpecsReportType_g_tc_members[8]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_SA_RangeSpecs_RangeSpecsReportType_g_tc_members[8]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
    UMAA_SA_RangeSpecs_RangeSpecsReportType_g_tc_members[9]._annotations._defaultValue._d = RTI_XCDR_TK_STRING;
    UMAA_SA_RangeSpecs_RangeSpecsReportType_g_tc_members[9]._annotations._defaultValue._u.string_value = (DDS_Char *) "";
    UMAA_SA_RangeSpecs_RangeSpecsReportType_g_tc_members[10]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
    UMAA_SA_RangeSpecs_RangeSpecsReportType_g_tc_members[10]._annotations._defaultValue._u.boolean_value = 0;
    UMAA_SA_RangeSpecs_RangeSpecsReportType_g_tc_members[11]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
    UMAA_SA_RangeSpecs_RangeSpecsReportType_g_tc_members[11]._annotations._defaultValue._u.boolean_value = 0;
    UMAA_SA_RangeSpecs_RangeSpecsReportType_g_tc_members[12]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
    UMAA_SA_RangeSpecs_RangeSpecsReportType_g_tc_members[12]._annotations._defaultValue._u.boolean_value = 0;
    UMAA_SA_RangeSpecs_RangeSpecsReportType_g_tc_members[13]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
    UMAA_SA_RangeSpecs_RangeSpecsReportType_g_tc_members[13]._annotations._defaultValue._u.boolean_value = 0;
    UMAA_SA_RangeSpecs_RangeSpecsReportType_g_tc_members[14]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
    UMAA_SA_RangeSpecs_RangeSpecsReportType_g_tc_members[14]._annotations._defaultValue._u.boolean_value = 0;
    UMAA_SA_RangeSpecs_RangeSpecsReportType_g_tc_members[15]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
    UMAA_SA_RangeSpecs_RangeSpecsReportType_g_tc_members[15]._annotations._defaultValue._u.boolean_value = 0;
    UMAA_SA_RangeSpecs_RangeSpecsReportType_g_tc_members[16]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
    UMAA_SA_RangeSpecs_RangeSpecsReportType_g_tc_members[16]._annotations._defaultValue._u.boolean_value = 0;

    UMAA_SA_RangeSpecs_RangeSpecsReportType_g_tc._data._sampleAccessInfo =
    UMAA_SA_RangeSpecs_RangeSpecsReportType_get_sample_access_info();
    UMAA_SA_RangeSpecs_RangeSpecsReportType_g_tc._data._typePlugin =
    UMAA_SA_RangeSpecs_RangeSpecsReportType_get_type_plugin_info();    

    return &UMAA_SA_RangeSpecs_RangeSpecsReportType_g_tc;
}

#define TSeq UMAA_SA_RangeSpecs_RangeSpecsReportTypeSeq
#define T UMAA_SA_RangeSpecs_RangeSpecsReportType
#include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
#undef T
#undef TSeq

RTIXCdrSampleAccessInfo *UMAA_SA_RangeSpecs_RangeSpecsReportType_get_sample_seq_access_info()
{
    static RTIXCdrSampleAccessInfo UMAA_SA_RangeSpecs_RangeSpecsReportType_g_seqSampleAccessInfo = {
        RTI_XCDR_TYPE_BINDING_CPP, \
        {sizeof(UMAA_SA_RangeSpecs_RangeSpecsReportTypeSeq),0,0,0}, \
        RTI_XCDR_FALSE, \
        DDS_Sequence_get_member_value_pointer, \
        UMAA_SA_RangeSpecs_RangeSpecsReportTypeSeq_set_member_element_count, \
        NULL, \
        NULL, \
        NULL \
    };

    return &UMAA_SA_RangeSpecs_RangeSpecsReportType_g_seqSampleAccessInfo;
}

RTIXCdrSampleAccessInfo *UMAA_SA_RangeSpecs_RangeSpecsReportType_get_sample_access_info()
{
    static RTIBool is_initialized = RTI_FALSE;

    UMAA_SA_RangeSpecs_RangeSpecsReportType *sample;

    static RTIXCdrMemberAccessInfo UMAA_SA_RangeSpecs_RangeSpecsReportType_g_memberAccessInfos[19] =
    {RTIXCdrMemberAccessInfo_INITIALIZER};

    static RTIXCdrSampleAccessInfo UMAA_SA_RangeSpecs_RangeSpecsReportType_g_sampleAccessInfo = 
    RTIXCdrSampleAccessInfo_INITIALIZER;

    if (is_initialized) {
        return (RTIXCdrSampleAccessInfo*) &UMAA_SA_RangeSpecs_RangeSpecsReportType_g_sampleAccessInfo;
    }

    RTIXCdrHeap_allocateStruct(
        &sample, 
        UMAA_SA_RangeSpecs_RangeSpecsReportType);
    if (sample == NULL) {
        return NULL;
    }

    UMAA_SA_RangeSpecs_RangeSpecsReportType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->coordinateTransformation - (char *)sample);

    UMAA_SA_RangeSpecs_RangeSpecsReportType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->maxHorizontalFOVStopAngle - (char *)sample);

    UMAA_SA_RangeSpecs_RangeSpecsReportType_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->maxRange - (char *)sample);

    UMAA_SA_RangeSpecs_RangeSpecsReportType_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->maxUpdateRate - (char *)sample);

    UMAA_SA_RangeSpecs_RangeSpecsReportType_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->maxVerticalFOVStopAngle - (char *)sample);

    UMAA_SA_RangeSpecs_RangeSpecsReportType_g_memberAccessInfos[5].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->minHorizontalFOVStartAngle - (char *)sample);

    UMAA_SA_RangeSpecs_RangeSpecsReportType_g_memberAccessInfos[6].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->minRange - (char *)sample);

    UMAA_SA_RangeSpecs_RangeSpecsReportType_g_memberAccessInfos[7].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->minUpdateRate - (char *)sample);

    UMAA_SA_RangeSpecs_RangeSpecsReportType_g_memberAccessInfos[8].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->minVerticalFOVStartAngle - (char *)sample);

    UMAA_SA_RangeSpecs_RangeSpecsReportType_g_memberAccessInfos[9].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->name - (char *)sample);

    UMAA_SA_RangeSpecs_RangeSpecsReportType_g_memberAccessInfos[10].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->stateActive - (char *)sample);

    UMAA_SA_RangeSpecs_RangeSpecsReportType_g_memberAccessInfos[11].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->stateOff - (char *)sample);

    UMAA_SA_RangeSpecs_RangeSpecsReportType_g_memberAccessInfos[12].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->stateStandby - (char *)sample);

    UMAA_SA_RangeSpecs_RangeSpecsReportType_g_memberAccessInfos[13].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->supportedBzip2 - (char *)sample);

    UMAA_SA_RangeSpecs_RangeSpecsReportType_g_memberAccessInfos[14].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->supportedDeflated - (char *)sample);

    UMAA_SA_RangeSpecs_RangeSpecsReportType_g_memberAccessInfos[15].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->supportedLZMA - (char *)sample);

    UMAA_SA_RangeSpecs_RangeSpecsReportType_g_memberAccessInfos[16].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->supportedNoCompression - (char *)sample);

    UMAA_SA_RangeSpecs_RangeSpecsReportType_g_memberAccessInfos[17].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->source - (char *)sample);

    UMAA_SA_RangeSpecs_RangeSpecsReportType_g_memberAccessInfos[18].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->timeStamp - (char *)sample);

    UMAA_SA_RangeSpecs_RangeSpecsReportType_g_sampleAccessInfo.memberAccessInfos = 
    UMAA_SA_RangeSpecs_RangeSpecsReportType_g_memberAccessInfos;

    {
        size_t candidateTypeSize = sizeof(UMAA_SA_RangeSpecs_RangeSpecsReportType);

        if (candidateTypeSize > RTIXCdrLong_MAX) {
            UMAA_SA_RangeSpecs_RangeSpecsReportType_g_sampleAccessInfo.typeSize[0] =
            RTIXCdrLong_MAX;
        } else {
            UMAA_SA_RangeSpecs_RangeSpecsReportType_g_sampleAccessInfo.typeSize[0] =
            (RTIXCdrUnsignedLong) candidateTypeSize;
        }
    }

    UMAA_SA_RangeSpecs_RangeSpecsReportType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
    RTI_XCDR_TRUE;

    UMAA_SA_RangeSpecs_RangeSpecsReportType_g_sampleAccessInfo.getMemberValuePointerFcn = 
    UMAA_SA_RangeSpecs_RangeSpecsReportType_get_member_value_pointer;

    UMAA_SA_RangeSpecs_RangeSpecsReportType_g_sampleAccessInfo.languageBinding = 
    RTI_XCDR_TYPE_BINDING_CPP ;

    RTIXCdrHeap_freeStruct(sample);
    is_initialized = RTI_TRUE;
    return (RTIXCdrSampleAccessInfo*) &UMAA_SA_RangeSpecs_RangeSpecsReportType_g_sampleAccessInfo;
}
RTIXCdrTypePlugin *UMAA_SA_RangeSpecs_RangeSpecsReportType_get_type_plugin_info()
{
    static RTIXCdrTypePlugin UMAA_SA_RangeSpecs_RangeSpecsReportType_g_typePlugin = 
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
        UMAA_SA_RangeSpecs_RangeSpecsReportType_initialize_ex,
        NULL,
        (RTIXCdrTypePluginFinalizeSampleFunction)
        UMAA_SA_RangeSpecs_RangeSpecsReportType_finalize_w_return,
        NULL,
        NULL
    };

    return &UMAA_SA_RangeSpecs_RangeSpecsReportType_g_typePlugin;
}
#endif

RTIBool UMAA_SA_RangeSpecs_RangeSpecsReportType_initialize(
    UMAA_SA_RangeSpecs_RangeSpecsReportType* sample)
{
    return UMAA_SA_RangeSpecs_RangeSpecsReportType_initialize_ex(
        sample, 
        RTI_TRUE, 
        RTI_TRUE);
}
RTIBool UMAA_SA_RangeSpecs_RangeSpecsReportType_initialize_w_params(
    UMAA_SA_RangeSpecs_RangeSpecsReportType *sample,
    const struct DDS_TypeAllocationParams_t *allocParams)
{

    if (sample == NULL) {
        return RTI_FALSE;
    }
    if (allocParams == NULL) {
        return RTI_FALSE;
    }

    sample->coordinateTransformation = 0;

    sample->maxHorizontalFOVStopAngle = 0.0;

    sample->maxRange = 0.0;

    sample->maxUpdateRate = 0.0;

    sample->maxVerticalFOVStopAngle = 0.0;

    sample->minHorizontalFOVStartAngle = 0.0;

    sample->minRange = 0.0;

    sample->minUpdateRate = 0.0;

    sample->minVerticalFOVStartAngle = 0.0;

    if (allocParams->allocate_memory) {
        sample->name = DDS_String_alloc((1023L));
        if (sample->name != NULL) {
            RTIOsapiUtility_unusedReturnValue(
                RTICdrType_copyStringEx(
                    &sample->name,
                    "",
                    (1023L),
                    RTI_FALSE),
                    RTIBool);
        }
        if (sample->name == NULL) {
            return RTI_FALSE;
        }
    } else {
        if (sample->name != NULL) {
            RTIOsapiUtility_unusedReturnValue(
                RTICdrType_copyStringEx(
                    &sample->name,
                    "",
                    (1023L),
                    RTI_FALSE),
                    RTIBool);
            if (sample->name == NULL) {
                return RTI_FALSE;
            }
        }
    }

    sample->stateActive = 0;

    sample->stateOff = 0;

    sample->stateStandby = 0;

    sample->supportedBzip2 = 0;

    sample->supportedDeflated = 0;

    sample->supportedLZMA = 0;

    sample->supportedNoCompression = 0;

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
RTIBool UMAA_SA_RangeSpecs_RangeSpecsReportType_initialize_ex(
    UMAA_SA_RangeSpecs_RangeSpecsReportType *sample,
    RTIBool allocatePointers, 
    RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return UMAA_SA_RangeSpecs_RangeSpecsReportType_initialize_w_params(
        sample,
        &allocParams);
}

RTIBool UMAA_SA_RangeSpecs_RangeSpecsReportType_finalize_w_return(
    UMAA_SA_RangeSpecs_RangeSpecsReportType* sample)
{
    UMAA_SA_RangeSpecs_RangeSpecsReportType_finalize_ex(sample, RTI_TRUE);

    return RTI_TRUE;
}

void UMAA_SA_RangeSpecs_RangeSpecsReportType_finalize(
    UMAA_SA_RangeSpecs_RangeSpecsReportType* sample)
{  
    UMAA_SA_RangeSpecs_RangeSpecsReportType_finalize_ex(
        sample, 
        RTI_TRUE);
}

void UMAA_SA_RangeSpecs_RangeSpecsReportType_finalize_ex(
    UMAA_SA_RangeSpecs_RangeSpecsReportType *sample,
    RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    UMAA_SA_RangeSpecs_RangeSpecsReportType_finalize_w_params(
        sample,
        &deallocParams);
}

void UMAA_SA_RangeSpecs_RangeSpecsReportType_finalize_w_params(
    UMAA_SA_RangeSpecs_RangeSpecsReportType *sample,
    const struct DDS_TypeDeallocationParams_t *deallocParams)
{
    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

    if (sample->name != NULL) {
        DDS_String_free(sample->name);
        sample->name=NULL;

    }

    UMAA_Common_Measurement_NumericGUID_finalize_w_params(
        &sample->source,
        deallocParams);

    UMAA_Common_Measurement_DateTime_finalize_w_params(
        &sample->timeStamp,
        deallocParams);

}

void UMAA_SA_RangeSpecs_RangeSpecsReportType_finalize_optional_members(
    UMAA_SA_RangeSpecs_RangeSpecsReportType* sample, RTIBool deletePointers)
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

RTIBool UMAA_SA_RangeSpecs_RangeSpecsReportType_copy(
    UMAA_SA_RangeSpecs_RangeSpecsReportType* dst,
    const UMAA_SA_RangeSpecs_RangeSpecsReportType* src)
{
    try {

        if (dst == NULL || src == NULL) {
            return RTI_FALSE;
        }

        if (!RTICdrType_copyBoolean (
            &dst->coordinateTransformation, 
            &src->coordinateTransformation)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyDouble (
            &dst->maxHorizontalFOVStopAngle, 
            &src->maxHorizontalFOVStopAngle)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyDouble (
            &dst->maxRange, 
            &src->maxRange)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyDouble (
            &dst->maxUpdateRate, 
            &src->maxUpdateRate)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyDouble (
            &dst->maxVerticalFOVStopAngle, 
            &src->maxVerticalFOVStopAngle)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyDouble (
            &dst->minHorizontalFOVStartAngle, 
            &src->minHorizontalFOVStartAngle)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyDouble (
            &dst->minRange, 
            &src->minRange)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyDouble (
            &dst->minUpdateRate, 
            &src->minUpdateRate)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyDouble (
            &dst->minVerticalFOVStartAngle, 
            &src->minVerticalFOVStartAngle)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyStringEx (
            &dst->name
            ,
            src->name, 
            (1023L) + 1,
            RTI_FALSE)){
            return RTI_FALSE;
        }
        if (!RTICdrType_copyBoolean (
            &dst->stateActive, 
            &src->stateActive)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyBoolean (
            &dst->stateOff, 
            &src->stateOff)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyBoolean (
            &dst->stateStandby, 
            &src->stateStandby)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyBoolean (
            &dst->supportedBzip2, 
            &src->supportedBzip2)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyBoolean (
            &dst->supportedDeflated, 
            &src->supportedDeflated)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyBoolean (
            &dst->supportedLZMA, 
            &src->supportedLZMA)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyBoolean (
            &dst->supportedNoCompression, 
            &src->supportedNoCompression)) { 
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
* Configure and implement 'UMAA_SA_RangeSpecs_RangeSpecsReportType' sequence class.
*/
#define T UMAA_SA_RangeSpecs_RangeSpecsReportType
#define TSeq UMAA_SA_RangeSpecs_RangeSpecsReportTypeSeq

#define T_initialize_w_params UMAA_SA_RangeSpecs_RangeSpecsReportType_initialize_w_params

#define T_finalize_w_params   UMAA_SA_RangeSpecs_RangeSpecsReportType_finalize_w_params
#define T_copy       UMAA_SA_RangeSpecs_RangeSpecsReportType_copy

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
        const RTIXCdrTypeCode * type_code< UMAA_SA_RangeSpecs_RangeSpecsReportType>::get() 
        {
            return (const RTIXCdrTypeCode *) UMAA_SA_RangeSpecs_RangeSpecsReportType_get_typecode();
        }

    } 
}
#endif
