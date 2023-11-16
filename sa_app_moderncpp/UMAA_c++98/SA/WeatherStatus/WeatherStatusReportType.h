

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from WeatherStatusReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef WeatherStatusReportType_1246220673_h
#define WeatherStatusReportType_1246220673_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "UMAA/Common/Measurement/CloudCoverType_All.h"
#include "UMAA/Common/Measurement/Measurements.h"
#include "UMAA/Common/Measurement/PrecipitationType_All.h"
#include "UMAA/Common/Measurement/WeatherSeverityType_All.h"
#include "UMAA/Common/MeasurementConstrained/ConstrainedTypes.h"

static const DDS_Char * const UMAA_SA_WeatherStatus_WeatherStatusReport_TOPIC= "UMAA::SA::WeatherStatus::WeatherStatusReport";

extern "C" {

    extern const char *UMAA_SA_WeatherStatus_WeatherStatusReportTypeTYPENAME;

}

struct UMAA_SA_WeatherStatus_WeatherStatusReportTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_SA_WeatherStatus_WeatherStatusReportTypeTypeSupport;
class UMAA_SA_WeatherStatus_WeatherStatusReportTypeDataWriter;
class UMAA_SA_WeatherStatus_WeatherStatusReportTypeDataReader;
#endif
class UMAA_SA_WeatherStatus_WeatherStatusReportType 
{
  public:
    typedef struct UMAA_SA_WeatherStatus_WeatherStatusReportTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_SA_WeatherStatus_WeatherStatusReportTypeTypeSupport TypeSupport;
    typedef UMAA_SA_WeatherStatus_WeatherStatusReportTypeDataWriter DataWriter;
    typedef UMAA_SA_WeatherStatus_WeatherStatusReportTypeDataReader DataReader;
    #endif

    DDS_Double   * airTemperature ;
    DDS_Double   * barometricPressure ;
    UMAA_Common_Measurement_CloudCoverType_All   * cloudiness ;
    DDS_Double   * dewPoint ;
    UMAA_Common_Measurement_WeatherSeverityType_All   * icingSeverity ;
    UMAA_Common_Measurement_PrecipitationType_All   * precipitation ;
    DDS_Double   * relativeHumidity ;
    DDS_Double   * thunderstormPotential ;
    DDS_Double   * visibility ;
    DDS_Double   * waterTemperature ;
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
NDDSUSERDllExport DDS_TypeCode * UMAA_SA_WeatherStatus_WeatherStatusReportType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_SA_WeatherStatus_WeatherStatusReportType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_SA_WeatherStatus_WeatherStatusReportType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_SA_WeatherStatus_WeatherStatusReportType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_SA_WeatherStatus_WeatherStatusReportTypeSeq, UMAA_SA_WeatherStatus_WeatherStatusReportType);

NDDSUSERDllExport
RTIBool UMAA_SA_WeatherStatus_WeatherStatusReportType_initialize(
    UMAA_SA_WeatherStatus_WeatherStatusReportType* self);

NDDSUSERDllExport
RTIBool UMAA_SA_WeatherStatus_WeatherStatusReportType_initialize_ex(
    UMAA_SA_WeatherStatus_WeatherStatusReportType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_SA_WeatherStatus_WeatherStatusReportType_initialize_w_params(
    UMAA_SA_WeatherStatus_WeatherStatusReportType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_SA_WeatherStatus_WeatherStatusReportType_finalize_w_return(
    UMAA_SA_WeatherStatus_WeatherStatusReportType* self);

NDDSUSERDllExport
void UMAA_SA_WeatherStatus_WeatherStatusReportType_finalize(
    UMAA_SA_WeatherStatus_WeatherStatusReportType* self);

NDDSUSERDllExport
void UMAA_SA_WeatherStatus_WeatherStatusReportType_finalize_ex(
    UMAA_SA_WeatherStatus_WeatherStatusReportType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_SA_WeatherStatus_WeatherStatusReportType_finalize_w_params(
    UMAA_SA_WeatherStatus_WeatherStatusReportType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_SA_WeatherStatus_WeatherStatusReportType_finalize_optional_members(
    UMAA_SA_WeatherStatus_WeatherStatusReportType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_SA_WeatherStatus_WeatherStatusReportType_copy(
    UMAA_SA_WeatherStatus_WeatherStatusReportType* dst,
    const UMAA_SA_WeatherStatus_WeatherStatusReportType* src);

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
        struct type_code< UMAA_SA_WeatherStatus_WeatherStatusReportType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* WeatherStatusReportType */

