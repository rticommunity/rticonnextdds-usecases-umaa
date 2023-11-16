

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Speed_BSL_Capability.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef Speed_BSL_Capability_311073524_h
#define Speed_BSL_Capability_311073524_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "UMAA/Common/Measurement/Measurements.h"
#include "UMAA/Common/MeasurementSpecifications/Speed_BSL_Specification.h"
#include "UMAA/Common/Requirements/Speed_BSL_Requirement.h"

extern "C" {

    extern const char *UMAA_Common_Capabilities_Speed_BSL_CapabilityTYPENAME;

}

struct UMAA_Common_Capabilities_Speed_BSL_CapabilitySeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_Common_Capabilities_Speed_BSL_CapabilityTypeSupport;
class UMAA_Common_Capabilities_Speed_BSL_CapabilityDataWriter;
class UMAA_Common_Capabilities_Speed_BSL_CapabilityDataReader;
#endif
class UMAA_Common_Capabilities_Speed_BSL_Capability 
{
  public:
    typedef struct UMAA_Common_Capabilities_Speed_BSL_CapabilitySeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_Common_Capabilities_Speed_BSL_CapabilityTypeSupport TypeSupport;
    typedef UMAA_Common_Capabilities_Speed_BSL_CapabilityDataWriter DataWriter;
    typedef UMAA_Common_Capabilities_Speed_BSL_CapabilityDataReader DataReader;
    #endif

    DDS_Double   speed ;
    UMAA_Common_MeasurementSpecifications_Speed_BSL_Specification   speedDomain ;
    UMAA_Common_Requirements_Speed_BSL_Requirement   speedSetPoint ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_Common_Capabilities_Speed_BSL_Capability_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_Common_Capabilities_Speed_BSL_Capability_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Capabilities_Speed_BSL_Capability_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Capabilities_Speed_BSL_Capability_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_Common_Capabilities_Speed_BSL_CapabilitySeq, UMAA_Common_Capabilities_Speed_BSL_Capability);

NDDSUSERDllExport
RTIBool UMAA_Common_Capabilities_Speed_BSL_Capability_initialize(
    UMAA_Common_Capabilities_Speed_BSL_Capability* self);

NDDSUSERDllExport
RTIBool UMAA_Common_Capabilities_Speed_BSL_Capability_initialize_ex(
    UMAA_Common_Capabilities_Speed_BSL_Capability* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_Common_Capabilities_Speed_BSL_Capability_initialize_w_params(
    UMAA_Common_Capabilities_Speed_BSL_Capability* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_Common_Capabilities_Speed_BSL_Capability_finalize_w_return(
    UMAA_Common_Capabilities_Speed_BSL_Capability* self);

NDDSUSERDllExport
void UMAA_Common_Capabilities_Speed_BSL_Capability_finalize(
    UMAA_Common_Capabilities_Speed_BSL_Capability* self);

NDDSUSERDllExport
void UMAA_Common_Capabilities_Speed_BSL_Capability_finalize_ex(
    UMAA_Common_Capabilities_Speed_BSL_Capability* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_Common_Capabilities_Speed_BSL_Capability_finalize_w_params(
    UMAA_Common_Capabilities_Speed_BSL_Capability* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_Common_Capabilities_Speed_BSL_Capability_finalize_optional_members(
    UMAA_Common_Capabilities_Speed_BSL_Capability* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_Common_Capabilities_Speed_BSL_Capability_copy(
    UMAA_Common_Capabilities_Speed_BSL_Capability* dst,
    const UMAA_Common_Capabilities_Speed_BSL_Capability* src);

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
        struct type_code< UMAA_Common_Capabilities_Speed_BSL_Capability> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* Speed_BSL_Capability */

