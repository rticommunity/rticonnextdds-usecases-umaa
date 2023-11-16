

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from TaskPlanAssignmentReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef TaskPlanAssignmentReportType_193556010_h
#define TaskPlanAssignmentReportType_193556010_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "UMAA/Common/Measurement/Measurements.h"

static const DDS_Char * const UMAA_MM_TaskPlanAssignmentStatus_TaskPlanAssignmentReport_TOPIC= "UMAA::MM::TaskPlanAssignmentStatus::TaskPlanAssignmentReport";

extern "C" {

    extern const char *UMAA_MM_TaskPlanAssignmentStatus_TaskPlanAssignmentReportTypeTYPENAME;

}

struct UMAA_MM_TaskPlanAssignmentStatus_TaskPlanAssignmentReportTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_MM_TaskPlanAssignmentStatus_TaskPlanAssignmentReportTypeTypeSupport;
class UMAA_MM_TaskPlanAssignmentStatus_TaskPlanAssignmentReportTypeDataWriter;
class UMAA_MM_TaskPlanAssignmentStatus_TaskPlanAssignmentReportTypeDataReader;
#endif
class UMAA_MM_TaskPlanAssignmentStatus_TaskPlanAssignmentReportType 
{
  public:
    typedef struct UMAA_MM_TaskPlanAssignmentStatus_TaskPlanAssignmentReportTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_MM_TaskPlanAssignmentStatus_TaskPlanAssignmentReportTypeTypeSupport TypeSupport;
    typedef UMAA_MM_TaskPlanAssignmentStatus_TaskPlanAssignmentReportTypeDataWriter DataWriter;
    typedef UMAA_MM_TaskPlanAssignmentStatus_TaskPlanAssignmentReportTypeDataReader DataReader;
    #endif

    UMAA_Common_Measurement_NumericGUIDSeq  resourceIDs ;
    UMAA_Common_Measurement_NumericGUID   source ;
    UMAA_Common_Measurement_DateTime   timeStamp ;
    UMAA_Common_Measurement_NumericGUID   taskID ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_MM_TaskPlanAssignmentStatus_TaskPlanAssignmentReportType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_MM_TaskPlanAssignmentStatus_TaskPlanAssignmentReportType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MM_TaskPlanAssignmentStatus_TaskPlanAssignmentReportType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MM_TaskPlanAssignmentStatus_TaskPlanAssignmentReportType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_MM_TaskPlanAssignmentStatus_TaskPlanAssignmentReportTypeSeq, UMAA_MM_TaskPlanAssignmentStatus_TaskPlanAssignmentReportType);

NDDSUSERDllExport
RTIBool UMAA_MM_TaskPlanAssignmentStatus_TaskPlanAssignmentReportType_initialize(
    UMAA_MM_TaskPlanAssignmentStatus_TaskPlanAssignmentReportType* self);

NDDSUSERDllExport
RTIBool UMAA_MM_TaskPlanAssignmentStatus_TaskPlanAssignmentReportType_initialize_ex(
    UMAA_MM_TaskPlanAssignmentStatus_TaskPlanAssignmentReportType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_MM_TaskPlanAssignmentStatus_TaskPlanAssignmentReportType_initialize_w_params(
    UMAA_MM_TaskPlanAssignmentStatus_TaskPlanAssignmentReportType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_MM_TaskPlanAssignmentStatus_TaskPlanAssignmentReportType_finalize_w_return(
    UMAA_MM_TaskPlanAssignmentStatus_TaskPlanAssignmentReportType* self);

NDDSUSERDllExport
void UMAA_MM_TaskPlanAssignmentStatus_TaskPlanAssignmentReportType_finalize(
    UMAA_MM_TaskPlanAssignmentStatus_TaskPlanAssignmentReportType* self);

NDDSUSERDllExport
void UMAA_MM_TaskPlanAssignmentStatus_TaskPlanAssignmentReportType_finalize_ex(
    UMAA_MM_TaskPlanAssignmentStatus_TaskPlanAssignmentReportType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_MM_TaskPlanAssignmentStatus_TaskPlanAssignmentReportType_finalize_w_params(
    UMAA_MM_TaskPlanAssignmentStatus_TaskPlanAssignmentReportType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_MM_TaskPlanAssignmentStatus_TaskPlanAssignmentReportType_finalize_optional_members(
    UMAA_MM_TaskPlanAssignmentStatus_TaskPlanAssignmentReportType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_MM_TaskPlanAssignmentStatus_TaskPlanAssignmentReportType_copy(
    UMAA_MM_TaskPlanAssignmentStatus_TaskPlanAssignmentReportType* dst,
    const UMAA_MM_TaskPlanAssignmentStatus_TaskPlanAssignmentReportType* src);

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
        struct type_code< UMAA_MM_TaskPlanAssignmentStatus_TaskPlanAssignmentReportType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* TaskPlanAssignmentReportType */

