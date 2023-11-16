

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ResetReminderCommandStatusType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef ResetReminderCommandStatusType_702162902_h
#define ResetReminderCommandStatusType_702162902_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "UMAA/Common/Measurement/Measurements.h"
#include "UMAA/Common/MaritimeEnumeration/EnumerationSets.h"

static const DDS_Char * const UMAA_SO_HealthReporter_ResetReminderCommandStatus_TOPIC= "UMAA::SO::HealthReporter::ResetReminderCommandStatus";

extern "C" {

    extern const char *UMAA_SO_HealthReporter_ResetReminderCommandStatusTypeTYPENAME;

}

struct UMAA_SO_HealthReporter_ResetReminderCommandStatusTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_SO_HealthReporter_ResetReminderCommandStatusTypeTypeSupport;
class UMAA_SO_HealthReporter_ResetReminderCommandStatusTypeDataWriter;
class UMAA_SO_HealthReporter_ResetReminderCommandStatusTypeDataReader;
#endif
class UMAA_SO_HealthReporter_ResetReminderCommandStatusType 
{
  public:
    typedef struct UMAA_SO_HealthReporter_ResetReminderCommandStatusTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_SO_HealthReporter_ResetReminderCommandStatusTypeTypeSupport TypeSupport;
    typedef UMAA_SO_HealthReporter_ResetReminderCommandStatusTypeDataWriter DataWriter;
    typedef UMAA_SO_HealthReporter_ResetReminderCommandStatusTypeDataReader DataReader;
    #endif

    UMAA_Common_Measurement_NumericGUID   source ;
    UMAA_Common_MaritimeEnumeration_CommandStatusEnumType_CommandStatusEnumType   commandStatus ;
    UMAA_Common_MaritimeEnumeration_CommandStatusReasonEnumType_CommandStatusReasonEnumType   commandStatusReason ;
    DDS_Char *   logMessage ;
    UMAA_Common_Measurement_NumericGUID   sessionID ;
    UMAA_Common_Measurement_DateTime   timeStamp ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_SO_HealthReporter_ResetReminderCommandStatusType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_SO_HealthReporter_ResetReminderCommandStatusType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_SO_HealthReporter_ResetReminderCommandStatusType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_SO_HealthReporter_ResetReminderCommandStatusType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_SO_HealthReporter_ResetReminderCommandStatusTypeSeq, UMAA_SO_HealthReporter_ResetReminderCommandStatusType);

NDDSUSERDllExport
RTIBool UMAA_SO_HealthReporter_ResetReminderCommandStatusType_initialize(
    UMAA_SO_HealthReporter_ResetReminderCommandStatusType* self);

NDDSUSERDllExport
RTIBool UMAA_SO_HealthReporter_ResetReminderCommandStatusType_initialize_ex(
    UMAA_SO_HealthReporter_ResetReminderCommandStatusType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_SO_HealthReporter_ResetReminderCommandStatusType_initialize_w_params(
    UMAA_SO_HealthReporter_ResetReminderCommandStatusType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_SO_HealthReporter_ResetReminderCommandStatusType_finalize_w_return(
    UMAA_SO_HealthReporter_ResetReminderCommandStatusType* self);

NDDSUSERDllExport
void UMAA_SO_HealthReporter_ResetReminderCommandStatusType_finalize(
    UMAA_SO_HealthReporter_ResetReminderCommandStatusType* self);

NDDSUSERDllExport
void UMAA_SO_HealthReporter_ResetReminderCommandStatusType_finalize_ex(
    UMAA_SO_HealthReporter_ResetReminderCommandStatusType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_SO_HealthReporter_ResetReminderCommandStatusType_finalize_w_params(
    UMAA_SO_HealthReporter_ResetReminderCommandStatusType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_SO_HealthReporter_ResetReminderCommandStatusType_finalize_optional_members(
    UMAA_SO_HealthReporter_ResetReminderCommandStatusType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_SO_HealthReporter_ResetReminderCommandStatusType_copy(
    UMAA_SO_HealthReporter_ResetReminderCommandStatusType* dst,
    const UMAA_SO_HealthReporter_ResetReminderCommandStatusType* src);

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
        struct type_code< UMAA_SO_HealthReporter_ResetReminderCommandStatusType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* ResetReminderCommandStatusType */

