

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from CameraCommandType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef CameraCommandType_63809630_h
#define CameraCommandType_63809630_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "UMAA/Common/Enumeration/EnumerationSets.h"
#include "UMAA/Common/Measurement/BuiltInTestStatusType_All.h"
#include "UMAA/Common/Measurement/Measurements.h"
#include "UMAA/Common/Measurement/Position2D.h"

static const DDS_Char * const UMAA_SEM_CameraControl_CameraCommand_TOPIC= "UMAA::SEM::CameraControl::CameraCommand";

extern "C" {

    extern const char *UMAA_SEM_CameraControl_CameraCommandTypeTYPENAME;

}

struct UMAA_SEM_CameraControl_CameraCommandTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_SEM_CameraControl_CameraCommandTypeTypeSupport;
class UMAA_SEM_CameraControl_CameraCommandTypeDataWriter;
class UMAA_SEM_CameraControl_CameraCommandTypeDataReader;
#endif
class UMAA_SEM_CameraControl_CameraCommandType 
{
  public:
    typedef struct UMAA_SEM_CameraControl_CameraCommandTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_SEM_CameraControl_CameraCommandTypeTypeSupport TypeSupport;
    typedef UMAA_SEM_CameraControl_CameraCommandTypeDataWriter DataWriter;
    typedef UMAA_SEM_CameraControl_CameraCommandTypeDataReader DataReader;
    #endif

    UMAA_Common_Measurement_BuiltInTestStatusType_All   * builtInTest ;
    DDS_Boolean   filtered ;
    UMAA_Common_Measurement_Position2D   imageCenterLocation ;
    UMAA_Common_Enumeration_IRPolarityEnumType_IRPolarityEnumType   mode ;
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
NDDSUSERDllExport DDS_TypeCode * UMAA_SEM_CameraControl_CameraCommandType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_SEM_CameraControl_CameraCommandType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_SEM_CameraControl_CameraCommandType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_SEM_CameraControl_CameraCommandType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_SEM_CameraControl_CameraCommandTypeSeq, UMAA_SEM_CameraControl_CameraCommandType);

NDDSUSERDllExport
RTIBool UMAA_SEM_CameraControl_CameraCommandType_initialize(
    UMAA_SEM_CameraControl_CameraCommandType* self);

NDDSUSERDllExport
RTIBool UMAA_SEM_CameraControl_CameraCommandType_initialize_ex(
    UMAA_SEM_CameraControl_CameraCommandType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_SEM_CameraControl_CameraCommandType_initialize_w_params(
    UMAA_SEM_CameraControl_CameraCommandType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_SEM_CameraControl_CameraCommandType_finalize_w_return(
    UMAA_SEM_CameraControl_CameraCommandType* self);

NDDSUSERDllExport
void UMAA_SEM_CameraControl_CameraCommandType_finalize(
    UMAA_SEM_CameraControl_CameraCommandType* self);

NDDSUSERDllExport
void UMAA_SEM_CameraControl_CameraCommandType_finalize_ex(
    UMAA_SEM_CameraControl_CameraCommandType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_SEM_CameraControl_CameraCommandType_finalize_w_params(
    UMAA_SEM_CameraControl_CameraCommandType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_SEM_CameraControl_CameraCommandType_finalize_optional_members(
    UMAA_SEM_CameraControl_CameraCommandType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_SEM_CameraControl_CameraCommandType_copy(
    UMAA_SEM_CameraControl_CameraCommandType* dst,
    const UMAA_SEM_CameraControl_CameraCommandType* src);

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
        struct type_code< UMAA_SEM_CameraControl_CameraCommandType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* CameraCommandType */

