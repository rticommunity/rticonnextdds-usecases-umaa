

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from LocalWaypointSpeedCommandType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef LocalWaypointSpeedCommandType_1450997073_h
#define LocalWaypointSpeedCommandType_1450997073_h

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

static const DDS_Char * const UMAA_MO_LocalWaypointControl_LocalWaypointSpeedCommand_TOPIC= "UMAA::MO::LocalWaypointControl::LocalWaypointSpeedCommand";

extern "C" {

    extern const char *UMAA_MO_LocalWaypointControl_LocalWaypointSpeedCommandTypeTYPENAME;

}

struct UMAA_MO_LocalWaypointControl_LocalWaypointSpeedCommandTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_MO_LocalWaypointControl_LocalWaypointSpeedCommandTypeTypeSupport;
class UMAA_MO_LocalWaypointControl_LocalWaypointSpeedCommandTypeDataWriter;
class UMAA_MO_LocalWaypointControl_LocalWaypointSpeedCommandTypeDataReader;
#endif
class UMAA_MO_LocalWaypointControl_LocalWaypointSpeedCommandType 
{
  public:
    typedef struct UMAA_MO_LocalWaypointControl_LocalWaypointSpeedCommandTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_MO_LocalWaypointControl_LocalWaypointSpeedCommandTypeTypeSupport TypeSupport;
    typedef UMAA_MO_LocalWaypointControl_LocalWaypointSpeedCommandTypeDataWriter DataWriter;
    typedef UMAA_MO_LocalWaypointControl_LocalWaypointSpeedCommandTypeDataReader DataReader;
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
NDDSUSERDllExport DDS_TypeCode * UMAA_MO_LocalWaypointControl_LocalWaypointSpeedCommandType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_MO_LocalWaypointControl_LocalWaypointSpeedCommandType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MO_LocalWaypointControl_LocalWaypointSpeedCommandType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MO_LocalWaypointControl_LocalWaypointSpeedCommandType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_MO_LocalWaypointControl_LocalWaypointSpeedCommandTypeSeq, UMAA_MO_LocalWaypointControl_LocalWaypointSpeedCommandType);

NDDSUSERDllExport
RTIBool UMAA_MO_LocalWaypointControl_LocalWaypointSpeedCommandType_initialize(
    UMAA_MO_LocalWaypointControl_LocalWaypointSpeedCommandType* self);

NDDSUSERDllExport
RTIBool UMAA_MO_LocalWaypointControl_LocalWaypointSpeedCommandType_initialize_ex(
    UMAA_MO_LocalWaypointControl_LocalWaypointSpeedCommandType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_MO_LocalWaypointControl_LocalWaypointSpeedCommandType_initialize_w_params(
    UMAA_MO_LocalWaypointControl_LocalWaypointSpeedCommandType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_MO_LocalWaypointControl_LocalWaypointSpeedCommandType_finalize_w_return(
    UMAA_MO_LocalWaypointControl_LocalWaypointSpeedCommandType* self);

NDDSUSERDllExport
void UMAA_MO_LocalWaypointControl_LocalWaypointSpeedCommandType_finalize(
    UMAA_MO_LocalWaypointControl_LocalWaypointSpeedCommandType* self);

NDDSUSERDllExport
void UMAA_MO_LocalWaypointControl_LocalWaypointSpeedCommandType_finalize_ex(
    UMAA_MO_LocalWaypointControl_LocalWaypointSpeedCommandType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_MO_LocalWaypointControl_LocalWaypointSpeedCommandType_finalize_w_params(
    UMAA_MO_LocalWaypointControl_LocalWaypointSpeedCommandType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_MO_LocalWaypointControl_LocalWaypointSpeedCommandType_finalize_optional_members(
    UMAA_MO_LocalWaypointControl_LocalWaypointSpeedCommandType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_MO_LocalWaypointControl_LocalWaypointSpeedCommandType_copy(
    UMAA_MO_LocalWaypointControl_LocalWaypointSpeedCommandType* dst,
    const UMAA_MO_LocalWaypointControl_LocalWaypointSpeedCommandType* src);

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
        struct type_code< UMAA_MO_LocalWaypointControl_LocalWaypointSpeedCommandType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* LocalWaypointSpeedCommandType */

