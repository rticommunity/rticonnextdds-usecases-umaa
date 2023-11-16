

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ImageReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef ImageReportType_1344238249_h
#define ImageReportType_1344238249_h

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
#include "UMAA/Common/Measurement/Position3D_WGS84.h"
#include "UMAA/Common/PrimitiveConstrained/ConstrainedTypes.h"
#include "UMAA/SA/WorldTransform/WorldTransformType.h"

static const DDS_Char * const UMAA_SA_ImageStatus_ImageReport_TOPIC= "UMAA::SA::ImageStatus::ImageReport";

extern "C" {

    extern const char *UMAA_SA_ImageStatus_ImageReportTypeTYPENAME;

}

struct UMAA_SA_ImageStatus_ImageReportTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_SA_ImageStatus_ImageReportTypeTypeSupport;
class UMAA_SA_ImageStatus_ImageReportTypeDataWriter;
class UMAA_SA_ImageStatus_ImageReportTypeDataReader;
#endif
class UMAA_SA_ImageStatus_ImageReportType 
{
  public:
    typedef struct UMAA_SA_ImageStatus_ImageReportTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_SA_ImageStatus_ImageReportTypeTypeSupport TypeSupport;
    typedef UMAA_SA_ImageStatus_ImageReportTypeDataWriter DataWriter;
    typedef UMAA_SA_ImageStatus_ImageReportTypeDataReader DataReader;
    #endif

    UMAA_Common_Measurement_Position3D_WGS84   cameraPosition ;
    DDS_Char *   imageName ;
    DDS_Char *   imageURI ;
    UMAA_Common_Measurement_DateTime   timestamp ;
    UMAA_Common_MaritimeEnumeration_ImageFormatEnumType_ImageFormatEnumType   type ;
    UMAA_SA_WorldTransform_WorldTransformType   * worldTransform ;
    UMAA_Common_Measurement_NumericGUID   source ;
    UMAA_Common_Measurement_DateTime   timeStamp ;
    UMAA_Common_Measurement_NumericGUID   imageID ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_SA_ImageStatus_ImageReportType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_SA_ImageStatus_ImageReportType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_SA_ImageStatus_ImageReportType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_SA_ImageStatus_ImageReportType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_SA_ImageStatus_ImageReportTypeSeq, UMAA_SA_ImageStatus_ImageReportType);

NDDSUSERDllExport
RTIBool UMAA_SA_ImageStatus_ImageReportType_initialize(
    UMAA_SA_ImageStatus_ImageReportType* self);

NDDSUSERDllExport
RTIBool UMAA_SA_ImageStatus_ImageReportType_initialize_ex(
    UMAA_SA_ImageStatus_ImageReportType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_SA_ImageStatus_ImageReportType_initialize_w_params(
    UMAA_SA_ImageStatus_ImageReportType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_SA_ImageStatus_ImageReportType_finalize_w_return(
    UMAA_SA_ImageStatus_ImageReportType* self);

NDDSUSERDllExport
void UMAA_SA_ImageStatus_ImageReportType_finalize(
    UMAA_SA_ImageStatus_ImageReportType* self);

NDDSUSERDllExport
void UMAA_SA_ImageStatus_ImageReportType_finalize_ex(
    UMAA_SA_ImageStatus_ImageReportType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_SA_ImageStatus_ImageReportType_finalize_w_params(
    UMAA_SA_ImageStatus_ImageReportType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_SA_ImageStatus_ImageReportType_finalize_optional_members(
    UMAA_SA_ImageStatus_ImageReportType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_SA_ImageStatus_ImageReportType_copy(
    UMAA_SA_ImageStatus_ImageReportType* dst,
    const UMAA_SA_ImageStatus_ImageReportType* src);

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
        struct type_code< UMAA_SA_ImageStatus_ImageReportType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* ImageReportType */

