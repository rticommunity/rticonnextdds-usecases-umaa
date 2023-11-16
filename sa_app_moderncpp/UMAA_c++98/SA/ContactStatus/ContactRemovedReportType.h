

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ContactRemovedReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef ContactRemovedReportType_1719598269_h
#define ContactRemovedReportType_1719598269_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "UMAA/Common/Measurement/Measurements.h"

static const DDS_Char * const UMAA_SA_ContactStatus_ContactRemovedReport_TOPIC= "UMAA::SA::ContactStatus::ContactRemovedReport";

extern "C" {

    extern const char *UMAA_SA_ContactStatus_ContactRemovedReportTypeTYPENAME;

}

struct UMAA_SA_ContactStatus_ContactRemovedReportTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_SA_ContactStatus_ContactRemovedReportTypeTypeSupport;
class UMAA_SA_ContactStatus_ContactRemovedReportTypeDataWriter;
class UMAA_SA_ContactStatus_ContactRemovedReportTypeDataReader;
#endif
class UMAA_SA_ContactStatus_ContactRemovedReportType 
{
  public:
    typedef struct UMAA_SA_ContactStatus_ContactRemovedReportTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_SA_ContactStatus_ContactRemovedReportTypeTypeSupport TypeSupport;
    typedef UMAA_SA_ContactStatus_ContactRemovedReportTypeDataWriter DataWriter;
    typedef UMAA_SA_ContactStatus_ContactRemovedReportTypeDataReader DataReader;
    #endif

    UMAA_Common_Measurement_NumericGUIDSeq  contactID ;
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
NDDSUSERDllExport DDS_TypeCode * UMAA_SA_ContactStatus_ContactRemovedReportType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_SA_ContactStatus_ContactRemovedReportType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_SA_ContactStatus_ContactRemovedReportType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_SA_ContactStatus_ContactRemovedReportType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_SA_ContactStatus_ContactRemovedReportTypeSeq, UMAA_SA_ContactStatus_ContactRemovedReportType);

NDDSUSERDllExport
RTIBool UMAA_SA_ContactStatus_ContactRemovedReportType_initialize(
    UMAA_SA_ContactStatus_ContactRemovedReportType* self);

NDDSUSERDllExport
RTIBool UMAA_SA_ContactStatus_ContactRemovedReportType_initialize_ex(
    UMAA_SA_ContactStatus_ContactRemovedReportType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_SA_ContactStatus_ContactRemovedReportType_initialize_w_params(
    UMAA_SA_ContactStatus_ContactRemovedReportType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_SA_ContactStatus_ContactRemovedReportType_finalize_w_return(
    UMAA_SA_ContactStatus_ContactRemovedReportType* self);

NDDSUSERDllExport
void UMAA_SA_ContactStatus_ContactRemovedReportType_finalize(
    UMAA_SA_ContactStatus_ContactRemovedReportType* self);

NDDSUSERDllExport
void UMAA_SA_ContactStatus_ContactRemovedReportType_finalize_ex(
    UMAA_SA_ContactStatus_ContactRemovedReportType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_SA_ContactStatus_ContactRemovedReportType_finalize_w_params(
    UMAA_SA_ContactStatus_ContactRemovedReportType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_SA_ContactStatus_ContactRemovedReportType_finalize_optional_members(
    UMAA_SA_ContactStatus_ContactRemovedReportType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_SA_ContactStatus_ContactRemovedReportType_copy(
    UMAA_SA_ContactStatus_ContactRemovedReportType* dst,
    const UMAA_SA_ContactStatus_ContactRemovedReportType* src);

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
        struct type_code< UMAA_SA_ContactStatus_ContactRemovedReportType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* ContactRemovedReportType */

