

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from CommsLostPolicyCommandType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef CommsLostPolicyCommandType_1432384990_h
#define CommsLostPolicyCommandType_1432384990_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "UMAA/Common/Enumeration/EnumerationSets.h"
#include "UMAA/Common/Measurement/Measurements.h"
#include "UMAA/MM/CommsLostPolicy/MoveToPosPolicyType.h"
#include "UMAA/MM/CommsLostPolicy/RetrotraversePolicyType.h"

static const DDS_Char * const UMAA_MM_CommsLostPolicy_CommsLostPolicyCommand_TOPIC= "UMAA::MM::CommsLostPolicy::CommsLostPolicyCommand";

extern "C" {

    extern const char *UMAA_MM_CommsLostPolicy_CommsLostPolicyCommandTypeTYPENAME;

}

struct UMAA_MM_CommsLostPolicy_CommsLostPolicyCommandTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_MM_CommsLostPolicy_CommsLostPolicyCommandTypeTypeSupport;
class UMAA_MM_CommsLostPolicy_CommsLostPolicyCommandTypeDataWriter;
class UMAA_MM_CommsLostPolicy_CommsLostPolicyCommandTypeDataReader;
#endif
class UMAA_MM_CommsLostPolicy_CommsLostPolicyCommandType 
{
  public:
    typedef struct UMAA_MM_CommsLostPolicy_CommsLostPolicyCommandTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_MM_CommsLostPolicy_CommsLostPolicyCommandTypeTypeSupport TypeSupport;
    typedef UMAA_MM_CommsLostPolicy_CommsLostPolicyCommandTypeDataWriter DataWriter;
    typedef UMAA_MM_CommsLostPolicy_CommsLostPolicyCommandTypeDataReader DataReader;
    #endif

    DDS_Double   commsLostTimeOut ;
    DDS_Boolean   commsRegainedStop ;
    DDS_Double   commsRegainedTimeOut ;
    DDS_Boolean   * continueMission ;
    UMAA_MM_CommsLostPolicy_MoveToPosPolicyType   * moveToPos ;
    UMAA_MM_CommsLostPolicy_RetrotraversePolicyType   * retrotraverse ;
    DDS_Boolean   * stopMotion ;
    UMAA_Common_Measurement_NumericGUID   source ;
    UMAA_Common_Measurement_NumericGUID   destination ;
    UMAA_Common_Measurement_NumericGUID   sessionID ;
    UMAA_Common_Measurement_DateTime   timeStamp ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_MM_CommsLostPolicy_CommsLostPolicyCommandType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_MM_CommsLostPolicy_CommsLostPolicyCommandType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MM_CommsLostPolicy_CommsLostPolicyCommandType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MM_CommsLostPolicy_CommsLostPolicyCommandType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_MM_CommsLostPolicy_CommsLostPolicyCommandTypeSeq, UMAA_MM_CommsLostPolicy_CommsLostPolicyCommandType);

NDDSUSERDllExport
RTIBool UMAA_MM_CommsLostPolicy_CommsLostPolicyCommandType_initialize(
    UMAA_MM_CommsLostPolicy_CommsLostPolicyCommandType* self);

NDDSUSERDllExport
RTIBool UMAA_MM_CommsLostPolicy_CommsLostPolicyCommandType_initialize_ex(
    UMAA_MM_CommsLostPolicy_CommsLostPolicyCommandType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_MM_CommsLostPolicy_CommsLostPolicyCommandType_initialize_w_params(
    UMAA_MM_CommsLostPolicy_CommsLostPolicyCommandType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_MM_CommsLostPolicy_CommsLostPolicyCommandType_finalize_w_return(
    UMAA_MM_CommsLostPolicy_CommsLostPolicyCommandType* self);

NDDSUSERDllExport
void UMAA_MM_CommsLostPolicy_CommsLostPolicyCommandType_finalize(
    UMAA_MM_CommsLostPolicy_CommsLostPolicyCommandType* self);

NDDSUSERDllExport
void UMAA_MM_CommsLostPolicy_CommsLostPolicyCommandType_finalize_ex(
    UMAA_MM_CommsLostPolicy_CommsLostPolicyCommandType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_MM_CommsLostPolicy_CommsLostPolicyCommandType_finalize_w_params(
    UMAA_MM_CommsLostPolicy_CommsLostPolicyCommandType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_MM_CommsLostPolicy_CommsLostPolicyCommandType_finalize_optional_members(
    UMAA_MM_CommsLostPolicy_CommsLostPolicyCommandType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_MM_CommsLostPolicy_CommsLostPolicyCommandType_copy(
    UMAA_MM_CommsLostPolicy_CommsLostPolicyCommandType* dst,
    const UMAA_MM_CommsLostPolicy_CommsLostPolicyCommandType* src);

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
        struct type_code< UMAA_MM_CommsLostPolicy_CommsLostPolicyCommandType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* CommsLostPolicyCommandType */

