

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ResourceAllocationControlInfo.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef ResourceAllocationControlInfo_616192345_h
#define ResourceAllocationControlInfo_616192345_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "UMAA/Common/Measurement/Measurements.h"
#include "UMAA/SO/ResourceAllocation/ResourceAllocationControlSession.h"
#include "UMAA/Common/Measurement/Measurements.h"

extern "C" {

    extern const char *UMAA_SO_ResourceAllocation_ResourceAllocationControlInfoTYPENAME;

}

struct UMAA_SO_ResourceAllocation_ResourceAllocationControlInfoSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_SO_ResourceAllocation_ResourceAllocationControlInfoTypeSupport;
class UMAA_SO_ResourceAllocation_ResourceAllocationControlInfoDataWriter;
class UMAA_SO_ResourceAllocation_ResourceAllocationControlInfoDataReader;
#endif
class UMAA_SO_ResourceAllocation_ResourceAllocationControlInfo 
{
  public:
    typedef struct UMAA_SO_ResourceAllocation_ResourceAllocationControlInfoSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_SO_ResourceAllocation_ResourceAllocationControlInfoTypeSupport TypeSupport;
    typedef UMAA_SO_ResourceAllocation_ResourceAllocationControlInfoDataWriter DataWriter;
    typedef UMAA_SO_ResourceAllocation_ResourceAllocationControlInfoDataReader DataReader;
    #endif

    UMAA_SO_ResourceAllocation_ResourceAllocationControlSession   * controlSession ;
    UMAA_Common_Measurement_NumericGUID   resourceId ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_SO_ResourceAllocation_ResourceAllocationControlInfo_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_SO_ResourceAllocation_ResourceAllocationControlInfo_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_SO_ResourceAllocation_ResourceAllocationControlInfo_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_SO_ResourceAllocation_ResourceAllocationControlInfo_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_SO_ResourceAllocation_ResourceAllocationControlInfoSeq, UMAA_SO_ResourceAllocation_ResourceAllocationControlInfo);

NDDSUSERDllExport
RTIBool UMAA_SO_ResourceAllocation_ResourceAllocationControlInfo_initialize(
    UMAA_SO_ResourceAllocation_ResourceAllocationControlInfo* self);

NDDSUSERDllExport
RTIBool UMAA_SO_ResourceAllocation_ResourceAllocationControlInfo_initialize_ex(
    UMAA_SO_ResourceAllocation_ResourceAllocationControlInfo* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_SO_ResourceAllocation_ResourceAllocationControlInfo_initialize_w_params(
    UMAA_SO_ResourceAllocation_ResourceAllocationControlInfo* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_SO_ResourceAllocation_ResourceAllocationControlInfo_finalize_w_return(
    UMAA_SO_ResourceAllocation_ResourceAllocationControlInfo* self);

NDDSUSERDllExport
void UMAA_SO_ResourceAllocation_ResourceAllocationControlInfo_finalize(
    UMAA_SO_ResourceAllocation_ResourceAllocationControlInfo* self);

NDDSUSERDllExport
void UMAA_SO_ResourceAllocation_ResourceAllocationControlInfo_finalize_ex(
    UMAA_SO_ResourceAllocation_ResourceAllocationControlInfo* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_SO_ResourceAllocation_ResourceAllocationControlInfo_finalize_w_params(
    UMAA_SO_ResourceAllocation_ResourceAllocationControlInfo* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_SO_ResourceAllocation_ResourceAllocationControlInfo_finalize_optional_members(
    UMAA_SO_ResourceAllocation_ResourceAllocationControlInfo* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_SO_ResourceAllocation_ResourceAllocationControlInfo_copy(
    UMAA_SO_ResourceAllocation_ResourceAllocationControlInfo* dst,
    const UMAA_SO_ResourceAllocation_ResourceAllocationControlInfo* src);

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
        struct type_code< UMAA_SO_ResourceAllocation_ResourceAllocationControlInfo> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* ResourceAllocationControlInfo */

