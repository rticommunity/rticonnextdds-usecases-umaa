

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from TimeWindowType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef TimeWindowType_719347964_h
#define TimeWindowType_719347964_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "UMAA/Common/Measurement/Measurements.h"

extern "C" {

    extern const char *UMAA_Common_TimeWindow_TimeWindowTypeTYPENAME;

}

struct UMAA_Common_TimeWindow_TimeWindowTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_Common_TimeWindow_TimeWindowTypeTypeSupport;
class UMAA_Common_TimeWindow_TimeWindowTypeDataWriter;
class UMAA_Common_TimeWindow_TimeWindowTypeDataReader;
#endif
class UMAA_Common_TimeWindow_TimeWindowType 
{
  public:
    typedef struct UMAA_Common_TimeWindow_TimeWindowTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_Common_TimeWindow_TimeWindowTypeTypeSupport TypeSupport;
    typedef UMAA_Common_TimeWindow_TimeWindowTypeDataWriter DataWriter;
    typedef UMAA_Common_TimeWindow_TimeWindowTypeDataReader DataReader;
    #endif

    UMAA_Common_Measurement_DateTime   end ;
    UMAA_Common_Measurement_DateTime   start ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_Common_TimeWindow_TimeWindowType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_Common_TimeWindow_TimeWindowType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_TimeWindow_TimeWindowType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_TimeWindow_TimeWindowType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_Common_TimeWindow_TimeWindowTypeSeq, UMAA_Common_TimeWindow_TimeWindowType);

NDDSUSERDllExport
RTIBool UMAA_Common_TimeWindow_TimeWindowType_initialize(
    UMAA_Common_TimeWindow_TimeWindowType* self);

NDDSUSERDllExport
RTIBool UMAA_Common_TimeWindow_TimeWindowType_initialize_ex(
    UMAA_Common_TimeWindow_TimeWindowType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_Common_TimeWindow_TimeWindowType_initialize_w_params(
    UMAA_Common_TimeWindow_TimeWindowType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_Common_TimeWindow_TimeWindowType_finalize_w_return(
    UMAA_Common_TimeWindow_TimeWindowType* self);

NDDSUSERDllExport
void UMAA_Common_TimeWindow_TimeWindowType_finalize(
    UMAA_Common_TimeWindow_TimeWindowType* self);

NDDSUSERDllExport
void UMAA_Common_TimeWindow_TimeWindowType_finalize_ex(
    UMAA_Common_TimeWindow_TimeWindowType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_Common_TimeWindow_TimeWindowType_finalize_w_params(
    UMAA_Common_TimeWindow_TimeWindowType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_Common_TimeWindow_TimeWindowType_finalize_optional_members(
    UMAA_Common_TimeWindow_TimeWindowType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_Common_TimeWindow_TimeWindowType_copy(
    UMAA_Common_TimeWindow_TimeWindowType* dst,
    const UMAA_Common_TimeWindow_TimeWindowType* src);

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
        struct type_code< UMAA_Common_TimeWindow_TimeWindowType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* TimeWindowType */

