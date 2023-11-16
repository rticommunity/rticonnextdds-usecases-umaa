

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from FeatureImageReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef FeatureImageReportType_1916779367_h
#define FeatureImageReportType_1916779367_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "UMAA/Common/Measurement/Measurements.h"
#include "UMAA/SA/BoundingBox/BoundingBoxType.h"

static const DDS_Char * const UMAA_SA_FeatureImageStatus_FeatureImageReport_TOPIC= "UMAA::SA::FeatureImageStatus::FeatureImageReport";

extern "C" {

    extern const char *UMAA_SA_FeatureImageStatus_FeatureImageReportTypeTYPENAME;

}

struct UMAA_SA_FeatureImageStatus_FeatureImageReportTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_SA_FeatureImageStatus_FeatureImageReportTypeTypeSupport;
class UMAA_SA_FeatureImageStatus_FeatureImageReportTypeDataWriter;
class UMAA_SA_FeatureImageStatus_FeatureImageReportTypeDataReader;
#endif
class UMAA_SA_FeatureImageStatus_FeatureImageReportType 
{
  public:
    typedef struct UMAA_SA_FeatureImageStatus_FeatureImageReportTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_SA_FeatureImageStatus_FeatureImageReportTypeTypeSupport TypeSupport;
    typedef UMAA_SA_FeatureImageStatus_FeatureImageReportTypeDataWriter DataWriter;
    typedef UMAA_SA_FeatureImageStatus_FeatureImageReportTypeDataReader DataReader;
    #endif

    UMAA_SA_BoundingBox_BoundingBoxType   * boundingBox ;
    UMAA_Common_Measurement_NumericGUID   source ;
    UMAA_Common_Measurement_DateTime   timeStamp ;
    UMAA_Common_Measurement_NumericGUIDSeq  featureID ;
    UMAA_Common_Measurement_NumericGUIDSeq  imageID ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_SA_FeatureImageStatus_FeatureImageReportType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_SA_FeatureImageStatus_FeatureImageReportType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_SA_FeatureImageStatus_FeatureImageReportType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_SA_FeatureImageStatus_FeatureImageReportType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_SA_FeatureImageStatus_FeatureImageReportTypeSeq, UMAA_SA_FeatureImageStatus_FeatureImageReportType);

NDDSUSERDllExport
RTIBool UMAA_SA_FeatureImageStatus_FeatureImageReportType_initialize(
    UMAA_SA_FeatureImageStatus_FeatureImageReportType* self);

NDDSUSERDllExport
RTIBool UMAA_SA_FeatureImageStatus_FeatureImageReportType_initialize_ex(
    UMAA_SA_FeatureImageStatus_FeatureImageReportType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_SA_FeatureImageStatus_FeatureImageReportType_initialize_w_params(
    UMAA_SA_FeatureImageStatus_FeatureImageReportType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_SA_FeatureImageStatus_FeatureImageReportType_finalize_w_return(
    UMAA_SA_FeatureImageStatus_FeatureImageReportType* self);

NDDSUSERDllExport
void UMAA_SA_FeatureImageStatus_FeatureImageReportType_finalize(
    UMAA_SA_FeatureImageStatus_FeatureImageReportType* self);

NDDSUSERDllExport
void UMAA_SA_FeatureImageStatus_FeatureImageReportType_finalize_ex(
    UMAA_SA_FeatureImageStatus_FeatureImageReportType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_SA_FeatureImageStatus_FeatureImageReportType_finalize_w_params(
    UMAA_SA_FeatureImageStatus_FeatureImageReportType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_SA_FeatureImageStatus_FeatureImageReportType_finalize_optional_members(
    UMAA_SA_FeatureImageStatus_FeatureImageReportType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_SA_FeatureImageStatus_FeatureImageReportType_copy(
    UMAA_SA_FeatureImageStatus_FeatureImageReportType* dst,
    const UMAA_SA_FeatureImageStatus_FeatureImageReportType* src);

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
        struct type_code< UMAA_SA_FeatureImageStatus_FeatureImageReportType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* FeatureImageReportType */

