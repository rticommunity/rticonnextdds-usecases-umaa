

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ResourceAllocationPriorityCommandType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef ResourceAllocationPriorityCommandType_543298641_h
#define ResourceAllocationPriorityCommandType_543298641_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "UMAA/Common/Measurement/Measurements.h"

static const DDS_Char * const UMAA_SO_ResourceAllocation_ResourceAllocationPriorityCommand_TOPIC= "UMAA::SO::ResourceAllocation::ResourceAllocationPriorityCommand";

extern "C" {

    extern const char *UMAA_SO_ResourceAllocation_ResourceAllocationPriorityCommandTypeTYPENAME;

}

struct UMAA_SO_ResourceAllocation_ResourceAllocationPriorityCommandTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_SO_ResourceAllocation_ResourceAllocationPriorityCommandTypeTypeSupport;
class UMAA_SO_ResourceAllocation_ResourceAllocationPriorityCommandTypeDataWriter;
class UMAA_SO_ResourceAllocation_ResourceAllocationPriorityCommandTypeDataReader;
#endif
class UMAA_SO_ResourceAllocation_ResourceAllocationPriorityCommandType 
{
  public:
    typedef struct UMAA_SO_ResourceAllocation_ResourceAllocationPriorityCommandTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_SO_ResourceAllocation_ResourceAllocationPriorityCommandTypeTypeSupport TypeSupport;
    typedef UMAA_SO_ResourceAllocation_ResourceAllocationPriorityCommandTypeDataWriter DataWriter;
    typedef UMAA_SO_ResourceAllocation_ResourceAllocationPriorityCommandTypeDataReader DataReader;
    #endif

    UMAA_Common_Measurement_NumericGUIDSeq  priorities ;
    UMAA_Common_Measurement_NumericGUID   source ;
    UMAA_Common_Measurement_NumericGUID   destination ;
    UMAA_Common_Measurement_NumericGUID   sessionID ;
    UMAA_Common_Measurement_DateTime   timeStamp ;
    UMAA_Common_Measurement_NumericGUID   resourceId ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_SO_ResourceAllocation_ResourceAllocationPriorityCommandType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_SO_ResourceAllocation_ResourceAllocationPriorityCommandType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_SO_ResourceAllocation_ResourceAllocationPriorityCommandType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_SO_ResourceAllocation_ResourceAllocationPriorityCommandType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_SO_ResourceAllocation_ResourceAllocationPriorityCommandTypeSeq, UMAA_SO_ResourceAllocation_ResourceAllocationPriorityCommandType);

NDDSUSERDllExport
RTIBool UMAA_SO_ResourceAllocation_ResourceAllocationPriorityCommandType_initialize(
    UMAA_SO_ResourceAllocation_ResourceAllocationPriorityCommandType* self);

NDDSUSERDllExport
RTIBool UMAA_SO_ResourceAllocation_ResourceAllocationPriorityCommandType_initialize_ex(
    UMAA_SO_ResourceAllocation_ResourceAllocationPriorityCommandType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_SO_ResourceAllocation_ResourceAllocationPriorityCommandType_initialize_w_params(
    UMAA_SO_ResourceAllocation_ResourceAllocationPriorityCommandType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_SO_ResourceAllocation_ResourceAllocationPriorityCommandType_finalize_w_return(
    UMAA_SO_ResourceAllocation_ResourceAllocationPriorityCommandType* self);

NDDSUSERDllExport
void UMAA_SO_ResourceAllocation_ResourceAllocationPriorityCommandType_finalize(
    UMAA_SO_ResourceAllocation_ResourceAllocationPriorityCommandType* self);

NDDSUSERDllExport
void UMAA_SO_ResourceAllocation_ResourceAllocationPriorityCommandType_finalize_ex(
    UMAA_SO_ResourceAllocation_ResourceAllocationPriorityCommandType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_SO_ResourceAllocation_ResourceAllocationPriorityCommandType_finalize_w_params(
    UMAA_SO_ResourceAllocation_ResourceAllocationPriorityCommandType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_SO_ResourceAllocation_ResourceAllocationPriorityCommandType_finalize_optional_members(
    UMAA_SO_ResourceAllocation_ResourceAllocationPriorityCommandType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_SO_ResourceAllocation_ResourceAllocationPriorityCommandType_copy(
    UMAA_SO_ResourceAllocation_ResourceAllocationPriorityCommandType* dst,
    const UMAA_SO_ResourceAllocation_ResourceAllocationPriorityCommandType* src);

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
        struct type_code< UMAA_SO_ResourceAllocation_ResourceAllocationPriorityCommandType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* ResourceAllocationPriorityCommandType */

