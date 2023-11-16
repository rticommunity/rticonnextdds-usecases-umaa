

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GlobalWaypointSpeedCommandStatusType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef GlobalWaypointSpeedCommandStatusType_718534084_h
#define GlobalWaypointSpeedCommandStatusType_718534084_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "UMAA/Common/Measurement/Measurements.h"
#include "UMAA/Common/MaritimeEnumeration/EnumerationSets.h"

static const DDS_Char * const UMAA_MO_GlobalWaypointControl_GlobalWaypointSpeedCommandStatus_TOPIC= "UMAA::MO::GlobalWaypointControl::GlobalWaypointSpeedCommandStatus";

extern "C" {

    extern const char *UMAA_MO_GlobalWaypointControl_GlobalWaypointSpeedCommandStatusTypeTYPENAME;

}

struct UMAA_MO_GlobalWaypointControl_GlobalWaypointSpeedCommandStatusTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_MO_GlobalWaypointControl_GlobalWaypointSpeedCommandStatusTypeTypeSupport;
class UMAA_MO_GlobalWaypointControl_GlobalWaypointSpeedCommandStatusTypeDataWriter;
class UMAA_MO_GlobalWaypointControl_GlobalWaypointSpeedCommandStatusTypeDataReader;
#endif
class UMAA_MO_GlobalWaypointControl_GlobalWaypointSpeedCommandStatusType 
{
  public:
    typedef struct UMAA_MO_GlobalWaypointControl_GlobalWaypointSpeedCommandStatusTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_MO_GlobalWaypointControl_GlobalWaypointSpeedCommandStatusTypeTypeSupport TypeSupport;
    typedef UMAA_MO_GlobalWaypointControl_GlobalWaypointSpeedCommandStatusTypeDataWriter DataWriter;
    typedef UMAA_MO_GlobalWaypointControl_GlobalWaypointSpeedCommandStatusTypeDataReader DataReader;
    #endif

    UMAA_Common_Measurement_NumericGUID   source ;
    UMAA_Common_MaritimeEnumeration_CommandStatusEnumType_CommandStatusEnumType   commandStatus ;
    UMAA_Common_MaritimeEnumeration_CommandStatusReasonEnumType_CommandStatusReasonEnumType   commandStatusReason ;
    DDS_Char *   logMessage ;
    UMAA_Common_Measurement_NumericGUID   sessionID ;
    UMAA_Common_Measurement_DateTime   timeStamp ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_MO_GlobalWaypointControl_GlobalWaypointSpeedCommandStatusType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_MO_GlobalWaypointControl_GlobalWaypointSpeedCommandStatusType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MO_GlobalWaypointControl_GlobalWaypointSpeedCommandStatusType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MO_GlobalWaypointControl_GlobalWaypointSpeedCommandStatusType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_MO_GlobalWaypointControl_GlobalWaypointSpeedCommandStatusTypeSeq, UMAA_MO_GlobalWaypointControl_GlobalWaypointSpeedCommandStatusType);

NDDSUSERDllExport
RTIBool UMAA_MO_GlobalWaypointControl_GlobalWaypointSpeedCommandStatusType_initialize(
    UMAA_MO_GlobalWaypointControl_GlobalWaypointSpeedCommandStatusType* self);

NDDSUSERDllExport
RTIBool UMAA_MO_GlobalWaypointControl_GlobalWaypointSpeedCommandStatusType_initialize_ex(
    UMAA_MO_GlobalWaypointControl_GlobalWaypointSpeedCommandStatusType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_MO_GlobalWaypointControl_GlobalWaypointSpeedCommandStatusType_initialize_w_params(
    UMAA_MO_GlobalWaypointControl_GlobalWaypointSpeedCommandStatusType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_MO_GlobalWaypointControl_GlobalWaypointSpeedCommandStatusType_finalize_w_return(
    UMAA_MO_GlobalWaypointControl_GlobalWaypointSpeedCommandStatusType* self);

NDDSUSERDllExport
void UMAA_MO_GlobalWaypointControl_GlobalWaypointSpeedCommandStatusType_finalize(
    UMAA_MO_GlobalWaypointControl_GlobalWaypointSpeedCommandStatusType* self);

NDDSUSERDllExport
void UMAA_MO_GlobalWaypointControl_GlobalWaypointSpeedCommandStatusType_finalize_ex(
    UMAA_MO_GlobalWaypointControl_GlobalWaypointSpeedCommandStatusType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_MO_GlobalWaypointControl_GlobalWaypointSpeedCommandStatusType_finalize_w_params(
    UMAA_MO_GlobalWaypointControl_GlobalWaypointSpeedCommandStatusType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_MO_GlobalWaypointControl_GlobalWaypointSpeedCommandStatusType_finalize_optional_members(
    UMAA_MO_GlobalWaypointControl_GlobalWaypointSpeedCommandStatusType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_MO_GlobalWaypointControl_GlobalWaypointSpeedCommandStatusType_copy(
    UMAA_MO_GlobalWaypointControl_GlobalWaypointSpeedCommandStatusType* dst,
    const UMAA_MO_GlobalWaypointControl_GlobalWaypointSpeedCommandStatusType* src);

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
        struct type_code< UMAA_MO_GlobalWaypointControl_GlobalWaypointSpeedCommandStatusType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* GlobalWaypointSpeedCommandStatusType */

