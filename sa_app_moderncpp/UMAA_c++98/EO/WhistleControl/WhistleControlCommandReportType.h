

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from WhistleControlCommandReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef WhistleControlCommandReportType_565876080_h
#define WhistleControlCommandReportType_565876080_h

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
#include "UMAA/Common/Propulsion/WhistlePropertiesType.h"

static const DDS_Char * const UMAA_EO_WhistleControl_WhistleControlCommandReport_TOPIC= "UMAA::EO::WhistleControl::WhistleControlCommandReport";

extern "C" {

    extern const char *UMAA_EO_WhistleControl_WhistleControlCommandReportTypeTYPENAME;

}

struct UMAA_EO_WhistleControl_WhistleControlCommandReportTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_EO_WhistleControl_WhistleControlCommandReportTypeTypeSupport;
class UMAA_EO_WhistleControl_WhistleControlCommandReportTypeDataWriter;
class UMAA_EO_WhistleControl_WhistleControlCommandReportTypeDataReader;
#endif
class UMAA_EO_WhistleControl_WhistleControlCommandReportType 
{
  public:
    typedef struct UMAA_EO_WhistleControl_WhistleControlCommandReportTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_EO_WhistleControl_WhistleControlCommandReportTypeTypeSupport TypeSupport;
    typedef UMAA_EO_WhistleControl_WhistleControlCommandReportTypeDataWriter DataWriter;
    typedef UMAA_EO_WhistleControl_WhistleControlCommandReportTypeDataReader DataReader;
    #endif

    UMAA_Common_Enumeration_OnOffStatusEnumType_OnOffStatusEnumType   status ;
    UMAA_Common_Propulsion_WhistlePropertiesType   * whistleProperties ;
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
NDDSUSERDllExport DDS_TypeCode * UMAA_EO_WhistleControl_WhistleControlCommandReportType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_EO_WhistleControl_WhistleControlCommandReportType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_EO_WhistleControl_WhistleControlCommandReportType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_EO_WhistleControl_WhistleControlCommandReportType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_EO_WhistleControl_WhistleControlCommandReportTypeSeq, UMAA_EO_WhistleControl_WhistleControlCommandReportType);

NDDSUSERDllExport
RTIBool UMAA_EO_WhistleControl_WhistleControlCommandReportType_initialize(
    UMAA_EO_WhistleControl_WhistleControlCommandReportType* self);

NDDSUSERDllExport
RTIBool UMAA_EO_WhistleControl_WhistleControlCommandReportType_initialize_ex(
    UMAA_EO_WhistleControl_WhistleControlCommandReportType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_EO_WhistleControl_WhistleControlCommandReportType_initialize_w_params(
    UMAA_EO_WhistleControl_WhistleControlCommandReportType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_EO_WhistleControl_WhistleControlCommandReportType_finalize_w_return(
    UMAA_EO_WhistleControl_WhistleControlCommandReportType* self);

NDDSUSERDllExport
void UMAA_EO_WhistleControl_WhistleControlCommandReportType_finalize(
    UMAA_EO_WhistleControl_WhistleControlCommandReportType* self);

NDDSUSERDllExport
void UMAA_EO_WhistleControl_WhistleControlCommandReportType_finalize_ex(
    UMAA_EO_WhistleControl_WhistleControlCommandReportType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_EO_WhistleControl_WhistleControlCommandReportType_finalize_w_params(
    UMAA_EO_WhistleControl_WhistleControlCommandReportType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_EO_WhistleControl_WhistleControlCommandReportType_finalize_optional_members(
    UMAA_EO_WhistleControl_WhistleControlCommandReportType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_EO_WhistleControl_WhistleControlCommandReportType_copy(
    UMAA_EO_WhistleControl_WhistleControlCommandReportType* dst,
    const UMAA_EO_WhistleControl_WhistleControlCommandReportType* src);

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
        struct type_code< UMAA_EO_WhistleControl_WhistleControlCommandReportType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* WhistleControlCommandReportType */

