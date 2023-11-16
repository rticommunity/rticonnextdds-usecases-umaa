

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from FuelTankSpecsReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef FuelTankSpecsReportType_731841721_h
#define FuelTankSpecsReportType_731841721_h

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

static const DDS_Char * const UMAA_EO_FuelTankSpecs_FuelTankSpecsReport_TOPIC= "UMAA::EO::FuelTankSpecs::FuelTankSpecsReport";

extern "C" {

    extern const char *UMAA_EO_FuelTankSpecs_FuelTankSpecsReportTypeTYPENAME;

}

struct UMAA_EO_FuelTankSpecs_FuelTankSpecsReportTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_EO_FuelTankSpecs_FuelTankSpecsReportTypeTypeSupport;
class UMAA_EO_FuelTankSpecs_FuelTankSpecsReportTypeDataWriter;
class UMAA_EO_FuelTankSpecs_FuelTankSpecsReportTypeDataReader;
#endif
class UMAA_EO_FuelTankSpecs_FuelTankSpecsReportType 
{
  public:
    typedef struct UMAA_EO_FuelTankSpecs_FuelTankSpecsReportTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_EO_FuelTankSpecs_FuelTankSpecsReportTypeTypeSupport TypeSupport;
    typedef UMAA_EO_FuelTankSpecs_FuelTankSpecsReportTypeDataWriter DataWriter;
    typedef UMAA_EO_FuelTankSpecs_FuelTankSpecsReportTypeDataReader DataReader;
    #endif

    DDS_Double   capacity ;
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
NDDSUSERDllExport DDS_TypeCode * UMAA_EO_FuelTankSpecs_FuelTankSpecsReportType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_EO_FuelTankSpecs_FuelTankSpecsReportType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_EO_FuelTankSpecs_FuelTankSpecsReportType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_EO_FuelTankSpecs_FuelTankSpecsReportType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_EO_FuelTankSpecs_FuelTankSpecsReportTypeSeq, UMAA_EO_FuelTankSpecs_FuelTankSpecsReportType);

NDDSUSERDllExport
RTIBool UMAA_EO_FuelTankSpecs_FuelTankSpecsReportType_initialize(
    UMAA_EO_FuelTankSpecs_FuelTankSpecsReportType* self);

NDDSUSERDllExport
RTIBool UMAA_EO_FuelTankSpecs_FuelTankSpecsReportType_initialize_ex(
    UMAA_EO_FuelTankSpecs_FuelTankSpecsReportType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_EO_FuelTankSpecs_FuelTankSpecsReportType_initialize_w_params(
    UMAA_EO_FuelTankSpecs_FuelTankSpecsReportType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_EO_FuelTankSpecs_FuelTankSpecsReportType_finalize_w_return(
    UMAA_EO_FuelTankSpecs_FuelTankSpecsReportType* self);

NDDSUSERDllExport
void UMAA_EO_FuelTankSpecs_FuelTankSpecsReportType_finalize(
    UMAA_EO_FuelTankSpecs_FuelTankSpecsReportType* self);

NDDSUSERDllExport
void UMAA_EO_FuelTankSpecs_FuelTankSpecsReportType_finalize_ex(
    UMAA_EO_FuelTankSpecs_FuelTankSpecsReportType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_EO_FuelTankSpecs_FuelTankSpecsReportType_finalize_w_params(
    UMAA_EO_FuelTankSpecs_FuelTankSpecsReportType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_EO_FuelTankSpecs_FuelTankSpecsReportType_finalize_optional_members(
    UMAA_EO_FuelTankSpecs_FuelTankSpecsReportType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_EO_FuelTankSpecs_FuelTankSpecsReportType_copy(
    UMAA_EO_FuelTankSpecs_FuelTankSpecsReportType* dst,
    const UMAA_EO_FuelTankSpecs_FuelTankSpecsReportType* src);

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
        struct type_code< UMAA_EO_FuelTankSpecs_FuelTankSpecsReportType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* FuelTankSpecsReportType */

