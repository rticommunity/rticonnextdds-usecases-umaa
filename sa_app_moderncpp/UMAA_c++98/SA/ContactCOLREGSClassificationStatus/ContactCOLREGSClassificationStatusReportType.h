

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ContactCOLREGSClassificationStatusReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef ContactCOLREGSClassificationStatusReportType_167947414_h
#define ContactCOLREGSClassificationStatusReportType_167947414_h

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

static const DDS_Char * const UMAA_SA_ContactCOLREGSClassificationStatus_ContactCOLREGSClassificationStatusReport_TOPIC= "UMAA::SA::ContactCOLREGSClassificationStatus::ContactCOLREGSClassificationStatusReport";

extern "C" {

    extern const char *UMAA_SA_ContactCOLREGSClassificationStatus_ContactCOLREGSClassificationStatusReportTypeTYPENAME;

}

struct UMAA_SA_ContactCOLREGSClassificationStatus_ContactCOLREGSClassificationStatusReportTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_SA_ContactCOLREGSClassificationStatus_ContactCOLREGSClassificationStatusReportTypeTypeSupport;
class UMAA_SA_ContactCOLREGSClassificationStatus_ContactCOLREGSClassificationStatusReportTypeDataWriter;
class UMAA_SA_ContactCOLREGSClassificationStatus_ContactCOLREGSClassificationStatusReportTypeDataReader;
#endif
class UMAA_SA_ContactCOLREGSClassificationStatus_ContactCOLREGSClassificationStatusReportType 
{
  public:
    typedef struct UMAA_SA_ContactCOLREGSClassificationStatus_ContactCOLREGSClassificationStatusReportTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_SA_ContactCOLREGSClassificationStatus_ContactCOLREGSClassificationStatusReportTypeTypeSupport TypeSupport;
    typedef UMAA_SA_ContactCOLREGSClassificationStatus_ContactCOLREGSClassificationStatusReportTypeDataWriter DataWriter;
    typedef UMAA_SA_ContactCOLREGSClassificationStatus_ContactCOLREGSClassificationStatusReportTypeDataReader DataReader;
    #endif

    DDS_Double   confidence ;
    UMAA_Common_Measurement_NumericGUID   source ;
    UMAA_Common_Measurement_DateTime   timeStamp ;
    UMAA_Common_MaritimeEnumeration_COLREGSClassificationEnumType_COLREGSClassificationEnumType   colregsClassification ;
    UMAA_Common_Measurement_NumericGUID   contactID ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_SA_ContactCOLREGSClassificationStatus_ContactCOLREGSClassificationStatusReportType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_SA_ContactCOLREGSClassificationStatus_ContactCOLREGSClassificationStatusReportType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_SA_ContactCOLREGSClassificationStatus_ContactCOLREGSClassificationStatusReportType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_SA_ContactCOLREGSClassificationStatus_ContactCOLREGSClassificationStatusReportType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_SA_ContactCOLREGSClassificationStatus_ContactCOLREGSClassificationStatusReportTypeSeq, UMAA_SA_ContactCOLREGSClassificationStatus_ContactCOLREGSClassificationStatusReportType);

NDDSUSERDllExport
RTIBool UMAA_SA_ContactCOLREGSClassificationStatus_ContactCOLREGSClassificationStatusReportType_initialize(
    UMAA_SA_ContactCOLREGSClassificationStatus_ContactCOLREGSClassificationStatusReportType* self);

NDDSUSERDllExport
RTIBool UMAA_SA_ContactCOLREGSClassificationStatus_ContactCOLREGSClassificationStatusReportType_initialize_ex(
    UMAA_SA_ContactCOLREGSClassificationStatus_ContactCOLREGSClassificationStatusReportType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_SA_ContactCOLREGSClassificationStatus_ContactCOLREGSClassificationStatusReportType_initialize_w_params(
    UMAA_SA_ContactCOLREGSClassificationStatus_ContactCOLREGSClassificationStatusReportType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_SA_ContactCOLREGSClassificationStatus_ContactCOLREGSClassificationStatusReportType_finalize_w_return(
    UMAA_SA_ContactCOLREGSClassificationStatus_ContactCOLREGSClassificationStatusReportType* self);

NDDSUSERDllExport
void UMAA_SA_ContactCOLREGSClassificationStatus_ContactCOLREGSClassificationStatusReportType_finalize(
    UMAA_SA_ContactCOLREGSClassificationStatus_ContactCOLREGSClassificationStatusReportType* self);

NDDSUSERDllExport
void UMAA_SA_ContactCOLREGSClassificationStatus_ContactCOLREGSClassificationStatusReportType_finalize_ex(
    UMAA_SA_ContactCOLREGSClassificationStatus_ContactCOLREGSClassificationStatusReportType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_SA_ContactCOLREGSClassificationStatus_ContactCOLREGSClassificationStatusReportType_finalize_w_params(
    UMAA_SA_ContactCOLREGSClassificationStatus_ContactCOLREGSClassificationStatusReportType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_SA_ContactCOLREGSClassificationStatus_ContactCOLREGSClassificationStatusReportType_finalize_optional_members(
    UMAA_SA_ContactCOLREGSClassificationStatus_ContactCOLREGSClassificationStatusReportType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_SA_ContactCOLREGSClassificationStatus_ContactCOLREGSClassificationStatusReportType_copy(
    UMAA_SA_ContactCOLREGSClassificationStatus_ContactCOLREGSClassificationStatusReportType* dst,
    const UMAA_SA_ContactCOLREGSClassificationStatus_ContactCOLREGSClassificationStatusReportType* src);

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
        struct type_code< UMAA_SA_ContactCOLREGSClassificationStatus_ContactCOLREGSClassificationStatusReportType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* ContactCOLREGSClassificationStatusReportType */

