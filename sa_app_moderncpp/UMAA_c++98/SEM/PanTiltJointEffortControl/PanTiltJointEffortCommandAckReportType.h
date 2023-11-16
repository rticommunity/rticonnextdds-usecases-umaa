

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from PanTiltJointEffortCommandAckReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef PanTiltJointEffortCommandAckReportType_133801963_h
#define PanTiltJointEffortCommandAckReportType_133801963_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "UMAA/Common/Measurement/Measurements.h"

static const DDS_Char * const UMAA_SEM_PanTiltJointEffortControl_PanTiltJointEffortCommandAckReport_TOPIC= "UMAA::SEM::PanTiltJointEffortControl::PanTiltJointEffortCommandAckReport";

extern "C" {

    extern const char *UMAA_SEM_PanTiltJointEffortControl_PanTiltJointEffortCommandAckReportTypeTYPENAME;

}

struct UMAA_SEM_PanTiltJointEffortControl_PanTiltJointEffortCommandAckReportTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_SEM_PanTiltJointEffortControl_PanTiltJointEffortCommandAckReportTypeTypeSupport;
class UMAA_SEM_PanTiltJointEffortControl_PanTiltJointEffortCommandAckReportTypeDataWriter;
class UMAA_SEM_PanTiltJointEffortControl_PanTiltJointEffortCommandAckReportTypeDataReader;
#endif
class UMAA_SEM_PanTiltJointEffortControl_PanTiltJointEffortCommandAckReportType 
{
  public:
    typedef struct UMAA_SEM_PanTiltJointEffortControl_PanTiltJointEffortCommandAckReportTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_SEM_PanTiltJointEffortControl_PanTiltJointEffortCommandAckReportTypeTypeSupport TypeSupport;
    typedef UMAA_SEM_PanTiltJointEffortControl_PanTiltJointEffortCommandAckReportTypeDataWriter DataWriter;
    typedef UMAA_SEM_PanTiltJointEffortControl_PanTiltJointEffortCommandAckReportTypeDataReader DataReader;
    #endif

    DDS_Double   panEffort ;
    DDS_Double   tiltEffort ;
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
NDDSUSERDllExport DDS_TypeCode * UMAA_SEM_PanTiltJointEffortControl_PanTiltJointEffortCommandAckReportType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_SEM_PanTiltJointEffortControl_PanTiltJointEffortCommandAckReportType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_SEM_PanTiltJointEffortControl_PanTiltJointEffortCommandAckReportType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_SEM_PanTiltJointEffortControl_PanTiltJointEffortCommandAckReportType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_SEM_PanTiltJointEffortControl_PanTiltJointEffortCommandAckReportTypeSeq, UMAA_SEM_PanTiltJointEffortControl_PanTiltJointEffortCommandAckReportType);

NDDSUSERDllExport
RTIBool UMAA_SEM_PanTiltJointEffortControl_PanTiltJointEffortCommandAckReportType_initialize(
    UMAA_SEM_PanTiltJointEffortControl_PanTiltJointEffortCommandAckReportType* self);

NDDSUSERDllExport
RTIBool UMAA_SEM_PanTiltJointEffortControl_PanTiltJointEffortCommandAckReportType_initialize_ex(
    UMAA_SEM_PanTiltJointEffortControl_PanTiltJointEffortCommandAckReportType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_SEM_PanTiltJointEffortControl_PanTiltJointEffortCommandAckReportType_initialize_w_params(
    UMAA_SEM_PanTiltJointEffortControl_PanTiltJointEffortCommandAckReportType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_SEM_PanTiltJointEffortControl_PanTiltJointEffortCommandAckReportType_finalize_w_return(
    UMAA_SEM_PanTiltJointEffortControl_PanTiltJointEffortCommandAckReportType* self);

NDDSUSERDllExport
void UMAA_SEM_PanTiltJointEffortControl_PanTiltJointEffortCommandAckReportType_finalize(
    UMAA_SEM_PanTiltJointEffortControl_PanTiltJointEffortCommandAckReportType* self);

NDDSUSERDllExport
void UMAA_SEM_PanTiltJointEffortControl_PanTiltJointEffortCommandAckReportType_finalize_ex(
    UMAA_SEM_PanTiltJointEffortControl_PanTiltJointEffortCommandAckReportType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_SEM_PanTiltJointEffortControl_PanTiltJointEffortCommandAckReportType_finalize_w_params(
    UMAA_SEM_PanTiltJointEffortControl_PanTiltJointEffortCommandAckReportType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_SEM_PanTiltJointEffortControl_PanTiltJointEffortCommandAckReportType_finalize_optional_members(
    UMAA_SEM_PanTiltJointEffortControl_PanTiltJointEffortCommandAckReportType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_SEM_PanTiltJointEffortControl_PanTiltJointEffortCommandAckReportType_copy(
    UMAA_SEM_PanTiltJointEffortControl_PanTiltJointEffortCommandAckReportType* dst,
    const UMAA_SEM_PanTiltJointEffortControl_PanTiltJointEffortCommandAckReportType* src);

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
        struct type_code< UMAA_SEM_PanTiltJointEffortControl_PanTiltJointEffortCommandAckReportType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* PanTiltJointEffortCommandAckReportType */

