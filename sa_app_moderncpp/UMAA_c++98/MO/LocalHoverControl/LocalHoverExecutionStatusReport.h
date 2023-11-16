

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from LocalHoverExecutionStatusReport.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef LocalHoverExecutionStatusReport_2136264107_h
#define LocalHoverExecutionStatusReport_2136264107_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "UMAA/Common/Measurement/Measurements.h"
#include "UMAA/MO/LocalHoverState/LocalHoverStateType.h"

extern "C" {

    extern const char *UMAA_MO_LocalHoverControl_LocalHoverExecutionStatusReportTYPENAME;

}

struct UMAA_MO_LocalHoverControl_LocalHoverExecutionStatusReportSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_MO_LocalHoverControl_LocalHoverExecutionStatusReportTypeSupport;
class UMAA_MO_LocalHoverControl_LocalHoverExecutionStatusReportDataWriter;
class UMAA_MO_LocalHoverControl_LocalHoverExecutionStatusReportDataReader;
#endif
class UMAA_MO_LocalHoverControl_LocalHoverExecutionStatusReport 
{
  public:
    typedef struct UMAA_MO_LocalHoverControl_LocalHoverExecutionStatusReportSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_MO_LocalHoverControl_LocalHoverExecutionStatusReportTypeSupport TypeSupport;
    typedef UMAA_MO_LocalHoverControl_LocalHoverExecutionStatusReportDataWriter DataWriter;
    typedef UMAA_MO_LocalHoverControl_LocalHoverExecutionStatusReportDataReader DataReader;
    #endif

    UMAA_MO_LocalHoverState_LocalHoverStateType   localHoverState ;
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
NDDSUSERDllExport DDS_TypeCode * UMAA_MO_LocalHoverControl_LocalHoverExecutionStatusReport_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_MO_LocalHoverControl_LocalHoverExecutionStatusReport_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MO_LocalHoverControl_LocalHoverExecutionStatusReport_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MO_LocalHoverControl_LocalHoverExecutionStatusReport_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_MO_LocalHoverControl_LocalHoverExecutionStatusReportSeq, UMAA_MO_LocalHoverControl_LocalHoverExecutionStatusReport);

NDDSUSERDllExport
RTIBool UMAA_MO_LocalHoverControl_LocalHoverExecutionStatusReport_initialize(
    UMAA_MO_LocalHoverControl_LocalHoverExecutionStatusReport* self);

NDDSUSERDllExport
RTIBool UMAA_MO_LocalHoverControl_LocalHoverExecutionStatusReport_initialize_ex(
    UMAA_MO_LocalHoverControl_LocalHoverExecutionStatusReport* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_MO_LocalHoverControl_LocalHoverExecutionStatusReport_initialize_w_params(
    UMAA_MO_LocalHoverControl_LocalHoverExecutionStatusReport* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_MO_LocalHoverControl_LocalHoverExecutionStatusReport_finalize_w_return(
    UMAA_MO_LocalHoverControl_LocalHoverExecutionStatusReport* self);

NDDSUSERDllExport
void UMAA_MO_LocalHoverControl_LocalHoverExecutionStatusReport_finalize(
    UMAA_MO_LocalHoverControl_LocalHoverExecutionStatusReport* self);

NDDSUSERDllExport
void UMAA_MO_LocalHoverControl_LocalHoverExecutionStatusReport_finalize_ex(
    UMAA_MO_LocalHoverControl_LocalHoverExecutionStatusReport* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_MO_LocalHoverControl_LocalHoverExecutionStatusReport_finalize_w_params(
    UMAA_MO_LocalHoverControl_LocalHoverExecutionStatusReport* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_MO_LocalHoverControl_LocalHoverExecutionStatusReport_finalize_optional_members(
    UMAA_MO_LocalHoverControl_LocalHoverExecutionStatusReport* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_MO_LocalHoverControl_LocalHoverExecutionStatusReport_copy(
    UMAA_MO_LocalHoverControl_LocalHoverExecutionStatusReport* dst,
    const UMAA_MO_LocalHoverControl_LocalHoverExecutionStatusReport* src);

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
        struct type_code< UMAA_MO_LocalHoverControl_LocalHoverExecutionStatusReport> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* LocalHoverExecutionStatusReport */

