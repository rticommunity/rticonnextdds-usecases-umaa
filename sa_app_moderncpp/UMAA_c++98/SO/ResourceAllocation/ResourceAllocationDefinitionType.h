

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ResourceAllocationDefinitionType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef ResourceAllocationDefinitionType_1903602969_h
#define ResourceAllocationDefinitionType_1903602969_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "UMAA/Common/Measurement/Measurements.h"
#include "UMAA/Common/Measurement/Measurements.h"

extern "C" {

    extern const char *UMAA_SO_ResourceAllocation_ResourceAllocationDefinitionTypeTYPENAME;

}

struct UMAA_SO_ResourceAllocation_ResourceAllocationDefinitionTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_SO_ResourceAllocation_ResourceAllocationDefinitionTypeTypeSupport;
class UMAA_SO_ResourceAllocation_ResourceAllocationDefinitionTypeDataWriter;
class UMAA_SO_ResourceAllocation_ResourceAllocationDefinitionTypeDataReader;
#endif
class UMAA_SO_ResourceAllocation_ResourceAllocationDefinitionType 
{
  public:
    typedef struct UMAA_SO_ResourceAllocation_ResourceAllocationDefinitionTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_SO_ResourceAllocation_ResourceAllocationDefinitionTypeTypeSupport TypeSupport;
    typedef UMAA_SO_ResourceAllocation_ResourceAllocationDefinitionTypeDataWriter DataWriter;
    typedef UMAA_SO_ResourceAllocation_ResourceAllocationDefinitionTypeDataReader DataReader;
    #endif

    UMAA_Common_Measurement_NumericGUIDSeq  relatedSources ;
    UMAA_Common_Measurement_NumericGUID   resourceId ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_SO_ResourceAllocation_ResourceAllocationDefinitionType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_SO_ResourceAllocation_ResourceAllocationDefinitionType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_SO_ResourceAllocation_ResourceAllocationDefinitionType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_SO_ResourceAllocation_ResourceAllocationDefinitionType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_SO_ResourceAllocation_ResourceAllocationDefinitionTypeSeq, UMAA_SO_ResourceAllocation_ResourceAllocationDefinitionType);

NDDSUSERDllExport
RTIBool UMAA_SO_ResourceAllocation_ResourceAllocationDefinitionType_initialize(
    UMAA_SO_ResourceAllocation_ResourceAllocationDefinitionType* self);

NDDSUSERDllExport
RTIBool UMAA_SO_ResourceAllocation_ResourceAllocationDefinitionType_initialize_ex(
    UMAA_SO_ResourceAllocation_ResourceAllocationDefinitionType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_SO_ResourceAllocation_ResourceAllocationDefinitionType_initialize_w_params(
    UMAA_SO_ResourceAllocation_ResourceAllocationDefinitionType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_SO_ResourceAllocation_ResourceAllocationDefinitionType_finalize_w_return(
    UMAA_SO_ResourceAllocation_ResourceAllocationDefinitionType* self);

NDDSUSERDllExport
void UMAA_SO_ResourceAllocation_ResourceAllocationDefinitionType_finalize(
    UMAA_SO_ResourceAllocation_ResourceAllocationDefinitionType* self);

NDDSUSERDllExport
void UMAA_SO_ResourceAllocation_ResourceAllocationDefinitionType_finalize_ex(
    UMAA_SO_ResourceAllocation_ResourceAllocationDefinitionType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_SO_ResourceAllocation_ResourceAllocationDefinitionType_finalize_w_params(
    UMAA_SO_ResourceAllocation_ResourceAllocationDefinitionType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_SO_ResourceAllocation_ResourceAllocationDefinitionType_finalize_optional_members(
    UMAA_SO_ResourceAllocation_ResourceAllocationDefinitionType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_SO_ResourceAllocation_ResourceAllocationDefinitionType_copy(
    UMAA_SO_ResourceAllocation_ResourceAllocationDefinitionType* dst,
    const UMAA_SO_ResourceAllocation_ResourceAllocationDefinitionType* src);

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
        struct type_code< UMAA_SO_ResourceAllocation_ResourceAllocationDefinitionType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* ResourceAllocationDefinitionType */

