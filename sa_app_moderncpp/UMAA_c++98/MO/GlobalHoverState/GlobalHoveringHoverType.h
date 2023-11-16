

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GlobalHoveringHoverType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef GlobalHoveringHoverType_463028581_h
#define GlobalHoveringHoverType_463028581_h

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

    extern const char *UMAA_MO_GlobalHoverState_GlobalHoveringHoverTypeTYPENAME;

}

struct UMAA_MO_GlobalHoverState_GlobalHoveringHoverTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_MO_GlobalHoverState_GlobalHoveringHoverTypeTypeSupport;
class UMAA_MO_GlobalHoverState_GlobalHoveringHoverTypeDataWriter;
class UMAA_MO_GlobalHoverState_GlobalHoveringHoverTypeDataReader;
#endif
class UMAA_MO_GlobalHoverState_GlobalHoveringHoverType 
{
  public:
    typedef struct UMAA_MO_GlobalHoverState_GlobalHoveringHoverTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_MO_GlobalHoverState_GlobalHoveringHoverTypeTypeSupport TypeSupport;
    typedef UMAA_MO_GlobalHoverState_GlobalHoveringHoverTypeDataWriter DataWriter;
    typedef UMAA_MO_GlobalHoverState_GlobalHoveringHoverTypeDataReader DataReader;
    #endif

    DDS_Boolean   elevationAchieved ;
    DDS_Boolean   headingAchieved ;
    DDS_Boolean   positionAchieved ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_MO_GlobalHoverState_GlobalHoveringHoverType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_MO_GlobalHoverState_GlobalHoveringHoverType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MO_GlobalHoverState_GlobalHoveringHoverType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MO_GlobalHoverState_GlobalHoveringHoverType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_MO_GlobalHoverState_GlobalHoveringHoverTypeSeq, UMAA_MO_GlobalHoverState_GlobalHoveringHoverType);

NDDSUSERDllExport
RTIBool UMAA_MO_GlobalHoverState_GlobalHoveringHoverType_initialize(
    UMAA_MO_GlobalHoverState_GlobalHoveringHoverType* self);

NDDSUSERDllExport
RTIBool UMAA_MO_GlobalHoverState_GlobalHoveringHoverType_initialize_ex(
    UMAA_MO_GlobalHoverState_GlobalHoveringHoverType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_MO_GlobalHoverState_GlobalHoveringHoverType_initialize_w_params(
    UMAA_MO_GlobalHoverState_GlobalHoveringHoverType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_MO_GlobalHoverState_GlobalHoveringHoverType_finalize_w_return(
    UMAA_MO_GlobalHoverState_GlobalHoveringHoverType* self);

NDDSUSERDllExport
void UMAA_MO_GlobalHoverState_GlobalHoveringHoverType_finalize(
    UMAA_MO_GlobalHoverState_GlobalHoveringHoverType* self);

NDDSUSERDllExport
void UMAA_MO_GlobalHoverState_GlobalHoveringHoverType_finalize_ex(
    UMAA_MO_GlobalHoverState_GlobalHoveringHoverType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_MO_GlobalHoverState_GlobalHoveringHoverType_finalize_w_params(
    UMAA_MO_GlobalHoverState_GlobalHoveringHoverType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_MO_GlobalHoverState_GlobalHoveringHoverType_finalize_optional_members(
    UMAA_MO_GlobalHoverState_GlobalHoveringHoverType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_MO_GlobalHoverState_GlobalHoveringHoverType_copy(
    UMAA_MO_GlobalHoverState_GlobalHoveringHoverType* dst,
    const UMAA_MO_GlobalHoverState_GlobalHoveringHoverType* src);

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
        struct type_code< UMAA_MO_GlobalHoverState_GlobalHoveringHoverType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* GlobalHoveringHoverType */

