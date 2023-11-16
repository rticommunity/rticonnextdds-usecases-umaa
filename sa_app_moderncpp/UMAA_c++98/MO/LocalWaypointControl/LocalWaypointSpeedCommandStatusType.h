

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from LocalWaypointSpeedCommandStatusType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef LocalWaypointSpeedCommandStatusType_1620629551_h
#define LocalWaypointSpeedCommandStatusType_1620629551_h

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

static const DDS_Char * const UMAA_MO_LocalWaypointControl_LocalWaypointSpeedCommandStatus_TOPIC= "UMAA::MO::LocalWaypointControl::LocalWaypointSpeedCommandStatus";

extern "C" {

    extern const char *UMAA_MO_LocalWaypointControl_LocalWaypointSpeedCommandStatusTypeTYPENAME;

}

struct UMAA_MO_LocalWaypointControl_LocalWaypointSpeedCommandStatusTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_MO_LocalWaypointControl_LocalWaypointSpeedCommandStatusTypeTypeSupport;
class UMAA_MO_LocalWaypointControl_LocalWaypointSpeedCommandStatusTypeDataWriter;
class UMAA_MO_LocalWaypointControl_LocalWaypointSpeedCommandStatusTypeDataReader;
#endif
class UMAA_MO_LocalWaypointControl_LocalWaypointSpeedCommandStatusType 
{
  public:
    typedef struct UMAA_MO_LocalWaypointControl_LocalWaypointSpeedCommandStatusTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_MO_LocalWaypointControl_LocalWaypointSpeedCommandStatusTypeTypeSupport TypeSupport;
    typedef UMAA_MO_LocalWaypointControl_LocalWaypointSpeedCommandStatusTypeDataWriter DataWriter;
    typedef UMAA_MO_LocalWaypointControl_LocalWaypointSpeedCommandStatusTypeDataReader DataReader;
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
NDDSUSERDllExport DDS_TypeCode * UMAA_MO_LocalWaypointControl_LocalWaypointSpeedCommandStatusType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_MO_LocalWaypointControl_LocalWaypointSpeedCommandStatusType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MO_LocalWaypointControl_LocalWaypointSpeedCommandStatusType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MO_LocalWaypointControl_LocalWaypointSpeedCommandStatusType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_MO_LocalWaypointControl_LocalWaypointSpeedCommandStatusTypeSeq, UMAA_MO_LocalWaypointControl_LocalWaypointSpeedCommandStatusType);

NDDSUSERDllExport
RTIBool UMAA_MO_LocalWaypointControl_LocalWaypointSpeedCommandStatusType_initialize(
    UMAA_MO_LocalWaypointControl_LocalWaypointSpeedCommandStatusType* self);

NDDSUSERDllExport
RTIBool UMAA_MO_LocalWaypointControl_LocalWaypointSpeedCommandStatusType_initialize_ex(
    UMAA_MO_LocalWaypointControl_LocalWaypointSpeedCommandStatusType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_MO_LocalWaypointControl_LocalWaypointSpeedCommandStatusType_initialize_w_params(
    UMAA_MO_LocalWaypointControl_LocalWaypointSpeedCommandStatusType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_MO_LocalWaypointControl_LocalWaypointSpeedCommandStatusType_finalize_w_return(
    UMAA_MO_LocalWaypointControl_LocalWaypointSpeedCommandStatusType* self);

NDDSUSERDllExport
void UMAA_MO_LocalWaypointControl_LocalWaypointSpeedCommandStatusType_finalize(
    UMAA_MO_LocalWaypointControl_LocalWaypointSpeedCommandStatusType* self);

NDDSUSERDllExport
void UMAA_MO_LocalWaypointControl_LocalWaypointSpeedCommandStatusType_finalize_ex(
    UMAA_MO_LocalWaypointControl_LocalWaypointSpeedCommandStatusType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_MO_LocalWaypointControl_LocalWaypointSpeedCommandStatusType_finalize_w_params(
    UMAA_MO_LocalWaypointControl_LocalWaypointSpeedCommandStatusType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_MO_LocalWaypointControl_LocalWaypointSpeedCommandStatusType_finalize_optional_members(
    UMAA_MO_LocalWaypointControl_LocalWaypointSpeedCommandStatusType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_MO_LocalWaypointControl_LocalWaypointSpeedCommandStatusType_copy(
    UMAA_MO_LocalWaypointControl_LocalWaypointSpeedCommandStatusType* dst,
    const UMAA_MO_LocalWaypointControl_LocalWaypointSpeedCommandStatusType* src);

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
        struct type_code< UMAA_MO_LocalWaypointControl_LocalWaypointSpeedCommandStatusType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* LocalWaypointSpeedCommandStatusType */

