

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from RenderUselessCommandStatusType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef RenderUselessCommandStatusType_1479300433_h
#define RenderUselessCommandStatusType_1479300433_h

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

static const DDS_Char * const UMAA_SO_RenderUselessControl_RenderUselessCommandStatus_TOPIC= "UMAA::SO::RenderUselessControl::RenderUselessCommandStatus";

extern "C" {

    extern const char *UMAA_SO_RenderUselessControl_RenderUselessCommandStatusTypeTYPENAME;

}

struct UMAA_SO_RenderUselessControl_RenderUselessCommandStatusTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_SO_RenderUselessControl_RenderUselessCommandStatusTypeTypeSupport;
class UMAA_SO_RenderUselessControl_RenderUselessCommandStatusTypeDataWriter;
class UMAA_SO_RenderUselessControl_RenderUselessCommandStatusTypeDataReader;
#endif
class UMAA_SO_RenderUselessControl_RenderUselessCommandStatusType 
{
  public:
    typedef struct UMAA_SO_RenderUselessControl_RenderUselessCommandStatusTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_SO_RenderUselessControl_RenderUselessCommandStatusTypeTypeSupport TypeSupport;
    typedef UMAA_SO_RenderUselessControl_RenderUselessCommandStatusTypeDataWriter DataWriter;
    typedef UMAA_SO_RenderUselessControl_RenderUselessCommandStatusTypeDataReader DataReader;
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
NDDSUSERDllExport DDS_TypeCode * UMAA_SO_RenderUselessControl_RenderUselessCommandStatusType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_SO_RenderUselessControl_RenderUselessCommandStatusType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_SO_RenderUselessControl_RenderUselessCommandStatusType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_SO_RenderUselessControl_RenderUselessCommandStatusType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_SO_RenderUselessControl_RenderUselessCommandStatusTypeSeq, UMAA_SO_RenderUselessControl_RenderUselessCommandStatusType);

NDDSUSERDllExport
RTIBool UMAA_SO_RenderUselessControl_RenderUselessCommandStatusType_initialize(
    UMAA_SO_RenderUselessControl_RenderUselessCommandStatusType* self);

NDDSUSERDllExport
RTIBool UMAA_SO_RenderUselessControl_RenderUselessCommandStatusType_initialize_ex(
    UMAA_SO_RenderUselessControl_RenderUselessCommandStatusType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_SO_RenderUselessControl_RenderUselessCommandStatusType_initialize_w_params(
    UMAA_SO_RenderUselessControl_RenderUselessCommandStatusType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_SO_RenderUselessControl_RenderUselessCommandStatusType_finalize_w_return(
    UMAA_SO_RenderUselessControl_RenderUselessCommandStatusType* self);

NDDSUSERDllExport
void UMAA_SO_RenderUselessControl_RenderUselessCommandStatusType_finalize(
    UMAA_SO_RenderUselessControl_RenderUselessCommandStatusType* self);

NDDSUSERDllExport
void UMAA_SO_RenderUselessControl_RenderUselessCommandStatusType_finalize_ex(
    UMAA_SO_RenderUselessControl_RenderUselessCommandStatusType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_SO_RenderUselessControl_RenderUselessCommandStatusType_finalize_w_params(
    UMAA_SO_RenderUselessControl_RenderUselessCommandStatusType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_SO_RenderUselessControl_RenderUselessCommandStatusType_finalize_optional_members(
    UMAA_SO_RenderUselessControl_RenderUselessCommandStatusType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_SO_RenderUselessControl_RenderUselessCommandStatusType_copy(
    UMAA_SO_RenderUselessControl_RenderUselessCommandStatusType* dst,
    const UMAA_SO_RenderUselessControl_RenderUselessCommandStatusType* src);

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
        struct type_code< UMAA_SO_RenderUselessControl_RenderUselessCommandStatusType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* RenderUselessCommandStatusType */

