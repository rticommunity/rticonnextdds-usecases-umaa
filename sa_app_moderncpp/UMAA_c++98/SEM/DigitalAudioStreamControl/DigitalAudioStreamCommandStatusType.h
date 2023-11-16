

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from DigitalAudioStreamCommandStatusType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef DigitalAudioStreamCommandStatusType_40666953_h
#define DigitalAudioStreamCommandStatusType_40666953_h

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

static const DDS_Char * const UMAA_SEM_DigitalAudioStreamControl_DigitalAudioStreamCommandStatus_TOPIC= "UMAA::SEM::DigitalAudioStreamControl::DigitalAudioStreamCommandStatus";

extern "C" {

    extern const char *UMAA_SEM_DigitalAudioStreamControl_DigitalAudioStreamCommandStatusTypeTYPENAME;

}

struct UMAA_SEM_DigitalAudioStreamControl_DigitalAudioStreamCommandStatusTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_SEM_DigitalAudioStreamControl_DigitalAudioStreamCommandStatusTypeTypeSupport;
class UMAA_SEM_DigitalAudioStreamControl_DigitalAudioStreamCommandStatusTypeDataWriter;
class UMAA_SEM_DigitalAudioStreamControl_DigitalAudioStreamCommandStatusTypeDataReader;
#endif
class UMAA_SEM_DigitalAudioStreamControl_DigitalAudioStreamCommandStatusType 
{
  public:
    typedef struct UMAA_SEM_DigitalAudioStreamControl_DigitalAudioStreamCommandStatusTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_SEM_DigitalAudioStreamControl_DigitalAudioStreamCommandStatusTypeTypeSupport TypeSupport;
    typedef UMAA_SEM_DigitalAudioStreamControl_DigitalAudioStreamCommandStatusTypeDataWriter DataWriter;
    typedef UMAA_SEM_DigitalAudioStreamControl_DigitalAudioStreamCommandStatusTypeDataReader DataReader;
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
NDDSUSERDllExport DDS_TypeCode * UMAA_SEM_DigitalAudioStreamControl_DigitalAudioStreamCommandStatusType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_SEM_DigitalAudioStreamControl_DigitalAudioStreamCommandStatusType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_SEM_DigitalAudioStreamControl_DigitalAudioStreamCommandStatusType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_SEM_DigitalAudioStreamControl_DigitalAudioStreamCommandStatusType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_SEM_DigitalAudioStreamControl_DigitalAudioStreamCommandStatusTypeSeq, UMAA_SEM_DigitalAudioStreamControl_DigitalAudioStreamCommandStatusType);

NDDSUSERDllExport
RTIBool UMAA_SEM_DigitalAudioStreamControl_DigitalAudioStreamCommandStatusType_initialize(
    UMAA_SEM_DigitalAudioStreamControl_DigitalAudioStreamCommandStatusType* self);

NDDSUSERDllExport
RTIBool UMAA_SEM_DigitalAudioStreamControl_DigitalAudioStreamCommandStatusType_initialize_ex(
    UMAA_SEM_DigitalAudioStreamControl_DigitalAudioStreamCommandStatusType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_SEM_DigitalAudioStreamControl_DigitalAudioStreamCommandStatusType_initialize_w_params(
    UMAA_SEM_DigitalAudioStreamControl_DigitalAudioStreamCommandStatusType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_SEM_DigitalAudioStreamControl_DigitalAudioStreamCommandStatusType_finalize_w_return(
    UMAA_SEM_DigitalAudioStreamControl_DigitalAudioStreamCommandStatusType* self);

NDDSUSERDllExport
void UMAA_SEM_DigitalAudioStreamControl_DigitalAudioStreamCommandStatusType_finalize(
    UMAA_SEM_DigitalAudioStreamControl_DigitalAudioStreamCommandStatusType* self);

NDDSUSERDllExport
void UMAA_SEM_DigitalAudioStreamControl_DigitalAudioStreamCommandStatusType_finalize_ex(
    UMAA_SEM_DigitalAudioStreamControl_DigitalAudioStreamCommandStatusType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_SEM_DigitalAudioStreamControl_DigitalAudioStreamCommandStatusType_finalize_w_params(
    UMAA_SEM_DigitalAudioStreamControl_DigitalAudioStreamCommandStatusType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_SEM_DigitalAudioStreamControl_DigitalAudioStreamCommandStatusType_finalize_optional_members(
    UMAA_SEM_DigitalAudioStreamControl_DigitalAudioStreamCommandStatusType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_SEM_DigitalAudioStreamControl_DigitalAudioStreamCommandStatusType_copy(
    UMAA_SEM_DigitalAudioStreamControl_DigitalAudioStreamCommandStatusType* dst,
    const UMAA_SEM_DigitalAudioStreamControl_DigitalAudioStreamCommandStatusType* src);

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
        struct type_code< UMAA_SEM_DigitalAudioStreamControl_DigitalAudioStreamCommandStatusType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* DigitalAudioStreamCommandStatusType */

