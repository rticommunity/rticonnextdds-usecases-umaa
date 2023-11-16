

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ReminderStatusType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef ReminderStatusType_784038570_h
#define ReminderStatusType_784038570_h

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
#include "UMAA/Common/PrimitiveConstrained/ConstrainedTypes.h"

extern "C" {

    extern const char *UMAA_SO_HealthReporter_ReminderStatusTypeTYPENAME;

}

struct UMAA_SO_HealthReporter_ReminderStatusTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_SO_HealthReporter_ReminderStatusTypeTypeSupport;
class UMAA_SO_HealthReporter_ReminderStatusTypeDataWriter;
class UMAA_SO_HealthReporter_ReminderStatusTypeDataReader;
#endif
class UMAA_SO_HealthReporter_ReminderStatusType 
{
  public:
    typedef struct UMAA_SO_HealthReporter_ReminderStatusTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_SO_HealthReporter_ReminderStatusTypeTypeSupport TypeSupport;
    typedef UMAA_SO_HealthReporter_ReminderStatusTypeDataWriter DataWriter;
    typedef UMAA_SO_HealthReporter_ReminderStatusTypeDataReader DataReader;
    #endif

    DDS_Char *   descriptor ;
    DDS_Double   elapsedTime ;
    DDS_Boolean   reminderConfig ;
    UMAA_Common_Measurement_NumericGUID   reminderID ;
    DDS_Boolean   reminderStatus ;
    DDS_Double   serviceInterval ;
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
NDDSUSERDllExport DDS_TypeCode * UMAA_SO_HealthReporter_ReminderStatusType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_SO_HealthReporter_ReminderStatusType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_SO_HealthReporter_ReminderStatusType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_SO_HealthReporter_ReminderStatusType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_SO_HealthReporter_ReminderStatusTypeSeq, UMAA_SO_HealthReporter_ReminderStatusType);

NDDSUSERDllExport
RTIBool UMAA_SO_HealthReporter_ReminderStatusType_initialize(
    UMAA_SO_HealthReporter_ReminderStatusType* self);

NDDSUSERDllExport
RTIBool UMAA_SO_HealthReporter_ReminderStatusType_initialize_ex(
    UMAA_SO_HealthReporter_ReminderStatusType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_SO_HealthReporter_ReminderStatusType_initialize_w_params(
    UMAA_SO_HealthReporter_ReminderStatusType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_SO_HealthReporter_ReminderStatusType_finalize_w_return(
    UMAA_SO_HealthReporter_ReminderStatusType* self);

NDDSUSERDllExport
void UMAA_SO_HealthReporter_ReminderStatusType_finalize(
    UMAA_SO_HealthReporter_ReminderStatusType* self);

NDDSUSERDllExport
void UMAA_SO_HealthReporter_ReminderStatusType_finalize_ex(
    UMAA_SO_HealthReporter_ReminderStatusType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_SO_HealthReporter_ReminderStatusType_finalize_w_params(
    UMAA_SO_HealthReporter_ReminderStatusType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_SO_HealthReporter_ReminderStatusType_finalize_optional_members(
    UMAA_SO_HealthReporter_ReminderStatusType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_SO_HealthReporter_ReminderStatusType_copy(
    UMAA_SO_HealthReporter_ReminderStatusType* dst,
    const UMAA_SO_HealthReporter_ReminderStatusType* src);

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
        struct type_code< UMAA_SO_HealthReporter_ReminderStatusType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* ReminderStatusType */

