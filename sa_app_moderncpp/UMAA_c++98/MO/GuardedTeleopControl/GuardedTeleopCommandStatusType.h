

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GuardedTeleopCommandStatusType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef GuardedTeleopCommandStatusType_619571510_h
#define GuardedTeleopCommandStatusType_619571510_h

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

static const DDS_Char * const UMAA_MO_GuardedTeleopControl_GuardedTeleopCommandStatus_TOPIC= "UMAA::MO::GuardedTeleopControl::GuardedTeleopCommandStatus";

extern "C" {

    extern const char *UMAA_MO_GuardedTeleopControl_GuardedTeleopCommandStatusTypeTYPENAME;

}

struct UMAA_MO_GuardedTeleopControl_GuardedTeleopCommandStatusTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_MO_GuardedTeleopControl_GuardedTeleopCommandStatusTypeTypeSupport;
class UMAA_MO_GuardedTeleopControl_GuardedTeleopCommandStatusTypeDataWriter;
class UMAA_MO_GuardedTeleopControl_GuardedTeleopCommandStatusTypeDataReader;
#endif
class UMAA_MO_GuardedTeleopControl_GuardedTeleopCommandStatusType 
{
  public:
    typedef struct UMAA_MO_GuardedTeleopControl_GuardedTeleopCommandStatusTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_MO_GuardedTeleopControl_GuardedTeleopCommandStatusTypeTypeSupport TypeSupport;
    typedef UMAA_MO_GuardedTeleopControl_GuardedTeleopCommandStatusTypeDataWriter DataWriter;
    typedef UMAA_MO_GuardedTeleopControl_GuardedTeleopCommandStatusTypeDataReader DataReader;
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
NDDSUSERDllExport DDS_TypeCode * UMAA_MO_GuardedTeleopControl_GuardedTeleopCommandStatusType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_MO_GuardedTeleopControl_GuardedTeleopCommandStatusType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MO_GuardedTeleopControl_GuardedTeleopCommandStatusType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MO_GuardedTeleopControl_GuardedTeleopCommandStatusType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_MO_GuardedTeleopControl_GuardedTeleopCommandStatusTypeSeq, UMAA_MO_GuardedTeleopControl_GuardedTeleopCommandStatusType);

NDDSUSERDllExport
RTIBool UMAA_MO_GuardedTeleopControl_GuardedTeleopCommandStatusType_initialize(
    UMAA_MO_GuardedTeleopControl_GuardedTeleopCommandStatusType* self);

NDDSUSERDllExport
RTIBool UMAA_MO_GuardedTeleopControl_GuardedTeleopCommandStatusType_initialize_ex(
    UMAA_MO_GuardedTeleopControl_GuardedTeleopCommandStatusType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_MO_GuardedTeleopControl_GuardedTeleopCommandStatusType_initialize_w_params(
    UMAA_MO_GuardedTeleopControl_GuardedTeleopCommandStatusType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_MO_GuardedTeleopControl_GuardedTeleopCommandStatusType_finalize_w_return(
    UMAA_MO_GuardedTeleopControl_GuardedTeleopCommandStatusType* self);

NDDSUSERDllExport
void UMAA_MO_GuardedTeleopControl_GuardedTeleopCommandStatusType_finalize(
    UMAA_MO_GuardedTeleopControl_GuardedTeleopCommandStatusType* self);

NDDSUSERDllExport
void UMAA_MO_GuardedTeleopControl_GuardedTeleopCommandStatusType_finalize_ex(
    UMAA_MO_GuardedTeleopControl_GuardedTeleopCommandStatusType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_MO_GuardedTeleopControl_GuardedTeleopCommandStatusType_finalize_w_params(
    UMAA_MO_GuardedTeleopControl_GuardedTeleopCommandStatusType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_MO_GuardedTeleopControl_GuardedTeleopCommandStatusType_finalize_optional_members(
    UMAA_MO_GuardedTeleopControl_GuardedTeleopCommandStatusType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_MO_GuardedTeleopControl_GuardedTeleopCommandStatusType_copy(
    UMAA_MO_GuardedTeleopControl_GuardedTeleopCommandStatusType* dst,
    const UMAA_MO_GuardedTeleopControl_GuardedTeleopCommandStatusType* src);

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
        struct type_code< UMAA_MO_GuardedTeleopControl_GuardedTeleopCommandStatusType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* GuardedTeleopCommandStatusType */

