

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from AnalogSensorErrorType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef AnalogSensorErrorType_187040144_h
#define AnalogSensorErrorType_187040144_h

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

    extern const char *UMAA_SEM_SensorManagement_AnalogSensorErrorTypeTYPENAME;

}

struct UMAA_SEM_SensorManagement_AnalogSensorErrorTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_SEM_SensorManagement_AnalogSensorErrorTypeTypeSupport;
class UMAA_SEM_SensorManagement_AnalogSensorErrorTypeDataWriter;
class UMAA_SEM_SensorManagement_AnalogSensorErrorTypeDataReader;
#endif
class UMAA_SEM_SensorManagement_AnalogSensorErrorType 
{
  public:
    typedef struct UMAA_SEM_SensorManagement_AnalogSensorErrorTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_SEM_SensorManagement_AnalogSensorErrorTypeTypeSupport TypeSupport;
    typedef UMAA_SEM_SensorManagement_AnalogSensorErrorTypeDataWriter DataWriter;
    typedef UMAA_SEM_SensorManagement_AnalogSensorErrorTypeDataReader DataReader;
    #endif

    UMAA_Common_MaritimeEnumeration_AnalogSensorErrorCodeEnumType_AnalogSensorErrorCodeEnumType   errorCode ;
    DDS_Char *   errorMessage ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_SEM_SensorManagement_AnalogSensorErrorType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_SEM_SensorManagement_AnalogSensorErrorType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_SEM_SensorManagement_AnalogSensorErrorType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_SEM_SensorManagement_AnalogSensorErrorType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_SEM_SensorManagement_AnalogSensorErrorTypeSeq, UMAA_SEM_SensorManagement_AnalogSensorErrorType);

NDDSUSERDllExport
RTIBool UMAA_SEM_SensorManagement_AnalogSensorErrorType_initialize(
    UMAA_SEM_SensorManagement_AnalogSensorErrorType* self);

NDDSUSERDllExport
RTIBool UMAA_SEM_SensorManagement_AnalogSensorErrorType_initialize_ex(
    UMAA_SEM_SensorManagement_AnalogSensorErrorType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_SEM_SensorManagement_AnalogSensorErrorType_initialize_w_params(
    UMAA_SEM_SensorManagement_AnalogSensorErrorType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_SEM_SensorManagement_AnalogSensorErrorType_finalize_w_return(
    UMAA_SEM_SensorManagement_AnalogSensorErrorType* self);

NDDSUSERDllExport
void UMAA_SEM_SensorManagement_AnalogSensorErrorType_finalize(
    UMAA_SEM_SensorManagement_AnalogSensorErrorType* self);

NDDSUSERDllExport
void UMAA_SEM_SensorManagement_AnalogSensorErrorType_finalize_ex(
    UMAA_SEM_SensorManagement_AnalogSensorErrorType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_SEM_SensorManagement_AnalogSensorErrorType_finalize_w_params(
    UMAA_SEM_SensorManagement_AnalogSensorErrorType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_SEM_SensorManagement_AnalogSensorErrorType_finalize_optional_members(
    UMAA_SEM_SensorManagement_AnalogSensorErrorType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_SEM_SensorManagement_AnalogSensorErrorType_copy(
    UMAA_SEM_SensorManagement_AnalogSensorErrorType* dst,
    const UMAA_SEM_SensorManagement_AnalogSensorErrorType* src);

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
        struct type_code< UMAA_SEM_SensorManagement_AnalogSensorErrorType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* AnalogSensorErrorType */

