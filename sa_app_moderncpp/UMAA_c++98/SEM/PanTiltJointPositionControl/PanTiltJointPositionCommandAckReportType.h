

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from PanTiltJointPositionCommandAckReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef PanTiltJointPositionCommandAckReportType_1947635759_h
#define PanTiltJointPositionCommandAckReportType_1947635759_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "UMAA/Common/Measurement/Measurements.h"

static const DDS_Char * const UMAA_SEM_PanTiltJointPositionControl_PanTiltJointPositionCommandAckReport_TOPIC= "UMAA::SEM::PanTiltJointPositionControl::PanTiltJointPositionCommandAckReport";

extern "C" {

    extern const char *UMAA_SEM_PanTiltJointPositionControl_PanTiltJointPositionCommandAckReportTypeTYPENAME;

}

struct UMAA_SEM_PanTiltJointPositionControl_PanTiltJointPositionCommandAckReportTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_SEM_PanTiltJointPositionControl_PanTiltJointPositionCommandAckReportTypeTypeSupport;
class UMAA_SEM_PanTiltJointPositionControl_PanTiltJointPositionCommandAckReportTypeDataWriter;
class UMAA_SEM_PanTiltJointPositionControl_PanTiltJointPositionCommandAckReportTypeDataReader;
#endif
class UMAA_SEM_PanTiltJointPositionControl_PanTiltJointPositionCommandAckReportType 
{
  public:
    typedef struct UMAA_SEM_PanTiltJointPositionControl_PanTiltJointPositionCommandAckReportTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_SEM_PanTiltJointPositionControl_PanTiltJointPositionCommandAckReportTypeTypeSupport TypeSupport;
    typedef UMAA_SEM_PanTiltJointPositionControl_PanTiltJointPositionCommandAckReportTypeDataWriter DataWriter;
    typedef UMAA_SEM_PanTiltJointPositionControl_PanTiltJointPositionCommandAckReportTypeDataReader DataReader;
    #endif

    DDS_Double   pan ;
    DDS_Double   tilt ;
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
NDDSUSERDllExport DDS_TypeCode * UMAA_SEM_PanTiltJointPositionControl_PanTiltJointPositionCommandAckReportType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_SEM_PanTiltJointPositionControl_PanTiltJointPositionCommandAckReportType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_SEM_PanTiltJointPositionControl_PanTiltJointPositionCommandAckReportType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_SEM_PanTiltJointPositionControl_PanTiltJointPositionCommandAckReportType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_SEM_PanTiltJointPositionControl_PanTiltJointPositionCommandAckReportTypeSeq, UMAA_SEM_PanTiltJointPositionControl_PanTiltJointPositionCommandAckReportType);

NDDSUSERDllExport
RTIBool UMAA_SEM_PanTiltJointPositionControl_PanTiltJointPositionCommandAckReportType_initialize(
    UMAA_SEM_PanTiltJointPositionControl_PanTiltJointPositionCommandAckReportType* self);

NDDSUSERDllExport
RTIBool UMAA_SEM_PanTiltJointPositionControl_PanTiltJointPositionCommandAckReportType_initialize_ex(
    UMAA_SEM_PanTiltJointPositionControl_PanTiltJointPositionCommandAckReportType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_SEM_PanTiltJointPositionControl_PanTiltJointPositionCommandAckReportType_initialize_w_params(
    UMAA_SEM_PanTiltJointPositionControl_PanTiltJointPositionCommandAckReportType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_SEM_PanTiltJointPositionControl_PanTiltJointPositionCommandAckReportType_finalize_w_return(
    UMAA_SEM_PanTiltJointPositionControl_PanTiltJointPositionCommandAckReportType* self);

NDDSUSERDllExport
void UMAA_SEM_PanTiltJointPositionControl_PanTiltJointPositionCommandAckReportType_finalize(
    UMAA_SEM_PanTiltJointPositionControl_PanTiltJointPositionCommandAckReportType* self);

NDDSUSERDllExport
void UMAA_SEM_PanTiltJointPositionControl_PanTiltJointPositionCommandAckReportType_finalize_ex(
    UMAA_SEM_PanTiltJointPositionControl_PanTiltJointPositionCommandAckReportType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_SEM_PanTiltJointPositionControl_PanTiltJointPositionCommandAckReportType_finalize_w_params(
    UMAA_SEM_PanTiltJointPositionControl_PanTiltJointPositionCommandAckReportType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_SEM_PanTiltJointPositionControl_PanTiltJointPositionCommandAckReportType_finalize_optional_members(
    UMAA_SEM_PanTiltJointPositionControl_PanTiltJointPositionCommandAckReportType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_SEM_PanTiltJointPositionControl_PanTiltJointPositionCommandAckReportType_copy(
    UMAA_SEM_PanTiltJointPositionControl_PanTiltJointPositionCommandAckReportType* dst,
    const UMAA_SEM_PanTiltJointPositionControl_PanTiltJointPositionCommandAckReportType* src);

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
        struct type_code< UMAA_SEM_PanTiltJointPositionControl_PanTiltJointPositionCommandAckReportType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* PanTiltJointPositionCommandAckReportType */

