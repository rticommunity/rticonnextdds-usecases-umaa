

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from LocalRacetrackTransitType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef LocalRacetrackTransitType_2113948084_h
#define LocalRacetrackTransitType_2113948084_h

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

    extern const char *UMAA_MO_LocalRacetrackState_LocalRacetrackTransitTypeTYPENAME;

}

struct UMAA_MO_LocalRacetrackState_LocalRacetrackTransitTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_MO_LocalRacetrackState_LocalRacetrackTransitTypeTypeSupport;
class UMAA_MO_LocalRacetrackState_LocalRacetrackTransitTypeDataWriter;
class UMAA_MO_LocalRacetrackState_LocalRacetrackTransitTypeDataReader;
#endif
class UMAA_MO_LocalRacetrackState_LocalRacetrackTransitType 
{
  public:
    typedef struct UMAA_MO_LocalRacetrackState_LocalRacetrackTransitTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_MO_LocalRacetrackState_LocalRacetrackTransitTypeTypeSupport TypeSupport;
    typedef UMAA_MO_LocalRacetrackState_LocalRacetrackTransitTypeDataWriter DataWriter;
    typedef UMAA_MO_LocalRacetrackState_LocalRacetrackTransitTypeDataReader DataReader;
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
NDDSUSERDllExport DDS_TypeCode * UMAA_MO_LocalRacetrackState_LocalRacetrackTransitType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_MO_LocalRacetrackState_LocalRacetrackTransitType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MO_LocalRacetrackState_LocalRacetrackTransitType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MO_LocalRacetrackState_LocalRacetrackTransitType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_MO_LocalRacetrackState_LocalRacetrackTransitTypeSeq, UMAA_MO_LocalRacetrackState_LocalRacetrackTransitType);

NDDSUSERDllExport
RTIBool UMAA_MO_LocalRacetrackState_LocalRacetrackTransitType_initialize(
    UMAA_MO_LocalRacetrackState_LocalRacetrackTransitType* self);

NDDSUSERDllExport
RTIBool UMAA_MO_LocalRacetrackState_LocalRacetrackTransitType_initialize_ex(
    UMAA_MO_LocalRacetrackState_LocalRacetrackTransitType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_MO_LocalRacetrackState_LocalRacetrackTransitType_initialize_w_params(
    UMAA_MO_LocalRacetrackState_LocalRacetrackTransitType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_MO_LocalRacetrackState_LocalRacetrackTransitType_finalize_w_return(
    UMAA_MO_LocalRacetrackState_LocalRacetrackTransitType* self);

NDDSUSERDllExport
void UMAA_MO_LocalRacetrackState_LocalRacetrackTransitType_finalize(
    UMAA_MO_LocalRacetrackState_LocalRacetrackTransitType* self);

NDDSUSERDllExport
void UMAA_MO_LocalRacetrackState_LocalRacetrackTransitType_finalize_ex(
    UMAA_MO_LocalRacetrackState_LocalRacetrackTransitType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_MO_LocalRacetrackState_LocalRacetrackTransitType_finalize_w_params(
    UMAA_MO_LocalRacetrackState_LocalRacetrackTransitType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_MO_LocalRacetrackState_LocalRacetrackTransitType_finalize_optional_members(
    UMAA_MO_LocalRacetrackState_LocalRacetrackTransitType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_MO_LocalRacetrackState_LocalRacetrackTransitType_copy(
    UMAA_MO_LocalRacetrackState_LocalRacetrackTransitType* dst,
    const UMAA_MO_LocalRacetrackState_LocalRacetrackTransitType* src);

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
        struct type_code< UMAA_MO_LocalRacetrackState_LocalRacetrackTransitType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* LocalRacetrackTransitType */

