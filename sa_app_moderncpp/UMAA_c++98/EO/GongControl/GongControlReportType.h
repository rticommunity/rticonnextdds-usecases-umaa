

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GongControlReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef GongControlReportType_252200848_h
#define GongControlReportType_252200848_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "UMAA/Common/Enumeration/EnumerationSets.h"
#include "UMAA/Common/MaritimeEnumeration/EnumerationSets.h"
#include "UMAA/Common/Measurement/Measurements.h"

static const DDS_Char * const UMAA_EO_GongControl_GongControlReport_TOPIC= "UMAA::EO::GongControl::GongControlReport";

extern "C" {

    extern const char *UMAA_EO_GongControl_GongControlReportTypeTYPENAME;

}

struct UMAA_EO_GongControl_GongControlReportTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_EO_GongControl_GongControlReportTypeTypeSupport;
class UMAA_EO_GongControl_GongControlReportTypeDataWriter;
class UMAA_EO_GongControl_GongControlReportTypeDataReader;
#endif
class UMAA_EO_GongControl_GongControlReportType 
{
  public:
    typedef struct UMAA_EO_GongControl_GongControlReportTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_EO_GongControl_GongControlReportTypeTypeSupport TypeSupport;
    typedef UMAA_EO_GongControl_GongControlReportTypeDataWriter DataWriter;
    typedef UMAA_EO_GongControl_GongControlReportTypeDataReader DataReader;
    #endif

    UMAA_Common_MaritimeEnumeration_BlastConditionEnumType_BlastConditionEnumType   * blastCondition ;
    DDS_Double   * blastNumber ;
    UMAA_Common_Enumeration_OnOffStatusEnumType_OnOffStatusEnumType   status ;
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
NDDSUSERDllExport DDS_TypeCode * UMAA_EO_GongControl_GongControlReportType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_EO_GongControl_GongControlReportType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_EO_GongControl_GongControlReportType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_EO_GongControl_GongControlReportType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_EO_GongControl_GongControlReportTypeSeq, UMAA_EO_GongControl_GongControlReportType);

NDDSUSERDllExport
RTIBool UMAA_EO_GongControl_GongControlReportType_initialize(
    UMAA_EO_GongControl_GongControlReportType* self);

NDDSUSERDllExport
RTIBool UMAA_EO_GongControl_GongControlReportType_initialize_ex(
    UMAA_EO_GongControl_GongControlReportType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_EO_GongControl_GongControlReportType_initialize_w_params(
    UMAA_EO_GongControl_GongControlReportType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_EO_GongControl_GongControlReportType_finalize_w_return(
    UMAA_EO_GongControl_GongControlReportType* self);

NDDSUSERDllExport
void UMAA_EO_GongControl_GongControlReportType_finalize(
    UMAA_EO_GongControl_GongControlReportType* self);

NDDSUSERDllExport
void UMAA_EO_GongControl_GongControlReportType_finalize_ex(
    UMAA_EO_GongControl_GongControlReportType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_EO_GongControl_GongControlReportType_finalize_w_params(
    UMAA_EO_GongControl_GongControlReportType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_EO_GongControl_GongControlReportType_finalize_optional_members(
    UMAA_EO_GongControl_GongControlReportType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_EO_GongControl_GongControlReportType_copy(
    UMAA_EO_GongControl_GongControlReportType* dst,
    const UMAA_EO_GongControl_GongControlReportType* src);

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
        struct type_code< UMAA_EO_GongControl_GongControlReportType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* GongControlReportType */

