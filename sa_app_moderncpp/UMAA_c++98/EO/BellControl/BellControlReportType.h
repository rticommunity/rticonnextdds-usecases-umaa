

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from BellControlReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef BellControlReportType_1875897010_h
#define BellControlReportType_1875897010_h

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

static const DDS_Char * const UMAA_EO_BellControl_BellControlReport_TOPIC= "UMAA::EO::BellControl::BellControlReport";

extern "C" {

    extern const char *UMAA_EO_BellControl_BellControlReportTypeTYPENAME;

}

struct UMAA_EO_BellControl_BellControlReportTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_EO_BellControl_BellControlReportTypeTypeSupport;
class UMAA_EO_BellControl_BellControlReportTypeDataWriter;
class UMAA_EO_BellControl_BellControlReportTypeDataReader;
#endif
class UMAA_EO_BellControl_BellControlReportType 
{
  public:
    typedef struct UMAA_EO_BellControl_BellControlReportTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_EO_BellControl_BellControlReportTypeTypeSupport TypeSupport;
    typedef UMAA_EO_BellControl_BellControlReportTypeDataWriter DataWriter;
    typedef UMAA_EO_BellControl_BellControlReportTypeDataReader DataReader;
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
NDDSUSERDllExport DDS_TypeCode * UMAA_EO_BellControl_BellControlReportType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_EO_BellControl_BellControlReportType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_EO_BellControl_BellControlReportType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_EO_BellControl_BellControlReportType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_EO_BellControl_BellControlReportTypeSeq, UMAA_EO_BellControl_BellControlReportType);

NDDSUSERDllExport
RTIBool UMAA_EO_BellControl_BellControlReportType_initialize(
    UMAA_EO_BellControl_BellControlReportType* self);

NDDSUSERDllExport
RTIBool UMAA_EO_BellControl_BellControlReportType_initialize_ex(
    UMAA_EO_BellControl_BellControlReportType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_EO_BellControl_BellControlReportType_initialize_w_params(
    UMAA_EO_BellControl_BellControlReportType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_EO_BellControl_BellControlReportType_finalize_w_return(
    UMAA_EO_BellControl_BellControlReportType* self);

NDDSUSERDllExport
void UMAA_EO_BellControl_BellControlReportType_finalize(
    UMAA_EO_BellControl_BellControlReportType* self);

NDDSUSERDllExport
void UMAA_EO_BellControl_BellControlReportType_finalize_ex(
    UMAA_EO_BellControl_BellControlReportType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_EO_BellControl_BellControlReportType_finalize_w_params(
    UMAA_EO_BellControl_BellControlReportType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_EO_BellControl_BellControlReportType_finalize_optional_members(
    UMAA_EO_BellControl_BellControlReportType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_EO_BellControl_BellControlReportType_copy(
    UMAA_EO_BellControl_BellControlReportType* dst,
    const UMAA_EO_BellControl_BellControlReportType* src);

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
        struct type_code< UMAA_EO_BellControl_BellControlReportType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* BellControlReportType */

