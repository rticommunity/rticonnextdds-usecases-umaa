

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ThrusterSpecsType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef ThrusterSpecsType_2109516380_h
#define ThrusterSpecsType_2109516380_h

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
#include "UMAA/Common/PrimitiveConstrained/ConstrainedTypes.h"

extern "C" {

    extern const char *UMAA_EO_ThrusterSpecs_ThrusterSpecsTypeTYPENAME;

}

struct UMAA_EO_ThrusterSpecs_ThrusterSpecsTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_EO_ThrusterSpecs_ThrusterSpecsTypeTypeSupport;
class UMAA_EO_ThrusterSpecs_ThrusterSpecsTypeDataWriter;
class UMAA_EO_ThrusterSpecs_ThrusterSpecsTypeDataReader;
#endif
class UMAA_EO_ThrusterSpecs_ThrusterSpecsType 
{
  public:
    typedef struct UMAA_EO_ThrusterSpecs_ThrusterSpecsTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_EO_ThrusterSpecs_ThrusterSpecsTypeTypeSupport TypeSupport;
    typedef UMAA_EO_ThrusterSpecs_ThrusterSpecsTypeDataWriter DataWriter;
    typedef UMAA_EO_ThrusterSpecs_ThrusterSpecsTypeDataReader DataReader;
    #endif

    DDS_Double   maxRPM ;
    UMAA_Common_MaritimeEnumeration_MountModeEnumType_MountModeEnumType   mountType ;
    DDS_Char *   name ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_EO_ThrusterSpecs_ThrusterSpecsType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_EO_ThrusterSpecs_ThrusterSpecsType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_EO_ThrusterSpecs_ThrusterSpecsType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_EO_ThrusterSpecs_ThrusterSpecsType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_EO_ThrusterSpecs_ThrusterSpecsTypeSeq, UMAA_EO_ThrusterSpecs_ThrusterSpecsType);

NDDSUSERDllExport
RTIBool UMAA_EO_ThrusterSpecs_ThrusterSpecsType_initialize(
    UMAA_EO_ThrusterSpecs_ThrusterSpecsType* self);

NDDSUSERDllExport
RTIBool UMAA_EO_ThrusterSpecs_ThrusterSpecsType_initialize_ex(
    UMAA_EO_ThrusterSpecs_ThrusterSpecsType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_EO_ThrusterSpecs_ThrusterSpecsType_initialize_w_params(
    UMAA_EO_ThrusterSpecs_ThrusterSpecsType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_EO_ThrusterSpecs_ThrusterSpecsType_finalize_w_return(
    UMAA_EO_ThrusterSpecs_ThrusterSpecsType* self);

NDDSUSERDllExport
void UMAA_EO_ThrusterSpecs_ThrusterSpecsType_finalize(
    UMAA_EO_ThrusterSpecs_ThrusterSpecsType* self);

NDDSUSERDllExport
void UMAA_EO_ThrusterSpecs_ThrusterSpecsType_finalize_ex(
    UMAA_EO_ThrusterSpecs_ThrusterSpecsType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_EO_ThrusterSpecs_ThrusterSpecsType_finalize_w_params(
    UMAA_EO_ThrusterSpecs_ThrusterSpecsType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_EO_ThrusterSpecs_ThrusterSpecsType_finalize_optional_members(
    UMAA_EO_ThrusterSpecs_ThrusterSpecsType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_EO_ThrusterSpecs_ThrusterSpecsType_copy(
    UMAA_EO_ThrusterSpecs_ThrusterSpecsType* dst,
    const UMAA_EO_ThrusterSpecs_ThrusterSpecsType* src);

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
        struct type_code< UMAA_EO_ThrusterSpecs_ThrusterSpecsType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* ThrusterSpecsType */

