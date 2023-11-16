

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from LocalHoverStateType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef LocalHoverStateType_1303496321_h
#define LocalHoverStateType_1303496321_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "UMAA/MO/LocalHoverState/LocalHoveringHoverType.h"
#include "UMAA/MO/LocalHoverState/LocalTransitHoverType.h"

typedef enum UMAA_MO_LocalHoverState_LocalHoverStateType_Specializations_LocalHoverStateType_Selectors
{
    UMAA_MO_LocalHoverState_LocalHoverStateType_Specializations_LocalHoverStateType_Selectors_LOCALTRANSITHOVERTYPE_SELECT , 
    UMAA_MO_LocalHoverState_LocalHoverStateType_Specializations_LocalHoverStateType_Selectors_LOCALHOVERINGHOVERTYPE_SELECT 
} UMAA_MO_LocalHoverState_LocalHoverStateType_Specializations_LocalHoverStateType_Selectors;
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_MO_LocalHoverState_LocalHoverStateType_Specializations_LocalHoverStateType_Selectors_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_MO_LocalHoverState_LocalHoverStateType_Specializations_LocalHoverStateType_Selectors_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MO_LocalHoverState_LocalHoverStateType_Specializations_LocalHoverStateType_Selectors_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MO_LocalHoverState_LocalHoverStateType_Specializations_LocalHoverStateType_Selectors_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_MO_LocalHoverState_LocalHoverStateType_Specializations_LocalHoverStateType_SelectorsSeq, UMAA_MO_LocalHoverState_LocalHoverStateType_Specializations_LocalHoverStateType_Selectors);

NDDSUSERDllExport
RTIBool UMAA_MO_LocalHoverState_LocalHoverStateType_Specializations_LocalHoverStateType_Selectors_initialize(
    UMAA_MO_LocalHoverState_LocalHoverStateType_Specializations_LocalHoverStateType_Selectors* self);

NDDSUSERDllExport
RTIBool UMAA_MO_LocalHoverState_LocalHoverStateType_Specializations_LocalHoverStateType_Selectors_initialize_ex(
    UMAA_MO_LocalHoverState_LocalHoverStateType_Specializations_LocalHoverStateType_Selectors* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_MO_LocalHoverState_LocalHoverStateType_Specializations_LocalHoverStateType_Selectors_initialize_w_params(
    UMAA_MO_LocalHoverState_LocalHoverStateType_Specializations_LocalHoverStateType_Selectors* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_MO_LocalHoverState_LocalHoverStateType_Specializations_LocalHoverStateType_Selectors_finalize_w_return(
    UMAA_MO_LocalHoverState_LocalHoverStateType_Specializations_LocalHoverStateType_Selectors* self);

NDDSUSERDllExport
void UMAA_MO_LocalHoverState_LocalHoverStateType_Specializations_LocalHoverStateType_Selectors_finalize(
    UMAA_MO_LocalHoverState_LocalHoverStateType_Specializations_LocalHoverStateType_Selectors* self);

NDDSUSERDllExport
void UMAA_MO_LocalHoverState_LocalHoverStateType_Specializations_LocalHoverStateType_Selectors_finalize_ex(
    UMAA_MO_LocalHoverState_LocalHoverStateType_Specializations_LocalHoverStateType_Selectors* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_MO_LocalHoverState_LocalHoverStateType_Specializations_LocalHoverStateType_Selectors_finalize_w_params(
    UMAA_MO_LocalHoverState_LocalHoverStateType_Specializations_LocalHoverStateType_Selectors* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_MO_LocalHoverState_LocalHoverStateType_Specializations_LocalHoverStateType_Selectors_finalize_optional_members(
    UMAA_MO_LocalHoverState_LocalHoverStateType_Specializations_LocalHoverStateType_Selectors* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_MO_LocalHoverState_LocalHoverStateType_Specializations_LocalHoverStateType_Selectors_copy(
    UMAA_MO_LocalHoverState_LocalHoverStateType_Specializations_LocalHoverStateType_Selectors* dst,
    const UMAA_MO_LocalHoverState_LocalHoverStateType_Specializations_LocalHoverStateType_Selectors* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

extern "C" {

    extern const char *UMAA_MO_LocalHoverState_LocalHoverStateType_Specializations_LocalHoverStateType_UnionTYPENAME;

}

struct UMAA_MO_LocalHoverState_LocalHoverStateType_Specializations_LocalHoverStateType_UnionSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_MO_LocalHoverState_LocalHoverStateType_Specializations_LocalHoverStateType_UnionTypeSupport;
class UMAA_MO_LocalHoverState_LocalHoverStateType_Specializations_LocalHoverStateType_UnionDataWriter;
class UMAA_MO_LocalHoverState_LocalHoverStateType_Specializations_LocalHoverStateType_UnionDataReader;
#endif

typedef struct UMAA_MO_LocalHoverState_LocalHoverStateType_Specializations_LocalHoverStateType_Union
{
    typedef struct UMAA_MO_LocalHoverState_LocalHoverStateType_Specializations_LocalHoverStateType_UnionSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_MO_LocalHoverState_LocalHoverStateType_Specializations_LocalHoverStateType_UnionTypeSupport TypeSupport;
    typedef UMAA_MO_LocalHoverState_LocalHoverStateType_Specializations_LocalHoverStateType_UnionDataWriter DataWriter;
    typedef UMAA_MO_LocalHoverState_LocalHoverStateType_Specializations_LocalHoverStateType_UnionDataReader DataReader;
    #endif

    UMAA_MO_LocalHoverState_LocalHoverStateType_Specializations_LocalHoverStateType_Selectors _d;
    struct UMAA_MO_LocalHoverState_LocalHoverStateType_Specializations_LocalHoverStateType_Union_u 
    {

        UMAA_MO_LocalHoverState_LocalTransitHoverType   LocalTransitHoverType_data ;
        UMAA_MO_LocalHoverState_LocalHoveringHoverType   LocalHoveringHoverType_data ;
    }_u;

} UMAA_MO_LocalHoverState_LocalHoverStateType_Specializations_LocalHoverStateType_Union ;
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_MO_LocalHoverState_LocalHoverStateType_Specializations_LocalHoverStateType_Union_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_MO_LocalHoverState_LocalHoverStateType_Specializations_LocalHoverStateType_Union_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MO_LocalHoverState_LocalHoverStateType_Specializations_LocalHoverStateType_Union_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MO_LocalHoverState_LocalHoverStateType_Specializations_LocalHoverStateType_Union_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_MO_LocalHoverState_LocalHoverStateType_Specializations_LocalHoverStateType_UnionSeq, UMAA_MO_LocalHoverState_LocalHoverStateType_Specializations_LocalHoverStateType_Union);

NDDSUSERDllExport
RTIBool UMAA_MO_LocalHoverState_LocalHoverStateType_Specializations_LocalHoverStateType_Union_initialize(
    UMAA_MO_LocalHoverState_LocalHoverStateType_Specializations_LocalHoverStateType_Union* self);

NDDSUSERDllExport
RTIBool UMAA_MO_LocalHoverState_LocalHoverStateType_Specializations_LocalHoverStateType_Union_initialize_ex(
    UMAA_MO_LocalHoverState_LocalHoverStateType_Specializations_LocalHoverStateType_Union* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_MO_LocalHoverState_LocalHoverStateType_Specializations_LocalHoverStateType_Union_initialize_w_params(
    UMAA_MO_LocalHoverState_LocalHoverStateType_Specializations_LocalHoverStateType_Union* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_MO_LocalHoverState_LocalHoverStateType_Specializations_LocalHoverStateType_Union_finalize_w_return(
    UMAA_MO_LocalHoverState_LocalHoverStateType_Specializations_LocalHoverStateType_Union* self);

NDDSUSERDllExport
void UMAA_MO_LocalHoverState_LocalHoverStateType_Specializations_LocalHoverStateType_Union_finalize(
    UMAA_MO_LocalHoverState_LocalHoverStateType_Specializations_LocalHoverStateType_Union* self);

NDDSUSERDllExport
void UMAA_MO_LocalHoverState_LocalHoverStateType_Specializations_LocalHoverStateType_Union_finalize_ex(
    UMAA_MO_LocalHoverState_LocalHoverStateType_Specializations_LocalHoverStateType_Union* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_MO_LocalHoverState_LocalHoverStateType_Specializations_LocalHoverStateType_Union_finalize_w_params(
    UMAA_MO_LocalHoverState_LocalHoverStateType_Specializations_LocalHoverStateType_Union* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_MO_LocalHoverState_LocalHoverStateType_Specializations_LocalHoverStateType_Union_finalize_optional_members(
    UMAA_MO_LocalHoverState_LocalHoverStateType_Specializations_LocalHoverStateType_Union* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_MO_LocalHoverState_LocalHoverStateType_Specializations_LocalHoverStateType_Union_copy(
    UMAA_MO_LocalHoverState_LocalHoverStateType_Specializations_LocalHoverStateType_Union* dst,
    const UMAA_MO_LocalHoverState_LocalHoverStateType_Specializations_LocalHoverStateType_Union* src);

NDDSUSERDllExport
DDS_LongLong UMAA_MO_LocalHoverState_LocalHoverStateType_Specializations_LocalHoverStateType_Union_getDefaultDiscriminator(void);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

extern "C" {

    extern const char *UMAA_MO_LocalHoverState_LocalHoverStateTypeTYPENAME;

}

struct UMAA_MO_LocalHoverState_LocalHoverStateTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_MO_LocalHoverState_LocalHoverStateTypeTypeSupport;
class UMAA_MO_LocalHoverState_LocalHoverStateTypeDataWriter;
class UMAA_MO_LocalHoverState_LocalHoverStateTypeDataReader;
#endif
class UMAA_MO_LocalHoverState_LocalHoverStateType 
{
  public:
    typedef struct UMAA_MO_LocalHoverState_LocalHoverStateTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_MO_LocalHoverState_LocalHoverStateTypeTypeSupport TypeSupport;
    typedef UMAA_MO_LocalHoverState_LocalHoverStateTypeDataWriter DataWriter;
    typedef UMAA_MO_LocalHoverState_LocalHoverStateTypeDataReader DataReader;
    #endif

    UMAA_MO_LocalHoverState_LocalHoverStateType_Specializations_LocalHoverStateType_Union   LocalHoverStateType_subtypes ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_MO_LocalHoverState_LocalHoverStateType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_MO_LocalHoverState_LocalHoverStateType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MO_LocalHoverState_LocalHoverStateType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MO_LocalHoverState_LocalHoverStateType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_MO_LocalHoverState_LocalHoverStateTypeSeq, UMAA_MO_LocalHoverState_LocalHoverStateType);

NDDSUSERDllExport
RTIBool UMAA_MO_LocalHoverState_LocalHoverStateType_initialize(
    UMAA_MO_LocalHoverState_LocalHoverStateType* self);

NDDSUSERDllExport
RTIBool UMAA_MO_LocalHoverState_LocalHoverStateType_initialize_ex(
    UMAA_MO_LocalHoverState_LocalHoverStateType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_MO_LocalHoverState_LocalHoverStateType_initialize_w_params(
    UMAA_MO_LocalHoverState_LocalHoverStateType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_MO_LocalHoverState_LocalHoverStateType_finalize_w_return(
    UMAA_MO_LocalHoverState_LocalHoverStateType* self);

NDDSUSERDllExport
void UMAA_MO_LocalHoverState_LocalHoverStateType_finalize(
    UMAA_MO_LocalHoverState_LocalHoverStateType* self);

NDDSUSERDllExport
void UMAA_MO_LocalHoverState_LocalHoverStateType_finalize_ex(
    UMAA_MO_LocalHoverState_LocalHoverStateType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_MO_LocalHoverState_LocalHoverStateType_finalize_w_params(
    UMAA_MO_LocalHoverState_LocalHoverStateType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_MO_LocalHoverState_LocalHoverStateType_finalize_optional_members(
    UMAA_MO_LocalHoverState_LocalHoverStateType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_MO_LocalHoverState_LocalHoverStateType_copy(
    UMAA_MO_LocalHoverState_LocalHoverStateType* dst,
    const UMAA_MO_LocalHoverState_LocalHoverStateType* src);

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
        struct type_code< UMAA_MO_LocalHoverState_LocalHoverStateType_Specializations_LocalHoverStateType_Union> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code< UMAA_MO_LocalHoverState_LocalHoverStateType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* LocalHoverStateType */

