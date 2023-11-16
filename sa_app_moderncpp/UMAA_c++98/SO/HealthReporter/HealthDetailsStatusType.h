

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from HealthDetailsStatusType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef HealthDetailsStatusType_1443444291_h
#define HealthDetailsStatusType_1443444291_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "UMAA/Common/MaritimeEnumeration/EnumerationSets.h"
#include "UMAA/Common/Measurement/Measurements.h"
#include "UMAA/Common/PrimitiveConstrained/ConstrainedTypes.h"
#include "UMAA/Common/Measurement/Measurements.h"

extern "C" {

    extern const char *UMAA_SO_HealthReporter_HealthDetailsStatusTypeTYPENAME;

}

struct UMAA_SO_HealthReporter_HealthDetailsStatusTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_SO_HealthReporter_HealthDetailsStatusTypeTypeSupport;
class UMAA_SO_HealthReporter_HealthDetailsStatusTypeDataWriter;
class UMAA_SO_HealthReporter_HealthDetailsStatusTypeDataReader;
#endif
class UMAA_SO_HealthReporter_HealthDetailsStatusType 
{
  public:
    typedef struct UMAA_SO_HealthReporter_HealthDetailsStatusTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_SO_HealthReporter_HealthDetailsStatusTypeTypeSupport TypeSupport;
    typedef UMAA_SO_HealthReporter_HealthDetailsStatusTypeDataWriter DataWriter;
    typedef UMAA_SO_HealthReporter_HealthDetailsStatusTypeDataReader DataReader;
    #endif

    UMAA_Common_MaritimeEnumeration_ErrorCodeEnumType_ErrorCodeEnumType   code ;
    DDS_Char *   descriptor ;
    UMAA_Common_Measurement_DateTime   logTime ;
    DDS_Char *   resourceURN ;
    UMAA_Common_MaritimeEnumeration_ErrorConditionEnumType_ErrorConditionEnumType   severity ;
    UMAA_Common_Measurement_NumericGUID   source ;
    UMAA_Common_Measurement_DateTime   timeStamp ;
    UMAA_Common_Measurement_NumericGUID   detailID ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_SO_HealthReporter_HealthDetailsStatusType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_SO_HealthReporter_HealthDetailsStatusType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_SO_HealthReporter_HealthDetailsStatusType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_SO_HealthReporter_HealthDetailsStatusType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_SO_HealthReporter_HealthDetailsStatusTypeSeq, UMAA_SO_HealthReporter_HealthDetailsStatusType);

NDDSUSERDllExport
RTIBool UMAA_SO_HealthReporter_HealthDetailsStatusType_initialize(
    UMAA_SO_HealthReporter_HealthDetailsStatusType* self);

NDDSUSERDllExport
RTIBool UMAA_SO_HealthReporter_HealthDetailsStatusType_initialize_ex(
    UMAA_SO_HealthReporter_HealthDetailsStatusType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_SO_HealthReporter_HealthDetailsStatusType_initialize_w_params(
    UMAA_SO_HealthReporter_HealthDetailsStatusType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_SO_HealthReporter_HealthDetailsStatusType_finalize_w_return(
    UMAA_SO_HealthReporter_HealthDetailsStatusType* self);

NDDSUSERDllExport
void UMAA_SO_HealthReporter_HealthDetailsStatusType_finalize(
    UMAA_SO_HealthReporter_HealthDetailsStatusType* self);

NDDSUSERDllExport
void UMAA_SO_HealthReporter_HealthDetailsStatusType_finalize_ex(
    UMAA_SO_HealthReporter_HealthDetailsStatusType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_SO_HealthReporter_HealthDetailsStatusType_finalize_w_params(
    UMAA_SO_HealthReporter_HealthDetailsStatusType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_SO_HealthReporter_HealthDetailsStatusType_finalize_optional_members(
    UMAA_SO_HealthReporter_HealthDetailsStatusType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_SO_HealthReporter_HealthDetailsStatusType_copy(
    UMAA_SO_HealthReporter_HealthDetailsStatusType* dst,
    const UMAA_SO_HealthReporter_HealthDetailsStatusType* src);

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
        struct type_code< UMAA_SO_HealthReporter_HealthDetailsStatusType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* HealthDetailsStatusType */

