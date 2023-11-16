

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from CameraSpecsReportType.idl 
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

#include "CameraSpecsReportType.h"

#ifndef NDDS_STANDALONE_TYPE
#include "CameraSpecsReportTypePlugin.h"
#endif

#include <new>

/* ========================================================================= */
const char *UMAA_SEM_CameraSpecs_CameraSpecsReportTypeTYPENAME = "UMAA::SEM::CameraSpecs::CameraSpecsReportType";

#ifndef NDDS_STANDALONE_TYPE
DDS_TypeCode * UMAA_SEM_CameraSpecs_CameraSpecsReportType_get_typecode(void)
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode_Member UMAA_SEM_CameraSpecs_CameraSpecsReportType_g_tc_members[44]=
    {

        {
            (char *)"exposureModeAperture",/* Member name */
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
            (char *)"exposureModeAuto",/* Member name */
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
            (char *)"exposureModeManual",/* Member name */
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
            (char *)"exposureModeShutter",/* Member name */
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
            (char *)"focusModeAuto",/* Member name */
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
            (char *)"focusModeManual",/* Member name */
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
            (char *)"imagingModeColor",/* Member name */
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
            (char *)"imagingModeGreyscale",/* Member name */
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
            (char *)"imagingModeInfrared",/* Member name */
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
            (char *)"imagingModeLowlight",/* Member name */
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
            (char *)"lightSensitivity_ISO100",/* Member name */
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
            (char *)"lightSensitivity_ISO1600",/* Member name */
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
            (char *)"lightSensitivity_ISO200",/* Member name */
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
            (char *)"lightSensitivity_ISO3200",/* Member name */
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
            (char *)"lightSensitivity_ISO400",/* Member name */
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
            (char *)"lightSensitivity_ISO800",/* Member name */
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
            (char *)"lightSensitivityAuto",/* Member name */
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
            (char *)"maxAperture",/* Member name */
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
            (char *)"maxFocalLength",/* Member name */
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
            (char *)"maxShutterSpeed",/* Member name */
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
            (char *)"meteringModeAuto",/* Member name */
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
            (char *)"meteringModeCenterWeighted",/* Member name */
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
            (char *)"meteringModeSpot",/* Member name */
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
            (char *)"minAperture",/* Member name */
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
            (char *)"minFocalLength",/* Member name */
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
            (char *)"minShutterSpeed",/* Member name */
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
            (char *)"name",/* Member name */
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
            (char *)"stateActive",/* Member name */
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
            (char *)"stateOff",/* Member name */
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
            (char *)"stateStandby",/* Member name */
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
            (char *)"whiteBalanceAuto",/* Member name */
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
            (char *)"whiteBalanceCloudy",/* Member name */
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
            (char *)"whiteBalanceDaylight",/* Member name */
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
            (char *)"whiteBalanceFlash",/* Member name */
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
            (char *)"whiteBalanceFluorescent",/* Member name */
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
            (char *)"whiteBalanceShade",/* Member name */
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
            (char *)"whiteBalanceTungsten",/* Member name */
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
            (char *)"zoomModeAnalog",/* Member name */
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
            (char *)"zoomModeDigital",/* Member name */
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
            (char *)"zoomModeMixed",/* Member name */
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
            (char *)"zoomModeOff",/* Member name */
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

    static DDS_TypeCode UMAA_SEM_CameraSpecs_CameraSpecsReportType_g_tc =
    {{
            DDS_TK_STRUCT, /* Kind */
            DDS_BOOLEAN_FALSE, /* Ignored */
            -1, /*Ignored*/
            (char *)"UMAA::SEM::CameraSpecs::CameraSpecsReportType", /* Name */
            NULL, /* Ignored */      
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            44, /* Number of members */
            UMAA_SEM_CameraSpecs_CameraSpecsReportType_g_tc_members, /* Members */
            DDS_VM_NONE, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER,
            DDS_BOOLEAN_TRUE, /* _isCopyable */
            NULL, /* _sampleAccessInfo: assigned later */
            NULL /* _typePlugin: assigned later */
        }}; /* Type code for UMAA_SEM_CameraSpecs_CameraSpecsReportType*/

    if (is_initialized) {
        return &UMAA_SEM_CameraSpecs_CameraSpecsReportType_g_tc;
    }

    is_initialized = RTI_TRUE;

    UMAA_SEM_CameraSpecs_CameraSpecsReportType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

    UMAA_SEM_CameraSpecs_CameraSpecsReportType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;
    UMAA_SEM_CameraSpecs_CameraSpecsReportType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;
    UMAA_SEM_CameraSpecs_CameraSpecsReportType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;
    UMAA_SEM_CameraSpecs_CameraSpecsReportType_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;
    UMAA_SEM_CameraSpecs_CameraSpecsReportType_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;
    UMAA_SEM_CameraSpecs_CameraSpecsReportType_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;
    UMAA_SEM_CameraSpecs_CameraSpecsReportType_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;
    UMAA_SEM_CameraSpecs_CameraSpecsReportType_g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;
    UMAA_SEM_CameraSpecs_CameraSpecsReportType_g_tc_members[8]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;
    UMAA_SEM_CameraSpecs_CameraSpecsReportType_g_tc_members[9]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;
    UMAA_SEM_CameraSpecs_CameraSpecsReportType_g_tc_members[10]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;
    UMAA_SEM_CameraSpecs_CameraSpecsReportType_g_tc_members[11]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;
    UMAA_SEM_CameraSpecs_CameraSpecsReportType_g_tc_members[12]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;
    UMAA_SEM_CameraSpecs_CameraSpecsReportType_g_tc_members[13]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;
    UMAA_SEM_CameraSpecs_CameraSpecsReportType_g_tc_members[14]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;
    UMAA_SEM_CameraSpecs_CameraSpecsReportType_g_tc_members[15]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;
    UMAA_SEM_CameraSpecs_CameraSpecsReportType_g_tc_members[16]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;
    UMAA_SEM_CameraSpecs_CameraSpecsReportType_g_tc_members[17]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;
    UMAA_SEM_CameraSpecs_CameraSpecsReportType_g_tc_members[18]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_Distance_Precise_get_typecode();
    UMAA_SEM_CameraSpecs_CameraSpecsReportType_g_tc_members[19]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_Distance_Precise_get_typecode();
    UMAA_SEM_CameraSpecs_CameraSpecsReportType_g_tc_members[20]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_Duration_Seconds_get_typecode();
    UMAA_SEM_CameraSpecs_CameraSpecsReportType_g_tc_members[21]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;
    UMAA_SEM_CameraSpecs_CameraSpecsReportType_g_tc_members[22]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;
    UMAA_SEM_CameraSpecs_CameraSpecsReportType_g_tc_members[23]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;
    UMAA_SEM_CameraSpecs_CameraSpecsReportType_g_tc_members[24]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_Distance_Precise_get_typecode();
    UMAA_SEM_CameraSpecs_CameraSpecsReportType_g_tc_members[25]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_Distance_Precise_get_typecode();
    UMAA_SEM_CameraSpecs_CameraSpecsReportType_g_tc_members[26]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_Duration_Seconds_get_typecode();
    UMAA_SEM_CameraSpecs_CameraSpecsReportType_g_tc_members[27]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_PrimitiveConstrained_StringShortDescription_get_typecode();
    UMAA_SEM_CameraSpecs_CameraSpecsReportType_g_tc_members[28]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;
    UMAA_SEM_CameraSpecs_CameraSpecsReportType_g_tc_members[29]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;
    UMAA_SEM_CameraSpecs_CameraSpecsReportType_g_tc_members[30]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;
    UMAA_SEM_CameraSpecs_CameraSpecsReportType_g_tc_members[31]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;
    UMAA_SEM_CameraSpecs_CameraSpecsReportType_g_tc_members[32]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;
    UMAA_SEM_CameraSpecs_CameraSpecsReportType_g_tc_members[33]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;
    UMAA_SEM_CameraSpecs_CameraSpecsReportType_g_tc_members[34]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;
    UMAA_SEM_CameraSpecs_CameraSpecsReportType_g_tc_members[35]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;
    UMAA_SEM_CameraSpecs_CameraSpecsReportType_g_tc_members[36]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;
    UMAA_SEM_CameraSpecs_CameraSpecsReportType_g_tc_members[37]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;
    UMAA_SEM_CameraSpecs_CameraSpecsReportType_g_tc_members[38]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;
    UMAA_SEM_CameraSpecs_CameraSpecsReportType_g_tc_members[39]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;
    UMAA_SEM_CameraSpecs_CameraSpecsReportType_g_tc_members[40]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;
    UMAA_SEM_CameraSpecs_CameraSpecsReportType_g_tc_members[41]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;
    UMAA_SEM_CameraSpecs_CameraSpecsReportType_g_tc_members[42]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_NumericGUID_get_typecode();
    UMAA_SEM_CameraSpecs_CameraSpecsReportType_g_tc_members[43]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_DateTime_get_typecode();

    /* Initialize the values for member annotations. */
    UMAA_SEM_CameraSpecs_CameraSpecsReportType_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
    UMAA_SEM_CameraSpecs_CameraSpecsReportType_g_tc_members[0]._annotations._defaultValue._u.boolean_value = 0;
    UMAA_SEM_CameraSpecs_CameraSpecsReportType_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
    UMAA_SEM_CameraSpecs_CameraSpecsReportType_g_tc_members[1]._annotations._defaultValue._u.boolean_value = 0;
    UMAA_SEM_CameraSpecs_CameraSpecsReportType_g_tc_members[2]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
    UMAA_SEM_CameraSpecs_CameraSpecsReportType_g_tc_members[2]._annotations._defaultValue._u.boolean_value = 0;
    UMAA_SEM_CameraSpecs_CameraSpecsReportType_g_tc_members[3]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
    UMAA_SEM_CameraSpecs_CameraSpecsReportType_g_tc_members[3]._annotations._defaultValue._u.boolean_value = 0;
    UMAA_SEM_CameraSpecs_CameraSpecsReportType_g_tc_members[4]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
    UMAA_SEM_CameraSpecs_CameraSpecsReportType_g_tc_members[4]._annotations._defaultValue._u.boolean_value = 0;
    UMAA_SEM_CameraSpecs_CameraSpecsReportType_g_tc_members[5]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
    UMAA_SEM_CameraSpecs_CameraSpecsReportType_g_tc_members[5]._annotations._defaultValue._u.boolean_value = 0;
    UMAA_SEM_CameraSpecs_CameraSpecsReportType_g_tc_members[6]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
    UMAA_SEM_CameraSpecs_CameraSpecsReportType_g_tc_members[6]._annotations._defaultValue._u.boolean_value = 0;
    UMAA_SEM_CameraSpecs_CameraSpecsReportType_g_tc_members[7]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
    UMAA_SEM_CameraSpecs_CameraSpecsReportType_g_tc_members[7]._annotations._defaultValue._u.boolean_value = 0;
    UMAA_SEM_CameraSpecs_CameraSpecsReportType_g_tc_members[8]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
    UMAA_SEM_CameraSpecs_CameraSpecsReportType_g_tc_members[8]._annotations._defaultValue._u.boolean_value = 0;
    UMAA_SEM_CameraSpecs_CameraSpecsReportType_g_tc_members[9]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
    UMAA_SEM_CameraSpecs_CameraSpecsReportType_g_tc_members[9]._annotations._defaultValue._u.boolean_value = 0;
    UMAA_SEM_CameraSpecs_CameraSpecsReportType_g_tc_members[10]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
    UMAA_SEM_CameraSpecs_CameraSpecsReportType_g_tc_members[10]._annotations._defaultValue._u.boolean_value = 0;
    UMAA_SEM_CameraSpecs_CameraSpecsReportType_g_tc_members[11]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
    UMAA_SEM_CameraSpecs_CameraSpecsReportType_g_tc_members[11]._annotations._defaultValue._u.boolean_value = 0;
    UMAA_SEM_CameraSpecs_CameraSpecsReportType_g_tc_members[12]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
    UMAA_SEM_CameraSpecs_CameraSpecsReportType_g_tc_members[12]._annotations._defaultValue._u.boolean_value = 0;
    UMAA_SEM_CameraSpecs_CameraSpecsReportType_g_tc_members[13]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
    UMAA_SEM_CameraSpecs_CameraSpecsReportType_g_tc_members[13]._annotations._defaultValue._u.boolean_value = 0;
    UMAA_SEM_CameraSpecs_CameraSpecsReportType_g_tc_members[14]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
    UMAA_SEM_CameraSpecs_CameraSpecsReportType_g_tc_members[14]._annotations._defaultValue._u.boolean_value = 0;
    UMAA_SEM_CameraSpecs_CameraSpecsReportType_g_tc_members[15]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
    UMAA_SEM_CameraSpecs_CameraSpecsReportType_g_tc_members[15]._annotations._defaultValue._u.boolean_value = 0;
    UMAA_SEM_CameraSpecs_CameraSpecsReportType_g_tc_members[16]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
    UMAA_SEM_CameraSpecs_CameraSpecsReportType_g_tc_members[16]._annotations._defaultValue._u.boolean_value = 0;
    UMAA_SEM_CameraSpecs_CameraSpecsReportType_g_tc_members[17]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
    UMAA_SEM_CameraSpecs_CameraSpecsReportType_g_tc_members[17]._annotations._defaultValue._u.boolean_value = 0;
    UMAA_SEM_CameraSpecs_CameraSpecsReportType_g_tc_members[18]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_SEM_CameraSpecs_CameraSpecsReportType_g_tc_members[18]._annotations._defaultValue._u.double_value = 0.0;
    UMAA_SEM_CameraSpecs_CameraSpecsReportType_g_tc_members[18]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_SEM_CameraSpecs_CameraSpecsReportType_g_tc_members[18]._annotations._minValue._u.double_value = 0ULL;
    UMAA_SEM_CameraSpecs_CameraSpecsReportType_g_tc_members[18]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_SEM_CameraSpecs_CameraSpecsReportType_g_tc_members[18]._annotations._maxValue._u.double_value = 401056000ULL;
    UMAA_SEM_CameraSpecs_CameraSpecsReportType_g_tc_members[19]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_SEM_CameraSpecs_CameraSpecsReportType_g_tc_members[19]._annotations._defaultValue._u.double_value = 0.0;
    UMAA_SEM_CameraSpecs_CameraSpecsReportType_g_tc_members[19]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_SEM_CameraSpecs_CameraSpecsReportType_g_tc_members[19]._annotations._minValue._u.double_value = 0ULL;
    UMAA_SEM_CameraSpecs_CameraSpecsReportType_g_tc_members[19]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_SEM_CameraSpecs_CameraSpecsReportType_g_tc_members[19]._annotations._maxValue._u.double_value = 401056000ULL;
    UMAA_SEM_CameraSpecs_CameraSpecsReportType_g_tc_members[20]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_SEM_CameraSpecs_CameraSpecsReportType_g_tc_members[20]._annotations._defaultValue._u.double_value = 0.0;
    UMAA_SEM_CameraSpecs_CameraSpecsReportType_g_tc_members[20]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_SEM_CameraSpecs_CameraSpecsReportType_g_tc_members[20]._annotations._minValue._u.double_value = 0ULL;
    UMAA_SEM_CameraSpecs_CameraSpecsReportType_g_tc_members[20]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_SEM_CameraSpecs_CameraSpecsReportType_g_tc_members[20]._annotations._maxValue._u.double_value = 37817280ULL;
    UMAA_SEM_CameraSpecs_CameraSpecsReportType_g_tc_members[21]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
    UMAA_SEM_CameraSpecs_CameraSpecsReportType_g_tc_members[21]._annotations._defaultValue._u.boolean_value = 0;
    UMAA_SEM_CameraSpecs_CameraSpecsReportType_g_tc_members[22]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
    UMAA_SEM_CameraSpecs_CameraSpecsReportType_g_tc_members[22]._annotations._defaultValue._u.boolean_value = 0;
    UMAA_SEM_CameraSpecs_CameraSpecsReportType_g_tc_members[23]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
    UMAA_SEM_CameraSpecs_CameraSpecsReportType_g_tc_members[23]._annotations._defaultValue._u.boolean_value = 0;
    UMAA_SEM_CameraSpecs_CameraSpecsReportType_g_tc_members[24]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_SEM_CameraSpecs_CameraSpecsReportType_g_tc_members[24]._annotations._defaultValue._u.double_value = 0.0;
    UMAA_SEM_CameraSpecs_CameraSpecsReportType_g_tc_members[24]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_SEM_CameraSpecs_CameraSpecsReportType_g_tc_members[24]._annotations._minValue._u.double_value = 0ULL;
    UMAA_SEM_CameraSpecs_CameraSpecsReportType_g_tc_members[24]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_SEM_CameraSpecs_CameraSpecsReportType_g_tc_members[24]._annotations._maxValue._u.double_value = 401056000ULL;
    UMAA_SEM_CameraSpecs_CameraSpecsReportType_g_tc_members[25]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_SEM_CameraSpecs_CameraSpecsReportType_g_tc_members[25]._annotations._defaultValue._u.double_value = 0.0;
    UMAA_SEM_CameraSpecs_CameraSpecsReportType_g_tc_members[25]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_SEM_CameraSpecs_CameraSpecsReportType_g_tc_members[25]._annotations._minValue._u.double_value = 0ULL;
    UMAA_SEM_CameraSpecs_CameraSpecsReportType_g_tc_members[25]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_SEM_CameraSpecs_CameraSpecsReportType_g_tc_members[25]._annotations._maxValue._u.double_value = 401056000ULL;
    UMAA_SEM_CameraSpecs_CameraSpecsReportType_g_tc_members[26]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_SEM_CameraSpecs_CameraSpecsReportType_g_tc_members[26]._annotations._defaultValue._u.double_value = 0.0;
    UMAA_SEM_CameraSpecs_CameraSpecsReportType_g_tc_members[26]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_SEM_CameraSpecs_CameraSpecsReportType_g_tc_members[26]._annotations._minValue._u.double_value = 0ULL;
    UMAA_SEM_CameraSpecs_CameraSpecsReportType_g_tc_members[26]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_SEM_CameraSpecs_CameraSpecsReportType_g_tc_members[26]._annotations._maxValue._u.double_value = 37817280ULL;
    UMAA_SEM_CameraSpecs_CameraSpecsReportType_g_tc_members[27]._annotations._defaultValue._d = RTI_XCDR_TK_STRING;
    UMAA_SEM_CameraSpecs_CameraSpecsReportType_g_tc_members[27]._annotations._defaultValue._u.string_value = (DDS_Char *) "";
    UMAA_SEM_CameraSpecs_CameraSpecsReportType_g_tc_members[28]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
    UMAA_SEM_CameraSpecs_CameraSpecsReportType_g_tc_members[28]._annotations._defaultValue._u.boolean_value = 0;
    UMAA_SEM_CameraSpecs_CameraSpecsReportType_g_tc_members[29]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
    UMAA_SEM_CameraSpecs_CameraSpecsReportType_g_tc_members[29]._annotations._defaultValue._u.boolean_value = 0;
    UMAA_SEM_CameraSpecs_CameraSpecsReportType_g_tc_members[30]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
    UMAA_SEM_CameraSpecs_CameraSpecsReportType_g_tc_members[30]._annotations._defaultValue._u.boolean_value = 0;
    UMAA_SEM_CameraSpecs_CameraSpecsReportType_g_tc_members[31]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
    UMAA_SEM_CameraSpecs_CameraSpecsReportType_g_tc_members[31]._annotations._defaultValue._u.boolean_value = 0;
    UMAA_SEM_CameraSpecs_CameraSpecsReportType_g_tc_members[32]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
    UMAA_SEM_CameraSpecs_CameraSpecsReportType_g_tc_members[32]._annotations._defaultValue._u.boolean_value = 0;
    UMAA_SEM_CameraSpecs_CameraSpecsReportType_g_tc_members[33]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
    UMAA_SEM_CameraSpecs_CameraSpecsReportType_g_tc_members[33]._annotations._defaultValue._u.boolean_value = 0;
    UMAA_SEM_CameraSpecs_CameraSpecsReportType_g_tc_members[34]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
    UMAA_SEM_CameraSpecs_CameraSpecsReportType_g_tc_members[34]._annotations._defaultValue._u.boolean_value = 0;
    UMAA_SEM_CameraSpecs_CameraSpecsReportType_g_tc_members[35]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
    UMAA_SEM_CameraSpecs_CameraSpecsReportType_g_tc_members[35]._annotations._defaultValue._u.boolean_value = 0;
    UMAA_SEM_CameraSpecs_CameraSpecsReportType_g_tc_members[36]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
    UMAA_SEM_CameraSpecs_CameraSpecsReportType_g_tc_members[36]._annotations._defaultValue._u.boolean_value = 0;
    UMAA_SEM_CameraSpecs_CameraSpecsReportType_g_tc_members[37]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
    UMAA_SEM_CameraSpecs_CameraSpecsReportType_g_tc_members[37]._annotations._defaultValue._u.boolean_value = 0;
    UMAA_SEM_CameraSpecs_CameraSpecsReportType_g_tc_members[38]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
    UMAA_SEM_CameraSpecs_CameraSpecsReportType_g_tc_members[38]._annotations._defaultValue._u.boolean_value = 0;
    UMAA_SEM_CameraSpecs_CameraSpecsReportType_g_tc_members[39]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
    UMAA_SEM_CameraSpecs_CameraSpecsReportType_g_tc_members[39]._annotations._defaultValue._u.boolean_value = 0;
    UMAA_SEM_CameraSpecs_CameraSpecsReportType_g_tc_members[40]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
    UMAA_SEM_CameraSpecs_CameraSpecsReportType_g_tc_members[40]._annotations._defaultValue._u.boolean_value = 0;
    UMAA_SEM_CameraSpecs_CameraSpecsReportType_g_tc_members[41]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
    UMAA_SEM_CameraSpecs_CameraSpecsReportType_g_tc_members[41]._annotations._defaultValue._u.boolean_value = 0;

    UMAA_SEM_CameraSpecs_CameraSpecsReportType_g_tc._data._sampleAccessInfo =
    UMAA_SEM_CameraSpecs_CameraSpecsReportType_get_sample_access_info();
    UMAA_SEM_CameraSpecs_CameraSpecsReportType_g_tc._data._typePlugin =
    UMAA_SEM_CameraSpecs_CameraSpecsReportType_get_type_plugin_info();    

    return &UMAA_SEM_CameraSpecs_CameraSpecsReportType_g_tc;
}

#define TSeq UMAA_SEM_CameraSpecs_CameraSpecsReportTypeSeq
#define T UMAA_SEM_CameraSpecs_CameraSpecsReportType
#include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
#undef T
#undef TSeq

RTIXCdrSampleAccessInfo *UMAA_SEM_CameraSpecs_CameraSpecsReportType_get_sample_seq_access_info()
{
    static RTIXCdrSampleAccessInfo UMAA_SEM_CameraSpecs_CameraSpecsReportType_g_seqSampleAccessInfo = {
        RTI_XCDR_TYPE_BINDING_CPP, \
        {sizeof(UMAA_SEM_CameraSpecs_CameraSpecsReportTypeSeq),0,0,0}, \
        RTI_XCDR_FALSE, \
        DDS_Sequence_get_member_value_pointer, \
        UMAA_SEM_CameraSpecs_CameraSpecsReportTypeSeq_set_member_element_count, \
        NULL, \
        NULL, \
        NULL \
    };

    return &UMAA_SEM_CameraSpecs_CameraSpecsReportType_g_seqSampleAccessInfo;
}

RTIXCdrSampleAccessInfo *UMAA_SEM_CameraSpecs_CameraSpecsReportType_get_sample_access_info()
{
    static RTIBool is_initialized = RTI_FALSE;

    UMAA_SEM_CameraSpecs_CameraSpecsReportType *sample;

    static RTIXCdrMemberAccessInfo UMAA_SEM_CameraSpecs_CameraSpecsReportType_g_memberAccessInfos[44] =
    {RTIXCdrMemberAccessInfo_INITIALIZER};

    static RTIXCdrSampleAccessInfo UMAA_SEM_CameraSpecs_CameraSpecsReportType_g_sampleAccessInfo = 
    RTIXCdrSampleAccessInfo_INITIALIZER;

    if (is_initialized) {
        return (RTIXCdrSampleAccessInfo*) &UMAA_SEM_CameraSpecs_CameraSpecsReportType_g_sampleAccessInfo;
    }

    RTIXCdrHeap_allocateStruct(
        &sample, 
        UMAA_SEM_CameraSpecs_CameraSpecsReportType);
    if (sample == NULL) {
        return NULL;
    }

    UMAA_SEM_CameraSpecs_CameraSpecsReportType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->exposureModeAperture - (char *)sample);

    UMAA_SEM_CameraSpecs_CameraSpecsReportType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->exposureModeAuto - (char *)sample);

    UMAA_SEM_CameraSpecs_CameraSpecsReportType_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->exposureModeManual - (char *)sample);

    UMAA_SEM_CameraSpecs_CameraSpecsReportType_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->exposureModeShutter - (char *)sample);

    UMAA_SEM_CameraSpecs_CameraSpecsReportType_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->focusModeAuto - (char *)sample);

    UMAA_SEM_CameraSpecs_CameraSpecsReportType_g_memberAccessInfos[5].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->focusModeManual - (char *)sample);

    UMAA_SEM_CameraSpecs_CameraSpecsReportType_g_memberAccessInfos[6].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->imageStabilization - (char *)sample);

    UMAA_SEM_CameraSpecs_CameraSpecsReportType_g_memberAccessInfos[7].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->imagingModeColor - (char *)sample);

    UMAA_SEM_CameraSpecs_CameraSpecsReportType_g_memberAccessInfos[8].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->imagingModeGreyscale - (char *)sample);

    UMAA_SEM_CameraSpecs_CameraSpecsReportType_g_memberAccessInfos[9].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->imagingModeInfrared - (char *)sample);

    UMAA_SEM_CameraSpecs_CameraSpecsReportType_g_memberAccessInfos[10].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->imagingModeLowlight - (char *)sample);

    UMAA_SEM_CameraSpecs_CameraSpecsReportType_g_memberAccessInfos[11].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->lightSensitivity_ISO100 - (char *)sample);

    UMAA_SEM_CameraSpecs_CameraSpecsReportType_g_memberAccessInfos[12].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->lightSensitivity_ISO1600 - (char *)sample);

    UMAA_SEM_CameraSpecs_CameraSpecsReportType_g_memberAccessInfos[13].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->lightSensitivity_ISO200 - (char *)sample);

    UMAA_SEM_CameraSpecs_CameraSpecsReportType_g_memberAccessInfos[14].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->lightSensitivity_ISO3200 - (char *)sample);

    UMAA_SEM_CameraSpecs_CameraSpecsReportType_g_memberAccessInfos[15].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->lightSensitivity_ISO400 - (char *)sample);

    UMAA_SEM_CameraSpecs_CameraSpecsReportType_g_memberAccessInfos[16].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->lightSensitivity_ISO800 - (char *)sample);

    UMAA_SEM_CameraSpecs_CameraSpecsReportType_g_memberAccessInfos[17].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->lightSensitivityAuto - (char *)sample);

    UMAA_SEM_CameraSpecs_CameraSpecsReportType_g_memberAccessInfos[18].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->maxAperture - (char *)sample);

    UMAA_SEM_CameraSpecs_CameraSpecsReportType_g_memberAccessInfos[19].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->maxFocalLength - (char *)sample);

    UMAA_SEM_CameraSpecs_CameraSpecsReportType_g_memberAccessInfos[20].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->maxShutterSpeed - (char *)sample);

    UMAA_SEM_CameraSpecs_CameraSpecsReportType_g_memberAccessInfos[21].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->meteringModeAuto - (char *)sample);

    UMAA_SEM_CameraSpecs_CameraSpecsReportType_g_memberAccessInfos[22].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->meteringModeCenterWeighted - (char *)sample);

    UMAA_SEM_CameraSpecs_CameraSpecsReportType_g_memberAccessInfos[23].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->meteringModeSpot - (char *)sample);

    UMAA_SEM_CameraSpecs_CameraSpecsReportType_g_memberAccessInfos[24].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->minAperture - (char *)sample);

    UMAA_SEM_CameraSpecs_CameraSpecsReportType_g_memberAccessInfos[25].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->minFocalLength - (char *)sample);

    UMAA_SEM_CameraSpecs_CameraSpecsReportType_g_memberAccessInfos[26].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->minShutterSpeed - (char *)sample);

    UMAA_SEM_CameraSpecs_CameraSpecsReportType_g_memberAccessInfos[27].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->name - (char *)sample);

    UMAA_SEM_CameraSpecs_CameraSpecsReportType_g_memberAccessInfos[28].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->stateActive - (char *)sample);

    UMAA_SEM_CameraSpecs_CameraSpecsReportType_g_memberAccessInfos[29].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->stateOff - (char *)sample);

    UMAA_SEM_CameraSpecs_CameraSpecsReportType_g_memberAccessInfos[30].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->stateStandby - (char *)sample);

    UMAA_SEM_CameraSpecs_CameraSpecsReportType_g_memberAccessInfos[31].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->whiteBalanceAuto - (char *)sample);

    UMAA_SEM_CameraSpecs_CameraSpecsReportType_g_memberAccessInfos[32].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->whiteBalanceCloudy - (char *)sample);

    UMAA_SEM_CameraSpecs_CameraSpecsReportType_g_memberAccessInfos[33].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->whiteBalanceDaylight - (char *)sample);

    UMAA_SEM_CameraSpecs_CameraSpecsReportType_g_memberAccessInfos[34].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->whiteBalanceFlash - (char *)sample);

    UMAA_SEM_CameraSpecs_CameraSpecsReportType_g_memberAccessInfos[35].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->whiteBalanceFluorescent - (char *)sample);

    UMAA_SEM_CameraSpecs_CameraSpecsReportType_g_memberAccessInfos[36].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->whiteBalanceShade - (char *)sample);

    UMAA_SEM_CameraSpecs_CameraSpecsReportType_g_memberAccessInfos[37].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->whiteBalanceTungsten - (char *)sample);

    UMAA_SEM_CameraSpecs_CameraSpecsReportType_g_memberAccessInfos[38].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->zoomModeAnalog - (char *)sample);

    UMAA_SEM_CameraSpecs_CameraSpecsReportType_g_memberAccessInfos[39].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->zoomModeDigital - (char *)sample);

    UMAA_SEM_CameraSpecs_CameraSpecsReportType_g_memberAccessInfos[40].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->zoomModeMixed - (char *)sample);

    UMAA_SEM_CameraSpecs_CameraSpecsReportType_g_memberAccessInfos[41].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->zoomModeOff - (char *)sample);

    UMAA_SEM_CameraSpecs_CameraSpecsReportType_g_memberAccessInfos[42].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->source - (char *)sample);

    UMAA_SEM_CameraSpecs_CameraSpecsReportType_g_memberAccessInfos[43].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->timeStamp - (char *)sample);

    UMAA_SEM_CameraSpecs_CameraSpecsReportType_g_sampleAccessInfo.memberAccessInfos = 
    UMAA_SEM_CameraSpecs_CameraSpecsReportType_g_memberAccessInfos;

    {
        size_t candidateTypeSize = sizeof(UMAA_SEM_CameraSpecs_CameraSpecsReportType);

        if (candidateTypeSize > RTIXCdrLong_MAX) {
            UMAA_SEM_CameraSpecs_CameraSpecsReportType_g_sampleAccessInfo.typeSize[0] =
            RTIXCdrLong_MAX;
        } else {
            UMAA_SEM_CameraSpecs_CameraSpecsReportType_g_sampleAccessInfo.typeSize[0] =
            (RTIXCdrUnsignedLong) candidateTypeSize;
        }
    }

    UMAA_SEM_CameraSpecs_CameraSpecsReportType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
    RTI_XCDR_TRUE;

    UMAA_SEM_CameraSpecs_CameraSpecsReportType_g_sampleAccessInfo.getMemberValuePointerFcn = 
    UMAA_SEM_CameraSpecs_CameraSpecsReportType_get_member_value_pointer;

    UMAA_SEM_CameraSpecs_CameraSpecsReportType_g_sampleAccessInfo.languageBinding = 
    RTI_XCDR_TYPE_BINDING_CPP ;

    RTIXCdrHeap_freeStruct(sample);
    is_initialized = RTI_TRUE;
    return (RTIXCdrSampleAccessInfo*) &UMAA_SEM_CameraSpecs_CameraSpecsReportType_g_sampleAccessInfo;
}
RTIXCdrTypePlugin *UMAA_SEM_CameraSpecs_CameraSpecsReportType_get_type_plugin_info()
{
    static RTIXCdrTypePlugin UMAA_SEM_CameraSpecs_CameraSpecsReportType_g_typePlugin = 
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
        UMAA_SEM_CameraSpecs_CameraSpecsReportType_initialize_ex,
        NULL,
        (RTIXCdrTypePluginFinalizeSampleFunction)
        UMAA_SEM_CameraSpecs_CameraSpecsReportType_finalize_w_return,
        NULL,
        NULL
    };

    return &UMAA_SEM_CameraSpecs_CameraSpecsReportType_g_typePlugin;
}
#endif

RTIBool UMAA_SEM_CameraSpecs_CameraSpecsReportType_initialize(
    UMAA_SEM_CameraSpecs_CameraSpecsReportType* sample)
{
    return UMAA_SEM_CameraSpecs_CameraSpecsReportType_initialize_ex(
        sample, 
        RTI_TRUE, 
        RTI_TRUE);
}
RTIBool UMAA_SEM_CameraSpecs_CameraSpecsReportType_initialize_w_params(
    UMAA_SEM_CameraSpecs_CameraSpecsReportType *sample,
    const struct DDS_TypeAllocationParams_t *allocParams)
{

    if (sample == NULL) {
        return RTI_FALSE;
    }
    if (allocParams == NULL) {
        return RTI_FALSE;
    }

    sample->exposureModeAperture = 0;

    sample->exposureModeAuto = 0;

    sample->exposureModeManual = 0;

    sample->exposureModeShutter = 0;

    sample->focusModeAuto = 0;

    sample->focusModeManual = 0;

    sample->imageStabilization = 0;

    sample->imagingModeColor = 0;

    sample->imagingModeGreyscale = 0;

    sample->imagingModeInfrared = 0;

    sample->imagingModeLowlight = 0;

    sample->lightSensitivity_ISO100 = 0;

    sample->lightSensitivity_ISO1600 = 0;

    sample->lightSensitivity_ISO200 = 0;

    sample->lightSensitivity_ISO3200 = 0;

    sample->lightSensitivity_ISO400 = 0;

    sample->lightSensitivity_ISO800 = 0;

    sample->lightSensitivityAuto = 0;

    sample->maxAperture = 0.0;

    sample->maxFocalLength = 0.0;

    sample->maxShutterSpeed = 0.0;

    sample->meteringModeAuto = 0;

    sample->meteringModeCenterWeighted = 0;

    sample->meteringModeSpot = 0;

    sample->minAperture = 0.0;

    sample->minFocalLength = 0.0;

    sample->minShutterSpeed = 0.0;

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

    sample->whiteBalanceAuto = 0;

    sample->whiteBalanceCloudy = 0;

    sample->whiteBalanceDaylight = 0;

    sample->whiteBalanceFlash = 0;

    sample->whiteBalanceFluorescent = 0;

    sample->whiteBalanceShade = 0;

    sample->whiteBalanceTungsten = 0;

    sample->zoomModeAnalog = 0;

    sample->zoomModeDigital = 0;

    sample->zoomModeMixed = 0;

    sample->zoomModeOff = 0;

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
RTIBool UMAA_SEM_CameraSpecs_CameraSpecsReportType_initialize_ex(
    UMAA_SEM_CameraSpecs_CameraSpecsReportType *sample,
    RTIBool allocatePointers, 
    RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return UMAA_SEM_CameraSpecs_CameraSpecsReportType_initialize_w_params(
        sample,
        &allocParams);
}

RTIBool UMAA_SEM_CameraSpecs_CameraSpecsReportType_finalize_w_return(
    UMAA_SEM_CameraSpecs_CameraSpecsReportType* sample)
{
    UMAA_SEM_CameraSpecs_CameraSpecsReportType_finalize_ex(sample, RTI_TRUE);

    return RTI_TRUE;
}

void UMAA_SEM_CameraSpecs_CameraSpecsReportType_finalize(
    UMAA_SEM_CameraSpecs_CameraSpecsReportType* sample)
{  
    UMAA_SEM_CameraSpecs_CameraSpecsReportType_finalize_ex(
        sample, 
        RTI_TRUE);
}

void UMAA_SEM_CameraSpecs_CameraSpecsReportType_finalize_ex(
    UMAA_SEM_CameraSpecs_CameraSpecsReportType *sample,
    RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    UMAA_SEM_CameraSpecs_CameraSpecsReportType_finalize_w_params(
        sample,
        &deallocParams);
}

void UMAA_SEM_CameraSpecs_CameraSpecsReportType_finalize_w_params(
    UMAA_SEM_CameraSpecs_CameraSpecsReportType *sample,
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

void UMAA_SEM_CameraSpecs_CameraSpecsReportType_finalize_optional_members(
    UMAA_SEM_CameraSpecs_CameraSpecsReportType* sample, RTIBool deletePointers)
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

RTIBool UMAA_SEM_CameraSpecs_CameraSpecsReportType_copy(
    UMAA_SEM_CameraSpecs_CameraSpecsReportType* dst,
    const UMAA_SEM_CameraSpecs_CameraSpecsReportType* src)
{
    try {

        if (dst == NULL || src == NULL) {
            return RTI_FALSE;
        }

        if (!RTICdrType_copyBoolean (
            &dst->exposureModeAperture, 
            &src->exposureModeAperture)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyBoolean (
            &dst->exposureModeAuto, 
            &src->exposureModeAuto)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyBoolean (
            &dst->exposureModeManual, 
            &src->exposureModeManual)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyBoolean (
            &dst->exposureModeShutter, 
            &src->exposureModeShutter)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyBoolean (
            &dst->focusModeAuto, 
            &src->focusModeAuto)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyBoolean (
            &dst->focusModeManual, 
            &src->focusModeManual)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyBoolean (
            &dst->imageStabilization, 
            &src->imageStabilization)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyBoolean (
            &dst->imagingModeColor, 
            &src->imagingModeColor)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyBoolean (
            &dst->imagingModeGreyscale, 
            &src->imagingModeGreyscale)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyBoolean (
            &dst->imagingModeInfrared, 
            &src->imagingModeInfrared)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyBoolean (
            &dst->imagingModeLowlight, 
            &src->imagingModeLowlight)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyBoolean (
            &dst->lightSensitivity_ISO100, 
            &src->lightSensitivity_ISO100)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyBoolean (
            &dst->lightSensitivity_ISO1600, 
            &src->lightSensitivity_ISO1600)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyBoolean (
            &dst->lightSensitivity_ISO200, 
            &src->lightSensitivity_ISO200)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyBoolean (
            &dst->lightSensitivity_ISO3200, 
            &src->lightSensitivity_ISO3200)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyBoolean (
            &dst->lightSensitivity_ISO400, 
            &src->lightSensitivity_ISO400)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyBoolean (
            &dst->lightSensitivity_ISO800, 
            &src->lightSensitivity_ISO800)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyBoolean (
            &dst->lightSensitivityAuto, 
            &src->lightSensitivityAuto)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyDouble (
            &dst->maxAperture, 
            &src->maxAperture)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyDouble (
            &dst->maxFocalLength, 
            &src->maxFocalLength)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyDouble (
            &dst->maxShutterSpeed, 
            &src->maxShutterSpeed)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyBoolean (
            &dst->meteringModeAuto, 
            &src->meteringModeAuto)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyBoolean (
            &dst->meteringModeCenterWeighted, 
            &src->meteringModeCenterWeighted)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyBoolean (
            &dst->meteringModeSpot, 
            &src->meteringModeSpot)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyDouble (
            &dst->minAperture, 
            &src->minAperture)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyDouble (
            &dst->minFocalLength, 
            &src->minFocalLength)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyDouble (
            &dst->minShutterSpeed, 
            &src->minShutterSpeed)) { 
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
            &dst->whiteBalanceAuto, 
            &src->whiteBalanceAuto)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyBoolean (
            &dst->whiteBalanceCloudy, 
            &src->whiteBalanceCloudy)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyBoolean (
            &dst->whiteBalanceDaylight, 
            &src->whiteBalanceDaylight)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyBoolean (
            &dst->whiteBalanceFlash, 
            &src->whiteBalanceFlash)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyBoolean (
            &dst->whiteBalanceFluorescent, 
            &src->whiteBalanceFluorescent)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyBoolean (
            &dst->whiteBalanceShade, 
            &src->whiteBalanceShade)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyBoolean (
            &dst->whiteBalanceTungsten, 
            &src->whiteBalanceTungsten)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyBoolean (
            &dst->zoomModeAnalog, 
            &src->zoomModeAnalog)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyBoolean (
            &dst->zoomModeDigital, 
            &src->zoomModeDigital)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyBoolean (
            &dst->zoomModeMixed, 
            &src->zoomModeMixed)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyBoolean (
            &dst->zoomModeOff, 
            &src->zoomModeOff)) { 
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
* Configure and implement 'UMAA_SEM_CameraSpecs_CameraSpecsReportType' sequence class.
*/
#define T UMAA_SEM_CameraSpecs_CameraSpecsReportType
#define TSeq UMAA_SEM_CameraSpecs_CameraSpecsReportTypeSeq

#define T_initialize_w_params UMAA_SEM_CameraSpecs_CameraSpecsReportType_initialize_w_params

#define T_finalize_w_params   UMAA_SEM_CameraSpecs_CameraSpecsReportType_finalize_w_params
#define T_copy       UMAA_SEM_CameraSpecs_CameraSpecsReportType_copy

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
        const RTIXCdrTypeCode * type_code< UMAA_SEM_CameraSpecs_CameraSpecsReportType>::get() 
        {
            return (const RTIXCdrTypeCode *) UMAA_SEM_CameraSpecs_CameraSpecsReportType_get_typecode();
        }

    } 
}
#endif
