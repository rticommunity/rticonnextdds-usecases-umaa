

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ObjectiveExecutionCommandStatusType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef ObjectiveExecutionCommandStatusType_1822466178_h
#define ObjectiveExecutionCommandStatusType_1822466178_h

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

static const DDS_Char * const UMAA_MM_ObjectiveExecutionControl_ObjectiveExecutionCommandStatus_TOPIC= "UMAA::MM::ObjectiveExecutionControl::ObjectiveExecutionCommandStatus";

extern "C" {

    extern const char *UMAA_MM_ObjectiveExecutionControl_ObjectiveExecutionCommandStatusTypeTYPENAME;

}

struct UMAA_MM_ObjectiveExecutionControl_ObjectiveExecutionCommandStatusTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_MM_ObjectiveExecutionControl_ObjectiveExecutionCommandStatusTypeTypeSupport;
class UMAA_MM_ObjectiveExecutionControl_ObjectiveExecutionCommandStatusTypeDataWriter;
class UMAA_MM_ObjectiveExecutionControl_ObjectiveExecutionCommandStatusTypeDataReader;
#endif
class UMAA_MM_ObjectiveExecutionControl_ObjectiveExecutionCommandStatusType 
{
  public:
    typedef struct UMAA_MM_ObjectiveExecutionControl_ObjectiveExecutionCommandStatusTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_MM_ObjectiveExecutionControl_ObjectiveExecutionCommandStatusTypeTypeSupport TypeSupport;
    typedef UMAA_MM_ObjectiveExecutionControl_ObjectiveExecutionCommandStatusTypeDataWriter DataWriter;
    typedef UMAA_MM_ObjectiveExecutionControl_ObjectiveExecutionCommandStatusTypeDataReader DataReader;
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
NDDSUSERDllExport DDS_TypeCode * UMAA_MM_ObjectiveExecutionControl_ObjectiveExecutionCommandStatusType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_MM_ObjectiveExecutionControl_ObjectiveExecutionCommandStatusType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MM_ObjectiveExecutionControl_ObjectiveExecutionCommandStatusType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MM_ObjectiveExecutionControl_ObjectiveExecutionCommandStatusType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_MM_ObjectiveExecutionControl_ObjectiveExecutionCommandStatusTypeSeq, UMAA_MM_ObjectiveExecutionControl_ObjectiveExecutionCommandStatusType);

NDDSUSERDllExport
RTIBool UMAA_MM_ObjectiveExecutionControl_ObjectiveExecutionCommandStatusType_initialize(
    UMAA_MM_ObjectiveExecutionControl_ObjectiveExecutionCommandStatusType* self);

NDDSUSERDllExport
RTIBool UMAA_MM_ObjectiveExecutionControl_ObjectiveExecutionCommandStatusType_initialize_ex(
    UMAA_MM_ObjectiveExecutionControl_ObjectiveExecutionCommandStatusType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_MM_ObjectiveExecutionControl_ObjectiveExecutionCommandStatusType_initialize_w_params(
    UMAA_MM_ObjectiveExecutionControl_ObjectiveExecutionCommandStatusType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_MM_ObjectiveExecutionControl_ObjectiveExecutionCommandStatusType_finalize_w_return(
    UMAA_MM_ObjectiveExecutionControl_ObjectiveExecutionCommandStatusType* self);

NDDSUSERDllExport
void UMAA_MM_ObjectiveExecutionControl_ObjectiveExecutionCommandStatusType_finalize(
    UMAA_MM_ObjectiveExecutionControl_ObjectiveExecutionCommandStatusType* self);

NDDSUSERDllExport
void UMAA_MM_ObjectiveExecutionControl_ObjectiveExecutionCommandStatusType_finalize_ex(
    UMAA_MM_ObjectiveExecutionControl_ObjectiveExecutionCommandStatusType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_MM_ObjectiveExecutionControl_ObjectiveExecutionCommandStatusType_finalize_w_params(
    UMAA_MM_ObjectiveExecutionControl_ObjectiveExecutionCommandStatusType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_MM_ObjectiveExecutionControl_ObjectiveExecutionCommandStatusType_finalize_optional_members(
    UMAA_MM_ObjectiveExecutionControl_ObjectiveExecutionCommandStatusType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_MM_ObjectiveExecutionControl_ObjectiveExecutionCommandStatusType_copy(
    UMAA_MM_ObjectiveExecutionControl_ObjectiveExecutionCommandStatusType* dst,
    const UMAA_MM_ObjectiveExecutionControl_ObjectiveExecutionCommandStatusType* src);

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
        struct type_code< UMAA_MM_ObjectiveExecutionControl_ObjectiveExecutionCommandStatusType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* ObjectiveExecutionCommandStatusType */

