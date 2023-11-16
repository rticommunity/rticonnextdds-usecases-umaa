

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from H264VideoEncodingSpecsReportType.idl 
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

#include "H264VideoEncodingSpecsReportType.h"

#ifndef NDDS_STANDALONE_TYPE
#include "H264VideoEncodingSpecsReportTypePlugin.h"
#endif

#include <new>

/* ========================================================================= */
const char *UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportTypeTYPENAME = "UMAA::SEM::H264VideoEncodingSpecs::H264VideoEncodingSpecsReportType";

#ifndef NDDS_STANDALONE_TYPE
DDS_TypeCode * UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_get_typecode(void)
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode_Member UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_g_tc_members[53]=
    {

        {
            (char *)"supportedBaseline",/* Member name */
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
            (char *)"supportedBestQuality",/* Member name */
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
            (char *)"supportedCAVLC444",/* Member name */
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
            (char *)"supportedConstrainedBaseline",/* Member name */
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
            (char *)"supportedConstrainedHigh",/* Member name */
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
            (char *)"supportedDriveVision",/* Member name */
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
            (char *)"supportedExtended",/* Member name */
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
            (char *)"supportedGradualDecoderRefresh",/* Member name */
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
            (char *)"supportedGroupOfPictures",/* Member name */
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
            (char *)"supportedHigh",/* Member name */
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
            (char *)"supportedHigh10",/* Member name */
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
            (char *)"supportedHigh10Intra",/* Member name */
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
            (char *)"supportedHigh422",/* Member name */
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
            (char *)"supportedHigh422Intra",/* Member name */
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
            (char *)"supportedHigh444Intra",/* Member name */
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
            (char *)"supportedHigh444Predictive",/* Member name */
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
            (char *)"supportedLevel1",/* Member name */
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
            (char *)"supportedLevel11",/* Member name */
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
            (char *)"supportedLevel12",/* Member name */
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
            (char *)"supportedLevel13",/* Member name */
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
            (char *)"supportedLevel1B",/* Member name */
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
            (char *)"supportedLevel2",/* Member name */
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
            (char *)"supportedLevel21",/* Member name */
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
            (char *)"supportedLevel22",/* Member name */
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
            (char *)"supportedLevel3",/* Member name */
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
            (char *)"supportedLevel31",/* Member name */
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
            (char *)"supportedLevel32",/* Member name */
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
            (char *)"supportedLevel4",/* Member name */
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
            (char *)"supportedLevel41",/* Member name */
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
            (char *)"supportedLevel42",/* Member name */
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
            (char *)"supportedLevel5",/* Member name */
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
            (char *)"supportedLevel51",/* Member name */
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
            (char *)"supportedLevel52",/* Member name */
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
            (char *)"supportedLowLatency",/* Member name */
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
            (char *)"supportedMain",/* Member name */
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
            (char *)"supportedManipulation",/* Member name */
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
            (char *)"supportedMultiviewHigh",/* Member name */
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
            (char *)"supportedPersistentStare",/* Member name */
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
            (char *)"supportedProgramSpecific1",/* Member name */
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
            (char *)"supportedProgramSpecific2",/* Member name */
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
            (char *)"supportedProgramSpecific3",/* Member name */
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
            (char *)"supportedProgramSpecific4",/* Member name */
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
            (char *)"supportedProgressiveHigh",/* Member name */
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
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }, 
        {
            (char *)"supportedRegionOfInterest",/* Member name */
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
        }, 
        {
            (char *)"supportedScalableBaseline",/* Member name */
            {
                44,/* Representation ID */
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
            (char *)"supportedScalableConstrainedBaseline",/* Member name */
            {
                45,/* Representation ID */
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
            (char *)"supportedScalableConstrainedHigh",/* Member name */
            {
                46,/* Representation ID */
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
            (char *)"supportedScalableHigh",/* Member name */
            {
                47,/* Representation ID */
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
            (char *)"supportedScalableHighIntra",/* Member name */
            {
                48,/* Representation ID */
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
            (char *)"supportedSlowComms",/* Member name */
            {
                49,/* Representation ID */
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
            (char *)"supportedStereoHigh",/* Member name */
            {
                50,/* Representation ID */
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
                51,/* Representation ID */
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
                52,/* Representation ID */
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

    static DDS_TypeCode UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_g_tc =
    {{
            DDS_TK_STRUCT, /* Kind */
            DDS_BOOLEAN_FALSE, /* Ignored */
            -1, /*Ignored*/
            (char *)"UMAA::SEM::H264VideoEncodingSpecs::H264VideoEncodingSpecsReportType", /* Name */
            NULL, /* Ignored */      
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            53, /* Number of members */
            UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_g_tc_members, /* Members */
            DDS_VM_NONE, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER,
            DDS_BOOLEAN_TRUE, /* _isCopyable */
            NULL, /* _sampleAccessInfo: assigned later */
            NULL /* _typePlugin: assigned later */
        }}; /* Type code for UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType*/

    if (is_initialized) {
        return &UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_g_tc;
    }

    is_initialized = RTI_TRUE;

    UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

    UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;
    UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;
    UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;
    UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;
    UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;
    UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;
    UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;
    UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;
    UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_g_tc_members[8]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;
    UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_g_tc_members[9]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;
    UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_g_tc_members[10]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;
    UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_g_tc_members[11]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;
    UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_g_tc_members[12]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;
    UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_g_tc_members[13]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;
    UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_g_tc_members[14]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;
    UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_g_tc_members[15]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;
    UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_g_tc_members[16]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;
    UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_g_tc_members[17]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;
    UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_g_tc_members[18]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;
    UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_g_tc_members[19]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;
    UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_g_tc_members[20]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;
    UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_g_tc_members[21]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;
    UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_g_tc_members[22]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;
    UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_g_tc_members[23]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;
    UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_g_tc_members[24]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;
    UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_g_tc_members[25]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;
    UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_g_tc_members[26]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;
    UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_g_tc_members[27]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;
    UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_g_tc_members[28]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;
    UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_g_tc_members[29]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;
    UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_g_tc_members[30]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;
    UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_g_tc_members[31]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;
    UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_g_tc_members[32]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;
    UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_g_tc_members[33]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;
    UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_g_tc_members[34]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;
    UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_g_tc_members[35]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;
    UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_g_tc_members[36]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;
    UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_g_tc_members[37]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;
    UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_g_tc_members[38]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;
    UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_g_tc_members[39]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;
    UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_g_tc_members[40]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;
    UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_g_tc_members[41]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;
    UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_g_tc_members[42]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;
    UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_g_tc_members[43]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;
    UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_g_tc_members[44]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;
    UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_g_tc_members[45]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;
    UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_g_tc_members[46]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;
    UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_g_tc_members[47]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;
    UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_g_tc_members[48]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;
    UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_g_tc_members[49]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;
    UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_g_tc_members[50]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;
    UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_g_tc_members[51]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_NumericGUID_get_typecode();
    UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_g_tc_members[52]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_DateTime_get_typecode();

    /* Initialize the values for member annotations. */
    UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
    UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_g_tc_members[0]._annotations._defaultValue._u.boolean_value = 0;
    UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
    UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_g_tc_members[1]._annotations._defaultValue._u.boolean_value = 0;
    UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_g_tc_members[2]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
    UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_g_tc_members[2]._annotations._defaultValue._u.boolean_value = 0;
    UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_g_tc_members[3]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
    UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_g_tc_members[3]._annotations._defaultValue._u.boolean_value = 0;
    UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_g_tc_members[4]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
    UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_g_tc_members[4]._annotations._defaultValue._u.boolean_value = 0;
    UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_g_tc_members[5]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
    UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_g_tc_members[5]._annotations._defaultValue._u.boolean_value = 0;
    UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_g_tc_members[6]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
    UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_g_tc_members[6]._annotations._defaultValue._u.boolean_value = 0;
    UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_g_tc_members[7]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
    UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_g_tc_members[7]._annotations._defaultValue._u.boolean_value = 0;
    UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_g_tc_members[8]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
    UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_g_tc_members[8]._annotations._defaultValue._u.boolean_value = 0;
    UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_g_tc_members[9]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
    UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_g_tc_members[9]._annotations._defaultValue._u.boolean_value = 0;
    UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_g_tc_members[10]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
    UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_g_tc_members[10]._annotations._defaultValue._u.boolean_value = 0;
    UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_g_tc_members[11]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
    UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_g_tc_members[11]._annotations._defaultValue._u.boolean_value = 0;
    UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_g_tc_members[12]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
    UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_g_tc_members[12]._annotations._defaultValue._u.boolean_value = 0;
    UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_g_tc_members[13]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
    UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_g_tc_members[13]._annotations._defaultValue._u.boolean_value = 0;
    UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_g_tc_members[14]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
    UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_g_tc_members[14]._annotations._defaultValue._u.boolean_value = 0;
    UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_g_tc_members[15]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
    UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_g_tc_members[15]._annotations._defaultValue._u.boolean_value = 0;
    UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_g_tc_members[16]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
    UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_g_tc_members[16]._annotations._defaultValue._u.boolean_value = 0;
    UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_g_tc_members[17]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
    UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_g_tc_members[17]._annotations._defaultValue._u.boolean_value = 0;
    UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_g_tc_members[18]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
    UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_g_tc_members[18]._annotations._defaultValue._u.boolean_value = 0;
    UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_g_tc_members[19]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
    UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_g_tc_members[19]._annotations._defaultValue._u.boolean_value = 0;
    UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_g_tc_members[20]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
    UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_g_tc_members[20]._annotations._defaultValue._u.boolean_value = 0;
    UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_g_tc_members[21]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
    UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_g_tc_members[21]._annotations._defaultValue._u.boolean_value = 0;
    UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_g_tc_members[22]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
    UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_g_tc_members[22]._annotations._defaultValue._u.boolean_value = 0;
    UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_g_tc_members[23]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
    UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_g_tc_members[23]._annotations._defaultValue._u.boolean_value = 0;
    UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_g_tc_members[24]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
    UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_g_tc_members[24]._annotations._defaultValue._u.boolean_value = 0;
    UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_g_tc_members[25]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
    UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_g_tc_members[25]._annotations._defaultValue._u.boolean_value = 0;
    UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_g_tc_members[26]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
    UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_g_tc_members[26]._annotations._defaultValue._u.boolean_value = 0;
    UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_g_tc_members[27]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
    UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_g_tc_members[27]._annotations._defaultValue._u.boolean_value = 0;
    UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_g_tc_members[28]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
    UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_g_tc_members[28]._annotations._defaultValue._u.boolean_value = 0;
    UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_g_tc_members[29]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
    UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_g_tc_members[29]._annotations._defaultValue._u.boolean_value = 0;
    UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_g_tc_members[30]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
    UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_g_tc_members[30]._annotations._defaultValue._u.boolean_value = 0;
    UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_g_tc_members[31]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
    UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_g_tc_members[31]._annotations._defaultValue._u.boolean_value = 0;
    UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_g_tc_members[32]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
    UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_g_tc_members[32]._annotations._defaultValue._u.boolean_value = 0;
    UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_g_tc_members[33]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
    UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_g_tc_members[33]._annotations._defaultValue._u.boolean_value = 0;
    UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_g_tc_members[34]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
    UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_g_tc_members[34]._annotations._defaultValue._u.boolean_value = 0;
    UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_g_tc_members[35]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
    UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_g_tc_members[35]._annotations._defaultValue._u.boolean_value = 0;
    UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_g_tc_members[36]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
    UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_g_tc_members[36]._annotations._defaultValue._u.boolean_value = 0;
    UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_g_tc_members[37]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
    UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_g_tc_members[37]._annotations._defaultValue._u.boolean_value = 0;
    UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_g_tc_members[38]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
    UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_g_tc_members[38]._annotations._defaultValue._u.boolean_value = 0;
    UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_g_tc_members[39]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
    UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_g_tc_members[39]._annotations._defaultValue._u.boolean_value = 0;
    UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_g_tc_members[40]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
    UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_g_tc_members[40]._annotations._defaultValue._u.boolean_value = 0;
    UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_g_tc_members[41]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
    UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_g_tc_members[41]._annotations._defaultValue._u.boolean_value = 0;
    UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_g_tc_members[42]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
    UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_g_tc_members[42]._annotations._defaultValue._u.boolean_value = 0;
    UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_g_tc_members[43]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
    UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_g_tc_members[43]._annotations._defaultValue._u.boolean_value = 0;
    UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_g_tc_members[44]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
    UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_g_tc_members[44]._annotations._defaultValue._u.boolean_value = 0;
    UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_g_tc_members[45]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
    UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_g_tc_members[45]._annotations._defaultValue._u.boolean_value = 0;
    UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_g_tc_members[46]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
    UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_g_tc_members[46]._annotations._defaultValue._u.boolean_value = 0;
    UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_g_tc_members[47]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
    UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_g_tc_members[47]._annotations._defaultValue._u.boolean_value = 0;
    UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_g_tc_members[48]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
    UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_g_tc_members[48]._annotations._defaultValue._u.boolean_value = 0;
    UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_g_tc_members[49]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
    UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_g_tc_members[49]._annotations._defaultValue._u.boolean_value = 0;
    UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_g_tc_members[50]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
    UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_g_tc_members[50]._annotations._defaultValue._u.boolean_value = 0;

    UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_g_tc._data._sampleAccessInfo =
    UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_get_sample_access_info();
    UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_g_tc._data._typePlugin =
    UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_get_type_plugin_info();    

    return &UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_g_tc;
}

#define TSeq UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportTypeSeq
#define T UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType
#include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
#undef T
#undef TSeq

RTIXCdrSampleAccessInfo *UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_get_sample_seq_access_info()
{
    static RTIXCdrSampleAccessInfo UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_g_seqSampleAccessInfo = {
        RTI_XCDR_TYPE_BINDING_CPP, \
        {sizeof(UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportTypeSeq),0,0,0}, \
        RTI_XCDR_FALSE, \
        DDS_Sequence_get_member_value_pointer, \
        UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportTypeSeq_set_member_element_count, \
        NULL, \
        NULL, \
        NULL \
    };

    return &UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_g_seqSampleAccessInfo;
}

RTIXCdrSampleAccessInfo *UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_get_sample_access_info()
{
    static RTIBool is_initialized = RTI_FALSE;

    UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType *sample;

    static RTIXCdrMemberAccessInfo UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_g_memberAccessInfos[53] =
    {RTIXCdrMemberAccessInfo_INITIALIZER};

    static RTIXCdrSampleAccessInfo UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_g_sampleAccessInfo = 
    RTIXCdrSampleAccessInfo_INITIALIZER;

    if (is_initialized) {
        return (RTIXCdrSampleAccessInfo*) &UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_g_sampleAccessInfo;
    }

    RTIXCdrHeap_allocateStruct(
        &sample, 
        UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType);
    if (sample == NULL) {
        return NULL;
    }

    UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->supportedBaseline - (char *)sample);

    UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->supportedBestQuality - (char *)sample);

    UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->supportedCAVLC444 - (char *)sample);

    UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->supportedConstrainedBaseline - (char *)sample);

    UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->supportedConstrainedHigh - (char *)sample);

    UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_g_memberAccessInfos[5].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->supportedDriveVision - (char *)sample);

    UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_g_memberAccessInfos[6].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->supportedExtended - (char *)sample);

    UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_g_memberAccessInfos[7].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->supportedGradualDecoderRefresh - (char *)sample);

    UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_g_memberAccessInfos[8].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->supportedGroupOfPictures - (char *)sample);

    UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_g_memberAccessInfos[9].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->supportedHigh - (char *)sample);

    UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_g_memberAccessInfos[10].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->supportedHigh10 - (char *)sample);

    UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_g_memberAccessInfos[11].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->supportedHigh10Intra - (char *)sample);

    UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_g_memberAccessInfos[12].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->supportedHigh422 - (char *)sample);

    UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_g_memberAccessInfos[13].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->supportedHigh422Intra - (char *)sample);

    UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_g_memberAccessInfos[14].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->supportedHigh444Intra - (char *)sample);

    UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_g_memberAccessInfos[15].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->supportedHigh444Predictive - (char *)sample);

    UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_g_memberAccessInfos[16].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->supportedLevel1 - (char *)sample);

    UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_g_memberAccessInfos[17].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->supportedLevel11 - (char *)sample);

    UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_g_memberAccessInfos[18].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->supportedLevel12 - (char *)sample);

    UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_g_memberAccessInfos[19].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->supportedLevel13 - (char *)sample);

    UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_g_memberAccessInfos[20].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->supportedLevel1B - (char *)sample);

    UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_g_memberAccessInfos[21].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->supportedLevel2 - (char *)sample);

    UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_g_memberAccessInfos[22].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->supportedLevel21 - (char *)sample);

    UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_g_memberAccessInfos[23].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->supportedLevel22 - (char *)sample);

    UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_g_memberAccessInfos[24].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->supportedLevel3 - (char *)sample);

    UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_g_memberAccessInfos[25].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->supportedLevel31 - (char *)sample);

    UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_g_memberAccessInfos[26].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->supportedLevel32 - (char *)sample);

    UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_g_memberAccessInfos[27].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->supportedLevel4 - (char *)sample);

    UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_g_memberAccessInfos[28].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->supportedLevel41 - (char *)sample);

    UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_g_memberAccessInfos[29].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->supportedLevel42 - (char *)sample);

    UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_g_memberAccessInfos[30].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->supportedLevel5 - (char *)sample);

    UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_g_memberAccessInfos[31].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->supportedLevel51 - (char *)sample);

    UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_g_memberAccessInfos[32].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->supportedLevel52 - (char *)sample);

    UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_g_memberAccessInfos[33].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->supportedLowLatency - (char *)sample);

    UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_g_memberAccessInfos[34].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->supportedMain - (char *)sample);

    UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_g_memberAccessInfos[35].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->supportedManipulation - (char *)sample);

    UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_g_memberAccessInfos[36].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->supportedMultiviewHigh - (char *)sample);

    UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_g_memberAccessInfos[37].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->supportedPersistentStare - (char *)sample);

    UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_g_memberAccessInfos[38].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->supportedProgramSpecific1 - (char *)sample);

    UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_g_memberAccessInfos[39].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->supportedProgramSpecific2 - (char *)sample);

    UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_g_memberAccessInfos[40].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->supportedProgramSpecific3 - (char *)sample);

    UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_g_memberAccessInfos[41].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->supportedProgramSpecific4 - (char *)sample);

    UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_g_memberAccessInfos[42].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->supportedProgressiveHigh - (char *)sample);

    UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_g_memberAccessInfos[43].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->supportedRegionOfInterest - (char *)sample);

    UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_g_memberAccessInfos[44].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->supportedScalableBaseline - (char *)sample);

    UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_g_memberAccessInfos[45].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->supportedScalableConstrainedBaseline - (char *)sample);

    UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_g_memberAccessInfos[46].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->supportedScalableConstrainedHigh - (char *)sample);

    UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_g_memberAccessInfos[47].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->supportedScalableHigh - (char *)sample);

    UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_g_memberAccessInfos[48].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->supportedScalableHighIntra - (char *)sample);

    UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_g_memberAccessInfos[49].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->supportedSlowComms - (char *)sample);

    UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_g_memberAccessInfos[50].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->supportedStereoHigh - (char *)sample);

    UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_g_memberAccessInfos[51].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->source - (char *)sample);

    UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_g_memberAccessInfos[52].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->timeStamp - (char *)sample);

    UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_g_sampleAccessInfo.memberAccessInfos = 
    UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_g_memberAccessInfos;

    {
        size_t candidateTypeSize = sizeof(UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType);

        if (candidateTypeSize > RTIXCdrLong_MAX) {
            UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_g_sampleAccessInfo.typeSize[0] =
            RTIXCdrLong_MAX;
        } else {
            UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_g_sampleAccessInfo.typeSize[0] =
            (RTIXCdrUnsignedLong) candidateTypeSize;
        }
    }

    UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
    RTI_XCDR_TRUE;

    UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_g_sampleAccessInfo.getMemberValuePointerFcn = 
    UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_get_member_value_pointer;

    UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_g_sampleAccessInfo.languageBinding = 
    RTI_XCDR_TYPE_BINDING_CPP ;

    RTIXCdrHeap_freeStruct(sample);
    is_initialized = RTI_TRUE;
    return (RTIXCdrSampleAccessInfo*) &UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_g_sampleAccessInfo;
}
RTIXCdrTypePlugin *UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_get_type_plugin_info()
{
    static RTIXCdrTypePlugin UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_g_typePlugin = 
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
        UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_initialize_ex,
        NULL,
        (RTIXCdrTypePluginFinalizeSampleFunction)
        UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_finalize_w_return,
        NULL,
        NULL
    };

    return &UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_g_typePlugin;
}
#endif

RTIBool UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_initialize(
    UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType* sample)
{
    return UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_initialize_ex(
        sample, 
        RTI_TRUE, 
        RTI_TRUE);
}
RTIBool UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_initialize_w_params(
    UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType *sample,
    const struct DDS_TypeAllocationParams_t *allocParams)
{

    if (sample == NULL) {
        return RTI_FALSE;
    }
    if (allocParams == NULL) {
        return RTI_FALSE;
    }

    sample->supportedBaseline = 0;

    sample->supportedBestQuality = 0;

    sample->supportedCAVLC444 = 0;

    sample->supportedConstrainedBaseline = 0;

    sample->supportedConstrainedHigh = 0;

    sample->supportedDriveVision = 0;

    sample->supportedExtended = 0;

    sample->supportedGradualDecoderRefresh = 0;

    sample->supportedGroupOfPictures = 0;

    sample->supportedHigh = 0;

    sample->supportedHigh10 = 0;

    sample->supportedHigh10Intra = 0;

    sample->supportedHigh422 = 0;

    sample->supportedHigh422Intra = 0;

    sample->supportedHigh444Intra = 0;

    sample->supportedHigh444Predictive = 0;

    sample->supportedLevel1 = 0;

    sample->supportedLevel11 = 0;

    sample->supportedLevel12 = 0;

    sample->supportedLevel13 = 0;

    sample->supportedLevel1B = 0;

    sample->supportedLevel2 = 0;

    sample->supportedLevel21 = 0;

    sample->supportedLevel22 = 0;

    sample->supportedLevel3 = 0;

    sample->supportedLevel31 = 0;

    sample->supportedLevel32 = 0;

    sample->supportedLevel4 = 0;

    sample->supportedLevel41 = 0;

    sample->supportedLevel42 = 0;

    sample->supportedLevel5 = 0;

    sample->supportedLevel51 = 0;

    sample->supportedLevel52 = 0;

    sample->supportedLowLatency = 0;

    sample->supportedMain = 0;

    sample->supportedManipulation = 0;

    sample->supportedMultiviewHigh = 0;

    sample->supportedPersistentStare = 0;

    sample->supportedProgramSpecific1 = 0;

    sample->supportedProgramSpecific2 = 0;

    sample->supportedProgramSpecific3 = 0;

    sample->supportedProgramSpecific4 = 0;

    sample->supportedProgressiveHigh = 0;

    sample->supportedRegionOfInterest = 0;

    sample->supportedScalableBaseline = 0;

    sample->supportedScalableConstrainedBaseline = 0;

    sample->supportedScalableConstrainedHigh = 0;

    sample->supportedScalableHigh = 0;

    sample->supportedScalableHighIntra = 0;

    sample->supportedSlowComms = 0;

    sample->supportedStereoHigh = 0;

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
RTIBool UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_initialize_ex(
    UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType *sample,
    RTIBool allocatePointers, 
    RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_initialize_w_params(
        sample,
        &allocParams);
}

RTIBool UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_finalize_w_return(
    UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType* sample)
{
    UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_finalize_ex(sample, RTI_TRUE);

    return RTI_TRUE;
}

void UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_finalize(
    UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType* sample)
{  
    UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_finalize_ex(
        sample, 
        RTI_TRUE);
}

void UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_finalize_ex(
    UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType *sample,
    RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_finalize_w_params(
        sample,
        &deallocParams);
}

void UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_finalize_w_params(
    UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType *sample,
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

void UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_finalize_optional_members(
    UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType* sample, RTIBool deletePointers)
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

RTIBool UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_copy(
    UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType* dst,
    const UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType* src)
{
    try {

        if (dst == NULL || src == NULL) {
            return RTI_FALSE;
        }

        if (!RTICdrType_copyBoolean (
            &dst->supportedBaseline, 
            &src->supportedBaseline)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyBoolean (
            &dst->supportedBestQuality, 
            &src->supportedBestQuality)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyBoolean (
            &dst->supportedCAVLC444, 
            &src->supportedCAVLC444)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyBoolean (
            &dst->supportedConstrainedBaseline, 
            &src->supportedConstrainedBaseline)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyBoolean (
            &dst->supportedConstrainedHigh, 
            &src->supportedConstrainedHigh)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyBoolean (
            &dst->supportedDriveVision, 
            &src->supportedDriveVision)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyBoolean (
            &dst->supportedExtended, 
            &src->supportedExtended)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyBoolean (
            &dst->supportedGradualDecoderRefresh, 
            &src->supportedGradualDecoderRefresh)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyBoolean (
            &dst->supportedGroupOfPictures, 
            &src->supportedGroupOfPictures)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyBoolean (
            &dst->supportedHigh, 
            &src->supportedHigh)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyBoolean (
            &dst->supportedHigh10, 
            &src->supportedHigh10)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyBoolean (
            &dst->supportedHigh10Intra, 
            &src->supportedHigh10Intra)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyBoolean (
            &dst->supportedHigh422, 
            &src->supportedHigh422)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyBoolean (
            &dst->supportedHigh422Intra, 
            &src->supportedHigh422Intra)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyBoolean (
            &dst->supportedHigh444Intra, 
            &src->supportedHigh444Intra)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyBoolean (
            &dst->supportedHigh444Predictive, 
            &src->supportedHigh444Predictive)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyBoolean (
            &dst->supportedLevel1, 
            &src->supportedLevel1)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyBoolean (
            &dst->supportedLevel11, 
            &src->supportedLevel11)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyBoolean (
            &dst->supportedLevel12, 
            &src->supportedLevel12)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyBoolean (
            &dst->supportedLevel13, 
            &src->supportedLevel13)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyBoolean (
            &dst->supportedLevel1B, 
            &src->supportedLevel1B)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyBoolean (
            &dst->supportedLevel2, 
            &src->supportedLevel2)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyBoolean (
            &dst->supportedLevel21, 
            &src->supportedLevel21)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyBoolean (
            &dst->supportedLevel22, 
            &src->supportedLevel22)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyBoolean (
            &dst->supportedLevel3, 
            &src->supportedLevel3)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyBoolean (
            &dst->supportedLevel31, 
            &src->supportedLevel31)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyBoolean (
            &dst->supportedLevel32, 
            &src->supportedLevel32)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyBoolean (
            &dst->supportedLevel4, 
            &src->supportedLevel4)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyBoolean (
            &dst->supportedLevel41, 
            &src->supportedLevel41)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyBoolean (
            &dst->supportedLevel42, 
            &src->supportedLevel42)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyBoolean (
            &dst->supportedLevel5, 
            &src->supportedLevel5)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyBoolean (
            &dst->supportedLevel51, 
            &src->supportedLevel51)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyBoolean (
            &dst->supportedLevel52, 
            &src->supportedLevel52)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyBoolean (
            &dst->supportedLowLatency, 
            &src->supportedLowLatency)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyBoolean (
            &dst->supportedMain, 
            &src->supportedMain)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyBoolean (
            &dst->supportedManipulation, 
            &src->supportedManipulation)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyBoolean (
            &dst->supportedMultiviewHigh, 
            &src->supportedMultiviewHigh)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyBoolean (
            &dst->supportedPersistentStare, 
            &src->supportedPersistentStare)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyBoolean (
            &dst->supportedProgramSpecific1, 
            &src->supportedProgramSpecific1)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyBoolean (
            &dst->supportedProgramSpecific2, 
            &src->supportedProgramSpecific2)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyBoolean (
            &dst->supportedProgramSpecific3, 
            &src->supportedProgramSpecific3)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyBoolean (
            &dst->supportedProgramSpecific4, 
            &src->supportedProgramSpecific4)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyBoolean (
            &dst->supportedProgressiveHigh, 
            &src->supportedProgressiveHigh)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyBoolean (
            &dst->supportedRegionOfInterest, 
            &src->supportedRegionOfInterest)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyBoolean (
            &dst->supportedScalableBaseline, 
            &src->supportedScalableBaseline)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyBoolean (
            &dst->supportedScalableConstrainedBaseline, 
            &src->supportedScalableConstrainedBaseline)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyBoolean (
            &dst->supportedScalableConstrainedHigh, 
            &src->supportedScalableConstrainedHigh)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyBoolean (
            &dst->supportedScalableHigh, 
            &src->supportedScalableHigh)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyBoolean (
            &dst->supportedScalableHighIntra, 
            &src->supportedScalableHighIntra)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyBoolean (
            &dst->supportedSlowComms, 
            &src->supportedSlowComms)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyBoolean (
            &dst->supportedStereoHigh, 
            &src->supportedStereoHigh)) { 
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
* Configure and implement 'UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType' sequence class.
*/
#define T UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType
#define TSeq UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportTypeSeq

#define T_initialize_w_params UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_initialize_w_params

#define T_finalize_w_params   UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_finalize_w_params
#define T_copy       UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_copy

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
        const RTIXCdrTypeCode * type_code< UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType>::get() 
        {
            return (const RTIXCdrTypeCode *) UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_get_typecode();
        }

    } 
}
#endif
