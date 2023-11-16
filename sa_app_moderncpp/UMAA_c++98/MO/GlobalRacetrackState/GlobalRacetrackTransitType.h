

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GlobalRacetrackTransitType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef GlobalRacetrackTransitType_1567699268_h
#define GlobalRacetrackTransitType_1567699268_h

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

    extern const char *UMAA_MO_GlobalRacetrackState_GlobalRacetrackTransitTypeTYPENAME;

}

struct UMAA_MO_GlobalRacetrackState_GlobalRacetrackTransitTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_MO_GlobalRacetrackState_GlobalRacetrackTransitTypeTypeSupport;
class UMAA_MO_GlobalRacetrackState_GlobalRacetrackTransitTypeDataWriter;
class UMAA_MO_GlobalRacetrackState_GlobalRacetrackTransitTypeDataReader;
#endif
class UMAA_MO_GlobalRacetrackState_GlobalRacetrackTransitType 
{
  public:
    typedef struct UMAA_MO_GlobalRacetrackState_GlobalRacetrackTransitTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_MO_GlobalRacetrackState_GlobalRacetrackTransitTypeTypeSupport TypeSupport;
    typedef UMAA_MO_GlobalRacetrackState_GlobalRacetrackTransitTypeDataWriter DataWriter;
    typedef UMAA_MO_GlobalRacetrackState_GlobalRacetrackTransitTypeDataReader DataReader;
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
NDDSUSERDllExport DDS_TypeCode * UMAA_MO_GlobalRacetrackState_GlobalRacetrackTransitType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_MO_GlobalRacetrackState_GlobalRacetrackTransitType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MO_GlobalRacetrackState_GlobalRacetrackTransitType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MO_GlobalRacetrackState_GlobalRacetrackTransitType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_MO_GlobalRacetrackState_GlobalRacetrackTransitTypeSeq, UMAA_MO_GlobalRacetrackState_GlobalRacetrackTransitType);

NDDSUSERDllExport
RTIBool UMAA_MO_GlobalRacetrackState_GlobalRacetrackTransitType_initialize(
    UMAA_MO_GlobalRacetrackState_GlobalRacetrackTransitType* self);

NDDSUSERDllExport
RTIBool UMAA_MO_GlobalRacetrackState_GlobalRacetrackTransitType_initialize_ex(
    UMAA_MO_GlobalRacetrackState_GlobalRacetrackTransitType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_MO_GlobalRacetrackState_GlobalRacetrackTransitType_initialize_w_params(
    UMAA_MO_GlobalRacetrackState_GlobalRacetrackTransitType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_MO_GlobalRacetrackState_GlobalRacetrackTransitType_finalize_w_return(
    UMAA_MO_GlobalRacetrackState_GlobalRacetrackTransitType* self);

NDDSUSERDllExport
void UMAA_MO_GlobalRacetrackState_GlobalRacetrackTransitType_finalize(
    UMAA_MO_GlobalRacetrackState_GlobalRacetrackTransitType* self);

NDDSUSERDllExport
void UMAA_MO_GlobalRacetrackState_GlobalRacetrackTransitType_finalize_ex(
    UMAA_MO_GlobalRacetrackState_GlobalRacetrackTransitType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_MO_GlobalRacetrackState_GlobalRacetrackTransitType_finalize_w_params(
    UMAA_MO_GlobalRacetrackState_GlobalRacetrackTransitType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_MO_GlobalRacetrackState_GlobalRacetrackTransitType_finalize_optional_members(
    UMAA_MO_GlobalRacetrackState_GlobalRacetrackTransitType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_MO_GlobalRacetrackState_GlobalRacetrackTransitType_copy(
    UMAA_MO_GlobalRacetrackState_GlobalRacetrackTransitType* dst,
    const UMAA_MO_GlobalRacetrackState_GlobalRacetrackTransitType* src);

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
        struct type_code< UMAA_MO_GlobalRacetrackState_GlobalRacetrackTransitType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* GlobalRacetrackTransitType */

