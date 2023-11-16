

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from CameraSelectionCommandType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef CameraSelectionCommandType_1371587223_h
#define CameraSelectionCommandType_1371587223_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "UMAA/Common/Measurement/Measurements.h"

static const DDS_Char * const UMAA_SEM_CameraSelectionControl_CameraSelectionCommand_TOPIC= "UMAA::SEM::CameraSelectionControl::CameraSelectionCommand";

extern "C" {

    extern const char *UMAA_SEM_CameraSelectionControl_CameraSelectionCommandTypeTYPENAME;

}

struct UMAA_SEM_CameraSelectionControl_CameraSelectionCommandTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_SEM_CameraSelectionControl_CameraSelectionCommandTypeTypeSupport;
class UMAA_SEM_CameraSelectionControl_CameraSelectionCommandTypeDataWriter;
class UMAA_SEM_CameraSelectionControl_CameraSelectionCommandTypeDataReader;
#endif
class UMAA_SEM_CameraSelectionControl_CameraSelectionCommandType 
{
  public:
    typedef struct UMAA_SEM_CameraSelectionControl_CameraSelectionCommandTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_SEM_CameraSelectionControl_CameraSelectionCommandTypeTypeSupport TypeSupport;
    typedef UMAA_SEM_CameraSelectionControl_CameraSelectionCommandTypeDataWriter DataWriter;
    typedef UMAA_SEM_CameraSelectionControl_CameraSelectionCommandTypeDataReader DataReader;
    #endif

    UMAA_Common_Measurement_NumericGUID   cameraID ;
    UMAA_Common_Measurement_NumericGUID   source ;
    UMAA_Common_Measurement_NumericGUID   destination ;
    UMAA_Common_Measurement_NumericGUID   sessionID ;
    UMAA_Common_Measurement_DateTime   timeStamp ;
    UMAA_Common_Measurement_NumericGUID   muxID ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_SEM_CameraSelectionControl_CameraSelectionCommandType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_SEM_CameraSelectionControl_CameraSelectionCommandType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_SEM_CameraSelectionControl_CameraSelectionCommandType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_SEM_CameraSelectionControl_CameraSelectionCommandType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_SEM_CameraSelectionControl_CameraSelectionCommandTypeSeq, UMAA_SEM_CameraSelectionControl_CameraSelectionCommandType);

NDDSUSERDllExport
RTIBool UMAA_SEM_CameraSelectionControl_CameraSelectionCommandType_initialize(
    UMAA_SEM_CameraSelectionControl_CameraSelectionCommandType* self);

NDDSUSERDllExport
RTIBool UMAA_SEM_CameraSelectionControl_CameraSelectionCommandType_initialize_ex(
    UMAA_SEM_CameraSelectionControl_CameraSelectionCommandType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_SEM_CameraSelectionControl_CameraSelectionCommandType_initialize_w_params(
    UMAA_SEM_CameraSelectionControl_CameraSelectionCommandType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_SEM_CameraSelectionControl_CameraSelectionCommandType_finalize_w_return(
    UMAA_SEM_CameraSelectionControl_CameraSelectionCommandType* self);

NDDSUSERDllExport
void UMAA_SEM_CameraSelectionControl_CameraSelectionCommandType_finalize(
    UMAA_SEM_CameraSelectionControl_CameraSelectionCommandType* self);

NDDSUSERDllExport
void UMAA_SEM_CameraSelectionControl_CameraSelectionCommandType_finalize_ex(
    UMAA_SEM_CameraSelectionControl_CameraSelectionCommandType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_SEM_CameraSelectionControl_CameraSelectionCommandType_finalize_w_params(
    UMAA_SEM_CameraSelectionControl_CameraSelectionCommandType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_SEM_CameraSelectionControl_CameraSelectionCommandType_finalize_optional_members(
    UMAA_SEM_CameraSelectionControl_CameraSelectionCommandType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_SEM_CameraSelectionControl_CameraSelectionCommandType_copy(
    UMAA_SEM_CameraSelectionControl_CameraSelectionCommandType* dst,
    const UMAA_SEM_CameraSelectionControl_CameraSelectionCommandType* src);

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
        struct type_code< UMAA_SEM_CameraSelectionControl_CameraSelectionCommandType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* CameraSelectionCommandType */

