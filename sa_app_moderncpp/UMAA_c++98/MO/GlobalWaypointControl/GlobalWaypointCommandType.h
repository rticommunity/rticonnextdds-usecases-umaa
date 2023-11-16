

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GlobalWaypointCommandType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef GlobalWaypointCommandType_1702818444_h
#define GlobalWaypointCommandType_1702818444_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "UMAA/Common/Measurement/Measurements.h"
#include "UMAA/MO/GlobalWaypointControl/GlobalWaypointType.h"

static const DDS_Char * const UMAA_MO_GlobalWaypointControl_GlobalWaypointCommand_TOPIC= "UMAA::MO::GlobalWaypointControl::GlobalWaypointCommand";

extern "C" {

    extern const char *UMAA_MO_GlobalWaypointControl_GlobalWaypointCommandTypeTYPENAME;

}

struct UMAA_MO_GlobalWaypointControl_GlobalWaypointCommandTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_MO_GlobalWaypointControl_GlobalWaypointCommandTypeTypeSupport;
class UMAA_MO_GlobalWaypointControl_GlobalWaypointCommandTypeDataWriter;
class UMAA_MO_GlobalWaypointControl_GlobalWaypointCommandTypeDataReader;
#endif
class UMAA_MO_GlobalWaypointControl_GlobalWaypointCommandType 
{
  public:
    typedef struct UMAA_MO_GlobalWaypointControl_GlobalWaypointCommandTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_MO_GlobalWaypointControl_GlobalWaypointCommandTypeTypeSupport TypeSupport;
    typedef UMAA_MO_GlobalWaypointControl_GlobalWaypointCommandTypeDataWriter DataWriter;
    typedef UMAA_MO_GlobalWaypointControl_GlobalWaypointCommandTypeDataReader DataReader;
    #endif

    DDS_Long   waypointCount ;
    UMAA_MO_GlobalWaypointControl_GlobalWaypointTypeSeq  waypoints ;
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
NDDSUSERDllExport DDS_TypeCode * UMAA_MO_GlobalWaypointControl_GlobalWaypointCommandType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_MO_GlobalWaypointControl_GlobalWaypointCommandType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MO_GlobalWaypointControl_GlobalWaypointCommandType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MO_GlobalWaypointControl_GlobalWaypointCommandType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_MO_GlobalWaypointControl_GlobalWaypointCommandTypeSeq, UMAA_MO_GlobalWaypointControl_GlobalWaypointCommandType);

NDDSUSERDllExport
RTIBool UMAA_MO_GlobalWaypointControl_GlobalWaypointCommandType_initialize(
    UMAA_MO_GlobalWaypointControl_GlobalWaypointCommandType* self);

NDDSUSERDllExport
RTIBool UMAA_MO_GlobalWaypointControl_GlobalWaypointCommandType_initialize_ex(
    UMAA_MO_GlobalWaypointControl_GlobalWaypointCommandType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_MO_GlobalWaypointControl_GlobalWaypointCommandType_initialize_w_params(
    UMAA_MO_GlobalWaypointControl_GlobalWaypointCommandType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_MO_GlobalWaypointControl_GlobalWaypointCommandType_finalize_w_return(
    UMAA_MO_GlobalWaypointControl_GlobalWaypointCommandType* self);

NDDSUSERDllExport
void UMAA_MO_GlobalWaypointControl_GlobalWaypointCommandType_finalize(
    UMAA_MO_GlobalWaypointControl_GlobalWaypointCommandType* self);

NDDSUSERDllExport
void UMAA_MO_GlobalWaypointControl_GlobalWaypointCommandType_finalize_ex(
    UMAA_MO_GlobalWaypointControl_GlobalWaypointCommandType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_MO_GlobalWaypointControl_GlobalWaypointCommandType_finalize_w_params(
    UMAA_MO_GlobalWaypointControl_GlobalWaypointCommandType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_MO_GlobalWaypointControl_GlobalWaypointCommandType_finalize_optional_members(
    UMAA_MO_GlobalWaypointControl_GlobalWaypointCommandType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_MO_GlobalWaypointControl_GlobalWaypointCommandType_copy(
    UMAA_MO_GlobalWaypointControl_GlobalWaypointCommandType* dst,
    const UMAA_MO_GlobalWaypointControl_GlobalWaypointCommandType* src);

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
        struct type_code< UMAA_MO_GlobalWaypointControl_GlobalWaypointCommandType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* GlobalWaypointCommandType */

