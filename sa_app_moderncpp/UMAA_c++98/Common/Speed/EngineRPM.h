

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from EngineRPM.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef EngineRPM_509754702_h
#define EngineRPM_509754702_h

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

    extern const char *UMAA_Common_Speed_EngineRPMTYPENAME;

}

struct UMAA_Common_Speed_EngineRPMSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_Common_Speed_EngineRPMTypeSupport;
class UMAA_Common_Speed_EngineRPMDataWriter;
class UMAA_Common_Speed_EngineRPMDataReader;
#endif
class UMAA_Common_Speed_EngineRPM 
{
  public:
    typedef struct UMAA_Common_Speed_EngineRPMSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_Common_Speed_EngineRPMTypeSupport TypeSupport;
    typedef UMAA_Common_Speed_EngineRPMDataWriter DataWriter;
    typedef UMAA_Common_Speed_EngineRPMDataReader DataReader;
    #endif

    DDS_Double   RPM ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_Common_Speed_EngineRPM_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_Common_Speed_EngineRPM_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Speed_EngineRPM_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Speed_EngineRPM_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_Common_Speed_EngineRPMSeq, UMAA_Common_Speed_EngineRPM);

NDDSUSERDllExport
RTIBool UMAA_Common_Speed_EngineRPM_initialize(
    UMAA_Common_Speed_EngineRPM* self);

NDDSUSERDllExport
RTIBool UMAA_Common_Speed_EngineRPM_initialize_ex(
    UMAA_Common_Speed_EngineRPM* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_Common_Speed_EngineRPM_initialize_w_params(
    UMAA_Common_Speed_EngineRPM* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_Common_Speed_EngineRPM_finalize_w_return(
    UMAA_Common_Speed_EngineRPM* self);

NDDSUSERDllExport
void UMAA_Common_Speed_EngineRPM_finalize(
    UMAA_Common_Speed_EngineRPM* self);

NDDSUSERDllExport
void UMAA_Common_Speed_EngineRPM_finalize_ex(
    UMAA_Common_Speed_EngineRPM* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_Common_Speed_EngineRPM_finalize_w_params(
    UMAA_Common_Speed_EngineRPM* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_Common_Speed_EngineRPM_finalize_optional_members(
    UMAA_Common_Speed_EngineRPM* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_Common_Speed_EngineRPM_copy(
    UMAA_Common_Speed_EngineRPM* dst,
    const UMAA_Common_Speed_EngineRPM* src);

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
        struct type_code< UMAA_Common_Speed_EngineRPM> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* EngineRPM */

