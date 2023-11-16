

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from RequiredSpeedControl.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef RequiredSpeedControl_1864756473_h
#define RequiredSpeedControl_1864756473_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "UMAA/Common/Speed/SpeedControlType.h"

extern "C" {

    extern const char *UMAA_Common_VariableSpeedControl_RequiredSpeedControlTYPENAME;

}

struct UMAA_Common_VariableSpeedControl_RequiredSpeedControlSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_Common_VariableSpeedControl_RequiredSpeedControlTypeSupport;
class UMAA_Common_VariableSpeedControl_RequiredSpeedControlDataWriter;
class UMAA_Common_VariableSpeedControl_RequiredSpeedControlDataReader;
#endif
class UMAA_Common_VariableSpeedControl_RequiredSpeedControl 
{
  public:
    typedef struct UMAA_Common_VariableSpeedControl_RequiredSpeedControlSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_Common_VariableSpeedControl_RequiredSpeedControlTypeSupport TypeSupport;
    typedef UMAA_Common_VariableSpeedControl_RequiredSpeedControlDataWriter DataWriter;
    typedef UMAA_Common_VariableSpeedControl_RequiredSpeedControlDataReader DataReader;
    #endif

    UMAA_Common_Speed_SpeedControlType   requiredSpeedControl ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_Common_VariableSpeedControl_RequiredSpeedControl_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_Common_VariableSpeedControl_RequiredSpeedControl_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_VariableSpeedControl_RequiredSpeedControl_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_VariableSpeedControl_RequiredSpeedControl_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_Common_VariableSpeedControl_RequiredSpeedControlSeq, UMAA_Common_VariableSpeedControl_RequiredSpeedControl);

NDDSUSERDllExport
RTIBool UMAA_Common_VariableSpeedControl_RequiredSpeedControl_initialize(
    UMAA_Common_VariableSpeedControl_RequiredSpeedControl* self);

NDDSUSERDllExport
RTIBool UMAA_Common_VariableSpeedControl_RequiredSpeedControl_initialize_ex(
    UMAA_Common_VariableSpeedControl_RequiredSpeedControl* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_Common_VariableSpeedControl_RequiredSpeedControl_initialize_w_params(
    UMAA_Common_VariableSpeedControl_RequiredSpeedControl* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_Common_VariableSpeedControl_RequiredSpeedControl_finalize_w_return(
    UMAA_Common_VariableSpeedControl_RequiredSpeedControl* self);

NDDSUSERDllExport
void UMAA_Common_VariableSpeedControl_RequiredSpeedControl_finalize(
    UMAA_Common_VariableSpeedControl_RequiredSpeedControl* self);

NDDSUSERDllExport
void UMAA_Common_VariableSpeedControl_RequiredSpeedControl_finalize_ex(
    UMAA_Common_VariableSpeedControl_RequiredSpeedControl* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_Common_VariableSpeedControl_RequiredSpeedControl_finalize_w_params(
    UMAA_Common_VariableSpeedControl_RequiredSpeedControl* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_Common_VariableSpeedControl_RequiredSpeedControl_finalize_optional_members(
    UMAA_Common_VariableSpeedControl_RequiredSpeedControl* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_Common_VariableSpeedControl_RequiredSpeedControl_copy(
    UMAA_Common_VariableSpeedControl_RequiredSpeedControl* dst,
    const UMAA_Common_VariableSpeedControl_RequiredSpeedControl* src);

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
        struct type_code< UMAA_Common_VariableSpeedControl_RequiredSpeedControl> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* RequiredSpeedControl */

