

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from BatteryReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef BatteryReportType_948756410_h
#define BatteryReportType_948756410_h

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
#include "UMAA/EO/BatteryStatus/BatteryCellDataType.h"

static const DDS_Char * const UMAA_EO_BatteryStatus_BatteryReport_TOPIC= "UMAA::EO::BatteryStatus::BatteryReport";

extern "C" {

    extern const char *UMAA_EO_BatteryStatus_BatteryReportTypeTYPENAME;

}

struct UMAA_EO_BatteryStatus_BatteryReportTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_EO_BatteryStatus_BatteryReportTypeTypeSupport;
class UMAA_EO_BatteryStatus_BatteryReportTypeDataWriter;
class UMAA_EO_BatteryStatus_BatteryReportTypeDataReader;
#endif
class UMAA_EO_BatteryStatus_BatteryReportType 
{
  public:
    typedef struct UMAA_EO_BatteryStatus_BatteryReportTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_EO_BatteryStatus_BatteryReportTypeTypeSupport TypeSupport;
    typedef UMAA_EO_BatteryStatus_BatteryReportTypeDataWriter DataWriter;
    typedef UMAA_EO_BatteryStatus_BatteryReportTypeDataReader DataReader;
    #endif

    UMAA_EO_BatteryStatus_BatteryCellDataTypeSeq  cells ;
    DDS_Double   chargeRemaining ;
    DDS_Double   current ;
    DDS_Double   energyUsageRate ;
    DDS_Double   hours ;
    UMAA_Common_MaritimeEnumeration_PowerPlantStateEnumType_PowerPlantStateEnumType   state ;
    DDS_Double   temp ;
    DDS_Double   voltage ;
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
NDDSUSERDllExport DDS_TypeCode * UMAA_EO_BatteryStatus_BatteryReportType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_EO_BatteryStatus_BatteryReportType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_EO_BatteryStatus_BatteryReportType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_EO_BatteryStatus_BatteryReportType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_EO_BatteryStatus_BatteryReportTypeSeq, UMAA_EO_BatteryStatus_BatteryReportType);

NDDSUSERDllExport
RTIBool UMAA_EO_BatteryStatus_BatteryReportType_initialize(
    UMAA_EO_BatteryStatus_BatteryReportType* self);

NDDSUSERDllExport
RTIBool UMAA_EO_BatteryStatus_BatteryReportType_initialize_ex(
    UMAA_EO_BatteryStatus_BatteryReportType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_EO_BatteryStatus_BatteryReportType_initialize_w_params(
    UMAA_EO_BatteryStatus_BatteryReportType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_EO_BatteryStatus_BatteryReportType_finalize_w_return(
    UMAA_EO_BatteryStatus_BatteryReportType* self);

NDDSUSERDllExport
void UMAA_EO_BatteryStatus_BatteryReportType_finalize(
    UMAA_EO_BatteryStatus_BatteryReportType* self);

NDDSUSERDllExport
void UMAA_EO_BatteryStatus_BatteryReportType_finalize_ex(
    UMAA_EO_BatteryStatus_BatteryReportType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_EO_BatteryStatus_BatteryReportType_finalize_w_params(
    UMAA_EO_BatteryStatus_BatteryReportType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_EO_BatteryStatus_BatteryReportType_finalize_optional_members(
    UMAA_EO_BatteryStatus_BatteryReportType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_EO_BatteryStatus_BatteryReportType_copy(
    UMAA_EO_BatteryStatus_BatteryReportType* dst,
    const UMAA_EO_BatteryStatus_BatteryReportType* src);

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
        struct type_code< UMAA_EO_BatteryStatus_BatteryReportType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* BatteryReportType */

