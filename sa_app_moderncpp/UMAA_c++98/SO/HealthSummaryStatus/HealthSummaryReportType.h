

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from HealthSummaryReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef HealthSummaryReportType_1784270557_h
#define HealthSummaryReportType_1784270557_h

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

static const DDS_Char * const UMAA_SO_HealthSummaryStatus_HealthSummaryReport_TOPIC= "UMAA::SO::HealthSummaryStatus::HealthSummaryReport";

extern "C" {

    extern const char *UMAA_SO_HealthSummaryStatus_HealthSummaryReportTypeTYPENAME;

}

struct UMAA_SO_HealthSummaryStatus_HealthSummaryReportTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_SO_HealthSummaryStatus_HealthSummaryReportTypeTypeSupport;
class UMAA_SO_HealthSummaryStatus_HealthSummaryReportTypeDataWriter;
class UMAA_SO_HealthSummaryStatus_HealthSummaryReportTypeDataReader;
#endif
class UMAA_SO_HealthSummaryStatus_HealthSummaryReportType 
{
  public:
    typedef struct UMAA_SO_HealthSummaryStatus_HealthSummaryReportTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_SO_HealthSummaryStatus_HealthSummaryReportTypeTypeSupport TypeSupport;
    typedef UMAA_SO_HealthSummaryStatus_HealthSummaryReportTypeDataWriter DataWriter;
    typedef UMAA_SO_HealthSummaryStatus_HealthSummaryReportTypeDataReader DataReader;
    #endif

    UMAA_Common_Measurement_NumericGUIDSeq  resourceIDs ;
    UMAA_Common_MaritimeEnumeration_ErrorConditionEnumType_ErrorConditionEnumTypeSeq  severities ;
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
NDDSUSERDllExport DDS_TypeCode * UMAA_SO_HealthSummaryStatus_HealthSummaryReportType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_SO_HealthSummaryStatus_HealthSummaryReportType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_SO_HealthSummaryStatus_HealthSummaryReportType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_SO_HealthSummaryStatus_HealthSummaryReportType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_SO_HealthSummaryStatus_HealthSummaryReportTypeSeq, UMAA_SO_HealthSummaryStatus_HealthSummaryReportType);

NDDSUSERDllExport
RTIBool UMAA_SO_HealthSummaryStatus_HealthSummaryReportType_initialize(
    UMAA_SO_HealthSummaryStatus_HealthSummaryReportType* self);

NDDSUSERDllExport
RTIBool UMAA_SO_HealthSummaryStatus_HealthSummaryReportType_initialize_ex(
    UMAA_SO_HealthSummaryStatus_HealthSummaryReportType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_SO_HealthSummaryStatus_HealthSummaryReportType_initialize_w_params(
    UMAA_SO_HealthSummaryStatus_HealthSummaryReportType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_SO_HealthSummaryStatus_HealthSummaryReportType_finalize_w_return(
    UMAA_SO_HealthSummaryStatus_HealthSummaryReportType* self);

NDDSUSERDllExport
void UMAA_SO_HealthSummaryStatus_HealthSummaryReportType_finalize(
    UMAA_SO_HealthSummaryStatus_HealthSummaryReportType* self);

NDDSUSERDllExport
void UMAA_SO_HealthSummaryStatus_HealthSummaryReportType_finalize_ex(
    UMAA_SO_HealthSummaryStatus_HealthSummaryReportType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_SO_HealthSummaryStatus_HealthSummaryReportType_finalize_w_params(
    UMAA_SO_HealthSummaryStatus_HealthSummaryReportType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_SO_HealthSummaryStatus_HealthSummaryReportType_finalize_optional_members(
    UMAA_SO_HealthSummaryStatus_HealthSummaryReportType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_SO_HealthSummaryStatus_HealthSummaryReportType_copy(
    UMAA_SO_HealthSummaryStatus_HealthSummaryReportType* dst,
    const UMAA_SO_HealthSummaryStatus_HealthSummaryReportType* src);

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
        struct type_code< UMAA_SO_HealthSummaryStatus_HealthSummaryReportType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* HealthSummaryReportType */

