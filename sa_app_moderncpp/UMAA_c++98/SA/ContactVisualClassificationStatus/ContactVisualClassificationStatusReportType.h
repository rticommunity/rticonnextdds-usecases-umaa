

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ContactVisualClassificationStatusReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef ContactVisualClassificationStatusReportType_675891174_h
#define ContactVisualClassificationStatusReportType_675891174_h

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

static const DDS_Char * const UMAA_SA_ContactVisualClassificationStatus_ContactVisualClassificationStatusReport_TOPIC= "UMAA::SA::ContactVisualClassificationStatus::ContactVisualClassificationStatusReport";

extern "C" {

    extern const char *UMAA_SA_ContactVisualClassificationStatus_ContactVisualClassificationStatusReportTypeTYPENAME;

}

struct UMAA_SA_ContactVisualClassificationStatus_ContactVisualClassificationStatusReportTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_SA_ContactVisualClassificationStatus_ContactVisualClassificationStatusReportTypeTypeSupport;
class UMAA_SA_ContactVisualClassificationStatus_ContactVisualClassificationStatusReportTypeDataWriter;
class UMAA_SA_ContactVisualClassificationStatus_ContactVisualClassificationStatusReportTypeDataReader;
#endif
class UMAA_SA_ContactVisualClassificationStatus_ContactVisualClassificationStatusReportType 
{
  public:
    typedef struct UMAA_SA_ContactVisualClassificationStatus_ContactVisualClassificationStatusReportTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_SA_ContactVisualClassificationStatus_ContactVisualClassificationStatusReportTypeTypeSupport TypeSupport;
    typedef UMAA_SA_ContactVisualClassificationStatus_ContactVisualClassificationStatusReportTypeDataWriter DataWriter;
    typedef UMAA_SA_ContactVisualClassificationStatus_ContactVisualClassificationStatusReportTypeDataReader DataReader;
    #endif

    DDS_Double   confidence ;
    UMAA_Common_Measurement_NumericGUID   source ;
    UMAA_Common_Measurement_DateTime   timeStamp ;
    UMAA_Common_Measurement_NumericGUID   contactID ;
    UMAA_Common_MaritimeEnumeration_VisualClassificationEnumType_VisualClassificationEnumType   visualClassification ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_SA_ContactVisualClassificationStatus_ContactVisualClassificationStatusReportType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_SA_ContactVisualClassificationStatus_ContactVisualClassificationStatusReportType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_SA_ContactVisualClassificationStatus_ContactVisualClassificationStatusReportType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_SA_ContactVisualClassificationStatus_ContactVisualClassificationStatusReportType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_SA_ContactVisualClassificationStatus_ContactVisualClassificationStatusReportTypeSeq, UMAA_SA_ContactVisualClassificationStatus_ContactVisualClassificationStatusReportType);

NDDSUSERDllExport
RTIBool UMAA_SA_ContactVisualClassificationStatus_ContactVisualClassificationStatusReportType_initialize(
    UMAA_SA_ContactVisualClassificationStatus_ContactVisualClassificationStatusReportType* self);

NDDSUSERDllExport
RTIBool UMAA_SA_ContactVisualClassificationStatus_ContactVisualClassificationStatusReportType_initialize_ex(
    UMAA_SA_ContactVisualClassificationStatus_ContactVisualClassificationStatusReportType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_SA_ContactVisualClassificationStatus_ContactVisualClassificationStatusReportType_initialize_w_params(
    UMAA_SA_ContactVisualClassificationStatus_ContactVisualClassificationStatusReportType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_SA_ContactVisualClassificationStatus_ContactVisualClassificationStatusReportType_finalize_w_return(
    UMAA_SA_ContactVisualClassificationStatus_ContactVisualClassificationStatusReportType* self);

NDDSUSERDllExport
void UMAA_SA_ContactVisualClassificationStatus_ContactVisualClassificationStatusReportType_finalize(
    UMAA_SA_ContactVisualClassificationStatus_ContactVisualClassificationStatusReportType* self);

NDDSUSERDllExport
void UMAA_SA_ContactVisualClassificationStatus_ContactVisualClassificationStatusReportType_finalize_ex(
    UMAA_SA_ContactVisualClassificationStatus_ContactVisualClassificationStatusReportType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_SA_ContactVisualClassificationStatus_ContactVisualClassificationStatusReportType_finalize_w_params(
    UMAA_SA_ContactVisualClassificationStatus_ContactVisualClassificationStatusReportType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_SA_ContactVisualClassificationStatus_ContactVisualClassificationStatusReportType_finalize_optional_members(
    UMAA_SA_ContactVisualClassificationStatus_ContactVisualClassificationStatusReportType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_SA_ContactVisualClassificationStatus_ContactVisualClassificationStatusReportType_copy(
    UMAA_SA_ContactVisualClassificationStatus_ContactVisualClassificationStatusReportType* dst,
    const UMAA_SA_ContactVisualClassificationStatus_ContactVisualClassificationStatusReportType* src);

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
        struct type_code< UMAA_SA_ContactVisualClassificationStatus_ContactVisualClassificationStatusReportType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* ContactVisualClassificationStatusReportType */

