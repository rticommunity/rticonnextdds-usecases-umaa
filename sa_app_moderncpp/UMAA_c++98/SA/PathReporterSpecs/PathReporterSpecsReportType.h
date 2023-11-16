

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from PathReporterSpecsReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef PathReporterSpecsReportType_238830197_h
#define PathReporterSpecsReportType_238830197_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "UMAA/Common/Measurement/Measurements.h"
#include "UMAA/SA/PathReporterSpecs/PathReporterType.h"

static const DDS_Char * const UMAA_SA_PathReporterSpecs_PathReporterSpecsReport_TOPIC= "UMAA::SA::PathReporterSpecs::PathReporterSpecsReport";

extern "C" {

    extern const char *UMAA_SA_PathReporterSpecs_PathReporterSpecsReportTypeTYPENAME;

}

struct UMAA_SA_PathReporterSpecs_PathReporterSpecsReportTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_SA_PathReporterSpecs_PathReporterSpecsReportTypeTypeSupport;
class UMAA_SA_PathReporterSpecs_PathReporterSpecsReportTypeDataWriter;
class UMAA_SA_PathReporterSpecs_PathReporterSpecsReportTypeDataReader;
#endif
class UMAA_SA_PathReporterSpecs_PathReporterSpecsReportType 
{
  public:
    typedef struct UMAA_SA_PathReporterSpecs_PathReporterSpecsReportTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_SA_PathReporterSpecs_PathReporterSpecsReportTypeTypeSupport TypeSupport;
    typedef UMAA_SA_PathReporterSpecs_PathReporterSpecsReportTypeDataWriter DataWriter;
    typedef UMAA_SA_PathReporterSpecs_PathReporterSpecsReportTypeDataReader DataReader;
    #endif

    UMAA_SA_PathReporterSpecs_PathReporterTypeSeq  pathReporters ;
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
NDDSUSERDllExport DDS_TypeCode * UMAA_SA_PathReporterSpecs_PathReporterSpecsReportType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_SA_PathReporterSpecs_PathReporterSpecsReportType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_SA_PathReporterSpecs_PathReporterSpecsReportType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_SA_PathReporterSpecs_PathReporterSpecsReportType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_SA_PathReporterSpecs_PathReporterSpecsReportTypeSeq, UMAA_SA_PathReporterSpecs_PathReporterSpecsReportType);

NDDSUSERDllExport
RTIBool UMAA_SA_PathReporterSpecs_PathReporterSpecsReportType_initialize(
    UMAA_SA_PathReporterSpecs_PathReporterSpecsReportType* self);

NDDSUSERDllExport
RTIBool UMAA_SA_PathReporterSpecs_PathReporterSpecsReportType_initialize_ex(
    UMAA_SA_PathReporterSpecs_PathReporterSpecsReportType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_SA_PathReporterSpecs_PathReporterSpecsReportType_initialize_w_params(
    UMAA_SA_PathReporterSpecs_PathReporterSpecsReportType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_SA_PathReporterSpecs_PathReporterSpecsReportType_finalize_w_return(
    UMAA_SA_PathReporterSpecs_PathReporterSpecsReportType* self);

NDDSUSERDllExport
void UMAA_SA_PathReporterSpecs_PathReporterSpecsReportType_finalize(
    UMAA_SA_PathReporterSpecs_PathReporterSpecsReportType* self);

NDDSUSERDllExport
void UMAA_SA_PathReporterSpecs_PathReporterSpecsReportType_finalize_ex(
    UMAA_SA_PathReporterSpecs_PathReporterSpecsReportType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_SA_PathReporterSpecs_PathReporterSpecsReportType_finalize_w_params(
    UMAA_SA_PathReporterSpecs_PathReporterSpecsReportType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_SA_PathReporterSpecs_PathReporterSpecsReportType_finalize_optional_members(
    UMAA_SA_PathReporterSpecs_PathReporterSpecsReportType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_SA_PathReporterSpecs_PathReporterSpecsReportType_copy(
    UMAA_SA_PathReporterSpecs_PathReporterSpecsReportType* dst,
    const UMAA_SA_PathReporterSpecs_PathReporterSpecsReportType* src);

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
        struct type_code< UMAA_SA_PathReporterSpecs_PathReporterSpecsReportType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* PathReporterSpecsReportType */

