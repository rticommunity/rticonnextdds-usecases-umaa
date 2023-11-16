

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from UVPlatformCapabilitiesReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef UVPlatformCapabilitiesReportType_1594135249_h
#define UVPlatformCapabilitiesReportType_1594135249_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "UMAA/Common/Measurement/Measurements.h"
#include "UMAA/EO/UVPlatformSpecs/UVPlatformCapabilitiesType.h"

static const DDS_Char * const UMAA_EO_UVPlatformSpecs_UVPlatformCapabilitiesReport_TOPIC= "UMAA::EO::UVPlatformSpecs::UVPlatformCapabilitiesReport";

extern "C" {

    extern const char *UMAA_EO_UVPlatformSpecs_UVPlatformCapabilitiesReportTypeTYPENAME;

}

struct UMAA_EO_UVPlatformSpecs_UVPlatformCapabilitiesReportTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_EO_UVPlatformSpecs_UVPlatformCapabilitiesReportTypeTypeSupport;
class UMAA_EO_UVPlatformSpecs_UVPlatformCapabilitiesReportTypeDataWriter;
class UMAA_EO_UVPlatformSpecs_UVPlatformCapabilitiesReportTypeDataReader;
#endif
class UMAA_EO_UVPlatformSpecs_UVPlatformCapabilitiesReportType 
{
  public:
    typedef struct UMAA_EO_UVPlatformSpecs_UVPlatformCapabilitiesReportTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_EO_UVPlatformSpecs_UVPlatformCapabilitiesReportTypeTypeSupport TypeSupport;
    typedef UMAA_EO_UVPlatformSpecs_UVPlatformCapabilitiesReportTypeDataWriter DataWriter;
    typedef UMAA_EO_UVPlatformSpecs_UVPlatformCapabilitiesReportTypeDataReader DataReader;
    #endif

    DDS_Double   endurance ;
    DDS_Double   maxDepth ;
    DDS_Double   range ;
    UMAA_EO_UVPlatformSpecs_UVPlatformCapabilitiesType   surfaceCapabilities ;
    DDS_Double   towingCapacity ;
    UMAA_EO_UVPlatformSpecs_UVPlatformCapabilitiesType   * underwaterCapabilities ;
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
NDDSUSERDllExport DDS_TypeCode * UMAA_EO_UVPlatformSpecs_UVPlatformCapabilitiesReportType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_EO_UVPlatformSpecs_UVPlatformCapabilitiesReportType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_EO_UVPlatformSpecs_UVPlatformCapabilitiesReportType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_EO_UVPlatformSpecs_UVPlatformCapabilitiesReportType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_EO_UVPlatformSpecs_UVPlatformCapabilitiesReportTypeSeq, UMAA_EO_UVPlatformSpecs_UVPlatformCapabilitiesReportType);

NDDSUSERDllExport
RTIBool UMAA_EO_UVPlatformSpecs_UVPlatformCapabilitiesReportType_initialize(
    UMAA_EO_UVPlatformSpecs_UVPlatformCapabilitiesReportType* self);

NDDSUSERDllExport
RTIBool UMAA_EO_UVPlatformSpecs_UVPlatformCapabilitiesReportType_initialize_ex(
    UMAA_EO_UVPlatformSpecs_UVPlatformCapabilitiesReportType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_EO_UVPlatformSpecs_UVPlatformCapabilitiesReportType_initialize_w_params(
    UMAA_EO_UVPlatformSpecs_UVPlatformCapabilitiesReportType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_EO_UVPlatformSpecs_UVPlatformCapabilitiesReportType_finalize_w_return(
    UMAA_EO_UVPlatformSpecs_UVPlatformCapabilitiesReportType* self);

NDDSUSERDllExport
void UMAA_EO_UVPlatformSpecs_UVPlatformCapabilitiesReportType_finalize(
    UMAA_EO_UVPlatformSpecs_UVPlatformCapabilitiesReportType* self);

NDDSUSERDllExport
void UMAA_EO_UVPlatformSpecs_UVPlatformCapabilitiesReportType_finalize_ex(
    UMAA_EO_UVPlatformSpecs_UVPlatformCapabilitiesReportType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_EO_UVPlatformSpecs_UVPlatformCapabilitiesReportType_finalize_w_params(
    UMAA_EO_UVPlatformSpecs_UVPlatformCapabilitiesReportType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_EO_UVPlatformSpecs_UVPlatformCapabilitiesReportType_finalize_optional_members(
    UMAA_EO_UVPlatformSpecs_UVPlatformCapabilitiesReportType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_EO_UVPlatformSpecs_UVPlatformCapabilitiesReportType_copy(
    UMAA_EO_UVPlatformSpecs_UVPlatformCapabilitiesReportType* dst,
    const UMAA_EO_UVPlatformSpecs_UVPlatformCapabilitiesReportType* src);

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
        struct type_code< UMAA_EO_UVPlatformSpecs_UVPlatformCapabilitiesReportType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* UVPlatformCapabilitiesReportType */

