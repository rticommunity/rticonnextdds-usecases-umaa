

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Altitude_AGL.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef Altitude_AGL_1207832626_h
#define Altitude_AGL_1207832626_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "UMAA/Common/MeasurementCoordinate/Engineering_Coordinate_Axes.h"

extern "C" {

    extern const char *UMAA_Common_Measurement_Altitude_AGLTYPENAME;

}

struct UMAA_Common_Measurement_Altitude_AGLSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_Common_Measurement_Altitude_AGLTypeSupport;
class UMAA_Common_Measurement_Altitude_AGLDataWriter;
class UMAA_Common_Measurement_Altitude_AGLDataReader;
#endif
class UMAA_Common_Measurement_Altitude_AGL 
{
  public:
    typedef struct UMAA_Common_Measurement_Altitude_AGLSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_Common_Measurement_Altitude_AGLTypeSupport TypeSupport;
    typedef UMAA_Common_Measurement_Altitude_AGLDataWriter DataWriter;
    typedef UMAA_Common_Measurement_Altitude_AGLDataReader DataReader;
    #endif

    DDS_Double   altitude ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_Common_Measurement_Altitude_AGL_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_Common_Measurement_Altitude_AGL_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_Altitude_AGL_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_Altitude_AGL_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_Common_Measurement_Altitude_AGLSeq, UMAA_Common_Measurement_Altitude_AGL);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_Altitude_AGL_initialize(
    UMAA_Common_Measurement_Altitude_AGL* self);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_Altitude_AGL_initialize_ex(
    UMAA_Common_Measurement_Altitude_AGL* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_Altitude_AGL_initialize_w_params(
    UMAA_Common_Measurement_Altitude_AGL* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_Altitude_AGL_finalize_w_return(
    UMAA_Common_Measurement_Altitude_AGL* self);

NDDSUSERDllExport
void UMAA_Common_Measurement_Altitude_AGL_finalize(
    UMAA_Common_Measurement_Altitude_AGL* self);

NDDSUSERDllExport
void UMAA_Common_Measurement_Altitude_AGL_finalize_ex(
    UMAA_Common_Measurement_Altitude_AGL* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_Common_Measurement_Altitude_AGL_finalize_w_params(
    UMAA_Common_Measurement_Altitude_AGL* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_Common_Measurement_Altitude_AGL_finalize_optional_members(
    UMAA_Common_Measurement_Altitude_AGL* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_Altitude_AGL_copy(
    UMAA_Common_Measurement_Altitude_AGL* dst,
    const UMAA_Common_Measurement_Altitude_AGL* src);

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
        struct type_code< UMAA_Common_Measurement_Altitude_AGL> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* Altitude_AGL */

