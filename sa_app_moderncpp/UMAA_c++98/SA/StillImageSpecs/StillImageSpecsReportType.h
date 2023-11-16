

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from StillImageSpecsReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef StillImageSpecsReportType_1083537659_h
#define StillImageSpecsReportType_1083537659_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "UMAA/Common/Enumeration/EnumerationSets.h"
#include "UMAA/Common/Measurement/Measurements.h"

static const DDS_Char * const UMAA_SA_StillImageSpecs_StillImageSpecsReport_TOPIC= "UMAA::SA::StillImageSpecs::StillImageSpecsReport";

extern "C" {

    extern const char *UMAA_SA_StillImageSpecs_StillImageSpecsReportTypeTYPENAME;

}

struct UMAA_SA_StillImageSpecs_StillImageSpecsReportTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_SA_StillImageSpecs_StillImageSpecsReportTypeTypeSupport;
class UMAA_SA_StillImageSpecs_StillImageSpecsReportTypeDataWriter;
class UMAA_SA_StillImageSpecs_StillImageSpecsReportTypeDataReader;
#endif
class UMAA_SA_StillImageSpecs_StillImageSpecsReportType 
{
  public:
    typedef struct UMAA_SA_StillImageSpecs_StillImageSpecsReportTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_SA_StillImageSpecs_StillImageSpecsReportTypeTypeSupport TypeSupport;
    typedef UMAA_SA_StillImageSpecs_StillImageSpecsReportTypeDataWriter DataWriter;
    typedef UMAA_SA_StillImageSpecs_StillImageSpecsReportTypeDataReader DataReader;
    #endif

    DDS_Boolean   supportedBMP ;
    DDS_Boolean   supportedCGA_320x200 ;
    DDS_Boolean   supportedCIF_1408x1152 ;
    DDS_Boolean   supportedCIF_352x288 ;
    DDS_Boolean   supportedCIF_704x576 ;
    DDS_Boolean   supportedCR2 ;
    DDS_Boolean   supportedDNG ;
    DDS_Boolean   supportedEGA_640x350 ;
    DDS_Boolean   supportedGIF ;
    DDS_Boolean   supportedHD1080_1920x1080 ;
    DDS_Boolean   supportedHD480_852x480 ;
    DDS_Boolean   supportedHD720_1280x720 ;
    DDS_Boolean   supportedHSXGA_5120x4096 ;
    DDS_Boolean   supportedJPEG ;
    DDS_Boolean   supportedNEF ;
    DDS_Boolean   supportedPGM ;
    DDS_Boolean   supportedPNG ;
    DDS_Boolean   supportedPNM ;
    DDS_Boolean   supportedPPM ;
    DDS_Boolean   supportedQCIF_176x144 ;
    DDS_Boolean   supportedQQVGA_160x120 ;
    DDS_Boolean   supportedQSXGA_2560x2048 ;
    DDS_Boolean   supportedQVGA_320x240 ;
    DDS_Boolean   supportedQXGA_2048x1536 ;
    DDS_Boolean   supportedSQCIF_128x96 ;
    DDS_Boolean   supportedSVGA_800x600 ;
    DDS_Boolean   supportedSXGA_1280x1024 ;
    DDS_Boolean   supportedTIFF ;
    DDS_Boolean   supportedUXGA_1600x1200 ;
    DDS_Boolean   supportedVGA_640x480 ;
    DDS_Boolean   supportedWHSXGA_6400x4096 ;
    DDS_Boolean   supportedWHUXGA_7680x4800 ;
    DDS_Boolean   supportedWOXGA_2560x1600 ;
    DDS_Boolean   supportedWQSXGA_3200x2048 ;
    DDS_Boolean   supportedWQUXGA_3840x2400 ;
    DDS_Boolean   supportedWSXGA_1600x1024 ;
    DDS_Boolean   supportedWUXGA_1920x1200 ;
    DDS_Boolean   supportedWVGA_852x480 ;
    DDS_Boolean   supportedWXGA_1366x768 ;
    DDS_Boolean   supportedXGA_1024x768 ;
    UMAA_Common_Measurement_NumericGUID   source ;
    UMAA_Common_Measurement_DateTime   timeStamp ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_SA_StillImageSpecs_StillImageSpecsReportType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_SA_StillImageSpecs_StillImageSpecsReportType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_SA_StillImageSpecs_StillImageSpecsReportType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_SA_StillImageSpecs_StillImageSpecsReportType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_SA_StillImageSpecs_StillImageSpecsReportTypeSeq, UMAA_SA_StillImageSpecs_StillImageSpecsReportType);

NDDSUSERDllExport
RTIBool UMAA_SA_StillImageSpecs_StillImageSpecsReportType_initialize(
    UMAA_SA_StillImageSpecs_StillImageSpecsReportType* self);

NDDSUSERDllExport
RTIBool UMAA_SA_StillImageSpecs_StillImageSpecsReportType_initialize_ex(
    UMAA_SA_StillImageSpecs_StillImageSpecsReportType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_SA_StillImageSpecs_StillImageSpecsReportType_initialize_w_params(
    UMAA_SA_StillImageSpecs_StillImageSpecsReportType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_SA_StillImageSpecs_StillImageSpecsReportType_finalize_w_return(
    UMAA_SA_StillImageSpecs_StillImageSpecsReportType* self);

NDDSUSERDllExport
void UMAA_SA_StillImageSpecs_StillImageSpecsReportType_finalize(
    UMAA_SA_StillImageSpecs_StillImageSpecsReportType* self);

NDDSUSERDllExport
void UMAA_SA_StillImageSpecs_StillImageSpecsReportType_finalize_ex(
    UMAA_SA_StillImageSpecs_StillImageSpecsReportType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_SA_StillImageSpecs_StillImageSpecsReportType_finalize_w_params(
    UMAA_SA_StillImageSpecs_StillImageSpecsReportType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_SA_StillImageSpecs_StillImageSpecsReportType_finalize_optional_members(
    UMAA_SA_StillImageSpecs_StillImageSpecsReportType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_SA_StillImageSpecs_StillImageSpecsReportType_copy(
    UMAA_SA_StillImageSpecs_StillImageSpecsReportType* dst,
    const UMAA_SA_StillImageSpecs_StillImageSpecsReportType* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#ifndef NDDS_STANDALONE_TYPE
namespace rti { 
    namespace xcdr {
        template <>
        struct type_code< UMAA_SA_StillImageSpecs_StillImageSpecsReportType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* StillImageSpecsReportType */

