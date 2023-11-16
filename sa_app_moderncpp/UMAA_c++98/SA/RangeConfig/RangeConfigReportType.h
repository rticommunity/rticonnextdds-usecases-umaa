

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from RangeConfigReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef RangeConfigReportType_319386127_h
#define RangeConfigReportType_319386127_h

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
#include "UMAA/SEM/SensorManagement/RangeErrorType.h"

static const DDS_Char * const UMAA_SA_RangeConfig_RangeConfigReport_TOPIC= "UMAA::SA::RangeConfig::RangeConfigReport";

extern "C" {

    extern const char *UMAA_SA_RangeConfig_RangeConfigReportTypeTYPENAME;

}

struct UMAA_SA_RangeConfig_RangeConfigReportTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_SA_RangeConfig_RangeConfigReportTypeTypeSupport;
class UMAA_SA_RangeConfig_RangeConfigReportTypeDataWriter;
class UMAA_SA_RangeConfig_RangeConfigReportTypeDataReader;
#endif
class UMAA_SA_RangeConfig_RangeConfigReportType 
{
  public:
    typedef struct UMAA_SA_RangeConfig_RangeConfigReportTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_SA_RangeConfig_RangeConfigReportTypeTypeSupport TypeSupport;
    typedef UMAA_SA_RangeConfig_RangeConfigReportTypeDataWriter DataWriter;
    typedef UMAA_SA_RangeConfig_RangeConfigReportTypeDataReader DataReader;
    #endif

    DDS_Double   horizontalFOVStartAngle ;
    DDS_Double   horizontalFOVStopAngle ;
    DDS_Double   maxRange ;
    DDS_Double   minRange ;
    UMAA_SEM_SensorManagement_RangeErrorType   rangeError ;
    UMAA_Common_Enumeration_PowerStatusEnumType_PowerStatusEnumType   status ;
    DDS_Double   updateRate ;
    DDS_Double   verticalFOVStartAngle ;
    DDS_Double   verticalFOVStopAngle ;
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
NDDSUSERDllExport DDS_TypeCode * UMAA_SA_RangeConfig_RangeConfigReportType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_SA_RangeConfig_RangeConfigReportType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_SA_RangeConfig_RangeConfigReportType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_SA_RangeConfig_RangeConfigReportType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_SA_RangeConfig_RangeConfigReportTypeSeq, UMAA_SA_RangeConfig_RangeConfigReportType);

NDDSUSERDllExport
RTIBool UMAA_SA_RangeConfig_RangeConfigReportType_initialize(
    UMAA_SA_RangeConfig_RangeConfigReportType* self);

NDDSUSERDllExport
RTIBool UMAA_SA_RangeConfig_RangeConfigReportType_initialize_ex(
    UMAA_SA_RangeConfig_RangeConfigReportType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_SA_RangeConfig_RangeConfigReportType_initialize_w_params(
    UMAA_SA_RangeConfig_RangeConfigReportType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_SA_RangeConfig_RangeConfigReportType_finalize_w_return(
    UMAA_SA_RangeConfig_RangeConfigReportType* self);

NDDSUSERDllExport
void UMAA_SA_RangeConfig_RangeConfigReportType_finalize(
    UMAA_SA_RangeConfig_RangeConfigReportType* self);

NDDSUSERDllExport
void UMAA_SA_RangeConfig_RangeConfigReportType_finalize_ex(
    UMAA_SA_RangeConfig_RangeConfigReportType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_SA_RangeConfig_RangeConfigReportType_finalize_w_params(
    UMAA_SA_RangeConfig_RangeConfigReportType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_SA_RangeConfig_RangeConfigReportType_finalize_optional_members(
    UMAA_SA_RangeConfig_RangeConfigReportType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_SA_RangeConfig_RangeConfigReportType_copy(
    UMAA_SA_RangeConfig_RangeConfigReportType* dst,
    const UMAA_SA_RangeConfig_RangeConfigReportType* src);

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
        struct type_code< UMAA_SA_RangeConfig_RangeConfigReportType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* RangeConfigReportType */

