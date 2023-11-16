

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from LocalWaypointCommandType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef LocalWaypointCommandType_219227066_h
#define LocalWaypointCommandType_219227066_h

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

static const DDS_Char * const UMAA_MO_LocalWaypointControl_LocalWaypointCommand_TOPIC= "UMAA::MO::LocalWaypointControl::LocalWaypointCommand";

extern "C" {

    extern const char *UMAA_MO_LocalWaypointControl_LocalWaypointCommandTypeTYPENAME;

}

struct UMAA_MO_LocalWaypointControl_LocalWaypointCommandTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_MO_LocalWaypointControl_LocalWaypointCommandTypeTypeSupport;
class UMAA_MO_LocalWaypointControl_LocalWaypointCommandTypeDataWriter;
class UMAA_MO_LocalWaypointControl_LocalWaypointCommandTypeDataReader;
#endif
class UMAA_MO_LocalWaypointControl_LocalWaypointCommandType 
{
  public:
    typedef struct UMAA_MO_LocalWaypointControl_LocalWaypointCommandTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_MO_LocalWaypointControl_LocalWaypointCommandTypeTypeSupport TypeSupport;
    typedef UMAA_MO_LocalWaypointControl_LocalWaypointCommandTypeDataWriter DataWriter;
    typedef UMAA_MO_LocalWaypointControl_LocalWaypointCommandTypeDataReader DataReader;
    #endif

    DDS_Long   waypointCount ;
    UMAA_MO_LocalWaypointControl_LocalWaypointTypeSeq  waypoints ;
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
NDDSUSERDllExport DDS_TypeCode * UMAA_MO_LocalWaypointControl_LocalWaypointCommandType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_MO_LocalWaypointControl_LocalWaypointCommandType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MO_LocalWaypointControl_LocalWaypointCommandType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MO_LocalWaypointControl_LocalWaypointCommandType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_MO_LocalWaypointControl_LocalWaypointCommandTypeSeq, UMAA_MO_LocalWaypointControl_LocalWaypointCommandType);

NDDSUSERDllExport
RTIBool UMAA_MO_LocalWaypointControl_LocalWaypointCommandType_initialize(
    UMAA_MO_LocalWaypointControl_LocalWaypointCommandType* self);

NDDSUSERDllExport
RTIBool UMAA_MO_LocalWaypointControl_LocalWaypointCommandType_initialize_ex(
    UMAA_MO_LocalWaypointControl_LocalWaypointCommandType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_MO_LocalWaypointControl_LocalWaypointCommandType_initialize_w_params(
    UMAA_MO_LocalWaypointControl_LocalWaypointCommandType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_MO_LocalWaypointControl_LocalWaypointCommandType_finalize_w_return(
    UMAA_MO_LocalWaypointControl_LocalWaypointCommandType* self);

NDDSUSERDllExport
void UMAA_MO_LocalWaypointControl_LocalWaypointCommandType_finalize(
    UMAA_MO_LocalWaypointControl_LocalWaypointCommandType* self);

NDDSUSERDllExport
void UMAA_MO_LocalWaypointControl_LocalWaypointCommandType_finalize_ex(
    UMAA_MO_LocalWaypointControl_LocalWaypointCommandType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_MO_LocalWaypointControl_LocalWaypointCommandType_finalize_w_params(
    UMAA_MO_LocalWaypointControl_LocalWaypointCommandType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_MO_LocalWaypointControl_LocalWaypointCommandType_finalize_optional_members(
    UMAA_MO_LocalWaypointControl_LocalWaypointCommandType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_MO_LocalWaypointControl_LocalWaypointCommandType_copy(
    UMAA_MO_LocalWaypointControl_LocalWaypointCommandType* dst,
    const UMAA_MO_LocalWaypointControl_LocalWaypointCommandType* src);

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
        struct type_code< UMAA_MO_LocalWaypointControl_LocalWaypointCommandType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* LocalWaypointCommandType */

