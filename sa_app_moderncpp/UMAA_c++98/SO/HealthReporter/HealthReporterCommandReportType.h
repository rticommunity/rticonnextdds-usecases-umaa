

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from HealthReporterCommandReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef HealthReporterCommandReportType_263851594_h
#define HealthReporterCommandReportType_263851594_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "UMAA/Common/Measurement/BuiltInTestStatusType_All.h"
#include "UMAA/Common/Measurement/Measurements.h"

static const DDS_Char * const UMAA_SO_HealthReporter_HealthReporterCommandReport_TOPIC= "UMAA::SO::HealthReporter::HealthReporterCommandReport";

extern "C" {

    extern const char *UMAA_SO_HealthReporter_HealthReporterCommandReportTypeTYPENAME;

}

struct UMAA_SO_HealthReporter_HealthReporterCommandReportTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_SO_HealthReporter_HealthReporterCommandReportTypeTypeSupport;
class UMAA_SO_HealthReporter_HealthReporterCommandReportTypeDataWriter;
class UMAA_SO_HealthReporter_HealthReporterCommandReportTypeDataReader;
#endif
class UMAA_SO_HealthReporter_HealthReporterCommandReportType 
{
  public:
    typedef struct UMAA_SO_HealthReporter_HealthReporterCommandReportTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_SO_HealthReporter_HealthReporterCommandReportTypeTypeSupport TypeSupport;
    typedef UMAA_SO_HealthReporter_HealthReporterCommandReportTypeDataWriter DataWriter;
    typedef UMAA_SO_HealthReporter_HealthReporterCommandReportTypeDataReader DataReader;
    #endif

    UMAA_Common_Measurement_BuiltInTestStatusType_All   builtInTest ;
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
NDDSUSERDllExport DDS_TypeCode * UMAA_SO_HealthReporter_HealthReporterCommandReportType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_SO_HealthReporter_HealthReporterCommandReportType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_SO_HealthReporter_HealthReporterCommandReportType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_SO_HealthReporter_HealthReporterCommandReportType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_SO_HealthReporter_HealthReporterCommandReportTypeSeq, UMAA_SO_HealthReporter_HealthReporterCommandReportType);

NDDSUSERDllExport
RTIBool UMAA_SO_HealthReporter_HealthReporterCommandReportType_initialize(
    UMAA_SO_HealthReporter_HealthReporterCommandReportType* self);

NDDSUSERDllExport
RTIBool UMAA_SO_HealthReporter_HealthReporterCommandReportType_initialize_ex(
    UMAA_SO_HealthReporter_HealthReporterCommandReportType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_SO_HealthReporter_HealthReporterCommandReportType_initialize_w_params(
    UMAA_SO_HealthReporter_HealthReporterCommandReportType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_SO_HealthReporter_HealthReporterCommandReportType_finalize_w_return(
    UMAA_SO_HealthReporter_HealthReporterCommandReportType* self);

NDDSUSERDllExport
void UMAA_SO_HealthReporter_HealthReporterCommandReportType_finalize(
    UMAA_SO_HealthReporter_HealthReporterCommandReportType* self);

NDDSUSERDllExport
void UMAA_SO_HealthReporter_HealthReporterCommandReportType_finalize_ex(
    UMAA_SO_HealthReporter_HealthReporterCommandReportType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_SO_HealthReporter_HealthReporterCommandReportType_finalize_w_params(
    UMAA_SO_HealthReporter_HealthReporterCommandReportType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_SO_HealthReporter_HealthReporterCommandReportType_finalize_optional_members(
    UMAA_SO_HealthReporter_HealthReporterCommandReportType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_SO_HealthReporter_HealthReporterCommandReportType_copy(
    UMAA_SO_HealthReporter_HealthReporterCommandReportType* dst,
    const UMAA_SO_HealthReporter_HealthReporterCommandReportType* src);

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
        struct type_code< UMAA_SO_HealthReporter_HealthReporterCommandReportType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* HealthReporterCommandReportType */

