

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from HealthDetailsReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef HealthDetailsReportType_1126741314_h
#define HealthDetailsReportType_1126741314_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "UMAA/Common/Measurement/Measurements.h"
#include "UMAA/SO/HealthReporter/HealthDetailsStatusType.h"

static const DDS_Char * const UMAA_SO_HealthReporter_HealthDetailsReport_TOPIC= "UMAA::SO::HealthReporter::HealthDetailsReport";

extern "C" {

    extern const char *UMAA_SO_HealthReporter_HealthDetailsReportTypeTYPENAME;

}

struct UMAA_SO_HealthReporter_HealthDetailsReportTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_SO_HealthReporter_HealthDetailsReportTypeTypeSupport;
class UMAA_SO_HealthReporter_HealthDetailsReportTypeDataWriter;
class UMAA_SO_HealthReporter_HealthDetailsReportTypeDataReader;
#endif
class UMAA_SO_HealthReporter_HealthDetailsReportType 
{
  public:
    typedef struct UMAA_SO_HealthReporter_HealthDetailsReportTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_SO_HealthReporter_HealthDetailsReportTypeTypeSupport TypeSupport;
    typedef UMAA_SO_HealthReporter_HealthDetailsReportTypeDataWriter DataWriter;
    typedef UMAA_SO_HealthReporter_HealthDetailsReportTypeDataReader DataReader;
    #endif

    UMAA_SO_HealthReporter_HealthDetailsStatusTypeSeq  healthDetails ;
    UMAA_Common_Measurement_NumericGUID   source ;
    UMAA_Common_Measurement_DateTime   timeStamp ;
    UMAA_Common_Measurement_NumericGUID   resourceID ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_SO_HealthReporter_HealthDetailsReportType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_SO_HealthReporter_HealthDetailsReportType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_SO_HealthReporter_HealthDetailsReportType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_SO_HealthReporter_HealthDetailsReportType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_SO_HealthReporter_HealthDetailsReportTypeSeq, UMAA_SO_HealthReporter_HealthDetailsReportType);

NDDSUSERDllExport
RTIBool UMAA_SO_HealthReporter_HealthDetailsReportType_initialize(
    UMAA_SO_HealthReporter_HealthDetailsReportType* self);

NDDSUSERDllExport
RTIBool UMAA_SO_HealthReporter_HealthDetailsReportType_initialize_ex(
    UMAA_SO_HealthReporter_HealthDetailsReportType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_SO_HealthReporter_HealthDetailsReportType_initialize_w_params(
    UMAA_SO_HealthReporter_HealthDetailsReportType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_SO_HealthReporter_HealthDetailsReportType_finalize_w_return(
    UMAA_SO_HealthReporter_HealthDetailsReportType* self);

NDDSUSERDllExport
void UMAA_SO_HealthReporter_HealthDetailsReportType_finalize(
    UMAA_SO_HealthReporter_HealthDetailsReportType* self);

NDDSUSERDllExport
void UMAA_SO_HealthReporter_HealthDetailsReportType_finalize_ex(
    UMAA_SO_HealthReporter_HealthDetailsReportType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_SO_HealthReporter_HealthDetailsReportType_finalize_w_params(
    UMAA_SO_HealthReporter_HealthDetailsReportType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_SO_HealthReporter_HealthDetailsReportType_finalize_optional_members(
    UMAA_SO_HealthReporter_HealthDetailsReportType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_SO_HealthReporter_HealthDetailsReportType_copy(
    UMAA_SO_HealthReporter_HealthDetailsReportType* dst,
    const UMAA_SO_HealthReporter_HealthDetailsReportType* src);

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
        struct type_code< UMAA_SO_HealthReporter_HealthDetailsReportType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* HealthDetailsReportType */

