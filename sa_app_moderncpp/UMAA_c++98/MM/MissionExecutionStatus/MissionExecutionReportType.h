

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from MissionExecutionReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef MissionExecutionReportType_860122263_h
#define MissionExecutionReportType_860122263_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "UMAA/Common/Measurement/Measurements.h"
#include "UMAA/MM/MissionExecutionStatus/MissionStatusType.h"

static const DDS_Char * const UMAA_MM_MissionExecutionStatus_MissionExecutionReport_TOPIC= "UMAA::MM::MissionExecutionStatus::MissionExecutionReport";

extern "C" {

    extern const char *UMAA_MM_MissionExecutionStatus_MissionExecutionReportTypeTYPENAME;

}

struct UMAA_MM_MissionExecutionStatus_MissionExecutionReportTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_MM_MissionExecutionStatus_MissionExecutionReportTypeTypeSupport;
class UMAA_MM_MissionExecutionStatus_MissionExecutionReportTypeDataWriter;
class UMAA_MM_MissionExecutionStatus_MissionExecutionReportTypeDataReader;
#endif
class UMAA_MM_MissionExecutionStatus_MissionExecutionReportType 
{
  public:
    typedef struct UMAA_MM_MissionExecutionStatus_MissionExecutionReportTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_MM_MissionExecutionStatus_MissionExecutionReportTypeTypeSupport TypeSupport;
    typedef UMAA_MM_MissionExecutionStatus_MissionExecutionReportTypeDataWriter DataWriter;
    typedef UMAA_MM_MissionExecutionStatus_MissionExecutionReportTypeDataReader DataReader;
    #endif

    UMAA_MM_MissionExecutionStatus_MissionStatusTypeSeq  missionStatuses ;
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
NDDSUSERDllExport DDS_TypeCode * UMAA_MM_MissionExecutionStatus_MissionExecutionReportType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_MM_MissionExecutionStatus_MissionExecutionReportType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MM_MissionExecutionStatus_MissionExecutionReportType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MM_MissionExecutionStatus_MissionExecutionReportType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_MM_MissionExecutionStatus_MissionExecutionReportTypeSeq, UMAA_MM_MissionExecutionStatus_MissionExecutionReportType);

NDDSUSERDllExport
RTIBool UMAA_MM_MissionExecutionStatus_MissionExecutionReportType_initialize(
    UMAA_MM_MissionExecutionStatus_MissionExecutionReportType* self);

NDDSUSERDllExport
RTIBool UMAA_MM_MissionExecutionStatus_MissionExecutionReportType_initialize_ex(
    UMAA_MM_MissionExecutionStatus_MissionExecutionReportType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_MM_MissionExecutionStatus_MissionExecutionReportType_initialize_w_params(
    UMAA_MM_MissionExecutionStatus_MissionExecutionReportType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_MM_MissionExecutionStatus_MissionExecutionReportType_finalize_w_return(
    UMAA_MM_MissionExecutionStatus_MissionExecutionReportType* self);

NDDSUSERDllExport
void UMAA_MM_MissionExecutionStatus_MissionExecutionReportType_finalize(
    UMAA_MM_MissionExecutionStatus_MissionExecutionReportType* self);

NDDSUSERDllExport
void UMAA_MM_MissionExecutionStatus_MissionExecutionReportType_finalize_ex(
    UMAA_MM_MissionExecutionStatus_MissionExecutionReportType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_MM_MissionExecutionStatus_MissionExecutionReportType_finalize_w_params(
    UMAA_MM_MissionExecutionStatus_MissionExecutionReportType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_MM_MissionExecutionStatus_MissionExecutionReportType_finalize_optional_members(
    UMAA_MM_MissionExecutionStatus_MissionExecutionReportType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_MM_MissionExecutionStatus_MissionExecutionReportType_copy(
    UMAA_MM_MissionExecutionStatus_MissionExecutionReportType* dst,
    const UMAA_MM_MissionExecutionStatus_MissionExecutionReportType* src);

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
        struct type_code< UMAA_MM_MissionExecutionStatus_MissionExecutionReportType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* MissionExecutionReportType */

