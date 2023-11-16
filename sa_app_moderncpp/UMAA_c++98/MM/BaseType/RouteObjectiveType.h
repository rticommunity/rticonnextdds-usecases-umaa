

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from RouteObjectiveType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef RouteObjectiveType_2009706822_h
#define RouteObjectiveType_2009706822_h

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
#include "UMAA/Common/Measurement/DateTime_Tolerance.h"
#include "UMAA/Common/Measurement/Measurements.h"
#include "UMAA/Common/PrimitiveConstrained/ConstrainedTypes.h"
#include "UMAA/MM/BaseType/WaypointType.h"
#include "UMAA/Common/Measurement/Measurements.h"

extern "C" {

    extern const char *UMAA_MM_BaseType_RouteObjectiveTypeTYPENAME;

}

struct UMAA_MM_BaseType_RouteObjectiveTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_MM_BaseType_RouteObjectiveTypeTypeSupport;
class UMAA_MM_BaseType_RouteObjectiveTypeDataWriter;
class UMAA_MM_BaseType_RouteObjectiveTypeDataReader;
#endif
class UMAA_MM_BaseType_RouteObjectiveType 
{
  public:
    typedef struct UMAA_MM_BaseType_RouteObjectiveTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_MM_BaseType_RouteObjectiveTypeTypeSupport TypeSupport;
    typedef UMAA_MM_BaseType_RouteObjectiveTypeDataWriter DataWriter;
    typedef UMAA_MM_BaseType_RouteObjectiveTypeDataReader DataReader;
    #endif

    UMAA_Common_MaritimeEnumeration_HeightModeEnumType_HeightModeEnumType   mode ;
    DDS_Char *   routeDescription ;
    UMAA_MM_BaseType_WaypointTypeSeq  waypoints ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_MM_BaseType_RouteObjectiveType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_MM_BaseType_RouteObjectiveType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MM_BaseType_RouteObjectiveType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MM_BaseType_RouteObjectiveType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_MM_BaseType_RouteObjectiveTypeSeq, UMAA_MM_BaseType_RouteObjectiveType);

NDDSUSERDllExport
RTIBool UMAA_MM_BaseType_RouteObjectiveType_initialize(
    UMAA_MM_BaseType_RouteObjectiveType* self);

NDDSUSERDllExport
RTIBool UMAA_MM_BaseType_RouteObjectiveType_initialize_ex(
    UMAA_MM_BaseType_RouteObjectiveType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_MM_BaseType_RouteObjectiveType_initialize_w_params(
    UMAA_MM_BaseType_RouteObjectiveType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_MM_BaseType_RouteObjectiveType_finalize_w_return(
    UMAA_MM_BaseType_RouteObjectiveType* self);

NDDSUSERDllExport
void UMAA_MM_BaseType_RouteObjectiveType_finalize(
    UMAA_MM_BaseType_RouteObjectiveType* self);

NDDSUSERDllExport
void UMAA_MM_BaseType_RouteObjectiveType_finalize_ex(
    UMAA_MM_BaseType_RouteObjectiveType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_MM_BaseType_RouteObjectiveType_finalize_w_params(
    UMAA_MM_BaseType_RouteObjectiveType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_MM_BaseType_RouteObjectiveType_finalize_optional_members(
    UMAA_MM_BaseType_RouteObjectiveType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_MM_BaseType_RouteObjectiveType_copy(
    UMAA_MM_BaseType_RouteObjectiveType* dst,
    const UMAA_MM_BaseType_RouteObjectiveType* src);

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
        struct type_code< UMAA_MM_BaseType_RouteObjectiveType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* RouteObjectiveType */

