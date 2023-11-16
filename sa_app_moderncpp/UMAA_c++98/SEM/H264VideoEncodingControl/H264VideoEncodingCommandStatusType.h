

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from H264VideoEncodingCommandStatusType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef H264VideoEncodingCommandStatusType_2034326892_h
#define H264VideoEncodingCommandStatusType_2034326892_h

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

static const DDS_Char * const UMAA_SEM_H264VideoEncodingControl_H264VideoEncodingCommandStatus_TOPIC= "UMAA::SEM::H264VideoEncodingControl::H264VideoEncodingCommandStatus";

extern "C" {

    extern const char *UMAA_SEM_H264VideoEncodingControl_H264VideoEncodingCommandStatusTypeTYPENAME;

}

struct UMAA_SEM_H264VideoEncodingControl_H264VideoEncodingCommandStatusTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_SEM_H264VideoEncodingControl_H264VideoEncodingCommandStatusTypeTypeSupport;
class UMAA_SEM_H264VideoEncodingControl_H264VideoEncodingCommandStatusTypeDataWriter;
class UMAA_SEM_H264VideoEncodingControl_H264VideoEncodingCommandStatusTypeDataReader;
#endif
class UMAA_SEM_H264VideoEncodingControl_H264VideoEncodingCommandStatusType 
{
  public:
    typedef struct UMAA_SEM_H264VideoEncodingControl_H264VideoEncodingCommandStatusTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_SEM_H264VideoEncodingControl_H264VideoEncodingCommandStatusTypeTypeSupport TypeSupport;
    typedef UMAA_SEM_H264VideoEncodingControl_H264VideoEncodingCommandStatusTypeDataWriter DataWriter;
    typedef UMAA_SEM_H264VideoEncodingControl_H264VideoEncodingCommandStatusTypeDataReader DataReader;
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
NDDSUSERDllExport DDS_TypeCode * UMAA_SEM_H264VideoEncodingControl_H264VideoEncodingCommandStatusType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_SEM_H264VideoEncodingControl_H264VideoEncodingCommandStatusType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_SEM_H264VideoEncodingControl_H264VideoEncodingCommandStatusType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_SEM_H264VideoEncodingControl_H264VideoEncodingCommandStatusType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_SEM_H264VideoEncodingControl_H264VideoEncodingCommandStatusTypeSeq, UMAA_SEM_H264VideoEncodingControl_H264VideoEncodingCommandStatusType);

NDDSUSERDllExport
RTIBool UMAA_SEM_H264VideoEncodingControl_H264VideoEncodingCommandStatusType_initialize(
    UMAA_SEM_H264VideoEncodingControl_H264VideoEncodingCommandStatusType* self);

NDDSUSERDllExport
RTIBool UMAA_SEM_H264VideoEncodingControl_H264VideoEncodingCommandStatusType_initialize_ex(
    UMAA_SEM_H264VideoEncodingControl_H264VideoEncodingCommandStatusType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_SEM_H264VideoEncodingControl_H264VideoEncodingCommandStatusType_initialize_w_params(
    UMAA_SEM_H264VideoEncodingControl_H264VideoEncodingCommandStatusType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_SEM_H264VideoEncodingControl_H264VideoEncodingCommandStatusType_finalize_w_return(
    UMAA_SEM_H264VideoEncodingControl_H264VideoEncodingCommandStatusType* self);

NDDSUSERDllExport
void UMAA_SEM_H264VideoEncodingControl_H264VideoEncodingCommandStatusType_finalize(
    UMAA_SEM_H264VideoEncodingControl_H264VideoEncodingCommandStatusType* self);

NDDSUSERDllExport
void UMAA_SEM_H264VideoEncodingControl_H264VideoEncodingCommandStatusType_finalize_ex(
    UMAA_SEM_H264VideoEncodingControl_H264VideoEncodingCommandStatusType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_SEM_H264VideoEncodingControl_H264VideoEncodingCommandStatusType_finalize_w_params(
    UMAA_SEM_H264VideoEncodingControl_H264VideoEncodingCommandStatusType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_SEM_H264VideoEncodingControl_H264VideoEncodingCommandStatusType_finalize_optional_members(
    UMAA_SEM_H264VideoEncodingControl_H264VideoEncodingCommandStatusType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_SEM_H264VideoEncodingControl_H264VideoEncodingCommandStatusType_copy(
    UMAA_SEM_H264VideoEncodingControl_H264VideoEncodingCommandStatusType* dst,
    const UMAA_SEM_H264VideoEncodingControl_H264VideoEncodingCommandStatusType* src);

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
        struct type_code< UMAA_SEM_H264VideoEncodingControl_H264VideoEncodingCommandStatusType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* H264VideoEncodingCommandStatusType */

