

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from DigitalAudioSpecsReportType.idl 
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

#include "DigitalAudioSpecsReportType.h"

#ifndef NDDS_STANDALONE_TYPE
#include "DigitalAudioSpecsReportTypePlugin.h"
#endif

#include <new>

/* ========================================================================= */
const char *UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportTypeTYPENAME = "UMAA::SEM::DigitalAudioSpecs::DigitalAudioSpecsReportType";

#ifndef NDDS_STANDALONE_TYPE
DDS_TypeCode * UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_get_typecode(void)
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode_Member UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_g_tc_members[44]=
    {

        {
            (char *)"maxAllowedBitRate",/* Member name */
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
            (char *)"maxChannels",/* Member name */
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
            (char *)"maxSampleRate",/* Member name */
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
            (char *)"minAllowedBitRate",/* Member name */
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
            (char *)"minSampleRate",/* Member name */
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
            (char *)"supported10bits",/* Member name */
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
            (char *)"supported12bits",/* Member name */
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
            (char *)"supported14bits",/* Member name */
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
            (char *)"supported16bits",/* Member name */
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
            (char *)"supported20bits",/* Member name */
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
            (char *)"supported24bits",/* Member name */
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
            (char *)"supported32bits",/* Member name */
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
            (char *)"supported40bits",/* Member name */
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
            (char *)"supported48bits",/* Member name */
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
            (char *)"supported56bits",/* Member name */
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
            (char *)"supported64bits",/* Member name */
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
            (char *)"supported8bits",/* Member name */
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
            (char *)"supportedAAC_MPEG2",/* Member name */
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
            (char *)"supportedAAC_MPEG4",/* Member name */
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
            (char *)"supportedAIFF",/* Member name */
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
            (char *)"supportedALAC",/* Member name */
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
            (char *)"supportedAverage",/* Member name */
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
            (char *)"supportedBest",/* Member name */
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
            (char *)"supportedBetter",/* Member name */
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
            (char *)"supportedDolbyDigital",/* Member name */
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
            (char *)"supportedDTS",/* Member name */
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
            (char *)"supportedFLAC",/* Member name */
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
            (char *)"supportedGood",/* Member name */
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
            (char *)"supportedLess",/* Member name */
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
            (char *)"supportedLPCM_PCM",/* Member name */
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
            (char *)"supportedMP2",/* Member name */
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
            (char *)"supportedMP3",/* Member name */
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
            (char *)"supportedPoor",/* Member name */
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
            (char *)"supportedRealAudio",/* Member name */
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
            (char *)"supportedSpeex",/* Member name */
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
            (char *)"supportedTrueAudio",/* Member name */
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
            (char *)"supportedULAW",/* Member name */
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
            (char *)"supportedVORBIS",/* Member name */
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
            (char *)"supportedWAV",/* Member name */
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
            (char *)"supportedWMA",/* Member name */
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
            (char *)"supportedWMA9_Lossless",/* Member name */
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
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }, 
        {
            (char *)"supportedWorst",/* Member name */
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
        }, 
        {
            (char *)"source",/* Member name */
            {
                42,/* Representation ID */
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
                43,/* Representation ID */
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

    static DDS_TypeCode UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_g_tc =
    {{
            DDS_TK_STRUCT, /* Kind */
            DDS_BOOLEAN_FALSE, /* Ignored */
            -1, /*Ignored*/
            (char *)"UMAA::SEM::DigitalAudioSpecs::DigitalAudioSpecsReportType", /* Name */
            NULL, /* Ignored */      
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            44, /* Number of members */
            UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_g_tc_members, /* Members */
            DDS_VM_NONE, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER,
            DDS_BOOLEAN_TRUE, /* _isCopyable */
            NULL, /* _sampleAccessInfo: assigned later */
            NULL /* _typePlugin: assigned later */
        }}; /* Type code for UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType*/

    if (is_initialized) {
        return &UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_g_tc;
    }

    is_initialized = RTI_TRUE;

    UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

    UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_CommsRate_BitsPerSecond_get_typecode();
    UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_Count_get_typecode();
    UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_Count_get_typecode();
    UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_CommsRate_BitsPerSecond_get_typecode();
    UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_Count_get_typecode();
    UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;
    UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;
    UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;
    UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_g_tc_members[8]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;
    UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_g_tc_members[9]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;
    UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_g_tc_members[10]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;
    UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_g_tc_members[11]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;
    UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_g_tc_members[12]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;
    UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_g_tc_members[13]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;
    UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_g_tc_members[14]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;
    UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_g_tc_members[15]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;
    UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_g_tc_members[16]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;
    UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_g_tc_members[17]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;
    UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_g_tc_members[18]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;
    UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_g_tc_members[19]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;
    UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_g_tc_members[20]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;
    UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_g_tc_members[21]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;
    UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_g_tc_members[22]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;
    UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_g_tc_members[23]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;
    UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_g_tc_members[24]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;
    UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_g_tc_members[25]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;
    UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_g_tc_members[26]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;
    UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_g_tc_members[27]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;
    UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_g_tc_members[28]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;
    UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_g_tc_members[29]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;
    UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_g_tc_members[30]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;
    UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_g_tc_members[31]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;
    UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_g_tc_members[32]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;
    UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_g_tc_members[33]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;
    UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_g_tc_members[34]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;
    UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_g_tc_members[35]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;
    UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_g_tc_members[36]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;
    UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_g_tc_members[37]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;
    UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_g_tc_members[38]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;
    UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_g_tc_members[39]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;
    UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_g_tc_members[40]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;
    UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_g_tc_members[41]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;
    UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_g_tc_members[42]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_NumericGUID_get_typecode();
    UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_g_tc_members[43]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_DateTime_get_typecode();

    /* Initialize the values for member annotations. */
    UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_LONG;
    UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_g_tc_members[0]._annotations._defaultValue._u.long_value = 0;
    UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_LONG;
    UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_g_tc_members[0]._annotations._minValue._u.long_value = RTIXCdrLong_MIN;
    UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_LONG;
    UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_g_tc_members[0]._annotations._maxValue._u.long_value = RTIXCdrLong_MAX;
    UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_LONG;
    UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_g_tc_members[1]._annotations._defaultValue._u.long_value = 0;
    UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_g_tc_members[1]._annotations._minValue._d = RTI_XCDR_TK_LONG;
    UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_g_tc_members[1]._annotations._minValue._u.long_value = -2147483648L;
    UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_g_tc_members[1]._annotations._maxValue._d = RTI_XCDR_TK_LONG;
    UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_g_tc_members[1]._annotations._maxValue._u.long_value = 2147483647L;
    UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_g_tc_members[2]._annotations._defaultValue._d = RTI_XCDR_TK_LONG;
    UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_g_tc_members[2]._annotations._defaultValue._u.long_value = 0;
    UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_g_tc_members[2]._annotations._minValue._d = RTI_XCDR_TK_LONG;
    UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_g_tc_members[2]._annotations._minValue._u.long_value = -2147483648L;
    UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_g_tc_members[2]._annotations._maxValue._d = RTI_XCDR_TK_LONG;
    UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_g_tc_members[2]._annotations._maxValue._u.long_value = 2147483647L;
    UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_g_tc_members[3]._annotations._defaultValue._d = RTI_XCDR_TK_LONG;
    UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_g_tc_members[3]._annotations._defaultValue._u.long_value = 0;
    UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_g_tc_members[3]._annotations._minValue._d = RTI_XCDR_TK_LONG;
    UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_g_tc_members[3]._annotations._minValue._u.long_value = RTIXCdrLong_MIN;
    UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_g_tc_members[3]._annotations._maxValue._d = RTI_XCDR_TK_LONG;
    UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_g_tc_members[3]._annotations._maxValue._u.long_value = RTIXCdrLong_MAX;
    UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_g_tc_members[4]._annotations._defaultValue._d = RTI_XCDR_TK_LONG;
    UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_g_tc_members[4]._annotations._defaultValue._u.long_value = 0;
    UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_g_tc_members[4]._annotations._minValue._d = RTI_XCDR_TK_LONG;
    UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_g_tc_members[4]._annotations._minValue._u.long_value = -2147483648L;
    UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_g_tc_members[4]._annotations._maxValue._d = RTI_XCDR_TK_LONG;
    UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_g_tc_members[4]._annotations._maxValue._u.long_value = 2147483647L;
    UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_g_tc_members[5]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
    UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_g_tc_members[5]._annotations._defaultValue._u.boolean_value = 0;
    UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_g_tc_members[6]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
    UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_g_tc_members[6]._annotations._defaultValue._u.boolean_value = 0;
    UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_g_tc_members[7]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
    UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_g_tc_members[7]._annotations._defaultValue._u.boolean_value = 0;
    UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_g_tc_members[8]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
    UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_g_tc_members[8]._annotations._defaultValue._u.boolean_value = 0;
    UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_g_tc_members[9]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
    UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_g_tc_members[9]._annotations._defaultValue._u.boolean_value = 0;
    UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_g_tc_members[10]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
    UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_g_tc_members[10]._annotations._defaultValue._u.boolean_value = 0;
    UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_g_tc_members[11]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
    UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_g_tc_members[11]._annotations._defaultValue._u.boolean_value = 0;
    UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_g_tc_members[12]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
    UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_g_tc_members[12]._annotations._defaultValue._u.boolean_value = 0;
    UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_g_tc_members[13]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
    UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_g_tc_members[13]._annotations._defaultValue._u.boolean_value = 0;
    UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_g_tc_members[14]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
    UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_g_tc_members[14]._annotations._defaultValue._u.boolean_value = 0;
    UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_g_tc_members[15]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
    UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_g_tc_members[15]._annotations._defaultValue._u.boolean_value = 0;
    UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_g_tc_members[16]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
    UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_g_tc_members[16]._annotations._defaultValue._u.boolean_value = 0;
    UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_g_tc_members[17]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
    UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_g_tc_members[17]._annotations._defaultValue._u.boolean_value = 0;
    UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_g_tc_members[18]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
    UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_g_tc_members[18]._annotations._defaultValue._u.boolean_value = 0;
    UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_g_tc_members[19]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
    UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_g_tc_members[19]._annotations._defaultValue._u.boolean_value = 0;
    UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_g_tc_members[20]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
    UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_g_tc_members[20]._annotations._defaultValue._u.boolean_value = 0;
    UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_g_tc_members[21]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
    UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_g_tc_members[21]._annotations._defaultValue._u.boolean_value = 0;
    UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_g_tc_members[22]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
    UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_g_tc_members[22]._annotations._defaultValue._u.boolean_value = 0;
    UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_g_tc_members[23]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
    UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_g_tc_members[23]._annotations._defaultValue._u.boolean_value = 0;
    UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_g_tc_members[24]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
    UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_g_tc_members[24]._annotations._defaultValue._u.boolean_value = 0;
    UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_g_tc_members[25]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
    UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_g_tc_members[25]._annotations._defaultValue._u.boolean_value = 0;
    UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_g_tc_members[26]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
    UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_g_tc_members[26]._annotations._defaultValue._u.boolean_value = 0;
    UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_g_tc_members[27]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
    UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_g_tc_members[27]._annotations._defaultValue._u.boolean_value = 0;
    UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_g_tc_members[28]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
    UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_g_tc_members[28]._annotations._defaultValue._u.boolean_value = 0;
    UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_g_tc_members[29]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
    UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_g_tc_members[29]._annotations._defaultValue._u.boolean_value = 0;
    UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_g_tc_members[30]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
    UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_g_tc_members[30]._annotations._defaultValue._u.boolean_value = 0;
    UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_g_tc_members[31]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
    UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_g_tc_members[31]._annotations._defaultValue._u.boolean_value = 0;
    UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_g_tc_members[32]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
    UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_g_tc_members[32]._annotations._defaultValue._u.boolean_value = 0;
    UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_g_tc_members[33]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
    UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_g_tc_members[33]._annotations._defaultValue._u.boolean_value = 0;
    UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_g_tc_members[34]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
    UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_g_tc_members[34]._annotations._defaultValue._u.boolean_value = 0;
    UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_g_tc_members[35]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
    UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_g_tc_members[35]._annotations._defaultValue._u.boolean_value = 0;
    UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_g_tc_members[36]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
    UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_g_tc_members[36]._annotations._defaultValue._u.boolean_value = 0;
    UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_g_tc_members[37]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
    UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_g_tc_members[37]._annotations._defaultValue._u.boolean_value = 0;
    UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_g_tc_members[38]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
    UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_g_tc_members[38]._annotations._defaultValue._u.boolean_value = 0;
    UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_g_tc_members[39]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
    UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_g_tc_members[39]._annotations._defaultValue._u.boolean_value = 0;
    UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_g_tc_members[40]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
    UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_g_tc_members[40]._annotations._defaultValue._u.boolean_value = 0;
    UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_g_tc_members[41]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
    UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_g_tc_members[41]._annotations._defaultValue._u.boolean_value = 0;

    UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_g_tc._data._sampleAccessInfo =
    UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_get_sample_access_info();
    UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_g_tc._data._typePlugin =
    UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_get_type_plugin_info();    

    return &UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_g_tc;
}

#define TSeq UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportTypeSeq
#define T UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType
#include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
#undef T
#undef TSeq

RTIXCdrSampleAccessInfo *UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_get_sample_seq_access_info()
{
    static RTIXCdrSampleAccessInfo UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_g_seqSampleAccessInfo = {
        RTI_XCDR_TYPE_BINDING_CPP, \
        {sizeof(UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportTypeSeq),0,0,0}, \
        RTI_XCDR_FALSE, \
        DDS_Sequence_get_member_value_pointer, \
        UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportTypeSeq_set_member_element_count, \
        NULL, \
        NULL, \
        NULL \
    };

    return &UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_g_seqSampleAccessInfo;
}

RTIXCdrSampleAccessInfo *UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_get_sample_access_info()
{
    static RTIBool is_initialized = RTI_FALSE;

    UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType *sample;

    static RTIXCdrMemberAccessInfo UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_g_memberAccessInfos[44] =
    {RTIXCdrMemberAccessInfo_INITIALIZER};

    static RTIXCdrSampleAccessInfo UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_g_sampleAccessInfo = 
    RTIXCdrSampleAccessInfo_INITIALIZER;

    if (is_initialized) {
        return (RTIXCdrSampleAccessInfo*) &UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_g_sampleAccessInfo;
    }

    RTIXCdrHeap_allocateStruct(
        &sample, 
        UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType);
    if (sample == NULL) {
        return NULL;
    }

    UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->maxAllowedBitRate - (char *)sample);

    UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->maxChannels - (char *)sample);

    UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->maxSampleRate - (char *)sample);

    UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->minAllowedBitRate - (char *)sample);

    UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->minSampleRate - (char *)sample);

    UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_g_memberAccessInfos[5].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->supported10bits - (char *)sample);

    UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_g_memberAccessInfos[6].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->supported12bits - (char *)sample);

    UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_g_memberAccessInfos[7].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->supported14bits - (char *)sample);

    UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_g_memberAccessInfos[8].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->supported16bits - (char *)sample);

    UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_g_memberAccessInfos[9].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->supported20bits - (char *)sample);

    UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_g_memberAccessInfos[10].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->supported24bits - (char *)sample);

    UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_g_memberAccessInfos[11].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->supported32bits - (char *)sample);

    UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_g_memberAccessInfos[12].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->supported40bits - (char *)sample);

    UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_g_memberAccessInfos[13].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->supported48bits - (char *)sample);

    UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_g_memberAccessInfos[14].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->supported56bits - (char *)sample);

    UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_g_memberAccessInfos[15].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->supported64bits - (char *)sample);

    UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_g_memberAccessInfos[16].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->supported8bits - (char *)sample);

    UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_g_memberAccessInfos[17].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->supportedAAC_MPEG2 - (char *)sample);

    UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_g_memberAccessInfos[18].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->supportedAAC_MPEG4 - (char *)sample);

    UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_g_memberAccessInfos[19].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->supportedAIFF - (char *)sample);

    UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_g_memberAccessInfos[20].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->supportedALAC - (char *)sample);

    UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_g_memberAccessInfos[21].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->supportedAverage - (char *)sample);

    UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_g_memberAccessInfos[22].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->supportedBest - (char *)sample);

    UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_g_memberAccessInfos[23].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->supportedBetter - (char *)sample);

    UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_g_memberAccessInfos[24].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->supportedDolbyDigital - (char *)sample);

    UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_g_memberAccessInfos[25].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->supportedDTS - (char *)sample);

    UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_g_memberAccessInfos[26].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->supportedFLAC - (char *)sample);

    UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_g_memberAccessInfos[27].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->supportedGood - (char *)sample);

    UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_g_memberAccessInfos[28].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->supportedLess - (char *)sample);

    UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_g_memberAccessInfos[29].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->supportedLPCM_PCM - (char *)sample);

    UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_g_memberAccessInfos[30].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->supportedMP2 - (char *)sample);

    UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_g_memberAccessInfos[31].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->supportedMP3 - (char *)sample);

    UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_g_memberAccessInfos[32].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->supportedPoor - (char *)sample);

    UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_g_memberAccessInfos[33].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->supportedRealAudio - (char *)sample);

    UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_g_memberAccessInfos[34].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->supportedSpeex - (char *)sample);

    UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_g_memberAccessInfos[35].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->supportedTrueAudio - (char *)sample);

    UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_g_memberAccessInfos[36].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->supportedULAW - (char *)sample);

    UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_g_memberAccessInfos[37].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->supportedVORBIS - (char *)sample);

    UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_g_memberAccessInfos[38].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->supportedWAV - (char *)sample);

    UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_g_memberAccessInfos[39].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->supportedWMA - (char *)sample);

    UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_g_memberAccessInfos[40].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->supportedWMA9_Lossless - (char *)sample);

    UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_g_memberAccessInfos[41].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->supportedWorst - (char *)sample);

    UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_g_memberAccessInfos[42].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->source - (char *)sample);

    UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_g_memberAccessInfos[43].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->timeStamp - (char *)sample);

    UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_g_sampleAccessInfo.memberAccessInfos = 
    UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_g_memberAccessInfos;

    {
        size_t candidateTypeSize = sizeof(UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType);

        if (candidateTypeSize > RTIXCdrLong_MAX) {
            UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_g_sampleAccessInfo.typeSize[0] =
            RTIXCdrLong_MAX;
        } else {
            UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_g_sampleAccessInfo.typeSize[0] =
            (RTIXCdrUnsignedLong) candidateTypeSize;
        }
    }

    UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
    RTI_XCDR_TRUE;

    UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_g_sampleAccessInfo.getMemberValuePointerFcn = 
    UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_get_member_value_pointer;

    UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_g_sampleAccessInfo.languageBinding = 
    RTI_XCDR_TYPE_BINDING_CPP ;

    RTIXCdrHeap_freeStruct(sample);
    is_initialized = RTI_TRUE;
    return (RTIXCdrSampleAccessInfo*) &UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_g_sampleAccessInfo;
}
RTIXCdrTypePlugin *UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_get_type_plugin_info()
{
    static RTIXCdrTypePlugin UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_g_typePlugin = 
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
        UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_initialize_ex,
        NULL,
        (RTIXCdrTypePluginFinalizeSampleFunction)
        UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_finalize_w_return,
        NULL,
        NULL
    };

    return &UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_g_typePlugin;
}
#endif

RTIBool UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_initialize(
    UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType* sample)
{
    return UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_initialize_ex(
        sample, 
        RTI_TRUE, 
        RTI_TRUE);
}
RTIBool UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_initialize_w_params(
    UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType *sample,
    const struct DDS_TypeAllocationParams_t *allocParams)
{

    if (sample == NULL) {
        return RTI_FALSE;
    }
    if (allocParams == NULL) {
        return RTI_FALSE;
    }

    sample->maxAllowedBitRate = 0;

    sample->maxChannels = 0;

    sample->maxSampleRate = 0;

    sample->minAllowedBitRate = 0;

    sample->minSampleRate = 0;

    sample->supported10bits = 0;

    sample->supported12bits = 0;

    sample->supported14bits = 0;

    sample->supported16bits = 0;

    sample->supported20bits = 0;

    sample->supported24bits = 0;

    sample->supported32bits = 0;

    sample->supported40bits = 0;

    sample->supported48bits = 0;

    sample->supported56bits = 0;

    sample->supported64bits = 0;

    sample->supported8bits = 0;

    sample->supportedAAC_MPEG2 = 0;

    sample->supportedAAC_MPEG4 = 0;

    sample->supportedAIFF = 0;

    sample->supportedALAC = 0;

    sample->supportedAverage = 0;

    sample->supportedBest = 0;

    sample->supportedBetter = 0;

    sample->supportedDolbyDigital = 0;

    sample->supportedDTS = 0;

    sample->supportedFLAC = 0;

    sample->supportedGood = 0;

    sample->supportedLess = 0;

    sample->supportedLPCM_PCM = 0;

    sample->supportedMP2 = 0;

    sample->supportedMP3 = 0;

    sample->supportedPoor = 0;

    sample->supportedRealAudio = 0;

    sample->supportedSpeex = 0;

    sample->supportedTrueAudio = 0;

    sample->supportedULAW = 0;

    sample->supportedVORBIS = 0;

    sample->supportedWAV = 0;

    sample->supportedWMA = 0;

    sample->supportedWMA9_Lossless = 0;

    sample->supportedWorst = 0;

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
RTIBool UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_initialize_ex(
    UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType *sample,
    RTIBool allocatePointers, 
    RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_initialize_w_params(
        sample,
        &allocParams);
}

RTIBool UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_finalize_w_return(
    UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType* sample)
{
    UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_finalize_ex(sample, RTI_TRUE);

    return RTI_TRUE;
}

void UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_finalize(
    UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType* sample)
{  
    UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_finalize_ex(
        sample, 
        RTI_TRUE);
}

void UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_finalize_ex(
    UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType *sample,
    RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_finalize_w_params(
        sample,
        &deallocParams);
}

void UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_finalize_w_params(
    UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType *sample,
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

void UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_finalize_optional_members(
    UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType* sample, RTIBool deletePointers)
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

RTIBool UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_copy(
    UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType* dst,
    const UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType* src)
{
    try {

        if (dst == NULL || src == NULL) {
            return RTI_FALSE;
        }

        if (!RTICdrType_copyLong (
            &dst->maxAllowedBitRate, 
            &src->maxAllowedBitRate)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyLong (
            &dst->maxChannels, 
            &src->maxChannels)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyLong (
            &dst->maxSampleRate, 
            &src->maxSampleRate)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyLong (
            &dst->minAllowedBitRate, 
            &src->minAllowedBitRate)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyLong (
            &dst->minSampleRate, 
            &src->minSampleRate)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyBoolean (
            &dst->supported10bits, 
            &src->supported10bits)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyBoolean (
            &dst->supported12bits, 
            &src->supported12bits)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyBoolean (
            &dst->supported14bits, 
            &src->supported14bits)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyBoolean (
            &dst->supported16bits, 
            &src->supported16bits)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyBoolean (
            &dst->supported20bits, 
            &src->supported20bits)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyBoolean (
            &dst->supported24bits, 
            &src->supported24bits)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyBoolean (
            &dst->supported32bits, 
            &src->supported32bits)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyBoolean (
            &dst->supported40bits, 
            &src->supported40bits)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyBoolean (
            &dst->supported48bits, 
            &src->supported48bits)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyBoolean (
            &dst->supported56bits, 
            &src->supported56bits)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyBoolean (
            &dst->supported64bits, 
            &src->supported64bits)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyBoolean (
            &dst->supported8bits, 
            &src->supported8bits)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyBoolean (
            &dst->supportedAAC_MPEG2, 
            &src->supportedAAC_MPEG2)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyBoolean (
            &dst->supportedAAC_MPEG4, 
            &src->supportedAAC_MPEG4)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyBoolean (
            &dst->supportedAIFF, 
            &src->supportedAIFF)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyBoolean (
            &dst->supportedALAC, 
            &src->supportedALAC)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyBoolean (
            &dst->supportedAverage, 
            &src->supportedAverage)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyBoolean (
            &dst->supportedBest, 
            &src->supportedBest)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyBoolean (
            &dst->supportedBetter, 
            &src->supportedBetter)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyBoolean (
            &dst->supportedDolbyDigital, 
            &src->supportedDolbyDigital)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyBoolean (
            &dst->supportedDTS, 
            &src->supportedDTS)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyBoolean (
            &dst->supportedFLAC, 
            &src->supportedFLAC)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyBoolean (
            &dst->supportedGood, 
            &src->supportedGood)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyBoolean (
            &dst->supportedLess, 
            &src->supportedLess)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyBoolean (
            &dst->supportedLPCM_PCM, 
            &src->supportedLPCM_PCM)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyBoolean (
            &dst->supportedMP2, 
            &src->supportedMP2)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyBoolean (
            &dst->supportedMP3, 
            &src->supportedMP3)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyBoolean (
            &dst->supportedPoor, 
            &src->supportedPoor)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyBoolean (
            &dst->supportedRealAudio, 
            &src->supportedRealAudio)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyBoolean (
            &dst->supportedSpeex, 
            &src->supportedSpeex)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyBoolean (
            &dst->supportedTrueAudio, 
            &src->supportedTrueAudio)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyBoolean (
            &dst->supportedULAW, 
            &src->supportedULAW)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyBoolean (
            &dst->supportedVORBIS, 
            &src->supportedVORBIS)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyBoolean (
            &dst->supportedWAV, 
            &src->supportedWAV)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyBoolean (
            &dst->supportedWMA, 
            &src->supportedWMA)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyBoolean (
            &dst->supportedWMA9_Lossless, 
            &src->supportedWMA9_Lossless)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyBoolean (
            &dst->supportedWorst, 
            &src->supportedWorst)) { 
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
* Configure and implement 'UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType' sequence class.
*/
#define T UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType
#define TSeq UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportTypeSeq

#define T_initialize_w_params UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_initialize_w_params

#define T_finalize_w_params   UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_finalize_w_params
#define T_copy       UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_copy

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
        const RTIXCdrTypeCode * type_code< UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType>::get() 
        {
            return (const RTIXCdrTypeCode *) UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_get_typecode();
        }

    } 
}
#endif
