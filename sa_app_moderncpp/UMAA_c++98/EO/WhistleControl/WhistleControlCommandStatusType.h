

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from WhistleControlCommandStatusType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef WhistleControlCommandStatusType_1158913205_h
#define WhistleControlCommandStatusType_1158913205_h

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

static const DDS_Char * const UMAA_EO_WhistleControl_WhistleControlCommandStatus_TOPIC= "UMAA::EO::WhistleControl::WhistleControlCommandStatus";

extern "C" {

    extern const char *UMAA_EO_WhistleControl_WhistleControlCommandStatusTypeTYPENAME;

}

struct UMAA_EO_WhistleControl_WhistleControlCommandStatusTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_EO_WhistleControl_WhistleControlCommandStatusTypeTypeSupport;
class UMAA_EO_WhistleControl_WhistleControlCommandStatusTypeDataWriter;
class UMAA_EO_WhistleControl_WhistleControlCommandStatusTypeDataReader;
#endif
class UMAA_EO_WhistleControl_WhistleControlCommandStatusType 
{
  public:
    typedef struct UMAA_EO_WhistleControl_WhistleControlCommandStatusTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_EO_WhistleControl_WhistleControlCommandStatusTypeTypeSupport TypeSupport;
    typedef UMAA_EO_WhistleControl_WhistleControlCommandStatusTypeDataWriter DataWriter;
    typedef UMAA_EO_WhistleControl_WhistleControlCommandStatusTypeDataReader DataReader;
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
NDDSUSERDllExport DDS_TypeCode * UMAA_EO_WhistleControl_WhistleControlCommandStatusType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_EO_WhistleControl_WhistleControlCommandStatusType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_EO_WhistleControl_WhistleControlCommandStatusType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_EO_WhistleControl_WhistleControlCommandStatusType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_EO_WhistleControl_WhistleControlCommandStatusTypeSeq, UMAA_EO_WhistleControl_WhistleControlCommandStatusType);

NDDSUSERDllExport
RTIBool UMAA_EO_WhistleControl_WhistleControlCommandStatusType_initialize(
    UMAA_EO_WhistleControl_WhistleControlCommandStatusType* self);

NDDSUSERDllExport
RTIBool UMAA_EO_WhistleControl_WhistleControlCommandStatusType_initialize_ex(
    UMAA_EO_WhistleControl_WhistleControlCommandStatusType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_EO_WhistleControl_WhistleControlCommandStatusType_initialize_w_params(
    UMAA_EO_WhistleControl_WhistleControlCommandStatusType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_EO_WhistleControl_WhistleControlCommandStatusType_finalize_w_return(
    UMAA_EO_WhistleControl_WhistleControlCommandStatusType* self);

NDDSUSERDllExport
void UMAA_EO_WhistleControl_WhistleControlCommandStatusType_finalize(
    UMAA_EO_WhistleControl_WhistleControlCommandStatusType* self);

NDDSUSERDllExport
void UMAA_EO_WhistleControl_WhistleControlCommandStatusType_finalize_ex(
    UMAA_EO_WhistleControl_WhistleControlCommandStatusType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_EO_WhistleControl_WhistleControlCommandStatusType_finalize_w_params(
    UMAA_EO_WhistleControl_WhistleControlCommandStatusType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_EO_WhistleControl_WhistleControlCommandStatusType_finalize_optional_members(
    UMAA_EO_WhistleControl_WhistleControlCommandStatusType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_EO_WhistleControl_WhistleControlCommandStatusType_copy(
    UMAA_EO_WhistleControl_WhistleControlCommandStatusType* dst,
    const UMAA_EO_WhistleControl_WhistleControlCommandStatusType* src);

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
        struct type_code< UMAA_EO_WhistleControl_WhistleControlCommandStatusType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* WhistleControlCommandStatusType */

