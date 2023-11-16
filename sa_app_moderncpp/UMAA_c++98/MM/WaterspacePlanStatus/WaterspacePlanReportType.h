

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from WaterspacePlanReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef WaterspacePlanReportType_774014636_h
#define WaterspacePlanReportType_774014636_h

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
#include "UMAA/MM/BaseType/PlanningZoneType.h"

static const DDS_Char * const UMAA_MM_WaterspacePlanStatus_WaterspacePlanReport_TOPIC= "UMAA::MM::WaterspacePlanStatus::WaterspacePlanReport";

extern "C" {

    extern const char *UMAA_MM_WaterspacePlanStatus_WaterspacePlanReportTypeTYPENAME;

}

struct UMAA_MM_WaterspacePlanStatus_WaterspacePlanReportTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_MM_WaterspacePlanStatus_WaterspacePlanReportTypeTypeSupport;
class UMAA_MM_WaterspacePlanStatus_WaterspacePlanReportTypeDataWriter;
class UMAA_MM_WaterspacePlanStatus_WaterspacePlanReportTypeDataReader;
#endif
class UMAA_MM_WaterspacePlanStatus_WaterspacePlanReportType 
{
  public:
    typedef struct UMAA_MM_WaterspacePlanStatus_WaterspacePlanReportTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_MM_WaterspacePlanStatus_WaterspacePlanReportTypeTypeSupport TypeSupport;
    typedef UMAA_MM_WaterspacePlanStatus_WaterspacePlanReportTypeDataWriter DataWriter;
    typedef UMAA_MM_WaterspacePlanStatus_WaterspacePlanReportTypeDataReader DataReader;
    #endif

    DDS_Char *   waterspacePlanName ;
    UMAA_MM_BaseType_PlanningZoneTypeSeq  zones ;
    UMAA_Common_Measurement_NumericGUID   source ;
    UMAA_Common_Measurement_DateTime   timeStamp ;
    UMAA_Common_Measurement_NumericGUID   waterspacePlanID ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_MM_WaterspacePlanStatus_WaterspacePlanReportType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_MM_WaterspacePlanStatus_WaterspacePlanReportType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MM_WaterspacePlanStatus_WaterspacePlanReportType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MM_WaterspacePlanStatus_WaterspacePlanReportType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_MM_WaterspacePlanStatus_WaterspacePlanReportTypeSeq, UMAA_MM_WaterspacePlanStatus_WaterspacePlanReportType);

NDDSUSERDllExport
RTIBool UMAA_MM_WaterspacePlanStatus_WaterspacePlanReportType_initialize(
    UMAA_MM_WaterspacePlanStatus_WaterspacePlanReportType* self);

NDDSUSERDllExport
RTIBool UMAA_MM_WaterspacePlanStatus_WaterspacePlanReportType_initialize_ex(
    UMAA_MM_WaterspacePlanStatus_WaterspacePlanReportType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_MM_WaterspacePlanStatus_WaterspacePlanReportType_initialize_w_params(
    UMAA_MM_WaterspacePlanStatus_WaterspacePlanReportType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_MM_WaterspacePlanStatus_WaterspacePlanReportType_finalize_w_return(
    UMAA_MM_WaterspacePlanStatus_WaterspacePlanReportType* self);

NDDSUSERDllExport
void UMAA_MM_WaterspacePlanStatus_WaterspacePlanReportType_finalize(
    UMAA_MM_WaterspacePlanStatus_WaterspacePlanReportType* self);

NDDSUSERDllExport
void UMAA_MM_WaterspacePlanStatus_WaterspacePlanReportType_finalize_ex(
    UMAA_MM_WaterspacePlanStatus_WaterspacePlanReportType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_MM_WaterspacePlanStatus_WaterspacePlanReportType_finalize_w_params(
    UMAA_MM_WaterspacePlanStatus_WaterspacePlanReportType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_MM_WaterspacePlanStatus_WaterspacePlanReportType_finalize_optional_members(
    UMAA_MM_WaterspacePlanStatus_WaterspacePlanReportType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_MM_WaterspacePlanStatus_WaterspacePlanReportType_copy(
    UMAA_MM_WaterspacePlanStatus_WaterspacePlanReportType* dst,
    const UMAA_MM_WaterspacePlanStatus_WaterspacePlanReportType* src);

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
        struct type_code< UMAA_MM_WaterspacePlanStatus_WaterspacePlanReportType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* WaterspacePlanReportType */

