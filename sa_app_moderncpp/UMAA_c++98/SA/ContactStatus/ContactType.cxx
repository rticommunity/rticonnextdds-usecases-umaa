

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ContactType.idl 
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

#include "ContactType.h"

#ifndef NDDS_STANDALONE_TYPE
#include "ContactTypePlugin.h"
#endif

#include <new>

/* ========================================================================= */
const char *UMAA_SA_ContactStatus_ContactTypeTYPENAME = "UMAA::SA::ContactStatus::ContactType";

#ifndef NDDS_STANDALONE_TYPE
DDS_TypeCode * UMAA_SA_ContactStatus_ContactType_get_typecode(void)
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode UMAA_SA_ContactStatus_ContactType_g_tc_source_sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE((100L),NULL);

    static DDS_TypeCode_Member UMAA_SA_ContactStatus_ContactType_g_tc_members[25]=
    {

        {
            (char *)"area",/* Member name */
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
            (char *)"callSign",/* Member name */
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
            (char *)"contactName",/* Member name */
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
            (char *)"course",/* Member name */
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
            (char *)"CPA",/* Member name */
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
            (char *)"CPATime",/* Member name */
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
            (char *)"diameter",/* Member name */
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
            (char *)"elevation",/* Member name */
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
            (char *)"elevationError",/* Member name */
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
            (char *)"heading",/* Member name */
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
            (char *)"height",/* Member name */
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
            (char *)"kind",/* Member name */
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
            (char *)"length",/* Member name */
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
            (char *)"MMSINumber",/* Member name */
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
            (char *)"originator",/* Member name */
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
            (char *)"position",/* Member name */
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
            (char *)"positionCovariance",/* Member name */
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
            (char *)"SIDC",/* Member name */
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
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }, 
        {
            (char *)"sourceIndicator",/* Member name */
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
            (char *)"speedOverGround",/* Member name */
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
            (char *)"timeFirstAcquired",/* Member name */
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
            (char *)"timeLost",/* Member name */
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
            RTI_CDR_NONKEY_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }, 
        {
            (char *)"width",/* Member name */
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
            RTI_CDR_NONKEY_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }, 
        {
            (char *)"featureID",/* Member name */
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
            RTI_CDR_KEY_MEMBER , /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }
    };

    static DDS_TypeCode UMAA_SA_ContactStatus_ContactType_g_tc =
    {{
            DDS_TK_STRUCT, /* Kind */
            DDS_BOOLEAN_FALSE, /* Ignored */
            -1, /*Ignored*/
            (char *)"UMAA::SA::ContactStatus::ContactType", /* Name */
            NULL, /* Ignored */      
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            25, /* Number of members */
            UMAA_SA_ContactStatus_ContactType_g_tc_members, /* Members */
            DDS_VM_NONE, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER,
            DDS_BOOLEAN_TRUE, /* _isCopyable */
            NULL, /* _sampleAccessInfo: assigned later */
            NULL /* _typePlugin: assigned later */
        }}; /* Type code for UMAA_SA_ContactStatus_ContactType*/

    if (is_initialized) {
        return &UMAA_SA_ContactStatus_ContactType_g_tc;
    }

    is_initialized = RTI_TRUE;

    UMAA_SA_ContactStatus_ContactType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

    UMAA_SA_ContactStatus_ContactType_g_tc_source_sequence._data._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_NumericGUID_get_typecode();
    UMAA_SA_ContactStatus_ContactType_g_tc_source_sequence._data._sampleAccessInfo = UMAA_Common_Measurement_NumericGUID_get_sample_seq_access_info();
    UMAA_SA_ContactStatus_ContactType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_Polygon_get_typecode();
    UMAA_SA_ContactStatus_ContactType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_PrimitiveConstrained_StringShortDescription_get_typecode();
    UMAA_SA_ContactStatus_ContactType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_PrimitiveConstrained_StringShortDescription_get_typecode();
    UMAA_SA_ContactStatus_ContactType_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_Course_TrueNorth_get_typecode();
    UMAA_SA_ContactStatus_ContactType_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_Position2D_get_typecode();
    UMAA_SA_ContactStatus_ContactType_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_DateTime_get_typecode();
    UMAA_SA_ContactStatus_ContactType_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_Distance_get_typecode();
    UMAA_SA_ContactStatus_ContactType_g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_Altitude_MSL_get_typecode();
    UMAA_SA_ContactStatus_ContactType_g_tc_members[8]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_RMSDistanceErrorType_get_typecode();
    UMAA_SA_ContactStatus_ContactType_g_tc_members[9]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_Heading_TrueNorth_Angle_get_typecode();
    UMAA_SA_ContactStatus_ContactType_g_tc_members[10]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_Distance_get_typecode();
    UMAA_SA_ContactStatus_ContactType_g_tc_members[11]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_MaritimeEnumeration_FeatureKindEnumType_FeatureKindEnumType_get_typecode();
    UMAA_SA_ContactStatus_ContactType_g_tc_members[12]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_Distance_get_typecode();
    UMAA_SA_ContactStatus_ContactType_g_tc_members[13]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_PrimitiveConstrained_MMSI_get_typecode();
    UMAA_SA_ContactStatus_ContactType_g_tc_members[14]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_PrimitiveConstrained_StringShortDescription_get_typecode();
    UMAA_SA_ContactStatus_ContactType_g_tc_members[15]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_Position2D_get_typecode();
    UMAA_SA_ContactStatus_ContactType_g_tc_members[16]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_CovariancePositionPositionType_get_typecode();
    UMAA_SA_ContactStatus_ContactType_g_tc_members[17]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_PrimitiveConstrained_StringShortDescription_get_typecode();
    UMAA_SA_ContactStatus_ContactType_g_tc_members[18]._representation._typeCode = (RTICdrTypeCode *)& UMAA_SA_ContactStatus_ContactType_g_tc_source_sequence;
    UMAA_SA_ContactStatus_ContactType_g_tc_members[19]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_MaritimeEnumeration_SourceIndicatorEnumType_SourceIndicatorEnumType_get_typecode();
    UMAA_SA_ContactStatus_ContactType_g_tc_members[20]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_GroundSpeed_get_typecode();
    UMAA_SA_ContactStatus_ContactType_g_tc_members[21]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_DateTime_get_typecode();
    UMAA_SA_ContactStatus_ContactType_g_tc_members[22]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_DateTime_get_typecode();
    UMAA_SA_ContactStatus_ContactType_g_tc_members[23]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_Distance_get_typecode();
    UMAA_SA_ContactStatus_ContactType_g_tc_members[24]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_NumericGUID_get_typecode();

    /* Initialize the values for member annotations. */
    UMAA_SA_ContactStatus_ContactType_g_tc_members[2]._annotations._defaultValue._d = RTI_XCDR_TK_STRING;
    UMAA_SA_ContactStatus_ContactType_g_tc_members[2]._annotations._defaultValue._u.string_value = (DDS_Char *) "";
    UMAA_SA_ContactStatus_ContactType_g_tc_members[3]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_SA_ContactStatus_ContactType_g_tc_members[3]._annotations._defaultValue._u.double_value = 0.0;
    UMAA_SA_ContactStatus_ContactType_g_tc_members[3]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_SA_ContactStatus_ContactType_g_tc_members[3]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
    UMAA_SA_ContactStatus_ContactType_g_tc_members[3]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_SA_ContactStatus_ContactType_g_tc_members[3]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
    UMAA_SA_ContactStatus_ContactType_g_tc_members[6]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_SA_ContactStatus_ContactType_g_tc_members[6]._annotations._defaultValue._u.double_value = 0.0;
    UMAA_SA_ContactStatus_ContactType_g_tc_members[6]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_SA_ContactStatus_ContactType_g_tc_members[6]._annotations._minValue._u.double_value = 0ULL;
    UMAA_SA_ContactStatus_ContactType_g_tc_members[6]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_SA_ContactStatus_ContactType_g_tc_members[6]._annotations._maxValue._u.double_value = 401056000ULL;
    UMAA_SA_ContactStatus_ContactType_g_tc_members[9]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_SA_ContactStatus_ContactType_g_tc_members[9]._annotations._defaultValue._u.double_value = 0.0;
    UMAA_SA_ContactStatus_ContactType_g_tc_members[9]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_SA_ContactStatus_ContactType_g_tc_members[9]._annotations._minValue._u.double_value = -3.1415926535897931264626433832795;
    UMAA_SA_ContactStatus_ContactType_g_tc_members[9]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_SA_ContactStatus_ContactType_g_tc_members[9]._annotations._maxValue._u.double_value = 3.1415926535897932384626433832795;
    UMAA_SA_ContactStatus_ContactType_g_tc_members[10]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_SA_ContactStatus_ContactType_g_tc_members[10]._annotations._minValue._u.double_value = 0ULL;
    UMAA_SA_ContactStatus_ContactType_g_tc_members[10]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_SA_ContactStatus_ContactType_g_tc_members[10]._annotations._maxValue._u.double_value = 401056000ULL;
    UMAA_SA_ContactStatus_ContactType_g_tc_members[11]._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
    UMAA_SA_ContactStatus_ContactType_g_tc_members[11]._annotations._defaultValue._u.enumerated_value = 0;
    UMAA_SA_ContactStatus_ContactType_g_tc_members[12]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_SA_ContactStatus_ContactType_g_tc_members[12]._annotations._minValue._u.double_value = 0ULL;
    UMAA_SA_ContactStatus_ContactType_g_tc_members[12]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_SA_ContactStatus_ContactType_g_tc_members[12]._annotations._maxValue._u.double_value = 401056000ULL;
    UMAA_SA_ContactStatus_ContactType_g_tc_members[14]._annotations._defaultValue._d = RTI_XCDR_TK_STRING;
    UMAA_SA_ContactStatus_ContactType_g_tc_members[14]._annotations._defaultValue._u.string_value = (DDS_Char *) "";
    UMAA_SA_ContactStatus_ContactType_g_tc_members[17]._annotations._defaultValue._d = RTI_XCDR_TK_STRING;
    UMAA_SA_ContactStatus_ContactType_g_tc_members[17]._annotations._defaultValue._u.string_value = (DDS_Char *) "";
    UMAA_SA_ContactStatus_ContactType_g_tc_members[19]._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
    UMAA_SA_ContactStatus_ContactType_g_tc_members[19]._annotations._defaultValue._u.enumerated_value = 0;
    UMAA_SA_ContactStatus_ContactType_g_tc_members[20]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_SA_ContactStatus_ContactType_g_tc_members[20]._annotations._defaultValue._u.double_value = 0.0;
    UMAA_SA_ContactStatus_ContactType_g_tc_members[20]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_SA_ContactStatus_ContactType_g_tc_members[20]._annotations._minValue._u.double_value = 0ULL;
    UMAA_SA_ContactStatus_ContactType_g_tc_members[20]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_SA_ContactStatus_ContactType_g_tc_members[20]._annotations._maxValue._u.double_value = 200ULL;
    UMAA_SA_ContactStatus_ContactType_g_tc_members[23]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_SA_ContactStatus_ContactType_g_tc_members[23]._annotations._minValue._u.double_value = 0ULL;
    UMAA_SA_ContactStatus_ContactType_g_tc_members[23]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_SA_ContactStatus_ContactType_g_tc_members[23]._annotations._maxValue._u.double_value = 401056000ULL;

    UMAA_SA_ContactStatus_ContactType_g_tc._data._sampleAccessInfo =
    UMAA_SA_ContactStatus_ContactType_get_sample_access_info();
    UMAA_SA_ContactStatus_ContactType_g_tc._data._typePlugin =
    UMAA_SA_ContactStatus_ContactType_get_type_plugin_info();    

    return &UMAA_SA_ContactStatus_ContactType_g_tc;
}

#define TSeq UMAA_SA_ContactStatus_ContactTypeSeq
#define T UMAA_SA_ContactStatus_ContactType
#include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
#undef T
#undef TSeq

RTIXCdrSampleAccessInfo *UMAA_SA_ContactStatus_ContactType_get_sample_seq_access_info()
{
    static RTIXCdrSampleAccessInfo UMAA_SA_ContactStatus_ContactType_g_seqSampleAccessInfo = {
        RTI_XCDR_TYPE_BINDING_CPP, \
        {sizeof(UMAA_SA_ContactStatus_ContactTypeSeq),0,0,0}, \
        RTI_XCDR_FALSE, \
        DDS_Sequence_get_member_value_pointer, \
        UMAA_SA_ContactStatus_ContactTypeSeq_set_member_element_count, \
        NULL, \
        NULL, \
        NULL \
    };

    return &UMAA_SA_ContactStatus_ContactType_g_seqSampleAccessInfo;
}

RTIXCdrSampleAccessInfo *UMAA_SA_ContactStatus_ContactType_get_sample_access_info()
{
    static RTIBool is_initialized = RTI_FALSE;

    UMAA_SA_ContactStatus_ContactType *sample;

    static RTIXCdrMemberAccessInfo UMAA_SA_ContactStatus_ContactType_g_memberAccessInfos[25] =
    {RTIXCdrMemberAccessInfo_INITIALIZER};

    static RTIXCdrSampleAccessInfo UMAA_SA_ContactStatus_ContactType_g_sampleAccessInfo = 
    RTIXCdrSampleAccessInfo_INITIALIZER;

    if (is_initialized) {
        return (RTIXCdrSampleAccessInfo*) &UMAA_SA_ContactStatus_ContactType_g_sampleAccessInfo;
    }

    RTIXCdrHeap_allocateStruct(
        &sample, 
        UMAA_SA_ContactStatus_ContactType);
    if (sample == NULL) {
        return NULL;
    }

    UMAA_SA_ContactStatus_ContactType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->area - (char *)sample);

    UMAA_SA_ContactStatus_ContactType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->callSign - (char *)sample);

    UMAA_SA_ContactStatus_ContactType_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->contactName - (char *)sample);

    UMAA_SA_ContactStatus_ContactType_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->course - (char *)sample);

    UMAA_SA_ContactStatus_ContactType_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->CPA - (char *)sample);

    UMAA_SA_ContactStatus_ContactType_g_memberAccessInfos[5].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->CPATime - (char *)sample);

    UMAA_SA_ContactStatus_ContactType_g_memberAccessInfos[6].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->diameter - (char *)sample);

    UMAA_SA_ContactStatus_ContactType_g_memberAccessInfos[7].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->elevation - (char *)sample);

    UMAA_SA_ContactStatus_ContactType_g_memberAccessInfos[8].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->elevationError - (char *)sample);

    UMAA_SA_ContactStatus_ContactType_g_memberAccessInfos[9].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->heading - (char *)sample);

    UMAA_SA_ContactStatus_ContactType_g_memberAccessInfos[10].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->height - (char *)sample);

    UMAA_SA_ContactStatus_ContactType_g_memberAccessInfos[11].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->kind - (char *)sample);

    UMAA_SA_ContactStatus_ContactType_g_memberAccessInfos[12].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->length - (char *)sample);

    UMAA_SA_ContactStatus_ContactType_g_memberAccessInfos[13].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->MMSINumber - (char *)sample);

    UMAA_SA_ContactStatus_ContactType_g_memberAccessInfos[14].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->originator - (char *)sample);

    UMAA_SA_ContactStatus_ContactType_g_memberAccessInfos[15].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->position - (char *)sample);

    UMAA_SA_ContactStatus_ContactType_g_memberAccessInfos[16].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->positionCovariance - (char *)sample);

    UMAA_SA_ContactStatus_ContactType_g_memberAccessInfos[17].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->SIDC - (char *)sample);

    UMAA_SA_ContactStatus_ContactType_g_memberAccessInfos[18].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->source - (char *)sample);

    UMAA_SA_ContactStatus_ContactType_g_memberAccessInfos[19].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->sourceIndicator - (char *)sample);

    UMAA_SA_ContactStatus_ContactType_g_memberAccessInfos[20].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->speedOverGround - (char *)sample);

    UMAA_SA_ContactStatus_ContactType_g_memberAccessInfos[21].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->timeFirstAcquired - (char *)sample);

    UMAA_SA_ContactStatus_ContactType_g_memberAccessInfos[22].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->timeLost - (char *)sample);

    UMAA_SA_ContactStatus_ContactType_g_memberAccessInfos[23].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->width - (char *)sample);

    UMAA_SA_ContactStatus_ContactType_g_memberAccessInfos[24].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->featureID - (char *)sample);

    UMAA_SA_ContactStatus_ContactType_g_sampleAccessInfo.memberAccessInfos = 
    UMAA_SA_ContactStatus_ContactType_g_memberAccessInfos;

    {
        size_t candidateTypeSize = sizeof(UMAA_SA_ContactStatus_ContactType);

        if (candidateTypeSize > RTIXCdrLong_MAX) {
            UMAA_SA_ContactStatus_ContactType_g_sampleAccessInfo.typeSize[0] =
            RTIXCdrLong_MAX;
        } else {
            UMAA_SA_ContactStatus_ContactType_g_sampleAccessInfo.typeSize[0] =
            (RTIXCdrUnsignedLong) candidateTypeSize;
        }
    }

    UMAA_SA_ContactStatus_ContactType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
    RTI_XCDR_TRUE;

    UMAA_SA_ContactStatus_ContactType_g_sampleAccessInfo.getMemberValuePointerFcn = 
    UMAA_SA_ContactStatus_ContactType_get_member_value_pointer;

    UMAA_SA_ContactStatus_ContactType_g_sampleAccessInfo.languageBinding = 
    RTI_XCDR_TYPE_BINDING_CPP ;

    RTIXCdrHeap_freeStruct(sample);
    is_initialized = RTI_TRUE;
    return (RTIXCdrSampleAccessInfo*) &UMAA_SA_ContactStatus_ContactType_g_sampleAccessInfo;
}
RTIXCdrTypePlugin *UMAA_SA_ContactStatus_ContactType_get_type_plugin_info()
{
    static RTIXCdrTypePlugin UMAA_SA_ContactStatus_ContactType_g_typePlugin = 
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
        UMAA_SA_ContactStatus_ContactType_initialize_ex,
        NULL,
        (RTIXCdrTypePluginFinalizeSampleFunction)
        UMAA_SA_ContactStatus_ContactType_finalize_w_return,
        NULL,
        NULL
    };

    return &UMAA_SA_ContactStatus_ContactType_g_typePlugin;
}
#endif

RTIBool UMAA_SA_ContactStatus_ContactType_initialize(
    UMAA_SA_ContactStatus_ContactType* sample)
{
    return UMAA_SA_ContactStatus_ContactType_initialize_ex(
        sample, 
        RTI_TRUE, 
        RTI_TRUE);
}
RTIBool UMAA_SA_ContactStatus_ContactType_initialize_w_params(
    UMAA_SA_ContactStatus_ContactType *sample,
    const struct DDS_TypeAllocationParams_t *allocParams)
{
    void* buffer = NULL;
    if (buffer) {} /* To avoid warnings */

    if (sample == NULL) {
        return RTI_FALSE;
    }
    if (allocParams == NULL) {
        return RTI_FALSE;
    }

    if (!UMAA_Common_Measurement_Polygon_initialize_w_params(
        &sample->area,
        allocParams)) {
        return RTI_FALSE;
    }
    if (!allocParams->allocate_optional_members) {
        sample->callSign=NULL;
    } else {   

        if (allocParams->allocate_memory) {
            sample->callSign = DDS_String_alloc((1023L));
            if (sample->callSign != NULL) {
                RTIOsapiUtility_unusedReturnValue(
                    RTICdrType_copyStringEx(
                        &sample->callSign,
                        "",
                        (1023L),
                        RTI_FALSE),
                        RTIBool);
            }
            if (sample->callSign == NULL) {
                return RTI_FALSE;
            }
        } else {
            if (sample->callSign != NULL) {
                RTIOsapiUtility_unusedReturnValue(
                    RTICdrType_copyStringEx(
                        &sample->callSign,
                        "",
                        (1023L),
                        RTI_FALSE),
                        RTIBool);
                if (sample->callSign == NULL) {
                    return RTI_FALSE;
                }
            }
        }

    }

    if (allocParams->allocate_memory) {
        sample->contactName = DDS_String_alloc((1023L));
        if (sample->contactName != NULL) {
            RTIOsapiUtility_unusedReturnValue(
                RTICdrType_copyStringEx(
                    &sample->contactName,
                    "",
                    (1023L),
                    RTI_FALSE),
                    RTIBool);
        }
        if (sample->contactName == NULL) {
            return RTI_FALSE;
        }
    } else {
        if (sample->contactName != NULL) {
            RTIOsapiUtility_unusedReturnValue(
                RTICdrType_copyStringEx(
                    &sample->contactName,
                    "",
                    (1023L),
                    RTI_FALSE),
                    RTIBool);
            if (sample->contactName == NULL) {
                return RTI_FALSE;
            }
        }
    }

    sample->course = 0.0;

    if (!allocParams->allocate_optional_members) {
        sample->CPA=NULL;
    } else {   
        if (allocParams->allocate_memory) {
            sample->CPA = new (std::nothrow)   UMAA_Common_Measurement_Position2D ();
            if (sample->CPA==NULL) {
                return RTI_FALSE;
            }
            if (!UMAA_Common_Measurement_Position2D_initialize_w_params(
                sample->CPA,
                allocParams)) {
                return RTI_FALSE;
            }
        } else {
            if (sample->CPA!=NULL) {
                if (!UMAA_Common_Measurement_Position2D_initialize_w_params(
                    sample->CPA,
                    allocParams)) {
                    return RTI_FALSE;
                }
            }   
        }
    }
    if (!allocParams->allocate_optional_members) {
        sample->CPATime=NULL;
    } else {   
        if (allocParams->allocate_memory) {
            sample->CPATime = new (std::nothrow)   UMAA_Common_Measurement_DateTime ();
            if (sample->CPATime==NULL) {
                return RTI_FALSE;
            }
            if (!UMAA_Common_Measurement_DateTime_initialize_w_params(
                sample->CPATime,
                allocParams)) {
                return RTI_FALSE;
            }
        } else {
            if (sample->CPATime!=NULL) {
                if (!UMAA_Common_Measurement_DateTime_initialize_w_params(
                    sample->CPATime,
                    allocParams)) {
                    return RTI_FALSE;
                }
            }   
        }
    }
    sample->diameter = 0.0;

    if (!UMAA_Common_Measurement_Altitude_MSL_initialize_w_params(
        &sample->elevation,
        allocParams)) {
        return RTI_FALSE;
    }
    if (!UMAA_Common_Measurement_RMSDistanceErrorType_initialize_w_params(
        &sample->elevationError,
        allocParams)) {
        return RTI_FALSE;
    }
    sample->heading = 0.0;

    if (!allocParams->allocate_optional_members) {
        sample->height=NULL;
    } else {   
        if (allocParams->allocate_memory){
            sample->height = new (std::nothrow)   DDS_Double ();
            if (sample->height==NULL) {
                return RTI_FALSE;
            }
            if (!RTICdrType_initDouble(sample->height)) {
                return RTI_FALSE;
            }

        } else {

            if (sample->height != NULL) {
                if (!RTICdrType_initDouble(sample->height)) {
                    return RTI_FALSE;
                }
            }

        }

    }
    sample->kind = UMAA_Common_MaritimeEnumeration_FeatureKindEnumType_FeatureKindEnumType_CONTACT;
    if (!allocParams->allocate_optional_members) {
        sample->length=NULL;
    } else {   
        if (allocParams->allocate_memory){
            sample->length = new (std::nothrow)   DDS_Double ();
            if (sample->length==NULL) {
                return RTI_FALSE;
            }
            if (!RTICdrType_initDouble(sample->length)) {
                return RTI_FALSE;
            }

        } else {

            if (sample->length != NULL) {
                if (!RTICdrType_initDouble(sample->length)) {
                    return RTI_FALSE;
                }
            }

        }

    }
    if (!allocParams->allocate_optional_members) {
        sample->MMSINumber=NULL;
    } else {   

        if (allocParams->allocate_memory) {
            sample->MMSINumber = DDS_String_alloc((9L));
            if (sample->MMSINumber != NULL) {
                RTIOsapiUtility_unusedReturnValue(
                    RTICdrType_copyStringEx(
                        &sample->MMSINumber,
                        "",
                        (9L),
                        RTI_FALSE),
                        RTIBool);
            }
            if (sample->MMSINumber == NULL) {
                return RTI_FALSE;
            }
        } else {
            if (sample->MMSINumber != NULL) {
                RTIOsapiUtility_unusedReturnValue(
                    RTICdrType_copyStringEx(
                        &sample->MMSINumber,
                        "",
                        (9L),
                        RTI_FALSE),
                        RTIBool);
                if (sample->MMSINumber == NULL) {
                    return RTI_FALSE;
                }
            }
        }

    }

    if (allocParams->allocate_memory) {
        sample->originator = DDS_String_alloc((1023L));
        if (sample->originator != NULL) {
            RTIOsapiUtility_unusedReturnValue(
                RTICdrType_copyStringEx(
                    &sample->originator,
                    "",
                    (1023L),
                    RTI_FALSE),
                    RTIBool);
        }
        if (sample->originator == NULL) {
            return RTI_FALSE;
        }
    } else {
        if (sample->originator != NULL) {
            RTIOsapiUtility_unusedReturnValue(
                RTICdrType_copyStringEx(
                    &sample->originator,
                    "",
                    (1023L),
                    RTI_FALSE),
                    RTIBool);
            if (sample->originator == NULL) {
                return RTI_FALSE;
            }
        }
    }

    if (!UMAA_Common_Measurement_Position2D_initialize_w_params(
        &sample->position,
        allocParams)) {
        return RTI_FALSE;
    }
    if (!UMAA_Common_Measurement_CovariancePositionPositionType_initialize_w_params(
        &sample->positionCovariance,
        allocParams)) {
        return RTI_FALSE;
    }

    if (allocParams->allocate_memory) {
        sample->SIDC = DDS_String_alloc((1023L));
        if (sample->SIDC != NULL) {
            RTIOsapiUtility_unusedReturnValue(
                RTICdrType_copyStringEx(
                    &sample->SIDC,
                    "",
                    (1023L),
                    RTI_FALSE),
                    RTIBool);
        }
        if (sample->SIDC == NULL) {
            return RTI_FALSE;
        }
    } else {
        if (sample->SIDC != NULL) {
            RTIOsapiUtility_unusedReturnValue(
                RTICdrType_copyStringEx(
                    &sample->SIDC,
                    "",
                    (1023L),
                    RTI_FALSE),
                    RTIBool);
            if (sample->SIDC == NULL) {
                return RTI_FALSE;
            }
        }
    }

    if (allocParams->allocate_memory) {
        if(!UMAA_Common_Measurement_NumericGUIDSeq_initialize(&sample->source )){
            return RTI_FALSE;
        }
        if(!UMAA_Common_Measurement_NumericGUIDSeq_set_element_allocation_params(&sample->source ,allocParams)){
            return RTI_FALSE;
        }
        if(!UMAA_Common_Measurement_NumericGUIDSeq_set_absolute_maximum(&sample->source , (100L))){
            return RTI_FALSE;
        }
        if (!UMAA_Common_Measurement_NumericGUIDSeq_set_maximum(
            &sample->source
            ,
            (100L))) {
            return RTI_FALSE;
        }
    } else { 
        if(!UMAA_Common_Measurement_NumericGUIDSeq_set_length(&sample->source, 0)){
            return RTI_FALSE;
        }    
    }
    sample->sourceIndicator = UMAA_Common_MaritimeEnumeration_SourceIndicatorEnumType_SourceIndicatorEnumType_ACTUAL;
    sample->speedOverGround = 0.0;

    if (!UMAA_Common_Measurement_DateTime_initialize_w_params(
        &sample->timeFirstAcquired,
        allocParams)) {
        return RTI_FALSE;
    }
    if (!allocParams->allocate_optional_members) {
        sample->timeLost=NULL;
    } else {   
        if (allocParams->allocate_memory) {
            sample->timeLost = new (std::nothrow)   UMAA_Common_Measurement_DateTime ();
            if (sample->timeLost==NULL) {
                return RTI_FALSE;
            }
            if (!UMAA_Common_Measurement_DateTime_initialize_w_params(
                sample->timeLost,
                allocParams)) {
                return RTI_FALSE;
            }
        } else {
            if (sample->timeLost!=NULL) {
                if (!UMAA_Common_Measurement_DateTime_initialize_w_params(
                    sample->timeLost,
                    allocParams)) {
                    return RTI_FALSE;
                }
            }   
        }
    }
    if (!allocParams->allocate_optional_members) {
        sample->width=NULL;
    } else {   
        if (allocParams->allocate_memory){
            sample->width = new (std::nothrow)   DDS_Double ();
            if (sample->width==NULL) {
                return RTI_FALSE;
            }
            if (!RTICdrType_initDouble(sample->width)) {
                return RTI_FALSE;
            }

        } else {

            if (sample->width != NULL) {
                if (!RTICdrType_initDouble(sample->width)) {
                    return RTI_FALSE;
                }
            }

        }

    }
    if (!UMAA_Common_Measurement_NumericGUID_initialize_w_params(
        &sample->featureID,
        allocParams)) {
        return RTI_FALSE;
    }
    return RTI_TRUE;
}
RTIBool UMAA_SA_ContactStatus_ContactType_initialize_ex(
    UMAA_SA_ContactStatus_ContactType *sample,
    RTIBool allocatePointers, 
    RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return UMAA_SA_ContactStatus_ContactType_initialize_w_params(
        sample,
        &allocParams);
}

RTIBool UMAA_SA_ContactStatus_ContactType_finalize_w_return(
    UMAA_SA_ContactStatus_ContactType* sample)
{
    UMAA_SA_ContactStatus_ContactType_finalize_ex(sample, RTI_TRUE);

    return RTI_TRUE;
}

void UMAA_SA_ContactStatus_ContactType_finalize(
    UMAA_SA_ContactStatus_ContactType* sample)
{  
    UMAA_SA_ContactStatus_ContactType_finalize_ex(
        sample, 
        RTI_TRUE);
}

void UMAA_SA_ContactStatus_ContactType_finalize_ex(
    UMAA_SA_ContactStatus_ContactType *sample,
    RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    UMAA_SA_ContactStatus_ContactType_finalize_w_params(
        sample,
        &deallocParams);
}

void UMAA_SA_ContactStatus_ContactType_finalize_w_params(
    UMAA_SA_ContactStatus_ContactType *sample,
    const struct DDS_TypeDeallocationParams_t *deallocParams)
{
    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

    UMAA_Common_Measurement_Polygon_finalize_w_params(
        &sample->area,
        deallocParams);

    if (deallocParams->delete_optional_members) {
        if (sample->callSign != NULL) {
            DDS_String_free(sample->callSign);
            sample->callSign=NULL;

        }
    }
    if (sample->contactName != NULL) {
        DDS_String_free(sample->contactName);
        sample->contactName=NULL;

    }

    if (deallocParams->delete_optional_members) {
        if (sample->CPA != NULL) {
            UMAA_Common_Measurement_Position2D_finalize_w_params(
                sample->CPA,
                deallocParams);

            delete  sample->CPA;
            sample->CPA=NULL;
        }
    }
    if (deallocParams->delete_optional_members) {
        if (sample->CPATime != NULL) {
            UMAA_Common_Measurement_DateTime_finalize_w_params(
                sample->CPATime,
                deallocParams);

            delete  sample->CPATime;
            sample->CPATime=NULL;
        }
    }

    UMAA_Common_Measurement_Altitude_MSL_finalize_w_params(
        &sample->elevation,
        deallocParams);

    UMAA_Common_Measurement_RMSDistanceErrorType_finalize_w_params(
        &sample->elevationError,
        deallocParams);

    if (deallocParams->delete_optional_members) {
        if (sample->height != NULL) {

            delete  sample->height;
            sample->height=NULL;
        }
    }
    UMAA_Common_MaritimeEnumeration_FeatureKindEnumType_FeatureKindEnumType_finalize_w_params(
        &sample->kind,
        deallocParams);

    if (deallocParams->delete_optional_members) {
        if (sample->length != NULL) {

            delete  sample->length;
            sample->length=NULL;
        }
    }
    if (deallocParams->delete_optional_members) {
        if (sample->MMSINumber != NULL) {
            DDS_String_free(sample->MMSINumber);
            sample->MMSINumber=NULL;

        }
    }
    if (sample->originator != NULL) {
        DDS_String_free(sample->originator);
        sample->originator=NULL;

    }
    UMAA_Common_Measurement_Position2D_finalize_w_params(
        &sample->position,
        deallocParams);

    UMAA_Common_Measurement_CovariancePositionPositionType_finalize_w_params(
        &sample->positionCovariance,
        deallocParams);

    if (sample->SIDC != NULL) {
        DDS_String_free(sample->SIDC);
        sample->SIDC=NULL;

    }
    RTIOsapiUtility_unusedReturnValue(UMAA_Common_Measurement_NumericGUIDSeq_set_element_deallocation_params(
        &sample->source,deallocParams), 
        DDS_Boolean);
    RTIOsapiUtility_unusedReturnValue(
        UMAA_Common_Measurement_NumericGUIDSeq_finalize(
            &sample->source),
            DDS_Boolean);

    UMAA_Common_MaritimeEnumeration_SourceIndicatorEnumType_SourceIndicatorEnumType_finalize_w_params(
        &sample->sourceIndicator,
        deallocParams);

    UMAA_Common_Measurement_DateTime_finalize_w_params(
        &sample->timeFirstAcquired,
        deallocParams);

    if (deallocParams->delete_optional_members) {
        if (sample->timeLost != NULL) {
            UMAA_Common_Measurement_DateTime_finalize_w_params(
                sample->timeLost,
                deallocParams);

            delete  sample->timeLost;
            sample->timeLost=NULL;
        }
    }
    if (deallocParams->delete_optional_members) {
        if (sample->width != NULL) {

            delete  sample->width;
            sample->width=NULL;
        }
    }
    UMAA_Common_Measurement_NumericGUID_finalize_w_params(
        &sample->featureID,
        deallocParams);

}

void UMAA_SA_ContactStatus_ContactType_finalize_optional_members(
    UMAA_SA_ContactStatus_ContactType* sample, RTIBool deletePointers)
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

    UMAA_Common_Measurement_Polygon_finalize_optional_members(&sample->area, deallocParams->delete_pointers);
    if (sample->callSign != NULL) {
        DDS_String_free(sample->callSign);
        sample->callSign=NULL;

    }
    if (sample->CPA != NULL) {
        UMAA_Common_Measurement_Position2D_finalize_w_params(
            sample->CPA,
            deallocParams);

        delete  sample->CPA;
        sample->CPA=NULL;
    }
    if (sample->CPATime != NULL) {
        UMAA_Common_Measurement_DateTime_finalize_w_params(
            sample->CPATime,
            deallocParams);

        delete  sample->CPATime;
        sample->CPATime=NULL;
    }
    if (sample->height != NULL) {

        delete  sample->height;
        sample->height=NULL;
    }
    if (sample->length != NULL) {

        delete  sample->length;
        sample->length=NULL;
    }
    if (sample->MMSINumber != NULL) {
        DDS_String_free(sample->MMSINumber);
        sample->MMSINumber=NULL;

    }
    UMAA_Common_Measurement_CovariancePositionPositionType_finalize_optional_members(&sample->positionCovariance, deallocParams->delete_pointers);
    if (sample->timeLost != NULL) {
        UMAA_Common_Measurement_DateTime_finalize_w_params(
            sample->timeLost,
            deallocParams);

        delete  sample->timeLost;
        sample->timeLost=NULL;
    }
    if (sample->width != NULL) {

        delete  sample->width;
        sample->width=NULL;
    }
}

RTIBool UMAA_SA_ContactStatus_ContactType_copy(
    UMAA_SA_ContactStatus_ContactType* dst,
    const UMAA_SA_ContactStatus_ContactType* src)
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

        if (!UMAA_Common_Measurement_Polygon_copy(
            &dst->area,
            (const UMAA_Common_Measurement_Polygon*)&src->area)) {
            return RTI_FALSE;
        } 
        if (src->callSign!=NULL) {
            if (dst->callSign==NULL) {
                dst->callSign= DDS_String_alloc ((1023L));
                ;
                if (dst->callSign == NULL) {
                    return RTI_FALSE;
                }       
            }
            if (!RTICdrType_copyStringEx (
                &dst->callSign
                ,
                src->callSign, 
                (1023L) + 1,
                RTI_FALSE)){
                return RTI_FALSE;
            }
        } else {
            if (dst->callSign != NULL) {
                DDS_String_free(dst->callSign);   
                dst->callSign = NULL;     
            }
        }
        if (!RTICdrType_copyStringEx (
            &dst->contactName
            ,
            src->contactName, 
            (1023L) + 1,
            RTI_FALSE)){
            return RTI_FALSE;
        }
        if (!RTICdrType_copyDouble (
            &dst->course, 
            &src->course)) { 
            return RTI_FALSE;
        }
        if (src->CPA!=NULL) {
            if (dst->CPA==NULL) {

                dst->CPA = new (std::nothrow)   UMAA_Common_Measurement_Position2D ();
                if (dst->CPA==NULL) {
                    return RTI_FALSE;
                }

                if (!UMAA_Common_Measurement_Position2D_initialize_ex(
                    dst->CPA, 
                    RTI_TRUE, 
                    RTI_TRUE)) {
                    return RTI_FALSE;
                }
            }
            if (!UMAA_Common_Measurement_Position2D_copy(
                dst->CPA,
                (const UMAA_Common_Measurement_Position2D*)src->CPA)) {
                return RTI_FALSE;
            } 
        } else {
            if (dst->CPA != NULL) {
                UMAA_Common_Measurement_Position2D_finalize_w_params(dst->CPA, deallocParams);
                delete  dst->CPA;
                dst->CPA=NULL;
            }
        }
        if (src->CPATime!=NULL) {
            if (dst->CPATime==NULL) {

                dst->CPATime = new (std::nothrow)   UMAA_Common_Measurement_DateTime ();
                if (dst->CPATime==NULL) {
                    return RTI_FALSE;
                }

                if (!UMAA_Common_Measurement_DateTime_initialize_ex(
                    dst->CPATime, 
                    RTI_TRUE, 
                    RTI_TRUE)) {
                    return RTI_FALSE;
                }
            }
            if (!UMAA_Common_Measurement_DateTime_copy(
                dst->CPATime,
                (const UMAA_Common_Measurement_DateTime*)src->CPATime)) {
                return RTI_FALSE;
            } 
        } else {
            if (dst->CPATime != NULL) {
                UMAA_Common_Measurement_DateTime_finalize_w_params(dst->CPATime, deallocParams);
                delete  dst->CPATime;
                dst->CPATime=NULL;
            }
        }
        if (!RTICdrType_copyDouble (
            &dst->diameter, 
            &src->diameter)) { 
            return RTI_FALSE;
        }
        if (!UMAA_Common_Measurement_Altitude_MSL_copy(
            &dst->elevation,
            (const UMAA_Common_Measurement_Altitude_MSL*)&src->elevation)) {
            return RTI_FALSE;
        } 
        if (!UMAA_Common_Measurement_RMSDistanceErrorType_copy(
            &dst->elevationError,
            (const UMAA_Common_Measurement_RMSDistanceErrorType*)&src->elevationError)) {
            return RTI_FALSE;
        } 
        if (!RTICdrType_copyDouble (
            &dst->heading, 
            &src->heading)) { 
            return RTI_FALSE;
        }
        if (src->height!=NULL) {
            if (dst->height==NULL) {

                dst->height = new (std::nothrow)   DDS_Double ();
                if (dst->height==NULL) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initDouble(dst->height)) {
                    return RTI_FALSE;
                }
            }
            if (!RTICdrType_copyDouble (
                dst->height, 
                src->height)) { 
                return RTI_FALSE;
            }
        } else {
            if (dst->height != NULL) {
                delete  dst->height;
                dst->height=NULL;
            }
        }
        if (!UMAA_Common_MaritimeEnumeration_FeatureKindEnumType_FeatureKindEnumType_copy(
            &dst->kind,
            (const UMAA_Common_MaritimeEnumeration_FeatureKindEnumType_FeatureKindEnumType*)&src->kind)) {
            return RTI_FALSE;
        } 
        if (src->length!=NULL) {
            if (dst->length==NULL) {

                dst->length = new (std::nothrow)   DDS_Double ();
                if (dst->length==NULL) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initDouble(dst->length)) {
                    return RTI_FALSE;
                }
            }
            if (!RTICdrType_copyDouble (
                dst->length, 
                src->length)) { 
                return RTI_FALSE;
            }
        } else {
            if (dst->length != NULL) {
                delete  dst->length;
                dst->length=NULL;
            }
        }
        if (src->MMSINumber!=NULL) {
            if (dst->MMSINumber==NULL) {
                dst->MMSINumber= DDS_String_alloc ((9L));
                ;
                if (dst->MMSINumber == NULL) {
                    return RTI_FALSE;
                }       
            }
            if (!RTICdrType_copyStringEx (
                &dst->MMSINumber
                ,
                src->MMSINumber, 
                (9L) + 1,
                RTI_FALSE)){
                return RTI_FALSE;
            }
        } else {
            if (dst->MMSINumber != NULL) {
                DDS_String_free(dst->MMSINumber);   
                dst->MMSINumber = NULL;     
            }
        }
        if (!RTICdrType_copyStringEx (
            &dst->originator
            ,
            src->originator, 
            (1023L) + 1,
            RTI_FALSE)){
            return RTI_FALSE;
        }
        if (!UMAA_Common_Measurement_Position2D_copy(
            &dst->position,
            (const UMAA_Common_Measurement_Position2D*)&src->position)) {
            return RTI_FALSE;
        } 
        if (!UMAA_Common_Measurement_CovariancePositionPositionType_copy(
            &dst->positionCovariance,
            (const UMAA_Common_Measurement_CovariancePositionPositionType*)&src->positionCovariance)) {
            return RTI_FALSE;
        } 
        if (!RTICdrType_copyStringEx (
            &dst->SIDC
            ,
            src->SIDC, 
            (1023L) + 1,
            RTI_FALSE)){
            return RTI_FALSE;
        }
        if (!UMAA_Common_Measurement_NumericGUIDSeq_copy(
            &dst->source ,
            &src->source )) {
            return RTI_FALSE;
        }
        if (!UMAA_Common_MaritimeEnumeration_SourceIndicatorEnumType_SourceIndicatorEnumType_copy(
            &dst->sourceIndicator,
            (const UMAA_Common_MaritimeEnumeration_SourceIndicatorEnumType_SourceIndicatorEnumType*)&src->sourceIndicator)) {
            return RTI_FALSE;
        } 
        if (!RTICdrType_copyDouble (
            &dst->speedOverGround, 
            &src->speedOverGround)) { 
            return RTI_FALSE;
        }
        if (!UMAA_Common_Measurement_DateTime_copy(
            &dst->timeFirstAcquired,
            (const UMAA_Common_Measurement_DateTime*)&src->timeFirstAcquired)) {
            return RTI_FALSE;
        } 
        if (src->timeLost!=NULL) {
            if (dst->timeLost==NULL) {

                dst->timeLost = new (std::nothrow)   UMAA_Common_Measurement_DateTime ();
                if (dst->timeLost==NULL) {
                    return RTI_FALSE;
                }

                if (!UMAA_Common_Measurement_DateTime_initialize_ex(
                    dst->timeLost, 
                    RTI_TRUE, 
                    RTI_TRUE)) {
                    return RTI_FALSE;
                }
            }
            if (!UMAA_Common_Measurement_DateTime_copy(
                dst->timeLost,
                (const UMAA_Common_Measurement_DateTime*)src->timeLost)) {
                return RTI_FALSE;
            } 
        } else {
            if (dst->timeLost != NULL) {
                UMAA_Common_Measurement_DateTime_finalize_w_params(dst->timeLost, deallocParams);
                delete  dst->timeLost;
                dst->timeLost=NULL;
            }
        }
        if (src->width!=NULL) {
            if (dst->width==NULL) {

                dst->width = new (std::nothrow)   DDS_Double ();
                if (dst->width==NULL) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initDouble(dst->width)) {
                    return RTI_FALSE;
                }
            }
            if (!RTICdrType_copyDouble (
                dst->width, 
                src->width)) { 
                return RTI_FALSE;
            }
        } else {
            if (dst->width != NULL) {
                delete  dst->width;
                dst->width=NULL;
            }
        }
        if (!UMAA_Common_Measurement_NumericGUID_copy(
            &dst->featureID,
            (const UMAA_Common_Measurement_NumericGUID*)&src->featureID)) {
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
* Configure and implement 'UMAA_SA_ContactStatus_ContactType' sequence class.
*/
#define T UMAA_SA_ContactStatus_ContactType
#define TSeq UMAA_SA_ContactStatus_ContactTypeSeq

#define T_initialize_w_params UMAA_SA_ContactStatus_ContactType_initialize_w_params

#define T_finalize_w_params   UMAA_SA_ContactStatus_ContactType_finalize_w_params
#define T_copy       UMAA_SA_ContactStatus_ContactType_copy

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
        const RTIXCdrTypeCode * type_code< UMAA_SA_ContactStatus_ContactType>::get() 
        {
            return (const RTIXCdrTypeCode *) UMAA_SA_ContactStatus_ContactType_get_typecode();
        }

    } 
}
#endif
