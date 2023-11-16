

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from EmergencyStateCommandStatusType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef EmergencyStateCommandStatusType_1080562032_h
#define EmergencyStateCommandStatusType_1080562032_h

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

static const DDS_Char * const UMAA_SO_ManagementState_EmergencyStateCommandStatus_TOPIC= "UMAA::SO::ManagementState::EmergencyStateCommandStatus";

extern "C" {

    extern const char *UMAA_SO_ManagementState_EmergencyStateCommandStatusTypeTYPENAME;

}

struct UMAA_SO_ManagementState_EmergencyStateCommandStatusTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_SO_ManagementState_EmergencyStateCommandStatusTypeTypeSupport;
class UMAA_SO_ManagementState_EmergencyStateCommandStatusTypeDataWriter;
class UMAA_SO_ManagementState_EmergencyStateCommandStatusTypeDataReader;
#endif
class UMAA_SO_ManagementState_EmergencyStateCommandStatusType 
{
  public:
    typedef struct UMAA_SO_ManagementState_EmergencyStateCommandStatusTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_SO_ManagementState_EmergencyStateCommandStatusTypeTypeSupport TypeSupport;
    typedef UMAA_SO_ManagementState_EmergencyStateCommandStatusTypeDataWriter DataWriter;
    typedef UMAA_SO_ManagementState_EmergencyStateCommandStatusTypeDataReader DataReader;
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
NDDSUSERDllExport DDS_TypeCode * UMAA_SO_ManagementState_EmergencyStateCommandStatusType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_SO_ManagementState_EmergencyStateCommandStatusType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_SO_ManagementState_EmergencyStateCommandStatusType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_SO_ManagementState_EmergencyStateCommandStatusType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_SO_ManagementState_EmergencyStateCommandStatusTypeSeq, UMAA_SO_ManagementState_EmergencyStateCommandStatusType);

NDDSUSERDllExport
RTIBool UMAA_SO_ManagementState_EmergencyStateCommandStatusType_initialize(
    UMAA_SO_ManagementState_EmergencyStateCommandStatusType* self);

NDDSUSERDllExport
RTIBool UMAA_SO_ManagementState_EmergencyStateCommandStatusType_initialize_ex(
    UMAA_SO_ManagementState_EmergencyStateCommandStatusType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_SO_ManagementState_EmergencyStateCommandStatusType_initialize_w_params(
    UMAA_SO_ManagementState_EmergencyStateCommandStatusType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_SO_ManagementState_EmergencyStateCommandStatusType_finalize_w_return(
    UMAA_SO_ManagementState_EmergencyStateCommandStatusType* self);

NDDSUSERDllExport
void UMAA_SO_ManagementState_EmergencyStateCommandStatusType_finalize(
    UMAA_SO_ManagementState_EmergencyStateCommandStatusType* self);

NDDSUSERDllExport
void UMAA_SO_ManagementState_EmergencyStateCommandStatusType_finalize_ex(
    UMAA_SO_ManagementState_EmergencyStateCommandStatusType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_SO_ManagementState_EmergencyStateCommandStatusType_finalize_w_params(
    UMAA_SO_ManagementState_EmergencyStateCommandStatusType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_SO_ManagementState_EmergencyStateCommandStatusType_finalize_optional_members(
    UMAA_SO_ManagementState_EmergencyStateCommandStatusType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_SO_ManagementState_EmergencyStateCommandStatusType_copy(
    UMAA_SO_ManagementState_EmergencyStateCommandStatusType* dst,
    const UMAA_SO_ManagementState_EmergencyStateCommandStatusType* src);

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
        struct type_code< UMAA_SO_ManagementState_EmergencyStateCommandStatusType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* EmergencyStateCommandStatusType */

