

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from PlatformModeSpecsReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef PlatformModeSpecsReportType_1515919816_h
#define PlatformModeSpecsReportType_1515919816_h

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

static const DDS_Char * const UMAA_SO_PlatformModeSpecs_PlatformModeSpecsReport_TOPIC= "UMAA::SO::PlatformModeSpecs::PlatformModeSpecsReport";

extern "C" {

    extern const char *UMAA_SO_PlatformModeSpecs_PlatformModeSpecsReportTypeTYPENAME;

}

struct UMAA_SO_PlatformModeSpecs_PlatformModeSpecsReportTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_SO_PlatformModeSpecs_PlatformModeSpecsReportTypeTypeSupport;
class UMAA_SO_PlatformModeSpecs_PlatformModeSpecsReportTypeDataWriter;
class UMAA_SO_PlatformModeSpecs_PlatformModeSpecsReportTypeDataReader;
#endif
class UMAA_SO_PlatformModeSpecs_PlatformModeSpecsReportType 
{
  public:
    typedef struct UMAA_SO_PlatformModeSpecs_PlatformModeSpecsReportTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_SO_PlatformModeSpecs_PlatformModeSpecsReportTypeTypeSupport TypeSupport;
    typedef UMAA_SO_PlatformModeSpecs_PlatformModeSpecsReportTypeDataWriter DataWriter;
    typedef UMAA_SO_PlatformModeSpecs_PlatformModeSpecsReportTypeDataReader DataReader;
    #endif

    DDS_Boolean   supportedMaintenance ;
    DDS_Boolean   supportedStandardOperating ;
    DDS_Boolean   supportedTraining ;
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
NDDSUSERDllExport DDS_TypeCode * UMAA_SO_PlatformModeSpecs_PlatformModeSpecsReportType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_SO_PlatformModeSpecs_PlatformModeSpecsReportType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_SO_PlatformModeSpecs_PlatformModeSpecsReportType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_SO_PlatformModeSpecs_PlatformModeSpecsReportType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_SO_PlatformModeSpecs_PlatformModeSpecsReportTypeSeq, UMAA_SO_PlatformModeSpecs_PlatformModeSpecsReportType);

NDDSUSERDllExport
RTIBool UMAA_SO_PlatformModeSpecs_PlatformModeSpecsReportType_initialize(
    UMAA_SO_PlatformModeSpecs_PlatformModeSpecsReportType* self);

NDDSUSERDllExport
RTIBool UMAA_SO_PlatformModeSpecs_PlatformModeSpecsReportType_initialize_ex(
    UMAA_SO_PlatformModeSpecs_PlatformModeSpecsReportType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_SO_PlatformModeSpecs_PlatformModeSpecsReportType_initialize_w_params(
    UMAA_SO_PlatformModeSpecs_PlatformModeSpecsReportType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_SO_PlatformModeSpecs_PlatformModeSpecsReportType_finalize_w_return(
    UMAA_SO_PlatformModeSpecs_PlatformModeSpecsReportType* self);

NDDSUSERDllExport
void UMAA_SO_PlatformModeSpecs_PlatformModeSpecsReportType_finalize(
    UMAA_SO_PlatformModeSpecs_PlatformModeSpecsReportType* self);

NDDSUSERDllExport
void UMAA_SO_PlatformModeSpecs_PlatformModeSpecsReportType_finalize_ex(
    UMAA_SO_PlatformModeSpecs_PlatformModeSpecsReportType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_SO_PlatformModeSpecs_PlatformModeSpecsReportType_finalize_w_params(
    UMAA_SO_PlatformModeSpecs_PlatformModeSpecsReportType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_SO_PlatformModeSpecs_PlatformModeSpecsReportType_finalize_optional_members(
    UMAA_SO_PlatformModeSpecs_PlatformModeSpecsReportType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_SO_PlatformModeSpecs_PlatformModeSpecsReportType_copy(
    UMAA_SO_PlatformModeSpecs_PlatformModeSpecsReportType* dst,
    const UMAA_SO_PlatformModeSpecs_PlatformModeSpecsReportType* src);

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
        struct type_code< UMAA_SO_PlatformModeSpecs_PlatformModeSpecsReportType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* PlatformModeSpecsReportType */

