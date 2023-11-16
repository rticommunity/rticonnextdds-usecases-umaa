

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ObjectiveType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef ObjectiveType_1323830816_h
#define ObjectiveType_1323830816_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "UMAA/Common/Enumeration/EnumerationSets.h"
#include "UMAA/Common/Measurement/DateTime_Tolerance.h"
#include "UMAA/Common/Measurement/Measurements.h"
#include "UMAA/Common/PrimitiveConstrained/ConstrainedTypes.h"
#include "UMAA/MM/BaseType/ChargingObjectiveType.h"
#include "UMAA/MM/BaseType/CommsLinkObjectiveType.h"
#include "UMAA/MM/BaseType/ContingencyObjectiveType.h"
#include "UMAA/MM/BaseType/DeploymentObjectiveType.h"
#include "UMAA/MM/BaseType/LoiterObjectiveType.h"
#include "UMAA/MM/BaseType/PassiveLoiterObjectiveType.h"
#include "UMAA/MM/BaseType/ProductDisseminateFileObjectiveType.h"
#include "UMAA/MM/BaseType/ProductExploitationObjectiveType.h"
#include "UMAA/MM/BaseType/RecoveryObjectiveType.h"
#include "UMAA/MM/BaseType/RouteObjectiveType.h"
#include "UMAA/MM/BaseType/StationkeepObjectiveType.h"
#include "UMAA/Common/Measurement/Measurements.h"

typedef enum UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Selectors
{
    UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Selectors_PRODUCTDISSEMINATEFILEOBJECTIVETYPE_SELECT , 
    UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Selectors_RECOVERYOBJECTIVETYPE_SELECT , 
    UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Selectors_PRODUCTEXPLOITATIONOBJECTIVETYPE_SELECT , 
    UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Selectors_COMMSLINKOBJECTIVETYPE_SELECT , 
    UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Selectors_DEPLOYMENTOBJECTIVETYPE_SELECT , 
    UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Selectors_PASSIVELOITEROBJECTIVETYPE_SELECT , 
    UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Selectors_STATIONKEEPOBJECTIVETYPE_SELECT , 
    UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Selectors_ROUTEOBJECTIVETYPE_SELECT , 
    UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Selectors_CHARGINGOBJECTIVETYPE_SELECT , 
    UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Selectors_LOITEROBJECTIVETYPE_SELECT , 
    UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Selectors_CONTINGENCYOBJECTIVETYPE_SELECT 
} UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Selectors;
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Selectors_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Selectors_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Selectors_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Selectors_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_SelectorsSeq, UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Selectors);

NDDSUSERDllExport
RTIBool UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Selectors_initialize(
    UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Selectors* self);

NDDSUSERDllExport
RTIBool UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Selectors_initialize_ex(
    UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Selectors* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Selectors_initialize_w_params(
    UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Selectors* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Selectors_finalize_w_return(
    UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Selectors* self);

NDDSUSERDllExport
void UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Selectors_finalize(
    UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Selectors* self);

NDDSUSERDllExport
void UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Selectors_finalize_ex(
    UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Selectors* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Selectors_finalize_w_params(
    UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Selectors* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Selectors_finalize_optional_members(
    UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Selectors* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Selectors_copy(
    UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Selectors* dst,
    const UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Selectors* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

extern "C" {

    extern const char *UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_UnionTYPENAME;

}

struct UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_UnionSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_UnionTypeSupport;
class UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_UnionDataWriter;
class UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_UnionDataReader;
#endif

typedef struct UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Union
{
    typedef struct UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_UnionSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_UnionTypeSupport TypeSupport;
    typedef UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_UnionDataWriter DataWriter;
    typedef UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_UnionDataReader DataReader;
    #endif

    UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Selectors _d;
    struct UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Union_u 
    {

        UMAA_MM_BaseType_ProductDisseminateFileObjectiveType   ProductDisseminateFileObjectiveType_data ;
        UMAA_MM_BaseType_RecoveryObjectiveType   RecoveryObjectiveType_data ;
        UMAA_MM_BaseType_ProductExploitationObjectiveType   ProductExploitationObjectiveType_data ;
        UMAA_MM_BaseType_CommsLinkObjectiveType   CommsLinkObjectiveType_data ;
        UMAA_MM_BaseType_DeploymentObjectiveType   DeploymentObjectiveType_data ;
        UMAA_MM_BaseType_PassiveLoiterObjectiveType   PassiveLoiterObjectiveType_data ;
        UMAA_MM_BaseType_StationkeepObjectiveType   StationkeepObjectiveType_data ;
        UMAA_MM_BaseType_RouteObjectiveType   RouteObjectiveType_data ;
        UMAA_MM_BaseType_ChargingObjectiveType   ChargingObjectiveType_data ;
        UMAA_MM_BaseType_LoiterObjectiveType   LoiterObjectiveType_data ;
        UMAA_MM_BaseType_ContingencyObjectiveType   ContingencyObjectiveType_data ;
    }_u;

} UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Union ;
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Union_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Union_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Union_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Union_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_UnionSeq, UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Union);

NDDSUSERDllExport
RTIBool UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Union_initialize(
    UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Union* self);

NDDSUSERDllExport
RTIBool UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Union_initialize_ex(
    UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Union* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Union_initialize_w_params(
    UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Union* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Union_finalize_w_return(
    UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Union* self);

NDDSUSERDllExport
void UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Union_finalize(
    UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Union* self);

NDDSUSERDllExport
void UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Union_finalize_ex(
    UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Union* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Union_finalize_w_params(
    UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Union* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Union_finalize_optional_members(
    UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Union* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Union_copy(
    UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Union* dst,
    const UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Union* src);

NDDSUSERDllExport
DDS_LongLong UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Union_getDefaultDiscriminator(void);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

extern "C" {

    extern const char *UMAA_MM_BaseType_ObjectiveTypeTYPENAME;

}

struct UMAA_MM_BaseType_ObjectiveTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_MM_BaseType_ObjectiveTypeTypeSupport;
class UMAA_MM_BaseType_ObjectiveTypeDataWriter;
class UMAA_MM_BaseType_ObjectiveTypeDataReader;
#endif
class UMAA_MM_BaseType_ObjectiveType 
{
  public:
    typedef struct UMAA_MM_BaseType_ObjectiveTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_MM_BaseType_ObjectiveTypeTypeSupport TypeSupport;
    typedef UMAA_MM_BaseType_ObjectiveTypeDataWriter DataWriter;
    typedef UMAA_MM_BaseType_ObjectiveTypeDataReader DataReader;
    #endif

    DDS_Boolean   approvalRequired ;
    UMAA_Common_Measurement_NumericGUIDSeq  childObjectiveIDs ;
    UMAA_Common_Measurement_NumericGUIDSeq  dependentObjectiveIDs ;
    UMAA_Common_Measurement_DateTime   endTime ;
    UMAA_Common_Measurement_DateTime_Tolerance   * endTimeTolerance ;
    DDS_Char *   name ;
    UMAA_Common_Measurement_NumericGUIDSeq  preferredResourceIDs ;
    DDS_Long   priority ;
    UMAA_Common_Measurement_DateTime   startTime ;
    UMAA_Common_Measurement_DateTime_Tolerance   * startTimeTolerance ;
    UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Union   ObjectiveType_subtypes ;
    UMAA_Common_Measurement_NumericGUID   objectiveID ;
    UMAA_Common_Measurement_NumericGUID   parentObjectiveID ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_MM_BaseType_ObjectiveType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_MM_BaseType_ObjectiveType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MM_BaseType_ObjectiveType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MM_BaseType_ObjectiveType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_MM_BaseType_ObjectiveTypeSeq, UMAA_MM_BaseType_ObjectiveType);

NDDSUSERDllExport
RTIBool UMAA_MM_BaseType_ObjectiveType_initialize(
    UMAA_MM_BaseType_ObjectiveType* self);

NDDSUSERDllExport
RTIBool UMAA_MM_BaseType_ObjectiveType_initialize_ex(
    UMAA_MM_BaseType_ObjectiveType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_MM_BaseType_ObjectiveType_initialize_w_params(
    UMAA_MM_BaseType_ObjectiveType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_MM_BaseType_ObjectiveType_finalize_w_return(
    UMAA_MM_BaseType_ObjectiveType* self);

NDDSUSERDllExport
void UMAA_MM_BaseType_ObjectiveType_finalize(
    UMAA_MM_BaseType_ObjectiveType* self);

NDDSUSERDllExport
void UMAA_MM_BaseType_ObjectiveType_finalize_ex(
    UMAA_MM_BaseType_ObjectiveType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_MM_BaseType_ObjectiveType_finalize_w_params(
    UMAA_MM_BaseType_ObjectiveType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_MM_BaseType_ObjectiveType_finalize_optional_members(
    UMAA_MM_BaseType_ObjectiveType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_MM_BaseType_ObjectiveType_copy(
    UMAA_MM_BaseType_ObjectiveType* dst,
    const UMAA_MM_BaseType_ObjectiveType* src);

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
        struct type_code< UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Union> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code< UMAA_MM_BaseType_ObjectiveType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* ObjectiveType */

