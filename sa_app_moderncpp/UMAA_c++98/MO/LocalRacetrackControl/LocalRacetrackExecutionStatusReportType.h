

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from LocalRacetrackExecutionStatusReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef LocalRacetrackExecutionStatusReportType_1799948039_h
#define LocalRacetrackExecutionStatusReportType_1799948039_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "UMAA/Common/Measurement/Measurements.h"
#include "UMAA/MO/LocalRacetrackState/LocalRacetrackStateType.h"

static const DDS_Char * const UMAA_MO_LocalRacetrackControl_LocalRacetrackExecutionStatusReport_TOPIC= "UMAA::MO::LocalRacetrackControl::LocalRacetrackExecutionStatusReport";

extern "C" {

    extern const char *UMAA_MO_LocalRacetrackControl_LocalRacetrackExecutionStatusReportTypeTYPENAME;

}

struct UMAA_MO_LocalRacetrackControl_LocalRacetrackExecutionStatusReportTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_MO_LocalRacetrackControl_LocalRacetrackExecutionStatusReportTypeTypeSupport;
class UMAA_MO_LocalRacetrackControl_LocalRacetrackExecutionStatusReportTypeDataWriter;
class UMAA_MO_LocalRacetrackControl_LocalRacetrackExecutionStatusReportTypeDataReader;
#endif
class UMAA_MO_LocalRacetrackControl_LocalRacetrackExecutionStatusReportType 
{
  public:
    typedef struct UMAA_MO_LocalRacetrackControl_LocalRacetrackExecutionStatusReportTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_MO_LocalRacetrackControl_LocalRacetrackExecutionStatusReportTypeTypeSupport TypeSupport;
    typedef UMAA_MO_LocalRacetrackControl_LocalRacetrackExecutionStatusReportTypeDataWriter DataWriter;
    typedef UMAA_MO_LocalRacetrackControl_LocalRacetrackExecutionStatusReportTypeDataReader DataReader;
    #endif

    UMAA_MO_LocalRacetrackState_LocalRacetrackStateType   localRacetrackState ;
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
NDDSUSERDllExport DDS_TypeCode * UMAA_MO_LocalRacetrackControl_LocalRacetrackExecutionStatusReportType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_MO_LocalRacetrackControl_LocalRacetrackExecutionStatusReportType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MO_LocalRacetrackControl_LocalRacetrackExecutionStatusReportType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MO_LocalRacetrackControl_LocalRacetrackExecutionStatusReportType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_MO_LocalRacetrackControl_LocalRacetrackExecutionStatusReportTypeSeq, UMAA_MO_LocalRacetrackControl_LocalRacetrackExecutionStatusReportType);

NDDSUSERDllExport
RTIBool UMAA_MO_LocalRacetrackControl_LocalRacetrackExecutionStatusReportType_initialize(
    UMAA_MO_LocalRacetrackControl_LocalRacetrackExecutionStatusReportType* self);

NDDSUSERDllExport
RTIBool UMAA_MO_LocalRacetrackControl_LocalRacetrackExecutionStatusReportType_initialize_ex(
    UMAA_MO_LocalRacetrackControl_LocalRacetrackExecutionStatusReportType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_MO_LocalRacetrackControl_LocalRacetrackExecutionStatusReportType_initialize_w_params(
    UMAA_MO_LocalRacetrackControl_LocalRacetrackExecutionStatusReportType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_MO_LocalRacetrackControl_LocalRacetrackExecutionStatusReportType_finalize_w_return(
    UMAA_MO_LocalRacetrackControl_LocalRacetrackExecutionStatusReportType* self);

NDDSUSERDllExport
void UMAA_MO_LocalRacetrackControl_LocalRacetrackExecutionStatusReportType_finalize(
    UMAA_MO_LocalRacetrackControl_LocalRacetrackExecutionStatusReportType* self);

NDDSUSERDllExport
void UMAA_MO_LocalRacetrackControl_LocalRacetrackExecutionStatusReportType_finalize_ex(
    UMAA_MO_LocalRacetrackControl_LocalRacetrackExecutionStatusReportType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_MO_LocalRacetrackControl_LocalRacetrackExecutionStatusReportType_finalize_w_params(
    UMAA_MO_LocalRacetrackControl_LocalRacetrackExecutionStatusReportType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_MO_LocalRacetrackControl_LocalRacetrackExecutionStatusReportType_finalize_optional_members(
    UMAA_MO_LocalRacetrackControl_LocalRacetrackExecutionStatusReportType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_MO_LocalRacetrackControl_LocalRacetrackExecutionStatusReportType_copy(
    UMAA_MO_LocalRacetrackControl_LocalRacetrackExecutionStatusReportType* dst,
    const UMAA_MO_LocalRacetrackControl_LocalRacetrackExecutionStatusReportType* src);

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
        struct type_code< UMAA_MO_LocalRacetrackControl_LocalRacetrackExecutionStatusReportType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* LocalRacetrackExecutionStatusReportType */

