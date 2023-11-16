

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from H264VideoEncodingSpecsReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef H264VideoEncodingSpecsReportType_1030733027_h
#define H264VideoEncodingSpecsReportType_1030733027_h

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

static const DDS_Char * const UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReport_TOPIC= "UMAA::SEM::H264VideoEncodingSpecs::H264VideoEncodingSpecsReport";

extern "C" {

    extern const char *UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportTypeTYPENAME;

}

struct UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportTypeTypeSupport;
class UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportTypeDataWriter;
class UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportTypeDataReader;
#endif
class UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType 
{
  public:
    typedef struct UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportTypeTypeSupport TypeSupport;
    typedef UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportTypeDataWriter DataWriter;
    typedef UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportTypeDataReader DataReader;
    #endif

    DDS_Boolean   supportedBaseline ;
    DDS_Boolean   supportedBestQuality ;
    DDS_Boolean   supportedCAVLC444 ;
    DDS_Boolean   supportedConstrainedBaseline ;
    DDS_Boolean   supportedConstrainedHigh ;
    DDS_Boolean   supportedDriveVision ;
    DDS_Boolean   supportedExtended ;
    DDS_Boolean   supportedGradualDecoderRefresh ;
    DDS_Boolean   supportedGroupOfPictures ;
    DDS_Boolean   supportedHigh ;
    DDS_Boolean   supportedHigh10 ;
    DDS_Boolean   supportedHigh10Intra ;
    DDS_Boolean   supportedHigh422 ;
    DDS_Boolean   supportedHigh422Intra ;
    DDS_Boolean   supportedHigh444Intra ;
    DDS_Boolean   supportedHigh444Predictive ;
    DDS_Boolean   supportedLevel1 ;
    DDS_Boolean   supportedLevel11 ;
    DDS_Boolean   supportedLevel12 ;
    DDS_Boolean   supportedLevel13 ;
    DDS_Boolean   supportedLevel1B ;
    DDS_Boolean   supportedLevel2 ;
    DDS_Boolean   supportedLevel21 ;
    DDS_Boolean   supportedLevel22 ;
    DDS_Boolean   supportedLevel3 ;
    DDS_Boolean   supportedLevel31 ;
    DDS_Boolean   supportedLevel32 ;
    DDS_Boolean   supportedLevel4 ;
    DDS_Boolean   supportedLevel41 ;
    DDS_Boolean   supportedLevel42 ;
    DDS_Boolean   supportedLevel5 ;
    DDS_Boolean   supportedLevel51 ;
    DDS_Boolean   supportedLevel52 ;
    DDS_Boolean   supportedLowLatency ;
    DDS_Boolean   supportedMain ;
    DDS_Boolean   supportedManipulation ;
    DDS_Boolean   supportedMultiviewHigh ;
    DDS_Boolean   supportedPersistentStare ;
    DDS_Boolean   supportedProgramSpecific1 ;
    DDS_Boolean   supportedProgramSpecific2 ;
    DDS_Boolean   supportedProgramSpecific3 ;
    DDS_Boolean   supportedProgramSpecific4 ;
    DDS_Boolean   supportedProgressiveHigh ;
    DDS_Boolean   supportedRegionOfInterest ;
    DDS_Boolean   supportedScalableBaseline ;
    DDS_Boolean   supportedScalableConstrainedBaseline ;
    DDS_Boolean   supportedScalableConstrainedHigh ;
    DDS_Boolean   supportedScalableHigh ;
    DDS_Boolean   supportedScalableHighIntra ;
    DDS_Boolean   supportedSlowComms ;
    DDS_Boolean   supportedStereoHigh ;
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
NDDSUSERDllExport DDS_TypeCode * UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportTypeSeq, UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType);

NDDSUSERDllExport
RTIBool UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_initialize(
    UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType* self);

NDDSUSERDllExport
RTIBool UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_initialize_ex(
    UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_initialize_w_params(
    UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_finalize_w_return(
    UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType* self);

NDDSUSERDllExport
void UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_finalize(
    UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType* self);

NDDSUSERDllExport
void UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_finalize_ex(
    UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_finalize_w_params(
    UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_finalize_optional_members(
    UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType_copy(
    UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType* dst,
    const UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType* src);

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
        struct type_code< UMAA_SEM_H264VideoEncodingSpecs_H264VideoEncodingSpecsReportType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* H264VideoEncodingSpecsReportType */

