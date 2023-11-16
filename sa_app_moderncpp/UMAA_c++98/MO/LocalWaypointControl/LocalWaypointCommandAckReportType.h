

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from LocalWaypointCommandAckReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef LocalWaypointCommandAckReportType_1560722941_h
#define LocalWaypointCommandAckReportType_1560722941_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "UMAA/Common/Measurement/Measurements.h"
#include "UMAA/MO/LocalWaypointControl/LocalWaypointType.h"

static const DDS_Char * const UMAA_MO_LocalWaypointControl_LocalWaypointCommandAckReport_TOPIC= "UMAA::MO::LocalWaypointControl::LocalWaypointCommandAckReport";

extern "C" {

    extern const char *UMAA_MO_LocalWaypointControl_LocalWaypointCommandAckReportTypeTYPENAME;

}

struct UMAA_MO_LocalWaypointControl_LocalWaypointCommandAckReportTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_MO_LocalWaypointControl_LocalWaypointCommandAckReportTypeTypeSupport;
class UMAA_MO_LocalWaypointControl_LocalWaypointCommandAckReportTypeDataWriter;
class UMAA_MO_LocalWaypointControl_LocalWaypointCommandAckReportTypeDataReader;
#endif
class UMAA_MO_LocalWaypointControl_LocalWaypointCommandAckReportType 
{
  public:
    typedef struct UMAA_MO_LocalWaypointControl_LocalWaypointCommandAckReportTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_MO_LocalWaypointControl_LocalWaypointCommandAckReportTypeTypeSupport TypeSupport;
    typedef UMAA_MO_LocalWaypointControl_LocalWaypointCommandAckReportTypeDataWriter DataWriter;
    typedef UMAA_MO_LocalWaypointControl_LocalWaypointCommandAckReportTypeDataReader DataReader;
    #endif

    DDS_Long   waypointCount ;
    UMAA_MO_LocalWaypointControl_LocalWaypointTypeSeq  waypoints ;
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
NDDSUSERDllExport DDS_TypeCode * UMAA_MO_LocalWaypointControl_LocalWaypointCommandAckReportType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_MO_LocalWaypointControl_LocalWaypointCommandAckReportType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MO_LocalWaypointControl_LocalWaypointCommandAckReportType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MO_LocalWaypointControl_LocalWaypointCommandAckReportType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_MO_LocalWaypointControl_LocalWaypointCommandAckReportTypeSeq, UMAA_MO_LocalWaypointControl_LocalWaypointCommandAckReportType);

NDDSUSERDllExport
RTIBool UMAA_MO_LocalWaypointControl_LocalWaypointCommandAckReportType_initialize(
    UMAA_MO_LocalWaypointControl_LocalWaypointCommandAckReportType* self);

NDDSUSERDllExport
RTIBool UMAA_MO_LocalWaypointControl_LocalWaypointCommandAckReportType_initialize_ex(
    UMAA_MO_LocalWaypointControl_LocalWaypointCommandAckReportType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_MO_LocalWaypointControl_LocalWaypointCommandAckReportType_initialize_w_params(
    UMAA_MO_LocalWaypointControl_LocalWaypointCommandAckReportType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_MO_LocalWaypointControl_LocalWaypointCommandAckReportType_finalize_w_return(
    UMAA_MO_LocalWaypointControl_LocalWaypointCommandAckReportType* self);

NDDSUSERDllExport
void UMAA_MO_LocalWaypointControl_LocalWaypointCommandAckReportType_finalize(
    UMAA_MO_LocalWaypointControl_LocalWaypointCommandAckReportType* self);

NDDSUSERDllExport
void UMAA_MO_LocalWaypointControl_LocalWaypointCommandAckReportType_finalize_ex(
    UMAA_MO_LocalWaypointControl_LocalWaypointCommandAckReportType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_MO_LocalWaypointControl_LocalWaypointCommandAckReportType_finalize_w_params(
    UMAA_MO_LocalWaypointControl_LocalWaypointCommandAckReportType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_MO_LocalWaypointControl_LocalWaypointCommandAckReportType_finalize_optional_members(
    UMAA_MO_LocalWaypointControl_LocalWaypointCommandAckReportType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_MO_LocalWaypointControl_LocalWaypointCommandAckReportType_copy(
    UMAA_MO_LocalWaypointControl_LocalWaypointCommandAckReportType* dst,
    const UMAA_MO_LocalWaypointControl_LocalWaypointCommandAckReportType* src);

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
        struct type_code< UMAA_MO_LocalWaypointControl_LocalWaypointCommandAckReportType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* LocalWaypointCommandAckReportType */

