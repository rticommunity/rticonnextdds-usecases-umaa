

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from LocalRegularPolygonCommandType.idl 
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

#include "LocalRegularPolygonCommandType.h"

#ifndef NDDS_STANDALONE_TYPE
#include "LocalRegularPolygonCommandTypePlugin.h"
#endif

#include <new>

/* ========================================================================= */
const char *UMAA_MO_LocalRegularPolygonControl_LocalRegularPolygonCommandTypeTYPENAME = "UMAA::MO::LocalRegularPolygonControl::LocalRegularPolygonCommandType";

#ifndef NDDS_STANDALONE_TYPE
DDS_TypeCode * UMAA_MO_LocalRegularPolygonControl_LocalRegularPolygonCommandType_get_typecode(void)
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode_Member UMAA_MO_LocalRegularPolygonControl_LocalRegularPolygonCommandType_g_tc_members[18]=
    {

        {
            (char *)"crossTrackTolerance",/* Member name */
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
            (char *)"diameter",/* Member name */
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
            (char *)"elevation",/* Member name */
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
            (char *)"elevationTolerance",/* Member name */
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
            (char *)"endTime",/* Member name */
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
            (char *)"numberSides",/* Member name */
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
            (char *)"orientation",/* Member name */
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
            (char *)"position",/* Member name */
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
            (char *)"speedTolerance",/* Member name */
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
            (char *)"transitElevation",/* Member name */
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
            (char *)"transitElevationTolerance",/* Member name */
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
            (char *)"transitSpeed",/* Member name */
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
            (char *)"transitSpeedTolerance",/* Member name */
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
            (char *)"turnDirection",/* Member name */
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
            (char *)"source",/* Member name */
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
            RTI_CDR_KEY_MEMBER , /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }, 
        {
            (char *)"destination",/* Member name */
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
            RTI_CDR_KEY_MEMBER , /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }, 
        {
            (char *)"sessionID",/* Member name */
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
            RTI_CDR_KEY_MEMBER , /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }, 
        {
            (char *)"timeStamp",/* Member name */
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
        }
    };

    static DDS_TypeCode UMAA_MO_LocalRegularPolygonControl_LocalRegularPolygonCommandType_g_tc =
    {{
            DDS_TK_STRUCT, /* Kind */
            DDS_BOOLEAN_FALSE, /* Ignored */
            -1, /*Ignored*/
            (char *)"UMAA::MO::LocalRegularPolygonControl::LocalRegularPolygonCommandType", /* Name */
            NULL, /* Ignored */      
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            18, /* Number of members */
            UMAA_MO_LocalRegularPolygonControl_LocalRegularPolygonCommandType_g_tc_members, /* Members */
            DDS_VM_NONE, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER,
            DDS_BOOLEAN_TRUE, /* _isCopyable */
            NULL, /* _sampleAccessInfo: assigned later */
            NULL /* _typePlugin: assigned later */
        }}; /* Type code for UMAA_MO_LocalRegularPolygonControl_LocalRegularPolygonCommandType*/

    if (is_initialized) {
        return &UMAA_MO_LocalRegularPolygonControl_LocalRegularPolygonCommandType_g_tc;
    }

    is_initialized = RTI_TRUE;

    UMAA_MO_LocalRegularPolygonControl_LocalRegularPolygonCommandType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

    UMAA_MO_LocalRegularPolygonControl_LocalRegularPolygonCommandType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_Distance_get_typecode();
    UMAA_MO_LocalRegularPolygonControl_LocalRegularPolygonCommandType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_Distance_get_typecode();
    UMAA_MO_LocalRegularPolygonControl_LocalRegularPolygonCommandType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_ElevationType_get_typecode();
    UMAA_MO_LocalRegularPolygonControl_LocalRegularPolygonCommandType_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_Distance_get_typecode();
    UMAA_MO_LocalRegularPolygonControl_LocalRegularPolygonCommandType_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_DateTime_get_typecode();
    UMAA_MO_LocalRegularPolygonControl_LocalRegularPolygonCommandType_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_SidesCount_get_typecode();
    UMAA_MO_LocalRegularPolygonControl_LocalRegularPolygonCommandType_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Orientation_HeadingType_get_typecode();
    UMAA_MO_LocalRegularPolygonControl_LocalRegularPolygonCommandType_g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_Position2D_PlatformXYZ_get_typecode();
    UMAA_MO_LocalRegularPolygonControl_LocalRegularPolygonCommandType_g_tc_members[8]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_GroundSpeed_get_typecode();
    UMAA_MO_LocalRegularPolygonControl_LocalRegularPolygonCommandType_g_tc_members[9]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_ElevationType_get_typecode();
    UMAA_MO_LocalRegularPolygonControl_LocalRegularPolygonCommandType_g_tc_members[10]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_Distance_get_typecode();
    UMAA_MO_LocalRegularPolygonControl_LocalRegularPolygonCommandType_g_tc_members[11]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_VariableSpeedControl_VariableSpeedControlType_get_typecode();
    UMAA_MO_LocalRegularPolygonControl_LocalRegularPolygonCommandType_g_tc_members[12]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_GroundSpeed_get_typecode();
    UMAA_MO_LocalRegularPolygonControl_LocalRegularPolygonCommandType_g_tc_members[13]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_MaritimeEnumeration_WaterTurnDirectionEnumType_WaterTurnDirectionEnumType_get_typecode();
    UMAA_MO_LocalRegularPolygonControl_LocalRegularPolygonCommandType_g_tc_members[14]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_NumericGUID_get_typecode();
    UMAA_MO_LocalRegularPolygonControl_LocalRegularPolygonCommandType_g_tc_members[15]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_NumericGUID_get_typecode();
    UMAA_MO_LocalRegularPolygonControl_LocalRegularPolygonCommandType_g_tc_members[16]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_NumericGUID_get_typecode();
    UMAA_MO_LocalRegularPolygonControl_LocalRegularPolygonCommandType_g_tc_members[17]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_DateTime_get_typecode();

    /* Initialize the values for member annotations. */
    UMAA_MO_LocalRegularPolygonControl_LocalRegularPolygonCommandType_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_MO_LocalRegularPolygonControl_LocalRegularPolygonCommandType_g_tc_members[0]._annotations._defaultValue._u.double_value = 0.0;
    UMAA_MO_LocalRegularPolygonControl_LocalRegularPolygonCommandType_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_MO_LocalRegularPolygonControl_LocalRegularPolygonCommandType_g_tc_members[0]._annotations._minValue._u.double_value = 0ULL;
    UMAA_MO_LocalRegularPolygonControl_LocalRegularPolygonCommandType_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_MO_LocalRegularPolygonControl_LocalRegularPolygonCommandType_g_tc_members[0]._annotations._maxValue._u.double_value = 401056000ULL;
    UMAA_MO_LocalRegularPolygonControl_LocalRegularPolygonCommandType_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_MO_LocalRegularPolygonControl_LocalRegularPolygonCommandType_g_tc_members[1]._annotations._defaultValue._u.double_value = 0.0;
    UMAA_MO_LocalRegularPolygonControl_LocalRegularPolygonCommandType_g_tc_members[1]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_MO_LocalRegularPolygonControl_LocalRegularPolygonCommandType_g_tc_members[1]._annotations._minValue._u.double_value = 0ULL;
    UMAA_MO_LocalRegularPolygonControl_LocalRegularPolygonCommandType_g_tc_members[1]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_MO_LocalRegularPolygonControl_LocalRegularPolygonCommandType_g_tc_members[1]._annotations._maxValue._u.double_value = 401056000ULL;
    UMAA_MO_LocalRegularPolygonControl_LocalRegularPolygonCommandType_g_tc_members[3]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_MO_LocalRegularPolygonControl_LocalRegularPolygonCommandType_g_tc_members[3]._annotations._defaultValue._u.double_value = 0.0;
    UMAA_MO_LocalRegularPolygonControl_LocalRegularPolygonCommandType_g_tc_members[3]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_MO_LocalRegularPolygonControl_LocalRegularPolygonCommandType_g_tc_members[3]._annotations._minValue._u.double_value = 0ULL;
    UMAA_MO_LocalRegularPolygonControl_LocalRegularPolygonCommandType_g_tc_members[3]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_MO_LocalRegularPolygonControl_LocalRegularPolygonCommandType_g_tc_members[3]._annotations._maxValue._u.double_value = 401056000ULL;
    UMAA_MO_LocalRegularPolygonControl_LocalRegularPolygonCommandType_g_tc_members[5]._annotations._defaultValue._d = RTI_XCDR_TK_LONG;
    UMAA_MO_LocalRegularPolygonControl_LocalRegularPolygonCommandType_g_tc_members[5]._annotations._defaultValue._u.long_value = 0;
    UMAA_MO_LocalRegularPolygonControl_LocalRegularPolygonCommandType_g_tc_members[5]._annotations._minValue._d = RTI_XCDR_TK_LONG;
    UMAA_MO_LocalRegularPolygonControl_LocalRegularPolygonCommandType_g_tc_members[5]._annotations._minValue._u.long_value = 0L;
    UMAA_MO_LocalRegularPolygonControl_LocalRegularPolygonCommandType_g_tc_members[5]._annotations._maxValue._d = RTI_XCDR_TK_LONG;
    UMAA_MO_LocalRegularPolygonControl_LocalRegularPolygonCommandType_g_tc_members[5]._annotations._maxValue._u.long_value = 255L;
    UMAA_MO_LocalRegularPolygonControl_LocalRegularPolygonCommandType_g_tc_members[8]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_MO_LocalRegularPolygonControl_LocalRegularPolygonCommandType_g_tc_members[8]._annotations._defaultValue._u.double_value = 0.0;
    UMAA_MO_LocalRegularPolygonControl_LocalRegularPolygonCommandType_g_tc_members[8]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_MO_LocalRegularPolygonControl_LocalRegularPolygonCommandType_g_tc_members[8]._annotations._minValue._u.double_value = 0ULL;
    UMAA_MO_LocalRegularPolygonControl_LocalRegularPolygonCommandType_g_tc_members[8]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_MO_LocalRegularPolygonControl_LocalRegularPolygonCommandType_g_tc_members[8]._annotations._maxValue._u.double_value = 200ULL;
    UMAA_MO_LocalRegularPolygonControl_LocalRegularPolygonCommandType_g_tc_members[10]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_MO_LocalRegularPolygonControl_LocalRegularPolygonCommandType_g_tc_members[10]._annotations._defaultValue._u.double_value = 0.0;
    UMAA_MO_LocalRegularPolygonControl_LocalRegularPolygonCommandType_g_tc_members[10]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_MO_LocalRegularPolygonControl_LocalRegularPolygonCommandType_g_tc_members[10]._annotations._minValue._u.double_value = 0ULL;
    UMAA_MO_LocalRegularPolygonControl_LocalRegularPolygonCommandType_g_tc_members[10]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_MO_LocalRegularPolygonControl_LocalRegularPolygonCommandType_g_tc_members[10]._annotations._maxValue._u.double_value = 401056000ULL;
    UMAA_MO_LocalRegularPolygonControl_LocalRegularPolygonCommandType_g_tc_members[12]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_MO_LocalRegularPolygonControl_LocalRegularPolygonCommandType_g_tc_members[12]._annotations._defaultValue._u.double_value = 0.0;
    UMAA_MO_LocalRegularPolygonControl_LocalRegularPolygonCommandType_g_tc_members[12]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_MO_LocalRegularPolygonControl_LocalRegularPolygonCommandType_g_tc_members[12]._annotations._minValue._u.double_value = 0ULL;
    UMAA_MO_LocalRegularPolygonControl_LocalRegularPolygonCommandType_g_tc_members[12]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_MO_LocalRegularPolygonControl_LocalRegularPolygonCommandType_g_tc_members[12]._annotations._maxValue._u.double_value = 200ULL;
    UMAA_MO_LocalRegularPolygonControl_LocalRegularPolygonCommandType_g_tc_members[13]._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
    UMAA_MO_LocalRegularPolygonControl_LocalRegularPolygonCommandType_g_tc_members[13]._annotations._defaultValue._u.enumerated_value = 0;

    UMAA_MO_LocalRegularPolygonControl_LocalRegularPolygonCommandType_g_tc._data._sampleAccessInfo =
    UMAA_MO_LocalRegularPolygonControl_LocalRegularPolygonCommandType_get_sample_access_info();
    UMAA_MO_LocalRegularPolygonControl_LocalRegularPolygonCommandType_g_tc._data._typePlugin =
    UMAA_MO_LocalRegularPolygonControl_LocalRegularPolygonCommandType_get_type_plugin_info();    

    return &UMAA_MO_LocalRegularPolygonControl_LocalRegularPolygonCommandType_g_tc;
}

#define TSeq UMAA_MO_LocalRegularPolygonControl_LocalRegularPolygonCommandTypeSeq
#define T UMAA_MO_LocalRegularPolygonControl_LocalRegularPolygonCommandType
#include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
#undef T
#undef TSeq

RTIXCdrSampleAccessInfo *UMAA_MO_LocalRegularPolygonControl_LocalRegularPolygonCommandType_get_sample_seq_access_info()
{
    static RTIXCdrSampleAccessInfo UMAA_MO_LocalRegularPolygonControl_LocalRegularPolygonCommandType_g_seqSampleAccessInfo = {
        RTI_XCDR_TYPE_BINDING_CPP, \
        {sizeof(UMAA_MO_LocalRegularPolygonControl_LocalRegularPolygonCommandTypeSeq),0,0,0}, \
        RTI_XCDR_FALSE, \
        DDS_Sequence_get_member_value_pointer, \
        UMAA_MO_LocalRegularPolygonControl_LocalRegularPolygonCommandTypeSeq_set_member_element_count, \
        NULL, \
        NULL, \
        NULL \
    };

    return &UMAA_MO_LocalRegularPolygonControl_LocalRegularPolygonCommandType_g_seqSampleAccessInfo;
}

RTIXCdrSampleAccessInfo *UMAA_MO_LocalRegularPolygonControl_LocalRegularPolygonCommandType_get_sample_access_info()
{
    static RTIBool is_initialized = RTI_FALSE;

    UMAA_MO_LocalRegularPolygonControl_LocalRegularPolygonCommandType *sample;

    static RTIXCdrMemberAccessInfo UMAA_MO_LocalRegularPolygonControl_LocalRegularPolygonCommandType_g_memberAccessInfos[18] =
    {RTIXCdrMemberAccessInfo_INITIALIZER};

    static RTIXCdrSampleAccessInfo UMAA_MO_LocalRegularPolygonControl_LocalRegularPolygonCommandType_g_sampleAccessInfo = 
    RTIXCdrSampleAccessInfo_INITIALIZER;

    if (is_initialized) {
        return (RTIXCdrSampleAccessInfo*) &UMAA_MO_LocalRegularPolygonControl_LocalRegularPolygonCommandType_g_sampleAccessInfo;
    }

    RTIXCdrHeap_allocateStruct(
        &sample, 
        UMAA_MO_LocalRegularPolygonControl_LocalRegularPolygonCommandType);
    if (sample == NULL) {
        return NULL;
    }

    UMAA_MO_LocalRegularPolygonControl_LocalRegularPolygonCommandType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->crossTrackTolerance - (char *)sample);

    UMAA_MO_LocalRegularPolygonControl_LocalRegularPolygonCommandType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->diameter - (char *)sample);

    UMAA_MO_LocalRegularPolygonControl_LocalRegularPolygonCommandType_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->elevation - (char *)sample);

    UMAA_MO_LocalRegularPolygonControl_LocalRegularPolygonCommandType_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->elevationTolerance - (char *)sample);

    UMAA_MO_LocalRegularPolygonControl_LocalRegularPolygonCommandType_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->endTime - (char *)sample);

    UMAA_MO_LocalRegularPolygonControl_LocalRegularPolygonCommandType_g_memberAccessInfos[5].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->numberSides - (char *)sample);

    UMAA_MO_LocalRegularPolygonControl_LocalRegularPolygonCommandType_g_memberAccessInfos[6].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->orientation - (char *)sample);

    UMAA_MO_LocalRegularPolygonControl_LocalRegularPolygonCommandType_g_memberAccessInfos[7].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->position - (char *)sample);

    UMAA_MO_LocalRegularPolygonControl_LocalRegularPolygonCommandType_g_memberAccessInfos[8].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->speedTolerance - (char *)sample);

    UMAA_MO_LocalRegularPolygonControl_LocalRegularPolygonCommandType_g_memberAccessInfos[9].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->transitElevation - (char *)sample);

    UMAA_MO_LocalRegularPolygonControl_LocalRegularPolygonCommandType_g_memberAccessInfos[10].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->transitElevationTolerance - (char *)sample);

    UMAA_MO_LocalRegularPolygonControl_LocalRegularPolygonCommandType_g_memberAccessInfos[11].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->transitSpeed - (char *)sample);

    UMAA_MO_LocalRegularPolygonControl_LocalRegularPolygonCommandType_g_memberAccessInfos[12].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->transitSpeedTolerance - (char *)sample);

    UMAA_MO_LocalRegularPolygonControl_LocalRegularPolygonCommandType_g_memberAccessInfos[13].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->turnDirection - (char *)sample);

    UMAA_MO_LocalRegularPolygonControl_LocalRegularPolygonCommandType_g_memberAccessInfos[14].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->source - (char *)sample);

    UMAA_MO_LocalRegularPolygonControl_LocalRegularPolygonCommandType_g_memberAccessInfos[15].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->destination - (char *)sample);

    UMAA_MO_LocalRegularPolygonControl_LocalRegularPolygonCommandType_g_memberAccessInfos[16].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->sessionID - (char *)sample);

    UMAA_MO_LocalRegularPolygonControl_LocalRegularPolygonCommandType_g_memberAccessInfos[17].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->timeStamp - (char *)sample);

    UMAA_MO_LocalRegularPolygonControl_LocalRegularPolygonCommandType_g_sampleAccessInfo.memberAccessInfos = 
    UMAA_MO_LocalRegularPolygonControl_LocalRegularPolygonCommandType_g_memberAccessInfos;

    {
        size_t candidateTypeSize = sizeof(UMAA_MO_LocalRegularPolygonControl_LocalRegularPolygonCommandType);

        if (candidateTypeSize > RTIXCdrLong_MAX) {
            UMAA_MO_LocalRegularPolygonControl_LocalRegularPolygonCommandType_g_sampleAccessInfo.typeSize[0] =
            RTIXCdrLong_MAX;
        } else {
            UMAA_MO_LocalRegularPolygonControl_LocalRegularPolygonCommandType_g_sampleAccessInfo.typeSize[0] =
            (RTIXCdrUnsignedLong) candidateTypeSize;
        }
    }

    UMAA_MO_LocalRegularPolygonControl_LocalRegularPolygonCommandType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
    RTI_XCDR_TRUE;

    UMAA_MO_LocalRegularPolygonControl_LocalRegularPolygonCommandType_g_sampleAccessInfo.getMemberValuePointerFcn = 
    UMAA_MO_LocalRegularPolygonControl_LocalRegularPolygonCommandType_get_member_value_pointer;

    UMAA_MO_LocalRegularPolygonControl_LocalRegularPolygonCommandType_g_sampleAccessInfo.languageBinding = 
    RTI_XCDR_TYPE_BINDING_CPP ;

    RTIXCdrHeap_freeStruct(sample);
    is_initialized = RTI_TRUE;
    return (RTIXCdrSampleAccessInfo*) &UMAA_MO_LocalRegularPolygonControl_LocalRegularPolygonCommandType_g_sampleAccessInfo;
}
RTIXCdrTypePlugin *UMAA_MO_LocalRegularPolygonControl_LocalRegularPolygonCommandType_get_type_plugin_info()
{
    static RTIXCdrTypePlugin UMAA_MO_LocalRegularPolygonControl_LocalRegularPolygonCommandType_g_typePlugin = 
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
        UMAA_MO_LocalRegularPolygonControl_LocalRegularPolygonCommandType_initialize_ex,
        NULL,
        (RTIXCdrTypePluginFinalizeSampleFunction)
        UMAA_MO_LocalRegularPolygonControl_LocalRegularPolygonCommandType_finalize_w_return,
        NULL,
        NULL
    };

    return &UMAA_MO_LocalRegularPolygonControl_LocalRegularPolygonCommandType_g_typePlugin;
}
#endif

RTIBool UMAA_MO_LocalRegularPolygonControl_LocalRegularPolygonCommandType_initialize(
    UMAA_MO_LocalRegularPolygonControl_LocalRegularPolygonCommandType* sample)
{
    return UMAA_MO_LocalRegularPolygonControl_LocalRegularPolygonCommandType_initialize_ex(
        sample, 
        RTI_TRUE, 
        RTI_TRUE);
}
RTIBool UMAA_MO_LocalRegularPolygonControl_LocalRegularPolygonCommandType_initialize_w_params(
    UMAA_MO_LocalRegularPolygonControl_LocalRegularPolygonCommandType *sample,
    const struct DDS_TypeAllocationParams_t *allocParams)
{

    if (sample == NULL) {
        return RTI_FALSE;
    }
    if (allocParams == NULL) {
        return RTI_FALSE;
    }

    sample->crossTrackTolerance = 0.0;

    sample->diameter = 0.0;

    if (!UMAA_Common_Measurement_ElevationType_initialize_w_params(
        &sample->elevation,
        allocParams)) {
        return RTI_FALSE;
    }
    sample->elevationTolerance = 0.0;

    if (!allocParams->allocate_optional_members) {
        sample->endTime=NULL;
    } else {   
        if (allocParams->allocate_memory) {
            sample->endTime = new (std::nothrow)   UMAA_Common_Measurement_DateTime ();
            if (sample->endTime==NULL) {
                return RTI_FALSE;
            }
            if (!UMAA_Common_Measurement_DateTime_initialize_w_params(
                sample->endTime,
                allocParams)) {
                return RTI_FALSE;
            }
        } else {
            if (sample->endTime!=NULL) {
                if (!UMAA_Common_Measurement_DateTime_initialize_w_params(
                    sample->endTime,
                    allocParams)) {
                    return RTI_FALSE;
                }
            }   
        }
    }
    sample->numberSides = 0;

    if (!UMAA_Common_Orientation_HeadingType_initialize_w_params(
        &sample->orientation,
        allocParams)) {
        return RTI_FALSE;
    }
    if (!allocParams->allocate_optional_members) {
        sample->position=NULL;
    } else {   
        if (allocParams->allocate_memory) {
            sample->position = new (std::nothrow)   UMAA_Common_Measurement_Position2D_PlatformXYZ ();
            if (sample->position==NULL) {
                return RTI_FALSE;
            }
            if (!UMAA_Common_Measurement_Position2D_PlatformXYZ_initialize_w_params(
                sample->position,
                allocParams)) {
                return RTI_FALSE;
            }
        } else {
            if (sample->position!=NULL) {
                if (!UMAA_Common_Measurement_Position2D_PlatformXYZ_initialize_w_params(
                    sample->position,
                    allocParams)) {
                    return RTI_FALSE;
                }
            }   
        }
    }
    sample->speedTolerance = 0.0;

    if (!UMAA_Common_Measurement_ElevationType_initialize_w_params(
        &sample->transitElevation,
        allocParams)) {
        return RTI_FALSE;
    }
    sample->transitElevationTolerance = 0.0;

    if (!UMAA_Common_VariableSpeedControl_VariableSpeedControlType_initialize_w_params(
        &sample->transitSpeed,
        allocParams)) {
        return RTI_FALSE;
    }
    sample->transitSpeedTolerance = 0.0;

    sample->turnDirection = UMAA_Common_MaritimeEnumeration_WaterTurnDirectionEnumType_WaterTurnDirectionEnumType_NO_VALID_TURN_DIRECTION;
    if (!UMAA_Common_Measurement_NumericGUID_initialize_w_params(
        &sample->source,
        allocParams)) {
        return RTI_FALSE;
    }
    if (!UMAA_Common_Measurement_NumericGUID_initialize_w_params(
        &sample->destination,
        allocParams)) {
        return RTI_FALSE;
    }
    if (!UMAA_Common_Measurement_NumericGUID_initialize_w_params(
        &sample->sessionID,
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
RTIBool UMAA_MO_LocalRegularPolygonControl_LocalRegularPolygonCommandType_initialize_ex(
    UMAA_MO_LocalRegularPolygonControl_LocalRegularPolygonCommandType *sample,
    RTIBool allocatePointers, 
    RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return UMAA_MO_LocalRegularPolygonControl_LocalRegularPolygonCommandType_initialize_w_params(
        sample,
        &allocParams);
}

RTIBool UMAA_MO_LocalRegularPolygonControl_LocalRegularPolygonCommandType_finalize_w_return(
    UMAA_MO_LocalRegularPolygonControl_LocalRegularPolygonCommandType* sample)
{
    UMAA_MO_LocalRegularPolygonControl_LocalRegularPolygonCommandType_finalize_ex(sample, RTI_TRUE);

    return RTI_TRUE;
}

void UMAA_MO_LocalRegularPolygonControl_LocalRegularPolygonCommandType_finalize(
    UMAA_MO_LocalRegularPolygonControl_LocalRegularPolygonCommandType* sample)
{  
    UMAA_MO_LocalRegularPolygonControl_LocalRegularPolygonCommandType_finalize_ex(
        sample, 
        RTI_TRUE);
}

void UMAA_MO_LocalRegularPolygonControl_LocalRegularPolygonCommandType_finalize_ex(
    UMAA_MO_LocalRegularPolygonControl_LocalRegularPolygonCommandType *sample,
    RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    UMAA_MO_LocalRegularPolygonControl_LocalRegularPolygonCommandType_finalize_w_params(
        sample,
        &deallocParams);
}

void UMAA_MO_LocalRegularPolygonControl_LocalRegularPolygonCommandType_finalize_w_params(
    UMAA_MO_LocalRegularPolygonControl_LocalRegularPolygonCommandType *sample,
    const struct DDS_TypeDeallocationParams_t *deallocParams)
{
    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

    UMAA_Common_Measurement_ElevationType_finalize_w_params(
        &sample->elevation,
        deallocParams);

    if (deallocParams->delete_optional_members) {
        if (sample->endTime != NULL) {
            UMAA_Common_Measurement_DateTime_finalize_w_params(
                sample->endTime,
                deallocParams);

            delete  sample->endTime;
            sample->endTime=NULL;
        }
    }

    UMAA_Common_Orientation_HeadingType_finalize_w_params(
        &sample->orientation,
        deallocParams);

    if (deallocParams->delete_optional_members) {
        if (sample->position != NULL) {
            UMAA_Common_Measurement_Position2D_PlatformXYZ_finalize_w_params(
                sample->position,
                deallocParams);

            delete  sample->position;
            sample->position=NULL;
        }
    }

    UMAA_Common_Measurement_ElevationType_finalize_w_params(
        &sample->transitElevation,
        deallocParams);

    UMAA_Common_VariableSpeedControl_VariableSpeedControlType_finalize_w_params(
        &sample->transitSpeed,
        deallocParams);

    UMAA_Common_MaritimeEnumeration_WaterTurnDirectionEnumType_WaterTurnDirectionEnumType_finalize_w_params(
        &sample->turnDirection,
        deallocParams);

    UMAA_Common_Measurement_NumericGUID_finalize_w_params(
        &sample->source,
        deallocParams);

    UMAA_Common_Measurement_NumericGUID_finalize_w_params(
        &sample->destination,
        deallocParams);

    UMAA_Common_Measurement_NumericGUID_finalize_w_params(
        &sample->sessionID,
        deallocParams);

    UMAA_Common_Measurement_DateTime_finalize_w_params(
        &sample->timeStamp,
        deallocParams);

}

void UMAA_MO_LocalRegularPolygonControl_LocalRegularPolygonCommandType_finalize_optional_members(
    UMAA_MO_LocalRegularPolygonControl_LocalRegularPolygonCommandType* sample, RTIBool deletePointers)
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

    UMAA_Common_Measurement_ElevationType_finalize_optional_members(&sample->elevation, deallocParams->delete_pointers);
    if (sample->endTime != NULL) {
        UMAA_Common_Measurement_DateTime_finalize_w_params(
            sample->endTime,
            deallocParams);

        delete  sample->endTime;
        sample->endTime=NULL;
    }
    UMAA_Common_Orientation_HeadingType_finalize_optional_members(&sample->orientation, deallocParams->delete_pointers);
    if (sample->position != NULL) {
        UMAA_Common_Measurement_Position2D_PlatformXYZ_finalize_w_params(
            sample->position,
            deallocParams);

        delete  sample->position;
        sample->position=NULL;
    }
    UMAA_Common_Measurement_ElevationType_finalize_optional_members(&sample->transitElevation, deallocParams->delete_pointers);
    UMAA_Common_VariableSpeedControl_VariableSpeedControlType_finalize_optional_members(&sample->transitSpeed, deallocParams->delete_pointers);
}

RTIBool UMAA_MO_LocalRegularPolygonControl_LocalRegularPolygonCommandType_copy(
    UMAA_MO_LocalRegularPolygonControl_LocalRegularPolygonCommandType* dst,
    const UMAA_MO_LocalRegularPolygonControl_LocalRegularPolygonCommandType* src)
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

        if (!RTICdrType_copyDouble (
            &dst->crossTrackTolerance, 
            &src->crossTrackTolerance)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyDouble (
            &dst->diameter, 
            &src->diameter)) { 
            return RTI_FALSE;
        }
        if (!UMAA_Common_Measurement_ElevationType_copy(
            &dst->elevation,
            (const UMAA_Common_Measurement_ElevationType*)&src->elevation)) {
            return RTI_FALSE;
        } 
        if (!RTICdrType_copyDouble (
            &dst->elevationTolerance, 
            &src->elevationTolerance)) { 
            return RTI_FALSE;
        }
        if (src->endTime!=NULL) {
            if (dst->endTime==NULL) {

                dst->endTime = new (std::nothrow)   UMAA_Common_Measurement_DateTime ();
                if (dst->endTime==NULL) {
                    return RTI_FALSE;
                }

                if (!UMAA_Common_Measurement_DateTime_initialize_ex(
                    dst->endTime, 
                    RTI_TRUE, 
                    RTI_TRUE)) {
                    return RTI_FALSE;
                }
            }
            if (!UMAA_Common_Measurement_DateTime_copy(
                dst->endTime,
                (const UMAA_Common_Measurement_DateTime*)src->endTime)) {
                return RTI_FALSE;
            } 
        } else {
            if (dst->endTime != NULL) {
                UMAA_Common_Measurement_DateTime_finalize_w_params(dst->endTime, deallocParams);
                delete  dst->endTime;
                dst->endTime=NULL;
            }
        }
        if (!RTICdrType_copyLong (
            &dst->numberSides, 
            &src->numberSides)) { 
            return RTI_FALSE;
        }
        if (!UMAA_Common_Orientation_HeadingType_copy(
            &dst->orientation,
            (const UMAA_Common_Orientation_HeadingType*)&src->orientation)) {
            return RTI_FALSE;
        } 
        if (src->position!=NULL) {
            if (dst->position==NULL) {

                dst->position = new (std::nothrow)   UMAA_Common_Measurement_Position2D_PlatformXYZ ();
                if (dst->position==NULL) {
                    return RTI_FALSE;
                }

                if (!UMAA_Common_Measurement_Position2D_PlatformXYZ_initialize_ex(
                    dst->position, 
                    RTI_TRUE, 
                    RTI_TRUE)) {
                    return RTI_FALSE;
                }
            }
            if (!UMAA_Common_Measurement_Position2D_PlatformXYZ_copy(
                dst->position,
                (const UMAA_Common_Measurement_Position2D_PlatformXYZ*)src->position)) {
                return RTI_FALSE;
            } 
        } else {
            if (dst->position != NULL) {
                UMAA_Common_Measurement_Position2D_PlatformXYZ_finalize_w_params(dst->position, deallocParams);
                delete  dst->position;
                dst->position=NULL;
            }
        }
        if (!RTICdrType_copyDouble (
            &dst->speedTolerance, 
            &src->speedTolerance)) { 
            return RTI_FALSE;
        }
        if (!UMAA_Common_Measurement_ElevationType_copy(
            &dst->transitElevation,
            (const UMAA_Common_Measurement_ElevationType*)&src->transitElevation)) {
            return RTI_FALSE;
        } 
        if (!RTICdrType_copyDouble (
            &dst->transitElevationTolerance, 
            &src->transitElevationTolerance)) { 
            return RTI_FALSE;
        }
        if (!UMAA_Common_VariableSpeedControl_VariableSpeedControlType_copy(
            &dst->transitSpeed,
            (const UMAA_Common_VariableSpeedControl_VariableSpeedControlType*)&src->transitSpeed)) {
            return RTI_FALSE;
        } 
        if (!RTICdrType_copyDouble (
            &dst->transitSpeedTolerance, 
            &src->transitSpeedTolerance)) { 
            return RTI_FALSE;
        }
        if (!UMAA_Common_MaritimeEnumeration_WaterTurnDirectionEnumType_WaterTurnDirectionEnumType_copy(
            &dst->turnDirection,
            (const UMAA_Common_MaritimeEnumeration_WaterTurnDirectionEnumType_WaterTurnDirectionEnumType*)&src->turnDirection)) {
            return RTI_FALSE;
        } 
        if (!UMAA_Common_Measurement_NumericGUID_copy(
            &dst->source,
            (const UMAA_Common_Measurement_NumericGUID*)&src->source)) {
            return RTI_FALSE;
        } 
        if (!UMAA_Common_Measurement_NumericGUID_copy(
            &dst->destination,
            (const UMAA_Common_Measurement_NumericGUID*)&src->destination)) {
            return RTI_FALSE;
        } 
        if (!UMAA_Common_Measurement_NumericGUID_copy(
            &dst->sessionID,
            (const UMAA_Common_Measurement_NumericGUID*)&src->sessionID)) {
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
* Configure and implement 'UMAA_MO_LocalRegularPolygonControl_LocalRegularPolygonCommandType' sequence class.
*/
#define T UMAA_MO_LocalRegularPolygonControl_LocalRegularPolygonCommandType
#define TSeq UMAA_MO_LocalRegularPolygonControl_LocalRegularPolygonCommandTypeSeq

#define T_initialize_w_params UMAA_MO_LocalRegularPolygonControl_LocalRegularPolygonCommandType_initialize_w_params

#define T_finalize_w_params   UMAA_MO_LocalRegularPolygonControl_LocalRegularPolygonCommandType_finalize_w_params
#define T_copy       UMAA_MO_LocalRegularPolygonControl_LocalRegularPolygonCommandType_copy

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
        const RTIXCdrTypeCode * type_code< UMAA_MO_LocalRegularPolygonControl_LocalRegularPolygonCommandType>::get() 
        {
            return (const RTIXCdrTypeCode *) UMAA_MO_LocalRegularPolygonControl_LocalRegularPolygonCommandType_get_typecode();
        }

    } 
}
#endif
