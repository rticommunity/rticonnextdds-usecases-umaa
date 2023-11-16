

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from RetrotraversePolicyType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef RetrotraversePolicyType_2092785694_h
#define RetrotraversePolicyType_2092785694_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "UMAA/MM/BaseType/WaypointType.h"
#include "UMAA/MM/Retrotraverse/RetrotraverseType.h"

extern "C" {

    extern const char *UMAA_MM_CommsLostPolicy_RetrotraversePolicyTypeTYPENAME;

}

struct UMAA_MM_CommsLostPolicy_RetrotraversePolicyTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_MM_CommsLostPolicy_RetrotraversePolicyTypeTypeSupport;
class UMAA_MM_CommsLostPolicy_RetrotraversePolicyTypeDataWriter;
class UMAA_MM_CommsLostPolicy_RetrotraversePolicyTypeDataReader;
#endif
class UMAA_MM_CommsLostPolicy_RetrotraversePolicyType 
{
  public:
    typedef struct UMAA_MM_CommsLostPolicy_RetrotraversePolicyTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_MM_CommsLostPolicy_RetrotraversePolicyTypeTypeSupport TypeSupport;
    typedef UMAA_MM_CommsLostPolicy_RetrotraversePolicyTypeDataWriter DataWriter;
    typedef UMAA_MM_CommsLostPolicy_RetrotraversePolicyTypeDataReader DataReader;
    #endif

    UMAA_MM_Retrotraverse_RetrotraverseType   retrotraversePolicy ;
    UMAA_MM_BaseType_WaypointType   * waypointPolicy ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_MM_CommsLostPolicy_RetrotraversePolicyType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_MM_CommsLostPolicy_RetrotraversePolicyType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MM_CommsLostPolicy_RetrotraversePolicyType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MM_CommsLostPolicy_RetrotraversePolicyType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_MM_CommsLostPolicy_RetrotraversePolicyTypeSeq, UMAA_MM_CommsLostPolicy_RetrotraversePolicyType);

NDDSUSERDllExport
RTIBool UMAA_MM_CommsLostPolicy_RetrotraversePolicyType_initialize(
    UMAA_MM_CommsLostPolicy_RetrotraversePolicyType* self);

NDDSUSERDllExport
RTIBool UMAA_MM_CommsLostPolicy_RetrotraversePolicyType_initialize_ex(
    UMAA_MM_CommsLostPolicy_RetrotraversePolicyType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_MM_CommsLostPolicy_RetrotraversePolicyType_initialize_w_params(
    UMAA_MM_CommsLostPolicy_RetrotraversePolicyType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_MM_CommsLostPolicy_RetrotraversePolicyType_finalize_w_return(
    UMAA_MM_CommsLostPolicy_RetrotraversePolicyType* self);

NDDSUSERDllExport
void UMAA_MM_CommsLostPolicy_RetrotraversePolicyType_finalize(
    UMAA_MM_CommsLostPolicy_RetrotraversePolicyType* self);

NDDSUSERDllExport
void UMAA_MM_CommsLostPolicy_RetrotraversePolicyType_finalize_ex(
    UMAA_MM_CommsLostPolicy_RetrotraversePolicyType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_MM_CommsLostPolicy_RetrotraversePolicyType_finalize_w_params(
    UMAA_MM_CommsLostPolicy_RetrotraversePolicyType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_MM_CommsLostPolicy_RetrotraversePolicyType_finalize_optional_members(
    UMAA_MM_CommsLostPolicy_RetrotraversePolicyType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_MM_CommsLostPolicy_RetrotraversePolicyType_copy(
    UMAA_MM_CommsLostPolicy_RetrotraversePolicyType* dst,
    const UMAA_MM_CommsLostPolicy_RetrotraversePolicyType* src);

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
        struct type_code< UMAA_MM_CommsLostPolicy_RetrotraversePolicyType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* RetrotraversePolicyType */

