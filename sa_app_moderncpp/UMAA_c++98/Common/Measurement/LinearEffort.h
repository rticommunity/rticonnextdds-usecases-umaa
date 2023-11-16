

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from LinearEffort.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef LinearEffort_957272876_h
#define LinearEffort_957272876_h

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

    extern const char *UMAA_Common_Measurement_LinearEffortTYPENAME;

}

struct UMAA_Common_Measurement_LinearEffortSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_Common_Measurement_LinearEffortTypeSupport;
class UMAA_Common_Measurement_LinearEffortDataWriter;
class UMAA_Common_Measurement_LinearEffortDataReader;
#endif
class UMAA_Common_Measurement_LinearEffort 
{
  public:
    typedef struct UMAA_Common_Measurement_LinearEffortSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_Common_Measurement_LinearEffortTypeSupport TypeSupport;
    typedef UMAA_Common_Measurement_LinearEffortDataWriter DataWriter;
    typedef UMAA_Common_Measurement_LinearEffortDataReader DataReader;
    #endif

    DDS_Double   xAxis ;
    DDS_Double   yAxis ;
    DDS_Double   zAxis ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_Common_Measurement_LinearEffort_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_Common_Measurement_LinearEffort_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_LinearEffort_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_LinearEffort_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_Common_Measurement_LinearEffortSeq, UMAA_Common_Measurement_LinearEffort);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_LinearEffort_initialize(
    UMAA_Common_Measurement_LinearEffort* self);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_LinearEffort_initialize_ex(
    UMAA_Common_Measurement_LinearEffort* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_LinearEffort_initialize_w_params(
    UMAA_Common_Measurement_LinearEffort* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_LinearEffort_finalize_w_return(
    UMAA_Common_Measurement_LinearEffort* self);

NDDSUSERDllExport
void UMAA_Common_Measurement_LinearEffort_finalize(
    UMAA_Common_Measurement_LinearEffort* self);

NDDSUSERDllExport
void UMAA_Common_Measurement_LinearEffort_finalize_ex(
    UMAA_Common_Measurement_LinearEffort* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_Common_Measurement_LinearEffort_finalize_w_params(
    UMAA_Common_Measurement_LinearEffort* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_Common_Measurement_LinearEffort_finalize_optional_members(
    UMAA_Common_Measurement_LinearEffort* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_LinearEffort_copy(
    UMAA_Common_Measurement_LinearEffort* dst,
    const UMAA_Common_Measurement_LinearEffort* src);

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
        struct type_code< UMAA_Common_Measurement_LinearEffort> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* LinearEffort */

