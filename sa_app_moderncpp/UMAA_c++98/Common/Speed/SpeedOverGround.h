

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from SpeedOverGround.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef SpeedOverGround_1411083428_h
#define SpeedOverGround_1411083428_h

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

    extern const char *UMAA_Common_Speed_SpeedOverGroundTYPENAME;

}

struct UMAA_Common_Speed_SpeedOverGroundSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_Common_Speed_SpeedOverGroundTypeSupport;
class UMAA_Common_Speed_SpeedOverGroundDataWriter;
class UMAA_Common_Speed_SpeedOverGroundDataReader;
#endif
class UMAA_Common_Speed_SpeedOverGround 
{
  public:
    typedef struct UMAA_Common_Speed_SpeedOverGroundSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_Common_Speed_SpeedOverGroundTypeSupport TypeSupport;
    typedef UMAA_Common_Speed_SpeedOverGroundDataWriter DataWriter;
    typedef UMAA_Common_Speed_SpeedOverGroundDataReader DataReader;
    #endif

    DDS_Double   speed ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_Common_Speed_SpeedOverGround_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_Common_Speed_SpeedOverGround_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Speed_SpeedOverGround_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Speed_SpeedOverGround_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_Common_Speed_SpeedOverGroundSeq, UMAA_Common_Speed_SpeedOverGround);

NDDSUSERDllExport
RTIBool UMAA_Common_Speed_SpeedOverGround_initialize(
    UMAA_Common_Speed_SpeedOverGround* self);

NDDSUSERDllExport
RTIBool UMAA_Common_Speed_SpeedOverGround_initialize_ex(
    UMAA_Common_Speed_SpeedOverGround* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_Common_Speed_SpeedOverGround_initialize_w_params(
    UMAA_Common_Speed_SpeedOverGround* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_Common_Speed_SpeedOverGround_finalize_w_return(
    UMAA_Common_Speed_SpeedOverGround* self);

NDDSUSERDllExport
void UMAA_Common_Speed_SpeedOverGround_finalize(
    UMAA_Common_Speed_SpeedOverGround* self);

NDDSUSERDllExport
void UMAA_Common_Speed_SpeedOverGround_finalize_ex(
    UMAA_Common_Speed_SpeedOverGround* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_Common_Speed_SpeedOverGround_finalize_w_params(
    UMAA_Common_Speed_SpeedOverGround* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_Common_Speed_SpeedOverGround_finalize_optional_members(
    UMAA_Common_Speed_SpeedOverGround* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_Common_Speed_SpeedOverGround_copy(
    UMAA_Common_Speed_SpeedOverGround* dst,
    const UMAA_Common_Speed_SpeedOverGround* src);

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
        struct type_code< UMAA_Common_Speed_SpeedOverGround> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* SpeedOverGround */

