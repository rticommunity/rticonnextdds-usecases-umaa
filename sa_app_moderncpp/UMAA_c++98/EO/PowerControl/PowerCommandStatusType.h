

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from PowerCommandStatusType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef PowerCommandStatusType_1739575108_h
#define PowerCommandStatusType_1739575108_h

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

static const DDS_Char * const UMAA_EO_PowerControl_PowerCommandStatus_TOPIC= "UMAA::EO::PowerControl::PowerCommandStatus";

extern "C" {

    extern const char *UMAA_EO_PowerControl_PowerCommandStatusTypeTYPENAME;

}

struct UMAA_EO_PowerControl_PowerCommandStatusTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_EO_PowerControl_PowerCommandStatusTypeTypeSupport;
class UMAA_EO_PowerControl_PowerCommandStatusTypeDataWriter;
class UMAA_EO_PowerControl_PowerCommandStatusTypeDataReader;
#endif
class UMAA_EO_PowerControl_PowerCommandStatusType 
{
  public:
    typedef struct UMAA_EO_PowerControl_PowerCommandStatusTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_EO_PowerControl_PowerCommandStatusTypeTypeSupport TypeSupport;
    typedef UMAA_EO_PowerControl_PowerCommandStatusTypeDataWriter DataWriter;
    typedef UMAA_EO_PowerControl_PowerCommandStatusTypeDataReader DataReader;
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
NDDSUSERDllExport DDS_TypeCode * UMAA_EO_PowerControl_PowerCommandStatusType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_EO_PowerControl_PowerCommandStatusType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_EO_PowerControl_PowerCommandStatusType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_EO_PowerControl_PowerCommandStatusType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_EO_PowerControl_PowerCommandStatusTypeSeq, UMAA_EO_PowerControl_PowerCommandStatusType);

NDDSUSERDllExport
RTIBool UMAA_EO_PowerControl_PowerCommandStatusType_initialize(
    UMAA_EO_PowerControl_PowerCommandStatusType* self);

NDDSUSERDllExport
RTIBool UMAA_EO_PowerControl_PowerCommandStatusType_initialize_ex(
    UMAA_EO_PowerControl_PowerCommandStatusType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_EO_PowerControl_PowerCommandStatusType_initialize_w_params(
    UMAA_EO_PowerControl_PowerCommandStatusType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_EO_PowerControl_PowerCommandStatusType_finalize_w_return(
    UMAA_EO_PowerControl_PowerCommandStatusType* self);

NDDSUSERDllExport
void UMAA_EO_PowerControl_PowerCommandStatusType_finalize(
    UMAA_EO_PowerControl_PowerCommandStatusType* self);

NDDSUSERDllExport
void UMAA_EO_PowerControl_PowerCommandStatusType_finalize_ex(
    UMAA_EO_PowerControl_PowerCommandStatusType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_EO_PowerControl_PowerCommandStatusType_finalize_w_params(
    UMAA_EO_PowerControl_PowerCommandStatusType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_EO_PowerControl_PowerCommandStatusType_finalize_optional_members(
    UMAA_EO_PowerControl_PowerCommandStatusType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_EO_PowerControl_PowerCommandStatusType_copy(
    UMAA_EO_PowerControl_PowerCommandStatusType* dst,
    const UMAA_EO_PowerControl_PowerCommandStatusType* src);

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
        struct type_code< UMAA_EO_PowerControl_PowerCommandStatusType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* PowerCommandStatusType */

