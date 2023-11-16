

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from PanTiltJointVelocityCommandType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef PanTiltJointVelocityCommandType_1563520374_h
#define PanTiltJointVelocityCommandType_1563520374_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "UMAA/Common/Measurement/Measurements.h"

static const DDS_Char * const UMAA_SEM_PanTiltJointVelocityControl_PanTiltJointVelocityCommand_TOPIC= "UMAA::SEM::PanTiltJointVelocityControl::PanTiltJointVelocityCommand";

extern "C" {

    extern const char *UMAA_SEM_PanTiltJointVelocityControl_PanTiltJointVelocityCommandTypeTYPENAME;

}

struct UMAA_SEM_PanTiltJointVelocityControl_PanTiltJointVelocityCommandTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_SEM_PanTiltJointVelocityControl_PanTiltJointVelocityCommandTypeTypeSupport;
class UMAA_SEM_PanTiltJointVelocityControl_PanTiltJointVelocityCommandTypeDataWriter;
class UMAA_SEM_PanTiltJointVelocityControl_PanTiltJointVelocityCommandTypeDataReader;
#endif
class UMAA_SEM_PanTiltJointVelocityControl_PanTiltJointVelocityCommandType 
{
  public:
    typedef struct UMAA_SEM_PanTiltJointVelocityControl_PanTiltJointVelocityCommandTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_SEM_PanTiltJointVelocityControl_PanTiltJointVelocityCommandTypeTypeSupport TypeSupport;
    typedef UMAA_SEM_PanTiltJointVelocityControl_PanTiltJointVelocityCommandTypeDataWriter DataWriter;
    typedef UMAA_SEM_PanTiltJointVelocityControl_PanTiltJointVelocityCommandTypeDataReader DataReader;
    #endif

    DDS_Double   panVelocity ;
    DDS_Double   tiltVelocity ;
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
NDDSUSERDllExport DDS_TypeCode * UMAA_SEM_PanTiltJointVelocityControl_PanTiltJointVelocityCommandType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_SEM_PanTiltJointVelocityControl_PanTiltJointVelocityCommandType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_SEM_PanTiltJointVelocityControl_PanTiltJointVelocityCommandType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_SEM_PanTiltJointVelocityControl_PanTiltJointVelocityCommandType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_SEM_PanTiltJointVelocityControl_PanTiltJointVelocityCommandTypeSeq, UMAA_SEM_PanTiltJointVelocityControl_PanTiltJointVelocityCommandType);

NDDSUSERDllExport
RTIBool UMAA_SEM_PanTiltJointVelocityControl_PanTiltJointVelocityCommandType_initialize(
    UMAA_SEM_PanTiltJointVelocityControl_PanTiltJointVelocityCommandType* self);

NDDSUSERDllExport
RTIBool UMAA_SEM_PanTiltJointVelocityControl_PanTiltJointVelocityCommandType_initialize_ex(
    UMAA_SEM_PanTiltJointVelocityControl_PanTiltJointVelocityCommandType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_SEM_PanTiltJointVelocityControl_PanTiltJointVelocityCommandType_initialize_w_params(
    UMAA_SEM_PanTiltJointVelocityControl_PanTiltJointVelocityCommandType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_SEM_PanTiltJointVelocityControl_PanTiltJointVelocityCommandType_finalize_w_return(
    UMAA_SEM_PanTiltJointVelocityControl_PanTiltJointVelocityCommandType* self);

NDDSUSERDllExport
void UMAA_SEM_PanTiltJointVelocityControl_PanTiltJointVelocityCommandType_finalize(
    UMAA_SEM_PanTiltJointVelocityControl_PanTiltJointVelocityCommandType* self);

NDDSUSERDllExport
void UMAA_SEM_PanTiltJointVelocityControl_PanTiltJointVelocityCommandType_finalize_ex(
    UMAA_SEM_PanTiltJointVelocityControl_PanTiltJointVelocityCommandType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_SEM_PanTiltJointVelocityControl_PanTiltJointVelocityCommandType_finalize_w_params(
    UMAA_SEM_PanTiltJointVelocityControl_PanTiltJointVelocityCommandType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_SEM_PanTiltJointVelocityControl_PanTiltJointVelocityCommandType_finalize_optional_members(
    UMAA_SEM_PanTiltJointVelocityControl_PanTiltJointVelocityCommandType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_SEM_PanTiltJointVelocityControl_PanTiltJointVelocityCommandType_copy(
    UMAA_SEM_PanTiltJointVelocityControl_PanTiltJointVelocityCommandType* dst,
    const UMAA_SEM_PanTiltJointVelocityControl_PanTiltJointVelocityCommandType* src);

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
        struct type_code< UMAA_SEM_PanTiltJointVelocityControl_PanTiltJointVelocityCommandType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* PanTiltJointVelocityCommandType */

