

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from TaskExecutionCommandType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef TaskExecutionCommandType_2071476698_h
#define TaskExecutionCommandType_2071476698_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "UMAA/Common/Measurement/Measurements.h"

static const DDS_Char * const UMAA_MM_TaskExecutionControl_TaskExecutionCommand_TOPIC= "UMAA::MM::TaskExecutionControl::TaskExecutionCommand";

extern "C" {

    extern const char *UMAA_MM_TaskExecutionControl_TaskExecutionCommandTypeTYPENAME;

}

struct UMAA_MM_TaskExecutionControl_TaskExecutionCommandTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_MM_TaskExecutionControl_TaskExecutionCommandTypeTypeSupport;
class UMAA_MM_TaskExecutionControl_TaskExecutionCommandTypeDataWriter;
class UMAA_MM_TaskExecutionControl_TaskExecutionCommandTypeDataReader;
#endif
class UMAA_MM_TaskExecutionControl_TaskExecutionCommandType 
{
  public:
    typedef struct UMAA_MM_TaskExecutionControl_TaskExecutionCommandTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_MM_TaskExecutionControl_TaskExecutionCommandTypeTypeSupport TypeSupport;
    typedef UMAA_MM_TaskExecutionControl_TaskExecutionCommandTypeDataWriter DataWriter;
    typedef UMAA_MM_TaskExecutionControl_TaskExecutionCommandTypeDataReader DataReader;
    #endif

    UMAA_Common_Measurement_NumericGUID   source ;
    UMAA_Common_Measurement_NumericGUID   destination ;
    UMAA_Common_Measurement_NumericGUID   sessionID ;
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
NDDSUSERDllExport DDS_TypeCode * UMAA_MM_TaskExecutionControl_TaskExecutionCommandType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_MM_TaskExecutionControl_TaskExecutionCommandType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MM_TaskExecutionControl_TaskExecutionCommandType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MM_TaskExecutionControl_TaskExecutionCommandType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_MM_TaskExecutionControl_TaskExecutionCommandTypeSeq, UMAA_MM_TaskExecutionControl_TaskExecutionCommandType);

NDDSUSERDllExport
RTIBool UMAA_MM_TaskExecutionControl_TaskExecutionCommandType_initialize(
    UMAA_MM_TaskExecutionControl_TaskExecutionCommandType* self);

NDDSUSERDllExport
RTIBool UMAA_MM_TaskExecutionControl_TaskExecutionCommandType_initialize_ex(
    UMAA_MM_TaskExecutionControl_TaskExecutionCommandType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_MM_TaskExecutionControl_TaskExecutionCommandType_initialize_w_params(
    UMAA_MM_TaskExecutionControl_TaskExecutionCommandType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_MM_TaskExecutionControl_TaskExecutionCommandType_finalize_w_return(
    UMAA_MM_TaskExecutionControl_TaskExecutionCommandType* self);

NDDSUSERDllExport
void UMAA_MM_TaskExecutionControl_TaskExecutionCommandType_finalize(
    UMAA_MM_TaskExecutionControl_TaskExecutionCommandType* self);

NDDSUSERDllExport
void UMAA_MM_TaskExecutionControl_TaskExecutionCommandType_finalize_ex(
    UMAA_MM_TaskExecutionControl_TaskExecutionCommandType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_MM_TaskExecutionControl_TaskExecutionCommandType_finalize_w_params(
    UMAA_MM_TaskExecutionControl_TaskExecutionCommandType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_MM_TaskExecutionControl_TaskExecutionCommandType_finalize_optional_members(
    UMAA_MM_TaskExecutionControl_TaskExecutionCommandType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_MM_TaskExecutionControl_TaskExecutionCommandType_copy(
    UMAA_MM_TaskExecutionControl_TaskExecutionCommandType* dst,
    const UMAA_MM_TaskExecutionControl_TaskExecutionCommandType* src);

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
        struct type_code< UMAA_MM_TaskExecutionControl_TaskExecutionCommandType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* TaskExecutionCommandType */

