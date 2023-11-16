

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ThrusterControlType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef ThrusterControlType_1102505377_h
#define ThrusterControlType_1102505377_h

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

extern "C" {

    extern const char *UMAA_EO_ThrusterControl_ThrusterControlTypeTYPENAME;

}

struct UMAA_EO_ThrusterControl_ThrusterControlTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_EO_ThrusterControl_ThrusterControlTypeTypeSupport;
class UMAA_EO_ThrusterControl_ThrusterControlTypeDataWriter;
class UMAA_EO_ThrusterControl_ThrusterControlTypeDataReader;
#endif
class UMAA_EO_ThrusterControl_ThrusterControlType 
{
  public:
    typedef struct UMAA_EO_ThrusterControl_ThrusterControlTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_EO_ThrusterControl_ThrusterControlTypeTypeSupport TypeSupport;
    typedef UMAA_EO_ThrusterControl_ThrusterControlTypeDataWriter DataWriter;
    typedef UMAA_EO_ThrusterControl_ThrusterControlTypeDataReader DataReader;
    #endif

    DDS_Double   effort ;
    UMAA_Common_MaritimeEnumeration_PowerPlantStateEnumType_PowerPlantStateEnumType   state ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_EO_ThrusterControl_ThrusterControlType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_EO_ThrusterControl_ThrusterControlType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_EO_ThrusterControl_ThrusterControlType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_EO_ThrusterControl_ThrusterControlType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_EO_ThrusterControl_ThrusterControlTypeSeq, UMAA_EO_ThrusterControl_ThrusterControlType);

NDDSUSERDllExport
RTIBool UMAA_EO_ThrusterControl_ThrusterControlType_initialize(
    UMAA_EO_ThrusterControl_ThrusterControlType* self);

NDDSUSERDllExport
RTIBool UMAA_EO_ThrusterControl_ThrusterControlType_initialize_ex(
    UMAA_EO_ThrusterControl_ThrusterControlType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_EO_ThrusterControl_ThrusterControlType_initialize_w_params(
    UMAA_EO_ThrusterControl_ThrusterControlType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_EO_ThrusterControl_ThrusterControlType_finalize_w_return(
    UMAA_EO_ThrusterControl_ThrusterControlType* self);

NDDSUSERDllExport
void UMAA_EO_ThrusterControl_ThrusterControlType_finalize(
    UMAA_EO_ThrusterControl_ThrusterControlType* self);

NDDSUSERDllExport
void UMAA_EO_ThrusterControl_ThrusterControlType_finalize_ex(
    UMAA_EO_ThrusterControl_ThrusterControlType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_EO_ThrusterControl_ThrusterControlType_finalize_w_params(
    UMAA_EO_ThrusterControl_ThrusterControlType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_EO_ThrusterControl_ThrusterControlType_finalize_optional_members(
    UMAA_EO_ThrusterControl_ThrusterControlType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_EO_ThrusterControl_ThrusterControlType_copy(
    UMAA_EO_ThrusterControl_ThrusterControlType* dst,
    const UMAA_EO_ThrusterControl_ThrusterControlType* src);

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
        struct type_code< UMAA_EO_ThrusterControl_ThrusterControlType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* ThrusterControlType */

