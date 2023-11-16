

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from BatterySpecsReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef BatterySpecsReportType_692210194_h
#define BatterySpecsReportType_692210194_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "UMAA/Common/Measurement/Measurements.h"
#include "UMAA/Common/PrimitiveConstrained/ConstrainedTypes.h"

static const DDS_Char * const UMAA_EO_BatterySpecs_BatterySpecsReport_TOPIC= "UMAA::EO::BatterySpecs::BatterySpecsReport";

extern "C" {

    extern const char *UMAA_EO_BatterySpecs_BatterySpecsReportTypeTYPENAME;

}

struct UMAA_EO_BatterySpecs_BatterySpecsReportTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_EO_BatterySpecs_BatterySpecsReportTypeTypeSupport;
class UMAA_EO_BatterySpecs_BatterySpecsReportTypeDataWriter;
class UMAA_EO_BatterySpecs_BatterySpecsReportTypeDataReader;
#endif
class UMAA_EO_BatterySpecs_BatterySpecsReportType 
{
  public:
    typedef struct UMAA_EO_BatterySpecs_BatterySpecsReportTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_EO_BatterySpecs_BatterySpecsReportTypeTypeSupport TypeSupport;
    typedef UMAA_EO_BatterySpecs_BatterySpecsReportTypeDataWriter DataWriter;
    typedef UMAA_EO_BatterySpecs_BatterySpecsReportTypeDataReader DataReader;
    #endif

    DDS_Double   cellMinimumVoltage ;
    DDS_Double   maxCapacity ;
    DDS_Double   maxChargingCurrent ;
    DDS_Double   maxChargingTemp ;
    DDS_Double   maxCrankingAmps ;
    DDS_Double   maxOutputCurrent ;
    DDS_Double   maxStorageTemp ;
    DDS_Double   maxTemperature ;
    DDS_Double   maxVoltage ;
    DDS_Double   minChargingTemp ;
    DDS_Double   minStorageTemp ;
    DDS_Double   minTemperature ;
    DDS_Double   minVoltage ;
    DDS_Char *   name ;
    DDS_Double   nominalVoltage ;
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
NDDSUSERDllExport DDS_TypeCode * UMAA_EO_BatterySpecs_BatterySpecsReportType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_EO_BatterySpecs_BatterySpecsReportType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_EO_BatterySpecs_BatterySpecsReportType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_EO_BatterySpecs_BatterySpecsReportType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_EO_BatterySpecs_BatterySpecsReportTypeSeq, UMAA_EO_BatterySpecs_BatterySpecsReportType);

NDDSUSERDllExport
RTIBool UMAA_EO_BatterySpecs_BatterySpecsReportType_initialize(
    UMAA_EO_BatterySpecs_BatterySpecsReportType* self);

NDDSUSERDllExport
RTIBool UMAA_EO_BatterySpecs_BatterySpecsReportType_initialize_ex(
    UMAA_EO_BatterySpecs_BatterySpecsReportType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_EO_BatterySpecs_BatterySpecsReportType_initialize_w_params(
    UMAA_EO_BatterySpecs_BatterySpecsReportType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_EO_BatterySpecs_BatterySpecsReportType_finalize_w_return(
    UMAA_EO_BatterySpecs_BatterySpecsReportType* self);

NDDSUSERDllExport
void UMAA_EO_BatterySpecs_BatterySpecsReportType_finalize(
    UMAA_EO_BatterySpecs_BatterySpecsReportType* self);

NDDSUSERDllExport
void UMAA_EO_BatterySpecs_BatterySpecsReportType_finalize_ex(
    UMAA_EO_BatterySpecs_BatterySpecsReportType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_EO_BatterySpecs_BatterySpecsReportType_finalize_w_params(
    UMAA_EO_BatterySpecs_BatterySpecsReportType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_EO_BatterySpecs_BatterySpecsReportType_finalize_optional_members(
    UMAA_EO_BatterySpecs_BatterySpecsReportType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_EO_BatterySpecs_BatterySpecsReportType_copy(
    UMAA_EO_BatterySpecs_BatterySpecsReportType* dst,
    const UMAA_EO_BatterySpecs_BatterySpecsReportType* src);

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
        struct type_code< UMAA_EO_BatterySpecs_BatterySpecsReportType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* BatterySpecsReportType */

