

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from CommsLostPolicySpecsReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef CommsLostPolicySpecsReportType_1168129046_h
#define CommsLostPolicySpecsReportType_1168129046_h

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

static const DDS_Char * const UMAA_MM_CommsLostPolicy_CommsLostPolicySpecsReport_TOPIC= "UMAA::MM::CommsLostPolicy::CommsLostPolicySpecsReport";

extern "C" {

    extern const char *UMAA_MM_CommsLostPolicy_CommsLostPolicySpecsReportTypeTYPENAME;

}

struct UMAA_MM_CommsLostPolicy_CommsLostPolicySpecsReportTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_MM_CommsLostPolicy_CommsLostPolicySpecsReportTypeTypeSupport;
class UMAA_MM_CommsLostPolicy_CommsLostPolicySpecsReportTypeDataWriter;
class UMAA_MM_CommsLostPolicy_CommsLostPolicySpecsReportTypeDataReader;
#endif
class UMAA_MM_CommsLostPolicy_CommsLostPolicySpecsReportType 
{
  public:
    typedef struct UMAA_MM_CommsLostPolicy_CommsLostPolicySpecsReportTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_MM_CommsLostPolicy_CommsLostPolicySpecsReportTypeTypeSupport TypeSupport;
    typedef UMAA_MM_CommsLostPolicy_CommsLostPolicySpecsReportTypeDataWriter DataWriter;
    typedef UMAA_MM_CommsLostPolicy_CommsLostPolicySpecsReportTypeDataReader DataReader;
    #endif

    DDS_Boolean   continueMission ;
    DDS_Boolean   moveToPose ;
    DDS_Boolean   retroTraverse ;
    DDS_Boolean   stop ;
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
NDDSUSERDllExport DDS_TypeCode * UMAA_MM_CommsLostPolicy_CommsLostPolicySpecsReportType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_MM_CommsLostPolicy_CommsLostPolicySpecsReportType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MM_CommsLostPolicy_CommsLostPolicySpecsReportType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MM_CommsLostPolicy_CommsLostPolicySpecsReportType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_MM_CommsLostPolicy_CommsLostPolicySpecsReportTypeSeq, UMAA_MM_CommsLostPolicy_CommsLostPolicySpecsReportType);

NDDSUSERDllExport
RTIBool UMAA_MM_CommsLostPolicy_CommsLostPolicySpecsReportType_initialize(
    UMAA_MM_CommsLostPolicy_CommsLostPolicySpecsReportType* self);

NDDSUSERDllExport
RTIBool UMAA_MM_CommsLostPolicy_CommsLostPolicySpecsReportType_initialize_ex(
    UMAA_MM_CommsLostPolicy_CommsLostPolicySpecsReportType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_MM_CommsLostPolicy_CommsLostPolicySpecsReportType_initialize_w_params(
    UMAA_MM_CommsLostPolicy_CommsLostPolicySpecsReportType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_MM_CommsLostPolicy_CommsLostPolicySpecsReportType_finalize_w_return(
    UMAA_MM_CommsLostPolicy_CommsLostPolicySpecsReportType* self);

NDDSUSERDllExport
void UMAA_MM_CommsLostPolicy_CommsLostPolicySpecsReportType_finalize(
    UMAA_MM_CommsLostPolicy_CommsLostPolicySpecsReportType* self);

NDDSUSERDllExport
void UMAA_MM_CommsLostPolicy_CommsLostPolicySpecsReportType_finalize_ex(
    UMAA_MM_CommsLostPolicy_CommsLostPolicySpecsReportType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_MM_CommsLostPolicy_CommsLostPolicySpecsReportType_finalize_w_params(
    UMAA_MM_CommsLostPolicy_CommsLostPolicySpecsReportType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_MM_CommsLostPolicy_CommsLostPolicySpecsReportType_finalize_optional_members(
    UMAA_MM_CommsLostPolicy_CommsLostPolicySpecsReportType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_MM_CommsLostPolicy_CommsLostPolicySpecsReportType_copy(
    UMAA_MM_CommsLostPolicy_CommsLostPolicySpecsReportType* dst,
    const UMAA_MM_CommsLostPolicy_CommsLostPolicySpecsReportType* src);

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
        struct type_code< UMAA_MM_CommsLostPolicy_CommsLostPolicySpecsReportType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* CommsLostPolicySpecsReportType */

