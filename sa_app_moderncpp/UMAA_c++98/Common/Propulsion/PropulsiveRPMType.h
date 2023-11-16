

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from PropulsiveRPMType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef PropulsiveRPMType_1056670556_h
#define PropulsiveRPMType_1056670556_h

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

    extern const char *UMAA_Common_Propulsion_PropulsiveRPMTypeTYPENAME;

}

struct UMAA_Common_Propulsion_PropulsiveRPMTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_Common_Propulsion_PropulsiveRPMTypeTypeSupport;
class UMAA_Common_Propulsion_PropulsiveRPMTypeDataWriter;
class UMAA_Common_Propulsion_PropulsiveRPMTypeDataReader;
#endif
class UMAA_Common_Propulsion_PropulsiveRPMType 
{
  public:
    typedef struct UMAA_Common_Propulsion_PropulsiveRPMTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_Common_Propulsion_PropulsiveRPMTypeTypeSupport TypeSupport;
    typedef UMAA_Common_Propulsion_PropulsiveRPMTypeDataWriter DataWriter;
    typedef UMAA_Common_Propulsion_PropulsiveRPMTypeDataReader DataReader;
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
NDDSUSERDllExport DDS_TypeCode * UMAA_Common_Propulsion_PropulsiveRPMType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_Common_Propulsion_PropulsiveRPMType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Propulsion_PropulsiveRPMType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Propulsion_PropulsiveRPMType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_Common_Propulsion_PropulsiveRPMTypeSeq, UMAA_Common_Propulsion_PropulsiveRPMType);

NDDSUSERDllExport
RTIBool UMAA_Common_Propulsion_PropulsiveRPMType_initialize(
    UMAA_Common_Propulsion_PropulsiveRPMType* self);

NDDSUSERDllExport
RTIBool UMAA_Common_Propulsion_PropulsiveRPMType_initialize_ex(
    UMAA_Common_Propulsion_PropulsiveRPMType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_Common_Propulsion_PropulsiveRPMType_initialize_w_params(
    UMAA_Common_Propulsion_PropulsiveRPMType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_Common_Propulsion_PropulsiveRPMType_finalize_w_return(
    UMAA_Common_Propulsion_PropulsiveRPMType* self);

NDDSUSERDllExport
void UMAA_Common_Propulsion_PropulsiveRPMType_finalize(
    UMAA_Common_Propulsion_PropulsiveRPMType* self);

NDDSUSERDllExport
void UMAA_Common_Propulsion_PropulsiveRPMType_finalize_ex(
    UMAA_Common_Propulsion_PropulsiveRPMType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_Common_Propulsion_PropulsiveRPMType_finalize_w_params(
    UMAA_Common_Propulsion_PropulsiveRPMType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_Common_Propulsion_PropulsiveRPMType_finalize_optional_members(
    UMAA_Common_Propulsion_PropulsiveRPMType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_Common_Propulsion_PropulsiveRPMType_copy(
    UMAA_Common_Propulsion_PropulsiveRPMType* dst,
    const UMAA_Common_Propulsion_PropulsiveRPMType* src);

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
        struct type_code< UMAA_Common_Propulsion_PropulsiveRPMType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* PropulsiveRPMType */

