

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from PlatformModeReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef PlatformModeReportType_393528404_h
#define PlatformModeReportType_393528404_h

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

static const DDS_Char * const UMAA_SO_PlatformModeStatus_PlatformModeReport_TOPIC= "UMAA::SO::PlatformModeStatus::PlatformModeReport";

extern "C" {

    extern const char *UMAA_SO_PlatformModeStatus_PlatformModeReportTypeTYPENAME;

}

struct UMAA_SO_PlatformModeStatus_PlatformModeReportTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_SO_PlatformModeStatus_PlatformModeReportTypeTypeSupport;
class UMAA_SO_PlatformModeStatus_PlatformModeReportTypeDataWriter;
class UMAA_SO_PlatformModeStatus_PlatformModeReportTypeDataReader;
#endif
class UMAA_SO_PlatformModeStatus_PlatformModeReportType 
{
  public:
    typedef struct UMAA_SO_PlatformModeStatus_PlatformModeReportTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_SO_PlatformModeStatus_PlatformModeReportTypeTypeSupport TypeSupport;
    typedef UMAA_SO_PlatformModeStatus_PlatformModeReportTypeDataWriter DataWriter;
    typedef UMAA_SO_PlatformModeStatus_PlatformModeReportTypeDataReader DataReader;
    #endif

    UMAA_Common_MaritimeEnumeration_PlatformModeEnumType_PlatformModeEnumType   mode ;
    UMAA_Common_MaritimeEnumeration_PlatformModeTransitionEnumType_PlatformModeTransitionEnumType   status ;
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
NDDSUSERDllExport DDS_TypeCode * UMAA_SO_PlatformModeStatus_PlatformModeReportType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_SO_PlatformModeStatus_PlatformModeReportType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_SO_PlatformModeStatus_PlatformModeReportType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_SO_PlatformModeStatus_PlatformModeReportType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_SO_PlatformModeStatus_PlatformModeReportTypeSeq, UMAA_SO_PlatformModeStatus_PlatformModeReportType);

NDDSUSERDllExport
RTIBool UMAA_SO_PlatformModeStatus_PlatformModeReportType_initialize(
    UMAA_SO_PlatformModeStatus_PlatformModeReportType* self);

NDDSUSERDllExport
RTIBool UMAA_SO_PlatformModeStatus_PlatformModeReportType_initialize_ex(
    UMAA_SO_PlatformModeStatus_PlatformModeReportType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_SO_PlatformModeStatus_PlatformModeReportType_initialize_w_params(
    UMAA_SO_PlatformModeStatus_PlatformModeReportType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_SO_PlatformModeStatus_PlatformModeReportType_finalize_w_return(
    UMAA_SO_PlatformModeStatus_PlatformModeReportType* self);

NDDSUSERDllExport
void UMAA_SO_PlatformModeStatus_PlatformModeReportType_finalize(
    UMAA_SO_PlatformModeStatus_PlatformModeReportType* self);

NDDSUSERDllExport
void UMAA_SO_PlatformModeStatus_PlatformModeReportType_finalize_ex(
    UMAA_SO_PlatformModeStatus_PlatformModeReportType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_SO_PlatformModeStatus_PlatformModeReportType_finalize_w_params(
    UMAA_SO_PlatformModeStatus_PlatformModeReportType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_SO_PlatformModeStatus_PlatformModeReportType_finalize_optional_members(
    UMAA_SO_PlatformModeStatus_PlatformModeReportType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_SO_PlatformModeStatus_PlatformModeReportType_copy(
    UMAA_SO_PlatformModeStatus_PlatformModeReportType* dst,
    const UMAA_SO_PlatformModeStatus_PlatformModeReportType* src);

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
        struct type_code< UMAA_SO_PlatformModeStatus_PlatformModeReportType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* PlatformModeReportType */

