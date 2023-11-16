

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from LocalFigure8PatternType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef LocalFigure8PatternType_487366425_h
#define LocalFigure8PatternType_487366425_h

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

    extern const char *UMAA_MO_LocalFigure8State_LocalFigure8PatternTypeTYPENAME;

}

struct UMAA_MO_LocalFigure8State_LocalFigure8PatternTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_MO_LocalFigure8State_LocalFigure8PatternTypeTypeSupport;
class UMAA_MO_LocalFigure8State_LocalFigure8PatternTypeDataWriter;
class UMAA_MO_LocalFigure8State_LocalFigure8PatternTypeDataReader;
#endif
class UMAA_MO_LocalFigure8State_LocalFigure8PatternType 
{
  public:
    typedef struct UMAA_MO_LocalFigure8State_LocalFigure8PatternTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_MO_LocalFigure8State_LocalFigure8PatternTypeTypeSupport TypeSupport;
    typedef UMAA_MO_LocalFigure8State_LocalFigure8PatternTypeDataWriter DataWriter;
    typedef UMAA_MO_LocalFigure8State_LocalFigure8PatternTypeDataReader DataReader;
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
NDDSUSERDllExport DDS_TypeCode * UMAA_MO_LocalFigure8State_LocalFigure8PatternType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_MO_LocalFigure8State_LocalFigure8PatternType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MO_LocalFigure8State_LocalFigure8PatternType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MO_LocalFigure8State_LocalFigure8PatternType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_MO_LocalFigure8State_LocalFigure8PatternTypeSeq, UMAA_MO_LocalFigure8State_LocalFigure8PatternType);

NDDSUSERDllExport
RTIBool UMAA_MO_LocalFigure8State_LocalFigure8PatternType_initialize(
    UMAA_MO_LocalFigure8State_LocalFigure8PatternType* self);

NDDSUSERDllExport
RTIBool UMAA_MO_LocalFigure8State_LocalFigure8PatternType_initialize_ex(
    UMAA_MO_LocalFigure8State_LocalFigure8PatternType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_MO_LocalFigure8State_LocalFigure8PatternType_initialize_w_params(
    UMAA_MO_LocalFigure8State_LocalFigure8PatternType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_MO_LocalFigure8State_LocalFigure8PatternType_finalize_w_return(
    UMAA_MO_LocalFigure8State_LocalFigure8PatternType* self);

NDDSUSERDllExport
void UMAA_MO_LocalFigure8State_LocalFigure8PatternType_finalize(
    UMAA_MO_LocalFigure8State_LocalFigure8PatternType* self);

NDDSUSERDllExport
void UMAA_MO_LocalFigure8State_LocalFigure8PatternType_finalize_ex(
    UMAA_MO_LocalFigure8State_LocalFigure8PatternType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_MO_LocalFigure8State_LocalFigure8PatternType_finalize_w_params(
    UMAA_MO_LocalFigure8State_LocalFigure8PatternType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_MO_LocalFigure8State_LocalFigure8PatternType_finalize_optional_members(
    UMAA_MO_LocalFigure8State_LocalFigure8PatternType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_MO_LocalFigure8State_LocalFigure8PatternType_copy(
    UMAA_MO_LocalFigure8State_LocalFigure8PatternType* dst,
    const UMAA_MO_LocalFigure8State_LocalFigure8PatternType* src);

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
        struct type_code< UMAA_MO_LocalFigure8State_LocalFigure8PatternType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* LocalFigure8PatternType */

