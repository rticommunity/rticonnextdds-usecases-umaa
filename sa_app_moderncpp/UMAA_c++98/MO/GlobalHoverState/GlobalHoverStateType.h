

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GlobalHoverStateType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef GlobalHoverStateType_1807390999_h
#define GlobalHoverStateType_1807390999_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "UMAA/MO/GlobalHoverState/GlobalHoveringHoverType.h"
#include "UMAA/MO/GlobalHoverState/GlobalTransitHoverType.h"

typedef enum UMAA_MO_GlobalHoverState_GlobalHoverStateType_Specializations_GlobalHoverStateType_Selectors
{
    UMAA_MO_GlobalHoverState_GlobalHoverStateType_Specializations_GlobalHoverStateType_Selectors_GLOBALTRANSITHOVERTYPE_SELECT , 
    UMAA_MO_GlobalHoverState_GlobalHoverStateType_Specializations_GlobalHoverStateType_Selectors_GLOBALHOVERINGHOVERTYPE_SELECT 
} UMAA_MO_GlobalHoverState_GlobalHoverStateType_Specializations_GlobalHoverStateType_Selectors;
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_MO_GlobalHoverState_GlobalHoverStateType_Specializations_GlobalHoverStateType_Selectors_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_MO_GlobalHoverState_GlobalHoverStateType_Specializations_GlobalHoverStateType_Selectors_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MO_GlobalHoverState_GlobalHoverStateType_Specializations_GlobalHoverStateType_Selectors_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MO_GlobalHoverState_GlobalHoverStateType_Specializations_GlobalHoverStateType_Selectors_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_MO_GlobalHoverState_GlobalHoverStateType_Specializations_GlobalHoverStateType_SelectorsSeq, UMAA_MO_GlobalHoverState_GlobalHoverStateType_Specializations_GlobalHoverStateType_Selectors);

NDDSUSERDllExport
RTIBool UMAA_MO_GlobalHoverState_GlobalHoverStateType_Specializations_GlobalHoverStateType_Selectors_initialize(
    UMAA_MO_GlobalHoverState_GlobalHoverStateType_Specializations_GlobalHoverStateType_Selectors* self);

NDDSUSERDllExport
RTIBool UMAA_MO_GlobalHoverState_GlobalHoverStateType_Specializations_GlobalHoverStateType_Selectors_initialize_ex(
    UMAA_MO_GlobalHoverState_GlobalHoverStateType_Specializations_GlobalHoverStateType_Selectors* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_MO_GlobalHoverState_GlobalHoverStateType_Specializations_GlobalHoverStateType_Selectors_initialize_w_params(
    UMAA_MO_GlobalHoverState_GlobalHoverStateType_Specializations_GlobalHoverStateType_Selectors* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_MO_GlobalHoverState_GlobalHoverStateType_Specializations_GlobalHoverStateType_Selectors_finalize_w_return(
    UMAA_MO_GlobalHoverState_GlobalHoverStateType_Specializations_GlobalHoverStateType_Selectors* self);

NDDSUSERDllExport
void UMAA_MO_GlobalHoverState_GlobalHoverStateType_Specializations_GlobalHoverStateType_Selectors_finalize(
    UMAA_MO_GlobalHoverState_GlobalHoverStateType_Specializations_GlobalHoverStateType_Selectors* self);

NDDSUSERDllExport
void UMAA_MO_GlobalHoverState_GlobalHoverStateType_Specializations_GlobalHoverStateType_Selectors_finalize_ex(
    UMAA_MO_GlobalHoverState_GlobalHoverStateType_Specializations_GlobalHoverStateType_Selectors* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_MO_GlobalHoverState_GlobalHoverStateType_Specializations_GlobalHoverStateType_Selectors_finalize_w_params(
    UMAA_MO_GlobalHoverState_GlobalHoverStateType_Specializations_GlobalHoverStateType_Selectors* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_MO_GlobalHoverState_GlobalHoverStateType_Specializations_GlobalHoverStateType_Selectors_finalize_optional_members(
    UMAA_MO_GlobalHoverState_GlobalHoverStateType_Specializations_GlobalHoverStateType_Selectors* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_MO_GlobalHoverState_GlobalHoverStateType_Specializations_GlobalHoverStateType_Selectors_copy(
    UMAA_MO_GlobalHoverState_GlobalHoverStateType_Specializations_GlobalHoverStateType_Selectors* dst,
    const UMAA_MO_GlobalHoverState_GlobalHoverStateType_Specializations_GlobalHoverStateType_Selectors* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

extern "C" {

    extern const char *UMAA_MO_GlobalHoverState_GlobalHoverStateType_Specializations_GlobalHoverStateType_UnionTYPENAME;

}

struct UMAA_MO_GlobalHoverState_GlobalHoverStateType_Specializations_GlobalHoverStateType_UnionSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_MO_GlobalHoverState_GlobalHoverStateType_Specializations_GlobalHoverStateType_UnionTypeSupport;
class UMAA_MO_GlobalHoverState_GlobalHoverStateType_Specializations_GlobalHoverStateType_UnionDataWriter;
class UMAA_MO_GlobalHoverState_GlobalHoverStateType_Specializations_GlobalHoverStateType_UnionDataReader;
#endif

typedef struct UMAA_MO_GlobalHoverState_GlobalHoverStateType_Specializations_GlobalHoverStateType_Union
{
    typedef struct UMAA_MO_GlobalHoverState_GlobalHoverStateType_Specializations_GlobalHoverStateType_UnionSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_MO_GlobalHoverState_GlobalHoverStateType_Specializations_GlobalHoverStateType_UnionTypeSupport TypeSupport;
    typedef UMAA_MO_GlobalHoverState_GlobalHoverStateType_Specializations_GlobalHoverStateType_UnionDataWriter DataWriter;
    typedef UMAA_MO_GlobalHoverState_GlobalHoverStateType_Specializations_GlobalHoverStateType_UnionDataReader DataReader;
    #endif

    UMAA_MO_GlobalHoverState_GlobalHoverStateType_Specializations_GlobalHoverStateType_Selectors _d;
    struct UMAA_MO_GlobalHoverState_GlobalHoverStateType_Specializations_GlobalHoverStateType_Union_u 
    {

        UMAA_MO_GlobalHoverState_GlobalTransitHoverType   GlobalTransitHoverType_data ;
        UMAA_MO_GlobalHoverState_GlobalHoveringHoverType   GlobalHoveringHoverType_data ;
    }_u;

} UMAA_MO_GlobalHoverState_GlobalHoverStateType_Specializations_GlobalHoverStateType_Union ;
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_MO_GlobalHoverState_GlobalHoverStateType_Specializations_GlobalHoverStateType_Union_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_MO_GlobalHoverState_GlobalHoverStateType_Specializations_GlobalHoverStateType_Union_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MO_GlobalHoverState_GlobalHoverStateType_Specializations_GlobalHoverStateType_Union_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MO_GlobalHoverState_GlobalHoverStateType_Specializations_GlobalHoverStateType_Union_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_MO_GlobalHoverState_GlobalHoverStateType_Specializations_GlobalHoverStateType_UnionSeq, UMAA_MO_GlobalHoverState_GlobalHoverStateType_Specializations_GlobalHoverStateType_Union);

NDDSUSERDllExport
RTIBool UMAA_MO_GlobalHoverState_GlobalHoverStateType_Specializations_GlobalHoverStateType_Union_initialize(
    UMAA_MO_GlobalHoverState_GlobalHoverStateType_Specializations_GlobalHoverStateType_Union* self);

NDDSUSERDllExport
RTIBool UMAA_MO_GlobalHoverState_GlobalHoverStateType_Specializations_GlobalHoverStateType_Union_initialize_ex(
    UMAA_MO_GlobalHoverState_GlobalHoverStateType_Specializations_GlobalHoverStateType_Union* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_MO_GlobalHoverState_GlobalHoverStateType_Specializations_GlobalHoverStateType_Union_initialize_w_params(
    UMAA_MO_GlobalHoverState_GlobalHoverStateType_Specializations_GlobalHoverStateType_Union* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_MO_GlobalHoverState_GlobalHoverStateType_Specializations_GlobalHoverStateType_Union_finalize_w_return(
    UMAA_MO_GlobalHoverState_GlobalHoverStateType_Specializations_GlobalHoverStateType_Union* self);

NDDSUSERDllExport
void UMAA_MO_GlobalHoverState_GlobalHoverStateType_Specializations_GlobalHoverStateType_Union_finalize(
    UMAA_MO_GlobalHoverState_GlobalHoverStateType_Specializations_GlobalHoverStateType_Union* self);

NDDSUSERDllExport
void UMAA_MO_GlobalHoverState_GlobalHoverStateType_Specializations_GlobalHoverStateType_Union_finalize_ex(
    UMAA_MO_GlobalHoverState_GlobalHoverStateType_Specializations_GlobalHoverStateType_Union* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_MO_GlobalHoverState_GlobalHoverStateType_Specializations_GlobalHoverStateType_Union_finalize_w_params(
    UMAA_MO_GlobalHoverState_GlobalHoverStateType_Specializations_GlobalHoverStateType_Union* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_MO_GlobalHoverState_GlobalHoverStateType_Specializations_GlobalHoverStateType_Union_finalize_optional_members(
    UMAA_MO_GlobalHoverState_GlobalHoverStateType_Specializations_GlobalHoverStateType_Union* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_MO_GlobalHoverState_GlobalHoverStateType_Specializations_GlobalHoverStateType_Union_copy(
    UMAA_MO_GlobalHoverState_GlobalHoverStateType_Specializations_GlobalHoverStateType_Union* dst,
    const UMAA_MO_GlobalHoverState_GlobalHoverStateType_Specializations_GlobalHoverStateType_Union* src);

NDDSUSERDllExport
DDS_LongLong UMAA_MO_GlobalHoverState_GlobalHoverStateType_Specializations_GlobalHoverStateType_Union_getDefaultDiscriminator(void);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

extern "C" {

    extern const char *UMAA_MO_GlobalHoverState_GlobalHoverStateTypeTYPENAME;

}

struct UMAA_MO_GlobalHoverState_GlobalHoverStateTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_MO_GlobalHoverState_GlobalHoverStateTypeTypeSupport;
class UMAA_MO_GlobalHoverState_GlobalHoverStateTypeDataWriter;
class UMAA_MO_GlobalHoverState_GlobalHoverStateTypeDataReader;
#endif
class UMAA_MO_GlobalHoverState_GlobalHoverStateType 
{
  public:
    typedef struct UMAA_MO_GlobalHoverState_GlobalHoverStateTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_MO_GlobalHoverState_GlobalHoverStateTypeTypeSupport TypeSupport;
    typedef UMAA_MO_GlobalHoverState_GlobalHoverStateTypeDataWriter DataWriter;
    typedef UMAA_MO_GlobalHoverState_GlobalHoverStateTypeDataReader DataReader;
    #endif

    UMAA_MO_GlobalHoverState_GlobalHoverStateType_Specializations_GlobalHoverStateType_Union   GlobalHoverStateType_subtypes ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_MO_GlobalHoverState_GlobalHoverStateType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_MO_GlobalHoverState_GlobalHoverStateType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MO_GlobalHoverState_GlobalHoverStateType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MO_GlobalHoverState_GlobalHoverStateType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_MO_GlobalHoverState_GlobalHoverStateTypeSeq, UMAA_MO_GlobalHoverState_GlobalHoverStateType);

NDDSUSERDllExport
RTIBool UMAA_MO_GlobalHoverState_GlobalHoverStateType_initialize(
    UMAA_MO_GlobalHoverState_GlobalHoverStateType* self);

NDDSUSERDllExport
RTIBool UMAA_MO_GlobalHoverState_GlobalHoverStateType_initialize_ex(
    UMAA_MO_GlobalHoverState_GlobalHoverStateType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_MO_GlobalHoverState_GlobalHoverStateType_initialize_w_params(
    UMAA_MO_GlobalHoverState_GlobalHoverStateType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_MO_GlobalHoverState_GlobalHoverStateType_finalize_w_return(
    UMAA_MO_GlobalHoverState_GlobalHoverStateType* self);

NDDSUSERDllExport
void UMAA_MO_GlobalHoverState_GlobalHoverStateType_finalize(
    UMAA_MO_GlobalHoverState_GlobalHoverStateType* self);

NDDSUSERDllExport
void UMAA_MO_GlobalHoverState_GlobalHoverStateType_finalize_ex(
    UMAA_MO_GlobalHoverState_GlobalHoverStateType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_MO_GlobalHoverState_GlobalHoverStateType_finalize_w_params(
    UMAA_MO_GlobalHoverState_GlobalHoverStateType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_MO_GlobalHoverState_GlobalHoverStateType_finalize_optional_members(
    UMAA_MO_GlobalHoverState_GlobalHoverStateType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_MO_GlobalHoverState_GlobalHoverStateType_copy(
    UMAA_MO_GlobalHoverState_GlobalHoverStateType* dst,
    const UMAA_MO_GlobalHoverState_GlobalHoverStateType* src);

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
        struct type_code< UMAA_MO_GlobalHoverState_GlobalHoverStateType_Specializations_GlobalHoverStateType_Union> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code< UMAA_MO_GlobalHoverState_GlobalHoverStateType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* GlobalHoverStateType */

