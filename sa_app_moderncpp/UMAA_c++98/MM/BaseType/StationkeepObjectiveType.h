

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from StationkeepObjectiveType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef StationkeepObjectiveType_353585166_h
#define StationkeepObjectiveType_353585166_h

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
#include "UMAA/Common/Measurement/Measurements.h"

extern "C" {

    extern const char *UMAA_MM_BaseType_StationkeepObjectiveTypeTYPENAME;

}

struct UMAA_MM_BaseType_StationkeepObjectiveTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_MM_BaseType_StationkeepObjectiveTypeTypeSupport;
class UMAA_MM_BaseType_StationkeepObjectiveTypeDataWriter;
class UMAA_MM_BaseType_StationkeepObjectiveTypeDataReader;
#endif
class UMAA_MM_BaseType_StationkeepObjectiveType 
{
  public:
    typedef struct UMAA_MM_BaseType_StationkeepObjectiveTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_MM_BaseType_StationkeepObjectiveTypeTypeSupport TypeSupport;
    typedef UMAA_MM_BaseType_StationkeepObjectiveTypeDataWriter DataWriter;
    typedef UMAA_MM_BaseType_StationkeepObjectiveTypeDataReader DataReader;
    #endif

    UMAA_Common_MaritimeEnumeration_BearingAngleEnumType_BearingAngleEnumType   angleType ;
    DDS_Double   bearing ;
    DDS_Double   closingSpeed ;
    UMAA_Common_Measurement_NumericGUID   contactTrackID ;
    DDS_Double   distance ;
    DDS_Double   * duration ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_MM_BaseType_StationkeepObjectiveType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_MM_BaseType_StationkeepObjectiveType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MM_BaseType_StationkeepObjectiveType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MM_BaseType_StationkeepObjectiveType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_MM_BaseType_StationkeepObjectiveTypeSeq, UMAA_MM_BaseType_StationkeepObjectiveType);

NDDSUSERDllExport
RTIBool UMAA_MM_BaseType_StationkeepObjectiveType_initialize(
    UMAA_MM_BaseType_StationkeepObjectiveType* self);

NDDSUSERDllExport
RTIBool UMAA_MM_BaseType_StationkeepObjectiveType_initialize_ex(
    UMAA_MM_BaseType_StationkeepObjectiveType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_MM_BaseType_StationkeepObjectiveType_initialize_w_params(
    UMAA_MM_BaseType_StationkeepObjectiveType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_MM_BaseType_StationkeepObjectiveType_finalize_w_return(
    UMAA_MM_BaseType_StationkeepObjectiveType* self);

NDDSUSERDllExport
void UMAA_MM_BaseType_StationkeepObjectiveType_finalize(
    UMAA_MM_BaseType_StationkeepObjectiveType* self);

NDDSUSERDllExport
void UMAA_MM_BaseType_StationkeepObjectiveType_finalize_ex(
    UMAA_MM_BaseType_StationkeepObjectiveType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_MM_BaseType_StationkeepObjectiveType_finalize_w_params(
    UMAA_MM_BaseType_StationkeepObjectiveType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_MM_BaseType_StationkeepObjectiveType_finalize_optional_members(
    UMAA_MM_BaseType_StationkeepObjectiveType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_MM_BaseType_StationkeepObjectiveType_copy(
    UMAA_MM_BaseType_StationkeepObjectiveType* dst,
    const UMAA_MM_BaseType_StationkeepObjectiveType* src);

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
        struct type_code< UMAA_MM_BaseType_StationkeepObjectiveType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* StationkeepObjectiveType */

