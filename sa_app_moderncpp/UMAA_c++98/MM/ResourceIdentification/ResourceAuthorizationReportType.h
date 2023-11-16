

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ResourceAuthorizationReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef ResourceAuthorizationReportType_2071143704_h
#define ResourceAuthorizationReportType_2071143704_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "UMAA/Common/Enumeration/EnumerationSets.h"
#include "UMAA/Common/Measurement/Measurements.h"

static const DDS_Char * const UMAA_MM_ResourceIdentification_ResourceAuthorizationReport_TOPIC= "UMAA::MM::ResourceIdentification::ResourceAuthorizationReport";

extern "C" {

    extern const char *UMAA_MM_ResourceIdentification_ResourceAuthorizationReportTypeTYPENAME;

}

struct UMAA_MM_ResourceIdentification_ResourceAuthorizationReportTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_MM_ResourceIdentification_ResourceAuthorizationReportTypeTypeSupport;
class UMAA_MM_ResourceIdentification_ResourceAuthorizationReportTypeDataWriter;
class UMAA_MM_ResourceIdentification_ResourceAuthorizationReportTypeDataReader;
#endif
class UMAA_MM_ResourceIdentification_ResourceAuthorizationReportType 
{
  public:
    typedef struct UMAA_MM_ResourceIdentification_ResourceAuthorizationReportTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_MM_ResourceIdentification_ResourceAuthorizationReportTypeTypeSupport TypeSupport;
    typedef UMAA_MM_ResourceIdentification_ResourceAuthorizationReportTypeDataWriter DataWriter;
    typedef UMAA_MM_ResourceIdentification_ResourceAuthorizationReportTypeDataReader DataReader;
    #endif

    UMAA_Common_Measurement_NumericGUID   source ;
    UMAA_Common_Measurement_DateTime   timeStamp ;
    UMAA_Common_Enumeration_SpecificLOIEnumType_SpecificLOIEnumType   authorizationLevel ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_MM_ResourceIdentification_ResourceAuthorizationReportType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_MM_ResourceIdentification_ResourceAuthorizationReportType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MM_ResourceIdentification_ResourceAuthorizationReportType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MM_ResourceIdentification_ResourceAuthorizationReportType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_MM_ResourceIdentification_ResourceAuthorizationReportTypeSeq, UMAA_MM_ResourceIdentification_ResourceAuthorizationReportType);

NDDSUSERDllExport
RTIBool UMAA_MM_ResourceIdentification_ResourceAuthorizationReportType_initialize(
    UMAA_MM_ResourceIdentification_ResourceAuthorizationReportType* self);

NDDSUSERDllExport
RTIBool UMAA_MM_ResourceIdentification_ResourceAuthorizationReportType_initialize_ex(
    UMAA_MM_ResourceIdentification_ResourceAuthorizationReportType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_MM_ResourceIdentification_ResourceAuthorizationReportType_initialize_w_params(
    UMAA_MM_ResourceIdentification_ResourceAuthorizationReportType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_MM_ResourceIdentification_ResourceAuthorizationReportType_finalize_w_return(
    UMAA_MM_ResourceIdentification_ResourceAuthorizationReportType* self);

NDDSUSERDllExport
void UMAA_MM_ResourceIdentification_ResourceAuthorizationReportType_finalize(
    UMAA_MM_ResourceIdentification_ResourceAuthorizationReportType* self);

NDDSUSERDllExport
void UMAA_MM_ResourceIdentification_ResourceAuthorizationReportType_finalize_ex(
    UMAA_MM_ResourceIdentification_ResourceAuthorizationReportType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_MM_ResourceIdentification_ResourceAuthorizationReportType_finalize_w_params(
    UMAA_MM_ResourceIdentification_ResourceAuthorizationReportType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_MM_ResourceIdentification_ResourceAuthorizationReportType_finalize_optional_members(
    UMAA_MM_ResourceIdentification_ResourceAuthorizationReportType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_MM_ResourceIdentification_ResourceAuthorizationReportType_copy(
    UMAA_MM_ResourceIdentification_ResourceAuthorizationReportType* dst,
    const UMAA_MM_ResourceIdentification_ResourceAuthorizationReportType* src);

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
        struct type_code< UMAA_MM_ResourceIdentification_ResourceAuthorizationReportType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* ResourceAuthorizationReportType */

