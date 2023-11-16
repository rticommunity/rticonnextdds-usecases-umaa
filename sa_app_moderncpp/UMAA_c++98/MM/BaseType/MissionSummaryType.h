

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from MissionSummaryType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef MissionSummaryType_327615880_h
#define MissionSummaryType_327615880_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "UMAA/Common/MaritimeEnumeration/EnumerationSets.h"
#include "UMAA/Common/Measurement/Measurements.h"
#include "UMAA/Common/PrimitiveConstrained/ConstrainedTypes.h"
#include "UMAA/Common/Measurement/Measurements.h"

extern "C" {

    extern const char *UMAA_MM_BaseType_MissionSummaryTypeTYPENAME;

}

struct UMAA_MM_BaseType_MissionSummaryTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_MM_BaseType_MissionSummaryTypeTypeSupport;
class UMAA_MM_BaseType_MissionSummaryTypeDataWriter;
class UMAA_MM_BaseType_MissionSummaryTypeDataReader;
#endif
class UMAA_MM_BaseType_MissionSummaryType 
{
  public:
    typedef struct UMAA_MM_BaseType_MissionSummaryTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_MM_BaseType_MissionSummaryTypeTypeSupport TypeSupport;
    typedef UMAA_MM_BaseType_MissionSummaryTypeDataWriter DataWriter;
    typedef UMAA_MM_BaseType_MissionSummaryTypeDataReader DataReader;
    #endif

    DDS_Char *   missionDescription ;
    DDS_Char *   missionName ;
    UMAA_Common_Measurement_DateTime   startTime ;
    UMAA_Common_MaritimeEnumeration_TaskStateEnumType_TaskStateEnumType   state ;
    UMAA_Common_Measurement_NumericGUID   missionID ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_MM_BaseType_MissionSummaryType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_MM_BaseType_MissionSummaryType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MM_BaseType_MissionSummaryType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MM_BaseType_MissionSummaryType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_MM_BaseType_MissionSummaryTypeSeq, UMAA_MM_BaseType_MissionSummaryType);

NDDSUSERDllExport
RTIBool UMAA_MM_BaseType_MissionSummaryType_initialize(
    UMAA_MM_BaseType_MissionSummaryType* self);

NDDSUSERDllExport
RTIBool UMAA_MM_BaseType_MissionSummaryType_initialize_ex(
    UMAA_MM_BaseType_MissionSummaryType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_MM_BaseType_MissionSummaryType_initialize_w_params(
    UMAA_MM_BaseType_MissionSummaryType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_MM_BaseType_MissionSummaryType_finalize_w_return(
    UMAA_MM_BaseType_MissionSummaryType* self);

NDDSUSERDllExport
void UMAA_MM_BaseType_MissionSummaryType_finalize(
    UMAA_MM_BaseType_MissionSummaryType* self);

NDDSUSERDllExport
void UMAA_MM_BaseType_MissionSummaryType_finalize_ex(
    UMAA_MM_BaseType_MissionSummaryType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_MM_BaseType_MissionSummaryType_finalize_w_params(
    UMAA_MM_BaseType_MissionSummaryType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_MM_BaseType_MissionSummaryType_finalize_optional_members(
    UMAA_MM_BaseType_MissionSummaryType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_MM_BaseType_MissionSummaryType_copy(
    UMAA_MM_BaseType_MissionSummaryType* dst,
    const UMAA_MM_BaseType_MissionSummaryType* src);

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
        struct type_code< UMAA_MM_BaseType_MissionSummaryType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* MissionSummaryType */

