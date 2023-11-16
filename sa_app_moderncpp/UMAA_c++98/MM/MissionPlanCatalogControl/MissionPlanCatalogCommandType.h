

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from MissionPlanCatalogCommandType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef MissionPlanCatalogCommandType_308920492_h
#define MissionPlanCatalogCommandType_308920492_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "UMAA/Common/Enumeration/EnumerationSets.h"
#include "UMAA/Common/MaritimeEnumeration/EnumerationSets.h"
#include "UMAA/Common/Measurement/Measurements.h"
#include "UMAA/Common/PrimitiveConstrained/ConstrainedTypes.h"

static const DDS_Char * const UMAA_MM_MissionPlanCatalogControl_MissionPlanCatalogCommand_TOPIC= "UMAA::MM::MissionPlanCatalogControl::MissionPlanCatalogCommand";

extern "C" {

    extern const char *UMAA_MM_MissionPlanCatalogControl_MissionPlanCatalogCommandTypeTYPENAME;

}

struct UMAA_MM_MissionPlanCatalogControl_MissionPlanCatalogCommandTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_MM_MissionPlanCatalogControl_MissionPlanCatalogCommandTypeTypeSupport;
class UMAA_MM_MissionPlanCatalogControl_MissionPlanCatalogCommandTypeDataWriter;
class UMAA_MM_MissionPlanCatalogControl_MissionPlanCatalogCommandTypeDataReader;
#endif
class UMAA_MM_MissionPlanCatalogControl_MissionPlanCatalogCommandType 
{
  public:
    typedef struct UMAA_MM_MissionPlanCatalogControl_MissionPlanCatalogCommandTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_MM_MissionPlanCatalogControl_MissionPlanCatalogCommandTypeTypeSupport TypeSupport;
    typedef UMAA_MM_MissionPlanCatalogControl_MissionPlanCatalogCommandTypeDataWriter DataWriter;
    typedef UMAA_MM_MissionPlanCatalogControl_MissionPlanCatalogCommandTypeDataReader DataReader;
    #endif

    UMAA_Common_Enumeration_PlanActionEnumType_PlanActionEnumType   action ;
    DDS_Boolean   allocationStatus ;
    UMAA_Common_Measurement_NumericGUID   assignedResource ;
    UMAA_Common_MaritimeEnumeration_DomainEnumType_DomainEnumType   domain ;
    DDS_Char *   format ;
    DDS_Char *   name ;
    UMAA_Common_Measurement_NumericGUID   source ;
    UMAA_Common_Measurement_NumericGUID   destination ;
    UMAA_Common_Measurement_NumericGUID   sessionID ;
    UMAA_Common_Measurement_DateTime   timeStamp ;
    UMAA_Common_Measurement_NumericGUID   missionID ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_MM_MissionPlanCatalogControl_MissionPlanCatalogCommandType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_MM_MissionPlanCatalogControl_MissionPlanCatalogCommandType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MM_MissionPlanCatalogControl_MissionPlanCatalogCommandType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MM_MissionPlanCatalogControl_MissionPlanCatalogCommandType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_MM_MissionPlanCatalogControl_MissionPlanCatalogCommandTypeSeq, UMAA_MM_MissionPlanCatalogControl_MissionPlanCatalogCommandType);

NDDSUSERDllExport
RTIBool UMAA_MM_MissionPlanCatalogControl_MissionPlanCatalogCommandType_initialize(
    UMAA_MM_MissionPlanCatalogControl_MissionPlanCatalogCommandType* self);

NDDSUSERDllExport
RTIBool UMAA_MM_MissionPlanCatalogControl_MissionPlanCatalogCommandType_initialize_ex(
    UMAA_MM_MissionPlanCatalogControl_MissionPlanCatalogCommandType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_MM_MissionPlanCatalogControl_MissionPlanCatalogCommandType_initialize_w_params(
    UMAA_MM_MissionPlanCatalogControl_MissionPlanCatalogCommandType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_MM_MissionPlanCatalogControl_MissionPlanCatalogCommandType_finalize_w_return(
    UMAA_MM_MissionPlanCatalogControl_MissionPlanCatalogCommandType* self);

NDDSUSERDllExport
void UMAA_MM_MissionPlanCatalogControl_MissionPlanCatalogCommandType_finalize(
    UMAA_MM_MissionPlanCatalogControl_MissionPlanCatalogCommandType* self);

NDDSUSERDllExport
void UMAA_MM_MissionPlanCatalogControl_MissionPlanCatalogCommandType_finalize_ex(
    UMAA_MM_MissionPlanCatalogControl_MissionPlanCatalogCommandType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_MM_MissionPlanCatalogControl_MissionPlanCatalogCommandType_finalize_w_params(
    UMAA_MM_MissionPlanCatalogControl_MissionPlanCatalogCommandType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_MM_MissionPlanCatalogControl_MissionPlanCatalogCommandType_finalize_optional_members(
    UMAA_MM_MissionPlanCatalogControl_MissionPlanCatalogCommandType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_MM_MissionPlanCatalogControl_MissionPlanCatalogCommandType_copy(
    UMAA_MM_MissionPlanCatalogControl_MissionPlanCatalogCommandType* dst,
    const UMAA_MM_MissionPlanCatalogControl_MissionPlanCatalogCommandType* src);

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
        struct type_code< UMAA_MM_MissionPlanCatalogControl_MissionPlanCatalogCommandType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* MissionPlanCatalogCommandType */

