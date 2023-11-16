

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from CommsLostPolicyReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef CommsLostPolicyReportType_1715135016_h
#define CommsLostPolicyReportType_1715135016_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "UMAA/Common/MaritimeEnumeration/EnumerationSets.h"
#include "UMAA/Common/Measurement/Measurements.h"

static const DDS_Char * const UMAA_MM_CommsLostPolicy_CommsLostPolicyReport_TOPIC= "UMAA::MM::CommsLostPolicy::CommsLostPolicyReport";

extern "C" {

    extern const char *UMAA_MM_CommsLostPolicy_CommsLostPolicyReportTypeTYPENAME;

}

struct UMAA_MM_CommsLostPolicy_CommsLostPolicyReportTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_MM_CommsLostPolicy_CommsLostPolicyReportTypeTypeSupport;
class UMAA_MM_CommsLostPolicy_CommsLostPolicyReportTypeDataWriter;
class UMAA_MM_CommsLostPolicy_CommsLostPolicyReportTypeDataReader;
#endif
class UMAA_MM_CommsLostPolicy_CommsLostPolicyReportType 
{
  public:
    typedef struct UMAA_MM_CommsLostPolicy_CommsLostPolicyReportTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_MM_CommsLostPolicy_CommsLostPolicyReportTypeTypeSupport TypeSupport;
    typedef UMAA_MM_CommsLostPolicy_CommsLostPolicyReportTypeDataWriter DataWriter;
    typedef UMAA_MM_CommsLostPolicy_CommsLostPolicyReportTypeDataReader DataReader;
    #endif

    UMAA_Common_MaritimeEnumeration_LostCommsStatusEnumType_LostCommsStatusEnumType   status ;
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
NDDSUSERDllExport DDS_TypeCode * UMAA_MM_CommsLostPolicy_CommsLostPolicyReportType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_MM_CommsLostPolicy_CommsLostPolicyReportType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MM_CommsLostPolicy_CommsLostPolicyReportType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MM_CommsLostPolicy_CommsLostPolicyReportType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_MM_CommsLostPolicy_CommsLostPolicyReportTypeSeq, UMAA_MM_CommsLostPolicy_CommsLostPolicyReportType);

NDDSUSERDllExport
RTIBool UMAA_MM_CommsLostPolicy_CommsLostPolicyReportType_initialize(
    UMAA_MM_CommsLostPolicy_CommsLostPolicyReportType* self);

NDDSUSERDllExport
RTIBool UMAA_MM_CommsLostPolicy_CommsLostPolicyReportType_initialize_ex(
    UMAA_MM_CommsLostPolicy_CommsLostPolicyReportType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_MM_CommsLostPolicy_CommsLostPolicyReportType_initialize_w_params(
    UMAA_MM_CommsLostPolicy_CommsLostPolicyReportType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_MM_CommsLostPolicy_CommsLostPolicyReportType_finalize_w_return(
    UMAA_MM_CommsLostPolicy_CommsLostPolicyReportType* self);

NDDSUSERDllExport
void UMAA_MM_CommsLostPolicy_CommsLostPolicyReportType_finalize(
    UMAA_MM_CommsLostPolicy_CommsLostPolicyReportType* self);

NDDSUSERDllExport
void UMAA_MM_CommsLostPolicy_CommsLostPolicyReportType_finalize_ex(
    UMAA_MM_CommsLostPolicy_CommsLostPolicyReportType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_MM_CommsLostPolicy_CommsLostPolicyReportType_finalize_w_params(
    UMAA_MM_CommsLostPolicy_CommsLostPolicyReportType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_MM_CommsLostPolicy_CommsLostPolicyReportType_finalize_optional_members(
    UMAA_MM_CommsLostPolicy_CommsLostPolicyReportType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_MM_CommsLostPolicy_CommsLostPolicyReportType_copy(
    UMAA_MM_CommsLostPolicy_CommsLostPolicyReportType* dst,
    const UMAA_MM_CommsLostPolicy_CommsLostPolicyReportType* src);

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
        struct type_code< UMAA_MM_CommsLostPolicy_CommsLostPolicyReportType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* CommsLostPolicyReportType */

