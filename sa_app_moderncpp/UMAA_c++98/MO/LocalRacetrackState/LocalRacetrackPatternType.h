

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from LocalRacetrackPatternType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef LocalRacetrackPatternType_181166503_h
#define LocalRacetrackPatternType_181166503_h

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

    extern const char *UMAA_MO_LocalRacetrackState_LocalRacetrackPatternTypeTYPENAME;

}

struct UMAA_MO_LocalRacetrackState_LocalRacetrackPatternTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_MO_LocalRacetrackState_LocalRacetrackPatternTypeTypeSupport;
class UMAA_MO_LocalRacetrackState_LocalRacetrackPatternTypeDataWriter;
class UMAA_MO_LocalRacetrackState_LocalRacetrackPatternTypeDataReader;
#endif
class UMAA_MO_LocalRacetrackState_LocalRacetrackPatternType 
{
  public:
    typedef struct UMAA_MO_LocalRacetrackState_LocalRacetrackPatternTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_MO_LocalRacetrackState_LocalRacetrackPatternTypeTypeSupport TypeSupport;
    typedef UMAA_MO_LocalRacetrackState_LocalRacetrackPatternTypeDataWriter DataWriter;
    typedef UMAA_MO_LocalRacetrackState_LocalRacetrackPatternTypeDataReader DataReader;
    #endif

    DDS_Boolean   elevationAchieved ;
    DDS_Boolean   positionAchieved ;
    DDS_Boolean   speedAchieved ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_MO_LocalRacetrackState_LocalRacetrackPatternType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_MO_LocalRacetrackState_LocalRacetrackPatternType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MO_LocalRacetrackState_LocalRacetrackPatternType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MO_LocalRacetrackState_LocalRacetrackPatternType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_MO_LocalRacetrackState_LocalRacetrackPatternTypeSeq, UMAA_MO_LocalRacetrackState_LocalRacetrackPatternType);

NDDSUSERDllExport
RTIBool UMAA_MO_LocalRacetrackState_LocalRacetrackPatternType_initialize(
    UMAA_MO_LocalRacetrackState_LocalRacetrackPatternType* self);

NDDSUSERDllExport
RTIBool UMAA_MO_LocalRacetrackState_LocalRacetrackPatternType_initialize_ex(
    UMAA_MO_LocalRacetrackState_LocalRacetrackPatternType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_MO_LocalRacetrackState_LocalRacetrackPatternType_initialize_w_params(
    UMAA_MO_LocalRacetrackState_LocalRacetrackPatternType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_MO_LocalRacetrackState_LocalRacetrackPatternType_finalize_w_return(
    UMAA_MO_LocalRacetrackState_LocalRacetrackPatternType* self);

NDDSUSERDllExport
void UMAA_MO_LocalRacetrackState_LocalRacetrackPatternType_finalize(
    UMAA_MO_LocalRacetrackState_LocalRacetrackPatternType* self);

NDDSUSERDllExport
void UMAA_MO_LocalRacetrackState_LocalRacetrackPatternType_finalize_ex(
    UMAA_MO_LocalRacetrackState_LocalRacetrackPatternType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_MO_LocalRacetrackState_LocalRacetrackPatternType_finalize_w_params(
    UMAA_MO_LocalRacetrackState_LocalRacetrackPatternType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_MO_LocalRacetrackState_LocalRacetrackPatternType_finalize_optional_members(
    UMAA_MO_LocalRacetrackState_LocalRacetrackPatternType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_MO_LocalRacetrackState_LocalRacetrackPatternType_copy(
    UMAA_MO_LocalRacetrackState_LocalRacetrackPatternType* dst,
    const UMAA_MO_LocalRacetrackState_LocalRacetrackPatternType* src);

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
        struct type_code< UMAA_MO_LocalRacetrackState_LocalRacetrackPatternType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* LocalRacetrackPatternType */

