

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from AnalogVideoConfigReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef AnalogVideoConfigReportType_2964399_h
#define AnalogVideoConfigReportType_2964399_h

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
#include "UMAA/SEM/SensorManagement/AnalogSensorErrorType.h"

static const DDS_Char * const UMAA_SEM_AnalogVideoConfig_AnalogVideoConfigReport_TOPIC= "UMAA::SEM::AnalogVideoConfig::AnalogVideoConfigReport";

extern "C" {

    extern const char *UMAA_SEM_AnalogVideoConfig_AnalogVideoConfigReportTypeTYPENAME;

}

struct UMAA_SEM_AnalogVideoConfig_AnalogVideoConfigReportTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_SEM_AnalogVideoConfig_AnalogVideoConfigReportTypeTypeSupport;
class UMAA_SEM_AnalogVideoConfig_AnalogVideoConfigReportTypeDataWriter;
class UMAA_SEM_AnalogVideoConfig_AnalogVideoConfigReportTypeDataReader;
#endif
class UMAA_SEM_AnalogVideoConfig_AnalogVideoConfigReportType 
{
  public:
    typedef struct UMAA_SEM_AnalogVideoConfig_AnalogVideoConfigReportTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_SEM_AnalogVideoConfig_AnalogVideoConfigReportTypeTypeSupport TypeSupport;
    typedef UMAA_SEM_AnalogVideoConfig_AnalogVideoConfigReportTypeDataWriter DataWriter;
    typedef UMAA_SEM_AnalogVideoConfig_AnalogVideoConfigReportTypeDataReader DataReader;
    #endif

    UMAA_SEM_SensorManagement_AnalogSensorErrorType   analogVideoError ;
    UMAA_Common_MaritimeEnumeration_VideoFormatEnumType_VideoFormatEnumType   videoFormat ;
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
NDDSUSERDllExport DDS_TypeCode * UMAA_SEM_AnalogVideoConfig_AnalogVideoConfigReportType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_SEM_AnalogVideoConfig_AnalogVideoConfigReportType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_SEM_AnalogVideoConfig_AnalogVideoConfigReportType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_SEM_AnalogVideoConfig_AnalogVideoConfigReportType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_SEM_AnalogVideoConfig_AnalogVideoConfigReportTypeSeq, UMAA_SEM_AnalogVideoConfig_AnalogVideoConfigReportType);

NDDSUSERDllExport
RTIBool UMAA_SEM_AnalogVideoConfig_AnalogVideoConfigReportType_initialize(
    UMAA_SEM_AnalogVideoConfig_AnalogVideoConfigReportType* self);

NDDSUSERDllExport
RTIBool UMAA_SEM_AnalogVideoConfig_AnalogVideoConfigReportType_initialize_ex(
    UMAA_SEM_AnalogVideoConfig_AnalogVideoConfigReportType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_SEM_AnalogVideoConfig_AnalogVideoConfigReportType_initialize_w_params(
    UMAA_SEM_AnalogVideoConfig_AnalogVideoConfigReportType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_SEM_AnalogVideoConfig_AnalogVideoConfigReportType_finalize_w_return(
    UMAA_SEM_AnalogVideoConfig_AnalogVideoConfigReportType* self);

NDDSUSERDllExport
void UMAA_SEM_AnalogVideoConfig_AnalogVideoConfigReportType_finalize(
    UMAA_SEM_AnalogVideoConfig_AnalogVideoConfigReportType* self);

NDDSUSERDllExport
void UMAA_SEM_AnalogVideoConfig_AnalogVideoConfigReportType_finalize_ex(
    UMAA_SEM_AnalogVideoConfig_AnalogVideoConfigReportType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_SEM_AnalogVideoConfig_AnalogVideoConfigReportType_finalize_w_params(
    UMAA_SEM_AnalogVideoConfig_AnalogVideoConfigReportType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_SEM_AnalogVideoConfig_AnalogVideoConfigReportType_finalize_optional_members(
    UMAA_SEM_AnalogVideoConfig_AnalogVideoConfigReportType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_SEM_AnalogVideoConfig_AnalogVideoConfigReportType_copy(
    UMAA_SEM_AnalogVideoConfig_AnalogVideoConfigReportType* dst,
    const UMAA_SEM_AnalogVideoConfig_AnalogVideoConfigReportType* src);

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
        struct type_code< UMAA_SEM_AnalogVideoConfig_AnalogVideoConfigReportType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* AnalogVideoConfigReportType */

