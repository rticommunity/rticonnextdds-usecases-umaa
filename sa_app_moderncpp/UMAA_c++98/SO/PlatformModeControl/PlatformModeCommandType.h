

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from PlatformModeCommandType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef PlatformModeCommandType_547482005_h
#define PlatformModeCommandType_547482005_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "UMAA/Common/MaritimeEnumeration/EnumerationSets.h"
#include "UMAA/Common/Measurement/Measurements.h"

static const DDS_Char * const UMAA_SO_PlatformModeControl_PlatformModeCommand_TOPIC= "UMAA::SO::PlatformModeControl::PlatformModeCommand";

extern "C" {

    extern const char *UMAA_SO_PlatformModeControl_PlatformModeCommandTypeTYPENAME;

}

struct UMAA_SO_PlatformModeControl_PlatformModeCommandTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_SO_PlatformModeControl_PlatformModeCommandTypeTypeSupport;
class UMAA_SO_PlatformModeControl_PlatformModeCommandTypeDataWriter;
class UMAA_SO_PlatformModeControl_PlatformModeCommandTypeDataReader;
#endif
class UMAA_SO_PlatformModeControl_PlatformModeCommandType 
{
  public:
    typedef struct UMAA_SO_PlatformModeControl_PlatformModeCommandTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_SO_PlatformModeControl_PlatformModeCommandTypeTypeSupport TypeSupport;
    typedef UMAA_SO_PlatformModeControl_PlatformModeCommandTypeDataWriter DataWriter;
    typedef UMAA_SO_PlatformModeControl_PlatformModeCommandTypeDataReader DataReader;
    #endif

    UMAA_Common_MaritimeEnumeration_PlatformModeEnumType_PlatformModeEnumType   mode ;
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
NDDSUSERDllExport DDS_TypeCode * UMAA_SO_PlatformModeControl_PlatformModeCommandType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_SO_PlatformModeControl_PlatformModeCommandType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_SO_PlatformModeControl_PlatformModeCommandType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_SO_PlatformModeControl_PlatformModeCommandType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_SO_PlatformModeControl_PlatformModeCommandTypeSeq, UMAA_SO_PlatformModeControl_PlatformModeCommandType);

NDDSUSERDllExport
RTIBool UMAA_SO_PlatformModeControl_PlatformModeCommandType_initialize(
    UMAA_SO_PlatformModeControl_PlatformModeCommandType* self);

NDDSUSERDllExport
RTIBool UMAA_SO_PlatformModeControl_PlatformModeCommandType_initialize_ex(
    UMAA_SO_PlatformModeControl_PlatformModeCommandType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_SO_PlatformModeControl_PlatformModeCommandType_initialize_w_params(
    UMAA_SO_PlatformModeControl_PlatformModeCommandType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_SO_PlatformModeControl_PlatformModeCommandType_finalize_w_return(
    UMAA_SO_PlatformModeControl_PlatformModeCommandType* self);

NDDSUSERDllExport
void UMAA_SO_PlatformModeControl_PlatformModeCommandType_finalize(
    UMAA_SO_PlatformModeControl_PlatformModeCommandType* self);

NDDSUSERDllExport
void UMAA_SO_PlatformModeControl_PlatformModeCommandType_finalize_ex(
    UMAA_SO_PlatformModeControl_PlatformModeCommandType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_SO_PlatformModeControl_PlatformModeCommandType_finalize_w_params(
    UMAA_SO_PlatformModeControl_PlatformModeCommandType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_SO_PlatformModeControl_PlatformModeCommandType_finalize_optional_members(
    UMAA_SO_PlatformModeControl_PlatformModeCommandType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_SO_PlatformModeControl_PlatformModeCommandType_copy(
    UMAA_SO_PlatformModeControl_PlatformModeCommandType* dst,
    const UMAA_SO_PlatformModeControl_PlatformModeCommandType* src);

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
        struct type_code< UMAA_SO_PlatformModeControl_PlatformModeCommandType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* PlatformModeCommandType */

