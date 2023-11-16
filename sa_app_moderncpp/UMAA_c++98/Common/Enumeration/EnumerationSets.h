

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from EnumerationSets.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef EnumerationSets_1089233216_h
#define EnumerationSets_1089233216_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "BasicTypes/Quaternion.h"
#undef ERROR 
#undef VARIABLE_PITCH 
#undef DELETE 
#undef PLATFORM 

typedef enum UMAA_Common_Enumeration_AutomationEnumType_AutomationEnumType
{
    UMAA_Common_Enumeration_AutomationEnumType_AutomationEnumType_AUTOMATIC , 
    UMAA_Common_Enumeration_AutomationEnumType_AutomationEnumType_MANUAL , 
    UMAA_Common_Enumeration_AutomationEnumType_AutomationEnumType_SEMI_AUTOMATIC 
} UMAA_Common_Enumeration_AutomationEnumType_AutomationEnumType;
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_Common_Enumeration_AutomationEnumType_AutomationEnumType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_Common_Enumeration_AutomationEnumType_AutomationEnumType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Enumeration_AutomationEnumType_AutomationEnumType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Enumeration_AutomationEnumType_AutomationEnumType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_Common_Enumeration_AutomationEnumType_AutomationEnumTypeSeq, UMAA_Common_Enumeration_AutomationEnumType_AutomationEnumType);

NDDSUSERDllExport
RTIBool UMAA_Common_Enumeration_AutomationEnumType_AutomationEnumType_initialize(
    UMAA_Common_Enumeration_AutomationEnumType_AutomationEnumType* self);

NDDSUSERDllExport
RTIBool UMAA_Common_Enumeration_AutomationEnumType_AutomationEnumType_initialize_ex(
    UMAA_Common_Enumeration_AutomationEnumType_AutomationEnumType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_Common_Enumeration_AutomationEnumType_AutomationEnumType_initialize_w_params(
    UMAA_Common_Enumeration_AutomationEnumType_AutomationEnumType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_Common_Enumeration_AutomationEnumType_AutomationEnumType_finalize_w_return(
    UMAA_Common_Enumeration_AutomationEnumType_AutomationEnumType* self);

NDDSUSERDllExport
void UMAA_Common_Enumeration_AutomationEnumType_AutomationEnumType_finalize(
    UMAA_Common_Enumeration_AutomationEnumType_AutomationEnumType* self);

NDDSUSERDllExport
void UMAA_Common_Enumeration_AutomationEnumType_AutomationEnumType_finalize_ex(
    UMAA_Common_Enumeration_AutomationEnumType_AutomationEnumType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_Common_Enumeration_AutomationEnumType_AutomationEnumType_finalize_w_params(
    UMAA_Common_Enumeration_AutomationEnumType_AutomationEnumType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_Common_Enumeration_AutomationEnumType_AutomationEnumType_finalize_optional_members(
    UMAA_Common_Enumeration_AutomationEnumType_AutomationEnumType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_Common_Enumeration_AutomationEnumType_AutomationEnumType_copy(
    UMAA_Common_Enumeration_AutomationEnumType_AutomationEnumType* dst,
    const UMAA_Common_Enumeration_AutomationEnumType_AutomationEnumType* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

typedef    DDS_Boolean   UMAA_Common_Enumeration_BooleanEnumType ;
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_Common_Enumeration_BooleanEnumType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_Common_Enumeration_BooleanEnumType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Enumeration_BooleanEnumType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Enumeration_BooleanEnumType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_Common_Enumeration_BooleanEnumTypeSeq, UMAA_Common_Enumeration_BooleanEnumType);

NDDSUSERDllExport
RTIBool UMAA_Common_Enumeration_BooleanEnumType_initialize(
    UMAA_Common_Enumeration_BooleanEnumType* self);

NDDSUSERDllExport
RTIBool UMAA_Common_Enumeration_BooleanEnumType_initialize_ex(
    UMAA_Common_Enumeration_BooleanEnumType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_Common_Enumeration_BooleanEnumType_initialize_w_params(
    UMAA_Common_Enumeration_BooleanEnumType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_Common_Enumeration_BooleanEnumType_finalize_w_return(
    UMAA_Common_Enumeration_BooleanEnumType* self);

NDDSUSERDllExport
void UMAA_Common_Enumeration_BooleanEnumType_finalize(
    UMAA_Common_Enumeration_BooleanEnumType* self);

NDDSUSERDllExport
void UMAA_Common_Enumeration_BooleanEnumType_finalize_ex(
    UMAA_Common_Enumeration_BooleanEnumType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_Common_Enumeration_BooleanEnumType_finalize_w_params(
    UMAA_Common_Enumeration_BooleanEnumType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_Common_Enumeration_BooleanEnumType_finalize_optional_members(
    UMAA_Common_Enumeration_BooleanEnumType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_Common_Enumeration_BooleanEnumType_copy(
    UMAA_Common_Enumeration_BooleanEnumType* dst,
    const UMAA_Common_Enumeration_BooleanEnumType* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

typedef enum UMAA_Common_Enumeration_BuiltInTestStatusEnumType_BuiltInTestStatusEnumType
{
    UMAA_Common_Enumeration_BuiltInTestStatusEnumType_BuiltInTestStatusEnumType_BIT_SUSPENDED , 
    UMAA_Common_Enumeration_BuiltInTestStatusEnumType_BuiltInTestStatusEnumType_BIT_FAILED , 
    UMAA_Common_Enumeration_BuiltInTestStatusEnumType_BuiltInTestStatusEnumType_BIT_PASSED , 
    UMAA_Common_Enumeration_BuiltInTestStatusEnumType_BuiltInTestStatusEnumType_RUNNING_BIT , 
    UMAA_Common_Enumeration_BuiltInTestStatusEnumType_BuiltInTestStatusEnumType_OFF_ABORT 
} UMAA_Common_Enumeration_BuiltInTestStatusEnumType_BuiltInTestStatusEnumType;
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_Common_Enumeration_BuiltInTestStatusEnumType_BuiltInTestStatusEnumType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_Common_Enumeration_BuiltInTestStatusEnumType_BuiltInTestStatusEnumType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Enumeration_BuiltInTestStatusEnumType_BuiltInTestStatusEnumType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Enumeration_BuiltInTestStatusEnumType_BuiltInTestStatusEnumType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_Common_Enumeration_BuiltInTestStatusEnumType_BuiltInTestStatusEnumTypeSeq, UMAA_Common_Enumeration_BuiltInTestStatusEnumType_BuiltInTestStatusEnumType);

NDDSUSERDllExport
RTIBool UMAA_Common_Enumeration_BuiltInTestStatusEnumType_BuiltInTestStatusEnumType_initialize(
    UMAA_Common_Enumeration_BuiltInTestStatusEnumType_BuiltInTestStatusEnumType* self);

NDDSUSERDllExport
RTIBool UMAA_Common_Enumeration_BuiltInTestStatusEnumType_BuiltInTestStatusEnumType_initialize_ex(
    UMAA_Common_Enumeration_BuiltInTestStatusEnumType_BuiltInTestStatusEnumType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_Common_Enumeration_BuiltInTestStatusEnumType_BuiltInTestStatusEnumType_initialize_w_params(
    UMAA_Common_Enumeration_BuiltInTestStatusEnumType_BuiltInTestStatusEnumType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_Common_Enumeration_BuiltInTestStatusEnumType_BuiltInTestStatusEnumType_finalize_w_return(
    UMAA_Common_Enumeration_BuiltInTestStatusEnumType_BuiltInTestStatusEnumType* self);

NDDSUSERDllExport
void UMAA_Common_Enumeration_BuiltInTestStatusEnumType_BuiltInTestStatusEnumType_finalize(
    UMAA_Common_Enumeration_BuiltInTestStatusEnumType_BuiltInTestStatusEnumType* self);

NDDSUSERDllExport
void UMAA_Common_Enumeration_BuiltInTestStatusEnumType_BuiltInTestStatusEnumType_finalize_ex(
    UMAA_Common_Enumeration_BuiltInTestStatusEnumType_BuiltInTestStatusEnumType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_Common_Enumeration_BuiltInTestStatusEnumType_BuiltInTestStatusEnumType_finalize_w_params(
    UMAA_Common_Enumeration_BuiltInTestStatusEnumType_BuiltInTestStatusEnumType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_Common_Enumeration_BuiltInTestStatusEnumType_BuiltInTestStatusEnumType_finalize_optional_members(
    UMAA_Common_Enumeration_BuiltInTestStatusEnumType_BuiltInTestStatusEnumType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_Common_Enumeration_BuiltInTestStatusEnumType_BuiltInTestStatusEnumType_copy(
    UMAA_Common_Enumeration_BuiltInTestStatusEnumType_BuiltInTestStatusEnumType* dst,
    const UMAA_Common_Enumeration_BuiltInTestStatusEnumType_BuiltInTestStatusEnumType* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

typedef enum UMAA_Common_Enumeration_IRPolarityEnumType_IRPolarityEnumType
{
    UMAA_Common_Enumeration_IRPolarityEnumType_IRPolarityEnumType_BLACK_HOT , 
    UMAA_Common_Enumeration_IRPolarityEnumType_IRPolarityEnumType_WHITE_HOT 
} UMAA_Common_Enumeration_IRPolarityEnumType_IRPolarityEnumType;
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_Common_Enumeration_IRPolarityEnumType_IRPolarityEnumType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_Common_Enumeration_IRPolarityEnumType_IRPolarityEnumType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Enumeration_IRPolarityEnumType_IRPolarityEnumType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Enumeration_IRPolarityEnumType_IRPolarityEnumType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_Common_Enumeration_IRPolarityEnumType_IRPolarityEnumTypeSeq, UMAA_Common_Enumeration_IRPolarityEnumType_IRPolarityEnumType);

NDDSUSERDllExport
RTIBool UMAA_Common_Enumeration_IRPolarityEnumType_IRPolarityEnumType_initialize(
    UMAA_Common_Enumeration_IRPolarityEnumType_IRPolarityEnumType* self);

NDDSUSERDllExport
RTIBool UMAA_Common_Enumeration_IRPolarityEnumType_IRPolarityEnumType_initialize_ex(
    UMAA_Common_Enumeration_IRPolarityEnumType_IRPolarityEnumType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_Common_Enumeration_IRPolarityEnumType_IRPolarityEnumType_initialize_w_params(
    UMAA_Common_Enumeration_IRPolarityEnumType_IRPolarityEnumType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_Common_Enumeration_IRPolarityEnumType_IRPolarityEnumType_finalize_w_return(
    UMAA_Common_Enumeration_IRPolarityEnumType_IRPolarityEnumType* self);

NDDSUSERDllExport
void UMAA_Common_Enumeration_IRPolarityEnumType_IRPolarityEnumType_finalize(
    UMAA_Common_Enumeration_IRPolarityEnumType_IRPolarityEnumType* self);

NDDSUSERDllExport
void UMAA_Common_Enumeration_IRPolarityEnumType_IRPolarityEnumType_finalize_ex(
    UMAA_Common_Enumeration_IRPolarityEnumType_IRPolarityEnumType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_Common_Enumeration_IRPolarityEnumType_IRPolarityEnumType_finalize_w_params(
    UMAA_Common_Enumeration_IRPolarityEnumType_IRPolarityEnumType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_Common_Enumeration_IRPolarityEnumType_IRPolarityEnumType_finalize_optional_members(
    UMAA_Common_Enumeration_IRPolarityEnumType_IRPolarityEnumType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_Common_Enumeration_IRPolarityEnumType_IRPolarityEnumType_copy(
    UMAA_Common_Enumeration_IRPolarityEnumType_IRPolarityEnumType* dst,
    const UMAA_Common_Enumeration_IRPolarityEnumType_IRPolarityEnumType* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

typedef enum UMAA_Common_Enumeration_LineSegmentEnumType_LineSegmentEnumType
{
    UMAA_Common_Enumeration_LineSegmentEnumType_LineSegmentEnumType_GREAT_CIRCLE , 
    UMAA_Common_Enumeration_LineSegmentEnumType_LineSegmentEnumType_RHUMB 
} UMAA_Common_Enumeration_LineSegmentEnumType_LineSegmentEnumType;
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_Common_Enumeration_LineSegmentEnumType_LineSegmentEnumType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_Common_Enumeration_LineSegmentEnumType_LineSegmentEnumType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Enumeration_LineSegmentEnumType_LineSegmentEnumType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Enumeration_LineSegmentEnumType_LineSegmentEnumType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_Common_Enumeration_LineSegmentEnumType_LineSegmentEnumTypeSeq, UMAA_Common_Enumeration_LineSegmentEnumType_LineSegmentEnumType);

NDDSUSERDllExport
RTIBool UMAA_Common_Enumeration_LineSegmentEnumType_LineSegmentEnumType_initialize(
    UMAA_Common_Enumeration_LineSegmentEnumType_LineSegmentEnumType* self);

NDDSUSERDllExport
RTIBool UMAA_Common_Enumeration_LineSegmentEnumType_LineSegmentEnumType_initialize_ex(
    UMAA_Common_Enumeration_LineSegmentEnumType_LineSegmentEnumType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_Common_Enumeration_LineSegmentEnumType_LineSegmentEnumType_initialize_w_params(
    UMAA_Common_Enumeration_LineSegmentEnumType_LineSegmentEnumType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_Common_Enumeration_LineSegmentEnumType_LineSegmentEnumType_finalize_w_return(
    UMAA_Common_Enumeration_LineSegmentEnumType_LineSegmentEnumType* self);

NDDSUSERDllExport
void UMAA_Common_Enumeration_LineSegmentEnumType_LineSegmentEnumType_finalize(
    UMAA_Common_Enumeration_LineSegmentEnumType_LineSegmentEnumType* self);

NDDSUSERDllExport
void UMAA_Common_Enumeration_LineSegmentEnumType_LineSegmentEnumType_finalize_ex(
    UMAA_Common_Enumeration_LineSegmentEnumType_LineSegmentEnumType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_Common_Enumeration_LineSegmentEnumType_LineSegmentEnumType_finalize_w_params(
    UMAA_Common_Enumeration_LineSegmentEnumType_LineSegmentEnumType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_Common_Enumeration_LineSegmentEnumType_LineSegmentEnumType_finalize_optional_members(
    UMAA_Common_Enumeration_LineSegmentEnumType_LineSegmentEnumType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_Common_Enumeration_LineSegmentEnumType_LineSegmentEnumType_copy(
    UMAA_Common_Enumeration_LineSegmentEnumType_LineSegmentEnumType* dst,
    const UMAA_Common_Enumeration_LineSegmentEnumType_LineSegmentEnumType* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

typedef enum UMAA_Common_Enumeration_NetworkProtocolEnumType_NetworkProtocolEnumType
{
    UMAA_Common_Enumeration_NetworkProtocolEnumType_NetworkProtocolEnumType_TCP_IPV4 , 
    UMAA_Common_Enumeration_NetworkProtocolEnumType_NetworkProtocolEnumType_TCP_IPV6 , 
    UMAA_Common_Enumeration_NetworkProtocolEnumType_NetworkProtocolEnumType_UDP_IPV4 , 
    UMAA_Common_Enumeration_NetworkProtocolEnumType_NetworkProtocolEnumType_UDP_IPV6 
} UMAA_Common_Enumeration_NetworkProtocolEnumType_NetworkProtocolEnumType;
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_Common_Enumeration_NetworkProtocolEnumType_NetworkProtocolEnumType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_Common_Enumeration_NetworkProtocolEnumType_NetworkProtocolEnumType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Enumeration_NetworkProtocolEnumType_NetworkProtocolEnumType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Enumeration_NetworkProtocolEnumType_NetworkProtocolEnumType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_Common_Enumeration_NetworkProtocolEnumType_NetworkProtocolEnumTypeSeq, UMAA_Common_Enumeration_NetworkProtocolEnumType_NetworkProtocolEnumType);

NDDSUSERDllExport
RTIBool UMAA_Common_Enumeration_NetworkProtocolEnumType_NetworkProtocolEnumType_initialize(
    UMAA_Common_Enumeration_NetworkProtocolEnumType_NetworkProtocolEnumType* self);

NDDSUSERDllExport
RTIBool UMAA_Common_Enumeration_NetworkProtocolEnumType_NetworkProtocolEnumType_initialize_ex(
    UMAA_Common_Enumeration_NetworkProtocolEnumType_NetworkProtocolEnumType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_Common_Enumeration_NetworkProtocolEnumType_NetworkProtocolEnumType_initialize_w_params(
    UMAA_Common_Enumeration_NetworkProtocolEnumType_NetworkProtocolEnumType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_Common_Enumeration_NetworkProtocolEnumType_NetworkProtocolEnumType_finalize_w_return(
    UMAA_Common_Enumeration_NetworkProtocolEnumType_NetworkProtocolEnumType* self);

NDDSUSERDllExport
void UMAA_Common_Enumeration_NetworkProtocolEnumType_NetworkProtocolEnumType_finalize(
    UMAA_Common_Enumeration_NetworkProtocolEnumType_NetworkProtocolEnumType* self);

NDDSUSERDllExport
void UMAA_Common_Enumeration_NetworkProtocolEnumType_NetworkProtocolEnumType_finalize_ex(
    UMAA_Common_Enumeration_NetworkProtocolEnumType_NetworkProtocolEnumType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_Common_Enumeration_NetworkProtocolEnumType_NetworkProtocolEnumType_finalize_w_params(
    UMAA_Common_Enumeration_NetworkProtocolEnumType_NetworkProtocolEnumType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_Common_Enumeration_NetworkProtocolEnumType_NetworkProtocolEnumType_finalize_optional_members(
    UMAA_Common_Enumeration_NetworkProtocolEnumType_NetworkProtocolEnumType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_Common_Enumeration_NetworkProtocolEnumType_NetworkProtocolEnumType_copy(
    UMAA_Common_Enumeration_NetworkProtocolEnumType_NetworkProtocolEnumType* dst,
    const UMAA_Common_Enumeration_NetworkProtocolEnumType_NetworkProtocolEnumType* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

typedef enum UMAA_Common_Enumeration_OnOffStatusEnumType_OnOffStatusEnumType
{
    UMAA_Common_Enumeration_OnOffStatusEnumType_OnOffStatusEnumType_OFF , 
    UMAA_Common_Enumeration_OnOffStatusEnumType_OnOffStatusEnumType_ON 
} UMAA_Common_Enumeration_OnOffStatusEnumType_OnOffStatusEnumType;
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_Common_Enumeration_OnOffStatusEnumType_OnOffStatusEnumType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_Common_Enumeration_OnOffStatusEnumType_OnOffStatusEnumType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Enumeration_OnOffStatusEnumType_OnOffStatusEnumType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Enumeration_OnOffStatusEnumType_OnOffStatusEnumType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_Common_Enumeration_OnOffStatusEnumType_OnOffStatusEnumTypeSeq, UMAA_Common_Enumeration_OnOffStatusEnumType_OnOffStatusEnumType);

NDDSUSERDllExport
RTIBool UMAA_Common_Enumeration_OnOffStatusEnumType_OnOffStatusEnumType_initialize(
    UMAA_Common_Enumeration_OnOffStatusEnumType_OnOffStatusEnumType* self);

NDDSUSERDllExport
RTIBool UMAA_Common_Enumeration_OnOffStatusEnumType_OnOffStatusEnumType_initialize_ex(
    UMAA_Common_Enumeration_OnOffStatusEnumType_OnOffStatusEnumType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_Common_Enumeration_OnOffStatusEnumType_OnOffStatusEnumType_initialize_w_params(
    UMAA_Common_Enumeration_OnOffStatusEnumType_OnOffStatusEnumType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_Common_Enumeration_OnOffStatusEnumType_OnOffStatusEnumType_finalize_w_return(
    UMAA_Common_Enumeration_OnOffStatusEnumType_OnOffStatusEnumType* self);

NDDSUSERDllExport
void UMAA_Common_Enumeration_OnOffStatusEnumType_OnOffStatusEnumType_finalize(
    UMAA_Common_Enumeration_OnOffStatusEnumType_OnOffStatusEnumType* self);

NDDSUSERDllExport
void UMAA_Common_Enumeration_OnOffStatusEnumType_OnOffStatusEnumType_finalize_ex(
    UMAA_Common_Enumeration_OnOffStatusEnumType_OnOffStatusEnumType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_Common_Enumeration_OnOffStatusEnumType_OnOffStatusEnumType_finalize_w_params(
    UMAA_Common_Enumeration_OnOffStatusEnumType_OnOffStatusEnumType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_Common_Enumeration_OnOffStatusEnumType_OnOffStatusEnumType_finalize_optional_members(
    UMAA_Common_Enumeration_OnOffStatusEnumType_OnOffStatusEnumType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_Common_Enumeration_OnOffStatusEnumType_OnOffStatusEnumType_copy(
    UMAA_Common_Enumeration_OnOffStatusEnumType_OnOffStatusEnumType* dst,
    const UMAA_Common_Enumeration_OnOffStatusEnumType_OnOffStatusEnumType* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

typedef enum UMAA_Common_Enumeration_PlanActionEnumType_PlanActionEnumType
{
    UMAA_Common_Enumeration_PlanActionEnumType_PlanActionEnumType_ABORT_MISSION_LOAD_PLAN , 
    UMAA_Common_Enumeration_PlanActionEnumType_PlanActionEnumType_ADD_PLAN , 
    UMAA_Common_Enumeration_PlanActionEnumType_PlanActionEnumType_DELETE_PLAN , 
    UMAA_Common_Enumeration_PlanActionEnumType_PlanActionEnumType_DOWNLOAD_PLAN , 
    UMAA_Common_Enumeration_PlanActionEnumType_PlanActionEnumType_RETRIEVE_PLAN , 
    UMAA_Common_Enumeration_PlanActionEnumType_PlanActionEnumType_UPDATE_PLAN , 
    UMAA_Common_Enumeration_PlanActionEnumType_PlanActionEnumType_UPLOAD_PLAN 
} UMAA_Common_Enumeration_PlanActionEnumType_PlanActionEnumType;
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_Common_Enumeration_PlanActionEnumType_PlanActionEnumType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_Common_Enumeration_PlanActionEnumType_PlanActionEnumType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Enumeration_PlanActionEnumType_PlanActionEnumType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Enumeration_PlanActionEnumType_PlanActionEnumType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_Common_Enumeration_PlanActionEnumType_PlanActionEnumTypeSeq, UMAA_Common_Enumeration_PlanActionEnumType_PlanActionEnumType);

NDDSUSERDllExport
RTIBool UMAA_Common_Enumeration_PlanActionEnumType_PlanActionEnumType_initialize(
    UMAA_Common_Enumeration_PlanActionEnumType_PlanActionEnumType* self);

NDDSUSERDllExport
RTIBool UMAA_Common_Enumeration_PlanActionEnumType_PlanActionEnumType_initialize_ex(
    UMAA_Common_Enumeration_PlanActionEnumType_PlanActionEnumType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_Common_Enumeration_PlanActionEnumType_PlanActionEnumType_initialize_w_params(
    UMAA_Common_Enumeration_PlanActionEnumType_PlanActionEnumType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_Common_Enumeration_PlanActionEnumType_PlanActionEnumType_finalize_w_return(
    UMAA_Common_Enumeration_PlanActionEnumType_PlanActionEnumType* self);

NDDSUSERDllExport
void UMAA_Common_Enumeration_PlanActionEnumType_PlanActionEnumType_finalize(
    UMAA_Common_Enumeration_PlanActionEnumType_PlanActionEnumType* self);

NDDSUSERDllExport
void UMAA_Common_Enumeration_PlanActionEnumType_PlanActionEnumType_finalize_ex(
    UMAA_Common_Enumeration_PlanActionEnumType_PlanActionEnumType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_Common_Enumeration_PlanActionEnumType_PlanActionEnumType_finalize_w_params(
    UMAA_Common_Enumeration_PlanActionEnumType_PlanActionEnumType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_Common_Enumeration_PlanActionEnumType_PlanActionEnumType_finalize_optional_members(
    UMAA_Common_Enumeration_PlanActionEnumType_PlanActionEnumType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_Common_Enumeration_PlanActionEnumType_PlanActionEnumType_copy(
    UMAA_Common_Enumeration_PlanActionEnumType_PlanActionEnumType* dst,
    const UMAA_Common_Enumeration_PlanActionEnumType_PlanActionEnumType* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

typedef enum UMAA_Common_Enumeration_PowerStatusEnumType_PowerStatusEnumType
{
    UMAA_Common_Enumeration_PowerStatusEnumType_PowerStatusEnumType_POWER_OFF , 
    UMAA_Common_Enumeration_PowerStatusEnumType_PowerStatusEnumType_POWER_ON , 
    UMAA_Common_Enumeration_PowerStatusEnumType_PowerStatusEnumType_EMERGENCY_POWER , 
    UMAA_Common_Enumeration_PowerStatusEnumType_PowerStatusEnumType_POWER_STANDBY 
} UMAA_Common_Enumeration_PowerStatusEnumType_PowerStatusEnumType;
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_Common_Enumeration_PowerStatusEnumType_PowerStatusEnumType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_Common_Enumeration_PowerStatusEnumType_PowerStatusEnumType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Enumeration_PowerStatusEnumType_PowerStatusEnumType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Enumeration_PowerStatusEnumType_PowerStatusEnumType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_Common_Enumeration_PowerStatusEnumType_PowerStatusEnumTypeSeq, UMAA_Common_Enumeration_PowerStatusEnumType_PowerStatusEnumType);

NDDSUSERDllExport
RTIBool UMAA_Common_Enumeration_PowerStatusEnumType_PowerStatusEnumType_initialize(
    UMAA_Common_Enumeration_PowerStatusEnumType_PowerStatusEnumType* self);

NDDSUSERDllExport
RTIBool UMAA_Common_Enumeration_PowerStatusEnumType_PowerStatusEnumType_initialize_ex(
    UMAA_Common_Enumeration_PowerStatusEnumType_PowerStatusEnumType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_Common_Enumeration_PowerStatusEnumType_PowerStatusEnumType_initialize_w_params(
    UMAA_Common_Enumeration_PowerStatusEnumType_PowerStatusEnumType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_Common_Enumeration_PowerStatusEnumType_PowerStatusEnumType_finalize_w_return(
    UMAA_Common_Enumeration_PowerStatusEnumType_PowerStatusEnumType* self);

NDDSUSERDllExport
void UMAA_Common_Enumeration_PowerStatusEnumType_PowerStatusEnumType_finalize(
    UMAA_Common_Enumeration_PowerStatusEnumType_PowerStatusEnumType* self);

NDDSUSERDllExport
void UMAA_Common_Enumeration_PowerStatusEnumType_PowerStatusEnumType_finalize_ex(
    UMAA_Common_Enumeration_PowerStatusEnumType_PowerStatusEnumType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_Common_Enumeration_PowerStatusEnumType_PowerStatusEnumType_finalize_w_params(
    UMAA_Common_Enumeration_PowerStatusEnumType_PowerStatusEnumType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_Common_Enumeration_PowerStatusEnumType_PowerStatusEnumType_finalize_optional_members(
    UMAA_Common_Enumeration_PowerStatusEnumType_PowerStatusEnumType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_Common_Enumeration_PowerStatusEnumType_PowerStatusEnumType_copy(
    UMAA_Common_Enumeration_PowerStatusEnumType_PowerStatusEnumType* dst,
    const UMAA_Common_Enumeration_PowerStatusEnumType_PowerStatusEnumType* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

typedef enum UMAA_Common_Enumeration_PrecipitationEnumType_PrecipitationEnumType
{
    UMAA_Common_Enumeration_PrecipitationEnumType_PrecipitationEnumType_THUNDERSTORMS , 
    UMAA_Common_Enumeration_PrecipitationEnumType_PrecipitationEnumType_FOG , 
    UMAA_Common_Enumeration_PrecipitationEnumType_PrecipitationEnumType_HAZE , 
    UMAA_Common_Enumeration_PrecipitationEnumType_PrecipitationEnumType_SNOW , 
    UMAA_Common_Enumeration_PrecipitationEnumType_PrecipitationEnumType_DRIZZLE , 
    UMAA_Common_Enumeration_PrecipitationEnumType_PrecipitationEnumType_RAIN , 
    UMAA_Common_Enumeration_PrecipitationEnumType_PrecipitationEnumType_SHOWERS 
} UMAA_Common_Enumeration_PrecipitationEnumType_PrecipitationEnumType;
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_Common_Enumeration_PrecipitationEnumType_PrecipitationEnumType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_Common_Enumeration_PrecipitationEnumType_PrecipitationEnumType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Enumeration_PrecipitationEnumType_PrecipitationEnumType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Enumeration_PrecipitationEnumType_PrecipitationEnumType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_Common_Enumeration_PrecipitationEnumType_PrecipitationEnumTypeSeq, UMAA_Common_Enumeration_PrecipitationEnumType_PrecipitationEnumType);

NDDSUSERDllExport
RTIBool UMAA_Common_Enumeration_PrecipitationEnumType_PrecipitationEnumType_initialize(
    UMAA_Common_Enumeration_PrecipitationEnumType_PrecipitationEnumType* self);

NDDSUSERDllExport
RTIBool UMAA_Common_Enumeration_PrecipitationEnumType_PrecipitationEnumType_initialize_ex(
    UMAA_Common_Enumeration_PrecipitationEnumType_PrecipitationEnumType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_Common_Enumeration_PrecipitationEnumType_PrecipitationEnumType_initialize_w_params(
    UMAA_Common_Enumeration_PrecipitationEnumType_PrecipitationEnumType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_Common_Enumeration_PrecipitationEnumType_PrecipitationEnumType_finalize_w_return(
    UMAA_Common_Enumeration_PrecipitationEnumType_PrecipitationEnumType* self);

NDDSUSERDllExport
void UMAA_Common_Enumeration_PrecipitationEnumType_PrecipitationEnumType_finalize(
    UMAA_Common_Enumeration_PrecipitationEnumType_PrecipitationEnumType* self);

NDDSUSERDllExport
void UMAA_Common_Enumeration_PrecipitationEnumType_PrecipitationEnumType_finalize_ex(
    UMAA_Common_Enumeration_PrecipitationEnumType_PrecipitationEnumType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_Common_Enumeration_PrecipitationEnumType_PrecipitationEnumType_finalize_w_params(
    UMAA_Common_Enumeration_PrecipitationEnumType_PrecipitationEnumType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_Common_Enumeration_PrecipitationEnumType_PrecipitationEnumType_finalize_optional_members(
    UMAA_Common_Enumeration_PrecipitationEnumType_PrecipitationEnumType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_Common_Enumeration_PrecipitationEnumType_PrecipitationEnumType_copy(
    UMAA_Common_Enumeration_PrecipitationEnumType_PrecipitationEnumType* dst,
    const UMAA_Common_Enumeration_PrecipitationEnumType_PrecipitationEnumType* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

typedef enum UMAA_Common_Enumeration_ResourceAllocationStatusEnumType_ResourceAllocationStatusEnumType
{
    UMAA_Common_Enumeration_ResourceAllocationStatusEnumType_ResourceAllocationStatusEnumType_FORCED_ALLOCATION , 
    UMAA_Common_Enumeration_ResourceAllocationStatusEnumType_ResourceAllocationStatusEnumType_FORCED_ALLOCATION_W_LAUNCH_RECOVERY , 
    UMAA_Common_Enumeration_ResourceAllocationStatusEnumType_ResourceAllocationStatusEnumType_ALLOCATED , 
    UMAA_Common_Enumeration_ResourceAllocationStatusEnumType_ResourceAllocationStatusEnumType_ALLOCATED_W_LAUNCH_RECOVERY , 
    UMAA_Common_Enumeration_ResourceAllocationStatusEnumType_ResourceAllocationStatusEnumType_AVAILABLE , 
    UMAA_Common_Enumeration_ResourceAllocationStatusEnumType_ResourceAllocationStatusEnumType_RELEASED , 
    UMAA_Common_Enumeration_ResourceAllocationStatusEnumType_ResourceAllocationStatusEnumType_TEMPORARILY_UNAVAILABLE , 
    UMAA_Common_Enumeration_ResourceAllocationStatusEnumType_ResourceAllocationStatusEnumType_UNAVAILABLE , 
    UMAA_Common_Enumeration_ResourceAllocationStatusEnumType_ResourceAllocationStatusEnumType_FAULT 
} UMAA_Common_Enumeration_ResourceAllocationStatusEnumType_ResourceAllocationStatusEnumType;
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_Common_Enumeration_ResourceAllocationStatusEnumType_ResourceAllocationStatusEnumType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_Common_Enumeration_ResourceAllocationStatusEnumType_ResourceAllocationStatusEnumType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Enumeration_ResourceAllocationStatusEnumType_ResourceAllocationStatusEnumType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Enumeration_ResourceAllocationStatusEnumType_ResourceAllocationStatusEnumType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_Common_Enumeration_ResourceAllocationStatusEnumType_ResourceAllocationStatusEnumTypeSeq, UMAA_Common_Enumeration_ResourceAllocationStatusEnumType_ResourceAllocationStatusEnumType);

NDDSUSERDllExport
RTIBool UMAA_Common_Enumeration_ResourceAllocationStatusEnumType_ResourceAllocationStatusEnumType_initialize(
    UMAA_Common_Enumeration_ResourceAllocationStatusEnumType_ResourceAllocationStatusEnumType* self);

NDDSUSERDllExport
RTIBool UMAA_Common_Enumeration_ResourceAllocationStatusEnumType_ResourceAllocationStatusEnumType_initialize_ex(
    UMAA_Common_Enumeration_ResourceAllocationStatusEnumType_ResourceAllocationStatusEnumType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_Common_Enumeration_ResourceAllocationStatusEnumType_ResourceAllocationStatusEnumType_initialize_w_params(
    UMAA_Common_Enumeration_ResourceAllocationStatusEnumType_ResourceAllocationStatusEnumType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_Common_Enumeration_ResourceAllocationStatusEnumType_ResourceAllocationStatusEnumType_finalize_w_return(
    UMAA_Common_Enumeration_ResourceAllocationStatusEnumType_ResourceAllocationStatusEnumType* self);

NDDSUSERDllExport
void UMAA_Common_Enumeration_ResourceAllocationStatusEnumType_ResourceAllocationStatusEnumType_finalize(
    UMAA_Common_Enumeration_ResourceAllocationStatusEnumType_ResourceAllocationStatusEnumType* self);

NDDSUSERDllExport
void UMAA_Common_Enumeration_ResourceAllocationStatusEnumType_ResourceAllocationStatusEnumType_finalize_ex(
    UMAA_Common_Enumeration_ResourceAllocationStatusEnumType_ResourceAllocationStatusEnumType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_Common_Enumeration_ResourceAllocationStatusEnumType_ResourceAllocationStatusEnumType_finalize_w_params(
    UMAA_Common_Enumeration_ResourceAllocationStatusEnumType_ResourceAllocationStatusEnumType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_Common_Enumeration_ResourceAllocationStatusEnumType_ResourceAllocationStatusEnumType_finalize_optional_members(
    UMAA_Common_Enumeration_ResourceAllocationStatusEnumType_ResourceAllocationStatusEnumType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_Common_Enumeration_ResourceAllocationStatusEnumType_ResourceAllocationStatusEnumType_copy(
    UMAA_Common_Enumeration_ResourceAllocationStatusEnumType_ResourceAllocationStatusEnumType* dst,
    const UMAA_Common_Enumeration_ResourceAllocationStatusEnumType_ResourceAllocationStatusEnumType* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

typedef enum UMAA_Common_Enumeration_SpecificLOIEnumType_SpecificLOIEnumType
{
    UMAA_Common_Enumeration_SpecificLOIEnumType_SpecificLOIEnumType_LOI_1 , 
    UMAA_Common_Enumeration_SpecificLOIEnumType_SpecificLOIEnumType_LOI_2 , 
    UMAA_Common_Enumeration_SpecificLOIEnumType_SpecificLOIEnumType_LOI_3 , 
    UMAA_Common_Enumeration_SpecificLOIEnumType_SpecificLOIEnumType_LOI_4 , 
    UMAA_Common_Enumeration_SpecificLOIEnumType_SpecificLOIEnumType_LOI_5 
} UMAA_Common_Enumeration_SpecificLOIEnumType_SpecificLOIEnumType;
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_Common_Enumeration_SpecificLOIEnumType_SpecificLOIEnumType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_Common_Enumeration_SpecificLOIEnumType_SpecificLOIEnumType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Enumeration_SpecificLOIEnumType_SpecificLOIEnumType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Enumeration_SpecificLOIEnumType_SpecificLOIEnumType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_Common_Enumeration_SpecificLOIEnumType_SpecificLOIEnumTypeSeq, UMAA_Common_Enumeration_SpecificLOIEnumType_SpecificLOIEnumType);

NDDSUSERDllExport
RTIBool UMAA_Common_Enumeration_SpecificLOIEnumType_SpecificLOIEnumType_initialize(
    UMAA_Common_Enumeration_SpecificLOIEnumType_SpecificLOIEnumType* self);

NDDSUSERDllExport
RTIBool UMAA_Common_Enumeration_SpecificLOIEnumType_SpecificLOIEnumType_initialize_ex(
    UMAA_Common_Enumeration_SpecificLOIEnumType_SpecificLOIEnumType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_Common_Enumeration_SpecificLOIEnumType_SpecificLOIEnumType_initialize_w_params(
    UMAA_Common_Enumeration_SpecificLOIEnumType_SpecificLOIEnumType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_Common_Enumeration_SpecificLOIEnumType_SpecificLOIEnumType_finalize_w_return(
    UMAA_Common_Enumeration_SpecificLOIEnumType_SpecificLOIEnumType* self);

NDDSUSERDllExport
void UMAA_Common_Enumeration_SpecificLOIEnumType_SpecificLOIEnumType_finalize(
    UMAA_Common_Enumeration_SpecificLOIEnumType_SpecificLOIEnumType* self);

NDDSUSERDllExport
void UMAA_Common_Enumeration_SpecificLOIEnumType_SpecificLOIEnumType_finalize_ex(
    UMAA_Common_Enumeration_SpecificLOIEnumType_SpecificLOIEnumType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_Common_Enumeration_SpecificLOIEnumType_SpecificLOIEnumType_finalize_w_params(
    UMAA_Common_Enumeration_SpecificLOIEnumType_SpecificLOIEnumType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_Common_Enumeration_SpecificLOIEnumType_SpecificLOIEnumType_finalize_optional_members(
    UMAA_Common_Enumeration_SpecificLOIEnumType_SpecificLOIEnumType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_Common_Enumeration_SpecificLOIEnumType_SpecificLOIEnumType_copy(
    UMAA_Common_Enumeration_SpecificLOIEnumType_SpecificLOIEnumType* dst,
    const UMAA_Common_Enumeration_SpecificLOIEnumType_SpecificLOIEnumType* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#ifndef NDDS_STANDALONE_TYPE
namespace rti { 
    namespace xcdr {
    } 
}

#endif

#endif /* EnumerationSets */

