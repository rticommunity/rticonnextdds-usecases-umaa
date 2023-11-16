

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GlobalWaypointSpeedCommandType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef GlobalWaypointSpeedCommandType_1130476848_h
#define GlobalWaypointSpeedCommandType_1130476848_h

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

static const DDS_Char * const UMAA_MO_GlobalWaypointControl_GlobalWaypointSpeedCommand_TOPIC= "UMAA::MO::GlobalWaypointControl::GlobalWaypointSpeedCommand";

extern "C" {

    extern const char *UMAA_MO_GlobalWaypointControl_GlobalWaypointSpeedCommandTypeTYPENAME;

}

struct UMAA_MO_GlobalWaypointControl_GlobalWaypointSpeedCommandTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_MO_GlobalWaypointControl_GlobalWaypointSpeedCommandTypeTypeSupport;
class UMAA_MO_GlobalWaypointControl_GlobalWaypointSpeedCommandTypeDataWriter;
class UMAA_MO_GlobalWaypointControl_GlobalWaypointSpeedCommandTypeDataReader;
#endif
class UMAA_MO_GlobalWaypointControl_GlobalWaypointSpeedCommandType 
{
  public:
    typedef struct UMAA_MO_GlobalWaypointControl_GlobalWaypointSpeedCommandTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_MO_GlobalWaypointControl_GlobalWaypointSpeedCommandTypeTypeSupport TypeSupport;
    typedef UMAA_MO_GlobalWaypointControl_GlobalWaypointSpeedCommandTypeDataWriter DataWriter;
    typedef UMAA_MO_GlobalWaypointControl_GlobalWaypointSpeedCommandTypeDataReader DataReader;
    #endif

    UMAA_Common_VariableSpeedControl_VariableSpeedControlType   speed ;
    UMAA_Common_Measurement_NumericGUID   source ;
    UMAA_Common_Measurement_NumericGUID   destination ;
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
NDDSUSERDllExport DDS_TypeCode * UMAA_MO_GlobalWaypointControl_GlobalWaypointSpeedCommandType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_MO_GlobalWaypointControl_GlobalWaypointSpeedCommandType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MO_GlobalWaypointControl_GlobalWaypointSpeedCommandType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MO_GlobalWaypointControl_GlobalWaypointSpeedCommandType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_MO_GlobalWaypointControl_GlobalWaypointSpeedCommandTypeSeq, UMAA_MO_GlobalWaypointControl_GlobalWaypointSpeedCommandType);

NDDSUSERDllExport
RTIBool UMAA_MO_GlobalWaypointControl_GlobalWaypointSpeedCommandType_initialize(
    UMAA_MO_GlobalWaypointControl_GlobalWaypointSpeedCommandType* self);

NDDSUSERDllExport
RTIBool UMAA_MO_GlobalWaypointControl_GlobalWaypointSpeedCommandType_initialize_ex(
    UMAA_MO_GlobalWaypointControl_GlobalWaypointSpeedCommandType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_MO_GlobalWaypointControl_GlobalWaypointSpeedCommandType_initialize_w_params(
    UMAA_MO_GlobalWaypointControl_GlobalWaypointSpeedCommandType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_MO_GlobalWaypointControl_GlobalWaypointSpeedCommandType_finalize_w_return(
    UMAA_MO_GlobalWaypointControl_GlobalWaypointSpeedCommandType* self);

NDDSUSERDllExport
void UMAA_MO_GlobalWaypointControl_GlobalWaypointSpeedCommandType_finalize(
    UMAA_MO_GlobalWaypointControl_GlobalWaypointSpeedCommandType* self);

NDDSUSERDllExport
void UMAA_MO_GlobalWaypointControl_GlobalWaypointSpeedCommandType_finalize_ex(
    UMAA_MO_GlobalWaypointControl_GlobalWaypointSpeedCommandType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_MO_GlobalWaypointControl_GlobalWaypointSpeedCommandType_finalize_w_params(
    UMAA_MO_GlobalWaypointControl_GlobalWaypointSpeedCommandType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_MO_GlobalWaypointControl_GlobalWaypointSpeedCommandType_finalize_optional_members(
    UMAA_MO_GlobalWaypointControl_GlobalWaypointSpeedCommandType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_MO_GlobalWaypointControl_GlobalWaypointSpeedCommandType_copy(
    UMAA_MO_GlobalWaypointControl_GlobalWaypointSpeedCommandType* dst,
    const UMAA_MO_GlobalWaypointControl_GlobalWaypointSpeedCommandType* src);

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
        struct type_code< UMAA_MO_GlobalWaypointControl_GlobalWaypointSpeedCommandType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* GlobalWaypointSpeedCommandType */

