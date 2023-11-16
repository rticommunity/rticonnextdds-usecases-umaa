

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from FinSpecsReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef FinSpecsReportType_944472035_h
#define FinSpecsReportType_944472035_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "UMAA/Common/Measurement/Measurements.h"
#include "UMAA/Common/PrimitiveConstrained/ConstrainedTypes.h"

static const DDS_Char * const UMAA_EO_FinSpecs_FinSpecsReport_TOPIC= "UMAA::EO::FinSpecs::FinSpecsReport";

extern "C" {

    extern const char *UMAA_EO_FinSpecs_FinSpecsReportTypeTYPENAME;

}

struct UMAA_EO_FinSpecs_FinSpecsReportTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_EO_FinSpecs_FinSpecsReportTypeTypeSupport;
class UMAA_EO_FinSpecs_FinSpecsReportTypeDataWriter;
class UMAA_EO_FinSpecs_FinSpecsReportTypeDataReader;
#endif
class UMAA_EO_FinSpecs_FinSpecsReportType 
{
  public:
    typedef struct UMAA_EO_FinSpecs_FinSpecsReportTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_EO_FinSpecs_FinSpecsReportTypeTypeSupport TypeSupport;
    typedef UMAA_EO_FinSpecs_FinSpecsReportTypeDataWriter DataWriter;
    typedef UMAA_EO_FinSpecs_FinSpecsReportTypeDataReader DataReader;
    #endif

    DDS_Double   maxDeflectionRate ;
    DDS_Double   maxNegativeDeflection ;
    DDS_Double   maxPositiveDeflection ;
    DDS_Double   minDeflectionRate ;
    DDS_Char *   name ;
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
NDDSUSERDllExport DDS_TypeCode * UMAA_EO_FinSpecs_FinSpecsReportType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_EO_FinSpecs_FinSpecsReportType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_EO_FinSpecs_FinSpecsReportType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_EO_FinSpecs_FinSpecsReportType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_EO_FinSpecs_FinSpecsReportTypeSeq, UMAA_EO_FinSpecs_FinSpecsReportType);

NDDSUSERDllExport
RTIBool UMAA_EO_FinSpecs_FinSpecsReportType_initialize(
    UMAA_EO_FinSpecs_FinSpecsReportType* self);

NDDSUSERDllExport
RTIBool UMAA_EO_FinSpecs_FinSpecsReportType_initialize_ex(
    UMAA_EO_FinSpecs_FinSpecsReportType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_EO_FinSpecs_FinSpecsReportType_initialize_w_params(
    UMAA_EO_FinSpecs_FinSpecsReportType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_EO_FinSpecs_FinSpecsReportType_finalize_w_return(
    UMAA_EO_FinSpecs_FinSpecsReportType* self);

NDDSUSERDllExport
void UMAA_EO_FinSpecs_FinSpecsReportType_finalize(
    UMAA_EO_FinSpecs_FinSpecsReportType* self);

NDDSUSERDllExport
void UMAA_EO_FinSpecs_FinSpecsReportType_finalize_ex(
    UMAA_EO_FinSpecs_FinSpecsReportType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_EO_FinSpecs_FinSpecsReportType_finalize_w_params(
    UMAA_EO_FinSpecs_FinSpecsReportType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_EO_FinSpecs_FinSpecsReportType_finalize_optional_members(
    UMAA_EO_FinSpecs_FinSpecsReportType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_EO_FinSpecs_FinSpecsReportType_copy(
    UMAA_EO_FinSpecs_FinSpecsReportType* dst,
    const UMAA_EO_FinSpecs_FinSpecsReportType* src);

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
        struct type_code< UMAA_EO_FinSpecs_FinSpecsReportType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* FinSpecsReportType */

