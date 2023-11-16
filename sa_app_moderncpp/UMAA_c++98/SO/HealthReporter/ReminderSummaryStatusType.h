

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ReminderSummaryStatusType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef ReminderSummaryStatusType_1349533115_h
#define ReminderSummaryStatusType_1349533115_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "UMAA/Common/Enumeration/EnumerationSets.h"
#include "UMAA/Common/Measurement/Measurements.h"

extern "C" {

    extern const char *UMAA_SO_HealthReporter_ReminderSummaryStatusTypeTYPENAME;

}

struct UMAA_SO_HealthReporter_ReminderSummaryStatusTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_SO_HealthReporter_ReminderSummaryStatusTypeTypeSupport;
class UMAA_SO_HealthReporter_ReminderSummaryStatusTypeDataWriter;
class UMAA_SO_HealthReporter_ReminderSummaryStatusTypeDataReader;
#endif
class UMAA_SO_HealthReporter_ReminderSummaryStatusType 
{
  public:
    typedef struct UMAA_SO_HealthReporter_ReminderSummaryStatusTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_SO_HealthReporter_ReminderSummaryStatusTypeTypeSupport TypeSupport;
    typedef UMAA_SO_HealthReporter_ReminderSummaryStatusTypeDataWriter DataWriter;
    typedef UMAA_SO_HealthReporter_ReminderSummaryStatusTypeDataReader DataReader;
    #endif

    DDS_BooleanSeq  reminderExpireds ;
    UMAA_Common_Measurement_NumericGUIDSeq  reminderIDs ;
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
NDDSUSERDllExport DDS_TypeCode * UMAA_SO_HealthReporter_ReminderSummaryStatusType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_SO_HealthReporter_ReminderSummaryStatusType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_SO_HealthReporter_ReminderSummaryStatusType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_SO_HealthReporter_ReminderSummaryStatusType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_SO_HealthReporter_ReminderSummaryStatusTypeSeq, UMAA_SO_HealthReporter_ReminderSummaryStatusType);

NDDSUSERDllExport
RTIBool UMAA_SO_HealthReporter_ReminderSummaryStatusType_initialize(
    UMAA_SO_HealthReporter_ReminderSummaryStatusType* self);

NDDSUSERDllExport
RTIBool UMAA_SO_HealthReporter_ReminderSummaryStatusType_initialize_ex(
    UMAA_SO_HealthReporter_ReminderSummaryStatusType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_SO_HealthReporter_ReminderSummaryStatusType_initialize_w_params(
    UMAA_SO_HealthReporter_ReminderSummaryStatusType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_SO_HealthReporter_ReminderSummaryStatusType_finalize_w_return(
    UMAA_SO_HealthReporter_ReminderSummaryStatusType* self);

NDDSUSERDllExport
void UMAA_SO_HealthReporter_ReminderSummaryStatusType_finalize(
    UMAA_SO_HealthReporter_ReminderSummaryStatusType* self);

NDDSUSERDllExport
void UMAA_SO_HealthReporter_ReminderSummaryStatusType_finalize_ex(
    UMAA_SO_HealthReporter_ReminderSummaryStatusType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_SO_HealthReporter_ReminderSummaryStatusType_finalize_w_params(
    UMAA_SO_HealthReporter_ReminderSummaryStatusType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_SO_HealthReporter_ReminderSummaryStatusType_finalize_optional_members(
    UMAA_SO_HealthReporter_ReminderSummaryStatusType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_SO_HealthReporter_ReminderSummaryStatusType_copy(
    UMAA_SO_HealthReporter_ReminderSummaryStatusType* dst,
    const UMAA_SO_HealthReporter_ReminderSummaryStatusType* src);

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
        struct type_code< UMAA_SO_HealthReporter_ReminderSummaryStatusType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* ReminderSummaryStatusType */

