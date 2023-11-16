

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from MissionPlanAssignmentReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef MissionPlanAssignmentReportType_468987287_h
#define MissionPlanAssignmentReportType_468987287_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "UMAA/Common/Measurement/Measurements.h"

static const DDS_Char * const UMAA_MM_MissionPlanAssignmentStatus_MissionPlanAssignmentReport_TOPIC= "UMAA::MM::MissionPlanAssignmentStatus::MissionPlanAssignmentReport";

extern "C" {

    extern const char *UMAA_MM_MissionPlanAssignmentStatus_MissionPlanAssignmentReportTypeTYPENAME;

}

struct UMAA_MM_MissionPlanAssignmentStatus_MissionPlanAssignmentReportTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_MM_MissionPlanAssignmentStatus_MissionPlanAssignmentReportTypeTypeSupport;
class UMAA_MM_MissionPlanAssignmentStatus_MissionPlanAssignmentReportTypeDataWriter;
class UMAA_MM_MissionPlanAssignmentStatus_MissionPlanAssignmentReportTypeDataReader;
#endif
class UMAA_MM_MissionPlanAssignmentStatus_MissionPlanAssignmentReportType 
{
  public:
    typedef struct UMAA_MM_MissionPlanAssignmentStatus_MissionPlanAssignmentReportTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_MM_MissionPlanAssignmentStatus_MissionPlanAssignmentReportTypeTypeSupport TypeSupport;
    typedef UMAA_MM_MissionPlanAssignmentStatus_MissionPlanAssignmentReportTypeDataWriter DataWriter;
    typedef UMAA_MM_MissionPlanAssignmentStatus_MissionPlanAssignmentReportTypeDataReader DataReader;
    #endif

    UMAA_Common_Measurement_NumericGUIDSeq  resourceIDs ;
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
NDDSUSERDllExport DDS_TypeCode * UMAA_MM_MissionPlanAssignmentStatus_MissionPlanAssignmentReportType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_MM_MissionPlanAssignmentStatus_MissionPlanAssignmentReportType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MM_MissionPlanAssignmentStatus_MissionPlanAssignmentReportType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MM_MissionPlanAssignmentStatus_MissionPlanAssignmentReportType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_MM_MissionPlanAssignmentStatus_MissionPlanAssignmentReportTypeSeq, UMAA_MM_MissionPlanAssignmentStatus_MissionPlanAssignmentReportType);

NDDSUSERDllExport
RTIBool UMAA_MM_MissionPlanAssignmentStatus_MissionPlanAssignmentReportType_initialize(
    UMAA_MM_MissionPlanAssignmentStatus_MissionPlanAssignmentReportType* self);

NDDSUSERDllExport
RTIBool UMAA_MM_MissionPlanAssignmentStatus_MissionPlanAssignmentReportType_initialize_ex(
    UMAA_MM_MissionPlanAssignmentStatus_MissionPlanAssignmentReportType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_MM_MissionPlanAssignmentStatus_MissionPlanAssignmentReportType_initialize_w_params(
    UMAA_MM_MissionPlanAssignmentStatus_MissionPlanAssignmentReportType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_MM_MissionPlanAssignmentStatus_MissionPlanAssignmentReportType_finalize_w_return(
    UMAA_MM_MissionPlanAssignmentStatus_MissionPlanAssignmentReportType* self);

NDDSUSERDllExport
void UMAA_MM_MissionPlanAssignmentStatus_MissionPlanAssignmentReportType_finalize(
    UMAA_MM_MissionPlanAssignmentStatus_MissionPlanAssignmentReportType* self);

NDDSUSERDllExport
void UMAA_MM_MissionPlanAssignmentStatus_MissionPlanAssignmentReportType_finalize_ex(
    UMAA_MM_MissionPlanAssignmentStatus_MissionPlanAssignmentReportType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_MM_MissionPlanAssignmentStatus_MissionPlanAssignmentReportType_finalize_w_params(
    UMAA_MM_MissionPlanAssignmentStatus_MissionPlanAssignmentReportType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_MM_MissionPlanAssignmentStatus_MissionPlanAssignmentReportType_finalize_optional_members(
    UMAA_MM_MissionPlanAssignmentStatus_MissionPlanAssignmentReportType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_MM_MissionPlanAssignmentStatus_MissionPlanAssignmentReportType_copy(
    UMAA_MM_MissionPlanAssignmentStatus_MissionPlanAssignmentReportType* dst,
    const UMAA_MM_MissionPlanAssignmentStatus_MissionPlanAssignmentReportType* src);

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
        struct type_code< UMAA_MM_MissionPlanAssignmentStatus_MissionPlanAssignmentReportType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* MissionPlanAssignmentReportType */

