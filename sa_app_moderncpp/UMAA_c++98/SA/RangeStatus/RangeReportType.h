

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from RangeReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef RangeReportType_1827048721_h
#define RangeReportType_1827048721_h

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
#include "UMAA/Common/PrimitiveConstrained/ConstrainedTypes.h"
#include "UMAA/SA/RangeStatus/RangeDataPointType.h"

static const DDS_Char * const UMAA_SA_RangeStatus_RangeReport_TOPIC= "UMAA::SA::RangeStatus::RangeReport";

extern "C" {

    extern const char *UMAA_SA_RangeStatus_RangeReportTypeTYPENAME;

}

struct UMAA_SA_RangeStatus_RangeReportTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_SA_RangeStatus_RangeReportTypeTypeSupport;
class UMAA_SA_RangeStatus_RangeReportTypeDataWriter;
class UMAA_SA_RangeStatus_RangeReportTypeDataReader;
#endif
class UMAA_SA_RangeStatus_RangeReportType 
{
  public:
    typedef struct UMAA_SA_RangeStatus_RangeReportTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_SA_RangeStatus_RangeReportTypeTypeSupport TypeSupport;
    typedef UMAA_SA_RangeStatus_RangeReportTypeDataWriter DataWriter;
    typedef UMAA_SA_RangeStatus_RangeReportTypeDataReader DataReader;
    #endif

    UMAA_Common_MaritimeEnumeration_CoordinateSystemEnumType_CoordinateSystemEnumType   coordinateSystem ;
    UMAA_SA_RangeStatus_RangeDataPointTypeSeq  dataPoints ;
    DDS_Char *   errorMessage ;
    UMAA_Common_MaritimeEnumeration_RangeErrorCodeEnumType_RangeErrorCodeEnumType   rangeErrorCode ;
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
NDDSUSERDllExport DDS_TypeCode * UMAA_SA_RangeStatus_RangeReportType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_SA_RangeStatus_RangeReportType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_SA_RangeStatus_RangeReportType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_SA_RangeStatus_RangeReportType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_SA_RangeStatus_RangeReportTypeSeq, UMAA_SA_RangeStatus_RangeReportType);

NDDSUSERDllExport
RTIBool UMAA_SA_RangeStatus_RangeReportType_initialize(
    UMAA_SA_RangeStatus_RangeReportType* self);

NDDSUSERDllExport
RTIBool UMAA_SA_RangeStatus_RangeReportType_initialize_ex(
    UMAA_SA_RangeStatus_RangeReportType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_SA_RangeStatus_RangeReportType_initialize_w_params(
    UMAA_SA_RangeStatus_RangeReportType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_SA_RangeStatus_RangeReportType_finalize_w_return(
    UMAA_SA_RangeStatus_RangeReportType* self);

NDDSUSERDllExport
void UMAA_SA_RangeStatus_RangeReportType_finalize(
    UMAA_SA_RangeStatus_RangeReportType* self);

NDDSUSERDllExport
void UMAA_SA_RangeStatus_RangeReportType_finalize_ex(
    UMAA_SA_RangeStatus_RangeReportType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_SA_RangeStatus_RangeReportType_finalize_w_params(
    UMAA_SA_RangeStatus_RangeReportType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_SA_RangeStatus_RangeReportType_finalize_optional_members(
    UMAA_SA_RangeStatus_RangeReportType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_SA_RangeStatus_RangeReportType_copy(
    UMAA_SA_RangeStatus_RangeReportType* dst,
    const UMAA_SA_RangeStatus_RangeReportType* src);

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
        struct type_code< UMAA_SA_RangeStatus_RangeReportType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* RangeReportType */

