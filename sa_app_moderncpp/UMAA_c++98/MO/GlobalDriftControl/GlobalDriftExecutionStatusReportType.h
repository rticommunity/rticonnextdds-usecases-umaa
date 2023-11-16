

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GlobalDriftExecutionStatusReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef GlobalDriftExecutionStatusReportType_37032204_h
#define GlobalDriftExecutionStatusReportType_37032204_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "UMAA/Common/Measurement/Measurements.h"
#include "UMAA/MO/GlobalDriftState/GlobalDriftStateType.h"

static const DDS_Char * const UMAA_MO_GlobalDriftControl_GlobalDriftExecutionStatusReport_TOPIC= "UMAA::MO::GlobalDriftControl::GlobalDriftExecutionStatusReport";

extern "C" {

    extern const char *UMAA_MO_GlobalDriftControl_GlobalDriftExecutionStatusReportTypeTYPENAME;

}

struct UMAA_MO_GlobalDriftControl_GlobalDriftExecutionStatusReportTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_MO_GlobalDriftControl_GlobalDriftExecutionStatusReportTypeTypeSupport;
class UMAA_MO_GlobalDriftControl_GlobalDriftExecutionStatusReportTypeDataWriter;
class UMAA_MO_GlobalDriftControl_GlobalDriftExecutionStatusReportTypeDataReader;
#endif
class UMAA_MO_GlobalDriftControl_GlobalDriftExecutionStatusReportType 
{
  public:
    typedef struct UMAA_MO_GlobalDriftControl_GlobalDriftExecutionStatusReportTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_MO_GlobalDriftControl_GlobalDriftExecutionStatusReportTypeTypeSupport TypeSupport;
    typedef UMAA_MO_GlobalDriftControl_GlobalDriftExecutionStatusReportTypeDataWriter DataWriter;
    typedef UMAA_MO_GlobalDriftControl_GlobalDriftExecutionStatusReportTypeDataReader DataReader;
    #endif

    DDS_Double   distanceFromReference ;
    UMAA_MO_GlobalDriftState_GlobalDriftStateType   globalDriftState ;
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
NDDSUSERDllExport DDS_TypeCode * UMAA_MO_GlobalDriftControl_GlobalDriftExecutionStatusReportType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_MO_GlobalDriftControl_GlobalDriftExecutionStatusReportType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MO_GlobalDriftControl_GlobalDriftExecutionStatusReportType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MO_GlobalDriftControl_GlobalDriftExecutionStatusReportType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_MO_GlobalDriftControl_GlobalDriftExecutionStatusReportTypeSeq, UMAA_MO_GlobalDriftControl_GlobalDriftExecutionStatusReportType);

NDDSUSERDllExport
RTIBool UMAA_MO_GlobalDriftControl_GlobalDriftExecutionStatusReportType_initialize(
    UMAA_MO_GlobalDriftControl_GlobalDriftExecutionStatusReportType* self);

NDDSUSERDllExport
RTIBool UMAA_MO_GlobalDriftControl_GlobalDriftExecutionStatusReportType_initialize_ex(
    UMAA_MO_GlobalDriftControl_GlobalDriftExecutionStatusReportType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_MO_GlobalDriftControl_GlobalDriftExecutionStatusReportType_initialize_w_params(
    UMAA_MO_GlobalDriftControl_GlobalDriftExecutionStatusReportType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_MO_GlobalDriftControl_GlobalDriftExecutionStatusReportType_finalize_w_return(
    UMAA_MO_GlobalDriftControl_GlobalDriftExecutionStatusReportType* self);

NDDSUSERDllExport
void UMAA_MO_GlobalDriftControl_GlobalDriftExecutionStatusReportType_finalize(
    UMAA_MO_GlobalDriftControl_GlobalDriftExecutionStatusReportType* self);

NDDSUSERDllExport
void UMAA_MO_GlobalDriftControl_GlobalDriftExecutionStatusReportType_finalize_ex(
    UMAA_MO_GlobalDriftControl_GlobalDriftExecutionStatusReportType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_MO_GlobalDriftControl_GlobalDriftExecutionStatusReportType_finalize_w_params(
    UMAA_MO_GlobalDriftControl_GlobalDriftExecutionStatusReportType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_MO_GlobalDriftControl_GlobalDriftExecutionStatusReportType_finalize_optional_members(
    UMAA_MO_GlobalDriftControl_GlobalDriftExecutionStatusReportType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_MO_GlobalDriftControl_GlobalDriftExecutionStatusReportType_copy(
    UMAA_MO_GlobalDriftControl_GlobalDriftExecutionStatusReportType* dst,
    const UMAA_MO_GlobalDriftControl_GlobalDriftExecutionStatusReportType* src);

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
        struct type_code< UMAA_MO_GlobalDriftControl_GlobalDriftExecutionStatusReportType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* GlobalDriftExecutionStatusReportType */

