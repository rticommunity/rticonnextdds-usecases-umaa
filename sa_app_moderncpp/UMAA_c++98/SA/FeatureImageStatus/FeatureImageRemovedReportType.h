

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from FeatureImageRemovedReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef FeatureImageRemovedReportType_82163291_h
#define FeatureImageRemovedReportType_82163291_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "UMAA/Common/Measurement/Measurements.h"
#include "UMAA/SA/FeatureImagePair/FeatureImagePairType.h"

static const DDS_Char * const UMAA_SA_FeatureImageStatus_FeatureImageRemovedReport_TOPIC= "UMAA::SA::FeatureImageStatus::FeatureImageRemovedReport";

extern "C" {

    extern const char *UMAA_SA_FeatureImageStatus_FeatureImageRemovedReportTypeTYPENAME;

}

struct UMAA_SA_FeatureImageStatus_FeatureImageRemovedReportTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_SA_FeatureImageStatus_FeatureImageRemovedReportTypeTypeSupport;
class UMAA_SA_FeatureImageStatus_FeatureImageRemovedReportTypeDataWriter;
class UMAA_SA_FeatureImageStatus_FeatureImageRemovedReportTypeDataReader;
#endif
class UMAA_SA_FeatureImageStatus_FeatureImageRemovedReportType 
{
  public:
    typedef struct UMAA_SA_FeatureImageStatus_FeatureImageRemovedReportTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_SA_FeatureImageStatus_FeatureImageRemovedReportTypeTypeSupport TypeSupport;
    typedef UMAA_SA_FeatureImageStatus_FeatureImageRemovedReportTypeDataWriter DataWriter;
    typedef UMAA_SA_FeatureImageStatus_FeatureImageRemovedReportTypeDataReader DataReader;
    #endif

    UMAA_SA_FeatureImagePair_FeatureImagePairTypeSeq  featureImagePair ;
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
NDDSUSERDllExport DDS_TypeCode * UMAA_SA_FeatureImageStatus_FeatureImageRemovedReportType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_SA_FeatureImageStatus_FeatureImageRemovedReportType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_SA_FeatureImageStatus_FeatureImageRemovedReportType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_SA_FeatureImageStatus_FeatureImageRemovedReportType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_SA_FeatureImageStatus_FeatureImageRemovedReportTypeSeq, UMAA_SA_FeatureImageStatus_FeatureImageRemovedReportType);

NDDSUSERDllExport
RTIBool UMAA_SA_FeatureImageStatus_FeatureImageRemovedReportType_initialize(
    UMAA_SA_FeatureImageStatus_FeatureImageRemovedReportType* self);

NDDSUSERDllExport
RTIBool UMAA_SA_FeatureImageStatus_FeatureImageRemovedReportType_initialize_ex(
    UMAA_SA_FeatureImageStatus_FeatureImageRemovedReportType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_SA_FeatureImageStatus_FeatureImageRemovedReportType_initialize_w_params(
    UMAA_SA_FeatureImageStatus_FeatureImageRemovedReportType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_SA_FeatureImageStatus_FeatureImageRemovedReportType_finalize_w_return(
    UMAA_SA_FeatureImageStatus_FeatureImageRemovedReportType* self);

NDDSUSERDllExport
void UMAA_SA_FeatureImageStatus_FeatureImageRemovedReportType_finalize(
    UMAA_SA_FeatureImageStatus_FeatureImageRemovedReportType* self);

NDDSUSERDllExport
void UMAA_SA_FeatureImageStatus_FeatureImageRemovedReportType_finalize_ex(
    UMAA_SA_FeatureImageStatus_FeatureImageRemovedReportType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_SA_FeatureImageStatus_FeatureImageRemovedReportType_finalize_w_params(
    UMAA_SA_FeatureImageStatus_FeatureImageRemovedReportType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_SA_FeatureImageStatus_FeatureImageRemovedReportType_finalize_optional_members(
    UMAA_SA_FeatureImageStatus_FeatureImageRemovedReportType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_SA_FeatureImageStatus_FeatureImageRemovedReportType_copy(
    UMAA_SA_FeatureImageStatus_FeatureImageRemovedReportType* dst,
    const UMAA_SA_FeatureImageStatus_FeatureImageRemovedReportType* src);

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
        struct type_code< UMAA_SA_FeatureImageStatus_FeatureImageRemovedReportType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* FeatureImageRemovedReportType */

