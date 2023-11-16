

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from VideoIlluminatorConfigReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef VideoIlluminatorConfigReportType_752860935_h
#define VideoIlluminatorConfigReportType_752860935_h

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

static const DDS_Char * const UMAA_SEM_VideoIlluminatorConfig_VideoIlluminatorConfigReport_TOPIC= "UMAA::SEM::VideoIlluminatorConfig::VideoIlluminatorConfigReport";

extern "C" {

    extern const char *UMAA_SEM_VideoIlluminatorConfig_VideoIlluminatorConfigReportTypeTYPENAME;

}

struct UMAA_SEM_VideoIlluminatorConfig_VideoIlluminatorConfigReportTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_SEM_VideoIlluminatorConfig_VideoIlluminatorConfigReportTypeTypeSupport;
class UMAA_SEM_VideoIlluminatorConfig_VideoIlluminatorConfigReportTypeDataWriter;
class UMAA_SEM_VideoIlluminatorConfig_VideoIlluminatorConfigReportTypeDataReader;
#endif
class UMAA_SEM_VideoIlluminatorConfig_VideoIlluminatorConfigReportType 
{
  public:
    typedef struct UMAA_SEM_VideoIlluminatorConfig_VideoIlluminatorConfigReportTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_SEM_VideoIlluminatorConfig_VideoIlluminatorConfigReportTypeTypeSupport TypeSupport;
    typedef UMAA_SEM_VideoIlluminatorConfig_VideoIlluminatorConfigReportTypeDataWriter DataWriter;
    typedef UMAA_SEM_VideoIlluminatorConfig_VideoIlluminatorConfigReportTypeDataReader DataReader;
    #endif

    UMAA_Common_Measurement_NumericGUIDSeq  associatedSensorIDs ;
    UMAA_Common_MaritimeEnumeration_ImagingModeEnumType_ImagingModeEnumType   mode ;
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
NDDSUSERDllExport DDS_TypeCode * UMAA_SEM_VideoIlluminatorConfig_VideoIlluminatorConfigReportType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_SEM_VideoIlluminatorConfig_VideoIlluminatorConfigReportType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_SEM_VideoIlluminatorConfig_VideoIlluminatorConfigReportType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_SEM_VideoIlluminatorConfig_VideoIlluminatorConfigReportType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_SEM_VideoIlluminatorConfig_VideoIlluminatorConfigReportTypeSeq, UMAA_SEM_VideoIlluminatorConfig_VideoIlluminatorConfigReportType);

NDDSUSERDllExport
RTIBool UMAA_SEM_VideoIlluminatorConfig_VideoIlluminatorConfigReportType_initialize(
    UMAA_SEM_VideoIlluminatorConfig_VideoIlluminatorConfigReportType* self);

NDDSUSERDllExport
RTIBool UMAA_SEM_VideoIlluminatorConfig_VideoIlluminatorConfigReportType_initialize_ex(
    UMAA_SEM_VideoIlluminatorConfig_VideoIlluminatorConfigReportType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_SEM_VideoIlluminatorConfig_VideoIlluminatorConfigReportType_initialize_w_params(
    UMAA_SEM_VideoIlluminatorConfig_VideoIlluminatorConfigReportType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_SEM_VideoIlluminatorConfig_VideoIlluminatorConfigReportType_finalize_w_return(
    UMAA_SEM_VideoIlluminatorConfig_VideoIlluminatorConfigReportType* self);

NDDSUSERDllExport
void UMAA_SEM_VideoIlluminatorConfig_VideoIlluminatorConfigReportType_finalize(
    UMAA_SEM_VideoIlluminatorConfig_VideoIlluminatorConfigReportType* self);

NDDSUSERDllExport
void UMAA_SEM_VideoIlluminatorConfig_VideoIlluminatorConfigReportType_finalize_ex(
    UMAA_SEM_VideoIlluminatorConfig_VideoIlluminatorConfigReportType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_SEM_VideoIlluminatorConfig_VideoIlluminatorConfigReportType_finalize_w_params(
    UMAA_SEM_VideoIlluminatorConfig_VideoIlluminatorConfigReportType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_SEM_VideoIlluminatorConfig_VideoIlluminatorConfigReportType_finalize_optional_members(
    UMAA_SEM_VideoIlluminatorConfig_VideoIlluminatorConfigReportType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_SEM_VideoIlluminatorConfig_VideoIlluminatorConfigReportType_copy(
    UMAA_SEM_VideoIlluminatorConfig_VideoIlluminatorConfigReportType* dst,
    const UMAA_SEM_VideoIlluminatorConfig_VideoIlluminatorConfigReportType* src);

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
        struct type_code< UMAA_SEM_VideoIlluminatorConfig_VideoIlluminatorConfigReportType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* VideoIlluminatorConfigReportType */

