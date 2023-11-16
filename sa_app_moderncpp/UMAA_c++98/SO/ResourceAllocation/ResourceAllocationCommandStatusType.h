

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ResourceAllocationCommandStatusType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef ResourceAllocationCommandStatusType_1921573612_h
#define ResourceAllocationCommandStatusType_1921573612_h

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

static const DDS_Char * const UMAA_SO_ResourceAllocation_ResourceAllocationCommandStatus_TOPIC= "UMAA::SO::ResourceAllocation::ResourceAllocationCommandStatus";

extern "C" {

    extern const char *UMAA_SO_ResourceAllocation_ResourceAllocationCommandStatusTypeTYPENAME;

}

struct UMAA_SO_ResourceAllocation_ResourceAllocationCommandStatusTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_SO_ResourceAllocation_ResourceAllocationCommandStatusTypeTypeSupport;
class UMAA_SO_ResourceAllocation_ResourceAllocationCommandStatusTypeDataWriter;
class UMAA_SO_ResourceAllocation_ResourceAllocationCommandStatusTypeDataReader;
#endif
class UMAA_SO_ResourceAllocation_ResourceAllocationCommandStatusType 
{
  public:
    typedef struct UMAA_SO_ResourceAllocation_ResourceAllocationCommandStatusTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_SO_ResourceAllocation_ResourceAllocationCommandStatusTypeTypeSupport TypeSupport;
    typedef UMAA_SO_ResourceAllocation_ResourceAllocationCommandStatusTypeDataWriter DataWriter;
    typedef UMAA_SO_ResourceAllocation_ResourceAllocationCommandStatusTypeDataReader DataReader;
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
NDDSUSERDllExport DDS_TypeCode * UMAA_SO_ResourceAllocation_ResourceAllocationCommandStatusType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_SO_ResourceAllocation_ResourceAllocationCommandStatusType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_SO_ResourceAllocation_ResourceAllocationCommandStatusType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_SO_ResourceAllocation_ResourceAllocationCommandStatusType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_SO_ResourceAllocation_ResourceAllocationCommandStatusTypeSeq, UMAA_SO_ResourceAllocation_ResourceAllocationCommandStatusType);

NDDSUSERDllExport
RTIBool UMAA_SO_ResourceAllocation_ResourceAllocationCommandStatusType_initialize(
    UMAA_SO_ResourceAllocation_ResourceAllocationCommandStatusType* self);

NDDSUSERDllExport
RTIBool UMAA_SO_ResourceAllocation_ResourceAllocationCommandStatusType_initialize_ex(
    UMAA_SO_ResourceAllocation_ResourceAllocationCommandStatusType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_SO_ResourceAllocation_ResourceAllocationCommandStatusType_initialize_w_params(
    UMAA_SO_ResourceAllocation_ResourceAllocationCommandStatusType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_SO_ResourceAllocation_ResourceAllocationCommandStatusType_finalize_w_return(
    UMAA_SO_ResourceAllocation_ResourceAllocationCommandStatusType* self);

NDDSUSERDllExport
void UMAA_SO_ResourceAllocation_ResourceAllocationCommandStatusType_finalize(
    UMAA_SO_ResourceAllocation_ResourceAllocationCommandStatusType* self);

NDDSUSERDllExport
void UMAA_SO_ResourceAllocation_ResourceAllocationCommandStatusType_finalize_ex(
    UMAA_SO_ResourceAllocation_ResourceAllocationCommandStatusType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_SO_ResourceAllocation_ResourceAllocationCommandStatusType_finalize_w_params(
    UMAA_SO_ResourceAllocation_ResourceAllocationCommandStatusType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_SO_ResourceAllocation_ResourceAllocationCommandStatusType_finalize_optional_members(
    UMAA_SO_ResourceAllocation_ResourceAllocationCommandStatusType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_SO_ResourceAllocation_ResourceAllocationCommandStatusType_copy(
    UMAA_SO_ResourceAllocation_ResourceAllocationCommandStatusType* dst,
    const UMAA_SO_ResourceAllocation_ResourceAllocationCommandStatusType* src);

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
        struct type_code< UMAA_SO_ResourceAllocation_ResourceAllocationCommandStatusType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* ResourceAllocationCommandStatusType */

