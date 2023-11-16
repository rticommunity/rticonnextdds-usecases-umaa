

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from DigitalAudioSpecsReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef DigitalAudioSpecsReportType_34587062_h
#define DigitalAudioSpecsReportType_34587062_h

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

static const DDS_Char * const UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReport_TOPIC= "UMAA::SEM::DigitalAudioSpecs::DigitalAudioSpecsReport";

extern "C" {

    extern const char *UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportTypeTYPENAME;

}

struct UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportTypeTypeSupport;
class UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportTypeDataWriter;
class UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportTypeDataReader;
#endif
class UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType 
{
  public:
    typedef struct UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportTypeTypeSupport TypeSupport;
    typedef UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportTypeDataWriter DataWriter;
    typedef UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportTypeDataReader DataReader;
    #endif

    DDS_Long   maxAllowedBitRate ;
    DDS_Long   maxChannels ;
    DDS_Long   maxSampleRate ;
    DDS_Long   minAllowedBitRate ;
    DDS_Long   minSampleRate ;
    DDS_Boolean   supported10bits ;
    DDS_Boolean   supported12bits ;
    DDS_Boolean   supported14bits ;
    DDS_Boolean   supported16bits ;
    DDS_Boolean   supported20bits ;
    DDS_Boolean   supported24bits ;
    DDS_Boolean   supported32bits ;
    DDS_Boolean   supported40bits ;
    DDS_Boolean   supported48bits ;
    DDS_Boolean   supported56bits ;
    DDS_Boolean   supported64bits ;
    DDS_Boolean   supported8bits ;
    DDS_Boolean   supportedAAC_MPEG2 ;
    DDS_Boolean   supportedAAC_MPEG4 ;
    DDS_Boolean   supportedAIFF ;
    DDS_Boolean   supportedALAC ;
    DDS_Boolean   supportedAverage ;
    DDS_Boolean   supportedBest ;
    DDS_Boolean   supportedBetter ;
    DDS_Boolean   supportedDolbyDigital ;
    DDS_Boolean   supportedDTS ;
    DDS_Boolean   supportedFLAC ;
    DDS_Boolean   supportedGood ;
    DDS_Boolean   supportedLess ;
    DDS_Boolean   supportedLPCM_PCM ;
    DDS_Boolean   supportedMP2 ;
    DDS_Boolean   supportedMP3 ;
    DDS_Boolean   supportedPoor ;
    DDS_Boolean   supportedRealAudio ;
    DDS_Boolean   supportedSpeex ;
    DDS_Boolean   supportedTrueAudio ;
    DDS_Boolean   supportedULAW ;
    DDS_Boolean   supportedVORBIS ;
    DDS_Boolean   supportedWAV ;
    DDS_Boolean   supportedWMA ;
    DDS_Boolean   supportedWMA9_Lossless ;
    DDS_Boolean   supportedWorst ;
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
NDDSUSERDllExport DDS_TypeCode * UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportTypeSeq, UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType);

NDDSUSERDllExport
RTIBool UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_initialize(
    UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType* self);

NDDSUSERDllExport
RTIBool UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_initialize_ex(
    UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_initialize_w_params(
    UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_finalize_w_return(
    UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType* self);

NDDSUSERDllExport
void UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_finalize(
    UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType* self);

NDDSUSERDllExport
void UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_finalize_ex(
    UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_finalize_w_params(
    UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_finalize_optional_members(
    UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType_copy(
    UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType* dst,
    const UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType* src);

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
        struct type_code< UMAA_SEM_DigitalAudioSpecs_DigitalAudioSpecsReportType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* DigitalAudioSpecsReportType */

