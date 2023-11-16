

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from StillImageErrorType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef StillImageErrorType_1650804393_h
#define StillImageErrorType_1650804393_h

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

    extern const char *UMAA_SEM_SensorManagement_StillImageErrorTypeTYPENAME;

}

struct UMAA_SEM_SensorManagement_StillImageErrorTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_SEM_SensorManagement_StillImageErrorTypeTypeSupport;
class UMAA_SEM_SensorManagement_StillImageErrorTypeDataWriter;
class UMAA_SEM_SensorManagement_StillImageErrorTypeDataReader;
#endif
class UMAA_SEM_SensorManagement_StillImageErrorType 
{
  public:
    typedef struct UMAA_SEM_SensorManagement_StillImageErrorTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_SEM_SensorManagement_StillImageErrorTypeTypeSupport TypeSupport;
    typedef UMAA_SEM_SensorManagement_StillImageErrorTypeDataWriter DataWriter;
    typedef UMAA_SEM_SensorManagement_StillImageErrorTypeDataReader DataReader;
    #endif

    UMAA_Common_MaritimeEnumeration_StillImageErrorCodeEnumType_StillImageErrorCodeEnumType   errorCode ;
    DDS_Char *   errorMessage ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_SEM_SensorManagement_StillImageErrorType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_SEM_SensorManagement_StillImageErrorType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_SEM_SensorManagement_StillImageErrorType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_SEM_SensorManagement_StillImageErrorType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_SEM_SensorManagement_StillImageErrorTypeSeq, UMAA_SEM_SensorManagement_StillImageErrorType);

NDDSUSERDllExport
RTIBool UMAA_SEM_SensorManagement_StillImageErrorType_initialize(
    UMAA_SEM_SensorManagement_StillImageErrorType* self);

NDDSUSERDllExport
RTIBool UMAA_SEM_SensorManagement_StillImageErrorType_initialize_ex(
    UMAA_SEM_SensorManagement_StillImageErrorType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_SEM_SensorManagement_StillImageErrorType_initialize_w_params(
    UMAA_SEM_SensorManagement_StillImageErrorType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_SEM_SensorManagement_StillImageErrorType_finalize_w_return(
    UMAA_SEM_SensorManagement_StillImageErrorType* self);

NDDSUSERDllExport
void UMAA_SEM_SensorManagement_StillImageErrorType_finalize(
    UMAA_SEM_SensorManagement_StillImageErrorType* self);

NDDSUSERDllExport
void UMAA_SEM_SensorManagement_StillImageErrorType_finalize_ex(
    UMAA_SEM_SensorManagement_StillImageErrorType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_SEM_SensorManagement_StillImageErrorType_finalize_w_params(
    UMAA_SEM_SensorManagement_StillImageErrorType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_SEM_SensorManagement_StillImageErrorType_finalize_optional_members(
    UMAA_SEM_SensorManagement_StillImageErrorType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_SEM_SensorManagement_StillImageErrorType_copy(
    UMAA_SEM_SensorManagement_StillImageErrorType* dst,
    const UMAA_SEM_SensorManagement_StillImageErrorType* src);

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
        struct type_code< UMAA_SEM_SensorManagement_StillImageErrorType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* StillImageErrorType */

