

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ObjectiveExecutionCommandType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef ObjectiveExecutionCommandType_721374949_h
#define ObjectiveExecutionCommandType_721374949_h

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

static const DDS_Char * const UMAA_MM_ObjectiveExecutionControl_ObjectiveExecutionCommand_TOPIC= "UMAA::MM::ObjectiveExecutionControl::ObjectiveExecutionCommand";

extern "C" {

    extern const char *UMAA_MM_ObjectiveExecutionControl_ObjectiveExecutionCommandTypeTYPENAME;

}

struct UMAA_MM_ObjectiveExecutionControl_ObjectiveExecutionCommandTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_MM_ObjectiveExecutionControl_ObjectiveExecutionCommandTypeTypeSupport;
class UMAA_MM_ObjectiveExecutionControl_ObjectiveExecutionCommandTypeDataWriter;
class UMAA_MM_ObjectiveExecutionControl_ObjectiveExecutionCommandTypeDataReader;
#endif
class UMAA_MM_ObjectiveExecutionControl_ObjectiveExecutionCommandType 
{
  public:
    typedef struct UMAA_MM_ObjectiveExecutionControl_ObjectiveExecutionCommandTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_MM_ObjectiveExecutionControl_ObjectiveExecutionCommandTypeTypeSupport TypeSupport;
    typedef UMAA_MM_ObjectiveExecutionControl_ObjectiveExecutionCommandTypeDataWriter DataWriter;
    typedef UMAA_MM_ObjectiveExecutionControl_ObjectiveExecutionCommandTypeDataReader DataReader;
    #endif

    UMAA_Common_MaritimeEnumeration_TaskStateEnumType_TaskStateEnumType   state ;
    UMAA_Common_Measurement_NumericGUID   source ;
    UMAA_Common_Measurement_NumericGUID   destination ;
    UMAA_Common_Measurement_NumericGUID   sessionID ;
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
NDDSUSERDllExport DDS_TypeCode * UMAA_MM_ObjectiveExecutionControl_ObjectiveExecutionCommandType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_MM_ObjectiveExecutionControl_ObjectiveExecutionCommandType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MM_ObjectiveExecutionControl_ObjectiveExecutionCommandType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MM_ObjectiveExecutionControl_ObjectiveExecutionCommandType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_MM_ObjectiveExecutionControl_ObjectiveExecutionCommandTypeSeq, UMAA_MM_ObjectiveExecutionControl_ObjectiveExecutionCommandType);

NDDSUSERDllExport
RTIBool UMAA_MM_ObjectiveExecutionControl_ObjectiveExecutionCommandType_initialize(
    UMAA_MM_ObjectiveExecutionControl_ObjectiveExecutionCommandType* self);

NDDSUSERDllExport
RTIBool UMAA_MM_ObjectiveExecutionControl_ObjectiveExecutionCommandType_initialize_ex(
    UMAA_MM_ObjectiveExecutionControl_ObjectiveExecutionCommandType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_MM_ObjectiveExecutionControl_ObjectiveExecutionCommandType_initialize_w_params(
    UMAA_MM_ObjectiveExecutionControl_ObjectiveExecutionCommandType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_MM_ObjectiveExecutionControl_ObjectiveExecutionCommandType_finalize_w_return(
    UMAA_MM_ObjectiveExecutionControl_ObjectiveExecutionCommandType* self);

NDDSUSERDllExport
void UMAA_MM_ObjectiveExecutionControl_ObjectiveExecutionCommandType_finalize(
    UMAA_MM_ObjectiveExecutionControl_ObjectiveExecutionCommandType* self);

NDDSUSERDllExport
void UMAA_MM_ObjectiveExecutionControl_ObjectiveExecutionCommandType_finalize_ex(
    UMAA_MM_ObjectiveExecutionControl_ObjectiveExecutionCommandType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_MM_ObjectiveExecutionControl_ObjectiveExecutionCommandType_finalize_w_params(
    UMAA_MM_ObjectiveExecutionControl_ObjectiveExecutionCommandType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_MM_ObjectiveExecutionControl_ObjectiveExecutionCommandType_finalize_optional_members(
    UMAA_MM_ObjectiveExecutionControl_ObjectiveExecutionCommandType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_MM_ObjectiveExecutionControl_ObjectiveExecutionCommandType_copy(
    UMAA_MM_ObjectiveExecutionControl_ObjectiveExecutionCommandType* dst,
    const UMAA_MM_ObjectiveExecutionControl_ObjectiveExecutionCommandType* src);

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
        struct type_code< UMAA_MM_ObjectiveExecutionControl_ObjectiveExecutionCommandType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* ObjectiveExecutionCommandType */

