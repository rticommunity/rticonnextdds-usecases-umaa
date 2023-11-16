

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from DigitalVideoSpecsReportType.idl 
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

#include "DigitalVideoSpecsReportType.h"

#ifndef NDDS_STANDALONE_TYPE
#include "DigitalVideoSpecsReportTypePlugin.h"
#endif

#include <new>

/* ========================================================================= */
const char *UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportTypeTYPENAME = "UMAA::SEM::DigitalVideoSpecs::DigitalVideoSpecsReportType";

#ifndef NDDS_STANDALONE_TYPE
DDS_TypeCode * UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType_get_typecode(void)
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode_Member UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType_g_tc_members[42]=
    {

        {
            (char *)"maxBitRate",/* Member name */
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
            (char *)"maxFrameRate",/* Member name */
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
            (char *)"minBitRate",/* Member name */
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
            (char *)"minFrameRate",/* Member name */
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
            (char *)"supportedAVI",/* Member name */
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
            (char *)"supportedCGA_320x200",/* Member name */
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
            (char *)"supportedCIF_1408x1152",/* Member name */
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
            (char *)"supportedCIF_352x288",/* Member name */
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
            (char *)"supportedCIF_704x576",/* Member name */
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
            (char *)"supportedEGA_640x350",/* Member name */
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
            (char *)"supportedH262",/* Member name */
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
            (char *)"supportedH263",/* Member name */
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
            (char *)"supportedH263PLUS",/* Member name */
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
            (char *)"supportedH264",/* Member name */
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
            (char *)"supportedHD1080_1920x1080",/* Member name */
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
            (char *)"supportedHD480_852x480",/* Member name */
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
            (char *)"supportedHD720_1280x720",/* Member name */
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
            (char *)"supportedHSXGA_5120x4096",/* Member name */
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
            (char *)"supportedMJPEG",/* Member name */
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
            (char *)"supportedMPEG4",/* Member name */
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
            (char *)"supportedQCIF_176x144",/* Member name */
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
            (char *)"supportedQQVGA_160x120",/* Member name */
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
            (char *)"supportedQSXGA_2560x2048",/* Member name */
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
            (char *)"supportedQVGA_320x240",/* Member name */
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
            (char *)"supportedQXGA_2048x1536",/* Member name */
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
            (char *)"supportedSQCIF_128x96",/* Member name */
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
            (char *)"supportedSVGA_800x600",/* Member name */
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
            (char *)"supportedSXGA_1280x1024",/* Member name */
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
            (char *)"supportedUXGA_1600x1200",/* Member name */
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
            (char *)"supportedVGA_640x480",/* Member name */
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
            (char *)"supportedWHSXGA_6400x4096",/* Member name */
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
            (char *)"supportedWHUXGA_7680x4800",/* Member name */
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
            (char *)"supportedWOXGA_2560x1600",/* Member name */
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
            (char *)"supportedWQSXGA_3200x2048",/* Member name */
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
            (char *)"supportedWQUXGA_3840x2400",/* Member name */
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
            (char *)"supportedWSXGA_1600x1024",/* Member name */
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
            (char *)"supportedWUXGA_1920x1200",/* Member name */
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
            (char *)"supportedWVGA_852x480",/* Member name */
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
            (char *)"supportedWXGA_1366x768",/* Member name */
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
            (char *)"supportedXGA_1024x768",/* Member name */
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
            (char *)"source",/* Member name */
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
            RTI_CDR_KEY_MEMBER , /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }, 
        {
            (char *)"timeStamp",/* Member name */
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
        }
    };

    static DDS_TypeCode UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType_g_tc =
    {{
            DDS_TK_STRUCT, /* Kind */
            DDS_BOOLEAN_FALSE, /* Ignored */
            -1, /*Ignored*/
            (char *)"UMAA::SEM::DigitalVideoSpecs::DigitalVideoSpecsReportType", /* Name */
            NULL, /* Ignored */      
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            42, /* Number of members */
            UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType_g_tc_members, /* Members */
            DDS_VM_NONE, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER,
            DDS_BOOLEAN_TRUE, /* _isCopyable */
            NULL, /* _sampleAccessInfo: assigned later */
            NULL /* _typePlugin: assigned later */
        }}; /* Type code for UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType*/

    if (is_initialized) {
        return &UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType_g_tc;
    }

    is_initialized = RTI_TRUE;

    UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

    UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_DataTransferRate_get_typecode();
    UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_FrameRateFPS_get_typecode();
    UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_DataTransferRate_get_typecode();
    UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_FrameRateFPS_get_typecode();
    UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;
    UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;
    UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;
    UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType_g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;
    UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType_g_tc_members[8]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;
    UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType_g_tc_members[9]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;
    UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType_g_tc_members[10]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;
    UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType_g_tc_members[11]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;
    UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType_g_tc_members[12]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;
    UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType_g_tc_members[13]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;
    UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType_g_tc_members[14]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;
    UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType_g_tc_members[15]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;
    UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType_g_tc_members[16]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;
    UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType_g_tc_members[17]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;
    UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType_g_tc_members[18]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;
    UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType_g_tc_members[19]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;
    UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType_g_tc_members[20]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;
    UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType_g_tc_members[21]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;
    UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType_g_tc_members[22]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;
    UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType_g_tc_members[23]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;
    UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType_g_tc_members[24]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;
    UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType_g_tc_members[25]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;
    UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType_g_tc_members[26]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;
    UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType_g_tc_members[27]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;
    UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType_g_tc_members[28]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;
    UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType_g_tc_members[29]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;
    UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType_g_tc_members[30]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;
    UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType_g_tc_members[31]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;
    UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType_g_tc_members[32]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;
    UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType_g_tc_members[33]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;
    UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType_g_tc_members[34]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;
    UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType_g_tc_members[35]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;
    UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType_g_tc_members[36]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;
    UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType_g_tc_members[37]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;
    UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType_g_tc_members[38]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;
    UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType_g_tc_members[39]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;
    UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType_g_tc_members[40]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_NumericGUID_get_typecode();
    UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType_g_tc_members[41]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_DateTime_get_typecode();

    /* Initialize the values for member annotations. */
    UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType_g_tc_members[0]._annotations._defaultValue._u.double_value = 0.0;
    UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType_g_tc_members[0]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
    UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType_g_tc_members[0]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
    UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType_g_tc_members[1]._annotations._defaultValue._u.double_value = 0.0;
    UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType_g_tc_members[1]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType_g_tc_members[1]._annotations._minValue._u.double_value = 0ULL;
    UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType_g_tc_members[1]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType_g_tc_members[1]._annotations._maxValue._u.double_value = 1000ULL;
    UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType_g_tc_members[2]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType_g_tc_members[2]._annotations._defaultValue._u.double_value = 0.0;
    UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType_g_tc_members[2]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType_g_tc_members[2]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
    UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType_g_tc_members[2]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType_g_tc_members[2]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
    UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType_g_tc_members[3]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType_g_tc_members[3]._annotations._defaultValue._u.double_value = 0.0;
    UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType_g_tc_members[3]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType_g_tc_members[3]._annotations._minValue._u.double_value = 0ULL;
    UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType_g_tc_members[3]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType_g_tc_members[3]._annotations._maxValue._u.double_value = 1000ULL;
    UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType_g_tc_members[4]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
    UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType_g_tc_members[4]._annotations._defaultValue._u.boolean_value = 0;
    UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType_g_tc_members[5]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
    UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType_g_tc_members[5]._annotations._defaultValue._u.boolean_value = 0;
    UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType_g_tc_members[6]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
    UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType_g_tc_members[6]._annotations._defaultValue._u.boolean_value = 0;
    UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType_g_tc_members[7]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
    UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType_g_tc_members[7]._annotations._defaultValue._u.boolean_value = 0;
    UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType_g_tc_members[8]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
    UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType_g_tc_members[8]._annotations._defaultValue._u.boolean_value = 0;
    UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType_g_tc_members[9]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
    UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType_g_tc_members[9]._annotations._defaultValue._u.boolean_value = 0;
    UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType_g_tc_members[10]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
    UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType_g_tc_members[10]._annotations._defaultValue._u.boolean_value = 0;
    UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType_g_tc_members[11]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
    UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType_g_tc_members[11]._annotations._defaultValue._u.boolean_value = 0;
    UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType_g_tc_members[12]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
    UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType_g_tc_members[12]._annotations._defaultValue._u.boolean_value = 0;
    UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType_g_tc_members[13]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
    UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType_g_tc_members[13]._annotations._defaultValue._u.boolean_value = 0;
    UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType_g_tc_members[14]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
    UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType_g_tc_members[14]._annotations._defaultValue._u.boolean_value = 0;
    UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType_g_tc_members[15]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
    UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType_g_tc_members[15]._annotations._defaultValue._u.boolean_value = 0;
    UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType_g_tc_members[16]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
    UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType_g_tc_members[16]._annotations._defaultValue._u.boolean_value = 0;
    UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType_g_tc_members[17]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
    UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType_g_tc_members[17]._annotations._defaultValue._u.boolean_value = 0;
    UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType_g_tc_members[18]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
    UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType_g_tc_members[18]._annotations._defaultValue._u.boolean_value = 0;
    UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType_g_tc_members[19]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
    UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType_g_tc_members[19]._annotations._defaultValue._u.boolean_value = 0;
    UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType_g_tc_members[20]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
    UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType_g_tc_members[20]._annotations._defaultValue._u.boolean_value = 0;
    UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType_g_tc_members[21]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
    UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType_g_tc_members[21]._annotations._defaultValue._u.boolean_value = 0;
    UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType_g_tc_members[22]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
    UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType_g_tc_members[22]._annotations._defaultValue._u.boolean_value = 0;
    UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType_g_tc_members[23]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
    UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType_g_tc_members[23]._annotations._defaultValue._u.boolean_value = 0;
    UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType_g_tc_members[24]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
    UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType_g_tc_members[24]._annotations._defaultValue._u.boolean_value = 0;
    UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType_g_tc_members[25]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
    UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType_g_tc_members[25]._annotations._defaultValue._u.boolean_value = 0;
    UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType_g_tc_members[26]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
    UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType_g_tc_members[26]._annotations._defaultValue._u.boolean_value = 0;
    UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType_g_tc_members[27]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
    UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType_g_tc_members[27]._annotations._defaultValue._u.boolean_value = 0;
    UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType_g_tc_members[28]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
    UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType_g_tc_members[28]._annotations._defaultValue._u.boolean_value = 0;
    UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType_g_tc_members[29]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
    UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType_g_tc_members[29]._annotations._defaultValue._u.boolean_value = 0;
    UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType_g_tc_members[30]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
    UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType_g_tc_members[30]._annotations._defaultValue._u.boolean_value = 0;
    UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType_g_tc_members[31]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
    UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType_g_tc_members[31]._annotations._defaultValue._u.boolean_value = 0;
    UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType_g_tc_members[32]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
    UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType_g_tc_members[32]._annotations._defaultValue._u.boolean_value = 0;
    UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType_g_tc_members[33]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
    UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType_g_tc_members[33]._annotations._defaultValue._u.boolean_value = 0;
    UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType_g_tc_members[34]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
    UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType_g_tc_members[34]._annotations._defaultValue._u.boolean_value = 0;
    UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType_g_tc_members[35]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
    UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType_g_tc_members[35]._annotations._defaultValue._u.boolean_value = 0;
    UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType_g_tc_members[36]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
    UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType_g_tc_members[36]._annotations._defaultValue._u.boolean_value = 0;
    UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType_g_tc_members[37]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
    UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType_g_tc_members[37]._annotations._defaultValue._u.boolean_value = 0;
    UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType_g_tc_members[38]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
    UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType_g_tc_members[38]._annotations._defaultValue._u.boolean_value = 0;
    UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType_g_tc_members[39]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
    UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType_g_tc_members[39]._annotations._defaultValue._u.boolean_value = 0;

    UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType_g_tc._data._sampleAccessInfo =
    UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType_get_sample_access_info();
    UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType_g_tc._data._typePlugin =
    UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType_get_type_plugin_info();    

    return &UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType_g_tc;
}

#define TSeq UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportTypeSeq
#define T UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType
#include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
#undef T
#undef TSeq

RTIXCdrSampleAccessInfo *UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType_get_sample_seq_access_info()
{
    static RTIXCdrSampleAccessInfo UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType_g_seqSampleAccessInfo = {
        RTI_XCDR_TYPE_BINDING_CPP, \
        {sizeof(UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportTypeSeq),0,0,0}, \
        RTI_XCDR_FALSE, \
        DDS_Sequence_get_member_value_pointer, \
        UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportTypeSeq_set_member_element_count, \
        NULL, \
        NULL, \
        NULL \
    };

    return &UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType_g_seqSampleAccessInfo;
}

RTIXCdrSampleAccessInfo *UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType_get_sample_access_info()
{
    static RTIBool is_initialized = RTI_FALSE;

    UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType *sample;

    static RTIXCdrMemberAccessInfo UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType_g_memberAccessInfos[42] =
    {RTIXCdrMemberAccessInfo_INITIALIZER};

    static RTIXCdrSampleAccessInfo UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType_g_sampleAccessInfo = 
    RTIXCdrSampleAccessInfo_INITIALIZER;

    if (is_initialized) {
        return (RTIXCdrSampleAccessInfo*) &UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType_g_sampleAccessInfo;
    }

    RTIXCdrHeap_allocateStruct(
        &sample, 
        UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType);
    if (sample == NULL) {
        return NULL;
    }

    UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->maxBitRate - (char *)sample);

    UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->maxFrameRate - (char *)sample);

    UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->minBitRate - (char *)sample);

    UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->minFrameRate - (char *)sample);

    UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->supportedAVI - (char *)sample);

    UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType_g_memberAccessInfos[5].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->supportedCGA_320x200 - (char *)sample);

    UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType_g_memberAccessInfos[6].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->supportedCIF_1408x1152 - (char *)sample);

    UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType_g_memberAccessInfos[7].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->supportedCIF_352x288 - (char *)sample);

    UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType_g_memberAccessInfos[8].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->supportedCIF_704x576 - (char *)sample);

    UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType_g_memberAccessInfos[9].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->supportedEGA_640x350 - (char *)sample);

    UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType_g_memberAccessInfos[10].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->supportedH262 - (char *)sample);

    UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType_g_memberAccessInfos[11].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->supportedH263 - (char *)sample);

    UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType_g_memberAccessInfos[12].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->supportedH263PLUS - (char *)sample);

    UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType_g_memberAccessInfos[13].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->supportedH264 - (char *)sample);

    UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType_g_memberAccessInfos[14].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->supportedHD1080_1920x1080 - (char *)sample);

    UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType_g_memberAccessInfos[15].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->supportedHD480_852x480 - (char *)sample);

    UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType_g_memberAccessInfos[16].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->supportedHD720_1280x720 - (char *)sample);

    UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType_g_memberAccessInfos[17].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->supportedHSXGA_5120x4096 - (char *)sample);

    UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType_g_memberAccessInfos[18].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->supportedMJPEG - (char *)sample);

    UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType_g_memberAccessInfos[19].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->supportedMPEG4 - (char *)sample);

    UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType_g_memberAccessInfos[20].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->supportedQCIF_176x144 - (char *)sample);

    UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType_g_memberAccessInfos[21].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->supportedQQVGA_160x120 - (char *)sample);

    UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType_g_memberAccessInfos[22].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->supportedQSXGA_2560x2048 - (char *)sample);

    UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType_g_memberAccessInfos[23].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->supportedQVGA_320x240 - (char *)sample);

    UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType_g_memberAccessInfos[24].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->supportedQXGA_2048x1536 - (char *)sample);

    UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType_g_memberAccessInfos[25].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->supportedSQCIF_128x96 - (char *)sample);

    UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType_g_memberAccessInfos[26].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->supportedSVGA_800x600 - (char *)sample);

    UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType_g_memberAccessInfos[27].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->supportedSXGA_1280x1024 - (char *)sample);

    UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType_g_memberAccessInfos[28].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->supportedUXGA_1600x1200 - (char *)sample);

    UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType_g_memberAccessInfos[29].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->supportedVGA_640x480 - (char *)sample);

    UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType_g_memberAccessInfos[30].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->supportedWHSXGA_6400x4096 - (char *)sample);

    UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType_g_memberAccessInfos[31].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->supportedWHUXGA_7680x4800 - (char *)sample);

    UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType_g_memberAccessInfos[32].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->supportedWOXGA_2560x1600 - (char *)sample);

    UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType_g_memberAccessInfos[33].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->supportedWQSXGA_3200x2048 - (char *)sample);

    UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType_g_memberAccessInfos[34].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->supportedWQUXGA_3840x2400 - (char *)sample);

    UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType_g_memberAccessInfos[35].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->supportedWSXGA_1600x1024 - (char *)sample);

    UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType_g_memberAccessInfos[36].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->supportedWUXGA_1920x1200 - (char *)sample);

    UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType_g_memberAccessInfos[37].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->supportedWVGA_852x480 - (char *)sample);

    UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType_g_memberAccessInfos[38].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->supportedWXGA_1366x768 - (char *)sample);

    UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType_g_memberAccessInfos[39].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->supportedXGA_1024x768 - (char *)sample);

    UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType_g_memberAccessInfos[40].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->source - (char *)sample);

    UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType_g_memberAccessInfos[41].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->timeStamp - (char *)sample);

    UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType_g_sampleAccessInfo.memberAccessInfos = 
    UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType_g_memberAccessInfos;

    {
        size_t candidateTypeSize = sizeof(UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType);

        if (candidateTypeSize > RTIXCdrLong_MAX) {
            UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType_g_sampleAccessInfo.typeSize[0] =
            RTIXCdrLong_MAX;
        } else {
            UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType_g_sampleAccessInfo.typeSize[0] =
            (RTIXCdrUnsignedLong) candidateTypeSize;
        }
    }

    UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
    RTI_XCDR_TRUE;

    UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType_g_sampleAccessInfo.getMemberValuePointerFcn = 
    UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType_get_member_value_pointer;

    UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType_g_sampleAccessInfo.languageBinding = 
    RTI_XCDR_TYPE_BINDING_CPP ;

    RTIXCdrHeap_freeStruct(sample);
    is_initialized = RTI_TRUE;
    return (RTIXCdrSampleAccessInfo*) &UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType_g_sampleAccessInfo;
}
RTIXCdrTypePlugin *UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType_get_type_plugin_info()
{
    static RTIXCdrTypePlugin UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType_g_typePlugin = 
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
        UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType_initialize_ex,
        NULL,
        (RTIXCdrTypePluginFinalizeSampleFunction)
        UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType_finalize_w_return,
        NULL,
        NULL
    };

    return &UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType_g_typePlugin;
}
#endif

RTIBool UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType_initialize(
    UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType* sample)
{
    return UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType_initialize_ex(
        sample, 
        RTI_TRUE, 
        RTI_TRUE);
}
RTIBool UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType_initialize_w_params(
    UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType *sample,
    const struct DDS_TypeAllocationParams_t *allocParams)
{

    if (sample == NULL) {
        return RTI_FALSE;
    }
    if (allocParams == NULL) {
        return RTI_FALSE;
    }

    sample->maxBitRate = 0.0;

    sample->maxFrameRate = 0.0;

    sample->minBitRate = 0.0;

    sample->minFrameRate = 0.0;

    sample->supportedAVI = 0;

    sample->supportedCGA_320x200 = 0;

    sample->supportedCIF_1408x1152 = 0;

    sample->supportedCIF_352x288 = 0;

    sample->supportedCIF_704x576 = 0;

    sample->supportedEGA_640x350 = 0;

    sample->supportedH262 = 0;

    sample->supportedH263 = 0;

    sample->supportedH263PLUS = 0;

    sample->supportedH264 = 0;

    sample->supportedHD1080_1920x1080 = 0;

    sample->supportedHD480_852x480 = 0;

    sample->supportedHD720_1280x720 = 0;

    sample->supportedHSXGA_5120x4096 = 0;

    sample->supportedMJPEG = 0;

    sample->supportedMPEG4 = 0;

    sample->supportedQCIF_176x144 = 0;

    sample->supportedQQVGA_160x120 = 0;

    sample->supportedQSXGA_2560x2048 = 0;

    sample->supportedQVGA_320x240 = 0;

    sample->supportedQXGA_2048x1536 = 0;

    sample->supportedSQCIF_128x96 = 0;

    sample->supportedSVGA_800x600 = 0;

    sample->supportedSXGA_1280x1024 = 0;

    sample->supportedUXGA_1600x1200 = 0;

    sample->supportedVGA_640x480 = 0;

    sample->supportedWHSXGA_6400x4096 = 0;

    sample->supportedWHUXGA_7680x4800 = 0;

    sample->supportedWOXGA_2560x1600 = 0;

    sample->supportedWQSXGA_3200x2048 = 0;

    sample->supportedWQUXGA_3840x2400 = 0;

    sample->supportedWSXGA_1600x1024 = 0;

    sample->supportedWUXGA_1920x1200 = 0;

    sample->supportedWVGA_852x480 = 0;

    sample->supportedWXGA_1366x768 = 0;

    sample->supportedXGA_1024x768 = 0;

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
RTIBool UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType_initialize_ex(
    UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType *sample,
    RTIBool allocatePointers, 
    RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType_initialize_w_params(
        sample,
        &allocParams);
}

RTIBool UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType_finalize_w_return(
    UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType* sample)
{
    UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType_finalize_ex(sample, RTI_TRUE);

    return RTI_TRUE;
}

void UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType_finalize(
    UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType* sample)
{  
    UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType_finalize_ex(
        sample, 
        RTI_TRUE);
}

void UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType_finalize_ex(
    UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType *sample,
    RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType_finalize_w_params(
        sample,
        &deallocParams);
}

void UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType_finalize_w_params(
    UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType *sample,
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

void UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType_finalize_optional_members(
    UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType* sample, RTIBool deletePointers)
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

RTIBool UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType_copy(
    UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType* dst,
    const UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType* src)
{
    try {

        if (dst == NULL || src == NULL) {
            return RTI_FALSE;
        }

        if (!RTICdrType_copyDouble (
            &dst->maxBitRate, 
            &src->maxBitRate)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyDouble (
            &dst->maxFrameRate, 
            &src->maxFrameRate)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyDouble (
            &dst->minBitRate, 
            &src->minBitRate)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyDouble (
            &dst->minFrameRate, 
            &src->minFrameRate)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyBoolean (
            &dst->supportedAVI, 
            &src->supportedAVI)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyBoolean (
            &dst->supportedCGA_320x200, 
            &src->supportedCGA_320x200)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyBoolean (
            &dst->supportedCIF_1408x1152, 
            &src->supportedCIF_1408x1152)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyBoolean (
            &dst->supportedCIF_352x288, 
            &src->supportedCIF_352x288)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyBoolean (
            &dst->supportedCIF_704x576, 
            &src->supportedCIF_704x576)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyBoolean (
            &dst->supportedEGA_640x350, 
            &src->supportedEGA_640x350)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyBoolean (
            &dst->supportedH262, 
            &src->supportedH262)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyBoolean (
            &dst->supportedH263, 
            &src->supportedH263)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyBoolean (
            &dst->supportedH263PLUS, 
            &src->supportedH263PLUS)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyBoolean (
            &dst->supportedH264, 
            &src->supportedH264)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyBoolean (
            &dst->supportedHD1080_1920x1080, 
            &src->supportedHD1080_1920x1080)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyBoolean (
            &dst->supportedHD480_852x480, 
            &src->supportedHD480_852x480)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyBoolean (
            &dst->supportedHD720_1280x720, 
            &src->supportedHD720_1280x720)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyBoolean (
            &dst->supportedHSXGA_5120x4096, 
            &src->supportedHSXGA_5120x4096)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyBoolean (
            &dst->supportedMJPEG, 
            &src->supportedMJPEG)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyBoolean (
            &dst->supportedMPEG4, 
            &src->supportedMPEG4)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyBoolean (
            &dst->supportedQCIF_176x144, 
            &src->supportedQCIF_176x144)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyBoolean (
            &dst->supportedQQVGA_160x120, 
            &src->supportedQQVGA_160x120)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyBoolean (
            &dst->supportedQSXGA_2560x2048, 
            &src->supportedQSXGA_2560x2048)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyBoolean (
            &dst->supportedQVGA_320x240, 
            &src->supportedQVGA_320x240)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyBoolean (
            &dst->supportedQXGA_2048x1536, 
            &src->supportedQXGA_2048x1536)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyBoolean (
            &dst->supportedSQCIF_128x96, 
            &src->supportedSQCIF_128x96)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyBoolean (
            &dst->supportedSVGA_800x600, 
            &src->supportedSVGA_800x600)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyBoolean (
            &dst->supportedSXGA_1280x1024, 
            &src->supportedSXGA_1280x1024)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyBoolean (
            &dst->supportedUXGA_1600x1200, 
            &src->supportedUXGA_1600x1200)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyBoolean (
            &dst->supportedVGA_640x480, 
            &src->supportedVGA_640x480)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyBoolean (
            &dst->supportedWHSXGA_6400x4096, 
            &src->supportedWHSXGA_6400x4096)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyBoolean (
            &dst->supportedWHUXGA_7680x4800, 
            &src->supportedWHUXGA_7680x4800)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyBoolean (
            &dst->supportedWOXGA_2560x1600, 
            &src->supportedWOXGA_2560x1600)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyBoolean (
            &dst->supportedWQSXGA_3200x2048, 
            &src->supportedWQSXGA_3200x2048)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyBoolean (
            &dst->supportedWQUXGA_3840x2400, 
            &src->supportedWQUXGA_3840x2400)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyBoolean (
            &dst->supportedWSXGA_1600x1024, 
            &src->supportedWSXGA_1600x1024)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyBoolean (
            &dst->supportedWUXGA_1920x1200, 
            &src->supportedWUXGA_1920x1200)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyBoolean (
            &dst->supportedWVGA_852x480, 
            &src->supportedWVGA_852x480)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyBoolean (
            &dst->supportedWXGA_1366x768, 
            &src->supportedWXGA_1366x768)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyBoolean (
            &dst->supportedXGA_1024x768, 
            &src->supportedXGA_1024x768)) { 
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
* Configure and implement 'UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType' sequence class.
*/
#define T UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType
#define TSeq UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportTypeSeq

#define T_initialize_w_params UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType_initialize_w_params

#define T_finalize_w_params   UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType_finalize_w_params
#define T_copy       UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType_copy

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
        const RTIXCdrTypeCode * type_code< UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType>::get() 
        {
            return (const RTIXCdrTypeCode *) UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType_get_typecode();
        }

    } 
}
#endif
