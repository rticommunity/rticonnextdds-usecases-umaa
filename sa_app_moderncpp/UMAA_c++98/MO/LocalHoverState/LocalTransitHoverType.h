

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from LocalTransitHoverType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef LocalTransitHoverType_266285208_h
#define LocalTransitHoverType_266285208_h

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

    extern const char *UMAA_MO_LocalHoverState_LocalTransitHoverTypeTYPENAME;

}

struct UMAA_MO_LocalHoverState_LocalTransitHoverTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_MO_LocalHoverState_LocalTransitHoverTypeTypeSupport;
class UMAA_MO_LocalHoverState_LocalTransitHoverTypeDataWriter;
class UMAA_MO_LocalHoverState_LocalTransitHoverTypeDataReader;
#endif
class UMAA_MO_LocalHoverState_LocalTransitHoverType 
{
  public:
    typedef struct UMAA_MO_LocalHoverState_LocalTransitHoverTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_MO_LocalHoverState_LocalTransitHoverTypeTypeSupport TypeSupport;
    typedef UMAA_MO_LocalHoverState_LocalTransitHoverTypeDataWriter DataWriter;
    typedef UMAA_MO_LocalHoverState_LocalTransitHoverTypeDataReader DataReader;
    #endif

    DDS_Boolean   elevationAchieved ;
    DDS_Boolean   speedAchieved ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_MO_LocalHoverState_LocalTransitHoverType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_MO_LocalHoverState_LocalTransitHoverType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MO_LocalHoverState_LocalTransitHoverType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MO_LocalHoverState_LocalTransitHoverType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_MO_LocalHoverState_LocalTransitHoverTypeSeq, UMAA_MO_LocalHoverState_LocalTransitHoverType);

NDDSUSERDllExport
RTIBool UMAA_MO_LocalHoverState_LocalTransitHoverType_initialize(
    UMAA_MO_LocalHoverState_LocalTransitHoverType* self);

NDDSUSERDllExport
RTIBool UMAA_MO_LocalHoverState_LocalTransitHoverType_initialize_ex(
    UMAA_MO_LocalHoverState_LocalTransitHoverType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_MO_LocalHoverState_LocalTransitHoverType_initialize_w_params(
    UMAA_MO_LocalHoverState_LocalTransitHoverType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_MO_LocalHoverState_LocalTransitHoverType_finalize_w_return(
    UMAA_MO_LocalHoverState_LocalTransitHoverType* self);

NDDSUSERDllExport
void UMAA_MO_LocalHoverState_LocalTransitHoverType_finalize(
    UMAA_MO_LocalHoverState_LocalTransitHoverType* self);

NDDSUSERDllExport
void UMAA_MO_LocalHoverState_LocalTransitHoverType_finalize_ex(
    UMAA_MO_LocalHoverState_LocalTransitHoverType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_MO_LocalHoverState_LocalTransitHoverType_finalize_w_params(
    UMAA_MO_LocalHoverState_LocalTransitHoverType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_MO_LocalHoverState_LocalTransitHoverType_finalize_optional_members(
    UMAA_MO_LocalHoverState_LocalTransitHoverType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_MO_LocalHoverState_LocalTransitHoverType_copy(
    UMAA_MO_LocalHoverState_LocalTransitHoverType* dst,
    const UMAA_MO_LocalHoverState_LocalTransitHoverType* src);

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
        struct type_code< UMAA_MO_LocalHoverState_LocalTransitHoverType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* LocalTransitHoverType */

