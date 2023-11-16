

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GuardedTeleopCommandType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef GuardedTeleopCommandType_1079252020_h
#define GuardedTeleopCommandType_1079252020_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "UMAA/Common/Enumeration/EnumerationSets.h"
#include "UMAA/Common/MaritimeEnumeration/EnumerationSets.h"
#include "UMAA/Common/Measurement/Measurements.h"

static const DDS_Char * const UMAA_MO_GuardedTeleopControl_GuardedTeleopCommand_TOPIC= "UMAA::MO::GuardedTeleopControl::GuardedTeleopCommand";

extern "C" {

    extern const char *UMAA_MO_GuardedTeleopControl_GuardedTeleopCommandTypeTYPENAME;

}

struct UMAA_MO_GuardedTeleopControl_GuardedTeleopCommandTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_MO_GuardedTeleopControl_GuardedTeleopCommandTypeTypeSupport;
class UMAA_MO_GuardedTeleopControl_GuardedTeleopCommandTypeDataWriter;
class UMAA_MO_GuardedTeleopControl_GuardedTeleopCommandTypeDataReader;
#endif
class UMAA_MO_GuardedTeleopControl_GuardedTeleopCommandType 
{
  public:
    typedef struct UMAA_MO_GuardedTeleopControl_GuardedTeleopCommandTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_MO_GuardedTeleopControl_GuardedTeleopCommandTypeTypeSupport TypeSupport;
    typedef UMAA_MO_GuardedTeleopControl_GuardedTeleopCommandTypeDataWriter DataWriter;
    typedef UMAA_MO_GuardedTeleopControl_GuardedTeleopCommandTypeDataReader DataReader;
    #endif

    UMAA_Common_MaritimeEnumeration_ObstacleAvoidanceEnumType_ObstacleAvoidanceEnumType   obstacleAvoidance ;
    DDS_Double   pathTolerance ;
    DDS_Boolean   stopOnPitchoverLimit ;
    DDS_Boolean   stopOnRolloverLimit ;
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
NDDSUSERDllExport DDS_TypeCode * UMAA_MO_GuardedTeleopControl_GuardedTeleopCommandType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_MO_GuardedTeleopControl_GuardedTeleopCommandType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MO_GuardedTeleopControl_GuardedTeleopCommandType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MO_GuardedTeleopControl_GuardedTeleopCommandType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_MO_GuardedTeleopControl_GuardedTeleopCommandTypeSeq, UMAA_MO_GuardedTeleopControl_GuardedTeleopCommandType);

NDDSUSERDllExport
RTIBool UMAA_MO_GuardedTeleopControl_GuardedTeleopCommandType_initialize(
    UMAA_MO_GuardedTeleopControl_GuardedTeleopCommandType* self);

NDDSUSERDllExport
RTIBool UMAA_MO_GuardedTeleopControl_GuardedTeleopCommandType_initialize_ex(
    UMAA_MO_GuardedTeleopControl_GuardedTeleopCommandType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_MO_GuardedTeleopControl_GuardedTeleopCommandType_initialize_w_params(
    UMAA_MO_GuardedTeleopControl_GuardedTeleopCommandType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_MO_GuardedTeleopControl_GuardedTeleopCommandType_finalize_w_return(
    UMAA_MO_GuardedTeleopControl_GuardedTeleopCommandType* self);

NDDSUSERDllExport
void UMAA_MO_GuardedTeleopControl_GuardedTeleopCommandType_finalize(
    UMAA_MO_GuardedTeleopControl_GuardedTeleopCommandType* self);

NDDSUSERDllExport
void UMAA_MO_GuardedTeleopControl_GuardedTeleopCommandType_finalize_ex(
    UMAA_MO_GuardedTeleopControl_GuardedTeleopCommandType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_MO_GuardedTeleopControl_GuardedTeleopCommandType_finalize_w_params(
    UMAA_MO_GuardedTeleopControl_GuardedTeleopCommandType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_MO_GuardedTeleopControl_GuardedTeleopCommandType_finalize_optional_members(
    UMAA_MO_GuardedTeleopControl_GuardedTeleopCommandType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_MO_GuardedTeleopControl_GuardedTeleopCommandType_copy(
    UMAA_MO_GuardedTeleopControl_GuardedTeleopCommandType* dst,
    const UMAA_MO_GuardedTeleopControl_GuardedTeleopCommandType* src);

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
        struct type_code< UMAA_MO_GuardedTeleopControl_GuardedTeleopCommandType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* GuardedTeleopCommandType */

