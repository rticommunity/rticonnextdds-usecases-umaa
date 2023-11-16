

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from TaskExecutionCommandAckReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef TaskExecutionCommandAckReportType_938506237_h
#define TaskExecutionCommandAckReportType_938506237_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "UMAA/Common/Measurement/Measurements.h"

static const DDS_Char * const UMAA_MM_TaskExecutionControl_TaskExecutionCommandAckReport_TOPIC= "UMAA::MM::TaskExecutionControl::TaskExecutionCommandAckReport";

extern "C" {

    extern const char *UMAA_MM_TaskExecutionControl_TaskExecutionCommandAckReportTypeTYPENAME;

}

struct UMAA_MM_TaskExecutionControl_TaskExecutionCommandAckReportTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_MM_TaskExecutionControl_TaskExecutionCommandAckReportTypeTypeSupport;
class UMAA_MM_TaskExecutionControl_TaskExecutionCommandAckReportTypeDataWriter;
class UMAA_MM_TaskExecutionControl_TaskExecutionCommandAckReportTypeDataReader;
#endif
class UMAA_MM_TaskExecutionControl_TaskExecutionCommandAckReportType 
{
  public:
    typedef struct UMAA_MM_TaskExecutionControl_TaskExecutionCommandAckReportTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_MM_TaskExecutionControl_TaskExecutionCommandAckReportTypeTypeSupport TypeSupport;
    typedef UMAA_MM_TaskExecutionControl_TaskExecutionCommandAckReportTypeDataWriter DataWriter;
    typedef UMAA_MM_TaskExecutionControl_TaskExecutionCommandAckReportTypeDataReader DataReader;
    #endif

    UMAA_Common_Measurement_NumericGUID   source ;
    UMAA_Common_Measurement_NumericGUID   sessionID ;
    UMAA_Common_Measurement_NumericGUID   missionID ;
    UMAA_Common_Measurement_NumericGUID   taskID ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_MM_TaskExecutionControl_TaskExecutionCommandAckReportType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_MM_TaskExecutionControl_TaskExecutionCommandAckReportType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MM_TaskExecutionControl_TaskExecutionCommandAckReportType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MM_TaskExecutionControl_TaskExecutionCommandAckReportType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_MM_TaskExecutionControl_TaskExecutionCommandAckReportTypeSeq, UMAA_MM_TaskExecutionControl_TaskExecutionCommandAckReportType);

NDDSUSERDllExport
RTIBool UMAA_MM_TaskExecutionControl_TaskExecutionCommandAckReportType_initialize(
    UMAA_MM_TaskExecutionControl_TaskExecutionCommandAckReportType* self);

NDDSUSERDllExport
RTIBool UMAA_MM_TaskExecutionControl_TaskExecutionCommandAckReportType_initialize_ex(
    UMAA_MM_TaskExecutionControl_TaskExecutionCommandAckReportType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_MM_TaskExecutionControl_TaskExecutionCommandAckReportType_initialize_w_params(
    UMAA_MM_TaskExecutionControl_TaskExecutionCommandAckReportType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_MM_TaskExecutionControl_TaskExecutionCommandAckReportType_finalize_w_return(
    UMAA_MM_TaskExecutionControl_TaskExecutionCommandAckReportType* self);

NDDSUSERDllExport
void UMAA_MM_TaskExecutionControl_TaskExecutionCommandAckReportType_finalize(
    UMAA_MM_TaskExecutionControl_TaskExecutionCommandAckReportType* self);

NDDSUSERDllExport
void UMAA_MM_TaskExecutionControl_TaskExecutionCommandAckReportType_finalize_ex(
    UMAA_MM_TaskExecutionControl_TaskExecutionCommandAckReportType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_MM_TaskExecutionControl_TaskExecutionCommandAckReportType_finalize_w_params(
    UMAA_MM_TaskExecutionControl_TaskExecutionCommandAckReportType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_MM_TaskExecutionControl_TaskExecutionCommandAckReportType_finalize_optional_members(
    UMAA_MM_TaskExecutionControl_TaskExecutionCommandAckReportType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_MM_TaskExecutionControl_TaskExecutionCommandAckReportType_copy(
    UMAA_MM_TaskExecutionControl_TaskExecutionCommandAckReportType* dst,
    const UMAA_MM_TaskExecutionControl_TaskExecutionCommandAckReportType* src);

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
        struct type_code< UMAA_MM_TaskExecutionControl_TaskExecutionCommandAckReportType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* TaskExecutionCommandAckReportType */

