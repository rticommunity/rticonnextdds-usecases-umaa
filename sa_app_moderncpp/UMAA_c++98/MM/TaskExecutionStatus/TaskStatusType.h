

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from TaskStatusType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef TaskStatusType_1082708537_h
#define TaskStatusType_1082708537_h

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
#include "UMAA/Common/Measurement/Measurements.h"

extern "C" {

    extern const char *UMAA_MM_TaskExecutionStatus_TaskStatusTypeTYPENAME;

}

struct UMAA_MM_TaskExecutionStatus_TaskStatusTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_MM_TaskExecutionStatus_TaskStatusTypeTypeSupport;
class UMAA_MM_TaskExecutionStatus_TaskStatusTypeDataWriter;
class UMAA_MM_TaskExecutionStatus_TaskStatusTypeDataReader;
#endif
class UMAA_MM_TaskExecutionStatus_TaskStatusType 
{
  public:
    typedef struct UMAA_MM_TaskExecutionStatus_TaskStatusTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_MM_TaskExecutionStatus_TaskStatusTypeTypeSupport TypeSupport;
    typedef UMAA_MM_TaskExecutionStatus_TaskStatusTypeDataWriter DataWriter;
    typedef UMAA_MM_TaskExecutionStatus_TaskStatusTypeDataReader DataReader;
    #endif

    UMAA_Common_Measurement_DateTime   endTime ;
    UMAA_Common_Measurement_DateTime   startTime ;
    UMAA_Common_MaritimeEnumeration_TaskStateEnumType_TaskStateEnumType   state ;
    UMAA_Common_Measurement_NumericGUID   source ;
    UMAA_Common_Measurement_DateTime   timeStamp ;
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
NDDSUSERDllExport DDS_TypeCode * UMAA_MM_TaskExecutionStatus_TaskStatusType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_MM_TaskExecutionStatus_TaskStatusType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MM_TaskExecutionStatus_TaskStatusType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MM_TaskExecutionStatus_TaskStatusType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_MM_TaskExecutionStatus_TaskStatusTypeSeq, UMAA_MM_TaskExecutionStatus_TaskStatusType);

NDDSUSERDllExport
RTIBool UMAA_MM_TaskExecutionStatus_TaskStatusType_initialize(
    UMAA_MM_TaskExecutionStatus_TaskStatusType* self);

NDDSUSERDllExport
RTIBool UMAA_MM_TaskExecutionStatus_TaskStatusType_initialize_ex(
    UMAA_MM_TaskExecutionStatus_TaskStatusType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_MM_TaskExecutionStatus_TaskStatusType_initialize_w_params(
    UMAA_MM_TaskExecutionStatus_TaskStatusType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_MM_TaskExecutionStatus_TaskStatusType_finalize_w_return(
    UMAA_MM_TaskExecutionStatus_TaskStatusType* self);

NDDSUSERDllExport
void UMAA_MM_TaskExecutionStatus_TaskStatusType_finalize(
    UMAA_MM_TaskExecutionStatus_TaskStatusType* self);

NDDSUSERDllExport
void UMAA_MM_TaskExecutionStatus_TaskStatusType_finalize_ex(
    UMAA_MM_TaskExecutionStatus_TaskStatusType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_MM_TaskExecutionStatus_TaskStatusType_finalize_w_params(
    UMAA_MM_TaskExecutionStatus_TaskStatusType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_MM_TaskExecutionStatus_TaskStatusType_finalize_optional_members(
    UMAA_MM_TaskExecutionStatus_TaskStatusType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_MM_TaskExecutionStatus_TaskStatusType_copy(
    UMAA_MM_TaskExecutionStatus_TaskStatusType* dst,
    const UMAA_MM_TaskExecutionStatus_TaskStatusType* src);

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
        struct type_code< UMAA_MM_TaskExecutionStatus_TaskStatusType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* TaskStatusType */

