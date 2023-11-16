

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from MoveToPosPolicyType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef MoveToPosPolicyType_1486451355_h
#define MoveToPosPolicyType_1486451355_h

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
#include "UMAA/MM/BaseType/WaypointType.h"

extern "C" {

    extern const char *UMAA_MM_CommsLostPolicy_MoveToPosPolicyTypeTYPENAME;

}

struct UMAA_MM_CommsLostPolicy_MoveToPosPolicyTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_MM_CommsLostPolicy_MoveToPosPolicyTypeTypeSupport;
class UMAA_MM_CommsLostPolicy_MoveToPosPolicyTypeDataWriter;
class UMAA_MM_CommsLostPolicy_MoveToPosPolicyTypeDataReader;
#endif
class UMAA_MM_CommsLostPolicy_MoveToPosPolicyType 
{
  public:
    typedef struct UMAA_MM_CommsLostPolicy_MoveToPosPolicyTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_MM_CommsLostPolicy_MoveToPosPolicyTypeTypeSupport TypeSupport;
    typedef UMAA_MM_CommsLostPolicy_MoveToPosPolicyTypeDataWriter DataWriter;
    typedef UMAA_MM_CommsLostPolicy_MoveToPosPolicyTypeDataReader DataReader;
    #endif

    DDS_Double   distance ;
    UMAA_Common_MaritimeEnumeration_VehicleSpeedModeEnumType_VehicleSpeedModeEnumType   mode ;
    UMAA_MM_BaseType_WaypointType   position ;
    DDS_Double   speed ;
    UMAA_Common_MaritimeEnumeration_VehicleSpeedReferenceEnumType_VehicleSpeedReferenceEnumType   speedReference ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_MM_CommsLostPolicy_MoveToPosPolicyType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_MM_CommsLostPolicy_MoveToPosPolicyType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MM_CommsLostPolicy_MoveToPosPolicyType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MM_CommsLostPolicy_MoveToPosPolicyType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_MM_CommsLostPolicy_MoveToPosPolicyTypeSeq, UMAA_MM_CommsLostPolicy_MoveToPosPolicyType);

NDDSUSERDllExport
RTIBool UMAA_MM_CommsLostPolicy_MoveToPosPolicyType_initialize(
    UMAA_MM_CommsLostPolicy_MoveToPosPolicyType* self);

NDDSUSERDllExport
RTIBool UMAA_MM_CommsLostPolicy_MoveToPosPolicyType_initialize_ex(
    UMAA_MM_CommsLostPolicy_MoveToPosPolicyType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_MM_CommsLostPolicy_MoveToPosPolicyType_initialize_w_params(
    UMAA_MM_CommsLostPolicy_MoveToPosPolicyType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_MM_CommsLostPolicy_MoveToPosPolicyType_finalize_w_return(
    UMAA_MM_CommsLostPolicy_MoveToPosPolicyType* self);

NDDSUSERDllExport
void UMAA_MM_CommsLostPolicy_MoveToPosPolicyType_finalize(
    UMAA_MM_CommsLostPolicy_MoveToPosPolicyType* self);

NDDSUSERDllExport
void UMAA_MM_CommsLostPolicy_MoveToPosPolicyType_finalize_ex(
    UMAA_MM_CommsLostPolicy_MoveToPosPolicyType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_MM_CommsLostPolicy_MoveToPosPolicyType_finalize_w_params(
    UMAA_MM_CommsLostPolicy_MoveToPosPolicyType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_MM_CommsLostPolicy_MoveToPosPolicyType_finalize_optional_members(
    UMAA_MM_CommsLostPolicy_MoveToPosPolicyType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_MM_CommsLostPolicy_MoveToPosPolicyType_copy(
    UMAA_MM_CommsLostPolicy_MoveToPosPolicyType* dst,
    const UMAA_MM_CommsLostPolicy_MoveToPosPolicyType* src);

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
        struct type_code< UMAA_MM_CommsLostPolicy_MoveToPosPolicyType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* MoveToPosPolicyType */

