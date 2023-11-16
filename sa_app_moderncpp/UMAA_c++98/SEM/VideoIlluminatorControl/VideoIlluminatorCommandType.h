

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from VideoIlluminatorCommandType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef VideoIlluminatorCommandType_1485715203_h
#define VideoIlluminatorCommandType_1485715203_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "UMAA/Common/Measurement/Measurements.h"

static const DDS_Char * const UMAA_SEM_VideoIlluminatorControl_VideoIlluminatorCommand_TOPIC= "UMAA::SEM::VideoIlluminatorControl::VideoIlluminatorCommand";

extern "C" {

    extern const char *UMAA_SEM_VideoIlluminatorControl_VideoIlluminatorCommandTypeTYPENAME;

}

struct UMAA_SEM_VideoIlluminatorControl_VideoIlluminatorCommandTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_SEM_VideoIlluminatorControl_VideoIlluminatorCommandTypeTypeSupport;
class UMAA_SEM_VideoIlluminatorControl_VideoIlluminatorCommandTypeDataWriter;
class UMAA_SEM_VideoIlluminatorControl_VideoIlluminatorCommandTypeDataReader;
#endif
class UMAA_SEM_VideoIlluminatorControl_VideoIlluminatorCommandType 
{
  public:
    typedef struct UMAA_SEM_VideoIlluminatorControl_VideoIlluminatorCommandTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_SEM_VideoIlluminatorControl_VideoIlluminatorCommandTypeTypeSupport TypeSupport;
    typedef UMAA_SEM_VideoIlluminatorControl_VideoIlluminatorCommandTypeDataWriter DataWriter;
    typedef UMAA_SEM_VideoIlluminatorControl_VideoIlluminatorCommandTypeDataReader DataReader;
    #endif

    DDS_Double   beamWidth ;
    DDS_Long   level ;
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
NDDSUSERDllExport DDS_TypeCode * UMAA_SEM_VideoIlluminatorControl_VideoIlluminatorCommandType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_SEM_VideoIlluminatorControl_VideoIlluminatorCommandType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_SEM_VideoIlluminatorControl_VideoIlluminatorCommandType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_SEM_VideoIlluminatorControl_VideoIlluminatorCommandType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_SEM_VideoIlluminatorControl_VideoIlluminatorCommandTypeSeq, UMAA_SEM_VideoIlluminatorControl_VideoIlluminatorCommandType);

NDDSUSERDllExport
RTIBool UMAA_SEM_VideoIlluminatorControl_VideoIlluminatorCommandType_initialize(
    UMAA_SEM_VideoIlluminatorControl_VideoIlluminatorCommandType* self);

NDDSUSERDllExport
RTIBool UMAA_SEM_VideoIlluminatorControl_VideoIlluminatorCommandType_initialize_ex(
    UMAA_SEM_VideoIlluminatorControl_VideoIlluminatorCommandType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_SEM_VideoIlluminatorControl_VideoIlluminatorCommandType_initialize_w_params(
    UMAA_SEM_VideoIlluminatorControl_VideoIlluminatorCommandType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_SEM_VideoIlluminatorControl_VideoIlluminatorCommandType_finalize_w_return(
    UMAA_SEM_VideoIlluminatorControl_VideoIlluminatorCommandType* self);

NDDSUSERDllExport
void UMAA_SEM_VideoIlluminatorControl_VideoIlluminatorCommandType_finalize(
    UMAA_SEM_VideoIlluminatorControl_VideoIlluminatorCommandType* self);

NDDSUSERDllExport
void UMAA_SEM_VideoIlluminatorControl_VideoIlluminatorCommandType_finalize_ex(
    UMAA_SEM_VideoIlluminatorControl_VideoIlluminatorCommandType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_SEM_VideoIlluminatorControl_VideoIlluminatorCommandType_finalize_w_params(
    UMAA_SEM_VideoIlluminatorControl_VideoIlluminatorCommandType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_SEM_VideoIlluminatorControl_VideoIlluminatorCommandType_finalize_optional_members(
    UMAA_SEM_VideoIlluminatorControl_VideoIlluminatorCommandType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_SEM_VideoIlluminatorControl_VideoIlluminatorCommandType_copy(
    UMAA_SEM_VideoIlluminatorControl_VideoIlluminatorCommandType* dst,
    const UMAA_SEM_VideoIlluminatorControl_VideoIlluminatorCommandType* src);

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
        struct type_code< UMAA_SEM_VideoIlluminatorControl_VideoIlluminatorCommandType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* VideoIlluminatorCommandType */

