

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from SeaStatusReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef SeaStatusReportType_507414258_h
#define SeaStatusReportType_507414258_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "UMAA/Common/Measurement/Measurements.h"
#include "UMAA/Common/OrderedEnumeration/OrderedEnumerationSets.h"

static const DDS_Char * const UMAA_SA_SeaStatus_SeaStatusReport_TOPIC= "UMAA::SA::SeaStatus::SeaStatusReport";

extern "C" {

    extern const char *UMAA_SA_SeaStatus_SeaStatusReportTypeTYPENAME;

}

struct UMAA_SA_SeaStatus_SeaStatusReportTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_SA_SeaStatus_SeaStatusReportTypeTypeSupport;
class UMAA_SA_SeaStatus_SeaStatusReportTypeDataWriter;
class UMAA_SA_SeaStatus_SeaStatusReportTypeDataReader;
#endif
class UMAA_SA_SeaStatus_SeaStatusReportType 
{
  public:
    typedef struct UMAA_SA_SeaStatus_SeaStatusReportTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_SA_SeaStatus_SeaStatusReportTypeTypeSupport TypeSupport;
    typedef UMAA_SA_SeaStatus_SeaStatusReportTypeDataWriter DataWriter;
    typedef UMAA_SA_SeaStatus_SeaStatusReportTypeDataReader DataReader;
    #endif

    UMAA_Common_OrderedEnumeration_SeaStateEnumType_SeaStateEnumType   state ;
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
NDDSUSERDllExport DDS_TypeCode * UMAA_SA_SeaStatus_SeaStatusReportType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_SA_SeaStatus_SeaStatusReportType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_SA_SeaStatus_SeaStatusReportType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_SA_SeaStatus_SeaStatusReportType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_SA_SeaStatus_SeaStatusReportTypeSeq, UMAA_SA_SeaStatus_SeaStatusReportType);

NDDSUSERDllExport
RTIBool UMAA_SA_SeaStatus_SeaStatusReportType_initialize(
    UMAA_SA_SeaStatus_SeaStatusReportType* self);

NDDSUSERDllExport
RTIBool UMAA_SA_SeaStatus_SeaStatusReportType_initialize_ex(
    UMAA_SA_SeaStatus_SeaStatusReportType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_SA_SeaStatus_SeaStatusReportType_initialize_w_params(
    UMAA_SA_SeaStatus_SeaStatusReportType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_SA_SeaStatus_SeaStatusReportType_finalize_w_return(
    UMAA_SA_SeaStatus_SeaStatusReportType* self);

NDDSUSERDllExport
void UMAA_SA_SeaStatus_SeaStatusReportType_finalize(
    UMAA_SA_SeaStatus_SeaStatusReportType* self);

NDDSUSERDllExport
void UMAA_SA_SeaStatus_SeaStatusReportType_finalize_ex(
    UMAA_SA_SeaStatus_SeaStatusReportType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_SA_SeaStatus_SeaStatusReportType_finalize_w_params(
    UMAA_SA_SeaStatus_SeaStatusReportType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_SA_SeaStatus_SeaStatusReportType_finalize_optional_members(
    UMAA_SA_SeaStatus_SeaStatusReportType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_SA_SeaStatus_SeaStatusReportType_copy(
    UMAA_SA_SeaStatus_SeaStatusReportType* dst,
    const UMAA_SA_SeaStatus_SeaStatusReportType* src);

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
        struct type_code< UMAA_SA_SeaStatus_SeaStatusReportType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* SeaStatusReportType */

