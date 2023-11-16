

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from PanTiltJointEffortReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef PanTiltJointEffortReportType_1823357734_h
#define PanTiltJointEffortReportType_1823357734_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "UMAA/Common/Measurement/Measurements.h"

static const DDS_Char * const UMAA_SEM_PanTiltJointEffortStatus_PanTiltJointEffortReport_TOPIC= "UMAA::SEM::PanTiltJointEffortStatus::PanTiltJointEffortReport";

extern "C" {

    extern const char *UMAA_SEM_PanTiltJointEffortStatus_PanTiltJointEffortReportTypeTYPENAME;

}

struct UMAA_SEM_PanTiltJointEffortStatus_PanTiltJointEffortReportTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_SEM_PanTiltJointEffortStatus_PanTiltJointEffortReportTypeTypeSupport;
class UMAA_SEM_PanTiltJointEffortStatus_PanTiltJointEffortReportTypeDataWriter;
class UMAA_SEM_PanTiltJointEffortStatus_PanTiltJointEffortReportTypeDataReader;
#endif
class UMAA_SEM_PanTiltJointEffortStatus_PanTiltJointEffortReportType 
{
  public:
    typedef struct UMAA_SEM_PanTiltJointEffortStatus_PanTiltJointEffortReportTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_SEM_PanTiltJointEffortStatus_PanTiltJointEffortReportTypeTypeSupport TypeSupport;
    typedef UMAA_SEM_PanTiltJointEffortStatus_PanTiltJointEffortReportTypeDataWriter DataWriter;
    typedef UMAA_SEM_PanTiltJointEffortStatus_PanTiltJointEffortReportTypeDataReader DataReader;
    #endif

    DDS_Double   panEffort ;
    DDS_Double   tiltEffort ;
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
NDDSUSERDllExport DDS_TypeCode * UMAA_SEM_PanTiltJointEffortStatus_PanTiltJointEffortReportType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_SEM_PanTiltJointEffortStatus_PanTiltJointEffortReportType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_SEM_PanTiltJointEffortStatus_PanTiltJointEffortReportType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_SEM_PanTiltJointEffortStatus_PanTiltJointEffortReportType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_SEM_PanTiltJointEffortStatus_PanTiltJointEffortReportTypeSeq, UMAA_SEM_PanTiltJointEffortStatus_PanTiltJointEffortReportType);

NDDSUSERDllExport
RTIBool UMAA_SEM_PanTiltJointEffortStatus_PanTiltJointEffortReportType_initialize(
    UMAA_SEM_PanTiltJointEffortStatus_PanTiltJointEffortReportType* self);

NDDSUSERDllExport
RTIBool UMAA_SEM_PanTiltJointEffortStatus_PanTiltJointEffortReportType_initialize_ex(
    UMAA_SEM_PanTiltJointEffortStatus_PanTiltJointEffortReportType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_SEM_PanTiltJointEffortStatus_PanTiltJointEffortReportType_initialize_w_params(
    UMAA_SEM_PanTiltJointEffortStatus_PanTiltJointEffortReportType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_SEM_PanTiltJointEffortStatus_PanTiltJointEffortReportType_finalize_w_return(
    UMAA_SEM_PanTiltJointEffortStatus_PanTiltJointEffortReportType* self);

NDDSUSERDllExport
void UMAA_SEM_PanTiltJointEffortStatus_PanTiltJointEffortReportType_finalize(
    UMAA_SEM_PanTiltJointEffortStatus_PanTiltJointEffortReportType* self);

NDDSUSERDllExport
void UMAA_SEM_PanTiltJointEffortStatus_PanTiltJointEffortReportType_finalize_ex(
    UMAA_SEM_PanTiltJointEffortStatus_PanTiltJointEffortReportType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_SEM_PanTiltJointEffortStatus_PanTiltJointEffortReportType_finalize_w_params(
    UMAA_SEM_PanTiltJointEffortStatus_PanTiltJointEffortReportType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_SEM_PanTiltJointEffortStatus_PanTiltJointEffortReportType_finalize_optional_members(
    UMAA_SEM_PanTiltJointEffortStatus_PanTiltJointEffortReportType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_SEM_PanTiltJointEffortStatus_PanTiltJointEffortReportType_copy(
    UMAA_SEM_PanTiltJointEffortStatus_PanTiltJointEffortReportType* dst,
    const UMAA_SEM_PanTiltJointEffortStatus_PanTiltJointEffortReportType* src);

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
        struct type_code< UMAA_SEM_PanTiltJointEffortStatus_PanTiltJointEffortReportType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* PanTiltJointEffortReportType */

