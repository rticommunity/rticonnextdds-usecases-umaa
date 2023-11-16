

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from UVPlatformCapabilitiesType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef UVPlatformCapabilitiesType_797577100_h
#define UVPlatformCapabilitiesType_797577100_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "UMAA/Common/Measurement/Measurements.h"

extern "C" {

    extern const char *UMAA_EO_UVPlatformSpecs_UVPlatformCapabilitiesTypeTYPENAME;

}

struct UMAA_EO_UVPlatformSpecs_UVPlatformCapabilitiesTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_EO_UVPlatformSpecs_UVPlatformCapabilitiesTypeTypeSupport;
class UMAA_EO_UVPlatformSpecs_UVPlatformCapabilitiesTypeDataWriter;
class UMAA_EO_UVPlatformSpecs_UVPlatformCapabilitiesTypeDataReader;
#endif
class UMAA_EO_UVPlatformSpecs_UVPlatformCapabilitiesType 
{
  public:
    typedef struct UMAA_EO_UVPlatformSpecs_UVPlatformCapabilitiesTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_EO_UVPlatformSpecs_UVPlatformCapabilitiesTypeTypeSupport TypeSupport;
    typedef UMAA_EO_UVPlatformSpecs_UVPlatformCapabilitiesTypeDataWriter DataWriter;
    typedef UMAA_EO_UVPlatformSpecs_UVPlatformCapabilitiesTypeDataReader DataReader;
    #endif

    DDS_Double   cruisingSpeed ;
    DDS_Double   maxForwardSpeed ;
    DDS_Double   maxPitchRate ;
    DDS_Double   maxReverseSpeed ;
    DDS_Double   * maxTowingSpeed ;
    DDS_Double   * maxTowingTurnRate ;
    DDS_Double   maxTurnRate ;
    DDS_Double   * minTowingSpeed ;
    DDS_Double   * minTowingTurnRate ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_EO_UVPlatformSpecs_UVPlatformCapabilitiesType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_EO_UVPlatformSpecs_UVPlatformCapabilitiesType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_EO_UVPlatformSpecs_UVPlatformCapabilitiesType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_EO_UVPlatformSpecs_UVPlatformCapabilitiesType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_EO_UVPlatformSpecs_UVPlatformCapabilitiesTypeSeq, UMAA_EO_UVPlatformSpecs_UVPlatformCapabilitiesType);

NDDSUSERDllExport
RTIBool UMAA_EO_UVPlatformSpecs_UVPlatformCapabilitiesType_initialize(
    UMAA_EO_UVPlatformSpecs_UVPlatformCapabilitiesType* self);

NDDSUSERDllExport
RTIBool UMAA_EO_UVPlatformSpecs_UVPlatformCapabilitiesType_initialize_ex(
    UMAA_EO_UVPlatformSpecs_UVPlatformCapabilitiesType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_EO_UVPlatformSpecs_UVPlatformCapabilitiesType_initialize_w_params(
    UMAA_EO_UVPlatformSpecs_UVPlatformCapabilitiesType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_EO_UVPlatformSpecs_UVPlatformCapabilitiesType_finalize_w_return(
    UMAA_EO_UVPlatformSpecs_UVPlatformCapabilitiesType* self);

NDDSUSERDllExport
void UMAA_EO_UVPlatformSpecs_UVPlatformCapabilitiesType_finalize(
    UMAA_EO_UVPlatformSpecs_UVPlatformCapabilitiesType* self);

NDDSUSERDllExport
void UMAA_EO_UVPlatformSpecs_UVPlatformCapabilitiesType_finalize_ex(
    UMAA_EO_UVPlatformSpecs_UVPlatformCapabilitiesType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_EO_UVPlatformSpecs_UVPlatformCapabilitiesType_finalize_w_params(
    UMAA_EO_UVPlatformSpecs_UVPlatformCapabilitiesType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_EO_UVPlatformSpecs_UVPlatformCapabilitiesType_finalize_optional_members(
    UMAA_EO_UVPlatformSpecs_UVPlatformCapabilitiesType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_EO_UVPlatformSpecs_UVPlatformCapabilitiesType_copy(
    UMAA_EO_UVPlatformSpecs_UVPlatformCapabilitiesType* dst,
    const UMAA_EO_UVPlatformSpecs_UVPlatformCapabilitiesType* src);

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
        struct type_code< UMAA_EO_UVPlatformSpecs_UVPlatformCapabilitiesType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* UVPlatformCapabilitiesType */

