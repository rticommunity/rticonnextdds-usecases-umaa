

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from SpeedControlType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef SpeedControlType_1610912839_h
#define SpeedControlType_1610912839_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "UMAA/Common/Speed/EngineRPM.h"
#include "UMAA/Common/Speed/SpeedOverGround.h"
#include "UMAA/Common/Speed/SpeedThroughAir.h"
#include "UMAA/Common/Speed/SpeedThroughWater.h"
#include "UMAA/Common/Speed/VehicleSpeedMode.h"

typedef enum UMAA_Common_Speed_SpeedControlType_Specializations_SpeedControlType_Selectors
{
    UMAA_Common_Speed_SpeedControlType_Specializations_SpeedControlType_Selectors_SPEEDOVERGROUND_SELECT , 
    UMAA_Common_Speed_SpeedControlType_Specializations_SpeedControlType_Selectors_SPEEDTHROUGHWATER_SELECT , 
    UMAA_Common_Speed_SpeedControlType_Specializations_SpeedControlType_Selectors_VEHICLESPEEDMODE_SELECT , 
    UMAA_Common_Speed_SpeedControlType_Specializations_SpeedControlType_Selectors_ENGINERPM_SELECT , 
    UMAA_Common_Speed_SpeedControlType_Specializations_SpeedControlType_Selectors_SPEEDTHROUGHAIR_SELECT 
} UMAA_Common_Speed_SpeedControlType_Specializations_SpeedControlType_Selectors;
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_Common_Speed_SpeedControlType_Specializations_SpeedControlType_Selectors_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_Common_Speed_SpeedControlType_Specializations_SpeedControlType_Selectors_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Speed_SpeedControlType_Specializations_SpeedControlType_Selectors_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Speed_SpeedControlType_Specializations_SpeedControlType_Selectors_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_Common_Speed_SpeedControlType_Specializations_SpeedControlType_SelectorsSeq, UMAA_Common_Speed_SpeedControlType_Specializations_SpeedControlType_Selectors);

NDDSUSERDllExport
RTIBool UMAA_Common_Speed_SpeedControlType_Specializations_SpeedControlType_Selectors_initialize(
    UMAA_Common_Speed_SpeedControlType_Specializations_SpeedControlType_Selectors* self);

NDDSUSERDllExport
RTIBool UMAA_Common_Speed_SpeedControlType_Specializations_SpeedControlType_Selectors_initialize_ex(
    UMAA_Common_Speed_SpeedControlType_Specializations_SpeedControlType_Selectors* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_Common_Speed_SpeedControlType_Specializations_SpeedControlType_Selectors_initialize_w_params(
    UMAA_Common_Speed_SpeedControlType_Specializations_SpeedControlType_Selectors* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_Common_Speed_SpeedControlType_Specializations_SpeedControlType_Selectors_finalize_w_return(
    UMAA_Common_Speed_SpeedControlType_Specializations_SpeedControlType_Selectors* self);

NDDSUSERDllExport
void UMAA_Common_Speed_SpeedControlType_Specializations_SpeedControlType_Selectors_finalize(
    UMAA_Common_Speed_SpeedControlType_Specializations_SpeedControlType_Selectors* self);

NDDSUSERDllExport
void UMAA_Common_Speed_SpeedControlType_Specializations_SpeedControlType_Selectors_finalize_ex(
    UMAA_Common_Speed_SpeedControlType_Specializations_SpeedControlType_Selectors* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_Common_Speed_SpeedControlType_Specializations_SpeedControlType_Selectors_finalize_w_params(
    UMAA_Common_Speed_SpeedControlType_Specializations_SpeedControlType_Selectors* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_Common_Speed_SpeedControlType_Specializations_SpeedControlType_Selectors_finalize_optional_members(
    UMAA_Common_Speed_SpeedControlType_Specializations_SpeedControlType_Selectors* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_Common_Speed_SpeedControlType_Specializations_SpeedControlType_Selectors_copy(
    UMAA_Common_Speed_SpeedControlType_Specializations_SpeedControlType_Selectors* dst,
    const UMAA_Common_Speed_SpeedControlType_Specializations_SpeedControlType_Selectors* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

extern "C" {

    extern const char *UMAA_Common_Speed_SpeedControlType_Specializations_SpeedControlType_UnionTYPENAME;

}

struct UMAA_Common_Speed_SpeedControlType_Specializations_SpeedControlType_UnionSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_Common_Speed_SpeedControlType_Specializations_SpeedControlType_UnionTypeSupport;
class UMAA_Common_Speed_SpeedControlType_Specializations_SpeedControlType_UnionDataWriter;
class UMAA_Common_Speed_SpeedControlType_Specializations_SpeedControlType_UnionDataReader;
#endif

typedef struct UMAA_Common_Speed_SpeedControlType_Specializations_SpeedControlType_Union
{
    typedef struct UMAA_Common_Speed_SpeedControlType_Specializations_SpeedControlType_UnionSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_Common_Speed_SpeedControlType_Specializations_SpeedControlType_UnionTypeSupport TypeSupport;
    typedef UMAA_Common_Speed_SpeedControlType_Specializations_SpeedControlType_UnionDataWriter DataWriter;
    typedef UMAA_Common_Speed_SpeedControlType_Specializations_SpeedControlType_UnionDataReader DataReader;
    #endif

    UMAA_Common_Speed_SpeedControlType_Specializations_SpeedControlType_Selectors _d;
    struct UMAA_Common_Speed_SpeedControlType_Specializations_SpeedControlType_Union_u 
    {

        UMAA_Common_Speed_SpeedOverGround   SpeedOverGround_data ;
        UMAA_Common_Speed_SpeedThroughWater   SpeedThroughWater_data ;
        UMAA_Common_Speed_VehicleSpeedMode   VehicleSpeedMode_data ;
        UMAA_Common_Speed_EngineRPM   EngineRPM_data ;
        UMAA_Common_Speed_SpeedThroughAir   SpeedThroughAir_data ;
    }_u;

} UMAA_Common_Speed_SpeedControlType_Specializations_SpeedControlType_Union ;
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_Common_Speed_SpeedControlType_Specializations_SpeedControlType_Union_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_Common_Speed_SpeedControlType_Specializations_SpeedControlType_Union_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Speed_SpeedControlType_Specializations_SpeedControlType_Union_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Speed_SpeedControlType_Specializations_SpeedControlType_Union_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_Common_Speed_SpeedControlType_Specializations_SpeedControlType_UnionSeq, UMAA_Common_Speed_SpeedControlType_Specializations_SpeedControlType_Union);

NDDSUSERDllExport
RTIBool UMAA_Common_Speed_SpeedControlType_Specializations_SpeedControlType_Union_initialize(
    UMAA_Common_Speed_SpeedControlType_Specializations_SpeedControlType_Union* self);

NDDSUSERDllExport
RTIBool UMAA_Common_Speed_SpeedControlType_Specializations_SpeedControlType_Union_initialize_ex(
    UMAA_Common_Speed_SpeedControlType_Specializations_SpeedControlType_Union* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_Common_Speed_SpeedControlType_Specializations_SpeedControlType_Union_initialize_w_params(
    UMAA_Common_Speed_SpeedControlType_Specializations_SpeedControlType_Union* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_Common_Speed_SpeedControlType_Specializations_SpeedControlType_Union_finalize_w_return(
    UMAA_Common_Speed_SpeedControlType_Specializations_SpeedControlType_Union* self);

NDDSUSERDllExport
void UMAA_Common_Speed_SpeedControlType_Specializations_SpeedControlType_Union_finalize(
    UMAA_Common_Speed_SpeedControlType_Specializations_SpeedControlType_Union* self);

NDDSUSERDllExport
void UMAA_Common_Speed_SpeedControlType_Specializations_SpeedControlType_Union_finalize_ex(
    UMAA_Common_Speed_SpeedControlType_Specializations_SpeedControlType_Union* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_Common_Speed_SpeedControlType_Specializations_SpeedControlType_Union_finalize_w_params(
    UMAA_Common_Speed_SpeedControlType_Specializations_SpeedControlType_Union* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_Common_Speed_SpeedControlType_Specializations_SpeedControlType_Union_finalize_optional_members(
    UMAA_Common_Speed_SpeedControlType_Specializations_SpeedControlType_Union* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_Common_Speed_SpeedControlType_Specializations_SpeedControlType_Union_copy(
    UMAA_Common_Speed_SpeedControlType_Specializations_SpeedControlType_Union* dst,
    const UMAA_Common_Speed_SpeedControlType_Specializations_SpeedControlType_Union* src);

NDDSUSERDllExport
DDS_LongLong UMAA_Common_Speed_SpeedControlType_Specializations_SpeedControlType_Union_getDefaultDiscriminator(void);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

extern "C" {

    extern const char *UMAA_Common_Speed_SpeedControlTypeTYPENAME;

}

struct UMAA_Common_Speed_SpeedControlTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_Common_Speed_SpeedControlTypeTypeSupport;
class UMAA_Common_Speed_SpeedControlTypeDataWriter;
class UMAA_Common_Speed_SpeedControlTypeDataReader;
#endif
class UMAA_Common_Speed_SpeedControlType 
{
  public:
    typedef struct UMAA_Common_Speed_SpeedControlTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_Common_Speed_SpeedControlTypeTypeSupport TypeSupport;
    typedef UMAA_Common_Speed_SpeedControlTypeDataWriter DataWriter;
    typedef UMAA_Common_Speed_SpeedControlTypeDataReader DataReader;
    #endif

    UMAA_Common_Speed_SpeedControlType_Specializations_SpeedControlType_Union   SpeedControlType_subtypes ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_Common_Speed_SpeedControlType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_Common_Speed_SpeedControlType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Speed_SpeedControlType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Speed_SpeedControlType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_Common_Speed_SpeedControlTypeSeq, UMAA_Common_Speed_SpeedControlType);

NDDSUSERDllExport
RTIBool UMAA_Common_Speed_SpeedControlType_initialize(
    UMAA_Common_Speed_SpeedControlType* self);

NDDSUSERDllExport
RTIBool UMAA_Common_Speed_SpeedControlType_initialize_ex(
    UMAA_Common_Speed_SpeedControlType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_Common_Speed_SpeedControlType_initialize_w_params(
    UMAA_Common_Speed_SpeedControlType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_Common_Speed_SpeedControlType_finalize_w_return(
    UMAA_Common_Speed_SpeedControlType* self);

NDDSUSERDllExport
void UMAA_Common_Speed_SpeedControlType_finalize(
    UMAA_Common_Speed_SpeedControlType* self);

NDDSUSERDllExport
void UMAA_Common_Speed_SpeedControlType_finalize_ex(
    UMAA_Common_Speed_SpeedControlType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_Common_Speed_SpeedControlType_finalize_w_params(
    UMAA_Common_Speed_SpeedControlType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_Common_Speed_SpeedControlType_finalize_optional_members(
    UMAA_Common_Speed_SpeedControlType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_Common_Speed_SpeedControlType_copy(
    UMAA_Common_Speed_SpeedControlType* dst,
    const UMAA_Common_Speed_SpeedControlType* src);

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
        struct type_code< UMAA_Common_Speed_SpeedControlType_Specializations_SpeedControlType_Union> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code< UMAA_Common_Speed_SpeedControlType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* SpeedControlType */

