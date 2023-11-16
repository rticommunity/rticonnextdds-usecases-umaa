

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from H264VideoEncodingConfigReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef H264VideoEncodingConfigReportType_1733188362_h
#define H264VideoEncodingConfigReportType_1733188362_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "UMAA/Common/Enumeration/EnumerationSets.h"
#include "UMAA/Common/MaritimeEnumeration/EnumerationSets.h"
#include "UMAA/Common/Measurement/Measurements.h"

static const DDS_Char * const UMAA_SEM_H264VideoEncodingConfig_H264VideoEncodingConfigReport_TOPIC= "UMAA::SEM::H264VideoEncodingConfig::H264VideoEncodingConfigReport";

extern "C" {

    extern const char *UMAA_SEM_H264VideoEncodingConfig_H264VideoEncodingConfigReportTypeTYPENAME;

}

struct UMAA_SEM_H264VideoEncodingConfig_H264VideoEncodingConfigReportTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_SEM_H264VideoEncodingConfig_H264VideoEncodingConfigReportTypeTypeSupport;
class UMAA_SEM_H264VideoEncodingConfig_H264VideoEncodingConfigReportTypeDataWriter;
class UMAA_SEM_H264VideoEncodingConfig_H264VideoEncodingConfigReportTypeDataReader;
#endif
class UMAA_SEM_H264VideoEncodingConfig_H264VideoEncodingConfigReportType 
{
  public:
    typedef struct UMAA_SEM_H264VideoEncodingConfig_H264VideoEncodingConfigReportTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_SEM_H264VideoEncodingConfig_H264VideoEncodingConfigReportTypeTypeSupport TypeSupport;
    typedef UMAA_SEM_H264VideoEncodingConfig_H264VideoEncodingConfigReportTypeDataWriter DataWriter;
    typedef UMAA_SEM_H264VideoEncodingConfig_H264VideoEncodingConfigReportTypeDataReader DataReader;
    #endif

    DDS_Boolean   gradualDecoderRefresh ;
    DDS_Long   groupOfPictures ;
    UMAA_Common_MaritimeEnumeration_H264PresetEnumType_H264PresetEnumType   preset ;
    UMAA_Common_MaritimeEnumeration_H264EncodingEnumType_H264EncodingEnumType   profile ;
    DDS_Boolean   regionOfInterest ;
    DDS_Long   ROI_height ;
    DDS_Double   ROI_highBitRate ;
    DDS_Double   ROI_lowBitRate ;
    DDS_Long   ROI_width ;
    DDS_Long   ROI_x ;
    DDS_Long   ROI_y ;
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
NDDSUSERDllExport DDS_TypeCode * UMAA_SEM_H264VideoEncodingConfig_H264VideoEncodingConfigReportType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_SEM_H264VideoEncodingConfig_H264VideoEncodingConfigReportType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_SEM_H264VideoEncodingConfig_H264VideoEncodingConfigReportType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_SEM_H264VideoEncodingConfig_H264VideoEncodingConfigReportType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_SEM_H264VideoEncodingConfig_H264VideoEncodingConfigReportTypeSeq, UMAA_SEM_H264VideoEncodingConfig_H264VideoEncodingConfigReportType);

NDDSUSERDllExport
RTIBool UMAA_SEM_H264VideoEncodingConfig_H264VideoEncodingConfigReportType_initialize(
    UMAA_SEM_H264VideoEncodingConfig_H264VideoEncodingConfigReportType* self);

NDDSUSERDllExport
RTIBool UMAA_SEM_H264VideoEncodingConfig_H264VideoEncodingConfigReportType_initialize_ex(
    UMAA_SEM_H264VideoEncodingConfig_H264VideoEncodingConfigReportType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_SEM_H264VideoEncodingConfig_H264VideoEncodingConfigReportType_initialize_w_params(
    UMAA_SEM_H264VideoEncodingConfig_H264VideoEncodingConfigReportType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_SEM_H264VideoEncodingConfig_H264VideoEncodingConfigReportType_finalize_w_return(
    UMAA_SEM_H264VideoEncodingConfig_H264VideoEncodingConfigReportType* self);

NDDSUSERDllExport
void UMAA_SEM_H264VideoEncodingConfig_H264VideoEncodingConfigReportType_finalize(
    UMAA_SEM_H264VideoEncodingConfig_H264VideoEncodingConfigReportType* self);

NDDSUSERDllExport
void UMAA_SEM_H264VideoEncodingConfig_H264VideoEncodingConfigReportType_finalize_ex(
    UMAA_SEM_H264VideoEncodingConfig_H264VideoEncodingConfigReportType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_SEM_H264VideoEncodingConfig_H264VideoEncodingConfigReportType_finalize_w_params(
    UMAA_SEM_H264VideoEncodingConfig_H264VideoEncodingConfigReportType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_SEM_H264VideoEncodingConfig_H264VideoEncodingConfigReportType_finalize_optional_members(
    UMAA_SEM_H264VideoEncodingConfig_H264VideoEncodingConfigReportType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_SEM_H264VideoEncodingConfig_H264VideoEncodingConfigReportType_copy(
    UMAA_SEM_H264VideoEncodingConfig_H264VideoEncodingConfigReportType* dst,
    const UMAA_SEM_H264VideoEncodingConfig_H264VideoEncodingConfigReportType* src);

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
        struct type_code< UMAA_SEM_H264VideoEncodingConfig_H264VideoEncodingConfigReportType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* H264VideoEncodingConfigReportType */

