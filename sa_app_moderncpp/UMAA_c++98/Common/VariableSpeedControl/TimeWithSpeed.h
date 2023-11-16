

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from TimeWithSpeed.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef TimeWithSpeed_1557317722_h
#define TimeWithSpeed_1557317722_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "UMAA/Common/Speed/SpeedControlType.h"
#include "UMAA/Common/TimeWindow/TimeWindowType.h"

extern "C" {

    extern const char *UMAA_Common_VariableSpeedControl_TimeWithSpeedTYPENAME;

}

struct UMAA_Common_VariableSpeedControl_TimeWithSpeedSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_Common_VariableSpeedControl_TimeWithSpeedTypeSupport;
class UMAA_Common_VariableSpeedControl_TimeWithSpeedDataWriter;
class UMAA_Common_VariableSpeedControl_TimeWithSpeedDataReader;
#endif
class UMAA_Common_VariableSpeedControl_TimeWithSpeed 
{
  public:
    typedef struct UMAA_Common_VariableSpeedControl_TimeWithSpeedSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_Common_VariableSpeedControl_TimeWithSpeedTypeSupport TypeSupport;
    typedef UMAA_Common_VariableSpeedControl_TimeWithSpeedDataWriter DataWriter;
    typedef UMAA_Common_VariableSpeedControl_TimeWithSpeedDataReader DataReader;
    #endif

    UMAA_Common_Speed_SpeedControlType   * recommendedSpeed ;
    UMAA_Common_TimeWindow_TimeWindowType   timeWindow ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_Common_VariableSpeedControl_TimeWithSpeed_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_Common_VariableSpeedControl_TimeWithSpeed_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_VariableSpeedControl_TimeWithSpeed_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_VariableSpeedControl_TimeWithSpeed_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_Common_VariableSpeedControl_TimeWithSpeedSeq, UMAA_Common_VariableSpeedControl_TimeWithSpeed);

NDDSUSERDllExport
RTIBool UMAA_Common_VariableSpeedControl_TimeWithSpeed_initialize(
    UMAA_Common_VariableSpeedControl_TimeWithSpeed* self);

NDDSUSERDllExport
RTIBool UMAA_Common_VariableSpeedControl_TimeWithSpeed_initialize_ex(
    UMAA_Common_VariableSpeedControl_TimeWithSpeed* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_Common_VariableSpeedControl_TimeWithSpeed_initialize_w_params(
    UMAA_Common_VariableSpeedControl_TimeWithSpeed* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_Common_VariableSpeedControl_TimeWithSpeed_finalize_w_return(
    UMAA_Common_VariableSpeedControl_TimeWithSpeed* self);

NDDSUSERDllExport
void UMAA_Common_VariableSpeedControl_TimeWithSpeed_finalize(
    UMAA_Common_VariableSpeedControl_TimeWithSpeed* self);

NDDSUSERDllExport
void UMAA_Common_VariableSpeedControl_TimeWithSpeed_finalize_ex(
    UMAA_Common_VariableSpeedControl_TimeWithSpeed* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_Common_VariableSpeedControl_TimeWithSpeed_finalize_w_params(
    UMAA_Common_VariableSpeedControl_TimeWithSpeed* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_Common_VariableSpeedControl_TimeWithSpeed_finalize_optional_members(
    UMAA_Common_VariableSpeedControl_TimeWithSpeed* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_Common_VariableSpeedControl_TimeWithSpeed_copy(
    UMAA_Common_VariableSpeedControl_TimeWithSpeed* dst,
    const UMAA_Common_VariableSpeedControl_TimeWithSpeed* src);

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
        struct type_code< UMAA_Common_VariableSpeedControl_TimeWithSpeed> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* TimeWithSpeed */

