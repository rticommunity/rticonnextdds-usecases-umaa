

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from RudderSpecsReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef RudderSpecsReportType_1997718508_h
#define RudderSpecsReportType_1997718508_h

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

static const DDS_Char * const UMAA_EO_RudderSpecs_RudderSpecsReport_TOPIC= "UMAA::EO::RudderSpecs::RudderSpecsReport";

extern "C" {

    extern const char *UMAA_EO_RudderSpecs_RudderSpecsReportTypeTYPENAME;

}

struct UMAA_EO_RudderSpecs_RudderSpecsReportTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_EO_RudderSpecs_RudderSpecsReportTypeTypeSupport;
class UMAA_EO_RudderSpecs_RudderSpecsReportTypeDataWriter;
class UMAA_EO_RudderSpecs_RudderSpecsReportTypeDataReader;
#endif
class UMAA_EO_RudderSpecs_RudderSpecsReportType 
{
  public:
    typedef struct UMAA_EO_RudderSpecs_RudderSpecsReportTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_EO_RudderSpecs_RudderSpecsReportTypeTypeSupport TypeSupport;
    typedef UMAA_EO_RudderSpecs_RudderSpecsReportTypeDataWriter DataWriter;
    typedef UMAA_EO_RudderSpecs_RudderSpecsReportTypeDataReader DataReader;
    #endif

    DDS_Double   maxPortAngle ;
    DDS_Double   maxStarboardAngle ;
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
NDDSUSERDllExport DDS_TypeCode * UMAA_EO_RudderSpecs_RudderSpecsReportType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_EO_RudderSpecs_RudderSpecsReportType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_EO_RudderSpecs_RudderSpecsReportType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_EO_RudderSpecs_RudderSpecsReportType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_EO_RudderSpecs_RudderSpecsReportTypeSeq, UMAA_EO_RudderSpecs_RudderSpecsReportType);

NDDSUSERDllExport
RTIBool UMAA_EO_RudderSpecs_RudderSpecsReportType_initialize(
    UMAA_EO_RudderSpecs_RudderSpecsReportType* self);

NDDSUSERDllExport
RTIBool UMAA_EO_RudderSpecs_RudderSpecsReportType_initialize_ex(
    UMAA_EO_RudderSpecs_RudderSpecsReportType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_EO_RudderSpecs_RudderSpecsReportType_initialize_w_params(
    UMAA_EO_RudderSpecs_RudderSpecsReportType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_EO_RudderSpecs_RudderSpecsReportType_finalize_w_return(
    UMAA_EO_RudderSpecs_RudderSpecsReportType* self);

NDDSUSERDllExport
void UMAA_EO_RudderSpecs_RudderSpecsReportType_finalize(
    UMAA_EO_RudderSpecs_RudderSpecsReportType* self);

NDDSUSERDllExport
void UMAA_EO_RudderSpecs_RudderSpecsReportType_finalize_ex(
    UMAA_EO_RudderSpecs_RudderSpecsReportType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_EO_RudderSpecs_RudderSpecsReportType_finalize_w_params(
    UMAA_EO_RudderSpecs_RudderSpecsReportType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_EO_RudderSpecs_RudderSpecsReportType_finalize_optional_members(
    UMAA_EO_RudderSpecs_RudderSpecsReportType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_EO_RudderSpecs_RudderSpecsReportType_copy(
    UMAA_EO_RudderSpecs_RudderSpecsReportType* dst,
    const UMAA_EO_RudderSpecs_RudderSpecsReportType* src);

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
        struct type_code< UMAA_EO_RudderSpecs_RudderSpecsReportType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* RudderSpecsReportType */

