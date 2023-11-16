

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ObjectiveStatusType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef ObjectiveStatusType_400146106_h
#define ObjectiveStatusType_400146106_h

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

    extern const char *UMAA_MM_ObjectiveExecutionStatus_ObjectiveStatusTypeTYPENAME;

}

struct UMAA_MM_ObjectiveExecutionStatus_ObjectiveStatusTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_MM_ObjectiveExecutionStatus_ObjectiveStatusTypeTypeSupport;
class UMAA_MM_ObjectiveExecutionStatus_ObjectiveStatusTypeDataWriter;
class UMAA_MM_ObjectiveExecutionStatus_ObjectiveStatusTypeDataReader;
#endif
class UMAA_MM_ObjectiveExecutionStatus_ObjectiveStatusType 
{
  public:
    typedef struct UMAA_MM_ObjectiveExecutionStatus_ObjectiveStatusTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_MM_ObjectiveExecutionStatus_ObjectiveStatusTypeTypeSupport TypeSupport;
    typedef UMAA_MM_ObjectiveExecutionStatus_ObjectiveStatusTypeDataWriter DataWriter;
    typedef UMAA_MM_ObjectiveExecutionStatus_ObjectiveStatusTypeDataReader DataReader;
    #endif

    UMAA_Common_Measurement_DateTime   endTime ;
    UMAA_Common_Measurement_DateTime   startTime ;
    UMAA_Common_MaritimeEnumeration_TaskStateEnumType_TaskStateEnumType   state ;
    UMAA_Common_Measurement_NumericGUID   source ;
    UMAA_Common_Measurement_DateTime   timeStamp ;
    UMAA_Common_Measurement_NumericGUID   missionID ;
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
NDDSUSERDllExport DDS_TypeCode * UMAA_MM_ObjectiveExecutionStatus_ObjectiveStatusType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_MM_ObjectiveExecutionStatus_ObjectiveStatusType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MM_ObjectiveExecutionStatus_ObjectiveStatusType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MM_ObjectiveExecutionStatus_ObjectiveStatusType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_MM_ObjectiveExecutionStatus_ObjectiveStatusTypeSeq, UMAA_MM_ObjectiveExecutionStatus_ObjectiveStatusType);

NDDSUSERDllExport
RTIBool UMAA_MM_ObjectiveExecutionStatus_ObjectiveStatusType_initialize(
    UMAA_MM_ObjectiveExecutionStatus_ObjectiveStatusType* self);

NDDSUSERDllExport
RTIBool UMAA_MM_ObjectiveExecutionStatus_ObjectiveStatusType_initialize_ex(
    UMAA_MM_ObjectiveExecutionStatus_ObjectiveStatusType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_MM_ObjectiveExecutionStatus_ObjectiveStatusType_initialize_w_params(
    UMAA_MM_ObjectiveExecutionStatus_ObjectiveStatusType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_MM_ObjectiveExecutionStatus_ObjectiveStatusType_finalize_w_return(
    UMAA_MM_ObjectiveExecutionStatus_ObjectiveStatusType* self);

NDDSUSERDllExport
void UMAA_MM_ObjectiveExecutionStatus_ObjectiveStatusType_finalize(
    UMAA_MM_ObjectiveExecutionStatus_ObjectiveStatusType* self);

NDDSUSERDllExport
void UMAA_MM_ObjectiveExecutionStatus_ObjectiveStatusType_finalize_ex(
    UMAA_MM_ObjectiveExecutionStatus_ObjectiveStatusType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_MM_ObjectiveExecutionStatus_ObjectiveStatusType_finalize_w_params(
    UMAA_MM_ObjectiveExecutionStatus_ObjectiveStatusType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_MM_ObjectiveExecutionStatus_ObjectiveStatusType_finalize_optional_members(
    UMAA_MM_ObjectiveExecutionStatus_ObjectiveStatusType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_MM_ObjectiveExecutionStatus_ObjectiveStatusType_copy(
    UMAA_MM_ObjectiveExecutionStatus_ObjectiveStatusType* dst,
    const UMAA_MM_ObjectiveExecutionStatus_ObjectiveStatusType* src);

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
        struct type_code< UMAA_MM_ObjectiveExecutionStatus_ObjectiveStatusType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* ObjectiveStatusType */

