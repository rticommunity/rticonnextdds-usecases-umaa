

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GlobalRegularPolygonExecutionStatusReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef GlobalRegularPolygonExecutionStatusReportType_1602789940_h
#define GlobalRegularPolygonExecutionStatusReportType_1602789940_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "UMAA/Common/Measurement/Measurements.h"
#include "UMAA/MO/GlobalRegularPolygonState/GlobalRegularPolygonStateType.h"

static const DDS_Char * const UMAA_MO_GlobalRegularPolygonControl_GlobalRegularPolygonExecutionStatusReport_TOPIC= "UMAA::MO::GlobalRegularPolygonControl::GlobalRegularPolygonExecutionStatusReport";

extern "C" {

    extern const char *UMAA_MO_GlobalRegularPolygonControl_GlobalRegularPolygonExecutionStatusReportTypeTYPENAME;

}

struct UMAA_MO_GlobalRegularPolygonControl_GlobalRegularPolygonExecutionStatusReportTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_MO_GlobalRegularPolygonControl_GlobalRegularPolygonExecutionStatusReportTypeTypeSupport;
class UMAA_MO_GlobalRegularPolygonControl_GlobalRegularPolygonExecutionStatusReportTypeDataWriter;
class UMAA_MO_GlobalRegularPolygonControl_GlobalRegularPolygonExecutionStatusReportTypeDataReader;
#endif
class UMAA_MO_GlobalRegularPolygonControl_GlobalRegularPolygonExecutionStatusReportType 
{
  public:
    typedef struct UMAA_MO_GlobalRegularPolygonControl_GlobalRegularPolygonExecutionStatusReportTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_MO_GlobalRegularPolygonControl_GlobalRegularPolygonExecutionStatusReportTypeTypeSupport TypeSupport;
    typedef UMAA_MO_GlobalRegularPolygonControl_GlobalRegularPolygonExecutionStatusReportTypeDataWriter DataWriter;
    typedef UMAA_MO_GlobalRegularPolygonControl_GlobalRegularPolygonExecutionStatusReportTypeDataReader DataReader;
    #endif

    UMAA_MO_GlobalRegularPolygonState_GlobalRegularPolygonStateType   globalRegularPolygonState ;
    UMAA_Common_Measurement_DateTime   timePatternAchieved ;
    UMAA_Common_Measurement_DateTime   * timePatternCompleted ;
    UMAA_Common_Measurement_NumericGUID   source ;
    UMAA_Common_Measurement_NumericGUID   sessionID ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_MO_GlobalRegularPolygonControl_GlobalRegularPolygonExecutionStatusReportType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_MO_GlobalRegularPolygonControl_GlobalRegularPolygonExecutionStatusReportType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MO_GlobalRegularPolygonControl_GlobalRegularPolygonExecutionStatusReportType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MO_GlobalRegularPolygonControl_GlobalRegularPolygonExecutionStatusReportType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_MO_GlobalRegularPolygonControl_GlobalRegularPolygonExecutionStatusReportTypeSeq, UMAA_MO_GlobalRegularPolygonControl_GlobalRegularPolygonExecutionStatusReportType);

NDDSUSERDllExport
RTIBool UMAA_MO_GlobalRegularPolygonControl_GlobalRegularPolygonExecutionStatusReportType_initialize(
    UMAA_MO_GlobalRegularPolygonControl_GlobalRegularPolygonExecutionStatusReportType* self);

NDDSUSERDllExport
RTIBool UMAA_MO_GlobalRegularPolygonControl_GlobalRegularPolygonExecutionStatusReportType_initialize_ex(
    UMAA_MO_GlobalRegularPolygonControl_GlobalRegularPolygonExecutionStatusReportType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_MO_GlobalRegularPolygonControl_GlobalRegularPolygonExecutionStatusReportType_initialize_w_params(
    UMAA_MO_GlobalRegularPolygonControl_GlobalRegularPolygonExecutionStatusReportType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_MO_GlobalRegularPolygonControl_GlobalRegularPolygonExecutionStatusReportType_finalize_w_return(
    UMAA_MO_GlobalRegularPolygonControl_GlobalRegularPolygonExecutionStatusReportType* self);

NDDSUSERDllExport
void UMAA_MO_GlobalRegularPolygonControl_GlobalRegularPolygonExecutionStatusReportType_finalize(
    UMAA_MO_GlobalRegularPolygonControl_GlobalRegularPolygonExecutionStatusReportType* self);

NDDSUSERDllExport
void UMAA_MO_GlobalRegularPolygonControl_GlobalRegularPolygonExecutionStatusReportType_finalize_ex(
    UMAA_MO_GlobalRegularPolygonControl_GlobalRegularPolygonExecutionStatusReportType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_MO_GlobalRegularPolygonControl_GlobalRegularPolygonExecutionStatusReportType_finalize_w_params(
    UMAA_MO_GlobalRegularPolygonControl_GlobalRegularPolygonExecutionStatusReportType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_MO_GlobalRegularPolygonControl_GlobalRegularPolygonExecutionStatusReportType_finalize_optional_members(
    UMAA_MO_GlobalRegularPolygonControl_GlobalRegularPolygonExecutionStatusReportType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_MO_GlobalRegularPolygonControl_GlobalRegularPolygonExecutionStatusReportType_copy(
    UMAA_MO_GlobalRegularPolygonControl_GlobalRegularPolygonExecutionStatusReportType* dst,
    const UMAA_MO_GlobalRegularPolygonControl_GlobalRegularPolygonExecutionStatusReportType* src);

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
        struct type_code< UMAA_MO_GlobalRegularPolygonControl_GlobalRegularPolygonExecutionStatusReportType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* GlobalRegularPolygonExecutionStatusReportType */

