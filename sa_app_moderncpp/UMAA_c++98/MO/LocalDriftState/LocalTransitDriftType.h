

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from LocalTransitDriftType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef LocalTransitDriftType_98748119_h
#define LocalTransitDriftType_98748119_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "UMAA/Common/Enumeration/EnumerationSets.h"

extern "C" {

    extern const char *UMAA_MO_LocalDriftState_LocalTransitDriftTypeTYPENAME;

}

struct UMAA_MO_LocalDriftState_LocalTransitDriftTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_MO_LocalDriftState_LocalTransitDriftTypeTypeSupport;
class UMAA_MO_LocalDriftState_LocalTransitDriftTypeDataWriter;
class UMAA_MO_LocalDriftState_LocalTransitDriftTypeDataReader;
#endif
class UMAA_MO_LocalDriftState_LocalTransitDriftType 
{
  public:
    typedef struct UMAA_MO_LocalDriftState_LocalTransitDriftTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_MO_LocalDriftState_LocalTransitDriftTypeTypeSupport TypeSupport;
    typedef UMAA_MO_LocalDriftState_LocalTransitDriftTypeDataWriter DataWriter;
    typedef UMAA_MO_LocalDriftState_LocalTransitDriftTypeDataReader DataReader;
    #endif

    DDS_Boolean   transitElevationAchieved ;
    DDS_Boolean   transitSpeedAchieved ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_MO_LocalDriftState_LocalTransitDriftType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_MO_LocalDriftState_LocalTransitDriftType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MO_LocalDriftState_LocalTransitDriftType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MO_LocalDriftState_LocalTransitDriftType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_MO_LocalDriftState_LocalTransitDriftTypeSeq, UMAA_MO_LocalDriftState_LocalTransitDriftType);

NDDSUSERDllExport
RTIBool UMAA_MO_LocalDriftState_LocalTransitDriftType_initialize(
    UMAA_MO_LocalDriftState_LocalTransitDriftType* self);

NDDSUSERDllExport
RTIBool UMAA_MO_LocalDriftState_LocalTransitDriftType_initialize_ex(
    UMAA_MO_LocalDriftState_LocalTransitDriftType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_MO_LocalDriftState_LocalTransitDriftType_initialize_w_params(
    UMAA_MO_LocalDriftState_LocalTransitDriftType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_MO_LocalDriftState_LocalTransitDriftType_finalize_w_return(
    UMAA_MO_LocalDriftState_LocalTransitDriftType* self);

NDDSUSERDllExport
void UMAA_MO_LocalDriftState_LocalTransitDriftType_finalize(
    UMAA_MO_LocalDriftState_LocalTransitDriftType* self);

NDDSUSERDllExport
void UMAA_MO_LocalDriftState_LocalTransitDriftType_finalize_ex(
    UMAA_MO_LocalDriftState_LocalTransitDriftType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_MO_LocalDriftState_LocalTransitDriftType_finalize_w_params(
    UMAA_MO_LocalDriftState_LocalTransitDriftType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_MO_LocalDriftState_LocalTransitDriftType_finalize_optional_members(
    UMAA_MO_LocalDriftState_LocalTransitDriftType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_MO_LocalDriftState_LocalTransitDriftType_copy(
    UMAA_MO_LocalDriftState_LocalTransitDriftType* dst,
    const UMAA_MO_LocalDriftState_LocalTransitDriftType* src);

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
        struct type_code< UMAA_MO_LocalDriftState_LocalTransitDriftType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* LocalTransitDriftType */

