

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from BucketCommandAckReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef BucketCommandAckReportType_320004471_h
#define BucketCommandAckReportType_320004471_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "UMAA/Common/Measurement/Measurements.h"

static const DDS_Char * const UMAA_EO_BucketControl_BucketCommandAckReport_TOPIC= "UMAA::EO::BucketControl::BucketCommandAckReport";

extern "C" {

    extern const char *UMAA_EO_BucketControl_BucketCommandAckReportTypeTYPENAME;

}

struct UMAA_EO_BucketControl_BucketCommandAckReportTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_EO_BucketControl_BucketCommandAckReportTypeTypeSupport;
class UMAA_EO_BucketControl_BucketCommandAckReportTypeDataWriter;
class UMAA_EO_BucketControl_BucketCommandAckReportTypeDataReader;
#endif
class UMAA_EO_BucketControl_BucketCommandAckReportType 
{
  public:
    typedef struct UMAA_EO_BucketControl_BucketCommandAckReportTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_EO_BucketControl_BucketCommandAckReportTypeTypeSupport TypeSupport;
    typedef UMAA_EO_BucketControl_BucketCommandAckReportTypeDataWriter DataWriter;
    typedef UMAA_EO_BucketControl_BucketCommandAckReportTypeDataReader DataReader;
    #endif

    DDS_Double   bucketPosition ;
    UMAA_Common_Measurement_NumericGUID   source ;
    UMAA_Common_Measurement_NumericGUID   sessionID ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_EO_BucketControl_BucketCommandAckReportType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_EO_BucketControl_BucketCommandAckReportType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_EO_BucketControl_BucketCommandAckReportType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_EO_BucketControl_BucketCommandAckReportType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_EO_BucketControl_BucketCommandAckReportTypeSeq, UMAA_EO_BucketControl_BucketCommandAckReportType);

NDDSUSERDllExport
RTIBool UMAA_EO_BucketControl_BucketCommandAckReportType_initialize(
    UMAA_EO_BucketControl_BucketCommandAckReportType* self);

NDDSUSERDllExport
RTIBool UMAA_EO_BucketControl_BucketCommandAckReportType_initialize_ex(
    UMAA_EO_BucketControl_BucketCommandAckReportType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_EO_BucketControl_BucketCommandAckReportType_initialize_w_params(
    UMAA_EO_BucketControl_BucketCommandAckReportType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_EO_BucketControl_BucketCommandAckReportType_finalize_w_return(
    UMAA_EO_BucketControl_BucketCommandAckReportType* self);

NDDSUSERDllExport
void UMAA_EO_BucketControl_BucketCommandAckReportType_finalize(
    UMAA_EO_BucketControl_BucketCommandAckReportType* self);

NDDSUSERDllExport
void UMAA_EO_BucketControl_BucketCommandAckReportType_finalize_ex(
    UMAA_EO_BucketControl_BucketCommandAckReportType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_EO_BucketControl_BucketCommandAckReportType_finalize_w_params(
    UMAA_EO_BucketControl_BucketCommandAckReportType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_EO_BucketControl_BucketCommandAckReportType_finalize_optional_members(
    UMAA_EO_BucketControl_BucketCommandAckReportType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_EO_BucketControl_BucketCommandAckReportType_copy(
    UMAA_EO_BucketControl_BucketCommandAckReportType* dst,
    const UMAA_EO_BucketControl_BucketCommandAckReportType* src);

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
        struct type_code< UMAA_EO_BucketControl_BucketCommandAckReportType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* BucketCommandAckReportType */

