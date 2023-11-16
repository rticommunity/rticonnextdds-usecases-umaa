

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ManagementStateCommandStatusType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef ManagementStateCommandStatusType_69845725_h
#define ManagementStateCommandStatusType_69845725_h

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

static const DDS_Char * const UMAA_SO_ManagementState_ManagementStateCommandStatus_TOPIC= "UMAA::SO::ManagementState::ManagementStateCommandStatus";

extern "C" {

    extern const char *UMAA_SO_ManagementState_ManagementStateCommandStatusTypeTYPENAME;

}

struct UMAA_SO_ManagementState_ManagementStateCommandStatusTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_SO_ManagementState_ManagementStateCommandStatusTypeTypeSupport;
class UMAA_SO_ManagementState_ManagementStateCommandStatusTypeDataWriter;
class UMAA_SO_ManagementState_ManagementStateCommandStatusTypeDataReader;
#endif
class UMAA_SO_ManagementState_ManagementStateCommandStatusType 
{
  public:
    typedef struct UMAA_SO_ManagementState_ManagementStateCommandStatusTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_SO_ManagementState_ManagementStateCommandStatusTypeTypeSupport TypeSupport;
    typedef UMAA_SO_ManagementState_ManagementStateCommandStatusTypeDataWriter DataWriter;
    typedef UMAA_SO_ManagementState_ManagementStateCommandStatusTypeDataReader DataReader;
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
NDDSUSERDllExport DDS_TypeCode * UMAA_SO_ManagementState_ManagementStateCommandStatusType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_SO_ManagementState_ManagementStateCommandStatusType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_SO_ManagementState_ManagementStateCommandStatusType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_SO_ManagementState_ManagementStateCommandStatusType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_SO_ManagementState_ManagementStateCommandStatusTypeSeq, UMAA_SO_ManagementState_ManagementStateCommandStatusType);

NDDSUSERDllExport
RTIBool UMAA_SO_ManagementState_ManagementStateCommandStatusType_initialize(
    UMAA_SO_ManagementState_ManagementStateCommandStatusType* self);

NDDSUSERDllExport
RTIBool UMAA_SO_ManagementState_ManagementStateCommandStatusType_initialize_ex(
    UMAA_SO_ManagementState_ManagementStateCommandStatusType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_SO_ManagementState_ManagementStateCommandStatusType_initialize_w_params(
    UMAA_SO_ManagementState_ManagementStateCommandStatusType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_SO_ManagementState_ManagementStateCommandStatusType_finalize_w_return(
    UMAA_SO_ManagementState_ManagementStateCommandStatusType* self);

NDDSUSERDllExport
void UMAA_SO_ManagementState_ManagementStateCommandStatusType_finalize(
    UMAA_SO_ManagementState_ManagementStateCommandStatusType* self);

NDDSUSERDllExport
void UMAA_SO_ManagementState_ManagementStateCommandStatusType_finalize_ex(
    UMAA_SO_ManagementState_ManagementStateCommandStatusType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_SO_ManagementState_ManagementStateCommandStatusType_finalize_w_params(
    UMAA_SO_ManagementState_ManagementStateCommandStatusType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_SO_ManagementState_ManagementStateCommandStatusType_finalize_optional_members(
    UMAA_SO_ManagementState_ManagementStateCommandStatusType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_SO_ManagementState_ManagementStateCommandStatusType_copy(
    UMAA_SO_ManagementState_ManagementStateCommandStatusType* dst,
    const UMAA_SO_ManagementState_ManagementStateCommandStatusType* src);

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
        struct type_code< UMAA_SO_ManagementState_ManagementStateCommandStatusType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* ManagementStateCommandStatusType */

