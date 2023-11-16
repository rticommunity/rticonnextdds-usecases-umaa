

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GlobalHoverExecutionStatusReport.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef GlobalHoverExecutionStatusReport_460594257_h
#define GlobalHoverExecutionStatusReport_460594257_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "UMAA/Common/Measurement/Measurements.h"
#include "UMAA/MO/GlobalHoverState/GlobalHoverStateType.h"

extern "C" {

    extern const char *UMAA_MO_GlobalHoverControl_GlobalHoverExecutionStatusReportTYPENAME;

}

struct UMAA_MO_GlobalHoverControl_GlobalHoverExecutionStatusReportSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_MO_GlobalHoverControl_GlobalHoverExecutionStatusReportTypeSupport;
class UMAA_MO_GlobalHoverControl_GlobalHoverExecutionStatusReportDataWriter;
class UMAA_MO_GlobalHoverControl_GlobalHoverExecutionStatusReportDataReader;
#endif
class UMAA_MO_GlobalHoverControl_GlobalHoverExecutionStatusReport 
{
  public:
    typedef struct UMAA_MO_GlobalHoverControl_GlobalHoverExecutionStatusReportSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_MO_GlobalHoverControl_GlobalHoverExecutionStatusReportTypeSupport TypeSupport;
    typedef UMAA_MO_GlobalHoverControl_GlobalHoverExecutionStatusReportDataWriter DataWriter;
    typedef UMAA_MO_GlobalHoverControl_GlobalHoverExecutionStatusReportDataReader DataReader;
    #endif

    UMAA_MO_GlobalHoverState_GlobalHoverStateType   globalHoverState ;
    UMAA_Common_Measurement_DateTime   timeHoverAchieved ;
    UMAA_Common_Measurement_DateTime   * timeHoverCompleted ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_MO_GlobalHoverControl_GlobalHoverExecutionStatusReport_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_MO_GlobalHoverControl_GlobalHoverExecutionStatusReport_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MO_GlobalHoverControl_GlobalHoverExecutionStatusReport_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MO_GlobalHoverControl_GlobalHoverExecutionStatusReport_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_MO_GlobalHoverControl_GlobalHoverExecutionStatusReportSeq, UMAA_MO_GlobalHoverControl_GlobalHoverExecutionStatusReport);

NDDSUSERDllExport
RTIBool UMAA_MO_GlobalHoverControl_GlobalHoverExecutionStatusReport_initialize(
    UMAA_MO_GlobalHoverControl_GlobalHoverExecutionStatusReport* self);

NDDSUSERDllExport
RTIBool UMAA_MO_GlobalHoverControl_GlobalHoverExecutionStatusReport_initialize_ex(
    UMAA_MO_GlobalHoverControl_GlobalHoverExecutionStatusReport* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_MO_GlobalHoverControl_GlobalHoverExecutionStatusReport_initialize_w_params(
    UMAA_MO_GlobalHoverControl_GlobalHoverExecutionStatusReport* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_MO_GlobalHoverControl_GlobalHoverExecutionStatusReport_finalize_w_return(
    UMAA_MO_GlobalHoverControl_GlobalHoverExecutionStatusReport* self);

NDDSUSERDllExport
void UMAA_MO_GlobalHoverControl_GlobalHoverExecutionStatusReport_finalize(
    UMAA_MO_GlobalHoverControl_GlobalHoverExecutionStatusReport* self);

NDDSUSERDllExport
void UMAA_MO_GlobalHoverControl_GlobalHoverExecutionStatusReport_finalize_ex(
    UMAA_MO_GlobalHoverControl_GlobalHoverExecutionStatusReport* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_MO_GlobalHoverControl_GlobalHoverExecutionStatusReport_finalize_w_params(
    UMAA_MO_GlobalHoverControl_GlobalHoverExecutionStatusReport* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_MO_GlobalHoverControl_GlobalHoverExecutionStatusReport_finalize_optional_members(
    UMAA_MO_GlobalHoverControl_GlobalHoverExecutionStatusReport* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_MO_GlobalHoverControl_GlobalHoverExecutionStatusReport_copy(
    UMAA_MO_GlobalHoverControl_GlobalHoverExecutionStatusReport* dst,
    const UMAA_MO_GlobalHoverControl_GlobalHoverExecutionStatusReport* src);

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
        struct type_code< UMAA_MO_GlobalHoverControl_GlobalHoverExecutionStatusReport> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* GlobalHoverExecutionStatusReport */

