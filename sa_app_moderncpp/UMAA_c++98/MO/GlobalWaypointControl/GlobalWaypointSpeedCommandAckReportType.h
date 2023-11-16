

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GlobalWaypointSpeedCommandAckReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef GlobalWaypointSpeedCommandAckReportType_312106323_h
#define GlobalWaypointSpeedCommandAckReportType_312106323_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "UMAA/Common/Measurement/Measurements.h"
#include "UMAA/Common/VariableSpeedControl/VariableSpeedControlType.h"

static const DDS_Char * const UMAA_MO_GlobalWaypointControl_GlobalWaypointSpeedCommandAckReport_TOPIC= "UMAA::MO::GlobalWaypointControl::GlobalWaypointSpeedCommandAckReport";

extern "C" {

    extern const char *UMAA_MO_GlobalWaypointControl_GlobalWaypointSpeedCommandAckReportTypeTYPENAME;

}

struct UMAA_MO_GlobalWaypointControl_GlobalWaypointSpeedCommandAckReportTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_MO_GlobalWaypointControl_GlobalWaypointSpeedCommandAckReportTypeTypeSupport;
class UMAA_MO_GlobalWaypointControl_GlobalWaypointSpeedCommandAckReportTypeDataWriter;
class UMAA_MO_GlobalWaypointControl_GlobalWaypointSpeedCommandAckReportTypeDataReader;
#endif
class UMAA_MO_GlobalWaypointControl_GlobalWaypointSpeedCommandAckReportType 
{
  public:
    typedef struct UMAA_MO_GlobalWaypointControl_GlobalWaypointSpeedCommandAckReportTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_MO_GlobalWaypointControl_GlobalWaypointSpeedCommandAckReportTypeTypeSupport TypeSupport;
    typedef UMAA_MO_GlobalWaypointControl_GlobalWaypointSpeedCommandAckReportTypeDataWriter DataWriter;
    typedef UMAA_MO_GlobalWaypointControl_GlobalWaypointSpeedCommandAckReportTypeDataReader DataReader;
    #endif

    UMAA_Common_VariableSpeedControl_VariableSpeedControlType   speed ;
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
NDDSUSERDllExport DDS_TypeCode * UMAA_MO_GlobalWaypointControl_GlobalWaypointSpeedCommandAckReportType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_MO_GlobalWaypointControl_GlobalWaypointSpeedCommandAckReportType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MO_GlobalWaypointControl_GlobalWaypointSpeedCommandAckReportType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MO_GlobalWaypointControl_GlobalWaypointSpeedCommandAckReportType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_MO_GlobalWaypointControl_GlobalWaypointSpeedCommandAckReportTypeSeq, UMAA_MO_GlobalWaypointControl_GlobalWaypointSpeedCommandAckReportType);

NDDSUSERDllExport
RTIBool UMAA_MO_GlobalWaypointControl_GlobalWaypointSpeedCommandAckReportType_initialize(
    UMAA_MO_GlobalWaypointControl_GlobalWaypointSpeedCommandAckReportType* self);

NDDSUSERDllExport
RTIBool UMAA_MO_GlobalWaypointControl_GlobalWaypointSpeedCommandAckReportType_initialize_ex(
    UMAA_MO_GlobalWaypointControl_GlobalWaypointSpeedCommandAckReportType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_MO_GlobalWaypointControl_GlobalWaypointSpeedCommandAckReportType_initialize_w_params(
    UMAA_MO_GlobalWaypointControl_GlobalWaypointSpeedCommandAckReportType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_MO_GlobalWaypointControl_GlobalWaypointSpeedCommandAckReportType_finalize_w_return(
    UMAA_MO_GlobalWaypointControl_GlobalWaypointSpeedCommandAckReportType* self);

NDDSUSERDllExport
void UMAA_MO_GlobalWaypointControl_GlobalWaypointSpeedCommandAckReportType_finalize(
    UMAA_MO_GlobalWaypointControl_GlobalWaypointSpeedCommandAckReportType* self);

NDDSUSERDllExport
void UMAA_MO_GlobalWaypointControl_GlobalWaypointSpeedCommandAckReportType_finalize_ex(
    UMAA_MO_GlobalWaypointControl_GlobalWaypointSpeedCommandAckReportType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_MO_GlobalWaypointControl_GlobalWaypointSpeedCommandAckReportType_finalize_w_params(
    UMAA_MO_GlobalWaypointControl_GlobalWaypointSpeedCommandAckReportType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_MO_GlobalWaypointControl_GlobalWaypointSpeedCommandAckReportType_finalize_optional_members(
    UMAA_MO_GlobalWaypointControl_GlobalWaypointSpeedCommandAckReportType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_MO_GlobalWaypointControl_GlobalWaypointSpeedCommandAckReportType_copy(
    UMAA_MO_GlobalWaypointControl_GlobalWaypointSpeedCommandAckReportType* dst,
    const UMAA_MO_GlobalWaypointControl_GlobalWaypointSpeedCommandAckReportType* src);

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
        struct type_code< UMAA_MO_GlobalWaypointControl_GlobalWaypointSpeedCommandAckReportType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* GlobalWaypointSpeedCommandAckReportType */

