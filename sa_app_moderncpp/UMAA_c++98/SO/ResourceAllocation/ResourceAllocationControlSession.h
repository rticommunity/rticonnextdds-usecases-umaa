

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ResourceAllocationControlSession.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef ResourceAllocationControlSession_1911695238_h
#define ResourceAllocationControlSession_1911695238_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "UMAA/Common/Measurement/Measurements.h"

extern "C" {

    extern const char *UMAA_SO_ResourceAllocation_ResourceAllocationControlSessionTYPENAME;

}

struct UMAA_SO_ResourceAllocation_ResourceAllocationControlSessionSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_SO_ResourceAllocation_ResourceAllocationControlSessionTypeSupport;
class UMAA_SO_ResourceAllocation_ResourceAllocationControlSessionDataWriter;
class UMAA_SO_ResourceAllocation_ResourceAllocationControlSessionDataReader;
#endif
class UMAA_SO_ResourceAllocation_ResourceAllocationControlSession 
{
  public:
    typedef struct UMAA_SO_ResourceAllocation_ResourceAllocationControlSessionSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_SO_ResourceAllocation_ResourceAllocationControlSessionTypeSupport TypeSupport;
    typedef UMAA_SO_ResourceAllocation_ResourceAllocationControlSessionDataWriter DataWriter;
    typedef UMAA_SO_ResourceAllocation_ResourceAllocationControlSessionDataReader DataReader;
    #endif

    UMAA_Common_Measurement_NumericGUID   controllingConsumer ;
    UMAA_Common_Measurement_DateTime   * endTime ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_SO_ResourceAllocation_ResourceAllocationControlSession_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_SO_ResourceAllocation_ResourceAllocationControlSession_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_SO_ResourceAllocation_ResourceAllocationControlSession_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_SO_ResourceAllocation_ResourceAllocationControlSession_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_SO_ResourceAllocation_ResourceAllocationControlSessionSeq, UMAA_SO_ResourceAllocation_ResourceAllocationControlSession);

NDDSUSERDllExport
RTIBool UMAA_SO_ResourceAllocation_ResourceAllocationControlSession_initialize(
    UMAA_SO_ResourceAllocation_ResourceAllocationControlSession* self);

NDDSUSERDllExport
RTIBool UMAA_SO_ResourceAllocation_ResourceAllocationControlSession_initialize_ex(
    UMAA_SO_ResourceAllocation_ResourceAllocationControlSession* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_SO_ResourceAllocation_ResourceAllocationControlSession_initialize_w_params(
    UMAA_SO_ResourceAllocation_ResourceAllocationControlSession* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_SO_ResourceAllocation_ResourceAllocationControlSession_finalize_w_return(
    UMAA_SO_ResourceAllocation_ResourceAllocationControlSession* self);

NDDSUSERDllExport
void UMAA_SO_ResourceAllocation_ResourceAllocationControlSession_finalize(
    UMAA_SO_ResourceAllocation_ResourceAllocationControlSession* self);

NDDSUSERDllExport
void UMAA_SO_ResourceAllocation_ResourceAllocationControlSession_finalize_ex(
    UMAA_SO_ResourceAllocation_ResourceAllocationControlSession* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_SO_ResourceAllocation_ResourceAllocationControlSession_finalize_w_params(
    UMAA_SO_ResourceAllocation_ResourceAllocationControlSession* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_SO_ResourceAllocation_ResourceAllocationControlSession_finalize_optional_members(
    UMAA_SO_ResourceAllocation_ResourceAllocationControlSession* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_SO_ResourceAllocation_ResourceAllocationControlSession_copy(
    UMAA_SO_ResourceAllocation_ResourceAllocationControlSession* dst,
    const UMAA_SO_ResourceAllocation_ResourceAllocationControlSession* src);

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
        struct type_code< UMAA_SO_ResourceAllocation_ResourceAllocationControlSession> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* ResourceAllocationControlSession */

