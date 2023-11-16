

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from PanTiltJointVelocityCommandAckReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef PanTiltJointVelocityCommandAckReportType_1735772377_h
#define PanTiltJointVelocityCommandAckReportType_1735772377_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "UMAA/Common/Measurement/Measurements.h"

static const DDS_Char * const UMAA_SEM_PanTiltJointVelocityControl_PanTiltJointVelocityCommandAckReport_TOPIC= "UMAA::SEM::PanTiltJointVelocityControl::PanTiltJointVelocityCommandAckReport";

extern "C" {

    extern const char *UMAA_SEM_PanTiltJointVelocityControl_PanTiltJointVelocityCommandAckReportTypeTYPENAME;

}

struct UMAA_SEM_PanTiltJointVelocityControl_PanTiltJointVelocityCommandAckReportTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_SEM_PanTiltJointVelocityControl_PanTiltJointVelocityCommandAckReportTypeTypeSupport;
class UMAA_SEM_PanTiltJointVelocityControl_PanTiltJointVelocityCommandAckReportTypeDataWriter;
class UMAA_SEM_PanTiltJointVelocityControl_PanTiltJointVelocityCommandAckReportTypeDataReader;
#endif
class UMAA_SEM_PanTiltJointVelocityControl_PanTiltJointVelocityCommandAckReportType 
{
  public:
    typedef struct UMAA_SEM_PanTiltJointVelocityControl_PanTiltJointVelocityCommandAckReportTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_SEM_PanTiltJointVelocityControl_PanTiltJointVelocityCommandAckReportTypeTypeSupport TypeSupport;
    typedef UMAA_SEM_PanTiltJointVelocityControl_PanTiltJointVelocityCommandAckReportTypeDataWriter DataWriter;
    typedef UMAA_SEM_PanTiltJointVelocityControl_PanTiltJointVelocityCommandAckReportTypeDataReader DataReader;
    #endif

    DDS_Double   panVelocity ;
    DDS_Double   tiltVelocity ;
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
NDDSUSERDllExport DDS_TypeCode * UMAA_SEM_PanTiltJointVelocityControl_PanTiltJointVelocityCommandAckReportType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_SEM_PanTiltJointVelocityControl_PanTiltJointVelocityCommandAckReportType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_SEM_PanTiltJointVelocityControl_PanTiltJointVelocityCommandAckReportType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_SEM_PanTiltJointVelocityControl_PanTiltJointVelocityCommandAckReportType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_SEM_PanTiltJointVelocityControl_PanTiltJointVelocityCommandAckReportTypeSeq, UMAA_SEM_PanTiltJointVelocityControl_PanTiltJointVelocityCommandAckReportType);

NDDSUSERDllExport
RTIBool UMAA_SEM_PanTiltJointVelocityControl_PanTiltJointVelocityCommandAckReportType_initialize(
    UMAA_SEM_PanTiltJointVelocityControl_PanTiltJointVelocityCommandAckReportType* self);

NDDSUSERDllExport
RTIBool UMAA_SEM_PanTiltJointVelocityControl_PanTiltJointVelocityCommandAckReportType_initialize_ex(
    UMAA_SEM_PanTiltJointVelocityControl_PanTiltJointVelocityCommandAckReportType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_SEM_PanTiltJointVelocityControl_PanTiltJointVelocityCommandAckReportType_initialize_w_params(
    UMAA_SEM_PanTiltJointVelocityControl_PanTiltJointVelocityCommandAckReportType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_SEM_PanTiltJointVelocityControl_PanTiltJointVelocityCommandAckReportType_finalize_w_return(
    UMAA_SEM_PanTiltJointVelocityControl_PanTiltJointVelocityCommandAckReportType* self);

NDDSUSERDllExport
void UMAA_SEM_PanTiltJointVelocityControl_PanTiltJointVelocityCommandAckReportType_finalize(
    UMAA_SEM_PanTiltJointVelocityControl_PanTiltJointVelocityCommandAckReportType* self);

NDDSUSERDllExport
void UMAA_SEM_PanTiltJointVelocityControl_PanTiltJointVelocityCommandAckReportType_finalize_ex(
    UMAA_SEM_PanTiltJointVelocityControl_PanTiltJointVelocityCommandAckReportType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_SEM_PanTiltJointVelocityControl_PanTiltJointVelocityCommandAckReportType_finalize_w_params(
    UMAA_SEM_PanTiltJointVelocityControl_PanTiltJointVelocityCommandAckReportType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_SEM_PanTiltJointVelocityControl_PanTiltJointVelocityCommandAckReportType_finalize_optional_members(
    UMAA_SEM_PanTiltJointVelocityControl_PanTiltJointVelocityCommandAckReportType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_SEM_PanTiltJointVelocityControl_PanTiltJointVelocityCommandAckReportType_copy(
    UMAA_SEM_PanTiltJointVelocityControl_PanTiltJointVelocityCommandAckReportType* dst,
    const UMAA_SEM_PanTiltJointVelocityControl_PanTiltJointVelocityCommandAckReportType* src);

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
        struct type_code< UMAA_SEM_PanTiltJointVelocityControl_PanTiltJointVelocityCommandAckReportType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* PanTiltJointVelocityCommandAckReportType */

