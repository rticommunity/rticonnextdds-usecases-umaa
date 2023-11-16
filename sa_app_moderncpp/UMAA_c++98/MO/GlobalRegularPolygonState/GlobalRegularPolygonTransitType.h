

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GlobalRegularPolygonTransitType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef GlobalRegularPolygonTransitType_240695990_h
#define GlobalRegularPolygonTransitType_240695990_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "UMAA/Common/Enumeration/EnumerationSets.h"

extern "C" {

    extern const char *UMAA_MO_GlobalRegularPolygonState_GlobalRegularPolygonTransitTypeTYPENAME;

}

struct UMAA_MO_GlobalRegularPolygonState_GlobalRegularPolygonTransitTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_MO_GlobalRegularPolygonState_GlobalRegularPolygonTransitTypeTypeSupport;
class UMAA_MO_GlobalRegularPolygonState_GlobalRegularPolygonTransitTypeDataWriter;
class UMAA_MO_GlobalRegularPolygonState_GlobalRegularPolygonTransitTypeDataReader;
#endif
class UMAA_MO_GlobalRegularPolygonState_GlobalRegularPolygonTransitType 
{
  public:
    typedef struct UMAA_MO_GlobalRegularPolygonState_GlobalRegularPolygonTransitTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_MO_GlobalRegularPolygonState_GlobalRegularPolygonTransitTypeTypeSupport TypeSupport;
    typedef UMAA_MO_GlobalRegularPolygonState_GlobalRegularPolygonTransitTypeDataWriter DataWriter;
    typedef UMAA_MO_GlobalRegularPolygonState_GlobalRegularPolygonTransitTypeDataReader DataReader;
    #endif

    DDS_Boolean   transitElevationAchieved ;
    DDS_Boolean   transitSpeedAchieved ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_MO_GlobalRegularPolygonState_GlobalRegularPolygonTransitType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_MO_GlobalRegularPolygonState_GlobalRegularPolygonTransitType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MO_GlobalRegularPolygonState_GlobalRegularPolygonTransitType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MO_GlobalRegularPolygonState_GlobalRegularPolygonTransitType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_MO_GlobalRegularPolygonState_GlobalRegularPolygonTransitTypeSeq, UMAA_MO_GlobalRegularPolygonState_GlobalRegularPolygonTransitType);

NDDSUSERDllExport
RTIBool UMAA_MO_GlobalRegularPolygonState_GlobalRegularPolygonTransitType_initialize(
    UMAA_MO_GlobalRegularPolygonState_GlobalRegularPolygonTransitType* self);

NDDSUSERDllExport
RTIBool UMAA_MO_GlobalRegularPolygonState_GlobalRegularPolygonTransitType_initialize_ex(
    UMAA_MO_GlobalRegularPolygonState_GlobalRegularPolygonTransitType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_MO_GlobalRegularPolygonState_GlobalRegularPolygonTransitType_initialize_w_params(
    UMAA_MO_GlobalRegularPolygonState_GlobalRegularPolygonTransitType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_MO_GlobalRegularPolygonState_GlobalRegularPolygonTransitType_finalize_w_return(
    UMAA_MO_GlobalRegularPolygonState_GlobalRegularPolygonTransitType* self);

NDDSUSERDllExport
void UMAA_MO_GlobalRegularPolygonState_GlobalRegularPolygonTransitType_finalize(
    UMAA_MO_GlobalRegularPolygonState_GlobalRegularPolygonTransitType* self);

NDDSUSERDllExport
void UMAA_MO_GlobalRegularPolygonState_GlobalRegularPolygonTransitType_finalize_ex(
    UMAA_MO_GlobalRegularPolygonState_GlobalRegularPolygonTransitType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_MO_GlobalRegularPolygonState_GlobalRegularPolygonTransitType_finalize_w_params(
    UMAA_MO_GlobalRegularPolygonState_GlobalRegularPolygonTransitType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_MO_GlobalRegularPolygonState_GlobalRegularPolygonTransitType_finalize_optional_members(
    UMAA_MO_GlobalRegularPolygonState_GlobalRegularPolygonTransitType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_MO_GlobalRegularPolygonState_GlobalRegularPolygonTransitType_copy(
    UMAA_MO_GlobalRegularPolygonState_GlobalRegularPolygonTransitType* dst,
    const UMAA_MO_GlobalRegularPolygonState_GlobalRegularPolygonTransitType* src);

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
        struct type_code< UMAA_MO_GlobalRegularPolygonState_GlobalRegularPolygonTransitType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* GlobalRegularPolygonTransitType */

