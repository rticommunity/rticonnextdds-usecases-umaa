

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from TaskPlanType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef TaskPlanType_1877394031_h
#define TaskPlanType_1877394031_h

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
#include "UMAA/MM/BaseType/ObjectiveType.h"
#include "UMAA/Common/Measurement/Measurements.h"

extern "C" {

    extern const char *UMAA_MM_BaseType_TaskPlanTypeTYPENAME;

}

struct UMAA_MM_BaseType_TaskPlanTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_MM_BaseType_TaskPlanTypeTypeSupport;
class UMAA_MM_BaseType_TaskPlanTypeDataWriter;
class UMAA_MM_BaseType_TaskPlanTypeDataReader;
#endif
class UMAA_MM_BaseType_TaskPlanType 
{
  public:
    typedef struct UMAA_MM_BaseType_TaskPlanTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_MM_BaseType_TaskPlanTypeTypeSupport TypeSupport;
    typedef UMAA_MM_BaseType_TaskPlanTypeDataWriter DataWriter;
    typedef UMAA_MM_BaseType_TaskPlanTypeDataReader DataReader;
    #endif

    UMAA_Common_Measurement_NumericGUIDSeq  dependentTaskIDs ;
    UMAA_Common_Measurement_DateTime   endTime ;
    UMAA_Common_Measurement_DateTime_Tolerance   * endTimeTolerance ;
    DDS_Char *   name ;
    UMAA_MM_BaseType_ObjectiveTypeSeq  objectives ;
    UMAA_Common_Measurement_DateTime   startTime ;
    UMAA_Common_Measurement_DateTime_Tolerance   * startTimeTolerance ;
    UMAA_Common_Measurement_NumericGUID   taskID ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_MM_BaseType_TaskPlanType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_MM_BaseType_TaskPlanType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MM_BaseType_TaskPlanType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MM_BaseType_TaskPlanType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_MM_BaseType_TaskPlanTypeSeq, UMAA_MM_BaseType_TaskPlanType);

NDDSUSERDllExport
RTIBool UMAA_MM_BaseType_TaskPlanType_initialize(
    UMAA_MM_BaseType_TaskPlanType* self);

NDDSUSERDllExport
RTIBool UMAA_MM_BaseType_TaskPlanType_initialize_ex(
    UMAA_MM_BaseType_TaskPlanType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_MM_BaseType_TaskPlanType_initialize_w_params(
    UMAA_MM_BaseType_TaskPlanType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_MM_BaseType_TaskPlanType_finalize_w_return(
    UMAA_MM_BaseType_TaskPlanType* self);

NDDSUSERDllExport
void UMAA_MM_BaseType_TaskPlanType_finalize(
    UMAA_MM_BaseType_TaskPlanType* self);

NDDSUSERDllExport
void UMAA_MM_BaseType_TaskPlanType_finalize_ex(
    UMAA_MM_BaseType_TaskPlanType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_MM_BaseType_TaskPlanType_finalize_w_params(
    UMAA_MM_BaseType_TaskPlanType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_MM_BaseType_TaskPlanType_finalize_optional_members(
    UMAA_MM_BaseType_TaskPlanType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_MM_BaseType_TaskPlanType_copy(
    UMAA_MM_BaseType_TaskPlanType* dst,
    const UMAA_MM_BaseType_TaskPlanType* src);

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
        struct type_code< UMAA_MM_BaseType_TaskPlanType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* TaskPlanType */

