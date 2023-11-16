

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from BucketReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef BucketReportType_1523111244_h
#define BucketReportType_1523111244_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "UMAA/Common/Measurement/Measurements.h"

static const DDS_Char * const UMAA_EO_BucketStatus_BucketReport_TOPIC= "UMAA::EO::BucketStatus::BucketReport";

extern "C" {

    extern const char *UMAA_EO_BucketStatus_BucketReportTypeTYPENAME;

}

struct UMAA_EO_BucketStatus_BucketReportTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_EO_BucketStatus_BucketReportTypeTypeSupport;
class UMAA_EO_BucketStatus_BucketReportTypeDataWriter;
class UMAA_EO_BucketStatus_BucketReportTypeDataReader;
#endif
class UMAA_EO_BucketStatus_BucketReportType 
{
  public:
    typedef struct UMAA_EO_BucketStatus_BucketReportTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_EO_BucketStatus_BucketReportTypeTypeSupport TypeSupport;
    typedef UMAA_EO_BucketStatus_BucketReportTypeDataWriter DataWriter;
    typedef UMAA_EO_BucketStatus_BucketReportTypeDataReader DataReader;
    #endif

    DDS_Double   bucketPosition ;
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
NDDSUSERDllExport DDS_TypeCode * UMAA_EO_BucketStatus_BucketReportType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_EO_BucketStatus_BucketReportType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_EO_BucketStatus_BucketReportType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_EO_BucketStatus_BucketReportType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_EO_BucketStatus_BucketReportTypeSeq, UMAA_EO_BucketStatus_BucketReportType);

NDDSUSERDllExport
RTIBool UMAA_EO_BucketStatus_BucketReportType_initialize(
    UMAA_EO_BucketStatus_BucketReportType* self);

NDDSUSERDllExport
RTIBool UMAA_EO_BucketStatus_BucketReportType_initialize_ex(
    UMAA_EO_BucketStatus_BucketReportType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_EO_BucketStatus_BucketReportType_initialize_w_params(
    UMAA_EO_BucketStatus_BucketReportType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_EO_BucketStatus_BucketReportType_finalize_w_return(
    UMAA_EO_BucketStatus_BucketReportType* self);

NDDSUSERDllExport
void UMAA_EO_BucketStatus_BucketReportType_finalize(
    UMAA_EO_BucketStatus_BucketReportType* self);

NDDSUSERDllExport
void UMAA_EO_BucketStatus_BucketReportType_finalize_ex(
    UMAA_EO_BucketStatus_BucketReportType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_EO_BucketStatus_BucketReportType_finalize_w_params(
    UMAA_EO_BucketStatus_BucketReportType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_EO_BucketStatus_BucketReportType_finalize_optional_members(
    UMAA_EO_BucketStatus_BucketReportType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_EO_BucketStatus_BucketReportType_copy(
    UMAA_EO_BucketStatus_BucketReportType* dst,
    const UMAA_EO_BucketStatus_BucketReportType* src);

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
        struct type_code< UMAA_EO_BucketStatus_BucketReportType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* BucketReportType */

