

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from MissionSummaryReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef MissionSummaryReportType_1645860920_h
#define MissionSummaryReportType_1645860920_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "UMAA/Common/Measurement/Measurements.h"
#include "UMAA/MM/BaseType/MissionSummaryType.h"

static const DDS_Char * const UMAA_MM_MissionSummaryStatus_MissionSummaryReport_TOPIC= "UMAA::MM::MissionSummaryStatus::MissionSummaryReport";

extern "C" {

    extern const char *UMAA_MM_MissionSummaryStatus_MissionSummaryReportTypeTYPENAME;

}

struct UMAA_MM_MissionSummaryStatus_MissionSummaryReportTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_MM_MissionSummaryStatus_MissionSummaryReportTypeTypeSupport;
class UMAA_MM_MissionSummaryStatus_MissionSummaryReportTypeDataWriter;
class UMAA_MM_MissionSummaryStatus_MissionSummaryReportTypeDataReader;
#endif
class UMAA_MM_MissionSummaryStatus_MissionSummaryReportType 
{
  public:
    typedef struct UMAA_MM_MissionSummaryStatus_MissionSummaryReportTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_MM_MissionSummaryStatus_MissionSummaryReportTypeTypeSupport TypeSupport;
    typedef UMAA_MM_MissionSummaryStatus_MissionSummaryReportTypeDataWriter DataWriter;
    typedef UMAA_MM_MissionSummaryStatus_MissionSummaryReportTypeDataReader DataReader;
    #endif

    UMAA_MM_BaseType_MissionSummaryTypeSeq  missionSummaries ;
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
NDDSUSERDllExport DDS_TypeCode * UMAA_MM_MissionSummaryStatus_MissionSummaryReportType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_MM_MissionSummaryStatus_MissionSummaryReportType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MM_MissionSummaryStatus_MissionSummaryReportType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MM_MissionSummaryStatus_MissionSummaryReportType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_MM_MissionSummaryStatus_MissionSummaryReportTypeSeq, UMAA_MM_MissionSummaryStatus_MissionSummaryReportType);

NDDSUSERDllExport
RTIBool UMAA_MM_MissionSummaryStatus_MissionSummaryReportType_initialize(
    UMAA_MM_MissionSummaryStatus_MissionSummaryReportType* self);

NDDSUSERDllExport
RTIBool UMAA_MM_MissionSummaryStatus_MissionSummaryReportType_initialize_ex(
    UMAA_MM_MissionSummaryStatus_MissionSummaryReportType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_MM_MissionSummaryStatus_MissionSummaryReportType_initialize_w_params(
    UMAA_MM_MissionSummaryStatus_MissionSummaryReportType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_MM_MissionSummaryStatus_MissionSummaryReportType_finalize_w_return(
    UMAA_MM_MissionSummaryStatus_MissionSummaryReportType* self);

NDDSUSERDllExport
void UMAA_MM_MissionSummaryStatus_MissionSummaryReportType_finalize(
    UMAA_MM_MissionSummaryStatus_MissionSummaryReportType* self);

NDDSUSERDllExport
void UMAA_MM_MissionSummaryStatus_MissionSummaryReportType_finalize_ex(
    UMAA_MM_MissionSummaryStatus_MissionSummaryReportType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_MM_MissionSummaryStatus_MissionSummaryReportType_finalize_w_params(
    UMAA_MM_MissionSummaryStatus_MissionSummaryReportType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_MM_MissionSummaryStatus_MissionSummaryReportType_finalize_optional_members(
    UMAA_MM_MissionSummaryStatus_MissionSummaryReportType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_MM_MissionSummaryStatus_MissionSummaryReportType_copy(
    UMAA_MM_MissionSummaryStatus_MissionSummaryReportType* dst,
    const UMAA_MM_MissionSummaryStatus_MissionSummaryReportType* src);

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
        struct type_code< UMAA_MM_MissionSummaryStatus_MissionSummaryReportType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* MissionSummaryReportType */

