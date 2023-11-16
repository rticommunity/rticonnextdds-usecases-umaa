

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from MissionPlanReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef MissionPlanReportType_1757476290_h
#define MissionPlanReportType_1757476290_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "UMAA/Common/Measurement/DateTime_Tolerance.h"
#include "UMAA/Common/Measurement/Measurements.h"
#include "UMAA/Common/PrimitiveConstrained/ConstrainedTypes.h"
#include "UMAA/MM/BaseType/TaskPlanType.h"

static const DDS_Char * const UMAA_MM_MissionPlanStatus_MissionPlanReport_TOPIC= "UMAA::MM::MissionPlanStatus::MissionPlanReport";

extern "C" {

    extern const char *UMAA_MM_MissionPlanStatus_MissionPlanReportTypeTYPENAME;

}

struct UMAA_MM_MissionPlanStatus_MissionPlanReportTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_MM_MissionPlanStatus_MissionPlanReportTypeTypeSupport;
class UMAA_MM_MissionPlanStatus_MissionPlanReportTypeDataWriter;
class UMAA_MM_MissionPlanStatus_MissionPlanReportTypeDataReader;
#endif
class UMAA_MM_MissionPlanStatus_MissionPlanReportType 
{
  public:
    typedef struct UMAA_MM_MissionPlanStatus_MissionPlanReportTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_MM_MissionPlanStatus_MissionPlanReportTypeTypeSupport TypeSupport;
    typedef UMAA_MM_MissionPlanStatus_MissionPlanReportTypeDataWriter DataWriter;
    typedef UMAA_MM_MissionPlanStatus_MissionPlanReportTypeDataReader DataReader;
    #endif

    UMAA_Common_Measurement_NumericGUIDSeq  dependentMissionIDs ;
    UMAA_Common_Measurement_DateTime   endTime ;
    UMAA_Common_Measurement_DateTime_Tolerance   * endTimeTolerance ;
    DDS_Char *   missionDescription ;
    DDS_Char *   missionName ;
    UMAA_Common_Measurement_DateTime   startTime ;
    UMAA_Common_Measurement_DateTime_Tolerance   * startTimeTolerance ;
    UMAA_MM_BaseType_TaskPlanTypeSeq  taskPlans ;
    UMAA_Common_Measurement_NumericGUID   source ;
    UMAA_Common_Measurement_DateTime   timeStamp ;
    UMAA_Common_Measurement_NumericGUID   missionID ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_MM_MissionPlanStatus_MissionPlanReportType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_MM_MissionPlanStatus_MissionPlanReportType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MM_MissionPlanStatus_MissionPlanReportType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MM_MissionPlanStatus_MissionPlanReportType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_MM_MissionPlanStatus_MissionPlanReportTypeSeq, UMAA_MM_MissionPlanStatus_MissionPlanReportType);

NDDSUSERDllExport
RTIBool UMAA_MM_MissionPlanStatus_MissionPlanReportType_initialize(
    UMAA_MM_MissionPlanStatus_MissionPlanReportType* self);

NDDSUSERDllExport
RTIBool UMAA_MM_MissionPlanStatus_MissionPlanReportType_initialize_ex(
    UMAA_MM_MissionPlanStatus_MissionPlanReportType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_MM_MissionPlanStatus_MissionPlanReportType_initialize_w_params(
    UMAA_MM_MissionPlanStatus_MissionPlanReportType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_MM_MissionPlanStatus_MissionPlanReportType_finalize_w_return(
    UMAA_MM_MissionPlanStatus_MissionPlanReportType* self);

NDDSUSERDllExport
void UMAA_MM_MissionPlanStatus_MissionPlanReportType_finalize(
    UMAA_MM_MissionPlanStatus_MissionPlanReportType* self);

NDDSUSERDllExport
void UMAA_MM_MissionPlanStatus_MissionPlanReportType_finalize_ex(
    UMAA_MM_MissionPlanStatus_MissionPlanReportType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_MM_MissionPlanStatus_MissionPlanReportType_finalize_w_params(
    UMAA_MM_MissionPlanStatus_MissionPlanReportType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_MM_MissionPlanStatus_MissionPlanReportType_finalize_optional_members(
    UMAA_MM_MissionPlanStatus_MissionPlanReportType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_MM_MissionPlanStatus_MissionPlanReportType_copy(
    UMAA_MM_MissionPlanStatus_MissionPlanReportType* dst,
    const UMAA_MM_MissionPlanStatus_MissionPlanReportType* src);

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
        struct type_code< UMAA_MM_MissionPlanStatus_MissionPlanReportType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* MissionPlanReportType */

