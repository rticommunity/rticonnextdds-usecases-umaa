

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from SelfCollisionAvoidanceCommandType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef SelfCollisionAvoidanceCommandType_2078732767_h
#define SelfCollisionAvoidanceCommandType_2078732767_h

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

static const DDS_Char * const UMAA_MO_SelfCollisionAvoidanceControl_SelfCollisionAvoidanceCommand_TOPIC= "UMAA::MO::SelfCollisionAvoidanceControl::SelfCollisionAvoidanceCommand";

extern "C" {

    extern const char *UMAA_MO_SelfCollisionAvoidanceControl_SelfCollisionAvoidanceCommandTypeTYPENAME;

}

struct UMAA_MO_SelfCollisionAvoidanceControl_SelfCollisionAvoidanceCommandTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_MO_SelfCollisionAvoidanceControl_SelfCollisionAvoidanceCommandTypeTypeSupport;
class UMAA_MO_SelfCollisionAvoidanceControl_SelfCollisionAvoidanceCommandTypeDataWriter;
class UMAA_MO_SelfCollisionAvoidanceControl_SelfCollisionAvoidanceCommandTypeDataReader;
#endif
class UMAA_MO_SelfCollisionAvoidanceControl_SelfCollisionAvoidanceCommandType 
{
  public:
    typedef struct UMAA_MO_SelfCollisionAvoidanceControl_SelfCollisionAvoidanceCommandTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_MO_SelfCollisionAvoidanceControl_SelfCollisionAvoidanceCommandTypeTypeSupport TypeSupport;
    typedef UMAA_MO_SelfCollisionAvoidanceControl_SelfCollisionAvoidanceCommandTypeDataWriter DataWriter;
    typedef UMAA_MO_SelfCollisionAvoidanceControl_SelfCollisionAvoidanceCommandTypeDataReader DataReader;
    #endif

    DDS_Long   priority ;
    UMAA_Common_MaritimeEnumeration_CollisionAvoidStateEnumType_CollisionAvoidStateEnumType   state ;
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
NDDSUSERDllExport DDS_TypeCode * UMAA_MO_SelfCollisionAvoidanceControl_SelfCollisionAvoidanceCommandType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_MO_SelfCollisionAvoidanceControl_SelfCollisionAvoidanceCommandType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MO_SelfCollisionAvoidanceControl_SelfCollisionAvoidanceCommandType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MO_SelfCollisionAvoidanceControl_SelfCollisionAvoidanceCommandType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_MO_SelfCollisionAvoidanceControl_SelfCollisionAvoidanceCommandTypeSeq, UMAA_MO_SelfCollisionAvoidanceControl_SelfCollisionAvoidanceCommandType);

NDDSUSERDllExport
RTIBool UMAA_MO_SelfCollisionAvoidanceControl_SelfCollisionAvoidanceCommandType_initialize(
    UMAA_MO_SelfCollisionAvoidanceControl_SelfCollisionAvoidanceCommandType* self);

NDDSUSERDllExport
RTIBool UMAA_MO_SelfCollisionAvoidanceControl_SelfCollisionAvoidanceCommandType_initialize_ex(
    UMAA_MO_SelfCollisionAvoidanceControl_SelfCollisionAvoidanceCommandType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_MO_SelfCollisionAvoidanceControl_SelfCollisionAvoidanceCommandType_initialize_w_params(
    UMAA_MO_SelfCollisionAvoidanceControl_SelfCollisionAvoidanceCommandType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_MO_SelfCollisionAvoidanceControl_SelfCollisionAvoidanceCommandType_finalize_w_return(
    UMAA_MO_SelfCollisionAvoidanceControl_SelfCollisionAvoidanceCommandType* self);

NDDSUSERDllExport
void UMAA_MO_SelfCollisionAvoidanceControl_SelfCollisionAvoidanceCommandType_finalize(
    UMAA_MO_SelfCollisionAvoidanceControl_SelfCollisionAvoidanceCommandType* self);

NDDSUSERDllExport
void UMAA_MO_SelfCollisionAvoidanceControl_SelfCollisionAvoidanceCommandType_finalize_ex(
    UMAA_MO_SelfCollisionAvoidanceControl_SelfCollisionAvoidanceCommandType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_MO_SelfCollisionAvoidanceControl_SelfCollisionAvoidanceCommandType_finalize_w_params(
    UMAA_MO_SelfCollisionAvoidanceControl_SelfCollisionAvoidanceCommandType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_MO_SelfCollisionAvoidanceControl_SelfCollisionAvoidanceCommandType_finalize_optional_members(
    UMAA_MO_SelfCollisionAvoidanceControl_SelfCollisionAvoidanceCommandType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_MO_SelfCollisionAvoidanceControl_SelfCollisionAvoidanceCommandType_copy(
    UMAA_MO_SelfCollisionAvoidanceControl_SelfCollisionAvoidanceCommandType* dst,
    const UMAA_MO_SelfCollisionAvoidanceControl_SelfCollisionAvoidanceCommandType* src);

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
        struct type_code< UMAA_MO_SelfCollisionAvoidanceControl_SelfCollisionAvoidanceCommandType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* SelfCollisionAvoidanceCommandType */

