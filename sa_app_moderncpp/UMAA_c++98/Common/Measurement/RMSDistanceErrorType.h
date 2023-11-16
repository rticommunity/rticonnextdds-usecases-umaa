

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from RMSDistanceErrorType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef RMSDistanceErrorType_1579109256_h
#define RMSDistanceErrorType_1579109256_h

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

    extern const char *UMAA_Common_Measurement_RMSDistanceErrorTypeTYPENAME;

}

struct UMAA_Common_Measurement_RMSDistanceErrorTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_Common_Measurement_RMSDistanceErrorTypeTypeSupport;
class UMAA_Common_Measurement_RMSDistanceErrorTypeDataWriter;
class UMAA_Common_Measurement_RMSDistanceErrorTypeDataReader;
#endif
class UMAA_Common_Measurement_RMSDistanceErrorType 
{
  public:
    typedef struct UMAA_Common_Measurement_RMSDistanceErrorTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_Common_Measurement_RMSDistanceErrorTypeTypeSupport TypeSupport;
    typedef UMAA_Common_Measurement_RMSDistanceErrorTypeDataWriter DataWriter;
    typedef UMAA_Common_Measurement_RMSDistanceErrorTypeDataReader DataReader;
    #endif

    DDS_Double   distanceError ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_Common_Measurement_RMSDistanceErrorType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_Common_Measurement_RMSDistanceErrorType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_RMSDistanceErrorType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_RMSDistanceErrorType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_Common_Measurement_RMSDistanceErrorTypeSeq, UMAA_Common_Measurement_RMSDistanceErrorType);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_RMSDistanceErrorType_initialize(
    UMAA_Common_Measurement_RMSDistanceErrorType* self);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_RMSDistanceErrorType_initialize_ex(
    UMAA_Common_Measurement_RMSDistanceErrorType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_RMSDistanceErrorType_initialize_w_params(
    UMAA_Common_Measurement_RMSDistanceErrorType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_RMSDistanceErrorType_finalize_w_return(
    UMAA_Common_Measurement_RMSDistanceErrorType* self);

NDDSUSERDllExport
void UMAA_Common_Measurement_RMSDistanceErrorType_finalize(
    UMAA_Common_Measurement_RMSDistanceErrorType* self);

NDDSUSERDllExport
void UMAA_Common_Measurement_RMSDistanceErrorType_finalize_ex(
    UMAA_Common_Measurement_RMSDistanceErrorType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_Common_Measurement_RMSDistanceErrorType_finalize_w_params(
    UMAA_Common_Measurement_RMSDistanceErrorType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_Common_Measurement_RMSDistanceErrorType_finalize_optional_members(
    UMAA_Common_Measurement_RMSDistanceErrorType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_RMSDistanceErrorType_copy(
    UMAA_Common_Measurement_RMSDistanceErrorType* dst,
    const UMAA_Common_Measurement_RMSDistanceErrorType* src);

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
        struct type_code< UMAA_Common_Measurement_RMSDistanceErrorType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* RMSDistanceErrorType */

