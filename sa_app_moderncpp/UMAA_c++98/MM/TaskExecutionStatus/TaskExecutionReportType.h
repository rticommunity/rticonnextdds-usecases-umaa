

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from TaskExecutionReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef TaskExecutionReportType_1774070958_h
#define TaskExecutionReportType_1774070958_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "UMAA/Common/Measurement/Measurements.h"
#include "UMAA/MM/TaskExecutionStatus/TaskStatusType.h"

static const DDS_Char * const UMAA_MM_TaskExecutionStatus_TaskExecutionReport_TOPIC= "UMAA::MM::TaskExecutionStatus::TaskExecutionReport";

extern "C" {

    extern const char *UMAA_MM_TaskExecutionStatus_TaskExecutionReportTypeTYPENAME;

}

struct UMAA_MM_TaskExecutionStatus_TaskExecutionReportTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_MM_TaskExecutionStatus_TaskExecutionReportTypeTypeSupport;
class UMAA_MM_TaskExecutionStatus_TaskExecutionReportTypeDataWriter;
class UMAA_MM_TaskExecutionStatus_TaskExecutionReportTypeDataReader;
#endif
class UMAA_MM_TaskExecutionStatus_TaskExecutionReportType 
{
  public:
    typedef struct UMAA_MM_TaskExecutionStatus_TaskExecutionReportTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_MM_TaskExecutionStatus_TaskExecutionReportTypeTypeSupport TypeSupport;
    typedef UMAA_MM_TaskExecutionStatus_TaskExecutionReportTypeDataWriter DataWriter;
    typedef UMAA_MM_TaskExecutionStatus_TaskExecutionReportTypeDataReader DataReader;
    #endif

    UMAA_MM_TaskExecutionStatus_TaskStatusTypeSeq  taskStatuses ;
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
NDDSUSERDllExport DDS_TypeCode * UMAA_MM_TaskExecutionStatus_TaskExecutionReportType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_MM_TaskExecutionStatus_TaskExecutionReportType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MM_TaskExecutionStatus_TaskExecutionReportType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MM_TaskExecutionStatus_TaskExecutionReportType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_MM_TaskExecutionStatus_TaskExecutionReportTypeSeq, UMAA_MM_TaskExecutionStatus_TaskExecutionReportType);

NDDSUSERDllExport
RTIBool UMAA_MM_TaskExecutionStatus_TaskExecutionReportType_initialize(
    UMAA_MM_TaskExecutionStatus_TaskExecutionReportType* self);

NDDSUSERDllExport
RTIBool UMAA_MM_TaskExecutionStatus_TaskExecutionReportType_initialize_ex(
    UMAA_MM_TaskExecutionStatus_TaskExecutionReportType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_MM_TaskExecutionStatus_TaskExecutionReportType_initialize_w_params(
    UMAA_MM_TaskExecutionStatus_TaskExecutionReportType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_MM_TaskExecutionStatus_TaskExecutionReportType_finalize_w_return(
    UMAA_MM_TaskExecutionStatus_TaskExecutionReportType* self);

NDDSUSERDllExport
void UMAA_MM_TaskExecutionStatus_TaskExecutionReportType_finalize(
    UMAA_MM_TaskExecutionStatus_TaskExecutionReportType* self);

NDDSUSERDllExport
void UMAA_MM_TaskExecutionStatus_TaskExecutionReportType_finalize_ex(
    UMAA_MM_TaskExecutionStatus_TaskExecutionReportType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_MM_TaskExecutionStatus_TaskExecutionReportType_finalize_w_params(
    UMAA_MM_TaskExecutionStatus_TaskExecutionReportType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_MM_TaskExecutionStatus_TaskExecutionReportType_finalize_optional_members(
    UMAA_MM_TaskExecutionStatus_TaskExecutionReportType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_MM_TaskExecutionStatus_TaskExecutionReportType_copy(
    UMAA_MM_TaskExecutionStatus_TaskExecutionReportType* dst,
    const UMAA_MM_TaskExecutionStatus_TaskExecutionReportType* src);

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
        struct type_code< UMAA_MM_TaskExecutionStatus_TaskExecutionReportType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* TaskExecutionReportType */

