

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from UVPlatformSpecsReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef UVPlatformSpecsReportType_40298357_h
#define UVPlatformSpecsReportType_40298357_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "UMAA/Common/Measurement/Measurements.h"
#include "UMAA/Common/Measurement/Position3D_PlatformXYZ.h"
#include "UMAA/Common/PrimitiveConstrained/ConstrainedTypes.h"

static const DDS_Char * const UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReport_TOPIC= "UMAA::EO::UVPlatformSpecs::UVPlatformSpecsReport";

extern "C" {

    extern const char *UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportTypeTYPENAME;

}

struct UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportTypeTypeSupport;
class UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportTypeDataWriter;
class UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportTypeDataReader;
#endif
class UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportType 
{
  public:
    typedef struct UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportTypeTypeSupport TypeSupport;
    typedef UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportTypeDataWriter DataWriter;
    typedef UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportTypeDataReader DataReader;
    #endif

    DDS_Double   back ;
    DDS_Double   baselineBuoyancy ;
    DDS_Double   beamAtWaterline ;
    DDS_Double   bottom ;
    UMAA_Common_Measurement_Position3D_PlatformXYZ   centerOfBuoyancy ;
    UMAA_Common_Measurement_Position3D_PlatformXYZ   centerOfGravity ;
    DDS_Double   displacement ;
    DDS_Double   draft ;
    DDS_Double   front ;
    DDS_Double   heightOverall ;
    DDS_Double   hullDepth ;
    DDS_Double   left ;
    DDS_Double   lengthAtWaterline ;
    DDS_Double   lengthOverall ;
    DDS_Double   massOnLand ;
    DDS_Char *   name ;
    DDS_Double   outerWidth ;
    DDS_Double   right ;
    DDS_Double   top ;
    DDS_Double   widthOverall ;
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
NDDSUSERDllExport DDS_TypeCode * UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportTypeSeq, UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportType);

NDDSUSERDllExport
RTIBool UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportType_initialize(
    UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportType* self);

NDDSUSERDllExport
RTIBool UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportType_initialize_ex(
    UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportType_initialize_w_params(
    UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportType_finalize_w_return(
    UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportType* self);

NDDSUSERDllExport
void UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportType_finalize(
    UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportType* self);

NDDSUSERDllExport
void UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportType_finalize_ex(
    UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportType_finalize_w_params(
    UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportType_finalize_optional_members(
    UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportType_copy(
    UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportType* dst,
    const UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportType* src);

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
        struct type_code< UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* UVPlatformSpecsReportType */

