

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from SituationalSignalSpecsReportType.idl 
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

#include "SituationalSignalSpecsReportType.h"

#ifndef NDDS_STANDALONE_TYPE
#include "SituationalSignalSpecsReportTypePlugin.h"
#endif

#include <new>

/* ========================================================================= */
const char *UMAA_EO_SituationalSignalSpecs_SituationalSignalSpecsReportTypeTYPENAME = "UMAA::EO::SituationalSignalSpecs::SituationalSignalSpecsReportType";

#ifndef NDDS_STANDALONE_TYPE
DDS_TypeCode * UMAA_EO_SituationalSignalSpecs_SituationalSignalSpecsReportType_get_typecode(void)
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode_Member UMAA_EO_SituationalSignalSpecs_SituationalSignalSpecsReportType_g_tc_members[27]=
    {

        {
            (char *)"agreeToBeOvertaken",/* Member name */
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
            (char *)"alteringCourseToPort",/* Member name */
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
            (char *)"alteringCourseToStarboard",/* Member name */
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
            (char *)"engagedInMineClearanceOperations",/* Member name */
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
            (char *)"inDistressNeedAssistance",/* Member name */
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
            (char *)"inSightCollisionWarning",/* Member name */
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
            (char *)"maneuverabilityRestricted",/* Member name */
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
            (char *)"operatingAsternPropulsion",/* Member name */
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
            (char *)"outOfSightCollisionWarning",/* Member name */
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
            (char *)"toOvertakeOnPortSide",/* Member name */
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
            (char *)"toOvertakeOnstarboardSide",/* Member name */
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
            (char *)"towingAndPushingAlongsideOrAhead",/* Member name */
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
            (char *)"towingAndPushingBehind",/* Member name */
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
            (char *)"vesselAground",/* Member name */
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
            (char *)"vesselAnchored",/* Member name */
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
            (char *)"vesselBeingPushed",/* Member name */
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
            (char *)"vesselBeingTowedAlongside",/* Member name */
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
            (char *)"vesselBeingTowedBehind",/* Member name */
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
            (char *)"vesselConstrainedByHerDraft",/* Member name */
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
            (char *)"vesselLeavingDock",/* Member name */
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
            (char *)"vesselNotUnderControl",/* Member name */
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
            (char *)"vesselStopped",/* Member name */
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
            (char *)"vesselUnderWay",/* Member name */
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
            (char *)"visibilityRestricted",/* Member name */
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
            (char *)"visibilityRestrictedStopped",/* Member name */
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
            (char *)"source",/* Member name */
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
            RTI_CDR_KEY_MEMBER , /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }, 
        {
            (char *)"timeStamp",/* Member name */
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
        }
    };

    static DDS_TypeCode UMAA_EO_SituationalSignalSpecs_SituationalSignalSpecsReportType_g_tc =
    {{
            DDS_TK_STRUCT, /* Kind */
            DDS_BOOLEAN_FALSE, /* Ignored */
            -1, /*Ignored*/
            (char *)"UMAA::EO::SituationalSignalSpecs::SituationalSignalSpecsReportType", /* Name */
            NULL, /* Ignored */      
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            27, /* Number of members */
            UMAA_EO_SituationalSignalSpecs_SituationalSignalSpecsReportType_g_tc_members, /* Members */
            DDS_VM_NONE, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER,
            DDS_BOOLEAN_TRUE, /* _isCopyable */
            NULL, /* _sampleAccessInfo: assigned later */
            NULL /* _typePlugin: assigned later */
        }}; /* Type code for UMAA_EO_SituationalSignalSpecs_SituationalSignalSpecsReportType*/

    if (is_initialized) {
        return &UMAA_EO_SituationalSignalSpecs_SituationalSignalSpecsReportType_g_tc;
    }

    is_initialized = RTI_TRUE;

    UMAA_EO_SituationalSignalSpecs_SituationalSignalSpecsReportType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

    UMAA_EO_SituationalSignalSpecs_SituationalSignalSpecsReportType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;
    UMAA_EO_SituationalSignalSpecs_SituationalSignalSpecsReportType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;
    UMAA_EO_SituationalSignalSpecs_SituationalSignalSpecsReportType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;
    UMAA_EO_SituationalSignalSpecs_SituationalSignalSpecsReportType_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;
    UMAA_EO_SituationalSignalSpecs_SituationalSignalSpecsReportType_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;
    UMAA_EO_SituationalSignalSpecs_SituationalSignalSpecsReportType_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;
    UMAA_EO_SituationalSignalSpecs_SituationalSignalSpecsReportType_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;
    UMAA_EO_SituationalSignalSpecs_SituationalSignalSpecsReportType_g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;
    UMAA_EO_SituationalSignalSpecs_SituationalSignalSpecsReportType_g_tc_members[8]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;
    UMAA_EO_SituationalSignalSpecs_SituationalSignalSpecsReportType_g_tc_members[9]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;
    UMAA_EO_SituationalSignalSpecs_SituationalSignalSpecsReportType_g_tc_members[10]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;
    UMAA_EO_SituationalSignalSpecs_SituationalSignalSpecsReportType_g_tc_members[11]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;
    UMAA_EO_SituationalSignalSpecs_SituationalSignalSpecsReportType_g_tc_members[12]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;
    UMAA_EO_SituationalSignalSpecs_SituationalSignalSpecsReportType_g_tc_members[13]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;
    UMAA_EO_SituationalSignalSpecs_SituationalSignalSpecsReportType_g_tc_members[14]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;
    UMAA_EO_SituationalSignalSpecs_SituationalSignalSpecsReportType_g_tc_members[15]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;
    UMAA_EO_SituationalSignalSpecs_SituationalSignalSpecsReportType_g_tc_members[16]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;
    UMAA_EO_SituationalSignalSpecs_SituationalSignalSpecsReportType_g_tc_members[17]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;
    UMAA_EO_SituationalSignalSpecs_SituationalSignalSpecsReportType_g_tc_members[18]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;
    UMAA_EO_SituationalSignalSpecs_SituationalSignalSpecsReportType_g_tc_members[19]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;
    UMAA_EO_SituationalSignalSpecs_SituationalSignalSpecsReportType_g_tc_members[20]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;
    UMAA_EO_SituationalSignalSpecs_SituationalSignalSpecsReportType_g_tc_members[21]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;
    UMAA_EO_SituationalSignalSpecs_SituationalSignalSpecsReportType_g_tc_members[22]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;
    UMAA_EO_SituationalSignalSpecs_SituationalSignalSpecsReportType_g_tc_members[23]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;
    UMAA_EO_SituationalSignalSpecs_SituationalSignalSpecsReportType_g_tc_members[24]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;
    UMAA_EO_SituationalSignalSpecs_SituationalSignalSpecsReportType_g_tc_members[25]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_NumericGUID_get_typecode();
    UMAA_EO_SituationalSignalSpecs_SituationalSignalSpecsReportType_g_tc_members[26]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_DateTime_get_typecode();

    /* Initialize the values for member annotations. */
    UMAA_EO_SituationalSignalSpecs_SituationalSignalSpecsReportType_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
    UMAA_EO_SituationalSignalSpecs_SituationalSignalSpecsReportType_g_tc_members[0]._annotations._defaultValue._u.boolean_value = 0;
    UMAA_EO_SituationalSignalSpecs_SituationalSignalSpecsReportType_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
    UMAA_EO_SituationalSignalSpecs_SituationalSignalSpecsReportType_g_tc_members[1]._annotations._defaultValue._u.boolean_value = 0;
    UMAA_EO_SituationalSignalSpecs_SituationalSignalSpecsReportType_g_tc_members[2]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
    UMAA_EO_SituationalSignalSpecs_SituationalSignalSpecsReportType_g_tc_members[2]._annotations._defaultValue._u.boolean_value = 0;
    UMAA_EO_SituationalSignalSpecs_SituationalSignalSpecsReportType_g_tc_members[3]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
    UMAA_EO_SituationalSignalSpecs_SituationalSignalSpecsReportType_g_tc_members[3]._annotations._defaultValue._u.boolean_value = 0;
    UMAA_EO_SituationalSignalSpecs_SituationalSignalSpecsReportType_g_tc_members[4]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
    UMAA_EO_SituationalSignalSpecs_SituationalSignalSpecsReportType_g_tc_members[4]._annotations._defaultValue._u.boolean_value = 0;
    UMAA_EO_SituationalSignalSpecs_SituationalSignalSpecsReportType_g_tc_members[5]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
    UMAA_EO_SituationalSignalSpecs_SituationalSignalSpecsReportType_g_tc_members[5]._annotations._defaultValue._u.boolean_value = 0;
    UMAA_EO_SituationalSignalSpecs_SituationalSignalSpecsReportType_g_tc_members[6]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
    UMAA_EO_SituationalSignalSpecs_SituationalSignalSpecsReportType_g_tc_members[6]._annotations._defaultValue._u.boolean_value = 0;
    UMAA_EO_SituationalSignalSpecs_SituationalSignalSpecsReportType_g_tc_members[7]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
    UMAA_EO_SituationalSignalSpecs_SituationalSignalSpecsReportType_g_tc_members[7]._annotations._defaultValue._u.boolean_value = 0;
    UMAA_EO_SituationalSignalSpecs_SituationalSignalSpecsReportType_g_tc_members[8]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
    UMAA_EO_SituationalSignalSpecs_SituationalSignalSpecsReportType_g_tc_members[8]._annotations._defaultValue._u.boolean_value = 0;
    UMAA_EO_SituationalSignalSpecs_SituationalSignalSpecsReportType_g_tc_members[9]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
    UMAA_EO_SituationalSignalSpecs_SituationalSignalSpecsReportType_g_tc_members[9]._annotations._defaultValue._u.boolean_value = 0;
    UMAA_EO_SituationalSignalSpecs_SituationalSignalSpecsReportType_g_tc_members[10]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
    UMAA_EO_SituationalSignalSpecs_SituationalSignalSpecsReportType_g_tc_members[10]._annotations._defaultValue._u.boolean_value = 0;
    UMAA_EO_SituationalSignalSpecs_SituationalSignalSpecsReportType_g_tc_members[11]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
    UMAA_EO_SituationalSignalSpecs_SituationalSignalSpecsReportType_g_tc_members[11]._annotations._defaultValue._u.boolean_value = 0;
    UMAA_EO_SituationalSignalSpecs_SituationalSignalSpecsReportType_g_tc_members[12]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
    UMAA_EO_SituationalSignalSpecs_SituationalSignalSpecsReportType_g_tc_members[12]._annotations._defaultValue._u.boolean_value = 0;
    UMAA_EO_SituationalSignalSpecs_SituationalSignalSpecsReportType_g_tc_members[13]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
    UMAA_EO_SituationalSignalSpecs_SituationalSignalSpecsReportType_g_tc_members[13]._annotations._defaultValue._u.boolean_value = 0;
    UMAA_EO_SituationalSignalSpecs_SituationalSignalSpecsReportType_g_tc_members[14]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
    UMAA_EO_SituationalSignalSpecs_SituationalSignalSpecsReportType_g_tc_members[14]._annotations._defaultValue._u.boolean_value = 0;
    UMAA_EO_SituationalSignalSpecs_SituationalSignalSpecsReportType_g_tc_members[15]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
    UMAA_EO_SituationalSignalSpecs_SituationalSignalSpecsReportType_g_tc_members[15]._annotations._defaultValue._u.boolean_value = 0;
    UMAA_EO_SituationalSignalSpecs_SituationalSignalSpecsReportType_g_tc_members[16]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
    UMAA_EO_SituationalSignalSpecs_SituationalSignalSpecsReportType_g_tc_members[16]._annotations._defaultValue._u.boolean_value = 0;
    UMAA_EO_SituationalSignalSpecs_SituationalSignalSpecsReportType_g_tc_members[17]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
    UMAA_EO_SituationalSignalSpecs_SituationalSignalSpecsReportType_g_tc_members[17]._annotations._defaultValue._u.boolean_value = 0;
    UMAA_EO_SituationalSignalSpecs_SituationalSignalSpecsReportType_g_tc_members[18]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
    UMAA_EO_SituationalSignalSpecs_SituationalSignalSpecsReportType_g_tc_members[18]._annotations._defaultValue._u.boolean_value = 0;
    UMAA_EO_SituationalSignalSpecs_SituationalSignalSpecsReportType_g_tc_members[19]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
    UMAA_EO_SituationalSignalSpecs_SituationalSignalSpecsReportType_g_tc_members[19]._annotations._defaultValue._u.boolean_value = 0;
    UMAA_EO_SituationalSignalSpecs_SituationalSignalSpecsReportType_g_tc_members[20]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
    UMAA_EO_SituationalSignalSpecs_SituationalSignalSpecsReportType_g_tc_members[20]._annotations._defaultValue._u.boolean_value = 0;
    UMAA_EO_SituationalSignalSpecs_SituationalSignalSpecsReportType_g_tc_members[21]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
    UMAA_EO_SituationalSignalSpecs_SituationalSignalSpecsReportType_g_tc_members[21]._annotations._defaultValue._u.boolean_value = 0;
    UMAA_EO_SituationalSignalSpecs_SituationalSignalSpecsReportType_g_tc_members[22]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
    UMAA_EO_SituationalSignalSpecs_SituationalSignalSpecsReportType_g_tc_members[22]._annotations._defaultValue._u.boolean_value = 0;
    UMAA_EO_SituationalSignalSpecs_SituationalSignalSpecsReportType_g_tc_members[23]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
    UMAA_EO_SituationalSignalSpecs_SituationalSignalSpecsReportType_g_tc_members[23]._annotations._defaultValue._u.boolean_value = 0;
    UMAA_EO_SituationalSignalSpecs_SituationalSignalSpecsReportType_g_tc_members[24]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
    UMAA_EO_SituationalSignalSpecs_SituationalSignalSpecsReportType_g_tc_members[24]._annotations._defaultValue._u.boolean_value = 0;

    UMAA_EO_SituationalSignalSpecs_SituationalSignalSpecsReportType_g_tc._data._sampleAccessInfo =
    UMAA_EO_SituationalSignalSpecs_SituationalSignalSpecsReportType_get_sample_access_info();
    UMAA_EO_SituationalSignalSpecs_SituationalSignalSpecsReportType_g_tc._data._typePlugin =
    UMAA_EO_SituationalSignalSpecs_SituationalSignalSpecsReportType_get_type_plugin_info();    

    return &UMAA_EO_SituationalSignalSpecs_SituationalSignalSpecsReportType_g_tc;
}

#define TSeq UMAA_EO_SituationalSignalSpecs_SituationalSignalSpecsReportTypeSeq
#define T UMAA_EO_SituationalSignalSpecs_SituationalSignalSpecsReportType
#include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
#undef T
#undef TSeq

RTIXCdrSampleAccessInfo *UMAA_EO_SituationalSignalSpecs_SituationalSignalSpecsReportType_get_sample_seq_access_info()
{
    static RTIXCdrSampleAccessInfo UMAA_EO_SituationalSignalSpecs_SituationalSignalSpecsReportType_g_seqSampleAccessInfo = {
        RTI_XCDR_TYPE_BINDING_CPP, \
        {sizeof(UMAA_EO_SituationalSignalSpecs_SituationalSignalSpecsReportTypeSeq),0,0,0}, \
        RTI_XCDR_FALSE, \
        DDS_Sequence_get_member_value_pointer, \
        UMAA_EO_SituationalSignalSpecs_SituationalSignalSpecsReportTypeSeq_set_member_element_count, \
        NULL, \
        NULL, \
        NULL \
    };

    return &UMAA_EO_SituationalSignalSpecs_SituationalSignalSpecsReportType_g_seqSampleAccessInfo;
}

RTIXCdrSampleAccessInfo *UMAA_EO_SituationalSignalSpecs_SituationalSignalSpecsReportType_get_sample_access_info()
{
    static RTIBool is_initialized = RTI_FALSE;

    UMAA_EO_SituationalSignalSpecs_SituationalSignalSpecsReportType *sample;

    static RTIXCdrMemberAccessInfo UMAA_EO_SituationalSignalSpecs_SituationalSignalSpecsReportType_g_memberAccessInfos[27] =
    {RTIXCdrMemberAccessInfo_INITIALIZER};

    static RTIXCdrSampleAccessInfo UMAA_EO_SituationalSignalSpecs_SituationalSignalSpecsReportType_g_sampleAccessInfo = 
    RTIXCdrSampleAccessInfo_INITIALIZER;

    if (is_initialized) {
        return (RTIXCdrSampleAccessInfo*) &UMAA_EO_SituationalSignalSpecs_SituationalSignalSpecsReportType_g_sampleAccessInfo;
    }

    RTIXCdrHeap_allocateStruct(
        &sample, 
        UMAA_EO_SituationalSignalSpecs_SituationalSignalSpecsReportType);
    if (sample == NULL) {
        return NULL;
    }

    UMAA_EO_SituationalSignalSpecs_SituationalSignalSpecsReportType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->agreeToBeOvertaken - (char *)sample);

    UMAA_EO_SituationalSignalSpecs_SituationalSignalSpecsReportType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->alteringCourseToPort - (char *)sample);

    UMAA_EO_SituationalSignalSpecs_SituationalSignalSpecsReportType_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->alteringCourseToStarboard - (char *)sample);

    UMAA_EO_SituationalSignalSpecs_SituationalSignalSpecsReportType_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->engagedInMineClearanceOperations - (char *)sample);

    UMAA_EO_SituationalSignalSpecs_SituationalSignalSpecsReportType_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->inDistressNeedAssistance - (char *)sample);

    UMAA_EO_SituationalSignalSpecs_SituationalSignalSpecsReportType_g_memberAccessInfos[5].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->inSightCollisionWarning - (char *)sample);

    UMAA_EO_SituationalSignalSpecs_SituationalSignalSpecsReportType_g_memberAccessInfos[6].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->maneuverabilityRestricted - (char *)sample);

    UMAA_EO_SituationalSignalSpecs_SituationalSignalSpecsReportType_g_memberAccessInfos[7].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->operatingAsternPropulsion - (char *)sample);

    UMAA_EO_SituationalSignalSpecs_SituationalSignalSpecsReportType_g_memberAccessInfos[8].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->outOfSightCollisionWarning - (char *)sample);

    UMAA_EO_SituationalSignalSpecs_SituationalSignalSpecsReportType_g_memberAccessInfos[9].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->toOvertakeOnPortSide - (char *)sample);

    UMAA_EO_SituationalSignalSpecs_SituationalSignalSpecsReportType_g_memberAccessInfos[10].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->toOvertakeOnstarboardSide - (char *)sample);

    UMAA_EO_SituationalSignalSpecs_SituationalSignalSpecsReportType_g_memberAccessInfos[11].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->towingAndPushingAlongsideOrAhead - (char *)sample);

    UMAA_EO_SituationalSignalSpecs_SituationalSignalSpecsReportType_g_memberAccessInfos[12].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->towingAndPushingBehind - (char *)sample);

    UMAA_EO_SituationalSignalSpecs_SituationalSignalSpecsReportType_g_memberAccessInfos[13].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->vesselAground - (char *)sample);

    UMAA_EO_SituationalSignalSpecs_SituationalSignalSpecsReportType_g_memberAccessInfos[14].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->vesselAnchored - (char *)sample);

    UMAA_EO_SituationalSignalSpecs_SituationalSignalSpecsReportType_g_memberAccessInfos[15].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->vesselBeingPushed - (char *)sample);

    UMAA_EO_SituationalSignalSpecs_SituationalSignalSpecsReportType_g_memberAccessInfos[16].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->vesselBeingTowedAlongside - (char *)sample);

    UMAA_EO_SituationalSignalSpecs_SituationalSignalSpecsReportType_g_memberAccessInfos[17].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->vesselBeingTowedBehind - (char *)sample);

    UMAA_EO_SituationalSignalSpecs_SituationalSignalSpecsReportType_g_memberAccessInfos[18].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->vesselConstrainedByHerDraft - (char *)sample);

    UMAA_EO_SituationalSignalSpecs_SituationalSignalSpecsReportType_g_memberAccessInfos[19].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->vesselLeavingDock - (char *)sample);

    UMAA_EO_SituationalSignalSpecs_SituationalSignalSpecsReportType_g_memberAccessInfos[20].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->vesselNotUnderControl - (char *)sample);

    UMAA_EO_SituationalSignalSpecs_SituationalSignalSpecsReportType_g_memberAccessInfos[21].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->vesselStopped - (char *)sample);

    UMAA_EO_SituationalSignalSpecs_SituationalSignalSpecsReportType_g_memberAccessInfos[22].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->vesselUnderWay - (char *)sample);

    UMAA_EO_SituationalSignalSpecs_SituationalSignalSpecsReportType_g_memberAccessInfos[23].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->visibilityRestricted - (char *)sample);

    UMAA_EO_SituationalSignalSpecs_SituationalSignalSpecsReportType_g_memberAccessInfos[24].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->visibilityRestrictedStopped - (char *)sample);

    UMAA_EO_SituationalSignalSpecs_SituationalSignalSpecsReportType_g_memberAccessInfos[25].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->source - (char *)sample);

    UMAA_EO_SituationalSignalSpecs_SituationalSignalSpecsReportType_g_memberAccessInfos[26].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->timeStamp - (char *)sample);

    UMAA_EO_SituationalSignalSpecs_SituationalSignalSpecsReportType_g_sampleAccessInfo.memberAccessInfos = 
    UMAA_EO_SituationalSignalSpecs_SituationalSignalSpecsReportType_g_memberAccessInfos;

    {
        size_t candidateTypeSize = sizeof(UMAA_EO_SituationalSignalSpecs_SituationalSignalSpecsReportType);

        if (candidateTypeSize > RTIXCdrLong_MAX) {
            UMAA_EO_SituationalSignalSpecs_SituationalSignalSpecsReportType_g_sampleAccessInfo.typeSize[0] =
            RTIXCdrLong_MAX;
        } else {
            UMAA_EO_SituationalSignalSpecs_SituationalSignalSpecsReportType_g_sampleAccessInfo.typeSize[0] =
            (RTIXCdrUnsignedLong) candidateTypeSize;
        }
    }

    UMAA_EO_SituationalSignalSpecs_SituationalSignalSpecsReportType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
    RTI_XCDR_TRUE;

    UMAA_EO_SituationalSignalSpecs_SituationalSignalSpecsReportType_g_sampleAccessInfo.getMemberValuePointerFcn = 
    UMAA_EO_SituationalSignalSpecs_SituationalSignalSpecsReportType_get_member_value_pointer;

    UMAA_EO_SituationalSignalSpecs_SituationalSignalSpecsReportType_g_sampleAccessInfo.languageBinding = 
    RTI_XCDR_TYPE_BINDING_CPP ;

    RTIXCdrHeap_freeStruct(sample);
    is_initialized = RTI_TRUE;
    return (RTIXCdrSampleAccessInfo*) &UMAA_EO_SituationalSignalSpecs_SituationalSignalSpecsReportType_g_sampleAccessInfo;
}
RTIXCdrTypePlugin *UMAA_EO_SituationalSignalSpecs_SituationalSignalSpecsReportType_get_type_plugin_info()
{
    static RTIXCdrTypePlugin UMAA_EO_SituationalSignalSpecs_SituationalSignalSpecsReportType_g_typePlugin = 
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
        UMAA_EO_SituationalSignalSpecs_SituationalSignalSpecsReportType_initialize_ex,
        NULL,
        (RTIXCdrTypePluginFinalizeSampleFunction)
        UMAA_EO_SituationalSignalSpecs_SituationalSignalSpecsReportType_finalize_w_return,
        NULL,
        NULL
    };

    return &UMAA_EO_SituationalSignalSpecs_SituationalSignalSpecsReportType_g_typePlugin;
}
#endif

RTIBool UMAA_EO_SituationalSignalSpecs_SituationalSignalSpecsReportType_initialize(
    UMAA_EO_SituationalSignalSpecs_SituationalSignalSpecsReportType* sample)
{
    return UMAA_EO_SituationalSignalSpecs_SituationalSignalSpecsReportType_initialize_ex(
        sample, 
        RTI_TRUE, 
        RTI_TRUE);
}
RTIBool UMAA_EO_SituationalSignalSpecs_SituationalSignalSpecsReportType_initialize_w_params(
    UMAA_EO_SituationalSignalSpecs_SituationalSignalSpecsReportType *sample,
    const struct DDS_TypeAllocationParams_t *allocParams)
{

    if (sample == NULL) {
        return RTI_FALSE;
    }
    if (allocParams == NULL) {
        return RTI_FALSE;
    }

    sample->agreeToBeOvertaken = 0;

    sample->alteringCourseToPort = 0;

    sample->alteringCourseToStarboard = 0;

    sample->engagedInMineClearanceOperations = 0;

    sample->inDistressNeedAssistance = 0;

    sample->inSightCollisionWarning = 0;

    sample->maneuverabilityRestricted = 0;

    sample->operatingAsternPropulsion = 0;

    sample->outOfSightCollisionWarning = 0;

    sample->toOvertakeOnPortSide = 0;

    sample->toOvertakeOnstarboardSide = 0;

    sample->towingAndPushingAlongsideOrAhead = 0;

    sample->towingAndPushingBehind = 0;

    sample->vesselAground = 0;

    sample->vesselAnchored = 0;

    sample->vesselBeingPushed = 0;

    sample->vesselBeingTowedAlongside = 0;

    sample->vesselBeingTowedBehind = 0;

    sample->vesselConstrainedByHerDraft = 0;

    sample->vesselLeavingDock = 0;

    sample->vesselNotUnderControl = 0;

    sample->vesselStopped = 0;

    sample->vesselUnderWay = 0;

    sample->visibilityRestricted = 0;

    sample->visibilityRestrictedStopped = 0;

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
RTIBool UMAA_EO_SituationalSignalSpecs_SituationalSignalSpecsReportType_initialize_ex(
    UMAA_EO_SituationalSignalSpecs_SituationalSignalSpecsReportType *sample,
    RTIBool allocatePointers, 
    RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return UMAA_EO_SituationalSignalSpecs_SituationalSignalSpecsReportType_initialize_w_params(
        sample,
        &allocParams);
}

RTIBool UMAA_EO_SituationalSignalSpecs_SituationalSignalSpecsReportType_finalize_w_return(
    UMAA_EO_SituationalSignalSpecs_SituationalSignalSpecsReportType* sample)
{
    UMAA_EO_SituationalSignalSpecs_SituationalSignalSpecsReportType_finalize_ex(sample, RTI_TRUE);

    return RTI_TRUE;
}

void UMAA_EO_SituationalSignalSpecs_SituationalSignalSpecsReportType_finalize(
    UMAA_EO_SituationalSignalSpecs_SituationalSignalSpecsReportType* sample)
{  
    UMAA_EO_SituationalSignalSpecs_SituationalSignalSpecsReportType_finalize_ex(
        sample, 
        RTI_TRUE);
}

void UMAA_EO_SituationalSignalSpecs_SituationalSignalSpecsReportType_finalize_ex(
    UMAA_EO_SituationalSignalSpecs_SituationalSignalSpecsReportType *sample,
    RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    UMAA_EO_SituationalSignalSpecs_SituationalSignalSpecsReportType_finalize_w_params(
        sample,
        &deallocParams);
}

void UMAA_EO_SituationalSignalSpecs_SituationalSignalSpecsReportType_finalize_w_params(
    UMAA_EO_SituationalSignalSpecs_SituationalSignalSpecsReportType *sample,
    const struct DDS_TypeDeallocationParams_t *deallocParams)
{
    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

    UMAA_Common_Measurement_NumericGUID_finalize_w_params(
        &sample->source,
        deallocParams);

    UMAA_Common_Measurement_DateTime_finalize_w_params(
        &sample->timeStamp,
        deallocParams);

}

void UMAA_EO_SituationalSignalSpecs_SituationalSignalSpecsReportType_finalize_optional_members(
    UMAA_EO_SituationalSignalSpecs_SituationalSignalSpecsReportType* sample, RTIBool deletePointers)
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

RTIBool UMAA_EO_SituationalSignalSpecs_SituationalSignalSpecsReportType_copy(
    UMAA_EO_SituationalSignalSpecs_SituationalSignalSpecsReportType* dst,
    const UMAA_EO_SituationalSignalSpecs_SituationalSignalSpecsReportType* src)
{
    try {

        if (dst == NULL || src == NULL) {
            return RTI_FALSE;
        }

        if (!RTICdrType_copyBoolean (
            &dst->agreeToBeOvertaken, 
            &src->agreeToBeOvertaken)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyBoolean (
            &dst->alteringCourseToPort, 
            &src->alteringCourseToPort)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyBoolean (
            &dst->alteringCourseToStarboard, 
            &src->alteringCourseToStarboard)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyBoolean (
            &dst->engagedInMineClearanceOperations, 
            &src->engagedInMineClearanceOperations)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyBoolean (
            &dst->inDistressNeedAssistance, 
            &src->inDistressNeedAssistance)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyBoolean (
            &dst->inSightCollisionWarning, 
            &src->inSightCollisionWarning)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyBoolean (
            &dst->maneuverabilityRestricted, 
            &src->maneuverabilityRestricted)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyBoolean (
            &dst->operatingAsternPropulsion, 
            &src->operatingAsternPropulsion)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyBoolean (
            &dst->outOfSightCollisionWarning, 
            &src->outOfSightCollisionWarning)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyBoolean (
            &dst->toOvertakeOnPortSide, 
            &src->toOvertakeOnPortSide)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyBoolean (
            &dst->toOvertakeOnstarboardSide, 
            &src->toOvertakeOnstarboardSide)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyBoolean (
            &dst->towingAndPushingAlongsideOrAhead, 
            &src->towingAndPushingAlongsideOrAhead)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyBoolean (
            &dst->towingAndPushingBehind, 
            &src->towingAndPushingBehind)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyBoolean (
            &dst->vesselAground, 
            &src->vesselAground)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyBoolean (
            &dst->vesselAnchored, 
            &src->vesselAnchored)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyBoolean (
            &dst->vesselBeingPushed, 
            &src->vesselBeingPushed)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyBoolean (
            &dst->vesselBeingTowedAlongside, 
            &src->vesselBeingTowedAlongside)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyBoolean (
            &dst->vesselBeingTowedBehind, 
            &src->vesselBeingTowedBehind)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyBoolean (
            &dst->vesselConstrainedByHerDraft, 
            &src->vesselConstrainedByHerDraft)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyBoolean (
            &dst->vesselLeavingDock, 
            &src->vesselLeavingDock)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyBoolean (
            &dst->vesselNotUnderControl, 
            &src->vesselNotUnderControl)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyBoolean (
            &dst->vesselStopped, 
            &src->vesselStopped)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyBoolean (
            &dst->vesselUnderWay, 
            &src->vesselUnderWay)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyBoolean (
            &dst->visibilityRestricted, 
            &src->visibilityRestricted)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyBoolean (
            &dst->visibilityRestrictedStopped, 
            &src->visibilityRestrictedStopped)) { 
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
* Configure and implement 'UMAA_EO_SituationalSignalSpecs_SituationalSignalSpecsReportType' sequence class.
*/
#define T UMAA_EO_SituationalSignalSpecs_SituationalSignalSpecsReportType
#define TSeq UMAA_EO_SituationalSignalSpecs_SituationalSignalSpecsReportTypeSeq

#define T_initialize_w_params UMAA_EO_SituationalSignalSpecs_SituationalSignalSpecsReportType_initialize_w_params

#define T_finalize_w_params   UMAA_EO_SituationalSignalSpecs_SituationalSignalSpecsReportType_finalize_w_params
#define T_copy       UMAA_EO_SituationalSignalSpecs_SituationalSignalSpecsReportType_copy

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
        const RTIXCdrTypeCode * type_code< UMAA_EO_SituationalSignalSpecs_SituationalSignalSpecsReportType>::get() 
        {
            return (const RTIXCdrTypeCode *) UMAA_EO_SituationalSignalSpecs_SituationalSignalSpecsReportType_get_typecode();
        }

    } 
}
#endif
