

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from UVPlatformSpecsReportType.idl 
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

#include "UVPlatformSpecsReportType.h"

#ifndef NDDS_STANDALONE_TYPE
#include "UVPlatformSpecsReportTypePlugin.h"
#endif

#include <new>

/* ========================================================================= */
const char *UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportTypeTYPENAME = "UMAA::EO::UVPlatformSpecs::UVPlatformSpecsReportType";

#ifndef NDDS_STANDALONE_TYPE
DDS_TypeCode * UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportType_get_typecode(void)
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode_Member UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportType_g_tc_members[22]=
    {

        {
            (char *)"back",/* Member name */
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
            (char *)"baselineBuoyancy",/* Member name */
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
            (char *)"beamAtWaterline",/* Member name */
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
            (char *)"bottom",/* Member name */
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
            (char *)"centerOfBuoyancy",/* Member name */
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
            (char *)"centerOfGravity",/* Member name */
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
            (char *)"displacement",/* Member name */
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
            (char *)"draft",/* Member name */
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
            (char *)"front",/* Member name */
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
            (char *)"heightOverall",/* Member name */
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
            (char *)"hullDepth",/* Member name */
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
            (char *)"left",/* Member name */
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
            (char *)"lengthAtWaterline",/* Member name */
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
            (char *)"lengthOverall",/* Member name */
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
            (char *)"massOnLand",/* Member name */
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
            (char *)"name",/* Member name */
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
            (char *)"outerWidth",/* Member name */
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
            (char *)"right",/* Member name */
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
            (char *)"top",/* Member name */
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
            (char *)"widthOverall",/* Member name */
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
            (char *)"source",/* Member name */
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
            RTI_CDR_KEY_MEMBER , /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }, 
        {
            (char *)"timeStamp",/* Member name */
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
        }
    };

    static DDS_TypeCode UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportType_g_tc =
    {{
            DDS_TK_STRUCT, /* Kind */
            DDS_BOOLEAN_FALSE, /* Ignored */
            -1, /*Ignored*/
            (char *)"UMAA::EO::UVPlatformSpecs::UVPlatformSpecsReportType", /* Name */
            NULL, /* Ignored */      
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            22, /* Number of members */
            UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportType_g_tc_members, /* Members */
            DDS_VM_NONE, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER,
            DDS_BOOLEAN_TRUE, /* _isCopyable */
            NULL, /* _sampleAccessInfo: assigned later */
            NULL /* _typePlugin: assigned later */
        }}; /* Type code for UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportType*/

    if (is_initialized) {
        return &UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportType_g_tc;
    }

    is_initialized = RTI_TRUE;

    UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

    UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_Distance_get_typecode();
    UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_Mass_get_typecode();
    UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_Distance_get_typecode();
    UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportType_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_Distance_get_typecode();
    UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportType_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_Position3D_PlatformXYZ_get_typecode();
    UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportType_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_Position3D_PlatformXYZ_get_typecode();
    UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportType_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_Mass_get_typecode();
    UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportType_g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_Distance_get_typecode();
    UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportType_g_tc_members[8]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_Distance_get_typecode();
    UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportType_g_tc_members[9]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_Distance_get_typecode();
    UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportType_g_tc_members[10]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_Distance_get_typecode();
    UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportType_g_tc_members[11]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_Distance_get_typecode();
    UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportType_g_tc_members[12]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_Distance_get_typecode();
    UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportType_g_tc_members[13]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_Distance_get_typecode();
    UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportType_g_tc_members[14]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_Mass_get_typecode();
    UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportType_g_tc_members[15]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_PrimitiveConstrained_StringShortDescription_get_typecode();
    UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportType_g_tc_members[16]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_Distance_get_typecode();
    UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportType_g_tc_members[17]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_Distance_get_typecode();
    UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportType_g_tc_members[18]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_Distance_get_typecode();
    UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportType_g_tc_members[19]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_Distance_get_typecode();
    UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportType_g_tc_members[20]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_NumericGUID_get_typecode();
    UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportType_g_tc_members[21]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_DateTime_get_typecode();

    /* Initialize the values for member annotations. */
    UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportType_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportType_g_tc_members[0]._annotations._defaultValue._u.double_value = 0.0;
    UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportType_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportType_g_tc_members[0]._annotations._minValue._u.double_value = 0ULL;
    UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportType_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportType_g_tc_members[0]._annotations._maxValue._u.double_value = 401056000ULL;
    UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportType_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportType_g_tc_members[1]._annotations._defaultValue._u.double_value = 0.0;
    UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportType_g_tc_members[1]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportType_g_tc_members[1]._annotations._minValue._u.double_value = 0ULL;
    UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportType_g_tc_members[1]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportType_g_tc_members[1]._annotations._maxValue._u.double_value = 100000000ULL;
    UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportType_g_tc_members[2]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportType_g_tc_members[2]._annotations._defaultValue._u.double_value = 0.0;
    UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportType_g_tc_members[2]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportType_g_tc_members[2]._annotations._minValue._u.double_value = 0ULL;
    UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportType_g_tc_members[2]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportType_g_tc_members[2]._annotations._maxValue._u.double_value = 401056000ULL;
    UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportType_g_tc_members[3]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportType_g_tc_members[3]._annotations._defaultValue._u.double_value = 0.0;
    UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportType_g_tc_members[3]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportType_g_tc_members[3]._annotations._minValue._u.double_value = 0ULL;
    UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportType_g_tc_members[3]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportType_g_tc_members[3]._annotations._maxValue._u.double_value = 401056000ULL;
    UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportType_g_tc_members[6]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportType_g_tc_members[6]._annotations._defaultValue._u.double_value = 0.0;
    UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportType_g_tc_members[6]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportType_g_tc_members[6]._annotations._minValue._u.double_value = 0ULL;
    UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportType_g_tc_members[6]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportType_g_tc_members[6]._annotations._maxValue._u.double_value = 100000000ULL;
    UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportType_g_tc_members[7]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportType_g_tc_members[7]._annotations._defaultValue._u.double_value = 0.0;
    UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportType_g_tc_members[7]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportType_g_tc_members[7]._annotations._minValue._u.double_value = 0ULL;
    UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportType_g_tc_members[7]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportType_g_tc_members[7]._annotations._maxValue._u.double_value = 401056000ULL;
    UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportType_g_tc_members[8]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportType_g_tc_members[8]._annotations._defaultValue._u.double_value = 0.0;
    UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportType_g_tc_members[8]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportType_g_tc_members[8]._annotations._minValue._u.double_value = 0ULL;
    UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportType_g_tc_members[8]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportType_g_tc_members[8]._annotations._maxValue._u.double_value = 401056000ULL;
    UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportType_g_tc_members[9]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportType_g_tc_members[9]._annotations._defaultValue._u.double_value = 0.0;
    UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportType_g_tc_members[9]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportType_g_tc_members[9]._annotations._minValue._u.double_value = 0ULL;
    UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportType_g_tc_members[9]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportType_g_tc_members[9]._annotations._maxValue._u.double_value = 401056000ULL;
    UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportType_g_tc_members[10]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportType_g_tc_members[10]._annotations._defaultValue._u.double_value = 0.0;
    UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportType_g_tc_members[10]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportType_g_tc_members[10]._annotations._minValue._u.double_value = 0ULL;
    UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportType_g_tc_members[10]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportType_g_tc_members[10]._annotations._maxValue._u.double_value = 401056000ULL;
    UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportType_g_tc_members[11]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportType_g_tc_members[11]._annotations._defaultValue._u.double_value = 0.0;
    UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportType_g_tc_members[11]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportType_g_tc_members[11]._annotations._minValue._u.double_value = 0ULL;
    UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportType_g_tc_members[11]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportType_g_tc_members[11]._annotations._maxValue._u.double_value = 401056000ULL;
    UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportType_g_tc_members[12]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportType_g_tc_members[12]._annotations._defaultValue._u.double_value = 0.0;
    UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportType_g_tc_members[12]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportType_g_tc_members[12]._annotations._minValue._u.double_value = 0ULL;
    UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportType_g_tc_members[12]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportType_g_tc_members[12]._annotations._maxValue._u.double_value = 401056000ULL;
    UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportType_g_tc_members[13]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportType_g_tc_members[13]._annotations._defaultValue._u.double_value = 0.0;
    UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportType_g_tc_members[13]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportType_g_tc_members[13]._annotations._minValue._u.double_value = 0ULL;
    UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportType_g_tc_members[13]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportType_g_tc_members[13]._annotations._maxValue._u.double_value = 401056000ULL;
    UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportType_g_tc_members[14]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportType_g_tc_members[14]._annotations._defaultValue._u.double_value = 0.0;
    UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportType_g_tc_members[14]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportType_g_tc_members[14]._annotations._minValue._u.double_value = 0ULL;
    UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportType_g_tc_members[14]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportType_g_tc_members[14]._annotations._maxValue._u.double_value = 100000000ULL;
    UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportType_g_tc_members[15]._annotations._defaultValue._d = RTI_XCDR_TK_STRING;
    UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportType_g_tc_members[15]._annotations._defaultValue._u.string_value = (DDS_Char *) "";
    UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportType_g_tc_members[16]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportType_g_tc_members[16]._annotations._defaultValue._u.double_value = 0.0;
    UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportType_g_tc_members[16]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportType_g_tc_members[16]._annotations._minValue._u.double_value = 0ULL;
    UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportType_g_tc_members[16]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportType_g_tc_members[16]._annotations._maxValue._u.double_value = 401056000ULL;
    UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportType_g_tc_members[17]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportType_g_tc_members[17]._annotations._defaultValue._u.double_value = 0.0;
    UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportType_g_tc_members[17]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportType_g_tc_members[17]._annotations._minValue._u.double_value = 0ULL;
    UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportType_g_tc_members[17]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportType_g_tc_members[17]._annotations._maxValue._u.double_value = 401056000ULL;
    UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportType_g_tc_members[18]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportType_g_tc_members[18]._annotations._defaultValue._u.double_value = 0.0;
    UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportType_g_tc_members[18]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportType_g_tc_members[18]._annotations._minValue._u.double_value = 0ULL;
    UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportType_g_tc_members[18]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportType_g_tc_members[18]._annotations._maxValue._u.double_value = 401056000ULL;
    UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportType_g_tc_members[19]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportType_g_tc_members[19]._annotations._defaultValue._u.double_value = 0.0;
    UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportType_g_tc_members[19]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportType_g_tc_members[19]._annotations._minValue._u.double_value = 0ULL;
    UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportType_g_tc_members[19]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportType_g_tc_members[19]._annotations._maxValue._u.double_value = 401056000ULL;

    UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportType_g_tc._data._sampleAccessInfo =
    UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportType_get_sample_access_info();
    UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportType_g_tc._data._typePlugin =
    UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportType_get_type_plugin_info();    

    return &UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportType_g_tc;
}

#define TSeq UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportTypeSeq
#define T UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportType
#include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
#undef T
#undef TSeq

RTIXCdrSampleAccessInfo *UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportType_get_sample_seq_access_info()
{
    static RTIXCdrSampleAccessInfo UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportType_g_seqSampleAccessInfo = {
        RTI_XCDR_TYPE_BINDING_CPP, \
        {sizeof(UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportTypeSeq),0,0,0}, \
        RTI_XCDR_FALSE, \
        DDS_Sequence_get_member_value_pointer, \
        UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportTypeSeq_set_member_element_count, \
        NULL, \
        NULL, \
        NULL \
    };

    return &UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportType_g_seqSampleAccessInfo;
}

RTIXCdrSampleAccessInfo *UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportType_get_sample_access_info()
{
    static RTIBool is_initialized = RTI_FALSE;

    UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportType *sample;

    static RTIXCdrMemberAccessInfo UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportType_g_memberAccessInfos[22] =
    {RTIXCdrMemberAccessInfo_INITIALIZER};

    static RTIXCdrSampleAccessInfo UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportType_g_sampleAccessInfo = 
    RTIXCdrSampleAccessInfo_INITIALIZER;

    if (is_initialized) {
        return (RTIXCdrSampleAccessInfo*) &UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportType_g_sampleAccessInfo;
    }

    RTIXCdrHeap_allocateStruct(
        &sample, 
        UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportType);
    if (sample == NULL) {
        return NULL;
    }

    UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->back - (char *)sample);

    UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->baselineBuoyancy - (char *)sample);

    UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportType_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->beamAtWaterline - (char *)sample);

    UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportType_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->bottom - (char *)sample);

    UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportType_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->centerOfBuoyancy - (char *)sample);

    UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportType_g_memberAccessInfos[5].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->centerOfGravity - (char *)sample);

    UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportType_g_memberAccessInfos[6].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->displacement - (char *)sample);

    UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportType_g_memberAccessInfos[7].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->draft - (char *)sample);

    UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportType_g_memberAccessInfos[8].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->front - (char *)sample);

    UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportType_g_memberAccessInfos[9].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->heightOverall - (char *)sample);

    UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportType_g_memberAccessInfos[10].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->hullDepth - (char *)sample);

    UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportType_g_memberAccessInfos[11].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->left - (char *)sample);

    UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportType_g_memberAccessInfos[12].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->lengthAtWaterline - (char *)sample);

    UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportType_g_memberAccessInfos[13].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->lengthOverall - (char *)sample);

    UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportType_g_memberAccessInfos[14].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->massOnLand - (char *)sample);

    UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportType_g_memberAccessInfos[15].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->name - (char *)sample);

    UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportType_g_memberAccessInfos[16].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->outerWidth - (char *)sample);

    UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportType_g_memberAccessInfos[17].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->right - (char *)sample);

    UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportType_g_memberAccessInfos[18].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->top - (char *)sample);

    UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportType_g_memberAccessInfos[19].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->widthOverall - (char *)sample);

    UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportType_g_memberAccessInfos[20].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->source - (char *)sample);

    UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportType_g_memberAccessInfos[21].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->timeStamp - (char *)sample);

    UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportType_g_sampleAccessInfo.memberAccessInfos = 
    UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportType_g_memberAccessInfos;

    {
        size_t candidateTypeSize = sizeof(UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportType);

        if (candidateTypeSize > RTIXCdrLong_MAX) {
            UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportType_g_sampleAccessInfo.typeSize[0] =
            RTIXCdrLong_MAX;
        } else {
            UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportType_g_sampleAccessInfo.typeSize[0] =
            (RTIXCdrUnsignedLong) candidateTypeSize;
        }
    }

    UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
    RTI_XCDR_TRUE;

    UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportType_g_sampleAccessInfo.getMemberValuePointerFcn = 
    UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportType_get_member_value_pointer;

    UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportType_g_sampleAccessInfo.languageBinding = 
    RTI_XCDR_TYPE_BINDING_CPP ;

    RTIXCdrHeap_freeStruct(sample);
    is_initialized = RTI_TRUE;
    return (RTIXCdrSampleAccessInfo*) &UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportType_g_sampleAccessInfo;
}
RTIXCdrTypePlugin *UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportType_get_type_plugin_info()
{
    static RTIXCdrTypePlugin UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportType_g_typePlugin = 
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
        UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportType_initialize_ex,
        NULL,
        (RTIXCdrTypePluginFinalizeSampleFunction)
        UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportType_finalize_w_return,
        NULL,
        NULL
    };

    return &UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportType_g_typePlugin;
}
#endif

RTIBool UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportType_initialize(
    UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportType* sample)
{
    return UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportType_initialize_ex(
        sample, 
        RTI_TRUE, 
        RTI_TRUE);
}
RTIBool UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportType_initialize_w_params(
    UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportType *sample,
    const struct DDS_TypeAllocationParams_t *allocParams)
{

    if (sample == NULL) {
        return RTI_FALSE;
    }
    if (allocParams == NULL) {
        return RTI_FALSE;
    }

    sample->back = 0.0;

    sample->baselineBuoyancy = 0.0;

    sample->beamAtWaterline = 0.0;

    sample->bottom = 0.0;

    if (!UMAA_Common_Measurement_Position3D_PlatformXYZ_initialize_w_params(
        &sample->centerOfBuoyancy,
        allocParams)) {
        return RTI_FALSE;
    }
    if (!UMAA_Common_Measurement_Position3D_PlatformXYZ_initialize_w_params(
        &sample->centerOfGravity,
        allocParams)) {
        return RTI_FALSE;
    }
    sample->displacement = 0.0;

    sample->draft = 0.0;

    sample->front = 0.0;

    sample->heightOverall = 0.0;

    sample->hullDepth = 0.0;

    sample->left = 0.0;

    sample->lengthAtWaterline = 0.0;

    sample->lengthOverall = 0.0;

    sample->massOnLand = 0.0;

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

    sample->outerWidth = 0.0;

    sample->right = 0.0;

    sample->top = 0.0;

    sample->widthOverall = 0.0;

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
RTIBool UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportType_initialize_ex(
    UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportType *sample,
    RTIBool allocatePointers, 
    RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportType_initialize_w_params(
        sample,
        &allocParams);
}

RTIBool UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportType_finalize_w_return(
    UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportType* sample)
{
    UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportType_finalize_ex(sample, RTI_TRUE);

    return RTI_TRUE;
}

void UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportType_finalize(
    UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportType* sample)
{  
    UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportType_finalize_ex(
        sample, 
        RTI_TRUE);
}

void UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportType_finalize_ex(
    UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportType *sample,
    RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportType_finalize_w_params(
        sample,
        &deallocParams);
}

void UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportType_finalize_w_params(
    UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportType *sample,
    const struct DDS_TypeDeallocationParams_t *deallocParams)
{
    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

    UMAA_Common_Measurement_Position3D_PlatformXYZ_finalize_w_params(
        &sample->centerOfBuoyancy,
        deallocParams);

    UMAA_Common_Measurement_Position3D_PlatformXYZ_finalize_w_params(
        &sample->centerOfGravity,
        deallocParams);

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

void UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportType_finalize_optional_members(
    UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportType* sample, RTIBool deletePointers)
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

RTIBool UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportType_copy(
    UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportType* dst,
    const UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportType* src)
{
    try {

        if (dst == NULL || src == NULL) {
            return RTI_FALSE;
        }

        if (!RTICdrType_copyDouble (
            &dst->back, 
            &src->back)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyDouble (
            &dst->baselineBuoyancy, 
            &src->baselineBuoyancy)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyDouble (
            &dst->beamAtWaterline, 
            &src->beamAtWaterline)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyDouble (
            &dst->bottom, 
            &src->bottom)) { 
            return RTI_FALSE;
        }
        if (!UMAA_Common_Measurement_Position3D_PlatformXYZ_copy(
            &dst->centerOfBuoyancy,
            (const UMAA_Common_Measurement_Position3D_PlatformXYZ*)&src->centerOfBuoyancy)) {
            return RTI_FALSE;
        } 
        if (!UMAA_Common_Measurement_Position3D_PlatformXYZ_copy(
            &dst->centerOfGravity,
            (const UMAA_Common_Measurement_Position3D_PlatformXYZ*)&src->centerOfGravity)) {
            return RTI_FALSE;
        } 
        if (!RTICdrType_copyDouble (
            &dst->displacement, 
            &src->displacement)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyDouble (
            &dst->draft, 
            &src->draft)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyDouble (
            &dst->front, 
            &src->front)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyDouble (
            &dst->heightOverall, 
            &src->heightOverall)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyDouble (
            &dst->hullDepth, 
            &src->hullDepth)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyDouble (
            &dst->left, 
            &src->left)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyDouble (
            &dst->lengthAtWaterline, 
            &src->lengthAtWaterline)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyDouble (
            &dst->lengthOverall, 
            &src->lengthOverall)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyDouble (
            &dst->massOnLand, 
            &src->massOnLand)) { 
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
        if (!RTICdrType_copyDouble (
            &dst->outerWidth, 
            &src->outerWidth)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyDouble (
            &dst->right, 
            &src->right)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyDouble (
            &dst->top, 
            &src->top)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyDouble (
            &dst->widthOverall, 
            &src->widthOverall)) { 
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
* Configure and implement 'UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportType' sequence class.
*/
#define T UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportType
#define TSeq UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportTypeSeq

#define T_initialize_w_params UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportType_initialize_w_params

#define T_finalize_w_params   UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportType_finalize_w_params
#define T_copy       UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportType_copy

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
        const RTIXCdrTypeCode * type_code< UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportType>::get() 
        {
            return (const RTIXCdrTypeCode *) UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportType_get_typecode();
        }

    } 
}
#endif
