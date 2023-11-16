

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GlobalWaypointExecutionStatusReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef GlobalWaypointExecutionStatusReportType_607921703_h
#define GlobalWaypointExecutionStatusReportType_607921703_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "UMAA/Common/Enumeration/EnumerationSets.h"
#include "UMAA/Common/Measurement/Measurements.h"

static const DDS_Char * const UMAA_MO_GlobalWaypointControl_GlobalWaypointExecutionStatusReport_TOPIC= "UMAA::MO::GlobalWaypointControl::GlobalWaypointExecutionStatusReport";

extern "C" {

    extern const char *UMAA_MO_GlobalWaypointControl_GlobalWaypointExecutionStatusReportTypeTYPENAME;

}

struct UMAA_MO_GlobalWaypointControl_GlobalWaypointExecutionStatusReportTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_MO_GlobalWaypointControl_GlobalWaypointExecutionStatusReportTypeTypeSupport;
class UMAA_MO_GlobalWaypointControl_GlobalWaypointExecutionStatusReportTypeDataWriter;
class UMAA_MO_GlobalWaypointControl_GlobalWaypointExecutionStatusReportTypeDataReader;
#endif
class UMAA_MO_GlobalWaypointControl_GlobalWaypointExecutionStatusReportType 
{
  public:
    typedef struct UMAA_MO_GlobalWaypointControl_GlobalWaypointExecutionStatusReportTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_MO_GlobalWaypointControl_GlobalWaypointExecutionStatusReportTypeTypeSupport TypeSupport;
    typedef UMAA_MO_GlobalWaypointControl_GlobalWaypointExecutionStatusReportTypeDataWriter DataWriter;
    typedef UMAA_MO_GlobalWaypointControl_GlobalWaypointExecutionStatusReportTypeDataReader DataReader;
    #endif

    UMAA_Common_Measurement_DateTime   arrivalTime ;
    DDS_Double   crossTrackError ;
    DDS_Double   cumulativeDistance ;
    DDS_Double   distanceRemaining ;
    DDS_Double   distanceToWaypoint ;
    DDS_Boolean   elevationAchieved ;
    DDS_Boolean   maintainTrack ;
    DDS_Boolean   speedAchieved ;
    UMAA_Common_Measurement_DateTime   timeToWaypoint ;
    DDS_Boolean   trackLineAchieved ;
    DDS_Long   waypointsRemaining ;
    UMAA_Common_Measurement_NumericGUID   source ;
    UMAA_Common_Measurement_NumericGUID   sessionID ;
    UMAA_Common_Measurement_NumericGUID   waypointID ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_MO_GlobalWaypointControl_GlobalWaypointExecutionStatusReportType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_MO_GlobalWaypointControl_GlobalWaypointExecutionStatusReportType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MO_GlobalWaypointControl_GlobalWaypointExecutionStatusReportType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MO_GlobalWaypointControl_GlobalWaypointExecutionStatusReportType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_MO_GlobalWaypointControl_GlobalWaypointExecutionStatusReportTypeSeq, UMAA_MO_GlobalWaypointControl_GlobalWaypointExecutionStatusReportType);

NDDSUSERDllExport
RTIBool UMAA_MO_GlobalWaypointControl_GlobalWaypointExecutionStatusReportType_initialize(
    UMAA_MO_GlobalWaypointControl_GlobalWaypointExecutionStatusReportType* self);

NDDSUSERDllExport
RTIBool UMAA_MO_GlobalWaypointControl_GlobalWaypointExecutionStatusReportType_initialize_ex(
    UMAA_MO_GlobalWaypointControl_GlobalWaypointExecutionStatusReportType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_MO_GlobalWaypointControl_GlobalWaypointExecutionStatusReportType_initialize_w_params(
    UMAA_MO_GlobalWaypointControl_GlobalWaypointExecutionStatusReportType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_MO_GlobalWaypointControl_GlobalWaypointExecutionStatusReportType_finalize_w_return(
    UMAA_MO_GlobalWaypointControl_GlobalWaypointExecutionStatusReportType* self);

NDDSUSERDllExport
void UMAA_MO_GlobalWaypointControl_GlobalWaypointExecutionStatusReportType_finalize(
    UMAA_MO_GlobalWaypointControl_GlobalWaypointExecutionStatusReportType* self);

NDDSUSERDllExport
void UMAA_MO_GlobalWaypointControl_GlobalWaypointExecutionStatusReportType_finalize_ex(
    UMAA_MO_GlobalWaypointControl_GlobalWaypointExecutionStatusReportType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_MO_GlobalWaypointControl_GlobalWaypointExecutionStatusReportType_finalize_w_params(
    UMAA_MO_GlobalWaypointControl_GlobalWaypointExecutionStatusReportType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_MO_GlobalWaypointControl_GlobalWaypointExecutionStatusReportType_finalize_optional_members(
    UMAA_MO_GlobalWaypointControl_GlobalWaypointExecutionStatusReportType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_MO_GlobalWaypointControl_GlobalWaypointExecutionStatusReportType_copy(
    UMAA_MO_GlobalWaypointControl_GlobalWaypointExecutionStatusReportType* dst,
    const UMAA_MO_GlobalWaypointControl_GlobalWaypointExecutionStatusReportType* src);

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
        struct type_code< UMAA_MO_GlobalWaypointControl_GlobalWaypointExecutionStatusReportType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* GlobalWaypointExecutionStatusReportType */

