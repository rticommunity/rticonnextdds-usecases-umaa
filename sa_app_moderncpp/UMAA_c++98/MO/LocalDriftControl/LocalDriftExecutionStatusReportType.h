

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from LocalDriftExecutionStatusReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef LocalDriftExecutionStatusReportType_939127679_h
#define LocalDriftExecutionStatusReportType_939127679_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "UMAA/Common/Measurement/Measurements.h"
#include "UMAA/MO/LocalDriftState/LocalDriftStateType.h"

static const DDS_Char * const UMAA_MO_LocalDriftControl_LocalDriftExecutionStatusReport_TOPIC= "UMAA::MO::LocalDriftControl::LocalDriftExecutionStatusReport";

extern "C" {

    extern const char *UMAA_MO_LocalDriftControl_LocalDriftExecutionStatusReportTypeTYPENAME;

}

struct UMAA_MO_LocalDriftControl_LocalDriftExecutionStatusReportTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_MO_LocalDriftControl_LocalDriftExecutionStatusReportTypeTypeSupport;
class UMAA_MO_LocalDriftControl_LocalDriftExecutionStatusReportTypeDataWriter;
class UMAA_MO_LocalDriftControl_LocalDriftExecutionStatusReportTypeDataReader;
#endif
class UMAA_MO_LocalDriftControl_LocalDriftExecutionStatusReportType 
{
  public:
    typedef struct UMAA_MO_LocalDriftControl_LocalDriftExecutionStatusReportTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_MO_LocalDriftControl_LocalDriftExecutionStatusReportTypeTypeSupport TypeSupport;
    typedef UMAA_MO_LocalDriftControl_LocalDriftExecutionStatusReportTypeDataWriter DataWriter;
    typedef UMAA_MO_LocalDriftControl_LocalDriftExecutionStatusReportTypeDataReader DataReader;
    #endif

    DDS_Double   distanceFromReference ;
    UMAA_MO_LocalDriftState_LocalDriftStateType   localDriftState ;
    UMAA_Common_Measurement_DateTime   timeDriftAchieved ;
    UMAA_Common_Measurement_DateTime   * timeDriftCompleted ;
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
NDDSUSERDllExport DDS_TypeCode * UMAA_MO_LocalDriftControl_LocalDriftExecutionStatusReportType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_MO_LocalDriftControl_LocalDriftExecutionStatusReportType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MO_LocalDriftControl_LocalDriftExecutionStatusReportType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MO_LocalDriftControl_LocalDriftExecutionStatusReportType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_MO_LocalDriftControl_LocalDriftExecutionStatusReportTypeSeq, UMAA_MO_LocalDriftControl_LocalDriftExecutionStatusReportType);

NDDSUSERDllExport
RTIBool UMAA_MO_LocalDriftControl_LocalDriftExecutionStatusReportType_initialize(
    UMAA_MO_LocalDriftControl_LocalDriftExecutionStatusReportType* self);

NDDSUSERDllExport
RTIBool UMAA_MO_LocalDriftControl_LocalDriftExecutionStatusReportType_initialize_ex(
    UMAA_MO_LocalDriftControl_LocalDriftExecutionStatusReportType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_MO_LocalDriftControl_LocalDriftExecutionStatusReportType_initialize_w_params(
    UMAA_MO_LocalDriftControl_LocalDriftExecutionStatusReportType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_MO_LocalDriftControl_LocalDriftExecutionStatusReportType_finalize_w_return(
    UMAA_MO_LocalDriftControl_LocalDriftExecutionStatusReportType* self);

NDDSUSERDllExport
void UMAA_MO_LocalDriftControl_LocalDriftExecutionStatusReportType_finalize(
    UMAA_MO_LocalDriftControl_LocalDriftExecutionStatusReportType* self);

NDDSUSERDllExport
void UMAA_MO_LocalDriftControl_LocalDriftExecutionStatusReportType_finalize_ex(
    UMAA_MO_LocalDriftControl_LocalDriftExecutionStatusReportType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_MO_LocalDriftControl_LocalDriftExecutionStatusReportType_finalize_w_params(
    UMAA_MO_LocalDriftControl_LocalDriftExecutionStatusReportType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_MO_LocalDriftControl_LocalDriftExecutionStatusReportType_finalize_optional_members(
    UMAA_MO_LocalDriftControl_LocalDriftExecutionStatusReportType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_MO_LocalDriftControl_LocalDriftExecutionStatusReportType_copy(
    UMAA_MO_LocalDriftControl_LocalDriftExecutionStatusReportType* dst,
    const UMAA_MO_LocalDriftControl_LocalDriftExecutionStatusReportType* src);

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
        struct type_code< UMAA_MO_LocalDriftControl_LocalDriftExecutionStatusReportType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* LocalDriftExecutionStatusReportType */

