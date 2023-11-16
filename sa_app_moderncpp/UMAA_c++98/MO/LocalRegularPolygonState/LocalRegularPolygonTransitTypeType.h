

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from LocalRegularPolygonTransitTypeType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef LocalRegularPolygonTransitTypeType_845881518_h
#define LocalRegularPolygonTransitTypeType_845881518_h

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

    extern const char *UMAA_MO_LocalRegularPolygonState_LocalRegularPolygonTransitTypeTypeTYPENAME;

}

struct UMAA_MO_LocalRegularPolygonState_LocalRegularPolygonTransitTypeTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_MO_LocalRegularPolygonState_LocalRegularPolygonTransitTypeTypeTypeSupport;
class UMAA_MO_LocalRegularPolygonState_LocalRegularPolygonTransitTypeTypeDataWriter;
class UMAA_MO_LocalRegularPolygonState_LocalRegularPolygonTransitTypeTypeDataReader;
#endif
class UMAA_MO_LocalRegularPolygonState_LocalRegularPolygonTransitTypeType 
{
  public:
    typedef struct UMAA_MO_LocalRegularPolygonState_LocalRegularPolygonTransitTypeTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_MO_LocalRegularPolygonState_LocalRegularPolygonTransitTypeTypeTypeSupport TypeSupport;
    typedef UMAA_MO_LocalRegularPolygonState_LocalRegularPolygonTransitTypeTypeDataWriter DataWriter;
    typedef UMAA_MO_LocalRegularPolygonState_LocalRegularPolygonTransitTypeTypeDataReader DataReader;
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
NDDSUSERDllExport DDS_TypeCode * UMAA_MO_LocalRegularPolygonState_LocalRegularPolygonTransitTypeType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_MO_LocalRegularPolygonState_LocalRegularPolygonTransitTypeType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MO_LocalRegularPolygonState_LocalRegularPolygonTransitTypeType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MO_LocalRegularPolygonState_LocalRegularPolygonTransitTypeType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_MO_LocalRegularPolygonState_LocalRegularPolygonTransitTypeTypeSeq, UMAA_MO_LocalRegularPolygonState_LocalRegularPolygonTransitTypeType);

NDDSUSERDllExport
RTIBool UMAA_MO_LocalRegularPolygonState_LocalRegularPolygonTransitTypeType_initialize(
    UMAA_MO_LocalRegularPolygonState_LocalRegularPolygonTransitTypeType* self);

NDDSUSERDllExport
RTIBool UMAA_MO_LocalRegularPolygonState_LocalRegularPolygonTransitTypeType_initialize_ex(
    UMAA_MO_LocalRegularPolygonState_LocalRegularPolygonTransitTypeType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_MO_LocalRegularPolygonState_LocalRegularPolygonTransitTypeType_initialize_w_params(
    UMAA_MO_LocalRegularPolygonState_LocalRegularPolygonTransitTypeType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_MO_LocalRegularPolygonState_LocalRegularPolygonTransitTypeType_finalize_w_return(
    UMAA_MO_LocalRegularPolygonState_LocalRegularPolygonTransitTypeType* self);

NDDSUSERDllExport
void UMAA_MO_LocalRegularPolygonState_LocalRegularPolygonTransitTypeType_finalize(
    UMAA_MO_LocalRegularPolygonState_LocalRegularPolygonTransitTypeType* self);

NDDSUSERDllExport
void UMAA_MO_LocalRegularPolygonState_LocalRegularPolygonTransitTypeType_finalize_ex(
    UMAA_MO_LocalRegularPolygonState_LocalRegularPolygonTransitTypeType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_MO_LocalRegularPolygonState_LocalRegularPolygonTransitTypeType_finalize_w_params(
    UMAA_MO_LocalRegularPolygonState_LocalRegularPolygonTransitTypeType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_MO_LocalRegularPolygonState_LocalRegularPolygonTransitTypeType_finalize_optional_members(
    UMAA_MO_LocalRegularPolygonState_LocalRegularPolygonTransitTypeType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_MO_LocalRegularPolygonState_LocalRegularPolygonTransitTypeType_copy(
    UMAA_MO_LocalRegularPolygonState_LocalRegularPolygonTransitTypeType* dst,
    const UMAA_MO_LocalRegularPolygonState_LocalRegularPolygonTransitTypeType* src);

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
        struct type_code< UMAA_MO_LocalRegularPolygonState_LocalRegularPolygonTransitTypeType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* LocalRegularPolygonTransitTypeType */

