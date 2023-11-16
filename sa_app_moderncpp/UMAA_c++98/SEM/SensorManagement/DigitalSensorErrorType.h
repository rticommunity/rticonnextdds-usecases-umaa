

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from DigitalSensorErrorType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef DigitalSensorErrorType_1852074880_h
#define DigitalSensorErrorType_1852074880_h

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

    extern const char *UMAA_SEM_SensorManagement_DigitalSensorErrorTypeTYPENAME;

}

struct UMAA_SEM_SensorManagement_DigitalSensorErrorTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_SEM_SensorManagement_DigitalSensorErrorTypeTypeSupport;
class UMAA_SEM_SensorManagement_DigitalSensorErrorTypeDataWriter;
class UMAA_SEM_SensorManagement_DigitalSensorErrorTypeDataReader;
#endif
class UMAA_SEM_SensorManagement_DigitalSensorErrorType 
{
  public:
    typedef struct UMAA_SEM_SensorManagement_DigitalSensorErrorTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_SEM_SensorManagement_DigitalSensorErrorTypeTypeSupport TypeSupport;
    typedef UMAA_SEM_SensorManagement_DigitalSensorErrorTypeDataWriter DataWriter;
    typedef UMAA_SEM_SensorManagement_DigitalSensorErrorTypeDataReader DataReader;
    #endif

    UMAA_Common_MaritimeEnumeration_DigitalSensorErrorCodeEnumType_DigitalSensorErrorCodeEnumType   errorCode ;
    DDS_Char *   errorMessage ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_SEM_SensorManagement_DigitalSensorErrorType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_SEM_SensorManagement_DigitalSensorErrorType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_SEM_SensorManagement_DigitalSensorErrorType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_SEM_SensorManagement_DigitalSensorErrorType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_SEM_SensorManagement_DigitalSensorErrorTypeSeq, UMAA_SEM_SensorManagement_DigitalSensorErrorType);

NDDSUSERDllExport
RTIBool UMAA_SEM_SensorManagement_DigitalSensorErrorType_initialize(
    UMAA_SEM_SensorManagement_DigitalSensorErrorType* self);

NDDSUSERDllExport
RTIBool UMAA_SEM_SensorManagement_DigitalSensorErrorType_initialize_ex(
    UMAA_SEM_SensorManagement_DigitalSensorErrorType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_SEM_SensorManagement_DigitalSensorErrorType_initialize_w_params(
    UMAA_SEM_SensorManagement_DigitalSensorErrorType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_SEM_SensorManagement_DigitalSensorErrorType_finalize_w_return(
    UMAA_SEM_SensorManagement_DigitalSensorErrorType* self);

NDDSUSERDllExport
void UMAA_SEM_SensorManagement_DigitalSensorErrorType_finalize(
    UMAA_SEM_SensorManagement_DigitalSensorErrorType* self);

NDDSUSERDllExport
void UMAA_SEM_SensorManagement_DigitalSensorErrorType_finalize_ex(
    UMAA_SEM_SensorManagement_DigitalSensorErrorType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_SEM_SensorManagement_DigitalSensorErrorType_finalize_w_params(
    UMAA_SEM_SensorManagement_DigitalSensorErrorType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_SEM_SensorManagement_DigitalSensorErrorType_finalize_optional_members(
    UMAA_SEM_SensorManagement_DigitalSensorErrorType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_SEM_SensorManagement_DigitalSensorErrorType_copy(
    UMAA_SEM_SensorManagement_DigitalSensorErrorType* dst,
    const UMAA_SEM_SensorManagement_DigitalSensorErrorType* src);

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
        struct type_code< UMAA_SEM_SensorManagement_DigitalSensorErrorType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* DigitalSensorErrorType */

