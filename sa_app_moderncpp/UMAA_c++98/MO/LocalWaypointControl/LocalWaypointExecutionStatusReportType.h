

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from LocalWaypointExecutionStatusReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef LocalWaypointExecutionStatusReportType_108158836_h
#define LocalWaypointExecutionStatusReportType_108158836_h

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

static const DDS_Char * const UMAA_MO_LocalWaypointControl_LocalWaypointExecutionStatusReport_TOPIC= "UMAA::MO::LocalWaypointControl::LocalWaypointExecutionStatusReport";

extern "C" {

    extern const char *UMAA_MO_LocalWaypointControl_LocalWaypointExecutionStatusReportTypeTYPENAME;

}

struct UMAA_MO_LocalWaypointControl_LocalWaypointExecutionStatusReportTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_MO_LocalWaypointControl_LocalWaypointExecutionStatusReportTypeTypeSupport;
class UMAA_MO_LocalWaypointControl_LocalWaypointExecutionStatusReportTypeDataWriter;
class UMAA_MO_LocalWaypointControl_LocalWaypointExecutionStatusReportTypeDataReader;
#endif
class UMAA_MO_LocalWaypointControl_LocalWaypointExecutionStatusReportType 
{
  public:
    typedef struct UMAA_MO_LocalWaypointControl_LocalWaypointExecutionStatusReportTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_MO_LocalWaypointControl_LocalWaypointExecutionStatusReportTypeTypeSupport TypeSupport;
    typedef UMAA_MO_LocalWaypointControl_LocalWaypointExecutionStatusReportTypeDataWriter DataWriter;
    typedef UMAA_MO_LocalWaypointControl_LocalWaypointExecutionStatusReportTypeDataReader DataReader;
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
NDDSUSERDllExport DDS_TypeCode * UMAA_MO_LocalWaypointControl_LocalWaypointExecutionStatusReportType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_MO_LocalWaypointControl_LocalWaypointExecutionStatusReportType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MO_LocalWaypointControl_LocalWaypointExecutionStatusReportType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MO_LocalWaypointControl_LocalWaypointExecutionStatusReportType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_MO_LocalWaypointControl_LocalWaypointExecutionStatusReportTypeSeq, UMAA_MO_LocalWaypointControl_LocalWaypointExecutionStatusReportType);

NDDSUSERDllExport
RTIBool UMAA_MO_LocalWaypointControl_LocalWaypointExecutionStatusReportType_initialize(
    UMAA_MO_LocalWaypointControl_LocalWaypointExecutionStatusReportType* self);

NDDSUSERDllExport
RTIBool UMAA_MO_LocalWaypointControl_LocalWaypointExecutionStatusReportType_initialize_ex(
    UMAA_MO_LocalWaypointControl_LocalWaypointExecutionStatusReportType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_MO_LocalWaypointControl_LocalWaypointExecutionStatusReportType_initialize_w_params(
    UMAA_MO_LocalWaypointControl_LocalWaypointExecutionStatusReportType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_MO_LocalWaypointControl_LocalWaypointExecutionStatusReportType_finalize_w_return(
    UMAA_MO_LocalWaypointControl_LocalWaypointExecutionStatusReportType* self);

NDDSUSERDllExport
void UMAA_MO_LocalWaypointControl_LocalWaypointExecutionStatusReportType_finalize(
    UMAA_MO_LocalWaypointControl_LocalWaypointExecutionStatusReportType* self);

NDDSUSERDllExport
void UMAA_MO_LocalWaypointControl_LocalWaypointExecutionStatusReportType_finalize_ex(
    UMAA_MO_LocalWaypointControl_LocalWaypointExecutionStatusReportType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_MO_LocalWaypointControl_LocalWaypointExecutionStatusReportType_finalize_w_params(
    UMAA_MO_LocalWaypointControl_LocalWaypointExecutionStatusReportType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_MO_LocalWaypointControl_LocalWaypointExecutionStatusReportType_finalize_optional_members(
    UMAA_MO_LocalWaypointControl_LocalWaypointExecutionStatusReportType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_MO_LocalWaypointControl_LocalWaypointExecutionStatusReportType_copy(
    UMAA_MO_LocalWaypointControl_LocalWaypointExecutionStatusReportType* dst,
    const UMAA_MO_LocalWaypointControl_LocalWaypointExecutionStatusReportType* src);

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
        struct type_code< UMAA_MO_LocalWaypointControl_LocalWaypointExecutionStatusReportType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* LocalWaypointExecutionStatusReportType */

