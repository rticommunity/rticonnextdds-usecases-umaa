

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ResourceAllocationCommandType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef ResourceAllocationCommandType_174023919_h
#define ResourceAllocationCommandType_174023919_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "UMAA/Common/Measurement/Measurements.h"

static const DDS_Char * const UMAA_SO_ResourceAllocation_ResourceAllocationCommand_TOPIC= "UMAA::SO::ResourceAllocation::ResourceAllocationCommand";

extern "C" {

    extern const char *UMAA_SO_ResourceAllocation_ResourceAllocationCommandTypeTYPENAME;

}

struct UMAA_SO_ResourceAllocation_ResourceAllocationCommandTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_SO_ResourceAllocation_ResourceAllocationCommandTypeTypeSupport;
class UMAA_SO_ResourceAllocation_ResourceAllocationCommandTypeDataWriter;
class UMAA_SO_ResourceAllocation_ResourceAllocationCommandTypeDataReader;
#endif
class UMAA_SO_ResourceAllocation_ResourceAllocationCommandType 
{
  public:
    typedef struct UMAA_SO_ResourceAllocation_ResourceAllocationCommandTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_SO_ResourceAllocation_ResourceAllocationCommandTypeTypeSupport TypeSupport;
    typedef UMAA_SO_ResourceAllocation_ResourceAllocationCommandTypeDataWriter DataWriter;
    typedef UMAA_SO_ResourceAllocation_ResourceAllocationCommandTypeDataReader DataReader;
    #endif

    DDS_Double   * duration ;
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
NDDSUSERDllExport DDS_TypeCode * UMAA_SO_ResourceAllocation_ResourceAllocationCommandType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_SO_ResourceAllocation_ResourceAllocationCommandType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_SO_ResourceAllocation_ResourceAllocationCommandType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_SO_ResourceAllocation_ResourceAllocationCommandType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_SO_ResourceAllocation_ResourceAllocationCommandTypeSeq, UMAA_SO_ResourceAllocation_ResourceAllocationCommandType);

NDDSUSERDllExport
RTIBool UMAA_SO_ResourceAllocation_ResourceAllocationCommandType_initialize(
    UMAA_SO_ResourceAllocation_ResourceAllocationCommandType* self);

NDDSUSERDllExport
RTIBool UMAA_SO_ResourceAllocation_ResourceAllocationCommandType_initialize_ex(
    UMAA_SO_ResourceAllocation_ResourceAllocationCommandType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_SO_ResourceAllocation_ResourceAllocationCommandType_initialize_w_params(
    UMAA_SO_ResourceAllocation_ResourceAllocationCommandType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_SO_ResourceAllocation_ResourceAllocationCommandType_finalize_w_return(
    UMAA_SO_ResourceAllocation_ResourceAllocationCommandType* self);

NDDSUSERDllExport
void UMAA_SO_ResourceAllocation_ResourceAllocationCommandType_finalize(
    UMAA_SO_ResourceAllocation_ResourceAllocationCommandType* self);

NDDSUSERDllExport
void UMAA_SO_ResourceAllocation_ResourceAllocationCommandType_finalize_ex(
    UMAA_SO_ResourceAllocation_ResourceAllocationCommandType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_SO_ResourceAllocation_ResourceAllocationCommandType_finalize_w_params(
    UMAA_SO_ResourceAllocation_ResourceAllocationCommandType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_SO_ResourceAllocation_ResourceAllocationCommandType_finalize_optional_members(
    UMAA_SO_ResourceAllocation_ResourceAllocationCommandType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_SO_ResourceAllocation_ResourceAllocationCommandType_copy(
    UMAA_SO_ResourceAllocation_ResourceAllocationCommandType* dst,
    const UMAA_SO_ResourceAllocation_ResourceAllocationCommandType* src);

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
        struct type_code< UMAA_SO_ResourceAllocation_ResourceAllocationCommandType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* ResourceAllocationCommandType */

