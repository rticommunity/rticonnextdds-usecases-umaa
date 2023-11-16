

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from PanTiltJointEffortCommandStatusType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef PanTiltJointEffortCommandStatusType_1508622541_h
#define PanTiltJointEffortCommandStatusType_1508622541_h

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

static const DDS_Char * const UMAA_SEM_PanTiltJointEffortControl_PanTiltJointEffortCommandStatus_TOPIC= "UMAA::SEM::PanTiltJointEffortControl::PanTiltJointEffortCommandStatus";

extern "C" {

    extern const char *UMAA_SEM_PanTiltJointEffortControl_PanTiltJointEffortCommandStatusTypeTYPENAME;

}

struct UMAA_SEM_PanTiltJointEffortControl_PanTiltJointEffortCommandStatusTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_SEM_PanTiltJointEffortControl_PanTiltJointEffortCommandStatusTypeTypeSupport;
class UMAA_SEM_PanTiltJointEffortControl_PanTiltJointEffortCommandStatusTypeDataWriter;
class UMAA_SEM_PanTiltJointEffortControl_PanTiltJointEffortCommandStatusTypeDataReader;
#endif
class UMAA_SEM_PanTiltJointEffortControl_PanTiltJointEffortCommandStatusType 
{
  public:
    typedef struct UMAA_SEM_PanTiltJointEffortControl_PanTiltJointEffortCommandStatusTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_SEM_PanTiltJointEffortControl_PanTiltJointEffortCommandStatusTypeTypeSupport TypeSupport;
    typedef UMAA_SEM_PanTiltJointEffortControl_PanTiltJointEffortCommandStatusTypeDataWriter DataWriter;
    typedef UMAA_SEM_PanTiltJointEffortControl_PanTiltJointEffortCommandStatusTypeDataReader DataReader;
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
NDDSUSERDllExport DDS_TypeCode * UMAA_SEM_PanTiltJointEffortControl_PanTiltJointEffortCommandStatusType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_SEM_PanTiltJointEffortControl_PanTiltJointEffortCommandStatusType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_SEM_PanTiltJointEffortControl_PanTiltJointEffortCommandStatusType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_SEM_PanTiltJointEffortControl_PanTiltJointEffortCommandStatusType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_SEM_PanTiltJointEffortControl_PanTiltJointEffortCommandStatusTypeSeq, UMAA_SEM_PanTiltJointEffortControl_PanTiltJointEffortCommandStatusType);

NDDSUSERDllExport
RTIBool UMAA_SEM_PanTiltJointEffortControl_PanTiltJointEffortCommandStatusType_initialize(
    UMAA_SEM_PanTiltJointEffortControl_PanTiltJointEffortCommandStatusType* self);

NDDSUSERDllExport
RTIBool UMAA_SEM_PanTiltJointEffortControl_PanTiltJointEffortCommandStatusType_initialize_ex(
    UMAA_SEM_PanTiltJointEffortControl_PanTiltJointEffortCommandStatusType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_SEM_PanTiltJointEffortControl_PanTiltJointEffortCommandStatusType_initialize_w_params(
    UMAA_SEM_PanTiltJointEffortControl_PanTiltJointEffortCommandStatusType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_SEM_PanTiltJointEffortControl_PanTiltJointEffortCommandStatusType_finalize_w_return(
    UMAA_SEM_PanTiltJointEffortControl_PanTiltJointEffortCommandStatusType* self);

NDDSUSERDllExport
void UMAA_SEM_PanTiltJointEffortControl_PanTiltJointEffortCommandStatusType_finalize(
    UMAA_SEM_PanTiltJointEffortControl_PanTiltJointEffortCommandStatusType* self);

NDDSUSERDllExport
void UMAA_SEM_PanTiltJointEffortControl_PanTiltJointEffortCommandStatusType_finalize_ex(
    UMAA_SEM_PanTiltJointEffortControl_PanTiltJointEffortCommandStatusType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_SEM_PanTiltJointEffortControl_PanTiltJointEffortCommandStatusType_finalize_w_params(
    UMAA_SEM_PanTiltJointEffortControl_PanTiltJointEffortCommandStatusType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_SEM_PanTiltJointEffortControl_PanTiltJointEffortCommandStatusType_finalize_optional_members(
    UMAA_SEM_PanTiltJointEffortControl_PanTiltJointEffortCommandStatusType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_SEM_PanTiltJointEffortControl_PanTiltJointEffortCommandStatusType_copy(
    UMAA_SEM_PanTiltJointEffortControl_PanTiltJointEffortCommandStatusType* dst,
    const UMAA_SEM_PanTiltJointEffortControl_PanTiltJointEffortCommandStatusType* src);

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
        struct type_code< UMAA_SEM_PanTiltJointEffortControl_PanTiltJointEffortCommandStatusType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* PanTiltJointEffortCommandStatusType */

