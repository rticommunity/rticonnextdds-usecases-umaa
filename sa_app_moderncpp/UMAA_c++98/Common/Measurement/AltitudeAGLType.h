

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from AltitudeAGLType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef AltitudeAGLType_874324485_h
#define AltitudeAGLType_874324485_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "UMAA/Common/Measurement/Altitude_AGL.h"

extern "C" {

    extern const char *UMAA_Common_Measurement_AltitudeAGLTypeTYPENAME;

}

struct UMAA_Common_Measurement_AltitudeAGLTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_Common_Measurement_AltitudeAGLTypeTypeSupport;
class UMAA_Common_Measurement_AltitudeAGLTypeDataWriter;
class UMAA_Common_Measurement_AltitudeAGLTypeDataReader;
#endif
class UMAA_Common_Measurement_AltitudeAGLType 
{
  public:
    typedef struct UMAA_Common_Measurement_AltitudeAGLTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_Common_Measurement_AltitudeAGLTypeTypeSupport TypeSupport;
    typedef UMAA_Common_Measurement_AltitudeAGLTypeDataWriter DataWriter;
    typedef UMAA_Common_Measurement_AltitudeAGLTypeDataReader DataReader;
    #endif

    UMAA_Common_Measurement_Altitude_AGL   altitudeAGL ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_Common_Measurement_AltitudeAGLType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_Common_Measurement_AltitudeAGLType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_AltitudeAGLType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_AltitudeAGLType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_Common_Measurement_AltitudeAGLTypeSeq, UMAA_Common_Measurement_AltitudeAGLType);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_AltitudeAGLType_initialize(
    UMAA_Common_Measurement_AltitudeAGLType* self);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_AltitudeAGLType_initialize_ex(
    UMAA_Common_Measurement_AltitudeAGLType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_AltitudeAGLType_initialize_w_params(
    UMAA_Common_Measurement_AltitudeAGLType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_AltitudeAGLType_finalize_w_return(
    UMAA_Common_Measurement_AltitudeAGLType* self);

NDDSUSERDllExport
void UMAA_Common_Measurement_AltitudeAGLType_finalize(
    UMAA_Common_Measurement_AltitudeAGLType* self);

NDDSUSERDllExport
void UMAA_Common_Measurement_AltitudeAGLType_finalize_ex(
    UMAA_Common_Measurement_AltitudeAGLType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_Common_Measurement_AltitudeAGLType_finalize_w_params(
    UMAA_Common_Measurement_AltitudeAGLType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_Common_Measurement_AltitudeAGLType_finalize_optional_members(
    UMAA_Common_Measurement_AltitudeAGLType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_AltitudeAGLType_copy(
    UMAA_Common_Measurement_AltitudeAGLType* dst,
    const UMAA_Common_Measurement_AltitudeAGLType* src);

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
        struct type_code< UMAA_Common_Measurement_AltitudeAGLType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* AltitudeAGLType */

