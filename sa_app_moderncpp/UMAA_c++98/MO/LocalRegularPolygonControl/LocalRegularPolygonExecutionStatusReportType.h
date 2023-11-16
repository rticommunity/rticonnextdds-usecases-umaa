

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from LocalRegularPolygonExecutionStatusReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef LocalRegularPolygonExecutionStatusReportType_1097927053_h
#define LocalRegularPolygonExecutionStatusReportType_1097927053_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "UMAA/Common/Measurement/Measurements.h"
#include "UMAA/MO/LocalRegularPolygonState/LocalRegularPolygonStateType.h"

static const DDS_Char * const UMAA_MO_LocalRegularPolygonControl_LocalRegularPolygonExecutionStatusReport_TOPIC= "UMAA::MO::LocalRegularPolygonControl::LocalRegularPolygonExecutionStatusReport";

extern "C" {

    extern const char *UMAA_MO_LocalRegularPolygonControl_LocalRegularPolygonExecutionStatusReportTypeTYPENAME;

}

struct UMAA_MO_LocalRegularPolygonControl_LocalRegularPolygonExecutionStatusReportTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_MO_LocalRegularPolygonControl_LocalRegularPolygonExecutionStatusReportTypeTypeSupport;
class UMAA_MO_LocalRegularPolygonControl_LocalRegularPolygonExecutionStatusReportTypeDataWriter;
class UMAA_MO_LocalRegularPolygonControl_LocalRegularPolygonExecutionStatusReportTypeDataReader;
#endif
class UMAA_MO_LocalRegularPolygonControl_LocalRegularPolygonExecutionStatusReportType 
{
  public:
    typedef struct UMAA_MO_LocalRegularPolygonControl_LocalRegularPolygonExecutionStatusReportTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_MO_LocalRegularPolygonControl_LocalRegularPolygonExecutionStatusReportTypeTypeSupport TypeSupport;
    typedef UMAA_MO_LocalRegularPolygonControl_LocalRegularPolygonExecutionStatusReportTypeDataWriter DataWriter;
    typedef UMAA_MO_LocalRegularPolygonControl_LocalRegularPolygonExecutionStatusReportTypeDataReader DataReader;
    #endif

    UMAA_MO_LocalRegularPolygonState_LocalRegularPolygonStateType   localRegularPolygonState ;
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
NDDSUSERDllExport DDS_TypeCode * UMAA_MO_LocalRegularPolygonControl_LocalRegularPolygonExecutionStatusReportType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_MO_LocalRegularPolygonControl_LocalRegularPolygonExecutionStatusReportType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MO_LocalRegularPolygonControl_LocalRegularPolygonExecutionStatusReportType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MO_LocalRegularPolygonControl_LocalRegularPolygonExecutionStatusReportType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_MO_LocalRegularPolygonControl_LocalRegularPolygonExecutionStatusReportTypeSeq, UMAA_MO_LocalRegularPolygonControl_LocalRegularPolygonExecutionStatusReportType);

NDDSUSERDllExport
RTIBool UMAA_MO_LocalRegularPolygonControl_LocalRegularPolygonExecutionStatusReportType_initialize(
    UMAA_MO_LocalRegularPolygonControl_LocalRegularPolygonExecutionStatusReportType* self);

NDDSUSERDllExport
RTIBool UMAA_MO_LocalRegularPolygonControl_LocalRegularPolygonExecutionStatusReportType_initialize_ex(
    UMAA_MO_LocalRegularPolygonControl_LocalRegularPolygonExecutionStatusReportType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_MO_LocalRegularPolygonControl_LocalRegularPolygonExecutionStatusReportType_initialize_w_params(
    UMAA_MO_LocalRegularPolygonControl_LocalRegularPolygonExecutionStatusReportType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_MO_LocalRegularPolygonControl_LocalRegularPolygonExecutionStatusReportType_finalize_w_return(
    UMAA_MO_LocalRegularPolygonControl_LocalRegularPolygonExecutionStatusReportType* self);

NDDSUSERDllExport
void UMAA_MO_LocalRegularPolygonControl_LocalRegularPolygonExecutionStatusReportType_finalize(
    UMAA_MO_LocalRegularPolygonControl_LocalRegularPolygonExecutionStatusReportType* self);

NDDSUSERDllExport
void UMAA_MO_LocalRegularPolygonControl_LocalRegularPolygonExecutionStatusReportType_finalize_ex(
    UMAA_MO_LocalRegularPolygonControl_LocalRegularPolygonExecutionStatusReportType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_MO_LocalRegularPolygonControl_LocalRegularPolygonExecutionStatusReportType_finalize_w_params(
    UMAA_MO_LocalRegularPolygonControl_LocalRegularPolygonExecutionStatusReportType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_MO_LocalRegularPolygonControl_LocalRegularPolygonExecutionStatusReportType_finalize_optional_members(
    UMAA_MO_LocalRegularPolygonControl_LocalRegularPolygonExecutionStatusReportType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_MO_LocalRegularPolygonControl_LocalRegularPolygonExecutionStatusReportType_copy(
    UMAA_MO_LocalRegularPolygonControl_LocalRegularPolygonExecutionStatusReportType* dst,
    const UMAA_MO_LocalRegularPolygonControl_LocalRegularPolygonExecutionStatusReportType* src);

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
        struct type_code< UMAA_MO_LocalRegularPolygonControl_LocalRegularPolygonExecutionStatusReportType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* LocalRegularPolygonExecutionStatusReportType */

