

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ObjectivePlanAssignmentReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef ObjectivePlanAssignmentReportType_1700869516_h
#define ObjectivePlanAssignmentReportType_1700869516_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "UMAA/Common/Measurement/Measurements.h"

static const DDS_Char * const UMAA_MM_ObjectivePlanAssignmentStatus_ObjectivePlanAssignmentReport_TOPIC= "UMAA::MM::ObjectivePlanAssignmentStatus::ObjectivePlanAssignmentReport";

extern "C" {

    extern const char *UMAA_MM_ObjectivePlanAssignmentStatus_ObjectivePlanAssignmentReportTypeTYPENAME;

}

struct UMAA_MM_ObjectivePlanAssignmentStatus_ObjectivePlanAssignmentReportTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_MM_ObjectivePlanAssignmentStatus_ObjectivePlanAssignmentReportTypeTypeSupport;
class UMAA_MM_ObjectivePlanAssignmentStatus_ObjectivePlanAssignmentReportTypeDataWriter;
class UMAA_MM_ObjectivePlanAssignmentStatus_ObjectivePlanAssignmentReportTypeDataReader;
#endif
class UMAA_MM_ObjectivePlanAssignmentStatus_ObjectivePlanAssignmentReportType 
{
  public:
    typedef struct UMAA_MM_ObjectivePlanAssignmentStatus_ObjectivePlanAssignmentReportTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_MM_ObjectivePlanAssignmentStatus_ObjectivePlanAssignmentReportTypeTypeSupport TypeSupport;
    typedef UMAA_MM_ObjectivePlanAssignmentStatus_ObjectivePlanAssignmentReportTypeDataWriter DataWriter;
    typedef UMAA_MM_ObjectivePlanAssignmentStatus_ObjectivePlanAssignmentReportTypeDataReader DataReader;
    #endif

    UMAA_Common_Measurement_NumericGUIDSeq  resourceIDs ;
    UMAA_Common_Measurement_NumericGUID   source ;
    UMAA_Common_Measurement_DateTime   timeStamp ;
    UMAA_Common_Measurement_NumericGUID   objectiveID ;
    UMAA_Common_Measurement_NumericGUID   taskID ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_MM_ObjectivePlanAssignmentStatus_ObjectivePlanAssignmentReportType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_MM_ObjectivePlanAssignmentStatus_ObjectivePlanAssignmentReportType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MM_ObjectivePlanAssignmentStatus_ObjectivePlanAssignmentReportType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MM_ObjectivePlanAssignmentStatus_ObjectivePlanAssignmentReportType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_MM_ObjectivePlanAssignmentStatus_ObjectivePlanAssignmentReportTypeSeq, UMAA_MM_ObjectivePlanAssignmentStatus_ObjectivePlanAssignmentReportType);

NDDSUSERDllExport
RTIBool UMAA_MM_ObjectivePlanAssignmentStatus_ObjectivePlanAssignmentReportType_initialize(
    UMAA_MM_ObjectivePlanAssignmentStatus_ObjectivePlanAssignmentReportType* self);

NDDSUSERDllExport
RTIBool UMAA_MM_ObjectivePlanAssignmentStatus_ObjectivePlanAssignmentReportType_initialize_ex(
    UMAA_MM_ObjectivePlanAssignmentStatus_ObjectivePlanAssignmentReportType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_MM_ObjectivePlanAssignmentStatus_ObjectivePlanAssignmentReportType_initialize_w_params(
    UMAA_MM_ObjectivePlanAssignmentStatus_ObjectivePlanAssignmentReportType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_MM_ObjectivePlanAssignmentStatus_ObjectivePlanAssignmentReportType_finalize_w_return(
    UMAA_MM_ObjectivePlanAssignmentStatus_ObjectivePlanAssignmentReportType* self);

NDDSUSERDllExport
void UMAA_MM_ObjectivePlanAssignmentStatus_ObjectivePlanAssignmentReportType_finalize(
    UMAA_MM_ObjectivePlanAssignmentStatus_ObjectivePlanAssignmentReportType* self);

NDDSUSERDllExport
void UMAA_MM_ObjectivePlanAssignmentStatus_ObjectivePlanAssignmentReportType_finalize_ex(
    UMAA_MM_ObjectivePlanAssignmentStatus_ObjectivePlanAssignmentReportType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_MM_ObjectivePlanAssignmentStatus_ObjectivePlanAssignmentReportType_finalize_w_params(
    UMAA_MM_ObjectivePlanAssignmentStatus_ObjectivePlanAssignmentReportType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_MM_ObjectivePlanAssignmentStatus_ObjectivePlanAssignmentReportType_finalize_optional_members(
    UMAA_MM_ObjectivePlanAssignmentStatus_ObjectivePlanAssignmentReportType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_MM_ObjectivePlanAssignmentStatus_ObjectivePlanAssignmentReportType_copy(
    UMAA_MM_ObjectivePlanAssignmentStatus_ObjectivePlanAssignmentReportType* dst,
    const UMAA_MM_ObjectivePlanAssignmentStatus_ObjectivePlanAssignmentReportType* src);

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
        struct type_code< UMAA_MM_ObjectivePlanAssignmentStatus_ObjectivePlanAssignmentReportType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* ObjectivePlanAssignmentReportType */

