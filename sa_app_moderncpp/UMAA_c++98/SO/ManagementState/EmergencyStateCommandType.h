

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from EmergencyStateCommandType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef EmergencyStateCommandType_1418905428_h
#define EmergencyStateCommandType_1418905428_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "UMAA/Common/Enumeration/EnumerationSets.h"
#include "UMAA/Common/Measurement/Measurements.h"

static const DDS_Char * const UMAA_SO_ManagementState_EmergencyStateCommand_TOPIC= "UMAA::SO::ManagementState::EmergencyStateCommand";

extern "C" {

    extern const char *UMAA_SO_ManagementState_EmergencyStateCommandTypeTYPENAME;

}

struct UMAA_SO_ManagementState_EmergencyStateCommandTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_SO_ManagementState_EmergencyStateCommandTypeTypeSupport;
class UMAA_SO_ManagementState_EmergencyStateCommandTypeDataWriter;
class UMAA_SO_ManagementState_EmergencyStateCommandTypeDataReader;
#endif
class UMAA_SO_ManagementState_EmergencyStateCommandType 
{
  public:
    typedef struct UMAA_SO_ManagementState_EmergencyStateCommandTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_SO_ManagementState_EmergencyStateCommandTypeTypeSupport TypeSupport;
    typedef UMAA_SO_ManagementState_EmergencyStateCommandTypeDataWriter DataWriter;
    typedef UMAA_SO_ManagementState_EmergencyStateCommandTypeDataReader DataReader;
    #endif

    DDS_Boolean   emergencyState ;
    UMAA_Common_Measurement_NumericGUID   source ;
    UMAA_Common_Measurement_NumericGUID   destination ;
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
NDDSUSERDllExport DDS_TypeCode * UMAA_SO_ManagementState_EmergencyStateCommandType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_SO_ManagementState_EmergencyStateCommandType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_SO_ManagementState_EmergencyStateCommandType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_SO_ManagementState_EmergencyStateCommandType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_SO_ManagementState_EmergencyStateCommandTypeSeq, UMAA_SO_ManagementState_EmergencyStateCommandType);

NDDSUSERDllExport
RTIBool UMAA_SO_ManagementState_EmergencyStateCommandType_initialize(
    UMAA_SO_ManagementState_EmergencyStateCommandType* self);

NDDSUSERDllExport
RTIBool UMAA_SO_ManagementState_EmergencyStateCommandType_initialize_ex(
    UMAA_SO_ManagementState_EmergencyStateCommandType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_SO_ManagementState_EmergencyStateCommandType_initialize_w_params(
    UMAA_SO_ManagementState_EmergencyStateCommandType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_SO_ManagementState_EmergencyStateCommandType_finalize_w_return(
    UMAA_SO_ManagementState_EmergencyStateCommandType* self);

NDDSUSERDllExport
void UMAA_SO_ManagementState_EmergencyStateCommandType_finalize(
    UMAA_SO_ManagementState_EmergencyStateCommandType* self);

NDDSUSERDllExport
void UMAA_SO_ManagementState_EmergencyStateCommandType_finalize_ex(
    UMAA_SO_ManagementState_EmergencyStateCommandType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_SO_ManagementState_EmergencyStateCommandType_finalize_w_params(
    UMAA_SO_ManagementState_EmergencyStateCommandType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_SO_ManagementState_EmergencyStateCommandType_finalize_optional_members(
    UMAA_SO_ManagementState_EmergencyStateCommandType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_SO_ManagementState_EmergencyStateCommandType_copy(
    UMAA_SO_ManagementState_EmergencyStateCommandType* dst,
    const UMAA_SO_ManagementState_EmergencyStateCommandType* src);

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
        struct type_code< UMAA_SO_ManagementState_EmergencyStateCommandType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* EmergencyStateCommandType */

