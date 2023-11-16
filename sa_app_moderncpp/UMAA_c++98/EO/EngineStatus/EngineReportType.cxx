

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from EngineReportType.idl 
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

#include "EngineReportType.h"

#ifndef NDDS_STANDALONE_TYPE
#include "EngineReportTypePlugin.h"
#endif

#include <new>

/* ========================================================================= */
const char *UMAA_EO_EngineStatus_EngineReportTypeTYPENAME = "UMAA::EO::EngineStatus::EngineReportType";

#ifndef NDDS_STANDALONE_TYPE
DDS_TypeCode * UMAA_EO_EngineStatus_EngineReportType_get_typecode(void)
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode_Member UMAA_EO_EngineStatus_EngineReportType_g_tc_members[21]=
    {

        {
            (char *)"coolantLevel",/* Member name */
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
            (char *)"coolantPressure",/* Member name */
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
            (char *)"coolantTemp",/* Member name */
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
            (char *)"engineTemp",/* Member name */
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
            (char *)"exhaustTemp",/* Member name */
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
            (char *)"glowPlugIndicator",/* Member name */
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
            (char *)"glowPlugState",/* Member name */
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
            (char *)"glowPlugTemp",/* Member name */
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
            (char *)"glowPlugTimeRemaining",/* Member name */
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
            (char *)"hours",/* Member name */
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
            (char *)"manifoldAirTemp",/* Member name */
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
            (char *)"manifoldPressure",/* Member name */
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
            (char *)"oilLevel",/* Member name */
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
            (char *)"oilPressure",/* Member name */
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
            (char *)"oilTemp",/* Member name */
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
            (char *)"percentOilPressure",/* Member name */
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
            (char *)"RPM",/* Member name */
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
            (char *)"state",/* Member name */
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
            (char *)"throttle",/* Member name */
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
            (char *)"source",/* Member name */
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
            RTI_CDR_KEY_MEMBER , /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }, 
        {
            (char *)"timeStamp",/* Member name */
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
        }
    };

    static DDS_TypeCode UMAA_EO_EngineStatus_EngineReportType_g_tc =
    {{
            DDS_TK_STRUCT, /* Kind */
            DDS_BOOLEAN_FALSE, /* Ignored */
            -1, /*Ignored*/
            (char *)"UMAA::EO::EngineStatus::EngineReportType", /* Name */
            NULL, /* Ignored */      
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            21, /* Number of members */
            UMAA_EO_EngineStatus_EngineReportType_g_tc_members, /* Members */
            DDS_VM_NONE, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER,
            DDS_BOOLEAN_TRUE, /* _isCopyable */
            NULL, /* _sampleAccessInfo: assigned later */
            NULL /* _typePlugin: assigned later */
        }}; /* Type code for UMAA_EO_EngineStatus_EngineReportType*/

    if (is_initialized) {
        return &UMAA_EO_EngineStatus_EngineReportType_g_tc;
    }

    is_initialized = RTI_TRUE;

    UMAA_EO_EngineStatus_EngineReportType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

    UMAA_EO_EngineStatus_EngineReportType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_Volume_Percent_get_typecode();
    UMAA_EO_EngineStatus_EngineReportType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_Pressure_KiloPascals_get_typecode();
    UMAA_EO_EngineStatus_EngineReportType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_Temperature_get_typecode();
    UMAA_EO_EngineStatus_EngineReportType_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_Temperature_get_typecode();
    UMAA_EO_EngineStatus_EngineReportType_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_Temperature_get_typecode();
    UMAA_EO_EngineStatus_EngineReportType_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;
    UMAA_EO_EngineStatus_EngineReportType_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Enumeration_OnOffStatusEnumType_OnOffStatusEnumType_get_typecode();
    UMAA_EO_EngineStatus_EngineReportType_g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_Temperature_get_typecode();
    UMAA_EO_EngineStatus_EngineReportType_g_tc_members[8]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_Duration_Seconds_get_typecode();
    UMAA_EO_EngineStatus_EngineReportType_g_tc_members[9]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_Duration_Hours_get_typecode();
    UMAA_EO_EngineStatus_EngineReportType_g_tc_members[10]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_Temperature_get_typecode();
    UMAA_EO_EngineStatus_EngineReportType_g_tc_members[11]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_Pressure_KiloPascals_get_typecode();
    UMAA_EO_EngineStatus_EngineReportType_g_tc_members[12]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_Volume_Percent_get_typecode();
    UMAA_EO_EngineStatus_EngineReportType_g_tc_members[13]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_Pressure_KiloPascals_get_typecode();
    UMAA_EO_EngineStatus_EngineReportType_g_tc_members[14]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_Temperature_get_typecode();
    UMAA_EO_EngineStatus_EngineReportType_g_tc_members[15]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_Pressure_Percent_get_typecode();
    UMAA_EO_EngineStatus_EngineReportType_g_tc_members[16]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_EngineSpeed_get_typecode();
    UMAA_EO_EngineStatus_EngineReportType_g_tc_members[17]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_MaritimeEnumeration_IgnitionStateEnumType_IgnitionStateEnumType_get_typecode();
    UMAA_EO_EngineStatus_EngineReportType_g_tc_members[18]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_Effort_get_typecode();
    UMAA_EO_EngineStatus_EngineReportType_g_tc_members[19]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_NumericGUID_get_typecode();
    UMAA_EO_EngineStatus_EngineReportType_g_tc_members[20]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_DateTime_get_typecode();

    /* Initialize the values for member annotations. */
    UMAA_EO_EngineStatus_EngineReportType_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_EO_EngineStatus_EngineReportType_g_tc_members[0]._annotations._defaultValue._u.double_value = 0.0;
    UMAA_EO_EngineStatus_EngineReportType_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_EO_EngineStatus_EngineReportType_g_tc_members[0]._annotations._minValue._u.double_value = 0ULL;
    UMAA_EO_EngineStatus_EngineReportType_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_EO_EngineStatus_EngineReportType_g_tc_members[0]._annotations._maxValue._u.double_value = 1000ULL;
    UMAA_EO_EngineStatus_EngineReportType_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_EO_EngineStatus_EngineReportType_g_tc_members[1]._annotations._defaultValue._u.double_value = 0.0;
    UMAA_EO_EngineStatus_EngineReportType_g_tc_members[1]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_EO_EngineStatus_EngineReportType_g_tc_members[1]._annotations._minValue._u.double_value = 0ULL;
    UMAA_EO_EngineStatus_EngineReportType_g_tc_members[1]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_EO_EngineStatus_EngineReportType_g_tc_members[1]._annotations._maxValue._u.double_value = 51200ULL;
    UMAA_EO_EngineStatus_EngineReportType_g_tc_members[2]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_EO_EngineStatus_EngineReportType_g_tc_members[2]._annotations._defaultValue._u.double_value = 0.0;
    UMAA_EO_EngineStatus_EngineReportType_g_tc_members[2]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_EO_EngineStatus_EngineReportType_g_tc_members[2]._annotations._minValue._u.double_value = -273LL;
    UMAA_EO_EngineStatus_EngineReportType_g_tc_members[2]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_EO_EngineStatus_EngineReportType_g_tc_members[2]._annotations._maxValue._u.double_value = 1000ULL;
    UMAA_EO_EngineStatus_EngineReportType_g_tc_members[3]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_EO_EngineStatus_EngineReportType_g_tc_members[3]._annotations._defaultValue._u.double_value = 0.0;
    UMAA_EO_EngineStatus_EngineReportType_g_tc_members[3]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_EO_EngineStatus_EngineReportType_g_tc_members[3]._annotations._minValue._u.double_value = -273LL;
    UMAA_EO_EngineStatus_EngineReportType_g_tc_members[3]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_EO_EngineStatus_EngineReportType_g_tc_members[3]._annotations._maxValue._u.double_value = 1000ULL;
    UMAA_EO_EngineStatus_EngineReportType_g_tc_members[4]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_EO_EngineStatus_EngineReportType_g_tc_members[4]._annotations._defaultValue._u.double_value = 0.0;
    UMAA_EO_EngineStatus_EngineReportType_g_tc_members[4]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_EO_EngineStatus_EngineReportType_g_tc_members[4]._annotations._minValue._u.double_value = -273LL;
    UMAA_EO_EngineStatus_EngineReportType_g_tc_members[4]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_EO_EngineStatus_EngineReportType_g_tc_members[4]._annotations._maxValue._u.double_value = 1000ULL;
    UMAA_EO_EngineStatus_EngineReportType_g_tc_members[7]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_EO_EngineStatus_EngineReportType_g_tc_members[7]._annotations._minValue._u.double_value = -273LL;
    UMAA_EO_EngineStatus_EngineReportType_g_tc_members[7]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_EO_EngineStatus_EngineReportType_g_tc_members[7]._annotations._maxValue._u.double_value = 1000ULL;
    UMAA_EO_EngineStatus_EngineReportType_g_tc_members[8]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_EO_EngineStatus_EngineReportType_g_tc_members[8]._annotations._minValue._u.double_value = 0ULL;
    UMAA_EO_EngineStatus_EngineReportType_g_tc_members[8]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_EO_EngineStatus_EngineReportType_g_tc_members[8]._annotations._maxValue._u.double_value = 37817280ULL;
    UMAA_EO_EngineStatus_EngineReportType_g_tc_members[9]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_EO_EngineStatus_EngineReportType_g_tc_members[9]._annotations._defaultValue._u.double_value = 0.0;
    UMAA_EO_EngineStatus_EngineReportType_g_tc_members[9]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_EO_EngineStatus_EngineReportType_g_tc_members[9]._annotations._minValue._u.double_value = 0ULL;
    UMAA_EO_EngineStatus_EngineReportType_g_tc_members[9]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_EO_EngineStatus_EngineReportType_g_tc_members[9]._annotations._maxValue._u.double_value = 10505ULL;
    UMAA_EO_EngineStatus_EngineReportType_g_tc_members[10]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_EO_EngineStatus_EngineReportType_g_tc_members[10]._annotations._defaultValue._u.double_value = 0.0;
    UMAA_EO_EngineStatus_EngineReportType_g_tc_members[10]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_EO_EngineStatus_EngineReportType_g_tc_members[10]._annotations._minValue._u.double_value = -273LL;
    UMAA_EO_EngineStatus_EngineReportType_g_tc_members[10]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_EO_EngineStatus_EngineReportType_g_tc_members[10]._annotations._maxValue._u.double_value = 1000ULL;
    UMAA_EO_EngineStatus_EngineReportType_g_tc_members[11]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_EO_EngineStatus_EngineReportType_g_tc_members[11]._annotations._defaultValue._u.double_value = 0.0;
    UMAA_EO_EngineStatus_EngineReportType_g_tc_members[11]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_EO_EngineStatus_EngineReportType_g_tc_members[11]._annotations._minValue._u.double_value = 0ULL;
    UMAA_EO_EngineStatus_EngineReportType_g_tc_members[11]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_EO_EngineStatus_EngineReportType_g_tc_members[11]._annotations._maxValue._u.double_value = 51200ULL;
    UMAA_EO_EngineStatus_EngineReportType_g_tc_members[12]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_EO_EngineStatus_EngineReportType_g_tc_members[12]._annotations._defaultValue._u.double_value = 0.0;
    UMAA_EO_EngineStatus_EngineReportType_g_tc_members[12]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_EO_EngineStatus_EngineReportType_g_tc_members[12]._annotations._minValue._u.double_value = 0ULL;
    UMAA_EO_EngineStatus_EngineReportType_g_tc_members[12]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_EO_EngineStatus_EngineReportType_g_tc_members[12]._annotations._maxValue._u.double_value = 1000ULL;
    UMAA_EO_EngineStatus_EngineReportType_g_tc_members[13]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_EO_EngineStatus_EngineReportType_g_tc_members[13]._annotations._defaultValue._u.double_value = 0.0;
    UMAA_EO_EngineStatus_EngineReportType_g_tc_members[13]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_EO_EngineStatus_EngineReportType_g_tc_members[13]._annotations._minValue._u.double_value = 0ULL;
    UMAA_EO_EngineStatus_EngineReportType_g_tc_members[13]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_EO_EngineStatus_EngineReportType_g_tc_members[13]._annotations._maxValue._u.double_value = 51200ULL;
    UMAA_EO_EngineStatus_EngineReportType_g_tc_members[14]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_EO_EngineStatus_EngineReportType_g_tc_members[14]._annotations._defaultValue._u.double_value = 0.0;
    UMAA_EO_EngineStatus_EngineReportType_g_tc_members[14]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_EO_EngineStatus_EngineReportType_g_tc_members[14]._annotations._minValue._u.double_value = -273LL;
    UMAA_EO_EngineStatus_EngineReportType_g_tc_members[14]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_EO_EngineStatus_EngineReportType_g_tc_members[14]._annotations._maxValue._u.double_value = 1000ULL;
    UMAA_EO_EngineStatus_EngineReportType_g_tc_members[15]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_EO_EngineStatus_EngineReportType_g_tc_members[15]._annotations._defaultValue._u.double_value = 0.0;
    UMAA_EO_EngineStatus_EngineReportType_g_tc_members[15]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_EO_EngineStatus_EngineReportType_g_tc_members[15]._annotations._minValue._u.double_value = 0ULL;
    UMAA_EO_EngineStatus_EngineReportType_g_tc_members[15]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_EO_EngineStatus_EngineReportType_g_tc_members[15]._annotations._maxValue._u.double_value = 200ULL;
    UMAA_EO_EngineStatus_EngineReportType_g_tc_members[16]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_EO_EngineStatus_EngineReportType_g_tc_members[16]._annotations._defaultValue._u.double_value = 0.0;
    UMAA_EO_EngineStatus_EngineReportType_g_tc_members[16]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_EO_EngineStatus_EngineReportType_g_tc_members[16]._annotations._minValue._u.double_value = -100000LL;
    UMAA_EO_EngineStatus_EngineReportType_g_tc_members[16]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_EO_EngineStatus_EngineReportType_g_tc_members[16]._annotations._maxValue._u.double_value = 100000ULL;
    UMAA_EO_EngineStatus_EngineReportType_g_tc_members[17]._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
    UMAA_EO_EngineStatus_EngineReportType_g_tc_members[17]._annotations._defaultValue._u.enumerated_value = 0;
    UMAA_EO_EngineStatus_EngineReportType_g_tc_members[18]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_EO_EngineStatus_EngineReportType_g_tc_members[18]._annotations._defaultValue._u.double_value = 0.0;
    UMAA_EO_EngineStatus_EngineReportType_g_tc_members[18]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_EO_EngineStatus_EngineReportType_g_tc_members[18]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
    UMAA_EO_EngineStatus_EngineReportType_g_tc_members[18]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_EO_EngineStatus_EngineReportType_g_tc_members[18]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

    UMAA_EO_EngineStatus_EngineReportType_g_tc._data._sampleAccessInfo =
    UMAA_EO_EngineStatus_EngineReportType_get_sample_access_info();
    UMAA_EO_EngineStatus_EngineReportType_g_tc._data._typePlugin =
    UMAA_EO_EngineStatus_EngineReportType_get_type_plugin_info();    

    return &UMAA_EO_EngineStatus_EngineReportType_g_tc;
}

#define TSeq UMAA_EO_EngineStatus_EngineReportTypeSeq
#define T UMAA_EO_EngineStatus_EngineReportType
#include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
#undef T
#undef TSeq

RTIXCdrSampleAccessInfo *UMAA_EO_EngineStatus_EngineReportType_get_sample_seq_access_info()
{
    static RTIXCdrSampleAccessInfo UMAA_EO_EngineStatus_EngineReportType_g_seqSampleAccessInfo = {
        RTI_XCDR_TYPE_BINDING_CPP, \
        {sizeof(UMAA_EO_EngineStatus_EngineReportTypeSeq),0,0,0}, \
        RTI_XCDR_FALSE, \
        DDS_Sequence_get_member_value_pointer, \
        UMAA_EO_EngineStatus_EngineReportTypeSeq_set_member_element_count, \
        NULL, \
        NULL, \
        NULL \
    };

    return &UMAA_EO_EngineStatus_EngineReportType_g_seqSampleAccessInfo;
}

RTIXCdrSampleAccessInfo *UMAA_EO_EngineStatus_EngineReportType_get_sample_access_info()
{
    static RTIBool is_initialized = RTI_FALSE;

    UMAA_EO_EngineStatus_EngineReportType *sample;

    static RTIXCdrMemberAccessInfo UMAA_EO_EngineStatus_EngineReportType_g_memberAccessInfos[21] =
    {RTIXCdrMemberAccessInfo_INITIALIZER};

    static RTIXCdrSampleAccessInfo UMAA_EO_EngineStatus_EngineReportType_g_sampleAccessInfo = 
    RTIXCdrSampleAccessInfo_INITIALIZER;

    if (is_initialized) {
        return (RTIXCdrSampleAccessInfo*) &UMAA_EO_EngineStatus_EngineReportType_g_sampleAccessInfo;
    }

    RTIXCdrHeap_allocateStruct(
        &sample, 
        UMAA_EO_EngineStatus_EngineReportType);
    if (sample == NULL) {
        return NULL;
    }

    UMAA_EO_EngineStatus_EngineReportType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->coolantLevel - (char *)sample);

    UMAA_EO_EngineStatus_EngineReportType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->coolantPressure - (char *)sample);

    UMAA_EO_EngineStatus_EngineReportType_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->coolantTemp - (char *)sample);

    UMAA_EO_EngineStatus_EngineReportType_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->engineTemp - (char *)sample);

    UMAA_EO_EngineStatus_EngineReportType_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->exhaustTemp - (char *)sample);

    UMAA_EO_EngineStatus_EngineReportType_g_memberAccessInfos[5].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->glowPlugIndicator - (char *)sample);

    UMAA_EO_EngineStatus_EngineReportType_g_memberAccessInfos[6].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->glowPlugState - (char *)sample);

    UMAA_EO_EngineStatus_EngineReportType_g_memberAccessInfos[7].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->glowPlugTemp - (char *)sample);

    UMAA_EO_EngineStatus_EngineReportType_g_memberAccessInfos[8].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->glowPlugTimeRemaining - (char *)sample);

    UMAA_EO_EngineStatus_EngineReportType_g_memberAccessInfos[9].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->hours - (char *)sample);

    UMAA_EO_EngineStatus_EngineReportType_g_memberAccessInfos[10].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->manifoldAirTemp - (char *)sample);

    UMAA_EO_EngineStatus_EngineReportType_g_memberAccessInfos[11].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->manifoldPressure - (char *)sample);

    UMAA_EO_EngineStatus_EngineReportType_g_memberAccessInfos[12].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->oilLevel - (char *)sample);

    UMAA_EO_EngineStatus_EngineReportType_g_memberAccessInfos[13].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->oilPressure - (char *)sample);

    UMAA_EO_EngineStatus_EngineReportType_g_memberAccessInfos[14].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->oilTemp - (char *)sample);

    UMAA_EO_EngineStatus_EngineReportType_g_memberAccessInfos[15].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->percentOilPressure - (char *)sample);

    UMAA_EO_EngineStatus_EngineReportType_g_memberAccessInfos[16].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->RPM - (char *)sample);

    UMAA_EO_EngineStatus_EngineReportType_g_memberAccessInfos[17].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->state - (char *)sample);

    UMAA_EO_EngineStatus_EngineReportType_g_memberAccessInfos[18].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->throttle - (char *)sample);

    UMAA_EO_EngineStatus_EngineReportType_g_memberAccessInfos[19].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->source - (char *)sample);

    UMAA_EO_EngineStatus_EngineReportType_g_memberAccessInfos[20].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->timeStamp - (char *)sample);

    UMAA_EO_EngineStatus_EngineReportType_g_sampleAccessInfo.memberAccessInfos = 
    UMAA_EO_EngineStatus_EngineReportType_g_memberAccessInfos;

    {
        size_t candidateTypeSize = sizeof(UMAA_EO_EngineStatus_EngineReportType);

        if (candidateTypeSize > RTIXCdrLong_MAX) {
            UMAA_EO_EngineStatus_EngineReportType_g_sampleAccessInfo.typeSize[0] =
            RTIXCdrLong_MAX;
        } else {
            UMAA_EO_EngineStatus_EngineReportType_g_sampleAccessInfo.typeSize[0] =
            (RTIXCdrUnsignedLong) candidateTypeSize;
        }
    }

    UMAA_EO_EngineStatus_EngineReportType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
    RTI_XCDR_TRUE;

    UMAA_EO_EngineStatus_EngineReportType_g_sampleAccessInfo.getMemberValuePointerFcn = 
    UMAA_EO_EngineStatus_EngineReportType_get_member_value_pointer;

    UMAA_EO_EngineStatus_EngineReportType_g_sampleAccessInfo.languageBinding = 
    RTI_XCDR_TYPE_BINDING_CPP ;

    RTIXCdrHeap_freeStruct(sample);
    is_initialized = RTI_TRUE;
    return (RTIXCdrSampleAccessInfo*) &UMAA_EO_EngineStatus_EngineReportType_g_sampleAccessInfo;
}
RTIXCdrTypePlugin *UMAA_EO_EngineStatus_EngineReportType_get_type_plugin_info()
{
    static RTIXCdrTypePlugin UMAA_EO_EngineStatus_EngineReportType_g_typePlugin = 
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
        UMAA_EO_EngineStatus_EngineReportType_initialize_ex,
        NULL,
        (RTIXCdrTypePluginFinalizeSampleFunction)
        UMAA_EO_EngineStatus_EngineReportType_finalize_w_return,
        NULL,
        NULL
    };

    return &UMAA_EO_EngineStatus_EngineReportType_g_typePlugin;
}
#endif

RTIBool UMAA_EO_EngineStatus_EngineReportType_initialize(
    UMAA_EO_EngineStatus_EngineReportType* sample)
{
    return UMAA_EO_EngineStatus_EngineReportType_initialize_ex(
        sample, 
        RTI_TRUE, 
        RTI_TRUE);
}
RTIBool UMAA_EO_EngineStatus_EngineReportType_initialize_w_params(
    UMAA_EO_EngineStatus_EngineReportType *sample,
    const struct DDS_TypeAllocationParams_t *allocParams)
{

    if (sample == NULL) {
        return RTI_FALSE;
    }
    if (allocParams == NULL) {
        return RTI_FALSE;
    }

    sample->coolantLevel = 0.0;

    sample->coolantPressure = 0.0;

    sample->coolantTemp = 0.0;

    sample->engineTemp = 0.0;

    sample->exhaustTemp = 0.0;

    if (!allocParams->allocate_optional_members) {
        sample->glowPlugIndicator=NULL;
    } else {   
        if (allocParams->allocate_memory){
            sample->glowPlugIndicator = new (std::nothrow)   DDS_Boolean ();
            if (sample->glowPlugIndicator==NULL) {
                return RTI_FALSE;
            }
            if (!RTICdrType_initBoolean(sample->glowPlugIndicator)) {
                return RTI_FALSE;
            }

        } else {

            if (sample->glowPlugIndicator != NULL) {
                if (!RTICdrType_initBoolean(sample->glowPlugIndicator)) {
                    return RTI_FALSE;
                }
            }

        }

    }
    if (!allocParams->allocate_optional_members) {
        sample->glowPlugState=NULL;
    } else {   
        if (allocParams->allocate_memory) {
            sample->glowPlugState = new (std::nothrow)   UMAA_Common_Enumeration_OnOffStatusEnumType_OnOffStatusEnumType ();
            if (sample->glowPlugState==NULL) {
                return RTI_FALSE;
            }
            if (!UMAA_Common_Enumeration_OnOffStatusEnumType_OnOffStatusEnumType_initialize_w_params(
                sample->glowPlugState,
                allocParams)) {
                return RTI_FALSE;
            }
        } else {
            if (sample->glowPlugState!=NULL) {
                if (!UMAA_Common_Enumeration_OnOffStatusEnumType_OnOffStatusEnumType_initialize_w_params(
                    sample->glowPlugState,
                    allocParams)) {
                    return RTI_FALSE;
                }
            }   
        }
    }
    if (!allocParams->allocate_optional_members) {
        sample->glowPlugTemp=NULL;
    } else {   
        if (allocParams->allocate_memory){
            sample->glowPlugTemp = new (std::nothrow)   DDS_Double ();
            if (sample->glowPlugTemp==NULL) {
                return RTI_FALSE;
            }
            if (!RTICdrType_initDouble(sample->glowPlugTemp)) {
                return RTI_FALSE;
            }

        } else {

            if (sample->glowPlugTemp != NULL) {
                if (!RTICdrType_initDouble(sample->glowPlugTemp)) {
                    return RTI_FALSE;
                }
            }

        }

    }
    if (!allocParams->allocate_optional_members) {
        sample->glowPlugTimeRemaining=NULL;
    } else {   
        if (allocParams->allocate_memory){
            sample->glowPlugTimeRemaining = new (std::nothrow)   DDS_Double ();
            if (sample->glowPlugTimeRemaining==NULL) {
                return RTI_FALSE;
            }
            if (!RTICdrType_initDouble(sample->glowPlugTimeRemaining)) {
                return RTI_FALSE;
            }

        } else {

            if (sample->glowPlugTimeRemaining != NULL) {
                if (!RTICdrType_initDouble(sample->glowPlugTimeRemaining)) {
                    return RTI_FALSE;
                }
            }

        }

    }
    sample->hours = 0.0;

    sample->manifoldAirTemp = 0.0;

    sample->manifoldPressure = 0.0;

    sample->oilLevel = 0.0;

    sample->oilPressure = 0.0;

    sample->oilTemp = 0.0;

    sample->percentOilPressure = 0.0;

    sample->RPM = 0.0;

    sample->state = UMAA_Common_MaritimeEnumeration_IgnitionStateEnumType_IgnitionStateEnumType_OFF;
    sample->throttle = 0.0;

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
RTIBool UMAA_EO_EngineStatus_EngineReportType_initialize_ex(
    UMAA_EO_EngineStatus_EngineReportType *sample,
    RTIBool allocatePointers, 
    RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return UMAA_EO_EngineStatus_EngineReportType_initialize_w_params(
        sample,
        &allocParams);
}

RTIBool UMAA_EO_EngineStatus_EngineReportType_finalize_w_return(
    UMAA_EO_EngineStatus_EngineReportType* sample)
{
    UMAA_EO_EngineStatus_EngineReportType_finalize_ex(sample, RTI_TRUE);

    return RTI_TRUE;
}

void UMAA_EO_EngineStatus_EngineReportType_finalize(
    UMAA_EO_EngineStatus_EngineReportType* sample)
{  
    UMAA_EO_EngineStatus_EngineReportType_finalize_ex(
        sample, 
        RTI_TRUE);
}

void UMAA_EO_EngineStatus_EngineReportType_finalize_ex(
    UMAA_EO_EngineStatus_EngineReportType *sample,
    RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    UMAA_EO_EngineStatus_EngineReportType_finalize_w_params(
        sample,
        &deallocParams);
}

void UMAA_EO_EngineStatus_EngineReportType_finalize_w_params(
    UMAA_EO_EngineStatus_EngineReportType *sample,
    const struct DDS_TypeDeallocationParams_t *deallocParams)
{
    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

    if (deallocParams->delete_optional_members) {
        if (sample->glowPlugIndicator != NULL) {

            delete  sample->glowPlugIndicator;
            sample->glowPlugIndicator=NULL;
        }
    }
    if (deallocParams->delete_optional_members) {
        if (sample->glowPlugState != NULL) {
            UMAA_Common_Enumeration_OnOffStatusEnumType_OnOffStatusEnumType_finalize_w_params(
                sample->glowPlugState,
                deallocParams);

            delete  sample->glowPlugState;
            sample->glowPlugState=NULL;
        }
    }
    if (deallocParams->delete_optional_members) {
        if (sample->glowPlugTemp != NULL) {

            delete  sample->glowPlugTemp;
            sample->glowPlugTemp=NULL;
        }
    }
    if (deallocParams->delete_optional_members) {
        if (sample->glowPlugTimeRemaining != NULL) {

            delete  sample->glowPlugTimeRemaining;
            sample->glowPlugTimeRemaining=NULL;
        }
    }

    UMAA_Common_MaritimeEnumeration_IgnitionStateEnumType_IgnitionStateEnumType_finalize_w_params(
        &sample->state,
        deallocParams);

    UMAA_Common_Measurement_NumericGUID_finalize_w_params(
        &sample->source,
        deallocParams);

    UMAA_Common_Measurement_DateTime_finalize_w_params(
        &sample->timeStamp,
        deallocParams);

}

void UMAA_EO_EngineStatus_EngineReportType_finalize_optional_members(
    UMAA_EO_EngineStatus_EngineReportType* sample, RTIBool deletePointers)
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

    if (sample->glowPlugIndicator != NULL) {

        delete  sample->glowPlugIndicator;
        sample->glowPlugIndicator=NULL;
    }
    if (sample->glowPlugState != NULL) {
        UMAA_Common_Enumeration_OnOffStatusEnumType_OnOffStatusEnumType_finalize_w_params(
            sample->glowPlugState,
            deallocParams);

        delete  sample->glowPlugState;
        sample->glowPlugState=NULL;
    }
    if (sample->glowPlugTemp != NULL) {

        delete  sample->glowPlugTemp;
        sample->glowPlugTemp=NULL;
    }
    if (sample->glowPlugTimeRemaining != NULL) {

        delete  sample->glowPlugTimeRemaining;
        sample->glowPlugTimeRemaining=NULL;
    }
}

RTIBool UMAA_EO_EngineStatus_EngineReportType_copy(
    UMAA_EO_EngineStatus_EngineReportType* dst,
    const UMAA_EO_EngineStatus_EngineReportType* src)
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
            &dst->coolantLevel, 
            &src->coolantLevel)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyDouble (
            &dst->coolantPressure, 
            &src->coolantPressure)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyDouble (
            &dst->coolantTemp, 
            &src->coolantTemp)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyDouble (
            &dst->engineTemp, 
            &src->engineTemp)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyDouble (
            &dst->exhaustTemp, 
            &src->exhaustTemp)) { 
            return RTI_FALSE;
        }
        if (src->glowPlugIndicator!=NULL) {
            if (dst->glowPlugIndicator==NULL) {

                dst->glowPlugIndicator = new (std::nothrow)   DDS_Boolean ();
                if (dst->glowPlugIndicator==NULL) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initBoolean(dst->glowPlugIndicator)) {
                    return RTI_FALSE;
                }
            }
            if (!RTICdrType_copyBoolean (
                dst->glowPlugIndicator, 
                src->glowPlugIndicator)) { 
                return RTI_FALSE;
            }
        } else {
            if (dst->glowPlugIndicator != NULL) {
                delete  dst->glowPlugIndicator;
                dst->glowPlugIndicator=NULL;
            }
        }
        if (src->glowPlugState!=NULL) {
            if (dst->glowPlugState==NULL) {

                dst->glowPlugState = new (std::nothrow)   UMAA_Common_Enumeration_OnOffStatusEnumType_OnOffStatusEnumType ();
                if (dst->glowPlugState==NULL) {
                    return RTI_FALSE;
                }

                if (!UMAA_Common_Enumeration_OnOffStatusEnumType_OnOffStatusEnumType_initialize_ex(
                    dst->glowPlugState, 
                    RTI_TRUE, 
                    RTI_TRUE)) {
                    return RTI_FALSE;
                }
            }
            if (!UMAA_Common_Enumeration_OnOffStatusEnumType_OnOffStatusEnumType_copy(
                dst->glowPlugState,
                (const UMAA_Common_Enumeration_OnOffStatusEnumType_OnOffStatusEnumType*)src->glowPlugState)) {
                return RTI_FALSE;
            } 
        } else {
            if (dst->glowPlugState != NULL) {
                UMAA_Common_Enumeration_OnOffStatusEnumType_OnOffStatusEnumType_finalize_w_params(dst->glowPlugState, deallocParams);
                delete  dst->glowPlugState;
                dst->glowPlugState=NULL;
            }
        }
        if (src->glowPlugTemp!=NULL) {
            if (dst->glowPlugTemp==NULL) {

                dst->glowPlugTemp = new (std::nothrow)   DDS_Double ();
                if (dst->glowPlugTemp==NULL) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initDouble(dst->glowPlugTemp)) {
                    return RTI_FALSE;
                }
            }
            if (!RTICdrType_copyDouble (
                dst->glowPlugTemp, 
                src->glowPlugTemp)) { 
                return RTI_FALSE;
            }
        } else {
            if (dst->glowPlugTemp != NULL) {
                delete  dst->glowPlugTemp;
                dst->glowPlugTemp=NULL;
            }
        }
        if (src->glowPlugTimeRemaining!=NULL) {
            if (dst->glowPlugTimeRemaining==NULL) {

                dst->glowPlugTimeRemaining = new (std::nothrow)   DDS_Double ();
                if (dst->glowPlugTimeRemaining==NULL) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initDouble(dst->glowPlugTimeRemaining)) {
                    return RTI_FALSE;
                }
            }
            if (!RTICdrType_copyDouble (
                dst->glowPlugTimeRemaining, 
                src->glowPlugTimeRemaining)) { 
                return RTI_FALSE;
            }
        } else {
            if (dst->glowPlugTimeRemaining != NULL) {
                delete  dst->glowPlugTimeRemaining;
                dst->glowPlugTimeRemaining=NULL;
            }
        }
        if (!RTICdrType_copyDouble (
            &dst->hours, 
            &src->hours)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyDouble (
            &dst->manifoldAirTemp, 
            &src->manifoldAirTemp)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyDouble (
            &dst->manifoldPressure, 
            &src->manifoldPressure)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyDouble (
            &dst->oilLevel, 
            &src->oilLevel)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyDouble (
            &dst->oilPressure, 
            &src->oilPressure)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyDouble (
            &dst->oilTemp, 
            &src->oilTemp)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyDouble (
            &dst->percentOilPressure, 
            &src->percentOilPressure)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyDouble (
            &dst->RPM, 
            &src->RPM)) { 
            return RTI_FALSE;
        }
        if (!UMAA_Common_MaritimeEnumeration_IgnitionStateEnumType_IgnitionStateEnumType_copy(
            &dst->state,
            (const UMAA_Common_MaritimeEnumeration_IgnitionStateEnumType_IgnitionStateEnumType*)&src->state)) {
            return RTI_FALSE;
        } 
        if (!RTICdrType_copyDouble (
            &dst->throttle, 
            &src->throttle)) { 
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
* Configure and implement 'UMAA_EO_EngineStatus_EngineReportType' sequence class.
*/
#define T UMAA_EO_EngineStatus_EngineReportType
#define TSeq UMAA_EO_EngineStatus_EngineReportTypeSeq

#define T_initialize_w_params UMAA_EO_EngineStatus_EngineReportType_initialize_w_params

#define T_finalize_w_params   UMAA_EO_EngineStatus_EngineReportType_finalize_w_params
#define T_copy       UMAA_EO_EngineStatus_EngineReportType_copy

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
        const RTIXCdrTypeCode * type_code< UMAA_EO_EngineStatus_EngineReportType>::get() 
        {
            return (const RTIXCdrTypeCode *) UMAA_EO_EngineStatus_EngineReportType_get_typecode();
        }

    } 
}
#endif
