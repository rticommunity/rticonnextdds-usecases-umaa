

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GuardedTeleopReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef GuardedTeleopReportType_1033789746_h
#define GuardedTeleopReportType_1033789746_h

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

static const DDS_Char * const UMAA_MO_GuardedTeleopStatus_GuardedTeleopReport_TOPIC= "UMAA::MO::GuardedTeleopStatus::GuardedTeleopReport";

extern "C" {

    extern const char *UMAA_MO_GuardedTeleopStatus_GuardedTeleopReportTypeTYPENAME;

}

struct UMAA_MO_GuardedTeleopStatus_GuardedTeleopReportTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_MO_GuardedTeleopStatus_GuardedTeleopReportTypeTypeSupport;
class UMAA_MO_GuardedTeleopStatus_GuardedTeleopReportTypeDataWriter;
class UMAA_MO_GuardedTeleopStatus_GuardedTeleopReportTypeDataReader;
#endif
class UMAA_MO_GuardedTeleopStatus_GuardedTeleopReportType 
{
  public:
    typedef struct UMAA_MO_GuardedTeleopStatus_GuardedTeleopReportTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_MO_GuardedTeleopStatus_GuardedTeleopReportTypeTypeSupport TypeSupport;
    typedef UMAA_MO_GuardedTeleopStatus_GuardedTeleopReportTypeDataWriter DataWriter;
    typedef UMAA_MO_GuardedTeleopStatus_GuardedTeleopReportTypeDataReader DataReader;
    #endif

    UMAA_Common_MaritimeEnumeration_GuardedTeleoperationStatusEnumType_GuardedTeleoperationStatusEnumType   status ;
    UMAA_Common_Measurement_NumericGUID   source ;
    UMAA_Common_Measurement_DateTime   timeStamp ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_MO_GuardedTeleopStatus_GuardedTeleopReportType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_MO_GuardedTeleopStatus_GuardedTeleopReportType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MO_GuardedTeleopStatus_GuardedTeleopReportType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MO_GuardedTeleopStatus_GuardedTeleopReportType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_MO_GuardedTeleopStatus_GuardedTeleopReportTypeSeq, UMAA_MO_GuardedTeleopStatus_GuardedTeleopReportType);

NDDSUSERDllExport
RTIBool UMAA_MO_GuardedTeleopStatus_GuardedTeleopReportType_initialize(
    UMAA_MO_GuardedTeleopStatus_GuardedTeleopReportType* self);

NDDSUSERDllExport
RTIBool UMAA_MO_GuardedTeleopStatus_GuardedTeleopReportType_initialize_ex(
    UMAA_MO_GuardedTeleopStatus_GuardedTeleopReportType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_MO_GuardedTeleopStatus_GuardedTeleopReportType_initialize_w_params(
    UMAA_MO_GuardedTeleopStatus_GuardedTeleopReportType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_MO_GuardedTeleopStatus_GuardedTeleopReportType_finalize_w_return(
    UMAA_MO_GuardedTeleopStatus_GuardedTeleopReportType* self);

NDDSUSERDllExport
void UMAA_MO_GuardedTeleopStatus_GuardedTeleopReportType_finalize(
    UMAA_MO_GuardedTeleopStatus_GuardedTeleopReportType* self);

NDDSUSERDllExport
void UMAA_MO_GuardedTeleopStatus_GuardedTeleopReportType_finalize_ex(
    UMAA_MO_GuardedTeleopStatus_GuardedTeleopReportType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_MO_GuardedTeleopStatus_GuardedTeleopReportType_finalize_w_params(
    UMAA_MO_GuardedTeleopStatus_GuardedTeleopReportType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_MO_GuardedTeleopStatus_GuardedTeleopReportType_finalize_optional_members(
    UMAA_MO_GuardedTeleopStatus_GuardedTeleopReportType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_MO_GuardedTeleopStatus_GuardedTeleopReportType_copy(
    UMAA_MO_GuardedTeleopStatus_GuardedTeleopReportType* dst,
    const UMAA_MO_GuardedTeleopStatus_GuardedTeleopReportType* src);

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
        struct type_code< UMAA_MO_GuardedTeleopStatus_GuardedTeleopReportType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* GuardedTeleopReportType */

