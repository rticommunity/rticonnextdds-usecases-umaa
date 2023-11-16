

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from RangeErrorType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef RangeErrorType_1986270889_h
#define RangeErrorType_1986270889_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "UMAA/Common/MaritimeEnumeration/EnumerationSets.h"
#include "UMAA/Common/PrimitiveConstrained/ConstrainedTypes.h"

extern "C" {

    extern const char *UMAA_SEM_SensorManagement_RangeErrorTypeTYPENAME;

}

struct UMAA_SEM_SensorManagement_RangeErrorTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_SEM_SensorManagement_RangeErrorTypeTypeSupport;
class UMAA_SEM_SensorManagement_RangeErrorTypeDataWriter;
class UMAA_SEM_SensorManagement_RangeErrorTypeDataReader;
#endif
class UMAA_SEM_SensorManagement_RangeErrorType 
{
  public:
    typedef struct UMAA_SEM_SensorManagement_RangeErrorTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_SEM_SensorManagement_RangeErrorTypeTypeSupport TypeSupport;
    typedef UMAA_SEM_SensorManagement_RangeErrorTypeDataWriter DataWriter;
    typedef UMAA_SEM_SensorManagement_RangeErrorTypeDataReader DataReader;
    #endif

    UMAA_Common_MaritimeEnumeration_RangeErrorCodeEnumType_RangeErrorCodeEnumType   errorCode ;
    DDS_Char *   errorMessage ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_SEM_SensorManagement_RangeErrorType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_SEM_SensorManagement_RangeErrorType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_SEM_SensorManagement_RangeErrorType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_SEM_SensorManagement_RangeErrorType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_SEM_SensorManagement_RangeErrorTypeSeq, UMAA_SEM_SensorManagement_RangeErrorType);

NDDSUSERDllExport
RTIBool UMAA_SEM_SensorManagement_RangeErrorType_initialize(
    UMAA_SEM_SensorManagement_RangeErrorType* self);

NDDSUSERDllExport
RTIBool UMAA_SEM_SensorManagement_RangeErrorType_initialize_ex(
    UMAA_SEM_SensorManagement_RangeErrorType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_SEM_SensorManagement_RangeErrorType_initialize_w_params(
    UMAA_SEM_SensorManagement_RangeErrorType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_SEM_SensorManagement_RangeErrorType_finalize_w_return(
    UMAA_SEM_SensorManagement_RangeErrorType* self);

NDDSUSERDllExport
void UMAA_SEM_SensorManagement_RangeErrorType_finalize(
    UMAA_SEM_SensorManagement_RangeErrorType* self);

NDDSUSERDllExport
void UMAA_SEM_SensorManagement_RangeErrorType_finalize_ex(
    UMAA_SEM_SensorManagement_RangeErrorType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_SEM_SensorManagement_RangeErrorType_finalize_w_params(
    UMAA_SEM_SensorManagement_RangeErrorType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_SEM_SensorManagement_RangeErrorType_finalize_optional_members(
    UMAA_SEM_SensorManagement_RangeErrorType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_SEM_SensorManagement_RangeErrorType_copy(
    UMAA_SEM_SensorManagement_RangeErrorType* dst,
    const UMAA_SEM_SensorManagement_RangeErrorType* src);

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
        struct type_code< UMAA_SEM_SensorManagement_RangeErrorType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* RangeErrorType */

