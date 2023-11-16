

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from CommsLostPolicyCommandReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef CommsLostPolicyCommandReportType_510865992_h
#define CommsLostPolicyCommandReportType_510865992_h

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

static const DDS_Char * const UMAA_MM_CommsLostPolicy_CommsLostPolicyCommandReport_TOPIC= "UMAA::MM::CommsLostPolicy::CommsLostPolicyCommandReport";

extern "C" {

    extern const char *UMAA_MM_CommsLostPolicy_CommsLostPolicyCommandReportTypeTYPENAME;

}

struct UMAA_MM_CommsLostPolicy_CommsLostPolicyCommandReportTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_MM_CommsLostPolicy_CommsLostPolicyCommandReportTypeTypeSupport;
class UMAA_MM_CommsLostPolicy_CommsLostPolicyCommandReportTypeDataWriter;
class UMAA_MM_CommsLostPolicy_CommsLostPolicyCommandReportTypeDataReader;
#endif
class UMAA_MM_CommsLostPolicy_CommsLostPolicyCommandReportType 
{
  public:
    typedef struct UMAA_MM_CommsLostPolicy_CommsLostPolicyCommandReportTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_MM_CommsLostPolicy_CommsLostPolicyCommandReportTypeTypeSupport TypeSupport;
    typedef UMAA_MM_CommsLostPolicy_CommsLostPolicyCommandReportTypeDataWriter DataWriter;
    typedef UMAA_MM_CommsLostPolicy_CommsLostPolicyCommandReportTypeDataReader DataReader;
    #endif

    DDS_Double   commsLostTimeOut ;
    DDS_Boolean   commsRegainedStop ;
    DDS_Double   commsRegainedTimeOut ;
    DDS_Boolean   * continueMission ;
    UMAA_MM_CommsLostPolicy_MoveToPosPolicyType   * moveToPos ;
    UMAA_MM_CommsLostPolicy_RetrotraversePolicyType   * retrotraverse ;
    DDS_Boolean   * stopMotion ;
    UMAA_Common_Measurement_NumericGUID   source ;
    UMAA_Common_Measurement_DateTime   timeStamp ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_MM_CommsLostPolicy_CommsLostPolicyCommandReportType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_MM_CommsLostPolicy_CommsLostPolicyCommandReportType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MM_CommsLostPolicy_CommsLostPolicyCommandReportType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MM_CommsLostPolicy_CommsLostPolicyCommandReportType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_MM_CommsLostPolicy_CommsLostPolicyCommandReportTypeSeq, UMAA_MM_CommsLostPolicy_CommsLostPolicyCommandReportType);

NDDSUSERDllExport
RTIBool UMAA_MM_CommsLostPolicy_CommsLostPolicyCommandReportType_initialize(
    UMAA_MM_CommsLostPolicy_CommsLostPolicyCommandReportType* self);

NDDSUSERDllExport
RTIBool UMAA_MM_CommsLostPolicy_CommsLostPolicyCommandReportType_initialize_ex(
    UMAA_MM_CommsLostPolicy_CommsLostPolicyCommandReportType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_MM_CommsLostPolicy_CommsLostPolicyCommandReportType_initialize_w_params(
    UMAA_MM_CommsLostPolicy_CommsLostPolicyCommandReportType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_MM_CommsLostPolicy_CommsLostPolicyCommandReportType_finalize_w_return(
    UMAA_MM_CommsLostPolicy_CommsLostPolicyCommandReportType* self);

NDDSUSERDllExport
void UMAA_MM_CommsLostPolicy_CommsLostPolicyCommandReportType_finalize(
    UMAA_MM_CommsLostPolicy_CommsLostPolicyCommandReportType* self);

NDDSUSERDllExport
void UMAA_MM_CommsLostPolicy_CommsLostPolicyCommandReportType_finalize_ex(
    UMAA_MM_CommsLostPolicy_CommsLostPolicyCommandReportType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_MM_CommsLostPolicy_CommsLostPolicyCommandReportType_finalize_w_params(
    UMAA_MM_CommsLostPolicy_CommsLostPolicyCommandReportType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_MM_CommsLostPolicy_CommsLostPolicyCommandReportType_finalize_optional_members(
    UMAA_MM_CommsLostPolicy_CommsLostPolicyCommandReportType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_MM_CommsLostPolicy_CommsLostPolicyCommandReportType_copy(
    UMAA_MM_CommsLostPolicy_CommsLostPolicyCommandReportType* dst,
    const UMAA_MM_CommsLostPolicy_CommsLostPolicyCommandReportType* src);

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
        struct type_code< UMAA_MM_CommsLostPolicy_CommsLostPolicyCommandReportType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* CommsLostPolicyCommandReportType */

