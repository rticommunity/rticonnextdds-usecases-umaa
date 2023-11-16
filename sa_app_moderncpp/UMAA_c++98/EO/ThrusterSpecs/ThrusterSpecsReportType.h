

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ThrusterSpecsReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef ThrusterSpecsReportType_1296256014_h
#define ThrusterSpecsReportType_1296256014_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "UMAA/Common/Measurement/Measurements.h"
#include "UMAA/EO/ThrusterSpecs/ThrusterSpecsType.h"

static const DDS_Char * const UMAA_EO_ThrusterSpecs_ThrusterSpecsReport_TOPIC= "UMAA::EO::ThrusterSpecs::ThrusterSpecsReport";

extern "C" {

    extern const char *UMAA_EO_ThrusterSpecs_ThrusterSpecsReportTypeTYPENAME;

}

struct UMAA_EO_ThrusterSpecs_ThrusterSpecsReportTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_EO_ThrusterSpecs_ThrusterSpecsReportTypeTypeSupport;
class UMAA_EO_ThrusterSpecs_ThrusterSpecsReportTypeDataWriter;
class UMAA_EO_ThrusterSpecs_ThrusterSpecsReportTypeDataReader;
#endif
class UMAA_EO_ThrusterSpecs_ThrusterSpecsReportType 
{
  public:
    typedef struct UMAA_EO_ThrusterSpecs_ThrusterSpecsReportTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_EO_ThrusterSpecs_ThrusterSpecsReportTypeTypeSupport TypeSupport;
    typedef UMAA_EO_ThrusterSpecs_ThrusterSpecsReportTypeDataWriter DataWriter;
    typedef UMAA_EO_ThrusterSpecs_ThrusterSpecsReportTypeDataReader DataReader;
    #endif

    UMAA_EO_ThrusterSpecs_ThrusterSpecsType   thruster ;
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
NDDSUSERDllExport DDS_TypeCode * UMAA_EO_ThrusterSpecs_ThrusterSpecsReportType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_EO_ThrusterSpecs_ThrusterSpecsReportType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_EO_ThrusterSpecs_ThrusterSpecsReportType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_EO_ThrusterSpecs_ThrusterSpecsReportType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_EO_ThrusterSpecs_ThrusterSpecsReportTypeSeq, UMAA_EO_ThrusterSpecs_ThrusterSpecsReportType);

NDDSUSERDllExport
RTIBool UMAA_EO_ThrusterSpecs_ThrusterSpecsReportType_initialize(
    UMAA_EO_ThrusterSpecs_ThrusterSpecsReportType* self);

NDDSUSERDllExport
RTIBool UMAA_EO_ThrusterSpecs_ThrusterSpecsReportType_initialize_ex(
    UMAA_EO_ThrusterSpecs_ThrusterSpecsReportType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_EO_ThrusterSpecs_ThrusterSpecsReportType_initialize_w_params(
    UMAA_EO_ThrusterSpecs_ThrusterSpecsReportType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_EO_ThrusterSpecs_ThrusterSpecsReportType_finalize_w_return(
    UMAA_EO_ThrusterSpecs_ThrusterSpecsReportType* self);

NDDSUSERDllExport
void UMAA_EO_ThrusterSpecs_ThrusterSpecsReportType_finalize(
    UMAA_EO_ThrusterSpecs_ThrusterSpecsReportType* self);

NDDSUSERDllExport
void UMAA_EO_ThrusterSpecs_ThrusterSpecsReportType_finalize_ex(
    UMAA_EO_ThrusterSpecs_ThrusterSpecsReportType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_EO_ThrusterSpecs_ThrusterSpecsReportType_finalize_w_params(
    UMAA_EO_ThrusterSpecs_ThrusterSpecsReportType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_EO_ThrusterSpecs_ThrusterSpecsReportType_finalize_optional_members(
    UMAA_EO_ThrusterSpecs_ThrusterSpecsReportType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_EO_ThrusterSpecs_ThrusterSpecsReportType_copy(
    UMAA_EO_ThrusterSpecs_ThrusterSpecsReportType* dst,
    const UMAA_EO_ThrusterSpecs_ThrusterSpecsReportType* src);

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
        struct type_code< UMAA_EO_ThrusterSpecs_ThrusterSpecsReportType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* ThrusterSpecsReportType */

