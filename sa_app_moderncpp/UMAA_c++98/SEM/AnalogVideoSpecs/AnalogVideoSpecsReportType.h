

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from AnalogVideoSpecsReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef AnalogVideoSpecsReportType_1380392845_h
#define AnalogVideoSpecsReportType_1380392845_h

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

static const DDS_Char * const UMAA_SEM_AnalogVideoSpecs_AnalogVideoSpecsReport_TOPIC= "UMAA::SEM::AnalogVideoSpecs::AnalogVideoSpecsReport";

extern "C" {

    extern const char *UMAA_SEM_AnalogVideoSpecs_AnalogVideoSpecsReportTypeTYPENAME;

}

struct UMAA_SEM_AnalogVideoSpecs_AnalogVideoSpecsReportTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_SEM_AnalogVideoSpecs_AnalogVideoSpecsReportTypeTypeSupport;
class UMAA_SEM_AnalogVideoSpecs_AnalogVideoSpecsReportTypeDataWriter;
class UMAA_SEM_AnalogVideoSpecs_AnalogVideoSpecsReportTypeDataReader;
#endif
class UMAA_SEM_AnalogVideoSpecs_AnalogVideoSpecsReportType 
{
  public:
    typedef struct UMAA_SEM_AnalogVideoSpecs_AnalogVideoSpecsReportTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_SEM_AnalogVideoSpecs_AnalogVideoSpecsReportTypeTypeSupport TypeSupport;
    typedef UMAA_SEM_AnalogVideoSpecs_AnalogVideoSpecsReportTypeDataWriter DataWriter;
    typedef UMAA_SEM_AnalogVideoSpecs_AnalogVideoSpecsReportTypeDataReader DataReader;
    #endif

    UMAA_Common_MaritimeEnumeration_VideoFormatEnumType_VideoFormatEnumType   videoFormat ;
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
NDDSUSERDllExport DDS_TypeCode * UMAA_SEM_AnalogVideoSpecs_AnalogVideoSpecsReportType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_SEM_AnalogVideoSpecs_AnalogVideoSpecsReportType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_SEM_AnalogVideoSpecs_AnalogVideoSpecsReportType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_SEM_AnalogVideoSpecs_AnalogVideoSpecsReportType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_SEM_AnalogVideoSpecs_AnalogVideoSpecsReportTypeSeq, UMAA_SEM_AnalogVideoSpecs_AnalogVideoSpecsReportType);

NDDSUSERDllExport
RTIBool UMAA_SEM_AnalogVideoSpecs_AnalogVideoSpecsReportType_initialize(
    UMAA_SEM_AnalogVideoSpecs_AnalogVideoSpecsReportType* self);

NDDSUSERDllExport
RTIBool UMAA_SEM_AnalogVideoSpecs_AnalogVideoSpecsReportType_initialize_ex(
    UMAA_SEM_AnalogVideoSpecs_AnalogVideoSpecsReportType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_SEM_AnalogVideoSpecs_AnalogVideoSpecsReportType_initialize_w_params(
    UMAA_SEM_AnalogVideoSpecs_AnalogVideoSpecsReportType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_SEM_AnalogVideoSpecs_AnalogVideoSpecsReportType_finalize_w_return(
    UMAA_SEM_AnalogVideoSpecs_AnalogVideoSpecsReportType* self);

NDDSUSERDllExport
void UMAA_SEM_AnalogVideoSpecs_AnalogVideoSpecsReportType_finalize(
    UMAA_SEM_AnalogVideoSpecs_AnalogVideoSpecsReportType* self);

NDDSUSERDllExport
void UMAA_SEM_AnalogVideoSpecs_AnalogVideoSpecsReportType_finalize_ex(
    UMAA_SEM_AnalogVideoSpecs_AnalogVideoSpecsReportType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_SEM_AnalogVideoSpecs_AnalogVideoSpecsReportType_finalize_w_params(
    UMAA_SEM_AnalogVideoSpecs_AnalogVideoSpecsReportType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_SEM_AnalogVideoSpecs_AnalogVideoSpecsReportType_finalize_optional_members(
    UMAA_SEM_AnalogVideoSpecs_AnalogVideoSpecsReportType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_SEM_AnalogVideoSpecs_AnalogVideoSpecsReportType_copy(
    UMAA_SEM_AnalogVideoSpecs_AnalogVideoSpecsReportType* dst,
    const UMAA_SEM_AnalogVideoSpecs_AnalogVideoSpecsReportType* src);

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
        struct type_code< UMAA_SEM_AnalogVideoSpecs_AnalogVideoSpecsReportType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* AnalogVideoSpecsReportType */

