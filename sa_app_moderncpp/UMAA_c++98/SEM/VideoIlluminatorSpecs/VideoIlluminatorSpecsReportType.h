

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from VideoIlluminatorSpecsReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef VideoIlluminatorSpecsReportType_1089081381_h
#define VideoIlluminatorSpecsReportType_1089081381_h

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
#include "UMAA/Common/PrimitiveConstrained/ConstrainedTypes.h"

static const DDS_Char * const UMAA_SEM_VideoIlluminatorSpecs_VideoIlluminatorSpecsReport_TOPIC= "UMAA::SEM::VideoIlluminatorSpecs::VideoIlluminatorSpecsReport";

extern "C" {

    extern const char *UMAA_SEM_VideoIlluminatorSpecs_VideoIlluminatorSpecsReportTypeTYPENAME;

}

struct UMAA_SEM_VideoIlluminatorSpecs_VideoIlluminatorSpecsReportTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_SEM_VideoIlluminatorSpecs_VideoIlluminatorSpecsReportTypeTypeSupport;
class UMAA_SEM_VideoIlluminatorSpecs_VideoIlluminatorSpecsReportTypeDataWriter;
class UMAA_SEM_VideoIlluminatorSpecs_VideoIlluminatorSpecsReportTypeDataReader;
#endif
class UMAA_SEM_VideoIlluminatorSpecs_VideoIlluminatorSpecsReportType 
{
  public:
    typedef struct UMAA_SEM_VideoIlluminatorSpecs_VideoIlluminatorSpecsReportTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_SEM_VideoIlluminatorSpecs_VideoIlluminatorSpecsReportTypeTypeSupport TypeSupport;
    typedef UMAA_SEM_VideoIlluminatorSpecs_VideoIlluminatorSpecsReportTypeDataWriter DataWriter;
    typedef UMAA_SEM_VideoIlluminatorSpecs_VideoIlluminatorSpecsReportTypeDataReader DataReader;
    #endif

    DDS_Boolean   maxBeamWidth ;
    DDS_Char *   name ;
    DDS_Boolean   supportedColor ;
    DDS_Boolean   supportedGreyscale ;
    DDS_Boolean   supportedInfrared ;
    DDS_Boolean   supportedLowlight ;
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
NDDSUSERDllExport DDS_TypeCode * UMAA_SEM_VideoIlluminatorSpecs_VideoIlluminatorSpecsReportType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_SEM_VideoIlluminatorSpecs_VideoIlluminatorSpecsReportType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_SEM_VideoIlluminatorSpecs_VideoIlluminatorSpecsReportType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_SEM_VideoIlluminatorSpecs_VideoIlluminatorSpecsReportType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_SEM_VideoIlluminatorSpecs_VideoIlluminatorSpecsReportTypeSeq, UMAA_SEM_VideoIlluminatorSpecs_VideoIlluminatorSpecsReportType);

NDDSUSERDllExport
RTIBool UMAA_SEM_VideoIlluminatorSpecs_VideoIlluminatorSpecsReportType_initialize(
    UMAA_SEM_VideoIlluminatorSpecs_VideoIlluminatorSpecsReportType* self);

NDDSUSERDllExport
RTIBool UMAA_SEM_VideoIlluminatorSpecs_VideoIlluminatorSpecsReportType_initialize_ex(
    UMAA_SEM_VideoIlluminatorSpecs_VideoIlluminatorSpecsReportType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_SEM_VideoIlluminatorSpecs_VideoIlluminatorSpecsReportType_initialize_w_params(
    UMAA_SEM_VideoIlluminatorSpecs_VideoIlluminatorSpecsReportType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_SEM_VideoIlluminatorSpecs_VideoIlluminatorSpecsReportType_finalize_w_return(
    UMAA_SEM_VideoIlluminatorSpecs_VideoIlluminatorSpecsReportType* self);

NDDSUSERDllExport
void UMAA_SEM_VideoIlluminatorSpecs_VideoIlluminatorSpecsReportType_finalize(
    UMAA_SEM_VideoIlluminatorSpecs_VideoIlluminatorSpecsReportType* self);

NDDSUSERDllExport
void UMAA_SEM_VideoIlluminatorSpecs_VideoIlluminatorSpecsReportType_finalize_ex(
    UMAA_SEM_VideoIlluminatorSpecs_VideoIlluminatorSpecsReportType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_SEM_VideoIlluminatorSpecs_VideoIlluminatorSpecsReportType_finalize_w_params(
    UMAA_SEM_VideoIlluminatorSpecs_VideoIlluminatorSpecsReportType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_SEM_VideoIlluminatorSpecs_VideoIlluminatorSpecsReportType_finalize_optional_members(
    UMAA_SEM_VideoIlluminatorSpecs_VideoIlluminatorSpecsReportType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_SEM_VideoIlluminatorSpecs_VideoIlluminatorSpecsReportType_copy(
    UMAA_SEM_VideoIlluminatorSpecs_VideoIlluminatorSpecsReportType* dst,
    const UMAA_SEM_VideoIlluminatorSpecs_VideoIlluminatorSpecsReportType* src);

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
        struct type_code< UMAA_SEM_VideoIlluminatorSpecs_VideoIlluminatorSpecsReportType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* VideoIlluminatorSpecsReportType */

