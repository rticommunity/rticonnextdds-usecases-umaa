

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from DigitalAudioConfigReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef DigitalAudioConfigReportType_917450404_h
#define DigitalAudioConfigReportType_917450404_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "UMAA/Common/MaritimeEnumeration/EnumerationSets.h"
#include "UMAA/Common/Measurement/Measurements.h"

static const DDS_Char * const UMAA_SEM_DigitalAudioConfig_DigitalAudioConfigReport_TOPIC= "UMAA::SEM::DigitalAudioConfig::DigitalAudioConfigReport";

extern "C" {

    extern const char *UMAA_SEM_DigitalAudioConfig_DigitalAudioConfigReportTypeTYPENAME;

}

struct UMAA_SEM_DigitalAudioConfig_DigitalAudioConfigReportTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_SEM_DigitalAudioConfig_DigitalAudioConfigReportTypeTypeSupport;
class UMAA_SEM_DigitalAudioConfig_DigitalAudioConfigReportTypeDataWriter;
class UMAA_SEM_DigitalAudioConfig_DigitalAudioConfigReportTypeDataReader;
#endif
class UMAA_SEM_DigitalAudioConfig_DigitalAudioConfigReportType 
{
  public:
    typedef struct UMAA_SEM_DigitalAudioConfig_DigitalAudioConfigReportTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_SEM_DigitalAudioConfig_DigitalAudioConfigReportTypeTypeSupport TypeSupport;
    typedef UMAA_SEM_DigitalAudioConfig_DigitalAudioConfigReportTypeDataWriter DataWriter;
    typedef UMAA_SEM_DigitalAudioConfig_DigitalAudioConfigReportTypeDataReader DataReader;
    #endif

    UMAA_Common_MaritimeEnumeration_BitDepthEnumType_BitDepthEnumType   bitDepth ;
    UMAA_Common_MaritimeEnumeration_DigitalAudioFormatEnumType_DigitalAudioFormatEnumType   digitalFormat ;
    UMAA_Common_MaritimeEnumeration_AudioEncodingQualityEnumType_AudioEncodingQualityEnumType   encodingQuality ;
    DDS_Long   maxBitRate ;
    DDS_Long   minBitRate ;
    DDS_Long   numberOfChannels ;
    DDS_Long   sampleRate ;
    DDS_Long   sensitivity ;
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
NDDSUSERDllExport DDS_TypeCode * UMAA_SEM_DigitalAudioConfig_DigitalAudioConfigReportType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_SEM_DigitalAudioConfig_DigitalAudioConfigReportType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_SEM_DigitalAudioConfig_DigitalAudioConfigReportType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_SEM_DigitalAudioConfig_DigitalAudioConfigReportType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_SEM_DigitalAudioConfig_DigitalAudioConfigReportTypeSeq, UMAA_SEM_DigitalAudioConfig_DigitalAudioConfigReportType);

NDDSUSERDllExport
RTIBool UMAA_SEM_DigitalAudioConfig_DigitalAudioConfigReportType_initialize(
    UMAA_SEM_DigitalAudioConfig_DigitalAudioConfigReportType* self);

NDDSUSERDllExport
RTIBool UMAA_SEM_DigitalAudioConfig_DigitalAudioConfigReportType_initialize_ex(
    UMAA_SEM_DigitalAudioConfig_DigitalAudioConfigReportType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_SEM_DigitalAudioConfig_DigitalAudioConfigReportType_initialize_w_params(
    UMAA_SEM_DigitalAudioConfig_DigitalAudioConfigReportType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_SEM_DigitalAudioConfig_DigitalAudioConfigReportType_finalize_w_return(
    UMAA_SEM_DigitalAudioConfig_DigitalAudioConfigReportType* self);

NDDSUSERDllExport
void UMAA_SEM_DigitalAudioConfig_DigitalAudioConfigReportType_finalize(
    UMAA_SEM_DigitalAudioConfig_DigitalAudioConfigReportType* self);

NDDSUSERDllExport
void UMAA_SEM_DigitalAudioConfig_DigitalAudioConfigReportType_finalize_ex(
    UMAA_SEM_DigitalAudioConfig_DigitalAudioConfigReportType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_SEM_DigitalAudioConfig_DigitalAudioConfigReportType_finalize_w_params(
    UMAA_SEM_DigitalAudioConfig_DigitalAudioConfigReportType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_SEM_DigitalAudioConfig_DigitalAudioConfigReportType_finalize_optional_members(
    UMAA_SEM_DigitalAudioConfig_DigitalAudioConfigReportType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_SEM_DigitalAudioConfig_DigitalAudioConfigReportType_copy(
    UMAA_SEM_DigitalAudioConfig_DigitalAudioConfigReportType* dst,
    const UMAA_SEM_DigitalAudioConfig_DigitalAudioConfigReportType* src);

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
        struct type_code< UMAA_SEM_DigitalAudioConfig_DigitalAudioConfigReportType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* DigitalAudioConfigReportType */

