

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from DigitalVideoSpecsReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef DigitalVideoSpecsReportType_24736465_h
#define DigitalVideoSpecsReportType_24736465_h

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

static const DDS_Char * const UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReport_TOPIC= "UMAA::SEM::DigitalVideoSpecs::DigitalVideoSpecsReport";

extern "C" {

    extern const char *UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportTypeTYPENAME;

}

struct UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportTypeTypeSupport;
class UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportTypeDataWriter;
class UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportTypeDataReader;
#endif
class UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType 
{
  public:
    typedef struct UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportTypeTypeSupport TypeSupport;
    typedef UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportTypeDataWriter DataWriter;
    typedef UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportTypeDataReader DataReader;
    #endif

    DDS_Double   maxBitRate ;
    DDS_Double   maxFrameRate ;
    DDS_Double   minBitRate ;
    DDS_Double   minFrameRate ;
    DDS_Boolean   supportedAVI ;
    DDS_Boolean   supportedCGA_320x200 ;
    DDS_Boolean   supportedCIF_1408x1152 ;
    DDS_Boolean   supportedCIF_352x288 ;
    DDS_Boolean   supportedCIF_704x576 ;
    DDS_Boolean   supportedEGA_640x350 ;
    DDS_Boolean   supportedH262 ;
    DDS_Boolean   supportedH263 ;
    DDS_Boolean   supportedH263PLUS ;
    DDS_Boolean   supportedH264 ;
    DDS_Boolean   supportedHD1080_1920x1080 ;
    DDS_Boolean   supportedHD480_852x480 ;
    DDS_Boolean   supportedHD720_1280x720 ;
    DDS_Boolean   supportedHSXGA_5120x4096 ;
    DDS_Boolean   supportedMJPEG ;
    DDS_Boolean   supportedMPEG4 ;
    DDS_Boolean   supportedQCIF_176x144 ;
    DDS_Boolean   supportedQQVGA_160x120 ;
    DDS_Boolean   supportedQSXGA_2560x2048 ;
    DDS_Boolean   supportedQVGA_320x240 ;
    DDS_Boolean   supportedQXGA_2048x1536 ;
    DDS_Boolean   supportedSQCIF_128x96 ;
    DDS_Boolean   supportedSVGA_800x600 ;
    DDS_Boolean   supportedSXGA_1280x1024 ;
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
NDDSUSERDllExport DDS_TypeCode * UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportTypeSeq, UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType);

NDDSUSERDllExport
RTIBool UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType_initialize(
    UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType* self);

NDDSUSERDllExport
RTIBool UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType_initialize_ex(
    UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType_initialize_w_params(
    UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType_finalize_w_return(
    UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType* self);

NDDSUSERDllExport
void UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType_finalize(
    UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType* self);

NDDSUSERDllExport
void UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType_finalize_ex(
    UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType_finalize_w_params(
    UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType_finalize_optional_members(
    UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType_copy(
    UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType* dst,
    const UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType* src);

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
        struct type_code< UMAA_SEM_DigitalVideoSpecs_DigitalVideoSpecsReportType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* DigitalVideoSpecsReportType */

