

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from MissionPlanCatalogCommandStatusType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef MissionPlanCatalogCommandStatusType_992470771_h
#define MissionPlanCatalogCommandStatusType_992470771_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "UMAA/Common/Measurement/Measurements.h"
#include "UMAA/Common/MaritimeEnumeration/EnumerationSets.h"

static const DDS_Char * const UMAA_MM_MissionPlanCatalogControl_MissionPlanCatalogCommandStatus_TOPIC= "UMAA::MM::MissionPlanCatalogControl::MissionPlanCatalogCommandStatus";

extern "C" {

    extern const char *UMAA_MM_MissionPlanCatalogControl_MissionPlanCatalogCommandStatusTypeTYPENAME;

}

struct UMAA_MM_MissionPlanCatalogControl_MissionPlanCatalogCommandStatusTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_MM_MissionPlanCatalogControl_MissionPlanCatalogCommandStatusTypeTypeSupport;
class UMAA_MM_MissionPlanCatalogControl_MissionPlanCatalogCommandStatusTypeDataWriter;
class UMAA_MM_MissionPlanCatalogControl_MissionPlanCatalogCommandStatusTypeDataReader;
#endif
class UMAA_MM_MissionPlanCatalogControl_MissionPlanCatalogCommandStatusType 
{
  public:
    typedef struct UMAA_MM_MissionPlanCatalogControl_MissionPlanCatalogCommandStatusTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_MM_MissionPlanCatalogControl_MissionPlanCatalogCommandStatusTypeTypeSupport TypeSupport;
    typedef UMAA_MM_MissionPlanCatalogControl_MissionPlanCatalogCommandStatusTypeDataWriter DataWriter;
    typedef UMAA_MM_MissionPlanCatalogControl_MissionPlanCatalogCommandStatusTypeDataReader DataReader;
    #endif

    UMAA_Common_Measurement_NumericGUID   source ;
    UMAA_Common_MaritimeEnumeration_CommandStatusEnumType_CommandStatusEnumType   commandStatus ;
    UMAA_Common_MaritimeEnumeration_CommandStatusReasonEnumType_CommandStatusReasonEnumType   commandStatusReason ;
    DDS_Char *   logMessage ;
    UMAA_Common_Measurement_NumericGUID   sessionID ;
    UMAA_Common_Measurement_DateTime   timeStamp ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_MM_MissionPlanCatalogControl_MissionPlanCatalogCommandStatusType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_MM_MissionPlanCatalogControl_MissionPlanCatalogCommandStatusType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MM_MissionPlanCatalogControl_MissionPlanCatalogCommandStatusType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MM_MissionPlanCatalogControl_MissionPlanCatalogCommandStatusType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_MM_MissionPlanCatalogControl_MissionPlanCatalogCommandStatusTypeSeq, UMAA_MM_MissionPlanCatalogControl_MissionPlanCatalogCommandStatusType);

NDDSUSERDllExport
RTIBool UMAA_MM_MissionPlanCatalogControl_MissionPlanCatalogCommandStatusType_initialize(
    UMAA_MM_MissionPlanCatalogControl_MissionPlanCatalogCommandStatusType* self);

NDDSUSERDllExport
RTIBool UMAA_MM_MissionPlanCatalogControl_MissionPlanCatalogCommandStatusType_initialize_ex(
    UMAA_MM_MissionPlanCatalogControl_MissionPlanCatalogCommandStatusType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_MM_MissionPlanCatalogControl_MissionPlanCatalogCommandStatusType_initialize_w_params(
    UMAA_MM_MissionPlanCatalogControl_MissionPlanCatalogCommandStatusType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_MM_MissionPlanCatalogControl_MissionPlanCatalogCommandStatusType_finalize_w_return(
    UMAA_MM_MissionPlanCatalogControl_MissionPlanCatalogCommandStatusType* self);

NDDSUSERDllExport
void UMAA_MM_MissionPlanCatalogControl_MissionPlanCatalogCommandStatusType_finalize(
    UMAA_MM_MissionPlanCatalogControl_MissionPlanCatalogCommandStatusType* self);

NDDSUSERDllExport
void UMAA_MM_MissionPlanCatalogControl_MissionPlanCatalogCommandStatusType_finalize_ex(
    UMAA_MM_MissionPlanCatalogControl_MissionPlanCatalogCommandStatusType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_MM_MissionPlanCatalogControl_MissionPlanCatalogCommandStatusType_finalize_w_params(
    UMAA_MM_MissionPlanCatalogControl_MissionPlanCatalogCommandStatusType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_MM_MissionPlanCatalogControl_MissionPlanCatalogCommandStatusType_finalize_optional_members(
    UMAA_MM_MissionPlanCatalogControl_MissionPlanCatalogCommandStatusType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_MM_MissionPlanCatalogControl_MissionPlanCatalogCommandStatusType_copy(
    UMAA_MM_MissionPlanCatalogControl_MissionPlanCatalogCommandStatusType* dst,
    const UMAA_MM_MissionPlanCatalogControl_MissionPlanCatalogCommandStatusType* src);

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
        struct type_code< UMAA_MM_MissionPlanCatalogControl_MissionPlanCatalogCommandStatusType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* MissionPlanCatalogCommandStatusType */

