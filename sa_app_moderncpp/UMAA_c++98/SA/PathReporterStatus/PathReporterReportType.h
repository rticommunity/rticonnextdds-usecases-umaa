

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from PathReporterReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef PathReporterReportType_588380571_h
#define PathReporterReportType_588380571_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "UMAA/Common/Measurement/Measurements.h"
#include "UMAA/MM/BaseType/WaypointType.h"

static const DDS_Char * const UMAA_SA_PathReporterStatus_PathReporterReport_TOPIC= "UMAA::SA::PathReporterStatus::PathReporterReport";

extern "C" {

    extern const char *UMAA_SA_PathReporterStatus_PathReporterReportTypeTYPENAME;

}

struct UMAA_SA_PathReporterStatus_PathReporterReportTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_SA_PathReporterStatus_PathReporterReportTypeTypeSupport;
class UMAA_SA_PathReporterStatus_PathReporterReportTypeDataWriter;
class UMAA_SA_PathReporterStatus_PathReporterReportTypeDataReader;
#endif
class UMAA_SA_PathReporterStatus_PathReporterReportType 
{
  public:
    typedef struct UMAA_SA_PathReporterStatus_PathReporterReportTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_SA_PathReporterStatus_PathReporterReportTypeTypeSupport TypeSupport;
    typedef UMAA_SA_PathReporterStatus_PathReporterReportTypeDataWriter DataWriter;
    typedef UMAA_SA_PathReporterStatus_PathReporterReportTypeDataReader DataReader;
    #endif

    UMAA_MM_BaseType_WaypointTypeSeq  historicalGlobalPaths ;
    UMAA_MM_BaseType_WaypointTypeSeq  historicalLocalPaths ;
    UMAA_MM_BaseType_WaypointTypeSeq  plannedGlobalPaths ;
    UMAA_MM_BaseType_WaypointTypeSeq  plannedLocalPaths ;
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
NDDSUSERDllExport DDS_TypeCode * UMAA_SA_PathReporterStatus_PathReporterReportType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_SA_PathReporterStatus_PathReporterReportType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_SA_PathReporterStatus_PathReporterReportType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_SA_PathReporterStatus_PathReporterReportType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_SA_PathReporterStatus_PathReporterReportTypeSeq, UMAA_SA_PathReporterStatus_PathReporterReportType);

NDDSUSERDllExport
RTIBool UMAA_SA_PathReporterStatus_PathReporterReportType_initialize(
    UMAA_SA_PathReporterStatus_PathReporterReportType* self);

NDDSUSERDllExport
RTIBool UMAA_SA_PathReporterStatus_PathReporterReportType_initialize_ex(
    UMAA_SA_PathReporterStatus_PathReporterReportType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_SA_PathReporterStatus_PathReporterReportType_initialize_w_params(
    UMAA_SA_PathReporterStatus_PathReporterReportType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_SA_PathReporterStatus_PathReporterReportType_finalize_w_return(
    UMAA_SA_PathReporterStatus_PathReporterReportType* self);

NDDSUSERDllExport
void UMAA_SA_PathReporterStatus_PathReporterReportType_finalize(
    UMAA_SA_PathReporterStatus_PathReporterReportType* self);

NDDSUSERDllExport
void UMAA_SA_PathReporterStatus_PathReporterReportType_finalize_ex(
    UMAA_SA_PathReporterStatus_PathReporterReportType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_SA_PathReporterStatus_PathReporterReportType_finalize_w_params(
    UMAA_SA_PathReporterStatus_PathReporterReportType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_SA_PathReporterStatus_PathReporterReportType_finalize_optional_members(
    UMAA_SA_PathReporterStatus_PathReporterReportType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_SA_PathReporterStatus_PathReporterReportType_copy(
    UMAA_SA_PathReporterStatus_PathReporterReportType* dst,
    const UMAA_SA_PathReporterStatus_PathReporterReportType* src);

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
        struct type_code< UMAA_SA_PathReporterStatus_PathReporterReportType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* PathReporterReportType */

