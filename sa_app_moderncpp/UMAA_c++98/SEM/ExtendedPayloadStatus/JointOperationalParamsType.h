

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from JointOperationalParamsType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef JointOperationalParamsType_851585563_h
#define JointOperationalParamsType_851585563_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "UMAA/Common/Measurement/Measurements.h"
#include "UMAA/SEM/ExtendedPayloadStatus/OperationalParamsType.h"
#include "UMAA/Common/Measurement/Measurements.h"

extern "C" {

    extern const char *UMAA_SEM_ExtendedPayloadStatus_JointOperationalParamsTypeTYPENAME;

}

struct UMAA_SEM_ExtendedPayloadStatus_JointOperationalParamsTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_SEM_ExtendedPayloadStatus_JointOperationalParamsTypeTypeSupport;
class UMAA_SEM_ExtendedPayloadStatus_JointOperationalParamsTypeDataWriter;
class UMAA_SEM_ExtendedPayloadStatus_JointOperationalParamsTypeDataReader;
#endif
class UMAA_SEM_ExtendedPayloadStatus_JointOperationalParamsType 
{
  public:
    typedef struct UMAA_SEM_ExtendedPayloadStatus_JointOperationalParamsTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_SEM_ExtendedPayloadStatus_JointOperationalParamsTypeTypeSupport TypeSupport;
    typedef UMAA_SEM_ExtendedPayloadStatus_JointOperationalParamsTypeDataWriter DataWriter;
    typedef UMAA_SEM_ExtendedPayloadStatus_JointOperationalParamsTypeDataReader DataReader;
    #endif

    UMAA_SEM_ExtendedPayloadStatus_OperationalParamsType   params ;
    UMAA_Common_Measurement_NumericGUID   jointID ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_SEM_ExtendedPayloadStatus_JointOperationalParamsType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_SEM_ExtendedPayloadStatus_JointOperationalParamsType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_SEM_ExtendedPayloadStatus_JointOperationalParamsType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_SEM_ExtendedPayloadStatus_JointOperationalParamsType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_SEM_ExtendedPayloadStatus_JointOperationalParamsTypeSeq, UMAA_SEM_ExtendedPayloadStatus_JointOperationalParamsType);

NDDSUSERDllExport
RTIBool UMAA_SEM_ExtendedPayloadStatus_JointOperationalParamsType_initialize(
    UMAA_SEM_ExtendedPayloadStatus_JointOperationalParamsType* self);

NDDSUSERDllExport
RTIBool UMAA_SEM_ExtendedPayloadStatus_JointOperationalParamsType_initialize_ex(
    UMAA_SEM_ExtendedPayloadStatus_JointOperationalParamsType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_SEM_ExtendedPayloadStatus_JointOperationalParamsType_initialize_w_params(
    UMAA_SEM_ExtendedPayloadStatus_JointOperationalParamsType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_SEM_ExtendedPayloadStatus_JointOperationalParamsType_finalize_w_return(
    UMAA_SEM_ExtendedPayloadStatus_JointOperationalParamsType* self);

NDDSUSERDllExport
void UMAA_SEM_ExtendedPayloadStatus_JointOperationalParamsType_finalize(
    UMAA_SEM_ExtendedPayloadStatus_JointOperationalParamsType* self);

NDDSUSERDllExport
void UMAA_SEM_ExtendedPayloadStatus_JointOperationalParamsType_finalize_ex(
    UMAA_SEM_ExtendedPayloadStatus_JointOperationalParamsType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_SEM_ExtendedPayloadStatus_JointOperationalParamsType_finalize_w_params(
    UMAA_SEM_ExtendedPayloadStatus_JointOperationalParamsType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_SEM_ExtendedPayloadStatus_JointOperationalParamsType_finalize_optional_members(
    UMAA_SEM_ExtendedPayloadStatus_JointOperationalParamsType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_SEM_ExtendedPayloadStatus_JointOperationalParamsType_copy(
    UMAA_SEM_ExtendedPayloadStatus_JointOperationalParamsType* dst,
    const UMAA_SEM_ExtendedPayloadStatus_JointOperationalParamsType* src);

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
        struct type_code< UMAA_SEM_ExtendedPayloadStatus_JointOperationalParamsType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* JointOperationalParamsType */

