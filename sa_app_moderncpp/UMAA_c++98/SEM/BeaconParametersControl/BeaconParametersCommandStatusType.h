

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from BeaconParametersCommandStatusType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef BeaconParametersCommandStatusType_1549831985_h
#define BeaconParametersCommandStatusType_1549831985_h

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

static const DDS_Char * const UMAA_SEM_BeaconParametersControl_BeaconParametersCommandStatus_TOPIC= "UMAA::SEM::BeaconParametersControl::BeaconParametersCommandStatus";

extern "C" {

    extern const char *UMAA_SEM_BeaconParametersControl_BeaconParametersCommandStatusTypeTYPENAME;

}

struct UMAA_SEM_BeaconParametersControl_BeaconParametersCommandStatusTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_SEM_BeaconParametersControl_BeaconParametersCommandStatusTypeTypeSupport;
class UMAA_SEM_BeaconParametersControl_BeaconParametersCommandStatusTypeDataWriter;
class UMAA_SEM_BeaconParametersControl_BeaconParametersCommandStatusTypeDataReader;
#endif
class UMAA_SEM_BeaconParametersControl_BeaconParametersCommandStatusType 
{
  public:
    typedef struct UMAA_SEM_BeaconParametersControl_BeaconParametersCommandStatusTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_SEM_BeaconParametersControl_BeaconParametersCommandStatusTypeTypeSupport TypeSupport;
    typedef UMAA_SEM_BeaconParametersControl_BeaconParametersCommandStatusTypeDataWriter DataWriter;
    typedef UMAA_SEM_BeaconParametersControl_BeaconParametersCommandStatusTypeDataReader DataReader;
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
NDDSUSERDllExport DDS_TypeCode * UMAA_SEM_BeaconParametersControl_BeaconParametersCommandStatusType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_SEM_BeaconParametersControl_BeaconParametersCommandStatusType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_SEM_BeaconParametersControl_BeaconParametersCommandStatusType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_SEM_BeaconParametersControl_BeaconParametersCommandStatusType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_SEM_BeaconParametersControl_BeaconParametersCommandStatusTypeSeq, UMAA_SEM_BeaconParametersControl_BeaconParametersCommandStatusType);

NDDSUSERDllExport
RTIBool UMAA_SEM_BeaconParametersControl_BeaconParametersCommandStatusType_initialize(
    UMAA_SEM_BeaconParametersControl_BeaconParametersCommandStatusType* self);

NDDSUSERDllExport
RTIBool UMAA_SEM_BeaconParametersControl_BeaconParametersCommandStatusType_initialize_ex(
    UMAA_SEM_BeaconParametersControl_BeaconParametersCommandStatusType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_SEM_BeaconParametersControl_BeaconParametersCommandStatusType_initialize_w_params(
    UMAA_SEM_BeaconParametersControl_BeaconParametersCommandStatusType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_SEM_BeaconParametersControl_BeaconParametersCommandStatusType_finalize_w_return(
    UMAA_SEM_BeaconParametersControl_BeaconParametersCommandStatusType* self);

NDDSUSERDllExport
void UMAA_SEM_BeaconParametersControl_BeaconParametersCommandStatusType_finalize(
    UMAA_SEM_BeaconParametersControl_BeaconParametersCommandStatusType* self);

NDDSUSERDllExport
void UMAA_SEM_BeaconParametersControl_BeaconParametersCommandStatusType_finalize_ex(
    UMAA_SEM_BeaconParametersControl_BeaconParametersCommandStatusType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_SEM_BeaconParametersControl_BeaconParametersCommandStatusType_finalize_w_params(
    UMAA_SEM_BeaconParametersControl_BeaconParametersCommandStatusType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_SEM_BeaconParametersControl_BeaconParametersCommandStatusType_finalize_optional_members(
    UMAA_SEM_BeaconParametersControl_BeaconParametersCommandStatusType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_SEM_BeaconParametersControl_BeaconParametersCommandStatusType_copy(
    UMAA_SEM_BeaconParametersControl_BeaconParametersCommandStatusType* dst,
    const UMAA_SEM_BeaconParametersControl_BeaconParametersCommandStatusType* src);

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
        struct type_code< UMAA_SEM_BeaconParametersControl_BeaconParametersCommandStatusType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* BeaconParametersCommandStatusType */

