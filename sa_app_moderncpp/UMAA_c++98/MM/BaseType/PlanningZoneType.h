

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from PlanningZoneType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef PlanningZoneType_1408384440_h
#define PlanningZoneType_1408384440_h

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
#include "UMAA/Common/Measurement/Polygon_Volume.h"
#include "UMAA/Common/PrimitiveConstrained/ConstrainedTypes.h"
#include "UMAA/Common/Measurement/Measurements.h"

extern "C" {

    extern const char *UMAA_MM_BaseType_PlanningZoneTypeTYPENAME;

}

struct UMAA_MM_BaseType_PlanningZoneTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_MM_BaseType_PlanningZoneTypeTypeSupport;
class UMAA_MM_BaseType_PlanningZoneTypeDataWriter;
class UMAA_MM_BaseType_PlanningZoneTypeDataReader;
#endif
class UMAA_MM_BaseType_PlanningZoneType 
{
  public:
    typedef struct UMAA_MM_BaseType_PlanningZoneTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_MM_BaseType_PlanningZoneTypeTypeSupport TypeSupport;
    typedef UMAA_MM_BaseType_PlanningZoneTypeDataWriter DataWriter;
    typedef UMAA_MM_BaseType_PlanningZoneTypeDataReader DataReader;
    #endif

    UMAA_Common_Measurement_DateTime   * endTime ;
    UMAA_Common_Measurement_DateTime   * startTime ;
    UMAA_Common_Measurement_Polygon_Volume   zone ;
    UMAA_Common_MaritimeEnumeration_ZoneKindEnumType_ZoneKindEnumType   zoneKind ;
    DDS_Char *   zoneName ;
    UMAA_Common_Measurement_NumericGUID   zoneID ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_MM_BaseType_PlanningZoneType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_MM_BaseType_PlanningZoneType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MM_BaseType_PlanningZoneType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MM_BaseType_PlanningZoneType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_MM_BaseType_PlanningZoneTypeSeq, UMAA_MM_BaseType_PlanningZoneType);

NDDSUSERDllExport
RTIBool UMAA_MM_BaseType_PlanningZoneType_initialize(
    UMAA_MM_BaseType_PlanningZoneType* self);

NDDSUSERDllExport
RTIBool UMAA_MM_BaseType_PlanningZoneType_initialize_ex(
    UMAA_MM_BaseType_PlanningZoneType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_MM_BaseType_PlanningZoneType_initialize_w_params(
    UMAA_MM_BaseType_PlanningZoneType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_MM_BaseType_PlanningZoneType_finalize_w_return(
    UMAA_MM_BaseType_PlanningZoneType* self);

NDDSUSERDllExport
void UMAA_MM_BaseType_PlanningZoneType_finalize(
    UMAA_MM_BaseType_PlanningZoneType* self);

NDDSUSERDllExport
void UMAA_MM_BaseType_PlanningZoneType_finalize_ex(
    UMAA_MM_BaseType_PlanningZoneType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_MM_BaseType_PlanningZoneType_finalize_w_params(
    UMAA_MM_BaseType_PlanningZoneType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_MM_BaseType_PlanningZoneType_finalize_optional_members(
    UMAA_MM_BaseType_PlanningZoneType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_MM_BaseType_PlanningZoneType_copy(
    UMAA_MM_BaseType_PlanningZoneType* dst,
    const UMAA_MM_BaseType_PlanningZoneType* src);

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
        struct type_code< UMAA_MM_BaseType_PlanningZoneType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* PlanningZoneType */

